restoreCTN()
{
	if (pool_get_hash_secret_key(lr_eval_string("{ctn_restoreCTN}20201015000000RSBO")) == 0) {

		web_reg_save_param("response", "LB=", "RB=", LAST);
		//web_add_cookie("token={token}; domain={domain_api}" );	
        web_add_header("X-API-Sec-Token", "3JfL2pAVEKy60dd3LpXSTdp8XHWv3pG=");  //временно для 45 релиза

		web_reg_find("Text=restoreCTNResponse", LAST);

		lr_start_transaction("B2B_api_SubscriberService_soapRestoreCTN"); 
		web_custom_request("getUnbilledBalances",
		"URL=http://{endpoint}/api/SubscriberService",  //было в 44, вернуть после 45 релиза
		//--"URL=http://usssweb-pl03.vimpelcom.ru:81/api/SubscriberService",
		"Method=POST", 
        "EncType=text/xml"
		"TargetFrame="
		"Resource=0", 
		"Referer=",  //строку ниже раскоментить после 45 релиза
        //"Body=<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?><soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:Subscriber\"><soapenv:Header/><soapenv:Body><urn:restoreCTN><!--Optional:--><token>{token}</token><!--Optional:--><hash>{hmacSha1}</hash><!--Optional:--><login>{ctn_restoreCTN}</login><!--Optional:--><ctn>{ctn_restoreCTN}</ctn><!--Optional:--><actvDate>2020-10-15T00:00:00</actvDate><!--Optional:--><reasonCode>RSBO</reasonCode></urn:restoreCTN></soapenv:Body>soapenv:Envelope>",
		"Body=<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?><soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:Subscriber\"><soapenv:Header/><soapenv:Body><urn:restoreCTN><!--Optional:--><token>180C4B754700AF2C02C5CF94CD0A7117</token><!--Optional:--><hash></hash><!--Optional:--><login>МЕЧТА</login><!--Optional:--><ctn>{rel45_tmp}</ctn><!--Optional:--><actvDate>2020-10-15T00:00:00</actvDate><!--Optional:--><reasonCode>RSBO</reasonCode></urn:restoreCTN></soapenv:Body>soapenv:Envelope>",
		LAST );	

		if (lr_get_transaction_status ("B2B_api_SubscriberService_soapRestoreCTN") == LR_FAIL) {
			error_message_to_log("API_b2b_SubscriberService", 
								 "B2B_api_SubscriberService_soapRestoreCTN", 
								 "", 
								 lr_eval_string("{ctn_restoreCTN}"), 
                                 lr_eval_string("{token}"), 
                                 lr_eval_string("{response}"), 
								 "",
								 "");
			lr_end_transaction("B2B_api_SubscriberService_soapRestoreCTN",LR_FAIL);
		} else {
			lr_end_transaction("B2B_api_SubscriberService_soapRestoreCTN",LR_AUTO);
		}
	}

	return 0;
}
