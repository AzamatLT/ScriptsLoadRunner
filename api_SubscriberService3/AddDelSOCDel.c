AddDelSOCDel()
{
	int iy = atoi(lr_eval_string("{var_Random1000}"));

	if (iy<=300) {

		lr_save_string(lr_eval_string("{login2delMN}"),"login");
		lr_save_string(lr_eval_string("{mnBan}"),"ban");
		lr_save_string(lr_eval_string("{MN2del}"),"SocToDel2");
		lr_save_string(lr_eval_string("{login2delMN}"),"ctn");

	} else {

		lr_save_string(lr_eval_string("{SocToDel}"),"SocToDel2");

	}

	if (pool_get_hash(lr_eval_string("{ctn}{SocToDel2}D{expDate0}")) == 0) {

		web_reg_save_param("response", "LB=", "RB=", LAST);
		//web_reg_find("Text=<statusDate>", LAST);

				lr_start_transaction("B2B_api_SubscriberService_delSoc");
				web_custom_request("B2B_del_soc", 
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
								   "<soc>{SocToDel2}</soc>"
								   "<inclusionType>D</inclusionType>"
								   "<expDate>{expDate}</expDate>"
								   "</urn:addDelSOC>"
								   "</soapenv:Body>"
								   "</soapenv:Envelope>",
								   LAST );
				
				 
				
				
	 			if (lr_get_transaction_status ("B2B_api_SubscriberService_delSoc") == LR_FAIL) {
					error_message_to_log("API_b2b_SubscriberService", 
										 "B2B_api_SubscriberService_delSoc", 
										 lr_eval_string("{login}"), 
										 lr_eval_string(""), 
										 lr_eval_string("{systoken}"), 
										 lr_eval_string("{response}"), 
										 lr_eval_string("{SocToDel2}"),
										 "");
					lr_end_transaction("B2B_api_SubscriberService_delSoc",LR_FAIL);
				} 
				else {
					lr_end_transaction("B2B_api_SubscriberService_delSoc",LR_AUTO);
				}
				 
	}

	return 0;
}
