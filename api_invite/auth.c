auth()
{
	int result;

 	web_reg_save_param("token","LB=\"token\":\"", "RB=\"", LAST );
 	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
	web_add_header("X-API-Version", "2");
    web_add_header("Content-Type", "application/json; charset=utf-8");

	lr_start_transaction("api_2_0_auth_auth_PUT");

    web_custom_request("api_2_0_auth_auth_PUT", 
		"URL=http://{endpoint}/api/2.0/auth/auth?login={login}&userType=Mobile", 
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"Body={\"password\":\"{pass}\"}",
		LAST);

	result = checkResult("api_2_0_auth_auth_PUT",lr_eval_string("{response}"),"",lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_2_0_auth_auth_PUT",LR_AUTO); 
	return result;

}
