GetData()
{

	web_reg_save_param("response", "LB=", "RB=", LAST);
	web_reg_save_param("requestId","LB=Id>", "RB=<", LAST );

	lr_start_transaction("B2B_api_SubscriberService_GetData");
	web_custom_request("GetData", "Method=POST","EncType=text/xml", "TargetFrame=", "Resource=0", "Referer=", 
	"URL=http://{endpoint}/api/SubscriberService", 
    "Body=<soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:Subscriber\">"
	"<soapenv:Header/>"
	"<soapenv:Body>"
	"<urn:getData>"
	"<!--Optional:-->"
	"<token>{token}</token>"
    "<!--Optional:-->"
	"<hash></hash>"
	"<!--Optional:-->"
	"<login></login>"
    "<!--Optional:-->"
	"<ban>{ban}</ban>"
    "<!--Optional:-->"
	"<hierarchy_id></hierarchy_id>"
	"<!--Optional:-->"
	"<subscriber_no></subscriber_no>"
	"</urn:getData>"
	"</soapenv:Body>"
	"</soapenv:Envelope>",
	LAST ); 

	if (lr_get_transaction_status ("B2B_api_SubscriberService_GetData") == LR_FAIL) {
		error_message_to_log("API_b2b_SubscriberService", 
							 "B2B_api_SubscriberService_GetData", 
							 lr_eval_string("{login}"), 
							 lr_eval_string(""), 
							 lr_eval_string("{ban}"),
							 lr_eval_string("{requestId}"),
							 lr_eval_string("{token}"), 
							 lr_eval_string("GetData"), 
							 lr_eval_string("{response}"), 
							 "",
							 "");
		lr_end_transaction("B2B_api_SubscriberService_GetData",LR_FAIL);
	} else {
		lr_end_transaction("B2B_api_SubscriberService_GetData",LR_AUTO);
	}

//	sleep(500);

//	вызываем GetDataReport(); здесь можно сделать коэфициент для ТПС
	GetDataReport();

	return 0;
}
