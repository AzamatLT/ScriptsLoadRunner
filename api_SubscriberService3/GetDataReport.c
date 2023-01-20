GetDataReport()
{

	web_reg_save_param("response", "LB=", "RB=", LAST);

	lr_start_transaction("B2B_api_SubscriberService_GetDataRepot");
	web_custom_request("GetDataRepot", "Method=POST",  "TargetFrame=", "Resource=0", "Referer=", 
	"URL=http://{endpoint}/api/SubscriberService", 
	"Body=<soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:Subscriber\">"
	"<soapenv:Header/>"
	"<soapenv:Body>"
	"<urn:getDataReport>"
	"<!--Optional:-->"
	"<token>{token}</token>"
	"<!--Optional:-->"
	"<hash></hash>"
	"<!--Optional:-->"
	"<login>{login}</login>"
	"<!--Optional:-->"
	"<request_id>{reqq}</request_id>"
	"<!--Optional:-->"
	"<page>1</page>"
	"<!--Optional:-->"
	"<recordsPerPage></recordsPerPage>"
	"</urn:getDataReport>"
	"</soapenv:Body>"
	"</soapenv:Envelope>", 
	LAST ); 

	if (lr_get_transaction_status ("B2B_api_SubscriberService_GetDataRepot") == LR_FAIL) {
		error_message_to_log("API_b2b_SubscriberService", 
							 "B2B_api_SubscriberService_GetDataRepot", 
							 lr_eval_string("{login}"), 
							 lr_eval_string(""), 
							 lr_eval_string("{ban}"),
							 lr_eval_string("{token}"), 
							 lr_eval_string("{reqq}"),
							 lr_eval_string("{response}"), 
							 "",
							 "");
		lr_end_transaction("B2B_api_SubscriberService_GetDataRepot",LR_FAIL);
	} else {
		lr_end_transaction("B2B_api_SubscriberService_GetDataRepot",LR_AUTO);
	}

	return 0;
}
