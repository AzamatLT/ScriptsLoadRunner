getRequestList()
{
	int y = atoi(lr_eval_string("{var_Random2}"));
	//int irr = atoi(lr_eval_string("{var_Random500}"));

	if (y == 1) // 50% DateTodayMidnightBefore1  50% DateTodayMidnightBefore30
	{
		//if (pool_get_hash(lr_eval_string("{login}{DateTodayMidnightBefore1_0}{DateTodayMidnight_0}")) == 0) {
		if (pool_get_hash(lr_eval_string("{login}{DateTodayMidnightBefore1_0}{DateTodayMidnight_0}")) == 0) {

		web_reg_save_param("response", "LB=", "RB=", LAST);
		web_reg_find("Text=<requestList>", LAST);
		lr_start_transaction("B2B_api_SubscriberService_getRequestList");
        
		lr_start_sub_transaction("B2B_api_SubscriberService_getRequestList_oneDay","B2B_api_SubscriberService_getRequestList");
		web_custom_request("getRequestList",
							"URL=http://{endpoint}/api/SubscriberService",
                            "Method=POST", 
							"EncType=text/xml"
							"TargetFrame="
							"Resource=0", 
							"Referer=",
                            "Body=<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?><soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:Subscriber\"><soapenv:Header/><soapenv:Body><urn:getRequestList><token>{systoken}</token><hash>{hmacSha1}</hash><login>{login}</login><startDate>{DateTodayMidnightBefore1}</startDate><endDate>{DateTodayMignight}</endDate><page>1</page><recordsPerPage>{irr}</recordsPerPage></urn:getRequestList></soapenv:Body></soapenv:Envelope>", 
						   LAST );
		lr_end_sub_transaction("B2B_api_SubscriberService_getRequestList_oneDay", LR_AUTO);

		}
	}
	else 
	{
		if (pool_get_hash(lr_eval_string("{login}{DateTodayMidnightBefore30_0}{DateTodayMidnight_0}")) == 0) {


		web_reg_save_param("response", "LB=", "RB=", LAST);
		web_reg_find("Text=<requestList>", LAST);
        
		lr_start_transaction("B2B_api_SubscriberService_getRequestList");

		lr_start_sub_transaction("B2B_api_SubscriberService_getRequestList_oneMonth","B2B_api_SubscriberService_getRequestList");
		web_custom_request("getRequestList",
						   "URL=http://{endpoint}/api/SubscriberService",
                            "Method=POST", 
							"EncType=text/xml"
							"TargetFrame="
							"Resource=0", 
							"Referer=", 
                            "Body=<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?><soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:Subscriber\"><soapenv:Header/><soapenv:Body><urn:getRequestList><token>{systoken}</token><hash>{hmacSha1}</hash><login>{login}</login><startDate>{DateTodayMidnightBefore30}</startDate><endDate>{DateTodayMignight}</endDate><page>1</page><recordsPerPage>{irr}</recordsPerPage></urn:getRequestList></soapenv:Body></soapenv:Envelope>", 
						   LAST );
		lr_end_sub_transaction("B2B_api_SubscriberService_getRequestList_oneMonth", LR_AUTO);

		}
	}


	if (lr_get_transaction_status ("B2B_api_SubscriberService_getRequestList") == LR_FAIL) {
		error_message_to_log("API_b2b_SubscriberService", 
							 "B2B_api_SubscriberService_getRequestList", 
							 lr_eval_string("{login}"), 
							 lr_eval_string(""), 
							 lr_eval_string("{token}"), 
							 lr_eval_string("{response}"), 
							 "",
							 "");
		lr_end_transaction("B2B_api_SubscriberService_getRequestList",LR_FAIL);
	} else {
		lr_end_transaction("B2B_api_SubscriberService_getRequestList",LR_AUTO);
	}


	return 0;
}
//<startDate>{DateTodayMidnightBefore1}</startDate><endDate>{DateTodayMignight}</endDate>
//<startDate>{DateTodayMidnightBefore30}</startDate><endDate>{DateTodayMignight}</endDate>
