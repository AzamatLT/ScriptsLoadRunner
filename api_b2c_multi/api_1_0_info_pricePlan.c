api_1_0_info_pricePlan()
{
	if (pool_get_hash(lr_eval_string("{login}")) == 0) {

    	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
		web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
		web_add_cookie("token={system_token}; domain={endpoint}");

        lr_start_transaction("api_1_0_info_pricePlan");
		web_url("pp",
			"URL=http://{endpoint}/api/1.0/info/pricePlan?ctn={login}&hash={hash_qouted}",
			"Resource=0",
			"RecContentType=text/html",
			"Referer=",
			"Mode=HTML",
			LAST);

	checkResult("api_1_0_info_pricePlan",lr_eval_string("{response}"),lr_eval_string("{system_token}"),lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_1_0_info_pricePlan", LR_AUTO);
	}
	return 0;
}
