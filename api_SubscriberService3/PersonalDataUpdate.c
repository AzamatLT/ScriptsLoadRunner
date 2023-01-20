PersonalDataUpdate()
{

	char *utf1 = "*Номер лицевого счета;*Номер телефона;*Гражданство;*Номер документа;*Тип документа;*Дата выдачи;Кем выдан;Код подразделения выдавшего документ;Документ действителен до;*Дата рождения;Номер миграционной карты;Дата выдачи миграционной карты;Срок действия миграционной карты;Документ нерезидента;*Имя;Отчество;*Фамилия;Место рождения;*Пол;ИНН;СНИЛС;АдрРег Индекс;*АдрРег Код страны;АдрРег Регион;АдрРег Район;*АдрРег Тип НП;*АдрРег Населенный пункт;АдрРег Тип улицы;АдрРег Улица;АдрРег Номер дома;АдрРег Тип строения;АдрРег Номер строения;АдрРег Тип помещения;АдрРег Номер помещения;АдрРег Комментарий;АдрРег ФИАС ИД;АдрПрож Индекс;*АдрПрож Код страны;АдрПрож Регион;АдрПрож Район;*АдрПрож Тип НП;*АдрПрож Населенный пункт;АдрПрож Тип улицы;АдрПрож Улица;АдрПрож Номер дома;АдрПрож Тип строения;АдрПрож Номер строения;АдрПрож Тип помещения;АдрПрож Номер помещения;АдрПрож Комментарий;АдрПрож ФИАС ИД;&#x0d;&#x0a";
	//;{ban};;
	char *utf2 = "RUS;7888123466;1;03.01.2000;ОУФМС России по городу Москве по району Кунцево;770064;;13.04.1990;;;;;Иван;Иванович;Иванов;Москва;M;;;121351;RUS;;Центральный;г.;Москва;ул.;Ярцевская;17;;;Кв.;13;;;121351;RUS;;Центральный;г.;Москва;ул.;Ярцевская;17;;;Кв.;13;;";

	web_reg_save_param("response", "LB=", "RB=", LAST);
	web_reg_save_param("request_id","LB=_id>", "RB=<", LAST );

    lr_convert_string_encoding(utf1, LR_ENC_SYSTEM_LOCALE, LR_ENC_UTF8, "utf1");
	lr_convert_string_encoding(utf2, LR_ENC_SYSTEM_LOCALE, LR_ENC_UTF8, "utf2");

	lr_save_string(lr_eval_string("{utf1}"),"utf1");
	lr_save_string(lr_eval_string("{utf2}"),"utf2");

	lr_start_transaction("B2B_api_SubscriberService_PersonalDataUpdate");
	web_custom_request("PersonalDataUpdate", "Method=POST","EncType=text/xml", "TargetFrame=", "Resource=0", "Referer=", 
	"URL=http://{endpoint}/api/SubscriberService", 
	"Body=<soapenv:Envelope xmlns:soapenv=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:urn=\"urn:uss-wsapi:Subscriber\"><soapenv:Header/><soapenv:Body><urn:personalDataUpdate><token>{token}</token><data>{utf1};{ban};;{utf2}</data></urn:personalDataUpdate></soapenv:Body></soapenv:Envelope>",
	LAST ); 

	if (lr_get_transaction_status ("B2B_api_SubscriberService_PersonalDataUpdate") == LR_FAIL) {
		error_message_to_log("API_b2b_SubscriberService", 
							 "B2B_api_SubscriberService_PersonalDataUpdate", 
							 lr_eval_string("{login}"), 
							 lr_eval_string(""), 
							 lr_eval_string("{ban}"), 
							 lr_eval_string("{token}"), 
							 lr_eval_string("{request_id}"),
							 lr_eval_string("PersonalDataUpdate"), 
							 lr_eval_string("{response}"), 
							 "",
							 "");
		lr_end_transaction("B2B_api_SubscriberService_PersonalDataUpdate",LR_FAIL);
	} else {
		lr_end_transaction("B2B_api_SubscriberService_PersonalDataUpdate",LR_AUTO);
	}

//	sleep(4000);
//	PersonalDataResult(); находится в Экшн - в конце списка, чтооб запрос успел обработаться

	return 0;
}
