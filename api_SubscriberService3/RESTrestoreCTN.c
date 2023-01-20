RESTrestoreCTN()
{
	if (pool_get_hash_secret_key(lr_eval_string("{ctn_restoreCTN}20201015000000RSBO")) == 0) {

		web_reg_save_param("response", "LB=", "RB=", LAST);
		web_add_cookie("token={token}; domain={endpoint}" );
		web_add_header("Usss-Language", "ru_RU");
		web_reg_find("Text=\"meta\":{\"status\":\"OK\",\"code\":20000,\"message\":null", LAST);

		lr_start_transaction("B2B_api_SubscriberService_RESTrestoreCTN");
		web_url("RESTrestoreCTN",
				"URL=http://{endpoint}/api/request/restoreCTN?ctn={ctn_restoreCTN}&actvDate=2020-10-15&block=false&reasonCode=RSBO&hash={hmacSha1}",
				"Resource=1",
				"RecContentType=text/html",
				"Referer=",
				"Mode=HTML",
				LAST);

		if (lr_get_transaction_status ("B2B_api_SubscriberService_RESTrestoreCTN") == LR_FAIL) {
			error_message_to_log("API_b2b_SubscriberService", 
								 "B2B_api_SubscriberService_RESTrestoreCTN", 
								 "", 
								 lr_eval_string("{ctn_restoreCTN}"), 
                                 lr_eval_string("{token}"), 
                                 lr_eval_string("{response}"), 
								 "",
								 "");
			lr_end_transaction("B2B_api_SubscriberService_RESTrestoreCTN",LR_FAIL);
		} else {
			lr_end_transaction("B2B_api_SubscriberService_RESTrestoreCTN",LR_AUTO);
		}
	}

	return 0;
}



