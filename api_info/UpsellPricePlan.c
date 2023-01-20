UpsellPricePlan()
{
    
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
         	"		<concat>{ctn}{pricePlanCode}{channelType}</concat>" 
      		"	</ws:getHashByConcat>"
   			"</soapenv:Body>"
			"</soapenv:Envelope>",
	        LAST);
	        
	lr_end_transaction("pool_get_hash", LR_AUTO);
	
	
	//TPH upsellPricePlan / TPH pricePlanAvailableList

		web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
		//web_add_cookie("token={token}; domain={endpoint}");
		web_add_cookie("token={systoken}; domain={endpoin}");
		web_add_header("Usss-Language", "ru_RU");
	
		lr_start_transaction("api_1_0_info_upsellPricePlan");
			
		web_url("api_1_0_info_payment_history",
			"URL=http://{endpoint}/api/1.0/info/upsellPricePlan?ctn={ctn}&hash={hash_qouted}&pricePlan={pricePlanCode}&channelType={channelType}",
			"Resource=1",
			"RecContentType=text/html",
			"Referer=",
			"Mode=HTML",
			LAST);
		
		checkResult("api_1_0_info_upsellPricePlan", lr_eval_string("{response}"), lr_eval_string("{token}"), lr_eval_string("{ctn}"), "");
	
	return 0;
}
