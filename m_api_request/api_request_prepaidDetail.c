api_request_prepaidDetail()
{
	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
    web_add_cookie("token={token}; domain={endpoint}");

	web_reg_save_param_ex("ParamName=reqid_prepaidDetail", "LB=\"requestId\":", "RB=}", LAST);


	lr_start_transaction("api_1_request_prepaidDetail");

	web_add_header("Content-Type", "application/json; charset=utf-8");

    web_custom_request("api_1_request_prepaidDetail", 
		"URL=http://{endpoint}/api/request/prepaidDetail?ctn={login}&startDate={startDate}&endDate={endDate}&reportType={reportType}", //&userType=Mobile
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	checkResult("api_1_request_prepaidDetail",lr_eval_string("{response}"),"",lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_1_request_prepaidDetail", LR_AUTO);

	return 0;
}
