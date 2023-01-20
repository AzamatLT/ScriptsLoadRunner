api_request_serviceDeactivate()
{

	int elemCnt,i,SocDoesntExist;
    char SocForDelIndex[2];
	char SocForDel[15];
	char SocForAdd[15];

// получаем список подключенных услуг
// 
	web_reg_save_param("response", "LB=", "RB=", LAST);
    web_reg_save_param("DelSOC", "LB=\"name\":\"", "RB=\"", "ORD=All", LAST );
	web_reg_save_param("DelSOCIndex", "LB=\"removeInd\":\"", "RB=\"", "ORD=All", LAST );

	web_reg_find("Text=OK", LAST );
	web_add_cookie("token={token}; domain={endpoint}" );
	lr_start_transaction("api_2_0_info_serviceList");
	web_url("serviceList",
	"URL=http://{endpoint}/api/2.0/info/serviceList?ctn={login}",
	"Resource=0",
	"RecContentType=text/html",
	"Mode=HTML",
	LAST );

	if (lr_get_transaction_status ("api_2_0_info_serviceList") == LR_FAIL) {
		error_message_to_log("api_1_0_info_serviceList", 
							 lr_eval_string("{login}"), 
							 lr_eval_string("{token}"), 
							 lr_eval_string("{response}"), 
							 "","");
		lr_end_transaction("api_2_0_info_serviceList",LR_FAIL);
	// Если транзакция не зафейлилась - продолжаем
	} 
	else {
		lr_end_transaction("api_2_0_info_serviceList",LR_AUTO);

///////////////////////////////////////////////////////////////
// найдем Сок для которого removeInd=Y
	elemCnt = atoi(lr_eval_string("{DelSOCIndex_count}")); 
	i=1; SocDoesntExist=1;
	while (i<=elemCnt) {
		sprintf(SocForDelIndex, "{DelSOCIndex_%d}", i);
		SocDoesntExist = strcmp(lr_eval_string(SocForDelIndex),lr_eval_string("Y"));
		if (SocDoesntExist ==0) {break;}
		i++;
	}

// 	//если сок для удаления существует - продолжаем, иначе выход из итерации
// 	if (SocDoesntExist == 1) {  lr_exit(LR_EXIT_ACTION_AND_CONTINUE , LR_AUTO);}


//если сок для удаления существует - удаляем
		if (SocDoesntExist == 0) {

			sprintf(SocForDel, "{DelSOC_%d}", i);
			lr_save_string(lr_eval_string(SocForDel),"SocToDel");
//	///////////////////////////////////////////////////////////
			
			web_reg_save_param("response", "LB=", "RB=", LAST);
			web_reg_find("Text=requestId", LAST );
			lr_start_transaction("api_1_request_serviceDeactivate");
			web_custom_request("B2B_auth", "Method=GET",  "TargetFrame=", "Resource=0", "Referer=", 
							   "URL=http://{endpoint}/api/1.0/request/serviceDeactivate?ctn={login}&serviceName={SocToDel}", 
							   LAST ); 
			
			if (lr_get_transaction_status ("api_1_request_serviceDeactivate") == LR_FAIL) {
				lr_save_datetime("%c",DATE_NOW,"Date");
				error_message_to_log("B2B_api_SubscriberService_delSoc", 
									 lr_eval_string("{login}"), 
									 lr_eval_string("{token}"), 
									 lr_eval_string("{response}"), 
									 lr_eval_string("{SocToDel}"), 
									 "");
				lr_end_transaction("api_1_request_serviceDeactivate",LR_FAIL);
			} else {
				lr_end_transaction("api_1_request_serviceDeactivate",LR_AUTO);
			}
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

	return 0;
}
