api_request_list()
{
	int rnd_list = atoi(lr_eval_string("{rnd_list}"));

	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
    web_add_cookie("token={token}; domain={endpoint}");

	if (rnd_list > 730) {
	
	lr_start_transaction("api_2_request_list");

	web_add_header("X-API-Version", "2");
	web_add_header("Content-Type", "application/json; charset=utf-8");

    web_custom_request("api_request_list", 
		"URL=http://{endpoint}/api/2.0/request/list?login={login}", //&userType=Mobile
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"Body={}",
		LAST);

	checkResult("api_2_request_list",lr_eval_string("{response}"),"",lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_2_request_list", LR_AUTO);

	} else if (rnd_list > 151) {

	lr_start_transaction("api_1_request_list");

	web_add_header("X-API-Version", "1");
	web_add_header("Content-Type", "application/json; charset=utf-8");

    web_custom_request("api_request_list", 
		"URL=http://{endpoint}/api/1.0/request/list?login={login}", //&userType=Mobile
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"Body={}",
		LAST);

	checkResult("api_1_request_list",lr_eval_string("{response}"),"",lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_1_request_list", LR_AUTO);

	} else {

	lr_start_transaction("api_request_list");

	web_add_header("X-API-Version", "1");
	web_add_header("Content-Type", "application/json; charset=utf-8");

    web_custom_request("api_request_list", 
		"URL=http://{endpoint}/api/request/list?login={login}", //&userType=Mobile
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"Body={}",
		LAST);

	checkResult("api_request_list",lr_eval_string("{response}"),"",lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_request_list", LR_AUTO);


	}
	return 0;

}
