AddDelSOCAdd()
{

		int iy = atoi(lr_eval_string("{var_Random1000}"));
		

	if (iy<=1) {

		lr_save_string(lr_eval_string("{login2AddMn}"),"login");
		lr_save_string(lr_eval_string("{addMnBan}"),"ban");
		lr_save_string(lr_eval_string("{addMnSoc}"),"SocToAdd2");
		lr_save_string(lr_eval_string("{login2AddMn}"),"ctn");

	} else {

		lr_save_string(lr_eval_string("{SocToAdd}"),"SocToAdd2");

	}

	if (pool_get_hash(lr_eval_string("{ctn}{SocToAdd2}A{expDate0}")) == 0) {

		web_reg_save_param("response", "LB=", "RB=", LAST);
		//web_reg_find("Text=<statusDate>", LAST);

				lr_start_transaction("B2B_api_SubscriberService_addSoc");

				web_add_header("Client-Type", "API-UAT_TEST");

				web_custom_request("B2B_add_soc", 
								   "Method=POST", 
								   "EncType=text/xml"
								   "TargetFrame=", 
								   "Resource=0", 
								   "Referer=",
								   "URL=http://{endpoint}/api/SubscriberService",
								   "Body=<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?>"
								   "<soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:Subscriber\">"
								   "<soapenv:Header/><soapenv:Body>"
								   "<urn:addDelSOC>"
								   "<token>{systoken}</token>"
								   "<hash>{hmacSha1}</hash>"
								   "<login></login>"
								   "<ctn>{ctn}</ctn>"
								   "<soc>{SocToAdd2}</soc>"
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
										 lr_eval_string(""), 
										 lr_eval_string("{systoken}"), 
										 lr_eval_string("{response}"), 
										 lr_eval_string("{SocToAdd2}"),
										 "");
					lr_end_transaction("B2B_api_SubscriberService_addSoc",LR_FAIL);
				} 
				else {
					lr_end_transaction("B2B_api_SubscriberService_addSoc",LR_AUTO);
				}
				
	}

	return 0;
}
