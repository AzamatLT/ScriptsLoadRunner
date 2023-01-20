api_1_0_info_userNotifications()
{
	if (pool_get_hash(lr_eval_string("{login}")) == 0) {

		web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
		web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
		web_add_cookie("token={system_token}; domain={endpoint}");

		lr_start_transaction("api_1_0_info_userNotifications");

		web_url("auth",
				"URL=http://{endpoint}/api/1.0/info/userNotifications?login={login}&hash={hash_qouted}",
				"Resource=1",
				"RecContentType=text/html",
				"Referer=",
				"Mode=HTML",
				LAST);

	lr_end_transaction("api_1_0_info_userNotifications", LR_AUTO);
	}
	return 0;
}
