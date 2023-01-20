api_1_0_offer_check()
{
	//if (auth_sys()) {

		web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
		web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
		web_add_cookie("token={token}; domain={endpoint}");

		lr_start_transaction("api_1_0_offer_check");
		web_url("offer",
				"URL=http://{endpoint}/api/1.0/offer/check?login={login}&type=B2C&locale=ru_RU&offerText=false&hash=",
				"Resource=0",
				"RecContentType=text/html",
				"Referer=",
				"Mode=HTML",
				LAST);

		lr_end_transaction("api_1_0_offer_check", LR_AUTO);
//	}
	return 0;
}
