auth_xbr()
{
	int result;

	lr_start_transaction("xbr_generate_token");

	web_reg_save_param("xbrToken",     "LB=token\":\"", "RB=\"", LAST );
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
	web_add_header("X-Nokia-MSISDN" ,"7{login}" );

	web_submit_data("generate_token", 
		"Action=http://{endpoint_xbr}/xbr3/generate_token2", 
		"Method=GET", 
		"RecContentType=application/json", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

 	lr_end_transaction("xbr_generate_token", LR_AUTO);

	web_reg_save_param("token",     "LB=token\":\"", "RB=\"", LAST );
 	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);

	lr_start_transaction("api_1_0_auth_xbr");

	web_url("api_1_0_auth_xbr",
		"URL=http://{endpoint}/api/1.0/auth/xbr?xbrToken={xbrToken}",
		"Resource=1",
		"RecContentType=text/html",
		"Referer=",
		"Mode=HTML",
		LAST);


	result = checkResult("api_1_0_auth_xbr",lr_eval_string("{response}"),"",lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_1_0_auth_xbr",LR_AUTO); 
	return result;

}
