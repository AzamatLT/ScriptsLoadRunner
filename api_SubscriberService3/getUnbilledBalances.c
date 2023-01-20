getUnbilledBalances()
{
	if (pool_get_hash(lr_eval_string("")) == 0) {

		web_reg_save_param("response", "LB=", "RB=", LAST);
		//web_add_cookie("token={token}; domain={domain_api}" );	
		web_reg_find("Text=<rc>", LAST);
		web_add_header("X-API-Sec-Token", "3JfL2pAVEKy60dd3LpXSTdp8XHWv3pG=");  //временно для 45 релиза

		lr_start_transaction("B2B_api_SubscriberService_getUnbilledBalances");
		web_custom_request("getUnbilledBalances",
		"URL=http://{endpoint}/api/SubscriberService",
		//--"URL=http://usssweb-pl03.vimpelcom.ru:81/api/SubscriberService", //временно для 45 релиза
		"Method=POST", 
		"EncType=text/xml"
		"TargetFrame="
		"Resource=0", 
		"Referer=", 
		//"Body=<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?><soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:Subscriber\"><soapenv:Header/><soapenv:Body><urn:getUnbilledBalances><token>{systoken}</token><hash>{hmacSha1}</hash><ctn></ctn></urn:getUnbilledBalances></soapenv:Body></soapenv:Envelope>",
		"Body=<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?><soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:Subscriber\"><soapenv:Header/><soapenv:Body><urn:getUnbilledBalances><token>180C4B754700AF2C02C5CF94CD0A7117</token><hash></hash><ctn>{rel45_tmp}</ctn></urn:getUnbilledBalances></soapenv:Body></soapenv:Envelope>", 
		LAST );	

		if (lr_get_transaction_status ("B2B_api_SubscriberService_getUnbilledBalances") == LR_FAIL) {
		error_message_to_log("API_b2b_SubscriberService", 
							 "B2B_api_SubscriberService_getUnbilledBalances", 
							 lr_eval_string("{login}"), 
							 lr_eval_string(""), 
							 lr_eval_string("{systoken}"), 
							 lr_eval_string("{response}"), 
							 "",
							 "");
			lr_end_transaction("B2B_api_SubscriberService_getUnbilledBalances",LR_FAIL);
		} else {
			lr_end_transaction("B2B_api_SubscriberService_getUnbilledBalances",LR_AUTO);
		}
	}

	return 0;
}
