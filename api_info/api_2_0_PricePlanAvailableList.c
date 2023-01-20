api_2_0_PricePlanAvailableList()
{
	int i = atoi(lr_eval_string("{var_random2}"));

	lr_start_transaction("pool_get_hash");

	web_reg_save_param_ex("ParamName=hash_qouted",
		                    "LB=<urlQuote>",
		                    "RB=</urlQuote>",
		                   LAST);
		
	web_custom_request("GetNextMsisdnValue",
			"URL={HashGen_ServerPath}",
			"Method=POST",
	        "Resource=0",
	        "Referer=",
	        "EncType=text/xml; charset=UTF-8",
	        "Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?>"
	        "<soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:ws=\"http://ws.hashgen.bellintegrator.ru/\">"
   			"<soapenv:Header/>"
   			"<soapenv:Body>"
      		"	<ws:getHashByConcat>"
         	"		<concat>{ctn}</concat>" //ctn, socList, nonPublic, showPublicInd
      		"	</ws:getHashByConcat>"
   			"</soapenv:Body>"
			"</soapenv:Envelope>",
	        LAST);
	        
	lr_end_transaction("pool_get_hash", LR_AUTO);
	
	lr_start_transaction("api_2_0_info_pricePlanAvailableList");
	
	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=pricePlanCode", "LB={\"name\":\"", "RB=\",",	LAST);
	//web_add_cookie("token={token}; domain={endpoint}");
	web_add_cookie("token={systoken}; domain={endpoin}");
	web_add_header("Usss-Language", "ru_RU");
	//web_add_header("X-API-Token", "{token}");
	
	if (i<2) {
		web_url("api_2_0_info_pricePlanAvailableList",
		"URL=http://{endpoint}/api/2.0/info/pricePlanAvailableList?ctn={ctn}&hash={hash_qouted}&channelType={channelType}",
        "Resource=1",
		"RecContentType=text/html",
		"Referer=",
		"Mode=HTML",
		LAST);
	}
	else {
		web_url("api_2_0_info_pricePlanAvailableList",
		"URL=http://{endpoint}/api/2.0/info/pricePlanAvailableList?ctn={ctn}&hash={hash_qouted}",
        "Resource=1",
		"RecContentType=text/html",
		"Referer=",
		"Mode=HTML",
		LAST);
	}


	checkResult("api_2_0_info_pricePlanAvailableList", lr_eval_string("{response}"), lr_eval_string("{token}"), lr_eval_string("{ctn}"), "");
	
	return 0;
}
