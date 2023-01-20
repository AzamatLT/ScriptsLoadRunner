api_request_basket()
{

	int result;
	int i_login = atoi(lr_eval_string("{var_Random1000}"));
	int emul = atoi(lr_eval_string("{var_random2}"));

	lr_start_transaction("api_request_basket");

    if ( i_login > 600) {lr_save_string(lr_eval_string("{priceplan_lego}"),"priceplan"); // chance = 40%
	 }
	 else{
		 lr_save_string(lr_eval_string("{priceplan0}"),"priceplan"); //chance = 60%
	 }
	if (pool_get_hash(lr_eval_string("{login}{priceplan}")) == 0) {

			web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
			web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
			web_add_cookie("token={sysTokenPL}; domain={endpoin}");
			web_add_header("Content-Type", "application/json");
			web_add_header("Client-Type", "API-UAT_TEST");
			web_add_header("X-API-Version", "1");

			if (emul == 1) {
			web_custom_request("api_request_basket",
							   "Method=PUT",
							   "URL=http://{endpoint}/api/request/basket?ctn={login}&pricePlanName={priceplan}&hash={hash_qouted}",
							   "Resource=1",
							   "RecContentType=text/html",
							   "Referer=",
							   "Mode=HTML",
							   "Body={\"socsOff\":[],\"socsOn\":[\"03PCB\"]}",
							   LAST);
			
			} else {
			web_custom_request("api_request_basket",
							   "Method=PUT",
							   "URL=http://{endpoint}/api/request/basket?ctn={login}&pricePlanName={priceplan}&freeChange=true&hash={hash_qouted}",
							   "Resource=1",
							   "RecContentType=text/html",
							   "Referer=",
							   "Mode=HTML",
							   "Body={\"socsOff\":[],\"socsOn\":[\"03PCB\"]}",
							   LAST);
			}
	}
	result = checkResult("api_request_basket",
				lr_eval_string("{response}"),
				lr_eval_string("{sysTokenPL}"),
				lr_eval_string("{login}"),
				lr_eval_string("{priceplan}"),
				lr_eval_string("{fullresponse}"));

	lr_end_transaction("api_request_basket", LR_AUTO);

	return result;
}
