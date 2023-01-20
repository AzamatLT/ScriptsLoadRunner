LoginConsolidation()
{
	lr_start_transaction("pool_get_hash");

	web_reg_save_param_ex("ParamName=hash_qouted",
		                    "LB=<urlQuote>",
		                    "RB=</urlQuote>",
		                   LAST);
		
	web_custom_request("GetHashValue",
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
         	"		<concat>{ctn}</concat>"
      		"	</ws:getHashByConcat>"
   			"</soapenv:Body>"
			"</soapenv:Envelope>",
	        LAST);
	        
	lr_end_transaction("pool_get_hash", LR_AUTO);
	
	
	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	//web_add_cookie("token={token}; domain={endpoint}");
	web_add_cookie("token={systoken}; domain={endpoint}");
	web_add_header("Usss-Language", "ru_RU");

	lr_start_transaction("api_1_0_info_loginConsolidation");
		
	web_url("api_1_0_info_loginConsolidation",
		"URL=http://{endpoint}/api/1.0/info/loginConsolidation?hash={hash_qouted}&login={ctn}",
		"Resource=1",
		"RecContentType=text/html",
		"Referer=",
		"Mode=HTML",
		LAST);
	
	checkResult("api_1_0_info_loginConsolidation", lr_eval_string("{response}"), lr_eval_string("{token}"), lr_eval_string("{login_fttb}"), "");
	
	return 0;
}
