api_2_0_info_tveSubscriptions()
{
	if (pool_get_hash(lr_eval_string("{login}")) == 0) {

		web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
		web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
		web_add_cookie("token={system_token}; domain={endpoint}");
		web_add_header("X-API-Version", "2");

		lr_start_transaction("api_2_0_info_tveSubscriptions");

		web_url("api_2_0_info_tveSubscriptions",
				"URL=http://{endpoint}/api/2.0/info/tveSubscriptions?ctn={login}&hash={hash_qouted}",
				"Resource=1",
				"RecContentType=text/html",
				"Referer=",
				"Mode=HTML",
				LAST);

		lr_end_transaction("api_2_0_info_tveSubscriptions", LR_AUTO);
	}
	return 0;
}
