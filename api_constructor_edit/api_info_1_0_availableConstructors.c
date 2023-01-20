api_info_1_0_availableConstructors()
{
	if (pool_get_hash(lr_eval_string("{login}{price}")) == 0) {

		web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
		web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
		web_add_cookie("token={system_token}; domain={endpoin}");

		lr_start_transaction("api_1_0_info_availableConstructors");
		web_url("api_1_0_info_availableConstructors",
				"URL=http://{endpoint}/api/1.0/info/availableConstructors?ctn={login}&pricePlanName={price}&hash={hash_qouted}",
				"Resource=0",
				"RecContentType=text/html",
				"Referer=",
				"Mode=HTML",
				LAST);

		checkResult("api_1_0_info_availableConstructors",lr_eval_string("{response}"),lr_eval_string("{token}"),lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
		lr_end_transaction("api_1_0_info_availableConstructors", LR_AUTO);
	}
	return 0;
}
