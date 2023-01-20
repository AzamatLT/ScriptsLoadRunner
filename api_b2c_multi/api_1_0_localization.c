api_1_0_localization()
{
	if (pool_get_hash(lr_eval_string("b2c.sso.notice.list.themeru_RU")) == 0) {

		web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
		web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
		web_add_cookie("token={system_token}; domain={endpoint}");

		lr_start_transaction("api_1_0_localization");
		web_url("loc",
				"URL=http://{endpoint}/api/1.0/localization?key=b2c.sso.notice.list.theme&locale=ru_RU&hash={hash_qouted}",
				"Resource=0",
				"RecContentType=text/html",
				"Referer=",
				"Mode=HTML",
				LAST);

		lr_end_transaction("api_1_0_localization", LR_AUTO);
	}
	return 0;
}
