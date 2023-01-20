ServiceAvailableList() {
	
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
         	"		<concat>{login}</concat>" //ctn, socList, nonPublic, showPublicInd, hiddenService
      		"	</ws:getHashByConcat>"
   			"</soapenv:Body>"
			"</soapenv:Envelope>",
	        LAST); 
	        
	lr_end_transaction("pool_get_hash", LR_AUTO);
	
	
	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
    web_add_cookie("token={systoken}; domain={endpoin}");

	web_reg_save_param("socToAdd","LB=\"name\":\"", "RB=\"", LAST );
	web_reg_save_param("AddSOC", "LB=\"name\":\"", "RB=\"", "ORD=All", LAST );

	lr_start_transaction("api_2_0_info_serviceAvailableList");
	web_url("serviceAvailable",
		"URL=http://{endpoint}/api/2.0/info/serviceAvailableList?hash={hash_qouted}&ctn={login}",
		"Resource=0",
		"RecContentType=application/json",
		"Mode=HTML",
		LAST );

	checkResult("api_2_0_info_serviceAvailableList",lr_eval_string("{response}"),lr_eval_string("{token}"),lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
	//lr_end_transaction("api_2_0_info_serviceAvailableList", LR_AUTO);
	
	return 0;
}
