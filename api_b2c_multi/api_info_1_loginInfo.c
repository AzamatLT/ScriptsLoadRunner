api_info_1_loginInfo()
{
	if (pool_get_hash(lr_eval_string("{login}")) == 0) {

	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
    web_add_cookie("token={system_token}; domain={endpoint}");
	web_add_header("Usss-Language", "ru_RU");

	lr_start_transaction("api_info_1_loginInfo");

	web_custom_request("api_info_1_loginInfo",
		"URL=http://{endpoint}/api/1.0/info/loginInfo?login={login}&hash={hash_qouted}",
			"Method=GET", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=", 
			"Snapshot=t25.inf", 
			"Mode=HTML", 
			LAST);

	lr_end_transaction("api_info_1_loginInfo", LR_AUTO);
	}
return 0;

}
