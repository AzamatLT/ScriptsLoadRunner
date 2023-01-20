api_1_sdb_info()
{
	int result;

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
            "   <ws:getHashByConcat>"
            "       <concat>{ctn_bug}</concat>"
            "   </ws:getHashByConcat>"
            "</soapenv:Body>"
            "</soapenv:Envelope>",
            LAST);
             
    lr_end_transaction("pool_get_hash", LR_AUTO);
     
    lr_output_message("%s", lr_eval_string("{hash_qouted}")); 

	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);

    web_add_cookie("token={systoken}; domain={endpoin}");

	lr_start_transaction("api_1_sdb_info");

	web_add_header("Content-Type", "application/json; charset=utf-8");

    web_custom_request("api_1_sdb_info", 
		"URL=http://{endpoint}/api/1.0/sdb/info?ctn={ctn_bug}&hash={hash_qouted}",
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	result = checkResult("api_1_sdb_info",
				lr_eval_string("{response}"),
				lr_eval_string("{systoken}"),
				lr_eval_string("{ctn_bug}"),
				lr_eval_string("{fullresponse}"));

	lr_end_transaction("api_1_sdb_info", LR_AUTO);
    
	return result;
}
