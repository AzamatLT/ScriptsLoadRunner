api_request_requestDetails()
{
	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
	
    web_add_cookie("token={token}; domain={endpoint}");
	
	lr_start_transaction("api_1_request_requestDetails");

	web_add_header("Content-Type", "application/json; charset=utf-8");

    web_custom_request("api_1_request_requestDetails", 
		"URL=http://{endpoint}/api/1.0/request/requestDetails?requestId={reqid_serviceActivate}", //&userType=Mobile
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	checkResult("api_1_request_requestDetails",lr_eval_string("{response}"),"",lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_1_request_requestDetails", LR_AUTO);

	return 0;
}
