api_request_subscription_remove()
{
	int rnd_subscription_remove = atoi(lr_eval_string("{rnd_subscription_remove}"));

	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
    web_add_cookie("token={token}; domain={endpoint}");

	if (rnd_subscription_remove > 69) {
	
	lr_start_transaction("api_request_subscription_remove");

	web_add_header("Content-Type", "application/json; charset=utf-8");

    web_custom_request("api_request_subscription_remove", 
		"URL=http://{endpoint}/api/request/subscription/remove?ctn={login}", //&userType=Mobile
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	checkResult("api_request_subscription_remove",lr_eval_string("{response}"),"",lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_request_subscription_remove", LR_AUTO);

	} else {
	
	lr_start_transaction("api_1_request_subscription_remove");

	web_add_header("X-API-Version", "1");
	web_add_header("Content-Type", "application/json; charset=utf-8");

    web_custom_request("api_1_request_subscription_remove", 
		"URL=http://{endpoint}/api/1.0/request/subscription/remove?ctn={login}", //&userType=Mobile
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	checkResult("api_1_request_subscription_remove",lr_eval_string("{response}"),"",lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_1_request_subscription_remove", LR_AUTO);

	}
	return 0;

}

