api_change_pricePlan()
{
	int result;
	int i_login = atoi(lr_eval_string("{i_login}"));
	int emul = atoi(lr_eval_string("{var_random3}"));

	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
	web_add_cookie("token={token}; domain={endpoint}");
    web_add_header("Content-Type", "application/json");
	web_add_header("X-API-Version", "1");

	lr_start_transaction("api_change_pricePlan");

	 if ( i_login > 900) {lr_save_string(lr_eval_string("{priceplan_lego}"),"priceplan"); // chance = 10%
	 }
	 else{
		 lr_save_string(lr_eval_string("{priceplan0}"),"priceplan"); //chance = 90%
	 }

	if (emul == 1) {
	web_custom_request("api_change_pricePlan",
		"Method=PUT",
		"URL=http://{endpoint}/api/request/changePricePlan?ctn={login}&pricePlan={priceplan}",
		"Resource=1",
		"RecContentType=text/html",
		"Referer=",
		"Mode=HTML",
		LAST);
	} else if (emul == 2) {
	web_custom_request("api_change_pricePlan",
		"Method=PUT",
		"URL=http://{endpoint}/api/request/changePricePlan?ctn={login}&pricePlan={priceplan}&discountName=1TMDISC50",
		"Resource=1",
		"RecContentType=text/html",
		"Referer=",
		"Mode=HTML",
		LAST);
	} else {
	web_custom_request("api_change_pricePlan",
		"Method=PUT",
		"URL=http://{endpoint}/api/request/changePricePlan?ctn={login}&pricePlan={priceplan}&freeChange=true",
		"Resource=1",
		"RecContentType=text/html",
		"Referer=",
		"Mode=HTML",
		LAST);
	}

	result = checkResult("api_change_pricePlan",
				lr_eval_string("{response}"),
				lr_eval_string("{token}"),
				lr_eval_string("{login}"),
				lr_eval_string("{priceplan}"),
				lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_change_pricePlan", LR_AUTO);

	return result;
}
