auth()
{
	int result;

 	web_reg_save_param("token","LB=\"token\":\"", "RB=\"", LAST );
 	web_reg_save_param_ex("ParamName=response", "LB={", "RB=}",	LAST);
	web_reg_save_param_ex("ParamName=fullresponse", "LB=", "RB=",	LAST);
	web_add_header("X-API-Version", "2");
    web_add_header("Content-Type", "application/json; charset=utf-8");

	lr_start_transaction("api_2_0_auth_auth_PUT");

    web_custom_request("api_2_0_auth_auth_PUT", 
		"URL=http://{endpoint}/api/2.0/auth/auth?login={login}", //&userType=Mobile
		"Method=PUT", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"Body={\"password\":\"{pass}\"}",
		LAST);

	result = checkResult("api_2_0_auth_auth_PUT",lr_eval_string("{response}"),"",lr_eval_string("{login}"),lr_eval_string("{fullresponse}"));
	lr_end_transaction("api_2_0_auth_auth_PUT",LR_AUTO); 
	return result;

// auth v 1.0

// 	lr_continue_on_error (1);
// 	web_reg_save_param("token","LB=\"token\":\"", "RB=\"", LAST );
// 	// Сохраняем полный ответ сервера на случай ошибки
// 	web_reg_save_param("response", "LB=\"meta\":", "RB=", LAST);
// 	web_add_auto_header("Content-Type", "text/xml;charset=UTF-8");
//     lr_start_transaction("api_1_0_auth_auth");
// 	web_url("auth",
// 		"URL=http://{endpoint}/api/1.0/auth/auth?login={login}&password={pass}",
// 		"Resource=1",
// 		"RecContentType=text/html",
// 		"Referer=",
// 		"Mode=HTML",
// 		LAST);
// 	// Ответ получен, отключаем пропуск ошибок
// 	lr_continue_on_error (0);
// 	// Если транзакция зафейлилась, выводим текст ошибки в лог
// 	if (lr_get_transaction_status ("api_1_0_auth_auth") == LR_FAIL) {
// 		lr_save_datetime("%c",DATE_NOW,"Date");
// 		lr_error_message("Date = %s\n"
// 			   "Script \"api_auth_bal\"\n"
// 			   "Transaction = \"api_1_0_auth_auth\"\n"
// 			   "Login = %s\n"
// 			   "Response was %s\n"
// 			   "Token = %s",
// 			   lr_eval_string("{Date}"),
// 			   lr_eval_string("{login}"),
// 			   lr_eval_string("{response}"),
// 			   lr_eval_string("{token}"));
// 		lr_end_transaction("api_1_0_auth_auth",LR_FAIL);
// 		return -1;
// 	} else { lr_end_transaction("api_1_0_auth_auth",LR_AUTO); return 0;}
 	
}

