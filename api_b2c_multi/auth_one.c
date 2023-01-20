auth_one()
{
	int result;

 	web_reg_save_param("token","LB=\"token\":\"", "RB=\"", LAST );
 	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);

	web_add_header("X-API-Version", "1");
    web_add_header("Content-Type", "application/json; charset=utf-8");

	lr_start_transaction("api_1_0_auth_GET");

    web_custom_request("api_1_0_auth_GET", 
 		"URL=http://{endpoint}/api/1.0/auth/auth?login={login}&password={pass}",
 		"Resource=1",
 		"RecContentType=text/html",
 		"Referer=",
 		"Mode=HTML",
 		 LAST);

	result = checkResult("api_1_0_auth_GET",lr_eval_string("{response}"),"",lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_1_0_auth_GET",LR_AUTO); 
	return result;
}

