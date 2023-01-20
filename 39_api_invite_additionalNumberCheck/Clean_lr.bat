@echo off
::
:: Скрипт удаляет ненужные в CVS файлы для LR-скриптов типа Web - HTTP/HTML.
:: Универсальная версия для размещения как внутри каталога скрипта, так и уровнем выше. 
:: Не выводит на экран лишние ошибки для отсутствующих файлов.
::
title Clear LR temp files

if exist vuser_init.c (
	for /d %%i in ( "%cd%" ) do (
		for /d %%j in ( "%%i\result*" ) do ( rd /s /q "%%j" && echo Removed "%%j" )
	)
) else (
	for /d %%i in ( "%cd%\*" ) do (
		for /d %%j in ("%%i\result*") do ( rd /s /q "%%j" && echo Removed "%%j" )
		
		:: Проверяем еще один уровень вложенности 
		for /d %%k in ( "%%i\*" ) do (
			for /d %%l in ( "%%k\result*" ) do ( rd /s /q "%%1" && echo Removed "%%1" )
		)
	)
)
set DELETE_LIST=^
*.sdf combined_*.c ThumbnailsCache.tmp *.bak pre_cci.c ^ 
*.ci *.idx *.c.pickle mdrv_cmd.txt options.txt TransactionsData.db ^ 
custom_body_variables.txt logfile.log mdrv.log output.txt Breakpoints.xml ^ 
ReplaySummaryReport.xml UserTasks.xml CompilerLogMetadata.xml *.tmp data.zip ^ 
Bookmarks.xml OutputColoringDatabase.json ScriptUploadMetadata.xml Watches.xml

del %DELETE_LIST% /s /q 2>&1 | findstr -v "Could Not Find"
pause