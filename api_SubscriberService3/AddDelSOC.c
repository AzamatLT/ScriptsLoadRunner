AddDelSOC()
{

    int elemCnt,i,SocDoesntExist,st;
    char SocForDelIndex[2];
	char SocForDel[15];
	char SocForAdd[15];
	int ququ = 0;
	int iuiu = atoi(lr_eval_string("{var_Random102}"));
	int iy = atoi(lr_eval_string("{var_Random1000}"));

	lr_start_transaction("AddDelSoc");

// вызов списка доступных услуг

	web_reg_save_param("response", "LB=", "RB=", LAST);
	web_add_cookie("token={token}; domain={endpoint}" );// надо ли?
	web_reg_find("Text=availableServices", LAST );
	web_reg_save_param("socToAdd","LB=\"name\":\"", "RB=\"", LAST );
	web_reg_save_param("AddSOC", "LB=\"name\":\"", "RB=\"", "ORD=All", LAST );
	
////////////////////////////////////////////////
	ququ = 0;
	while (ququ < 5) { 
		lr_start_transaction("api_2_0_info_serviceAvailableList");
		web_url("serviceAvailable",
		"URL=http://{endpoint}/api/2.0/info/serviceAvailableList?ctn={ctn}",
		"Resource=0",
		"RecContentType=text/html",
		"Mode=HTML",
		LAST );
		if (lr_get_transaction_status ("api_2_0_info_serviceAvailableList") == LR_FAIL) {
			error_message_to_log("API_b2b_SubscriberService", 
								 "api_2_0_info_serviceAvailableList", 
								 lr_eval_string("{login}"), 
								 lr_eval_string("{ctn}"), 
								 lr_eval_string("{token}"), 
								 lr_eval_string("{response}"), 
								 "",
								 "");
			lr_end_transaction("api_2_0_info_serviceAvailableList",LR_FAIL);
		} 
		else {lr_end_transaction("api_2_0_info_serviceAvailableList",LR_AUTO);}
		/////////////////////////////////////////////////////////////////////////////////////////////
		if (iuiu <= 22) {
					lr_start_transaction("api_2_0_info_serviceAvailableList");
		web_url("serviceAvailable",
		"URL=http://{endpoint}/api/2.0/info/serviceAvailableList?ctn={ctn}",
		"Resource=0",
		"RecContentType=text/html",
		"Mode=HTML",
		LAST );
		if (lr_get_transaction_status ("api_2_0_info_serviceAvailableList") == LR_FAIL) {
			error_message_to_log("API_b2b_SubscriberService", 
								 "api_2_0_info_serviceAvailableList", 
								 lr_eval_string("{login}"), 
								 lr_eval_string("{ctn}"), 
								 lr_eval_string("{token}"), 
								 lr_eval_string("{response}"), 
								 "",
								 "");
			lr_end_transaction("api_2_0_info_serviceAvailableList",LR_FAIL);
		} 
		else {lr_end_transaction("api_2_0_info_serviceAvailableList",LR_AUTO);}
		}
		/////////////////////////////////////////////////////////////////////////////////////////////
		ququ++;
	}
/////////////////////////////////////////////
	
	lr_start_transaction("api_2_0_info_serviceAvailableList");
	web_url("serviceAvailable",
	"URL=http://{endpoint}/api/2.0/info/serviceAvailableList?ctn={ctn}",
	"Resource=0",
	"RecContentType=text/html",
	"Mode=HTML",
	LAST );
	
	if (lr_get_transaction_status ("api_2_0_info_serviceAvailableList") == LR_FAIL) {
		error_message_to_log("API_b2b_SubscriberService", 
							 "api_2_0_info_serviceAvailableList", 
							 lr_eval_string("{login}"), 
							 lr_eval_string("{ctn}"), 
							 lr_eval_string("{token}"), 
							 lr_eval_string("{response}"), 
							 "",
							 "");
		lr_end_transaction("api_2_0_info_serviceAvailableList",LR_FAIL);
	} 
// Если транзакция не зафейлилась выполняем запрос на добавление найденной услуги абоненту
	else {
		lr_end_transaction("api_2_0_info_serviceAvailableList",LR_AUTO);

		//список получен. Поиск услуги, которую можно подключить без конфликтов 
		elemCnt = atoi(lr_eval_string("{AddSOC_count}")); 
		i=1; SocDoesntExist=1;
		while (i<=elemCnt) {
			sprintf(SocForAdd, "{AddSOC_%d}", i);
			lr_save_string(lr_eval_string(SocForAdd),"SocToAdd");
			SocDoesntExist = api_1_0_info_conflict("B2B_api_SubscriberService_addSoc",lr_eval_string("{SocToAdd}"));
			if (SocDoesntExist ==0) { break;}
			i++;
		}

		//если сок для добавления существует - добавляем
		if (SocDoesntExist == 0) {
			
			web_reg_save_param("response", "LB=", "RB=", LAST);
			web_reg_find("Text=<return>", LAST );
			///////////////////////////////////////////////////////////////
			ququ = 0;
			while (ququ < 7) {
				
				lr_start_transaction("B2B_api_SubscriberService_addSoc");
				web_custom_request("B2B_add_soc", "Method=POST",  "TargetFrame=", "Resource=0", "Referer=",
								   //"URL=http://{endpoint}/api/SubscriberService",
								   "Body=<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?>"
								   "<soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:Subscriber\">"
								   "<soapenv:Header/><soapenv:Body>"
								   "<urn:addDelSOC>"
								   "<token>{token}</token>"
								   "<hash></hash>"
								   "<login></login>"
								   "<ctn>{ctn}</ctn>"
								   "<soc>{SocToAdd}</soc>"
								   "<inclusionType>A</inclusionType>"
								   "<expDate>{expDate}</expDate>"
								   "</urn:addDelSOC>"
								   "</soapenv:Body>"
								   "</soapenv:Envelope>",
								   LAST );
				
				if (lr_get_transaction_status ("B2B_api_SubscriberService_addSoc") == LR_FAIL) {
					error_message_to_log("API_b2b_SubscriberService", 
										 "B2B_api_SubscriberService_addSoc", 
										 lr_eval_string("{login}"), 
										 lr_eval_string("{ctn}"), 
										 lr_eval_string("{token}"), 
										 lr_eval_string("{response}"), 
										 lr_eval_string("{SocToAdd}"),
										 "");
					lr_end_transaction("B2B_api_SubscriberService_addSoc",LR_FAIL);
				} 
				else {
					lr_end_transaction("B2B_api_SubscriberService_addSoc",LR_AUTO);
				}
				ququ++;
			}

///////
			if (iy <= 600) {
				
				lr_start_transaction("B2B_api_SubscriberService_addSoc");
				web_custom_request("B2B_add_soc", "Method=POST",  "TargetFrame=", "Resource=0", "Referer=",
								   "URL=http://{endpoint}/api/SubscriberService",
								   "Body=<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?>"
								   "<soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:Subscriber\">"
								   "<soapenv:Header/><soapenv:Body>"
								   "<urn:addDelSOC>"
								   "<token>{token}</token>"
								   "<hash></hash>"
								   "<login></login>"
								   "<ctn>{ctn}</ctn>"
								   "<soc>{SocToAdd}</soc>"
								   "<inclusionType>A</inclusionType>"
								   "<expDate>{expDate}</expDate>"
								   "</urn:addDelSOC>"
								   "</soapenv:Body>"
								   "</soapenv:Envelope>",
								   LAST );
				
				if (lr_get_transaction_status ("B2B_api_SubscriberService_addSoc") == LR_FAIL) {
					error_message_to_log("API_b2b_SubscriberService", 
										 "B2B_api_SubscriberService_addSoc", 
										 lr_eval_string("{login}"), 
										 lr_eval_string("{ctn}"), 
										 lr_eval_string("{token}"), 
										 lr_eval_string("{response}"), 
										 lr_eval_string("{SocToAdd}"),
										 "");
					lr_end_transaction("B2B_api_SubscriberService_addSoc",LR_FAIL);
				} 
				else {
					lr_end_transaction("B2B_api_SubscriberService_addSoc",LR_AUTO);
				}
			}
/////////

		}

//если соков для добавления не существует - пишем об этом в лог
		else {
			error_message_to_log("API_b2b_SubscriberService", 
								 "B2B_api_SubscriberService_delSoc", 
								 lr_eval_string("{login}"), 
								 lr_eval_string("{ctn}"), 
								 lr_eval_string("{token}"), 
								 "", 
								 "","SOC For Add DOESN'T EXISTS");
		}
	}

// УДАЛЕНИЕ
// получаем список подключенных услуг
// 
	web_reg_save_param("response", "LB=", "RB=", LAST);
    web_reg_save_param("DelSOC", "LB=\"name\":\"", "RB=\"", "ORD=All", LAST );
	web_reg_save_param("DelSOCIndex", "LB=\"removeInd\":\"", "RB=\"", "ORD=All", LAST );

	web_reg_find("Text=OK", LAST );
	web_add_cookie("token={token}; domain={endpoint}" );
		
		ququ = 0;
		while (ququ < 7) {

				lr_output_message("%d", ququ);

					lr_start_transaction("api_1_0_info_serviceList");
					web_url("serviceList",
					"URL=http://{endpoint}/api/1.0/info/serviceList?ctn={ctn}",
					"Resource=0",
					"RecContentType=text/html",
					"Mode=HTML",
					LAST );

					if (lr_get_transaction_status ("api_1_0_info_serviceList") == LR_FAIL) {
						error_message_to_log("API_b2b_SubscriberService", 
											 "api_1_0_info_serviceList", 
											 lr_eval_string("{login}"), 
											 lr_eval_string("{ctn}"), 
											 lr_eval_string("{token}"), 
											 lr_eval_string("{response}"), 
											 "","");
						lr_end_transaction("api_1_0_info_serviceList",LR_FAIL);
						st = 1;
					// Если транзакция не зафейлилась - продолжаем
					}
					else {
						lr_end_transaction("api_1_0_info_serviceList",LR_AUTO);
						st = 0;
			}
			lr_output_message("%d", ququ);
			if (st == 0) {
			///////////////////////////////////////////////////////////////
			// найдем Сок для которого removeInd=Y
				elemCnt = atoi(lr_eval_string("{DelSOCIndex_count}")); 
				i=1; SocDoesntExist=1;
				while (i<=elemCnt) {
					lr_output_message("%d", ququ);
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
						web_reg_find("Text=<return>", LAST );
						lr_start_transaction("B2B_api_SubscriberService_delSoc");
						web_custom_request("B2B_auth", "Method=POST",  "TargetFrame=", "Resource=0", "Referer=", 
										   "URL=http://{endpoint}/api/SubscriberService", 
										   "Body=<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?>"
										   "<soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:Subscriber\">"
										   "<soapenv:Header/><soapenv:Body>"
										   "<urn:addDelSOC>"
										   "<token>{token}</token>"
										   "<ctn>{ctn}</ctn>"
										   "<soc>{SocToDel}</soc>"
										   "<inclusionType>D</inclusionType>"
										   "<expDate>{expDate}</expDate>"
										   "</urn:addDelSOC>"
										   "</soapenv:Body>"
										   "</soapenv:Envelope>", 
										   LAST ); 
						if (lr_get_transaction_status ("B2B_api_SubscriberService_delSoc") == LR_FAIL) {
							lr_save_datetime("%c",DATE_NOW,"Date");
							error_message_to_log("API_b2b_SubscriberService", 
												 "B2B_api_SubscriberService_delSoc", 
												 lr_eval_string("{login}"), 
												 lr_eval_string("{ctn}"), 
												 lr_eval_string("{token}"), 
												 lr_eval_string("{response}"), 
												 lr_eval_string("{SocToDel}"), 
												 "");
							lr_end_transaction("B2B_api_SubscriberService_delSoc",LR_FAIL);
						} else {
							lr_end_transaction("B2B_api_SubscriberService_delSoc",LR_AUTO);
						}
					}
					//если соков для удаления не существует - пишем об этом в лог
					else {
						error_message_to_log("API_b2b_SubscriberService", 
											 "B2B_api_SubscriberService_delSoc", 
												lr_eval_string("{login}"), 
												lr_eval_string("{ctn}"), 
												lr_eval_string("{token}"), 
												"", 
												"","SOC For Del DOESN'T EXISTS");
					}

				}
            lr_output_message("%d", ququ);
			ququ++;

		}


		if ( iy <= 600) { // 0.6

				lr_output_message("%d", ququ);

					lr_start_transaction("api_1_0_info_serviceList");
					web_url("serviceList",
					"URL=http://{endpoint}/api/1.0/info/serviceList?ctn={ctn}",
					"Resource=0",
					"RecContentType=text/html",
					"Mode=HTML",
					LAST );

					if (lr_get_transaction_status ("api_1_0_info_serviceList") == LR_FAIL) {
						error_message_to_log("API_b2b_SubscriberService", 
											 "api_1_0_info_serviceList", 
											 lr_eval_string("{login}"), 
											 lr_eval_string("{ctn}"), 
											 lr_eval_string("{token}"), 
											 lr_eval_string("{response}"), 
											 "","");
						lr_end_transaction("api_1_0_info_serviceList",LR_FAIL);
						st = 1;
					// Если транзакция не зафейлилась - продолжаем
					}
					else {
						lr_end_transaction("api_1_0_info_serviceList",LR_AUTO);
						st = 0;
			}
			lr_output_message("%d", ququ);
			if (st == 0) {
			///////////////////////////////////////////////////////////////
			// найдем Сок для которого removeInd=Y
				elemCnt = atoi(lr_eval_string("{DelSOCIndex_count}")); 
				i=1; SocDoesntExist=1;
				while (i<=elemCnt) {
					lr_output_message("%d", ququ);
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
						web_reg_find("Text=<return>", LAST );
						lr_start_transaction("B2B_api_SubscriberService_delSoc");
						web_custom_request("B2B_auth", "Method=POST",  "TargetFrame=", "Resource=0", "Referer=", 
										   "URL=http://{endpoint}/api/SubscriberService", 
										   "Body=<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?>"
										   "<soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:Subscriber\">"
										   "<soapenv:Header/><soapenv:Body>"
										   "<urn:addDelSOC>"
										   "<token>{token}</token>"
										   "<ctn>{ctn}</ctn>"
										   "<soc>{SocToDel}</soc>"
										   "<inclusionType>D</inclusionType>"
										   "<expDate>{expDate}</expDate>"
										   "</urn:addDelSOC>"
										   "</soapenv:Body>"
										   "</soapenv:Envelope>", 
										   LAST ); 
						if (lr_get_transaction_status ("B2B_api_SubscriberService_delSoc") == LR_FAIL) {
							lr_save_datetime("%c",DATE_NOW,"Date");
							error_message_to_log("API_b2b_SubscriberService", 
												 "B2B_api_SubscriberService_delSoc", 
												 lr_eval_string("{login}"), 
												 lr_eval_string("{ctn}"), 
												 lr_eval_string("{token}"), 
												 lr_eval_string("{response}"), 
												 lr_eval_string("{SocToDel}"), 
												 "");
							lr_end_transaction("B2B_api_SubscriberService_delSoc",LR_FAIL);
						} else {
							lr_end_transaction("B2B_api_SubscriberService_delSoc",LR_AUTO);
						}
					}
					//если соков для удаления не существует - пишем об этом в лог
					else {
						error_message_to_log("API_b2b_SubscriberService", 
											 "B2B_api_SubscriberService_delSoc", 
												lr_eval_string("{login}"), 
												lr_eval_string("{ctn}"), 
												lr_eval_string("{token}"), 
												"", 
												"","SOC For Del DOESN'T EXISTS");
					}

				}

		}


	lr_end_transaction("AddDelSoc", LR_AUTO);

	return 0;
}

