soap_createPortedSelfreg()
{
	web_add_cookie("token={sysTokenPL}; domain={endpoint}");
    web_add_header("Content-Type", "text/xml;charset=UTF-8");

	lr_start_transaction("soap_createPortedSelfreg");
	web_custom_request("soap_createPortedSelfreg", "Method=POST",  "TargetFrame=", "Resource=0", "Referer=", 
	"URL=http://{endpoint}/api/UserManagementService", 
	"Body=<soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:UserManagement\">"
	"<soapenv:Header/>"
	"<soapenv:Body>"
	"<urn:createPortedSelfreg>"
	"<!--Optional:-->"
	"<token>{sysTokenPL}</token>"
	"<!--Optional:-->"
	"<hash>{hash4ported}</hash>"
	"<!--Optional:-->"
	"<ctn>{ctn4ported}</ctn>"
	"</urn:createPortedSelfreg>"
	"</soapenv:Body>"
	"</soapenv:Envelope>", 
	LAST ); 

	if (lr_get_transaction_status ("soap_createPortedSelfreg") == LR_FAIL) {
		error_message_to_log("UserManagementService", 
							 "soap_createPortedSelfreg",
							 lr_eval_string("{ctn4ported}"),
							 lr_eval_string("{response}"),
							 "",
							 "");
		lr_end_transaction("soap_createPortedSelfreg",LR_FAIL);
	} else {
		lr_end_transaction("soap_createPortedSelfreg",LR_AUTO);
	}

	return 0;
}
