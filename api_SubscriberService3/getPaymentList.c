getPaymentList()
{

	lr_save_datetime("%Y-%m-%dT%H:%M:%S",DATE_NOW-(ONE_DAY*15),"startDate");
	lr_save_datetime("%Y-%m-%dT%H:%M:%S",DATE_NOW,"endDate");

	lr_save_datetime("%Y%m%d%H%M%S",DATE_NOW-(ONE_DAY*15),"startDate0");
	lr_save_datetime("%Y%m%d%H%M%S",DATE_NOW,"endDate0");

	if (pool_get_hash(lr_eval_string("{ban}{startDate0}{endDate0}")) == 0) {

	web_reg_save_param("response", "LB=", "RB=", LAST);
	web_reg_find("Text=<ns0:getPaymentListResponse", LAST);
	web_add_header("X-API-Sec-Token", "3JfL2pAVEKy60dd3LpXSTdp8XHWv3pG=");  //временно для 45 релиза

	lr_start_transaction("B2B_api_SubscriberService_getPaymentList");
	web_custom_request("B2B_api_SubscriberService_getPaymentList",
	"URL=http://{endpoint}/api/SubscriberService",
	//--	"URL=http://usssweb-pl03.vimpelcom.ru:81/api/SubscriberService",
		"Method=POST", 
		"EncType=text/xml"
		"TargetFrame="
		"Resource=0", 
		"Referer=",
	//"Body=<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?><soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:Subscriber\"><soapenv:Header/><soapenv:Body><urn:getPaymentList><token>{systoken}</token><hash>{hmacSha1}</hash><ban>{ban}</ban><ctn></ctn><startDate>{startDate}</startDate><endDate>{endDate}</endDate></urn:getPaymentList></soapenv:Body></soapenv:Envelope>",
	"Body=<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?><soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:Subscriber\"><soapenv:Header/><soapenv:Body><urn:getPaymentList><token>180C4B754700AF2C02C5CF94CD0A7117</token><hash></hash><ban>320890213</ban><ctn>{rel45_tmp}</ctn><startDate>{startDate}</startDate><endDate>{endDate}</endDate></urn:getPaymentList></soapenv:Body></soapenv:Envelope>",
	LAST );

	if (lr_get_transaction_status ("B2B_api_SubscriberService_getPaymentList") == LR_FAIL) {
		error_message_to_log("API_b2b_SubscriberService", 
							 "B2B_api_SubscriberService_getPaymentList", 
							 lr_eval_string("{login}"), 
							 lr_eval_string("{ban}"),
							 lr_eval_string(""), 
							 lr_eval_string("{systoken}"), 
							 lr_eval_string("{response}"), 
							 "");
		lr_end_transaction("B2B_api_SubscriberService_getPaymentList",LR_FAIL);
	} else {
		lr_end_transaction("B2B_api_SubscriberService_getPaymentList",LR_AUTO);
	}
	}

	return 0;
}
