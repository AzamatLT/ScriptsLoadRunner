Auth_B2C(int apiVersion)
{
	int result;

 	web_reg_save_param("token","LB=\"token\":\"", "RB=\"", LAST );
 	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
	web_add_header("X-API-Version", "2");
    web_add_header("Content-Type", "application/json; charset=utf-8");

    if(apiVersion == 10) {
		lr_start_transaction("api_1_0_auth_auth_PUT");
	
	    web_custom_request("api_1_0_auth_auth_PUT", 
			"URL=http://{endpoint}/api/1.0/auth/auth?login={ctn}", //&userType=Mobile
			"Method=PUT", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=", 
			"Snapshot=t25.inf", 
			"Mode=HTML", 
			"Body={\"password\":\"{pass}\"}",
			LAST);
	
		result = checkResult("api_1_0_auth_auth_PUT", lr_eval_string("{response}"), "", lr_eval_string("{ctn}"), lr_eval_string("{fullresponse}"));
    } else {
    	lr_start_transaction("api_2_0_auth_auth_PUT");
	
	    web_custom_request("api_2_0_auth_auth_PUT", 
			"URL=http://{endpoint}/api/2.0/auth/auth?login={ctn}", //&userType=Mobile
			"Method=PUT", 
			"Resource=0", 
			"RecContentType=application/json", 
			"Referer=", 
			"Snapshot=t25.inf", 
			"Mode=HTML", 
			"Body={\"password\":\"{pass}\"}",
			LAST);
	
		result = checkResult("api_2_0_auth_auth_PUT", lr_eval_string("{response}"), "", lr_eval_string("{ctn}"), lr_eval_string("{fullresponse}"));
    }
	
	return result;
}
