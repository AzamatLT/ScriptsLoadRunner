ServiceList()
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
         	"		<concat>{login}</concat>" //ctn, hiddenService
      		"	</ws:getHashByConcat>"
   			"</soapenv:Body>"
			"</soapenv:Envelope>",
	        LAST); 
	        
	lr_end_transaction("pool_get_hash", LR_AUTO);
		
	// получаем список подключенных услуг
    web_reg_save_param("DelSOC", "LB=\"name\":\"", "RB=\"", "ORD=All", LAST );
	web_reg_save_param("DelSOCIndex", "LB=\"removeInd\":\"", "RB=\"", "ORD=All", LAST );
	web_reg_find("Text=OK", LAST);

	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
	//web_add_cookie("token={token}; domain={endpoint}" );
	web_add_cookie("token={systoken}; domain={endpoint}");
	
	lr_start_transaction("api_2_0_info_serviceList");
	
	web_url("serviceList",
			"URL=http://{endpoint}/api/2.0/info/serviceList?hash={hash_qouted}&ctn={login}",
			"Resource=0",
			"RecContentType=application/json",
			"Mode=HTML",
			LAST );
	
	checkResult("api_2_0_info_serviceList",lr_eval_string("{response}"),"",lr_eval_string("{login}"),"");
	
	return 0;
}
