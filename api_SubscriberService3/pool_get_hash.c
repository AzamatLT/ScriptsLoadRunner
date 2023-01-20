pool_get_hash(char *concat)
{
    lr_save_string(concat,"concat");

    lr_start_transaction("pool_get_hash");
 
    web_reg_save_param_ex("ParamName=hmacSha1",
                            "LB=<hmacSha1>",
                            "RB=</hmacSha1>",
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
			"       <concat>{concat}</concat>"
            "   </ws:getHashByConcat>"
            "</soapenv:Body>"
            "</soapenv:Envelope>",
            LAST);




    lr_end_transaction("pool_get_hash", LR_AUTO);
     
    lr_output_message("%s", lr_eval_string("{hmacSha1}")); 

	return 0;

}
