OnlineBillDetail(int apiVersion)
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
         	"		<concat>{ctn}{concat_period_start}{concat_period_end}</concat>"
      		"	</ws:getHashByConcat>"
   			"</soapenv:Body>"
			"</soapenv:Envelope>",
	        LAST);
	        
	lr_end_transaction("pool_get_hash", LR_AUTO);
	
	
	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	//web_add_cookie("token={token}; domain={endpoint}");
	web_add_cookie("token={systoken}; domain={endpoint}");
	web_add_header("Usss-Language", "ru_RU");
	web_add_header("X-API-Token", "{token}");
		
	if(apiVersion == 20) {
		lr_start_transaction("api_2_0_info_onlineBillDetail");
			
		web_url("api_2_0_info_onlineBillDetail",
			"URL=http://{endpoint}/api/2.0/info/onlineBillDetail?ctn={ctn}&periodStart={period_start}&periodEnd={period_end}&hash={hash_qouted}",
			"Resource=1",
			"RecContentType=text/html",
			"Referer=",
			"Mode=HTML",
			LAST);
		
		checkResult("api_2_0_info_onlineBillDetail", lr_eval_string("{response}"), lr_eval_string("{token}"), lr_eval_string("{ctn}"), "");
	} else if(apiVersion == 10) {
		lr_start_transaction("api_1_0_info_onlineBillDetail");
			
		web_url("api_1_0_info_onlineBillDetail",
			"URL=http://{endpoint}/api/1.0/info/onlineBillDetail?ctn={ctn}&periodStart={period_start}&periodEnd={period_end}&hash={hash_qouted}",
			"Resource=1",
			"RecContentType=text/html",
			"Referer=",
			"Mode=HTML",
			LAST);
		
		checkResult("api_1_0_info_onlineBillDetail", lr_eval_string("{response}"), lr_eval_string("{token}"), lr_eval_string("{ctn}"), "");
		
	} else if(apiVersion == 0) {
		lr_start_transaction("api_info_onlineBillDetail");
			
		web_url("api_info_onlineBillDetail",
			"URL=http://{endpoint}/api/info/onlineBillDetail?ctn={ctn}&periodStart={period_start}&periodEnd={period_end}&hash={hash_qouted}",
			"Resource=1",
			"RecContentType=text/html",
			"Referer=",
			"Mode=HTML",
			LAST);
		
		checkResult("api_info_onlineBillDetail", lr_eval_string("{response}"), lr_eval_string("{token}"), lr_eval_string("{ctn}"), "");
	}
	
	return 0;
}
