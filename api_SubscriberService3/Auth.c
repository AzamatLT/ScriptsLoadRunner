Auth()
{

	web_reg_save_param("token","LB=<return>", "RB=<", LAST );
    web_reg_save_param("response", "LB=", "RB=", LAST);
	web_add_auto_header("Content-Type", "text/xml;charset=UTF-8");

    lr_start_transaction("B2B_api_AuthService");
	web_custom_request("B2B_auth", "Method=POST",  "TargetFrame=", "Resource=0", "Referer=", 
    "URL=http://{endpoint}/api/AuthService", 
    "Body=<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?><soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:Auth\"><soapenv:Header/><soapenv:Body><urn:auth><login>{login}</login><password>{pass}</password></urn:auth></soapenv:Body></soapenv:Envelope>", 
    LAST );

	if (lr_get_transaction_status ("B2B_api_AuthService") == LR_FAIL) {
		error_message_to_log("API_b2b_SubscriberService", 
							 "B2B_api_AuthService", 
							 lr_eval_string("{login}"), 
							 "", 
							 "", 
							 lr_eval_string("{response}"), 
							 "",
							 "");
		lr_end_transaction("B2B_api_AuthService",LR_FAIL);
		return -1;

	} else {
		lr_end_transaction("B2B_api_AuthService",LR_AUTO);
	}

	return 0;
}
