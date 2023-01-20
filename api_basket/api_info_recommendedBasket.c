api_info_recommendedBasket()
{
	int result;
	int i_login = atoi(lr_eval_string("{var_Random1000}"));
	int emul = atoi(lr_eval_string("{var_random2}"));

	lr_start_transaction("api_info_recommendedBasket");

	if ( i_login > 900) {lr_save_string(lr_eval_string("{priceplan_lego}"),"priceplan"); // chance = 10%
	 }
	 else{
		 lr_save_string(lr_eval_string("{priceplan0}"),"priceplan"); //chance = 90%
	 }
	if (pool_get_hash(lr_eval_string("{login}{priceplan}")) == 0) {

			web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
			web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
			web_add_cookie("token={sysTokenPL}; domain={endpoin}");
			web_add_header("Content-Type", "application/json");
			web_add_header("Client-Type", "API-UAT_TEST");
			web_add_header("X-API-Version", "1");

			if (emul == 1) {
				web_custom_request("api_info_recommendedBasket",
								   "Method=PUT",
								   "URL=http://{endpoint}/api/info/recommendedBasket?ctn={login}&pricePlanName={priceplan}&hash={hash_qouted}",
								   "Resource=1",
								   "RecContentType=text/html",
								   "Referer=",
								   "Mode=HTML",
								   "Body={\"socsOff\":[],\"socsOn\":[\"03PCB\"]}",				   
								   LAST);
			} else {
				web_custom_request("api_info_recommendedBasket",
								   "Method=PUT",
								   "URL=http://{endpoint}/api/info/recommendedBasket?ctn={login}&pricePlanName={priceplan}&freeChange=true&hash={hash_qouted}",
								   "Resource=1",
								   "RecContentType=text/html",
								   "Referer=",
								   "Mode=HTML",
								   "Body={\"socsOff\":[],\"socsOn\":[\"03PCB\"]}",
								   LAST);
			}
	}
	result = checkResult("api_info_recommendedBasket",
				lr_eval_string("{response}"),
				lr_eval_string("{sysTokenPL}"),
				lr_eval_string("{login}"),
				lr_eval_string("{priceplan}"),
				lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_info_recommendedBasket", LR_AUTO);
    
	return result;
}
