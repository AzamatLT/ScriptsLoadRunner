api_request_serviceDeactivate()

{

	int iy = atoi(lr_eval_string("{rnd1000}"));

	if (iy<=300) {

		lr_save_string(lr_eval_string("{mnSoc}"),"serviceName2");
		lr_save_string(lr_eval_string("{ctn2delMn}"),"ctn2");

	} else {

		lr_save_string(lr_eval_string("{serviceName}"),"serviceName2");
		lr_save_string(lr_eval_string("{ctn}"),"ctn2");

	}

	if (pool_get_hash(lr_eval_string("{ctn2}{serviceName2}")) == 0) {


	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_add_cookie("token={systoken}; domain={endpoint}");
	web_add_header("Usss-Language", "ru_RU");
	web_add_header("Content-Type", "application/json");


	lr_start_transaction("api_request_serviceDeactivate");

        web_custom_request("api_request_serviceDeactivate",
    		"Method=GET",
    		"URL=http://{endpoint}/api/request/serviceDeactivate?ctn={ctn2}&serviceName={serviceName2}&hash={hash_qouted}",
    		"Resource=1",
    		"RecContentType=application/json",
    		"Referer=",
    		"Mode=HTML",
    		LAST);

 	if(!strcmp(lr_eval_string("{response}") , "\"status\":\"OK\",\"code\":20000,\"message\":null")==0) {
		error_message_to_log("api_request_serviceDeactivate",
							 lr_eval_string("{ctn2}"), 
							 lr_eval_string("{systoken}"), 
							 lr_eval_string("{response}"), 
							 "",
							 "",
							 "",
							 "");
        lr_end_transaction("api_request_serviceDeactivate", LR_FAIL);
	} else {
		lr_end_transaction("api_request_serviceDeactivate", LR_AUTO);
	}
	}
	return 0;

}

