ServiceDeactivate() {

	int elemCnt,i,SocDoesntExist;
    char SocForDelIndex[2];
	char SocForDel[15];
	char SocForAdd[15];

	// получаем список подключенных услуг

	ServiceList();

	// если непустой список получен
	if (strcmp(lr_eval_string("{DelSOC_count}"), "0") > 0) {
		
		// найдем Сок для которого removeInd=Y
		elemCnt = atoi(lr_eval_string("{DelSOCIndex_count}")); 
		SocDoesntExist = 1;
		i = 1;
		while (i <= elemCnt) {
			sprintf(SocForDelIndex, "{DelSOCIndex_%d}", i);
			SocDoesntExist = strcmp(lr_eval_string(SocForDelIndex), lr_eval_string("Y"));
			if (SocDoesntExist ==0) {
				break;
			}
			i++;
		}

		// 	//если сок для удаления существует - продолжаем, иначе выход из итерации
		// 	if (SocDoesntExist == 1) {  lr_exit(LR_EXIT_ACTION_AND_CONTINUE , LR_AUTO);}


		//если сок для удаления существует - удаляем
		if (SocDoesntExist == 0) {

			sprintf(SocForDel, "{DelSOC_%d}", i);
			lr_save_string(lr_eval_string(SocForDel),"SocToDel");
			///////////////////////////////////////////////////////////
			
			
			lr_start_transaction("pool_get_hash");

			web_reg_save_param_ex("ParamName=hash_qouted",
				                    "LB=<urlQuote>",
				                    "RB=</urlQuote>",
				                   LAST);
				
			web_custom_request("GetHashValue",
					"URL={HashGen_ServerPath}",
					"Method=POST",
			        "Resource=0",
			        "Referer=",
			        "EncType=text/xml; charset=UTF-8",
			        "Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?>"
			        "<soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:ws=\"http://ws.hashgen.bellintegrator.ru/\">"
		   			"<soapenv:Header/>"
		   			"<soapenv:Body>"
		      		"	<ws:getHashByConcat>"
		         	"		<concat>{login}{SocToDel}</concat>" //ctn, serviceName, effDate
		      		"	</ws:getHashByConcat>"
		   			"</soapenv:Body>"
					"</soapenv:Envelope>",
			        LAST);
			        
			lr_end_transaction("pool_get_hash", LR_AUTO);
				
				
			web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
			web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
			web_reg_find("Text=requestId", LAST);
			
			lr_start_transaction("api_1_0_request_serviceDeactivate");
			
			web_custom_request("api_1_0_request_serviceDeactivate", 
			                   "URL=http://{endpoint}/api/1.0/request/serviceDeactivate?hash={hash_qouted}&ctn={login}&serviceName={SocToDel}",
			                   "Method=GET",  
			                   "TargetFrame=", 
			                   "Resource=0", 
			                   "Referer=",
							   LAST );
			
			checkResult("api_1_0_request_serviceDeactivate",lr_eval_string("{response}"),lr_eval_string("{token}"),lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
		}
		//если соков для удаления не существует - пишем об этом в лог
		else {
			error_message_to_log("api_1_request_serviceDeactivate", 
									lr_eval_string("{login}"), 
									lr_eval_string("{token}"), 
									"", 
									"","SOC For Del DOESN'T EXISTS");
		}
	} 
	else {
		
		error_message_to_log("api_1_0_info_serviceList", 
							 lr_eval_string("{login}"), 
							 lr_eval_string("{token}"), 
							 lr_eval_string("{response}"), 
							 "","");
		lr_end_transaction("api_2_0_info_serviceList",LR_FAIL);
		
		
	}

	return 0;
}
