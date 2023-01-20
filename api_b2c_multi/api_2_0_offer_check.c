api_2_0_offer_check()
{
	if (pool_get_hash(lr_eval_string("{login}B2Cru_RUfalse")) == 0) {

		web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
		web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
		web_add_cookie("token={system_token}; domain={endpoint}");
		web_add_header("X-API-Version", "2");

		lr_start_transaction("api_2_0_offer_check");
		web_url("offer",
				"URL=http://{endpoint}/api/2.0/offer/check?login={login}&type=B2C&locale=ru_RU&offerText=false&hash={hash_qouted}",
				"Resource=0",
				"RecContentType=text/html",
				"Referer=",
				"Mode=HTML",
				LAST);

		lr_end_transaction("api_2_0_offer_check", LR_AUTO);
	}
	return 0;
}
