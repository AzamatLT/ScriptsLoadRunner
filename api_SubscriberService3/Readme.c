Readme()
{
	/* Данный скрипт был собран из нескольких отдельных скриптов, описание по каждому пока кину сюда*/
/*
Структура скрипта  getCTNInfoList:
Получение токена - USSAPIB2B_auth (/api/AuthService)
Если токен не получен, завершаем выполнение скрипта
Если токен получен, вызываем с ним сервис - USSAPIB2B_getCTNInfoList (/api/SubscriberService)
Проверяем что сервис USSAPIB2B_getCTNInfoList успешно отработал, по тексту "<statusDate>"
*/
/*
Структура скрипта  b2bapi_auth_unbilledcalls:
Получение токена - USSAPIB2B_auth (/api/AuthService)
Если токен не получен, завершаем выполнение скрипта
Если токен получен, вызываем с ним запрос неоплаченных звонков - USSAPIB2B_UNBILLEDCALLSLIST (/api/SubscriberService)
Проверяем что запрос неоплаченных звонков вернул успешный ответ, по тексту "<callDate>"
*/
/*
Структура скрипта  b2bapi_auth_getServicesList:
Получение токена - USSAPIB2B_auth (/api/AuthService)
Если токен не получен, завершаем выполнение скрипта
Если токен получен, вызываем с ним запрос подключенных услуг - USSAPIB2B_GETSERVICESLIST (/api/SubscriberService)
Проверяем что запрос списка подключенных услуг вернул успешный ответ, по тексту "serviceId"
*/
/*
Структура скрипта  getUnbilledBalances:
Получение токена - USSAPIB2B_auth (/api/AuthService)
Если токен не получен, завершаем выполнение скрипта
Если токен получен, вызываем с ним сервис возвращения суммы списания за текущий период абонента (постпейд) - getUnbilledBalances (/api/SubscriberService)
Проверяем что сервис возвращения суммы списания за текущий период абонента (постпейд) успешно отработал, по тексту "<rc>"
*/
/*
Структура скрипта  b2bapi_auth_getPaymentList:
Получение токена - USSAPIB2B_auth (/api/AuthService)
Если токен не получен, завершаем выполнение скрипта
Если токен получен, вызываем с ним запрос списка платежей - USSAPIB2B_getPaymentList (/api/SubscriberService)
Проверяем что запрос списка платежей вернул успешный ответ, по тексту "<ns0:getPaymentListResponse"
*/
/*
Структура скрипта  getRequestList:
Получение токена - USSAPIB2B_auth (/api/AuthService)
Если токен не получен, завершаем выполнение скрипта
Если токен получен, вызываем с ним сервис - USSAPIB2B_getRequestList (/api/SubscriberService)
Проверяем что сервис USSAPIB2B_getRequestList успешно отработал, по тексту "<requestList>"
*/
/*
Структура скрипта  b2bapi_auth_addDelSOC:
Получение токена - USSAPIB2B_auth (/api/AuthService)
Если токен не получен, завершаем выполнение скрипта
Если токен получен, вызываем с ним сервис получения списка доступных услуг - USSAPIB2C_serviceAvailable (/api/1.0/info/serviceAvailableList)
	Если в ответе удалось получить услугу, доступную для подключения, вызываем сервис подключения услуги - USSAPIB2B_ADDSOC (/api/SubscriberService)
	Проверяем что запрос на подключение успешно сформирован, по тексту "<return>"
Добавляем токен в куки и вызываем сервис получения списка подключенных услуг - USSAPIB2C_serviceList (/api/1.0/info/serviceList)
	Если в ответе удалось получить услугу, доступную для отключения, вызываем сервис отключения услуги - USSAPIB2B_DELSOC (/api/SubscriberService)
	Проверяем что запрос на отключение успешно сформирован, по тексту "<return>"
*/
/*
Структура скрипта  getSIMList:
Получение токена - USSAPIB2B_auth (/api/AuthService)
Если токен не получен, завершаем выполнение скрипта
Если токен получен, вызываем с ним сервис получения номера SIM-карты/IMSI для BAN - USSAPIB2B_getSIMList (/api/SubscriberService)
Проверяем что сервис получения номера SIM-карты/IMSI для BAN успешно отработал, по тексту "serialNumber"
*/
/*
Структура скрипта  b2bapi_auth_replaceSIM:
Получение токена - USSAPIB2B_auth (/api/AuthService)
Если токен не получен, завершаем выполнение скрипта
Если токен получен, вызываем с ним сервис замены SIM - USSAPIB2B_replaceSIM (/api/SubscriberService)
Проверяем что запрос замены SIM вернул успешный ответ, по тексту "<return>"
*/
/*
Структура скрипта  b2bapi_auth_suspendCTN:
Получение токена - USSAPIB2B_auth (/api/AuthService)
Если токен не получен, завершаем выполнение скрипта
Если токен получен, вызываем с ним сервис блокировки номера - USSAPIB2B_SUSPENDCTN (/api/SubscriberService)
Проверяем что запрос блокировки номера вернул успешный ответ, по тексту "<return>"
*/
	return 0;
}
