api_1_0_info_smartPricePlan()
{
	if (pool_get_hash(lr_eval_string("{ctn_smart}")) == 0) {

		web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
		web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
		web_add_cookie("token={system_token}; domain={endpoin}");
		//web_add_header("X-API-Version", "1");

		lr_start_transaction("info_1_0_smartPricePlan");
		web_url("smartPricePlan",
				"URL=http://{endpoint}/api/1.0/info/smartPricePlan?ctn={ctn_smart}&hash={hash_qouted}",
				"Resource=0",
				"RecContentType=text/html",
				"Mode=HTML",
				LAST );

		//lr_end_transaction("info_1_0_smartPricePlan", LR_AUTO);
	}
		if (strcmp(lr_eval_string("{response}"),"")!=0)
	{
		lr_end_transaction("info_1_0_smartPricePlan", LR_PASS);
	}
	else
	{
		lr_convert_string_encoding(lr_eval_string("   "),LR_ENC_UTF8 ,LR_ENC_SYSTEM_LOCALE,"to");
	//	lr_message("CTN:%s, [%s]", lr_eval_string("{ctn}"),lr_eval_string("{to}"));
		lr_end_transaction("info_1_0_smartPricePlan", LR_FAIL);
	}
	return 0;
}
