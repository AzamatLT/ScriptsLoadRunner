auth_sys()
{
	int result;

 	web_reg_save_param("token","LB=\"token\":\"", "RB=\"", LAST );
 	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
	web_add_header("X-API-Version", "1");
    web_add_header("Content-Type", "application/json; charset=utf-8");
    web_add_cookie("token={system_token}; domain={endpoint}");

	lr_start_transaction("api_auth_by_systoken_GET");

	web_custom_request("api_1_0_auth_by_systoken_GET", 
			"URL=http://{endpoint}/api/auth/authBySysToken?ctn={login}&hash={hash}", 
			"Method=GET", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=", 
			"Snapshot=t25.inf", 
			"Mode=HTML", 
			LAST);

	result = checkResult("api_auth_by_systoken_GET",lr_eval_string("{response}"),"",lr_eval_string("{login_sys}"),lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_auth_by_systoken_GET",LR_AUTO);

	return result;
}
