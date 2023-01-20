getUnbilledCallsList()
{
	if (pool_get_hash(lr_eval_string("")) == 0) {

	web_reg_save_param("response", "LB=", "RB=", LAST);
	//web_reg_find("Text=<callDate>", LAST ); //нахера?! юзер мог и не совершать вызовов, 200 ответа вполне достаточно
	web_add_header("X-API-Sec-Token", "3JfL2pAVEKy60dd3LpXSTdp8XHWv3pG=");  //временно для 45 релиза

	lr_start_transaction("B2B_api_SubscriberService_getUnbilledCallsList");
	web_custom_request("getUnbilledCallsList",
	"URL=http://{endpoint}/api/SubscriberService",
	//--	"URL=http://usssweb-pl03.vimpelcom.ru:81/api/SubscriberService", //временно для 45 релиза
		"Method=POST", 
		"EncType=text/xml"
		"TargetFrame="
		"Resource=0", 
		"Referer=",  
	//"Body=<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?><soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:Subscriber\"><soapenv:Header/><soapenv:Body><urn:getUnbilledCallsList><token>{systoken}</token><hash>{hmacSha1}</hash><ctn></ctn></urn:getUnbilledCallsList></soapenv:Body></soapenv:Envelope>", 
	"Body=<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?><soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:Subscriber\"><soapenv:Header/><soapenv:Body><urn:getUnbilledCallsList><token>180C4B754700AF2C02C5CF94CD0A7117</token><hash></hash><ctn>{rel45_tmp}</ctn></urn:getUnbilledCallsList></soapenv:Body></soapenv:Envelope>", 
	LAST ); 

	if (lr_get_transaction_status ("B2B_api_SubscriberService_getUnbilledCallsList") == LR_FAIL) {
		error_message_to_log("API_b2b_SubscriberService", 
							 "B2B_api_SubscriberService_getUnbilledCallsList", 
							 lr_eval_string("{login}"), 
							 lr_eval_string(""), 
							 lr_eval_string("{token}"), 
							 lr_eval_string("{response}"), 
							 "",
							 "");
		lr_end_transaction("B2B_api_SubscriberService_getUnbilledCallsList",LR_FAIL);
	} else {
		lr_end_transaction("B2B_api_SubscriberService_getUnbilledCallsList",LR_AUTO);
	}
	}

	return 0;
}
