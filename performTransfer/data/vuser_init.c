/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 8859
   ------------------------------------------------------------------------------- */

vuser_init()
{

	lrd_init(&InitInfo, DBTypeVersion);
	lrd_open_context(&Ctx14, LRD_DBTYPE_ODBC, 0, 0, 0);
	lrd_db_option(Ctx14, OT_ODBC_OV_ODBC3, 0, 0);
	lrd_open_connection(&Con22, LRD_DBTYPE_ODBC, "UMCS_APP", lr_decrypt("5746ba9e15316ee3b4fa48"), "ms-mcomdb001", lr_decrypt("5746ba9ee"), Ctx14, 0, 0);
	lrd_open_cursor(&Csr1247, Con22, 0);
	lrd_stmt(Csr1247, "SqlType=SQL_ALL_TYPES;", -1, 3, 4 /*SQLGetTypeInfo*/, 0);
	lrd_bind_cols(Csr1247, BCInfo_D14, 0);
	lrd_fetch(Csr1247, -38, 1, 0, PrintRow2, 0);
	GRID(2);
	lrd_close_cursor(&Csr1247, 0);
	lrd_db_option(Con22, OT_ODBC_AUTOCOMMIT, "ON", 0);
	lrd_open_cursor(&Csr1248, Con22, 0);
	lrd_stmt(Csr1248, "TableQualifier=%;TableOwner=;TableName=;TableType=;", -1, 3, 11 /*SQLTables*/, 0);
	lrd_bind_cols(Csr1248, BCInfo_D20, 0);
	lrd_fetch(Csr1248, -7, 1, 0, PrintRow4, 0);
	GRID(4);
	lrd_close_cursor(&Csr1248, 0);
	lrd_open_cursor(&Csr1249, Con22, 0);
	lrd_stmt(Csr1249, "TableQualifier=;TableOwner=%;TableName=;TableType=;", -1, 3, 11 /*SQLTables*/, 0);
	lrd_bind_cols(Csr1249, BCInfo_D26, 0);
	lrd_fetch(Csr1249, -4, 1, 0, PrintRow6, 0);
	GRID(6);
	lrd_close_cursor(&Csr1249, 0);
	lrd_open_connection(&Con23, LRD_DBTYPE_ODBC, "UMCS_APP", lr_decrypt("5746ba9e15316ee3b4fa48"), "ms-mcomdb001", lr_decrypt("5746ba9ee"), Ctx14, 0, 0);
	lrd_open_cursor(&Csr1250, Con23, 0);
	lrd_stmt(Csr1250, "SqlType=SQL_ALL_TYPES;", -1, 3, 4 /*SQLGetTypeInfo*/, 0);
	lrd_bind_cols(Csr1250, BCInfo_D40, 0);
	lrd_fetch(Csr1250, -38, 1, 0, PrintRow8, 0);
	GRID(8);
	lrd_close_cursor(&Csr1250, 0);
	lrd_open_cursor(&Csr1251, Con22, 0);
	lrd_stmt(Csr1251, "TableQualifier=;TableOwner=;TableName=;TableType=TABLE;", -1, 3, 11 /*SQLTables*/, 0);
	lrd_bind_cols(Csr1251, BCInfo_D46, 0);
	lrd_fetch(Csr1251, -50, 1, 0, PrintRow10, 0);
	GRID(10);
	lrd_close_cursor(&Csr1251, 0);
	lrd_open_cursor(&Csr1252, Con22, 0);
	lrd_stmt(Csr1252, "TableQualifier=;TableOwner=;TableName=;TableType=SYSTEM TABLE;", -1, 3, 11 /*SQLTables*/, 0);
	lrd_bind_cols(Csr1252, BCInfo_D52, 0);
	lrd_fetch(Csr1252, 0, 1, 0, PrintRow12, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1252, 0);
	lrd_open_cursor(&Csr1253, Con22, 0);
	lrd_stmt(Csr1253, "TableQualifier=;TableOwner=;TableName=;TableType=VIEW;", -1, 3, 11 /*SQLTables*/, 0);
	lrd_bind_cols(Csr1253, BCInfo_D58, 0);
	lrd_fetch(Csr1253, -403, 1, 0, PrintRow14, 0);
	GRID(14);
	lrd_close_cursor(&Csr1253, 0);
	lrd_open_cursor(&Csr1254, Con22, 0);
	lrd_stmt(Csr1254, "TableQualifier=;TableOwner=;TableName=;TableType=%;", -1, 3, 11 /*SQLTables*/, 0);
	lrd_bind_cols(Csr1254, BCInfo_D64, 0);
	lrd_fetch(Csr1254, -3, 1, 0, PrintRow16, 0);
	GRID(16);
	lrd_close_cursor(&Csr1254, 0);
	lrd_open_cursor(&Csr1255, Con23, 0);
	lrd_stmt(Csr1255, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "AwaitingUserReactionSession;ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1255, BCInfo_D73, 0);
	lrd_fetch(Csr1255, -3, 1, 0, PrintRow18, 0);
	GRID(18);
	lrd_close_cursor(&Csr1255, 0);
	lrd_open_cursor(&Csr1256, Con23, 0);
	lrd_stmt(Csr1256, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "AwaitingUserReactionSession;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1256, BCInfo_D77, 0);
	lrd_fetch(Csr1256, -1, 1, 0, PrintRow20, 0);
	GRID(20);
	lrd_close_cursor(&Csr1256, 0);
	lrd_open_cursor(&Csr1257, Con23, 0);
	lrd_stmt(Csr1257, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "AwaitingUserReactionSession;Unique=SQL_INDEX_ALL;Accuracy="
        "SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1257, BCInfo_D88, 0);
	lrd_fetch(Csr1257, -2, 1, 0, PrintRow22, 0);
	GRID(22);
	lrd_close_cursor(&Csr1257, 0);
	lrd_open_cursor(&Csr1258, Con23, 0);
	lrd_stmt(Csr1258, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName="
        "AwaitingUserReactionSession;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1258, BCInfo_D93, 0);
	lrd_fetch(Csr1258, -1, 1, 0, PrintRow24, 0);
	GRID(24);
	lrd_close_cursor(&Csr1258, 0);
	lrd_open_cursor(&Csr1259, Con23, 0);
	lrd_stmt(Csr1259, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "AwaitingUserReactionSession;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1259, BCInfo_D98, 0);
	lrd_fetch(Csr1259, 0, 1, 0, PrintRow26, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1259, 0);
	lrd_open_cursor(&Csr1260, Con23, 0);
	lrd_stmt(Csr1260, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "CancellationInProgress;ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1260, BCInfo_D107, 0);
	lrd_fetch(Csr1260, -4, 1, 0, PrintRow28, 0);
	GRID(28);
	lrd_close_cursor(&Csr1260, 0);
	lrd_open_cursor(&Csr1261, Con23, 0);
	lrd_stmt(Csr1261, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "CancellationInProgress;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1261, BCInfo_D111, 0);
	lrd_fetch(Csr1261, -1, 1, 0, PrintRow30, 0);
	GRID(30);
	lrd_close_cursor(&Csr1261, 0);
	lrd_open_cursor(&Csr1262, Con23, 0);
	lrd_stmt(Csr1262, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "CancellationInProgress;Unique=SQL_INDEX_ALL;Accuracy="
        "SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1262, BCInfo_D122, 0);
	lrd_fetch(Csr1262, -4, 1, 0, PrintRow32, 0);
	GRID(32);
	lrd_close_cursor(&Csr1262, 0);
	lrd_open_cursor(&Csr1263, Con23, 0);
	lrd_stmt(Csr1263, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=CancellationInProgress;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1263, BCInfo_D127, 0);
	lrd_fetch(Csr1263, 0, 1, 0, PrintRow34, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1263, 0);
	lrd_open_cursor(&Csr1264, Con23, 0);
	lrd_stmt(Csr1264, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "CancellationInProgress;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1264, BCInfo_D132, 0);
	lrd_fetch(Csr1264, 0, 1, 0, PrintRow36, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1264, 0);
	lrd_open_cursor(&Csr1265, Con23, 0);
	lrd_stmt(Csr1265, "TableQualifier=MAINDB;TableOwner=dbo;TableName=dtproperties;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1265, BCInfo_D141, 0);
	lrd_fetch(Csr1265, -7, 1, 0, PrintRow38, 0);
	GRID(38);
	lrd_close_cursor(&Csr1265, 0);
	lrd_open_cursor(&Csr1266, Con23, 0);
	lrd_stmt(Csr1266, "TableQualifier=MAINDB;TableOwner=dbo;TableName=dtproperties;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1266, BCInfo_D145, 0);
	lrd_fetch(Csr1266, -2, 1, 0, PrintRow40, 0);
	GRID(40);
	lrd_close_cursor(&Csr1266, 0);
	lrd_open_cursor(&Csr1267, Con23, 0);
	lrd_stmt(Csr1267, "TableQualifier=MAINDB;TableOwner=dbo;TableName=dtproperties;Unique="
        "SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1267, BCInfo_D156, 0);
	lrd_fetch(Csr1267, -3, 1, 0, PrintRow42, 0);
	GRID(42);
	lrd_close_cursor(&Csr1267, 0);
	lrd_open_cursor(&Csr1268, Con23, 0);
	lrd_stmt(Csr1268, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=dtproperties;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1268, BCInfo_D161, 0);
	lrd_fetch(Csr1268, 0, 1, 0, PrintRow44, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1268, 0);
	lrd_open_cursor(&Csr1269, Con23, 0);
	lrd_stmt(Csr1269, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName=dtproperties;"
        "FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1269, BCInfo_D166, 0);
	lrd_fetch(Csr1269, 0, 1, 0, PrintRow46, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1269, 0);
	lrd_open_cursor(&Csr1270, Con23, 0);
	lrd_stmt(Csr1270, 
        "TableQualifier=MAINDB;TableOwner=dbo;TableName=GD_ACCESS;ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1270, BCInfo_D175, 0);
	lrd_fetch(Csr1270, -2, 1, 0, PrintRow48, 0);
	GRID(48);
	lrd_close_cursor(&Csr1270, 0);
	lrd_open_cursor(&Csr1271, Con23, 0);
	lrd_stmt(Csr1271, "TableQualifier=MAINDB;TableOwner=dbo;TableName=GD_ACCESS;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1271, BCInfo_D179, 0);
	lrd_fetch(Csr1271, -1, 1, 0, PrintRow50, 0);
	GRID(50);
	lrd_close_cursor(&Csr1271, 0);
	lrd_open_cursor(&Csr1272, Con23, 0);
	lrd_stmt(Csr1272, "TableQualifier=MAINDB;TableOwner=dbo;TableName=GD_ACCESS;Unique="
        "SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1272, BCInfo_D190, 0);
	lrd_fetch(Csr1272, -2, 1, 0, PrintRow52, 0);
	GRID(52);
	lrd_close_cursor(&Csr1272, 0);
	lrd_open_cursor(&Csr1273, Con23, 0);
	lrd_stmt(Csr1273, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=GD_ACCESS;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1273, BCInfo_D195, 0);
	lrd_fetch(Csr1273, 0, 1, 0, PrintRow54, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1273, 0);
	lrd_open_cursor(&Csr1274, Con23, 0);
	lrd_stmt(Csr1274, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName=GD_ACCESS;"
        "FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1274, BCInfo_D200, 0);
	lrd_fetch(Csr1274, -1, 1, 0, PrintRow56, 0);
	GRID(56);
	lrd_close_cursor(&Csr1274, 0);
	lrd_open_cursor(&Csr1275, Con23, 0);
	lrd_stmt(Csr1275, "TableQualifier=MAINDB;TableOwner=dbo;TableName=Partner;ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1275, BCInfo_D209, 0);
	lrd_fetch(Csr1275, -10, 1, 0, PrintRow58, 0);
	GRID(58);
	lrd_close_cursor(&Csr1275, 0);
	lrd_open_cursor(&Csr1276, Con23, 0);
	lrd_stmt(Csr1276, "TableQualifier=MAINDB;TableOwner=dbo;TableName=Partner;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1276, BCInfo_D213, 0);
	lrd_fetch(Csr1276, -1, 1, 0, PrintRow60, 0);
	GRID(60);
	lrd_close_cursor(&Csr1276, 0);
	lrd_open_cursor(&Csr1277, Con23, 0);
	lrd_stmt(Csr1277, "TableQualifier=MAINDB;TableOwner=dbo;TableName=Partner;Unique="
        "SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1277, BCInfo_D224, 0);
	lrd_fetch(Csr1277, -3, 1, 0, PrintRow62, 0);
	GRID(62);
	lrd_close_cursor(&Csr1277, 0);
	lrd_open_cursor(&Csr1278, Con23, 0);
	lrd_stmt(Csr1278, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=Partner;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1278, BCInfo_D229, 0);
	lrd_fetch(Csr1278, 0, 1, 0, PrintRow64, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1278, 0);
	lrd_open_cursor(&Csr1279, Con23, 0);
	lrd_stmt(Csr1279, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName=Partner;"
        "FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1279, BCInfo_D234, 0);
	lrd_fetch(Csr1279, -1, 1, 0, PrintRow66, 0);
	GRID(66);
	lrd_close_cursor(&Csr1279, 0);
	lrd_open_cursor(&Csr1280, Con23, 0);
	lrd_stmt(Csr1280, "TableQualifier=MAINDB;TableOwner=dbo;TableName=sysdiagrams;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1280, BCInfo_D243, 0);
	lrd_fetch(Csr1280, -5, 1, 0, PrintRow68, 0);
	GRID(68);
	lrd_close_cursor(&Csr1280, 0);
	lrd_open_cursor(&Csr1281, Con23, 0);
	lrd_stmt(Csr1281, "TableQualifier=MAINDB;TableOwner=dbo;TableName=sysdiagrams;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1281, BCInfo_D247, 0);
	lrd_fetch(Csr1281, -1, 1, 0, PrintRow70, 0);
	GRID(70);
	lrd_close_cursor(&Csr1281, 0);
	lrd_open_cursor(&Csr1282, Con23, 0);
	lrd_stmt(Csr1282, "TableQualifier=MAINDB;TableOwner=dbo;TableName=sysdiagrams;Unique="
        "SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1282, BCInfo_D258, 0);
	lrd_fetch(Csr1282, -4, 1, 0, PrintRow72, 0);
	GRID(72);
	lrd_close_cursor(&Csr1282, 0);
	lrd_open_cursor(&Csr1283, Con23, 0);
	lrd_stmt(Csr1283, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=sysdiagrams;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1283, BCInfo_D263, 0);
	lrd_fetch(Csr1283, 0, 1, 0, PrintRow74, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1283, 0);
	lrd_open_cursor(&Csr1284, Con23, 0);
	lrd_stmt(Csr1284, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName=sysdiagrams;"
        "FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1284, BCInfo_D268, 0);
	lrd_fetch(Csr1284, 0, 1, 0, PrintRow76, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1284, 0);
	lrd_open_cursor(&Csr1285, Con23, 0);
	lrd_stmt(Csr1285, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_BALACE;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1285, BCInfo_D277, 0);
	lrd_fetch(Csr1285, -5, 1, 0, PrintRow78, 0);
	GRID(78);
	lrd_close_cursor(&Csr1285, 0);
	lrd_open_cursor(&Csr1286, Con23, 0);
	lrd_stmt(Csr1286, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_BALACE;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1286, BCInfo_D281, 0);
	lrd_fetch(Csr1286, -3, 1, 0, PrintRow80, 0);
	GRID(80);
	lrd_close_cursor(&Csr1286, 0);
	lrd_open_cursor(&Csr1287, Con23, 0);
	lrd_stmt(Csr1287, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_BALACE;"
        "Unique=SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1287, BCInfo_D292, 0);
	lrd_fetch(Csr1287, -4, 1, 0, PrintRow82, 0);
	GRID(82);
	lrd_close_cursor(&Csr1287, 0);
	lrd_open_cursor(&Csr1288, Con23, 0);
	lrd_stmt(Csr1288, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_ACC_BALACE;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1288, BCInfo_D297, 0);
	lrd_fetch(Csr1288, 0, 1, 0, PrintRow84, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1288, 0);
	lrd_open_cursor(&Csr1289, Con23, 0);
	lrd_stmt(Csr1289, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_ACC_BALACE;FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1289, BCInfo_D302, 0);
	lrd_fetch(Csr1289, 0, 1, 0, PrintRow86, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1289, 0);
	lrd_open_cursor(&Csr1290, Con23, 0);
	lrd_stmt(Csr1290, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_BLOCK;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1290, BCInfo_D311, 0);
	lrd_fetch(Csr1290, -3, 1, 0, PrintRow88, 0);
	GRID(88);
	lrd_close_cursor(&Csr1290, 0);
	lrd_open_cursor(&Csr1291, Con23, 0);
	lrd_stmt(Csr1291, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_BLOCK;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1291, BCInfo_D315, 0);
	lrd_fetch(Csr1291, -1, 1, 0, PrintRow90, 0);
	GRID(90);
	lrd_close_cursor(&Csr1291, 0);
	lrd_open_cursor(&Csr1292, Con23, 0);
	lrd_stmt(Csr1292, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_BLOCK;"
        "Unique=SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1292, BCInfo_D326, 0);
	lrd_fetch(Csr1292, -4, 1, 0, PrintRow92, 0);
	GRID(92);
	lrd_close_cursor(&Csr1292, 0);
	lrd_open_cursor(&Csr1293, Con23, 0);
	lrd_stmt(Csr1293, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_ACC_BLOCK;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1293, BCInfo_D331, 0);
	lrd_fetch(Csr1293, -1, 1, 0, PrintRow94, 0);
	GRID(94);
	lrd_close_cursor(&Csr1293, 0);
	lrd_open_cursor(&Csr1294, Con23, 0);
	lrd_stmt(Csr1294, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName=UMCS_ACC_BLOCK;"
        "FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1294, BCInfo_D336, 0);
	lrd_fetch(Csr1294, 0, 1, 0, PrintRow96, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1294, 0);
	lrd_open_cursor(&Csr1295, Con23, 0);
	lrd_stmt(Csr1295, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_BLOCK_CODE;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1295, BCInfo_D345, 0);
	lrd_fetch(Csr1295, -3, 1, 0, PrintRow98, 0);
	GRID(98);
	lrd_close_cursor(&Csr1295, 0);
	lrd_open_cursor(&Csr1296, Con23, 0);
	lrd_stmt(Csr1296, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_BLOCK_CODE;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1296, BCInfo_D349, 0);
	lrd_fetch(Csr1296, -1, 1, 0, PrintRow100, 0);
	GRID(100);
	lrd_close_cursor(&Csr1296, 0);
	lrd_open_cursor(&Csr1297, Con23, 0);
	lrd_stmt(Csr1297, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_BLOCK_CODE;"
        "Unique=SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1297, BCInfo_D360, 0);
	lrd_fetch(Csr1297, -3, 1, 0, PrintRow102, 0);
	GRID(102);
	lrd_close_cursor(&Csr1297, 0);
	lrd_open_cursor(&Csr1298, Con23, 0);
	lrd_stmt(Csr1298, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_ACC_BLOCK_CODE;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1298, BCInfo_D365, 0);
	lrd_fetch(Csr1298, -1, 1, 0, PrintRow104, 0);
	GRID(104);
	lrd_close_cursor(&Csr1298, 0);
	lrd_open_cursor(&Csr1299, Con23, 0);
	lrd_stmt(Csr1299, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_ACC_BLOCK_CODE;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1299, BCInfo_D370, 0);
	lrd_fetch(Csr1299, -1, 1, 0, PrintRow106, 0);
	GRID(106);
	lrd_close_cursor(&Csr1299, 0);
	lrd_open_cursor(&Csr1300, Con23, 0);
	lrd_stmt(Csr1300, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_BLOCK_TYPE;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1300, BCInfo_D379, 0);
	lrd_fetch(Csr1300, -2, 1, 0, PrintRow108, 0);
	GRID(108);
	lrd_close_cursor(&Csr1300, 0);
	lrd_open_cursor(&Csr1301, Con23, 0);
	lrd_stmt(Csr1301, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_BLOCK_TYPE;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1301, BCInfo_D383, 0);
	lrd_fetch(Csr1301, -1, 1, 0, PrintRow110, 0);
	GRID(110);
	lrd_close_cursor(&Csr1301, 0);
	lrd_open_cursor(&Csr1302, Con23, 0);
	lrd_stmt(Csr1302, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_BLOCK_TYPE;"
        "Unique=SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1302, BCInfo_D394, 0);
	lrd_fetch(Csr1302, -2, 1, 0, PrintRow112, 0);
	GRID(112);
	lrd_close_cursor(&Csr1302, 0);
	lrd_open_cursor(&Csr1303, Con23, 0);
	lrd_stmt(Csr1303, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_ACC_BLOCK_TYPE;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1303, BCInfo_D399, 0);
	lrd_fetch(Csr1303, 0, 1, 0, PrintRow114, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1303, 0);
	lrd_open_cursor(&Csr1304, Con23, 0);
	lrd_stmt(Csr1304, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_ACC_BLOCK_TYPE;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1304, BCInfo_D404, 0);
	lrd_fetch(Csr1304, -1, 1, 0, PrintRow116, 0);
	GRID(116);
	lrd_close_cursor(&Csr1304, 0);
	lrd_open_cursor(&Csr1305, Con23, 0);
	lrd_stmt(Csr1305, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_CHANGE;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1305, BCInfo_D413, 0);
	lrd_fetch(Csr1305, -4, 1, 0, PrintRow118, 0);
	GRID(118);
	lrd_close_cursor(&Csr1305, 0);
	lrd_open_cursor(&Csr1306, Con23, 0);
	lrd_stmt(Csr1306, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_CHANGE;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1306, BCInfo_D417, 0);
	lrd_fetch(Csr1306, 0, 1, 0, PrintRow120, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1306, 0);
	lrd_open_cursor(&Csr1307, Con23, 0);
	lrd_stmt(Csr1307, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_CHANGE;"
        "Unique=SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1307, BCInfo_D428, 0);
	lrd_fetch(Csr1307, 2, 1, 0, PrintRow122, 0);
	GRID(122);
	lrd_close_cursor(&Csr1307, 0);
	lrd_open_cursor(&Csr1308, Con23, 0);
	lrd_stmt(Csr1308, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_ACC_CHANGE;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1308, BCInfo_D433, 0);
	lrd_fetch(Csr1308, 0, 1, 0, PrintRow124, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1308, 0);
	lrd_open_cursor(&Csr1309, Con23, 0);
	lrd_stmt(Csr1309, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_ACC_CHANGE;FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1309, BCInfo_D438, 0);
	lrd_fetch(Csr1309, 0, 1, 0, PrintRow126, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1309, 0);
	lrd_open_cursor(&Csr1310, Con23, 0);
	lrd_stmt(Csr1310, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_MODE;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1310, BCInfo_D447, 0);
	lrd_fetch(Csr1310, -2, 1, 0, PrintRow128, 0);
	GRID(128);
	lrd_close_cursor(&Csr1310, 0);
	lrd_open_cursor(&Csr1311, Con23, 0);
	lrd_stmt(Csr1311, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_MODE;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1311, BCInfo_D451, 0);
	lrd_fetch(Csr1311, -1, 1, 0, PrintRow130, 0);
	GRID(130);
	lrd_close_cursor(&Csr1311, 0);
	lrd_open_cursor(&Csr1312, Con23, 0);
	lrd_stmt(Csr1312, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_MODE;Unique="
        "SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1312, BCInfo_D462, 0);
	lrd_fetch(Csr1312, -2, 1, 0, PrintRow132, 0);
	GRID(132);
	lrd_close_cursor(&Csr1312, 0);
	lrd_open_cursor(&Csr1313, Con23, 0);
	lrd_stmt(Csr1313, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_ACC_MODE;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1313, BCInfo_D467, 0);
	lrd_fetch(Csr1313, 0, 1, 0, PrintRow134, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1313, 0);
	lrd_open_cursor(&Csr1314, Con23, 0);
	lrd_stmt(Csr1314, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName=UMCS_ACC_MODE;"
        "FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1314, BCInfo_D472, 0);
	lrd_fetch(Csr1314, -1, 1, 0, PrintRow136, 0);
	GRID(136);
	lrd_close_cursor(&Csr1314, 0);
	lrd_open_cursor(&Csr1315, Con23, 0);
	lrd_stmt(Csr1315, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_ACC_OFFER_REQUEST;ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1315, BCInfo_D481, 0);
	lrd_fetch(Csr1315, -3, 1, 0, PrintRow138, 0);
	GRID(138);
	lrd_close_cursor(&Csr1315, 0);
	lrd_open_cursor(&Csr1316, Con23, 0);
	lrd_stmt(Csr1316, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_ACC_OFFER_REQUEST;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1316, BCInfo_D485, 0);
	lrd_fetch(Csr1316, -1, 1, 0, PrintRow140, 0);
	GRID(140);
	lrd_close_cursor(&Csr1316, 0);
	lrd_open_cursor(&Csr1317, Con23, 0);
	lrd_stmt(Csr1317, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_ACC_OFFER_REQUEST;Unique=SQL_INDEX_ALL;Accuracy="
        "SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1317, BCInfo_D496, 0);
	lrd_fetch(Csr1317, -2, 1, 0, PrintRow142, 0);
	GRID(142);
	lrd_close_cursor(&Csr1317, 0);
	lrd_open_cursor(&Csr1318, Con23, 0);
	lrd_stmt(Csr1318, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_ACC_OFFER_REQUEST;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1318, BCInfo_D501, 0);
	lrd_fetch(Csr1318, 0, 1, 0, PrintRow144, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1318, 0);
	lrd_open_cursor(&Csr1319, Con23, 0);
	lrd_stmt(Csr1319, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_ACC_OFFER_REQUEST;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1319, BCInfo_D506, 0);
	lrd_fetch(Csr1319, 0, 1, 0, PrintRow146, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1319, 0);
	lrd_open_cursor(&Csr1320, Con23, 0);
	lrd_stmt(Csr1320, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_TYPE;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1320, BCInfo_D515, 0);
	lrd_fetch(Csr1320, -2, 1, 0, PrintRow148, 0);
	GRID(148);
	lrd_close_cursor(&Csr1320, 0);
	lrd_open_cursor(&Csr1321, Con23, 0);
	lrd_stmt(Csr1321, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_TYPE;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1321, BCInfo_D519, 0);
	lrd_fetch(Csr1321, -1, 1, 0, PrintRow150, 0);
	GRID(150);
	lrd_close_cursor(&Csr1321, 0);
	lrd_open_cursor(&Csr1322, Con23, 0);
	lrd_stmt(Csr1322, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_TYPE;Unique="
        "SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1322, BCInfo_D530, 0);
	lrd_fetch(Csr1322, -2, 1, 0, PrintRow152, 0);
	GRID(152);
	lrd_close_cursor(&Csr1322, 0);
	lrd_open_cursor(&Csr1323, Con23, 0);
	lrd_stmt(Csr1323, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_ACC_TYPE;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1323, BCInfo_D535, 0);
	lrd_fetch(Csr1323, 0, 1, 0, PrintRow154, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1323, 0);
	lrd_open_cursor(&Csr1324, Con23, 0);
	lrd_stmt(Csr1324, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName=UMCS_ACC_TYPE;"
        "FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1324, BCInfo_D540, 0);
	lrd_fetch(Csr1324, -1, 1, 0, PrintRow156, 0);
	GRID(156);
	lrd_close_cursor(&Csr1324, 0);
	lrd_open_cursor(&Csr1325, Con23, 0);
	lrd_stmt(Csr1325, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_ACC_UNBLOCK_TYPE;ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1325, BCInfo_D549, 0);
	lrd_fetch(Csr1325, -4, 1, 0, PrintRow158, 0);
	GRID(158);
	lrd_close_cursor(&Csr1325, 0);
	lrd_open_cursor(&Csr1326, Con23, 0);
	lrd_stmt(Csr1326, 
        "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACC_UNBLOCK_TYPE;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1326, BCInfo_D553, 0);
	lrd_fetch(Csr1326, -1, 1, 0, PrintRow160, 0);
	GRID(160);
	lrd_close_cursor(&Csr1326, 0);
	lrd_open_cursor(&Csr1327, Con23, 0);
	lrd_stmt(Csr1327, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_ACC_UNBLOCK_TYPE;Unique=SQL_INDEX_ALL;Accuracy="
        "SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1327, BCInfo_D564, 0);
	lrd_fetch(Csr1327, -2, 1, 0, PrintRow162, 0);
	GRID(162);
	lrd_close_cursor(&Csr1327, 0);
	lrd_open_cursor(&Csr1328, Con23, 0);
	lrd_stmt(Csr1328, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_ACC_UNBLOCK_TYPE;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1328, BCInfo_D569, 0);
	lrd_fetch(Csr1328, 0, 1, 0, PrintRow164, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1328, 0);
	lrd_open_cursor(&Csr1329, Con23, 0);
	lrd_stmt(Csr1329, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_ACC_UNBLOCK_TYPE;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1329, BCInfo_D574, 0);
	lrd_fetch(Csr1329, 0, 1, 0, PrintRow166, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1329, 0);
	lrd_open_cursor(&Csr1330, Con23, 0);
	lrd_stmt(Csr1330, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACCOUNT;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1330, BCInfo_D583, 0);
	lrd_fetch(Csr1330, -25, 1, 0, PrintRow168, 0);
	GRID(168);
	lrd_close_cursor(&Csr1330, 0);
	lrd_open_cursor(&Csr1331, Con23, 0);
	lrd_stmt(Csr1331, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACCOUNT;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1331, BCInfo_D587, 0);
	lrd_fetch(Csr1331, -1, 1, 0, PrintRow170, 0);
	GRID(170);
	lrd_close_cursor(&Csr1331, 0);
	lrd_open_cursor(&Csr1332, Con23, 0);
	lrd_stmt(Csr1332, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACCOUNT;Unique="
        "SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1332, BCInfo_D598, 0);
	lrd_fetch(Csr1332, 2, 1, 0, PrintRow172, 0);
	GRID(172);
	lrd_close_cursor(&Csr1332, 0);
	lrd_open_cursor(&Csr1333, Con23, 0);
	lrd_stmt(Csr1333, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_ACCOUNT;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1333, BCInfo_D603, 0);
	lrd_fetch(Csr1333, -3, 1, 0, PrintRow174, 0);
	GRID(174);
	lrd_close_cursor(&Csr1333, 0);
	lrd_open_cursor(&Csr1334, Con23, 0);
	lrd_stmt(Csr1334, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName=UMCS_ACCOUNT;"
        "FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1334, BCInfo_D608, 0);
	lrd_fetch(Csr1334, -2, 1, 0, PrintRow176, 0);
	GRID(176);
	lrd_close_cursor(&Csr1334, 0);
	lrd_open_cursor(&Csr1335, Con23, 0);
	lrd_stmt(Csr1335, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_ACCOUNT_CATEGORY_FRAUD;ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1335, BCInfo_D617, 0);
	lrd_fetch(Csr1335, -5, 1, 0, PrintRow178, 0);
	GRID(178);
	lrd_close_cursor(&Csr1335, 0);
	lrd_open_cursor(&Csr1336, Con23, 0);
	lrd_stmt(Csr1336, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_ACCOUNT_CATEGORY_FRAUD;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1336, BCInfo_D621, 0);
	lrd_fetch(Csr1336, -4, 1, 0, PrintRow180, 0);
	GRID(180);
	lrd_close_cursor(&Csr1336, 0);
	lrd_open_cursor(&Csr1337, Con23, 0);
	lrd_stmt(Csr1337, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_ACCOUNT_CATEGORY_FRAUD;Unique=SQL_INDEX_ALL;Accuracy="
        "SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1337, BCInfo_D632, 0);
	lrd_fetch(Csr1337, -5, 1, 0, PrintRow182, 0);
	GRID(182);
	lrd_close_cursor(&Csr1337, 0);
	lrd_open_cursor(&Csr1338, Con23, 0);
	lrd_stmt(Csr1338, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName="
        "UMCS_ACCOUNT_CATEGORY_FRAUD;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1338, BCInfo_D637, 0);
	lrd_fetch(Csr1338, 0, 1, 0, PrintRow184, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1338, 0);
	lrd_open_cursor(&Csr1339, Con23, 0);
	lrd_stmt(Csr1339, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_ACCOUNT_CATEGORY_FRAUD;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1339, BCInfo_D642, 0);
	lrd_fetch(Csr1339, 0, 1, 0, PrintRow186, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1339, 0);
	lrd_open_cursor(&Csr1340, Con23, 0);
	lrd_stmt(Csr1340, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACCOUNT_FRAUD;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1340, BCInfo_D651, 0);
	lrd_fetch(Csr1340, -4, 1, 0, PrintRow188, 0);
	GRID(188);
	lrd_close_cursor(&Csr1340, 0);
	lrd_open_cursor(&Csr1341, Con23, 0);
	lrd_stmt(Csr1341, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACCOUNT_FRAUD;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1341, BCInfo_D655, 0);
	lrd_fetch(Csr1341, -3, 1, 0, PrintRow190, 0);
	GRID(190);
	lrd_close_cursor(&Csr1341, 0);
	lrd_open_cursor(&Csr1342, Con23, 0);
	lrd_stmt(Csr1342, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ACCOUNT_FRAUD;"
        "Unique=SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1342, BCInfo_D666, 0);
	lrd_fetch(Csr1342, 2, 1, 0, PrintRow192, 0);
	GRID(192);
	lrd_close_cursor(&Csr1342, 0);
	lrd_open_cursor(&Csr1343, Con23, 0);
	lrd_stmt(Csr1343, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_ACCOUNT_FRAUD;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1343, BCInfo_D671, 0);
	lrd_fetch(Csr1343, 0, 1, 0, PrintRow194, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1343, 0);
	lrd_open_cursor(&Csr1344, Con23, 0);
	lrd_stmt(Csr1344, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_ACCOUNT_FRAUD;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1344, BCInfo_D676, 0);
	lrd_fetch(Csr1344, 0, 1, 0, PrintRow196, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1344, 0);
	lrd_open_cursor(&Csr1345, Con23, 0);
	lrd_stmt(Csr1345, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_ACCOUNT_GOOD_FRAUD;ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1345, BCInfo_D685, 0);
	lrd_fetch(Csr1345, -5, 1, 0, PrintRow198, 0);
	GRID(198);
	lrd_close_cursor(&Csr1345, 0);
	lrd_open_cursor(&Csr1346, Con23, 0);
	lrd_stmt(Csr1346, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_ACCOUNT_GOOD_FRAUD;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1346, BCInfo_D689, 0);
	lrd_fetch(Csr1346, -4, 1, 0, PrintRow200, 0);
	GRID(200);
	lrd_close_cursor(&Csr1346, 0);
	lrd_open_cursor(&Csr1347, Con23, 0);
	lrd_stmt(Csr1347, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_ACCOUNT_GOOD_FRAUD;Unique=SQL_INDEX_ALL;Accuracy="
        "SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1347, BCInfo_D700, 0);
	lrd_fetch(Csr1347, 2, 1, 0, PrintRow202, 0);
	GRID(202);
	lrd_close_cursor(&Csr1347, 0);
	lrd_open_cursor(&Csr1348, Con23, 0);
	lrd_stmt(Csr1348, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_ACCOUNT_GOOD_FRAUD;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1348, BCInfo_D705, 0);
	lrd_fetch(Csr1348, 0, 1, 0, PrintRow204, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1348, 0);
	lrd_open_cursor(&Csr1349, Con23, 0);
	lrd_stmt(Csr1349, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_ACCOUNT_GOOD_FRAUD;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1349, BCInfo_D710, 0);
	lrd_fetch(Csr1349, 0, 1, 0, PrintRow206, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1349, 0);
	lrd_open_cursor(&Csr1350, Con23, 0);
	lrd_stmt(Csr1350, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_ACCOUNT_TYPE_BLOCK_BALANS;ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1350, BCInfo_D719, 0);
	lrd_fetch(Csr1350, -1, 1, 0, PrintRow208, 0);
	GRID(208);
	lrd_close_cursor(&Csr1350, 0);
	lrd_open_cursor(&Csr1351, Con23, 0);
	lrd_stmt(Csr1351, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_ACCOUNT_TYPE_BLOCK_BALANS;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1351, BCInfo_D723, 0);
	lrd_fetch(Csr1351, -1, 1, 0, PrintRow210, 0);
	GRID(210);
	lrd_close_cursor(&Csr1351, 0);
	lrd_open_cursor(&Csr1352, Con23, 0);
	lrd_stmt(Csr1352, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_ACCOUNT_TYPE_BLOCK_BALANS;Unique=SQL_INDEX_ALL;"
        "Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1352, BCInfo_D734, 0);
	lrd_fetch(Csr1352, -2, 1, 0, PrintRow212, 0);
	GRID(212);
	lrd_close_cursor(&Csr1352, 0);
	lrd_open_cursor(&Csr1353, Con23, 0);
	lrd_stmt(Csr1353, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName="
        "UMCS_ACCOUNT_TYPE_BLOCK_BALANS;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1353, BCInfo_D739, 0);
	lrd_fetch(Csr1353, 0, 1, 0, PrintRow214, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1353, 0);
	lrd_open_cursor(&Csr1354, Con23, 0);
	lrd_stmt(Csr1354, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_ACCOUNT_TYPE_BLOCK_BALANS;FkTableQualifier=;"
        "FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1354, BCInfo_D744, 0);
	lrd_fetch(Csr1354, 0, 1, 0, PrintRow216, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1354, 0);
	lrd_open_cursor(&Csr1355, Con23, 0);
	lrd_stmt(Csr1355, 
        "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_BANK;ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1355, BCInfo_D753, 0);
	lrd_fetch(Csr1355, -14, 1, 0, PrintRow218, 0);
	GRID(218);
	lrd_close_cursor(&Csr1355, 0);
	lrd_open_cursor(&Csr1356, Con23, 0);
	lrd_stmt(Csr1356, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_BANK;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1356, BCInfo_D757, 0);
	lrd_fetch(Csr1356, -1, 1, 0, PrintRow220, 0);
	GRID(220);
	lrd_close_cursor(&Csr1356, 0);
	lrd_open_cursor(&Csr1357, Con23, 0);
	lrd_stmt(Csr1357, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_BANK;Unique="
        "SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1357, BCInfo_D768, 0);
	lrd_fetch(Csr1357, -2, 1, 0, PrintRow222, 0);
	GRID(222);
	lrd_close_cursor(&Csr1357, 0);
	lrd_open_cursor(&Csr1358, Con23, 0);
	lrd_stmt(Csr1358, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_BANK;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1358, BCInfo_D773, 0);
	lrd_fetch(Csr1358, -1, 1, 0, PrintRow224, 0);
	GRID(224);
	lrd_close_cursor(&Csr1358, 0);
	lrd_open_cursor(&Csr1359, Con23, 0);
	lrd_stmt(Csr1359, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName=UMCS_BANK;"
        "FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1359, BCInfo_D778, 0);
	lrd_fetch(Csr1359, -2, 1, 0, PrintRow226, 0);
	GRID(226);
	lrd_close_cursor(&Csr1359, 0);
	lrd_open_cursor(&Csr1360, Con23, 0);
	lrd_stmt(Csr1360, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_BEE_PAY_XP;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1360, BCInfo_D787, 0);
	lrd_fetch(Csr1360, -10, 1, 0, PrintRow228, 0);
	GRID(228);
	lrd_close_cursor(&Csr1360, 0);
	lrd_open_cursor(&Csr1361, Con23, 0);
	lrd_stmt(Csr1361, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_BEE_PAY_XP;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1361, BCInfo_D791, 0);
	lrd_fetch(Csr1361, -1, 1, 0, PrintRow230, 0);
	GRID(230);
	lrd_close_cursor(&Csr1361, 0);
	lrd_open_cursor(&Csr1362, Con23, 0);
	lrd_stmt(Csr1362, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_BEE_PAY_XP;"
        "Unique=SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1362, BCInfo_D802, 0);
	lrd_fetch(Csr1362, 2, 1, 0, PrintRow232, 0);
	GRID(232);
	lrd_close_cursor(&Csr1362, 0);
	lrd_open_cursor(&Csr1363, Con23, 0);
	lrd_stmt(Csr1363, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_BEE_PAY_XP;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1363, BCInfo_D807, 0);
	lrd_fetch(Csr1363, 0, 1, 0, PrintRow234, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1363, 0);
	lrd_open_cursor(&Csr1364, Con23, 0);
	lrd_stmt(Csr1364, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_BEE_PAY_XP;FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1364, BCInfo_D812, 0);
	lrd_fetch(Csr1364, 0, 1, 0, PrintRow236, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1364, 0);
	lrd_open_cursor(&Csr1365, Con23, 0);
	lrd_stmt(Csr1365, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_BP_QUEUE;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1365, BCInfo_D821, 0);
	lrd_fetch(Csr1365, -9, 1, 0, PrintRow238, 0);
	GRID(238);
	lrd_close_cursor(&Csr1365, 0);
	lrd_open_cursor(&Csr1366, Con23, 0);
	lrd_stmt(Csr1366, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_BP_QUEUE;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1366, BCInfo_D825, 0);
	lrd_fetch(Csr1366, -1, 1, 0, PrintRow240, 0);
	GRID(240);
	lrd_close_cursor(&Csr1366, 0);
	lrd_open_cursor(&Csr1367, Con23, 0);
	lrd_stmt(Csr1367, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_BP_QUEUE;Unique="
        "SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1367, BCInfo_D836, 0);
	lrd_fetch(Csr1367, -2, 1, 0, PrintRow242, 0);
	GRID(242);
	lrd_close_cursor(&Csr1367, 0);
	lrd_open_cursor(&Csr1368, Con23, 0);
	lrd_stmt(Csr1368, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_BP_QUEUE;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1368, BCInfo_D841, 0);
	lrd_fetch(Csr1368, 0, 1, 0, PrintRow244, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1368, 0);
	lrd_open_cursor(&Csr1369, Con23, 0);
	lrd_stmt(Csr1369, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName=UMCS_BP_QUEUE;"
        "FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1369, BCInfo_D846, 0);
	lrd_fetch(Csr1369, 0, 1, 0, PrintRow246, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1369, 0);
	lrd_open_cursor(&Csr1370, Con23, 0);
	lrd_stmt(Csr1370, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_BUSINESS_SITUATION;ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1370, BCInfo_D855, 0);
	lrd_fetch(Csr1370, -6, 1, 0, PrintRow248, 0);
	GRID(248);
	lrd_close_cursor(&Csr1370, 0);
	lrd_open_cursor(&Csr1371, Con23, 0);
	lrd_stmt(Csr1371, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_BUSINESS_SITUATION;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1371, BCInfo_D859, 0);
	lrd_fetch(Csr1371, -1, 1, 0, PrintRow250, 0);
	GRID(250);
	lrd_close_cursor(&Csr1371, 0);
	lrd_open_cursor(&Csr1372, Con23, 0);
	lrd_stmt(Csr1372, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_BUSINESS_SITUATION;Unique=SQL_INDEX_ALL;Accuracy="
        "SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1372, BCInfo_D870, 0);
	lrd_fetch(Csr1372, -2, 1, 0, PrintRow252, 0);
	GRID(252);
	lrd_close_cursor(&Csr1372, 0);
	lrd_open_cursor(&Csr1373, Con23, 0);
	lrd_stmt(Csr1373, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_BUSINESS_SITUATION;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1373, BCInfo_D875, 0);
	lrd_fetch(Csr1373, 0, 1, 0, PrintRow254, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1373, 0);
	lrd_open_cursor(&Csr1374, Con23, 0);
	lrd_stmt(Csr1374, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_BUSINESS_SITUATION;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1374, BCInfo_D880, 0);
	lrd_fetch(Csr1374, 0, 1, 0, PrintRow256, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1374, 0);
	lrd_open_cursor(&Csr1375, Con23, 0);
	lrd_stmt(Csr1375, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_CHANNEL;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1375, BCInfo_D889, 0);
	lrd_fetch(Csr1375, -2, 1, 0, PrintRow258, 0);
	GRID(258);
	lrd_close_cursor(&Csr1375, 0);
	lrd_open_cursor(&Csr1376, Con23, 0);
	lrd_stmt(Csr1376, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_CHANNEL;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1376, BCInfo_D893, 0);
	lrd_fetch(Csr1376, -1, 1, 0, PrintRow260, 0);
	GRID(260);
	lrd_close_cursor(&Csr1376, 0);
	lrd_open_cursor(&Csr1377, Con23, 0);
	lrd_stmt(Csr1377, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_CHANNEL;Unique="
        "SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1377, BCInfo_D904, 0);
	lrd_fetch(Csr1377, -2, 1, 0, PrintRow262, 0);
	GRID(262);
	lrd_close_cursor(&Csr1377, 0);
	lrd_open_cursor(&Csr1378, Con23, 0);
	lrd_stmt(Csr1378, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_CHANNEL;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1378, BCInfo_D909, 0);
	lrd_fetch(Csr1378, 0, 1, 0, PrintRow264, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1378, 0);
	lrd_open_cursor(&Csr1379, Con23, 0);
	lrd_stmt(Csr1379, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName=UMCS_CHANNEL;"
        "FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1379, BCInfo_D914, 0);
	lrd_fetch(Csr1379, -1, 1, 0, PrintRow266, 0);
	GRID(266);
	lrd_close_cursor(&Csr1379, 0);
	lrd_open_cursor(&Csr1380, Con23, 0);
	lrd_stmt(Csr1380, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_CORRELATION_PROCESS;ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1380, BCInfo_D923, 0);
	lrd_fetch(Csr1380, -3, 1, 0, PrintRow268, 0);
	GRID(268);
	lrd_close_cursor(&Csr1380, 0);
	lrd_open_cursor(&Csr1381, Con23, 0);
	lrd_stmt(Csr1381, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_CORRELATION_PROCESS;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1381, BCInfo_D927, 0);
	lrd_fetch(Csr1381, 0, 1, 0, PrintRow270, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1381, 0);
	lrd_open_cursor(&Csr1382, Con23, 0);
	lrd_stmt(Csr1382, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_CORRELATION_PROCESS;Unique=SQL_INDEX_ALL;Accuracy="
        "SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1382, BCInfo_D938, 0);
	lrd_fetch(Csr1382, -2, 1, 0, PrintRow272, 0);
	GRID(272);
	lrd_close_cursor(&Csr1382, 0);
	lrd_open_cursor(&Csr1383, Con23, 0);
	lrd_stmt(Csr1383, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_CORRELATION_PROCESS;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1383, BCInfo_D943, 0);
	lrd_fetch(Csr1383, 0, 1, 0, PrintRow274, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1383, 0);
	lrd_open_cursor(&Csr1384, Con23, 0);
	lrd_stmt(Csr1384, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_CORRELATION_PROCESS;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1384, BCInfo_D948, 0);
	lrd_fetch(Csr1384, 0, 1, 0, PrintRow276, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1384, 0);
	lrd_open_cursor(&Csr1385, Con23, 0);
	lrd_stmt(Csr1385, 
        "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_CUR;ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1385, BCInfo_D957, 0);
	lrd_fetch(Csr1385, -3, 1, 0, PrintRow278, 0);
	GRID(278);
	lrd_close_cursor(&Csr1385, 0);
	lrd_open_cursor(&Csr1386, Con23, 0);
	lrd_stmt(Csr1386, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_CUR;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1386, BCInfo_D961, 0);
	lrd_fetch(Csr1386, -1, 1, 0, PrintRow280, 0);
	GRID(280);
	lrd_close_cursor(&Csr1386, 0);
	lrd_open_cursor(&Csr1387, Con23, 0);
	lrd_stmt(Csr1387, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_CUR;Unique="
        "SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1387, BCInfo_D972, 0);
	lrd_fetch(Csr1387, -3, 1, 0, PrintRow282, 0);
	GRID(282);
	lrd_close_cursor(&Csr1387, 0);
	lrd_open_cursor(&Csr1388, Con23, 0);
	lrd_stmt(Csr1388, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_CUR;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1388, BCInfo_D977, 0);
	lrd_fetch(Csr1388, 0, 1, 0, PrintRow284, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1388, 0);
	lrd_open_cursor(&Csr1389, Con23, 0);
	lrd_stmt(Csr1389, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName=UMCS_CUR;"
        "FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1389, BCInfo_D982, 0);
	lrd_fetch(Csr1389, 0, 1, 0, PrintRow286, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1389, 0);
	lrd_open_cursor(&Csr1390, Con23, 0);
	lrd_stmt(Csr1390, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ERROR_MESSAGES;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1390, BCInfo_D991, 0);
	lrd_fetch(Csr1390, -4, 1, 0, PrintRow288, 0);
	GRID(288);
	lrd_close_cursor(&Csr1390, 0);
	lrd_open_cursor(&Csr1391, Con23, 0);
	lrd_stmt(Csr1391, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ERROR_MESSAGES;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1391, BCInfo_D995, 0);
	lrd_fetch(Csr1391, -1, 1, 0, PrintRow290, 0);
	GRID(290);
	lrd_close_cursor(&Csr1391, 0);
	lrd_open_cursor(&Csr1392, Con23, 0);
	lrd_stmt(Csr1392, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_ERROR_MESSAGES;"
        "Unique=SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1392, BCInfo_D1006, 0);
	lrd_fetch(Csr1392, -2, 1, 0, PrintRow292, 0);
	GRID(292);
	lrd_close_cursor(&Csr1392, 0);
	lrd_open_cursor(&Csr1393, Con23, 0);
	lrd_stmt(Csr1393, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_ERROR_MESSAGES;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1393, BCInfo_D1011, 0);
	lrd_fetch(Csr1393, 0, 1, 0, PrintRow294, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1393, 0);
	lrd_open_cursor(&Csr1394, Con23, 0);
	lrd_stmt(Csr1394, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_ERROR_MESSAGES;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1394, BCInfo_D1016, 0);
	lrd_fetch(Csr1394, 0, 1, 0, PrintRow296, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1394, 0);
	lrd_open_cursor(&Csr1395, Con23, 0);
	lrd_stmt(Csr1395, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_FRAUD_CATEGORY;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1395, BCInfo_D1025, 0);
	lrd_fetch(Csr1395, -32, 1, 0, PrintRow298, 0);
	GRID(298);
	lrd_close_cursor(&Csr1395, 0);
	lrd_open_cursor(&Csr1396, Con23, 0);
	lrd_stmt(Csr1396, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_FRAUD_CATEGORY;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1396, BCInfo_D1029, 0);
	lrd_fetch(Csr1396, -1, 1, 0, PrintRow300, 0);
	GRID(300);
	lrd_close_cursor(&Csr1396, 0);
	lrd_open_cursor(&Csr1397, Con23, 0);
	lrd_stmt(Csr1397, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_FRAUD_CATEGORY;"
        "Unique=SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1397, BCInfo_D1040, 0);
	lrd_fetch(Csr1397, -2, 1, 0, PrintRow302, 0);
	GRID(302);
	lrd_close_cursor(&Csr1397, 0);
	lrd_open_cursor(&Csr1398, Con23, 0);
	lrd_stmt(Csr1398, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_FRAUD_CATEGORY;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1398, BCInfo_D1045, 0);
	lrd_fetch(Csr1398, 0, 1, 0, PrintRow304, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1398, 0);
	lrd_open_cursor(&Csr1399, Con23, 0);
	lrd_stmt(Csr1399, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_FRAUD_CATEGORY;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1399, BCInfo_D1050, 0);
	lrd_fetch(Csr1399, -1, 1, 0, PrintRow306, 0);
	GRID(306);
	lrd_close_cursor(&Csr1399, 0);
	lrd_open_cursor(&Csr1400, Con23, 0);
	lrd_stmt(Csr1400, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_FRAUD_CONTROL;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1400, BCInfo_D1059, 0);
	lrd_fetch(Csr1400, -2, 1, 0, PrintRow308, 0);
	GRID(308);
	lrd_close_cursor(&Csr1400, 0);
	lrd_open_cursor(&Csr1401, Con23, 0);
	lrd_stmt(Csr1401, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_FRAUD_CONTROL;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1401, BCInfo_D1063, 0);
	lrd_fetch(Csr1401, -1, 1, 0, PrintRow310, 0);
	GRID(310);
	lrd_close_cursor(&Csr1401, 0);
	lrd_open_cursor(&Csr1402, Con23, 0);
	lrd_stmt(Csr1402, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_FRAUD_CONTROL;"
        "Unique=SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1402, BCInfo_D1074, 0);
	lrd_fetch(Csr1402, -2, 1, 0, PrintRow312, 0);
	GRID(312);
	lrd_close_cursor(&Csr1402, 0);
	lrd_open_cursor(&Csr1403, Con23, 0);
	lrd_stmt(Csr1403, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_FRAUD_CONTROL;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1403, BCInfo_D1079, 0);
	lrd_fetch(Csr1403, 0, 1, 0, PrintRow314, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1403, 0);
	lrd_open_cursor(&Csr1404, Con23, 0);
	lrd_stmt(Csr1404, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_FRAUD_CONTROL;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1404, BCInfo_D1084, 0);
	lrd_fetch(Csr1404, 0, 1, 0, PrintRow316, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1404, 0);
	lrd_open_cursor(&Csr1405, Con23, 0);
	lrd_stmt(Csr1405, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_GD_CATEGORY;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1405, BCInfo_D1093, 0);
	lrd_fetch(Csr1405, -2, 1, 0, PrintRow318, 0);
	GRID(318);
	lrd_close_cursor(&Csr1405, 0);
	lrd_open_cursor(&Csr1406, Con23, 0);
	lrd_stmt(Csr1406, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_GD_CATEGORY;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1406, BCInfo_D1097, 0);
	lrd_fetch(Csr1406, -1, 1, 0, PrintRow320, 0);
	GRID(320);
	lrd_close_cursor(&Csr1406, 0);
	lrd_open_cursor(&Csr1407, Con23, 0);
	lrd_stmt(Csr1407, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_GD_CATEGORY;"
        "Unique=SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1407, BCInfo_D1108, 0);
	lrd_fetch(Csr1407, -2, 1, 0, PrintRow322, 0);
	GRID(322);
	lrd_close_cursor(&Csr1407, 0);
	lrd_open_cursor(&Csr1408, Con23, 0);
	lrd_stmt(Csr1408, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_GD_CATEGORY;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1408, BCInfo_D1113, 0);
	lrd_fetch(Csr1408, 0, 1, 0, PrintRow324, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1408, 0);
	lrd_open_cursor(&Csr1409, Con23, 0);
	lrd_stmt(Csr1409, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_GD_CATEGORY;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1409, BCInfo_D1118, 0);
	lrd_fetch(Csr1409, -1, 1, 0, PrintRow326, 0);
	GRID(326);
	lrd_close_cursor(&Csr1409, 0);
	lrd_open_cursor(&Csr1410, Con23, 0);
	lrd_stmt(Csr1410, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_GD_FRAUD_CONTROL;ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1410, BCInfo_D1127, 0);
	lrd_fetch(Csr1410, -31, 1, 0, PrintRow328, 0);
	GRID(328);
	lrd_close_cursor(&Csr1410, 0);
	lrd_open_cursor(&Csr1411, Con23, 0);
	lrd_stmt(Csr1411, 
        "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_GD_FRAUD_CONTROL;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1411, BCInfo_D1131, 0);
	lrd_fetch(Csr1411, -1, 1, 0, PrintRow330, 0);
	GRID(330);
	lrd_close_cursor(&Csr1411, 0);
	lrd_open_cursor(&Csr1412, Con23, 0);
	lrd_stmt(Csr1412, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_GD_FRAUD_CONTROL;Unique=SQL_INDEX_ALL;Accuracy="
        "SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1412, BCInfo_D1142, 0);
	lrd_fetch(Csr1412, -2, 1, 0, PrintRow332, 0);
	GRID(332);
	lrd_close_cursor(&Csr1412, 0);
	lrd_open_cursor(&Csr1413, Con23, 0);
	lrd_stmt(Csr1413, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_GD_FRAUD_CONTROL;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1413, BCInfo_D1147, 0);
	lrd_fetch(Csr1413, -1, 1, 0, PrintRow334, 0);
	GRID(334);
	lrd_close_cursor(&Csr1413, 0);
	lrd_open_cursor(&Csr1414, Con23, 0);
	lrd_stmt(Csr1414, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_GD_FRAUD_CONTROL;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1414, BCInfo_D1152, 0);
	lrd_fetch(Csr1414, 0, 1, 0, PrintRow336, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1414, 0);
	lrd_open_cursor(&Csr1415, Con23, 0);
	lrd_stmt(Csr1415, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_GOODS;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1415, BCInfo_D1161, 0);
	lrd_fetch(Csr1415, -41, 1, 0, PrintRow338, 0);
	GRID(338);
	lrd_close_cursor(&Csr1415, 0);
	lrd_open_cursor(&Csr1416, Con23, 0);
	lrd_stmt(Csr1416, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_GOODS;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1416, BCInfo_D1165, 0);
	lrd_fetch(Csr1416, -1, 1, 0, PrintRow340, 0);
	GRID(340);
	lrd_close_cursor(&Csr1416, 0);
	lrd_open_cursor(&Csr1417, Con23, 0);
	lrd_stmt(Csr1417, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_GOODS;Unique="
        "SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1417, BCInfo_D1176, 0);
	lrd_fetch(Csr1417, -6, 1, 0, PrintRow342, 0);
	GRID(342);
	lrd_close_cursor(&Csr1417, 0);
	lrd_open_cursor(&Csr1418, Con23, 0);
	lrd_stmt(Csr1418, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_GOODS;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1418, BCInfo_D1181, 0);
	lrd_fetch(Csr1418, -5, 1, 0, PrintRow344, 0);
	GRID(344);
	lrd_close_cursor(&Csr1418, 0);
	lrd_open_cursor(&Csr1419, Con23, 0);
	lrd_stmt(Csr1419, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName=UMCS_GOODS;"
        "FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1419, BCInfo_D1186, 0);
	lrd_fetch(Csr1419, -2, 1, 0, PrintRow346, 0);
	GRID(346);
	lrd_close_cursor(&Csr1419, 0);
	lrd_open_cursor(&Csr1420, Con23, 0);
	lrd_stmt(Csr1420, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_IDEMPOTENCE;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1420, BCInfo_D1195, 0);
	lrd_fetch(Csr1420, -5, 1, 0, PrintRow348, 0);
	GRID(348);
	lrd_close_cursor(&Csr1420, 0);
	lrd_open_cursor(&Csr1421, Con23, 0);
	lrd_stmt(Csr1421, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_IDEMPOTENCE;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1421, BCInfo_D1199, 0);
	lrd_fetch(Csr1421, 0, 1, 0, PrintRow350, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1421, 0);
	lrd_open_cursor(&Csr1422, Con23, 0);
	lrd_stmt(Csr1422, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_IDEMPOTENCE;"
        "Unique=SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1422, BCInfo_D1210, 0);
	lrd_fetch(Csr1422, -3, 1, 0, PrintRow352, 0);
	GRID(352);
	lrd_close_cursor(&Csr1422, 0);
	lrd_open_cursor(&Csr1423, Con23, 0);
	lrd_stmt(Csr1423, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_IDEMPOTENCE;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1423, BCInfo_D1215, 0);
	lrd_fetch(Csr1423, 0, 1, 0, PrintRow354, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1423, 0);
	lrd_open_cursor(&Csr1424, Con23, 0);
	lrd_stmt(Csr1424, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_IDEMPOTENCE;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1424, BCInfo_D1220, 0);
	lrd_fetch(Csr1424, 0, 1, 0, PrintRow356, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1424, 0);
	lrd_open_cursor(&Csr1425, Con23, 0);
	lrd_stmt(Csr1425, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_LOG_CMD_STATUS;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1425, BCInfo_D1229, 0);
	lrd_fetch(Csr1425, -2, 1, 0, PrintRow358, 0);
	GRID(358);
	lrd_close_cursor(&Csr1425, 0);
	lrd_open_cursor(&Csr1426, Con23, 0);
	lrd_stmt(Csr1426, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_LOG_CMD_STATUS;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1426, BCInfo_D1233, 0);
	lrd_fetch(Csr1426, -1, 1, 0, PrintRow360, 0);
	GRID(360);
	lrd_close_cursor(&Csr1426, 0);
	lrd_open_cursor(&Csr1427, Con23, 0);
	lrd_stmt(Csr1427, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_LOG_CMD_STATUS;"
        "Unique=SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1427, BCInfo_D1244, 0);
	lrd_fetch(Csr1427, -2, 1, 0, PrintRow362, 0);
	GRID(362);
	lrd_close_cursor(&Csr1427, 0);
	lrd_open_cursor(&Csr1428, Con23, 0);
	lrd_stmt(Csr1428, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_LOG_CMD_STATUS;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1428, BCInfo_D1249, 0);
	lrd_fetch(Csr1428, 0, 1, 0, PrintRow364, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1428, 0);
	lrd_open_cursor(&Csr1429, Con23, 0);
	lrd_stmt(Csr1429, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_LOG_CMD_STATUS;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1429, BCInfo_D1254, 0);
	lrd_fetch(Csr1429, -1, 1, 0, PrintRow366, 0);
	GRID(366);
	lrd_close_cursor(&Csr1429, 0);
	lrd_open_cursor(&Csr1430, Con23, 0);
	lrd_stmt(Csr1430, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_LOG_STATUS;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1430, BCInfo_D1263, 0);
	lrd_fetch(Csr1430, -2, 1, 0, PrintRow368, 0);
	GRID(368);
	lrd_close_cursor(&Csr1430, 0);
	lrd_open_cursor(&Csr1431, Con23, 0);
	lrd_stmt(Csr1431, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_LOG_STATUS;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1431, BCInfo_D1267, 0);
	lrd_fetch(Csr1431, -1, 1, 0, PrintRow370, 0);
	GRID(370);
	lrd_close_cursor(&Csr1431, 0);
	lrd_open_cursor(&Csr1432, Con23, 0);
	lrd_stmt(Csr1432, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_LOG_STATUS;"
        "Unique=SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1432, BCInfo_D1278, 0);
	lrd_fetch(Csr1432, -2, 1, 0, PrintRow372, 0);
	GRID(372);
	lrd_close_cursor(&Csr1432, 0);
	lrd_open_cursor(&Csr1433, Con23, 0);
	lrd_stmt(Csr1433, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_LOG_STATUS;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1433, BCInfo_D1283, 0);
	lrd_fetch(Csr1433, 0, 1, 0, PrintRow374, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1433, 0);
	lrd_open_cursor(&Csr1434, Con23, 0);
	lrd_stmt(Csr1434, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_LOG_STATUS;FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1434, BCInfo_D1288, 0);
	lrd_fetch(Csr1434, -1, 1, 0, PrintRow376, 0);
	GRID(376);
	lrd_close_cursor(&Csr1434, 0);
	lrd_open_cursor(&Csr1435, Con23, 0);
	lrd_stmt(Csr1435, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_LOG_TYPE;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1435, BCInfo_D1297, 0);
	lrd_fetch(Csr1435, -2, 1, 0, PrintRow378, 0);
	GRID(378);
	lrd_close_cursor(&Csr1435, 0);
	lrd_open_cursor(&Csr1436, Con23, 0);
	lrd_stmt(Csr1436, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_LOG_TYPE;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1436, BCInfo_D1301, 0);
	lrd_fetch(Csr1436, -1, 1, 0, PrintRow380, 0);
	GRID(380);
	lrd_close_cursor(&Csr1436, 0);
	lrd_open_cursor(&Csr1437, Con23, 0);
	lrd_stmt(Csr1437, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_LOG_TYPE;Unique="
        "SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1437, BCInfo_D1312, 0);
	lrd_fetch(Csr1437, -2, 1, 0, PrintRow382, 0);
	GRID(382);
	lrd_close_cursor(&Csr1437, 0);
	lrd_open_cursor(&Csr1438, Con23, 0);
	lrd_stmt(Csr1438, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_LOG_TYPE;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1438, BCInfo_D1317, 0);
	lrd_fetch(Csr1438, 0, 1, 0, PrintRow384, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1438, 0);
	lrd_open_cursor(&Csr1439, Con23, 0);
	lrd_stmt(Csr1439, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName=UMCS_LOG_TYPE;"
        "FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1439, BCInfo_D1322, 0);
	lrd_fetch(Csr1439, -1, 1, 0, PrintRow386, 0);
	GRID(386);
	lrd_close_cursor(&Csr1439, 0);
	lrd_open_cursor(&Csr1440, Con23, 0);
	lrd_stmt(Csr1440, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_OBJECT_STATUS;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1440, BCInfo_D1331, 0);
	lrd_fetch(Csr1440, -2, 1, 0, PrintRow388, 0);
	GRID(388);
	lrd_close_cursor(&Csr1440, 0);
	lrd_open_cursor(&Csr1441, Con23, 0);
	lrd_stmt(Csr1441, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_OBJECT_STATUS;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1441, BCInfo_D1335, 0);
	lrd_fetch(Csr1441, -1, 1, 0, PrintRow390, 0);
	GRID(390);
	lrd_close_cursor(&Csr1441, 0);
	lrd_open_cursor(&Csr1442, Con23, 0);
	lrd_stmt(Csr1442, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_OBJECT_STATUS;"
        "Unique=SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1442, BCInfo_D1346, 0);
	lrd_fetch(Csr1442, -3, 1, 0, PrintRow392, 0);
	GRID(392);
	lrd_close_cursor(&Csr1442, 0);
	lrd_open_cursor(&Csr1443, Con23, 0);
	lrd_stmt(Csr1443, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_OBJECT_STATUS;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1443, BCInfo_D1351, 0);
	lrd_fetch(Csr1443, 0, 1, 0, PrintRow394, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1443, 0);
	lrd_open_cursor(&Csr1444, Con23, 0);
	lrd_stmt(Csr1444, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_OBJECT_STATUS;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1444, BCInfo_D1356, 0);
	lrd_fetch(Csr1444, -5, 1, 0, PrintRow396, 0);
	GRID(396);
	lrd_close_cursor(&Csr1444, 0);
	lrd_open_cursor(&Csr1445, Con23, 0);
	lrd_stmt(Csr1445, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_PURCHASE_MESSAGE;ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1445, BCInfo_D1365, 0);
	lrd_fetch(Csr1445, -8, 1, 0, PrintRow398, 0);
	GRID(398);
	lrd_close_cursor(&Csr1445, 0);
	lrd_open_cursor(&Csr1446, Con23, 0);
	lrd_stmt(Csr1446, 
        "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_PURCHASE_MESSAGE;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1446, BCInfo_D1369, 0);
	lrd_fetch(Csr1446, -1, 1, 0, PrintRow400, 0);
	GRID(400);
	lrd_close_cursor(&Csr1446, 0);
	lrd_open_cursor(&Csr1447, Con23, 0);
	lrd_stmt(Csr1447, "TableQualifier=MAINDB;TableOwner=dbo;TableName="
        "UMCS_PURCHASE_MESSAGE;Unique=SQL_INDEX_ALL;Accuracy="
        "SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1447, BCInfo_D1380, 0);
	lrd_fetch(Csr1447, -2, 1, 0, PrintRow402, 0);
	GRID(402);
	lrd_close_cursor(&Csr1447, 0);
	lrd_open_cursor(&Csr1448, Con23, 0);
	lrd_stmt(Csr1448, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_PURCHASE_MESSAGE;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1448, BCInfo_D1385, 0);
	lrd_fetch(Csr1448, 0, 1, 0, PrintRow404, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1448, 0);
	lrd_open_cursor(&Csr1449, Con23, 0);
	lrd_stmt(Csr1449, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_PURCHASE_MESSAGE;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1449, BCInfo_D1390, 0);
	lrd_fetch(Csr1449, 0, 1, 0, PrintRow406, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1449, 0);
	lrd_open_cursor(&Csr1450, Con23, 0);
	lrd_stmt(Csr1450, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_REFUND_PROCESS;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1450, BCInfo_D1399, 0);
	lrd_fetch(Csr1450, -4, 1, 0, PrintRow408, 0);
	GRID(408);
	lrd_close_cursor(&Csr1450, 0);
	lrd_open_cursor(&Csr1451, Con23, 0);
	lrd_stmt(Csr1451, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_REFUND_PROCESS;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1451, BCInfo_D1403, 0);
	lrd_fetch(Csr1451, -1, 1, 0, PrintRow410, 0);
	GRID(410);
	lrd_close_cursor(&Csr1451, 0);
	lrd_open_cursor(&Csr1452, Con23, 0);
	lrd_stmt(Csr1452, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_REFUND_PROCESS;"
        "Unique=SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1452, BCInfo_D1414, 0);
	lrd_fetch(Csr1452, -2, 1, 0, PrintRow412, 0);
	GRID(412);
	lrd_close_cursor(&Csr1452, 0);
	lrd_open_cursor(&Csr1453, Con23, 0);
	lrd_stmt(Csr1453, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_REFUND_PROCESS;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1453, BCInfo_D1419, 0);
	lrd_fetch(Csr1453, 0, 1, 0, PrintRow414, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1453, 0);
	lrd_open_cursor(&Csr1454, Con23, 0);
	lrd_stmt(Csr1454, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_REFUND_PROCESS;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1454, BCInfo_D1424, 0);
	lrd_fetch(Csr1454, 0, 1, 0, PrintRow416, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1454, 0);
	lrd_open_cursor(&Csr1455, Con23, 0);
	lrd_stmt(Csr1455, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_REMOVED_HISTORY;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1455, BCInfo_D1433, 0);
	lrd_fetch(Csr1455, -14, 1, 0, PrintRow418, 0);
	GRID(418);
	lrd_close_cursor(&Csr1455, 0);
	lrd_open_cursor(&Csr1456, Con23, 0);
	lrd_stmt(Csr1456, 
        "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_REMOVED_HISTORY;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1456, BCInfo_D1437, 0);
	lrd_fetch(Csr1456, -1, 1, 0, PrintRow420, 0);
	GRID(420);
	lrd_close_cursor(&Csr1456, 0);
	lrd_open_cursor(&Csr1457, Con23, 0);
	lrd_stmt(Csr1457, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_REMOVED_HISTORY;"
        "Unique=SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1457, BCInfo_D1448, 0);
	lrd_fetch(Csr1457, 2, 1, 0, PrintRow422, 0);
	GRID(422);
	lrd_close_cursor(&Csr1457, 0);
	lrd_open_cursor(&Csr1458, Con23, 0);
	lrd_stmt(Csr1458, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_REMOVED_HISTORY;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1458, BCInfo_D1453, 0);
	lrd_fetch(Csr1458, -1, 1, 0, PrintRow424, 0);
	GRID(424);
	lrd_close_cursor(&Csr1458, 0);
	lrd_open_cursor(&Csr1459, Con23, 0);
	lrd_stmt(Csr1459, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_REMOVED_HISTORY;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1459, BCInfo_D1458, 0);
	lrd_fetch(Csr1459, 0, 1, 0, PrintRow426, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1459, 0);
	lrd_open_cursor(&Csr1460, Con23, 0);
	lrd_stmt(Csr1460, 
        "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_SEQ;ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1460, BCInfo_D1467, 0);
	lrd_fetch(Csr1460, -2, 1, 0, PrintRow428, 0);
	GRID(428);
	lrd_close_cursor(&Csr1460, 0);
	lrd_open_cursor(&Csr1461, Con23, 0);
	lrd_stmt(Csr1461, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_SEQ;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1461, BCInfo_D1471, 0);
	lrd_fetch(Csr1461, -1, 1, 0, PrintRow430, 0);
	GRID(430);
	lrd_close_cursor(&Csr1461, 0);
	lrd_open_cursor(&Csr1462, Con23, 0);
	lrd_stmt(Csr1462, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_SEQ;Unique="
        "SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1462, BCInfo_D1482, 0);
	lrd_fetch(Csr1462, -2, 1, 0, PrintRow432, 0);
	GRID(432);
	lrd_close_cursor(&Csr1462, 0);
	lrd_open_cursor(&Csr1463, Con23, 0);
	lrd_stmt(Csr1463, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_SEQ;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1463, BCInfo_D1487, 0);
	lrd_fetch(Csr1463, 0, 1, 0, PrintRow434, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1463, 0);
	lrd_open_cursor(&Csr1464, Con23, 0);
	lrd_stmt(Csr1464, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName=UMCS_SEQ;"
        "FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1464, BCInfo_D1492, 0);
	lrd_fetch(Csr1464, 0, 1, 0, PrintRow436, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1464, 0);
	lrd_open_cursor(&Csr1465, Con23, 0);
	lrd_stmt(Csr1465, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_SESSION;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1465, BCInfo_D1501, 0);
	lrd_fetch(Csr1465, -17, 1, 0, PrintRow438, 0);
	GRID(438);
	lrd_close_cursor(&Csr1465, 0);
	lrd_open_cursor(&Csr1466, Con23, 0);
	lrd_stmt(Csr1466, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_SESSION;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1466, BCInfo_D1505, 0);
	lrd_fetch(Csr1466, -1, 1, 0, PrintRow440, 0);
	GRID(440);
	lrd_close_cursor(&Csr1466, 0);
	lrd_open_cursor(&Csr1467, Con23, 0);
	lrd_stmt(Csr1467, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_SESSION;Unique="
        "SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1467, BCInfo_D1516, 0);
	lrd_fetch(Csr1467, -4, 1, 0, PrintRow442, 0);
	GRID(442);
	lrd_close_cursor(&Csr1467, 0);
	lrd_open_cursor(&Csr1468, Con23, 0);
	lrd_stmt(Csr1468, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_SESSION;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1468, BCInfo_D1521, 0);
	lrd_fetch(Csr1468, -1, 1, 0, PrintRow444, 0);
	GRID(444);
	lrd_close_cursor(&Csr1468, 0);
	lrd_open_cursor(&Csr1469, Con23, 0);
	lrd_stmt(Csr1469, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName=UMCS_SESSION;"
        "FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1469, BCInfo_D1526, 0);
	lrd_fetch(Csr1469, 0, 1, 0, PrintRow446, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1469, 0);
	lrd_open_cursor(&Csr1470, Con23, 0);
	lrd_stmt(Csr1470, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_SESSION_TEST;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1470, BCInfo_D1535, 0);
	lrd_fetch(Csr1470, -6, 1, 0, PrintRow448, 0);
	GRID(448);
	lrd_close_cursor(&Csr1470, 0);
	lrd_open_cursor(&Csr1471, Con23, 0);
	lrd_stmt(Csr1471, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_SESSION_TEST;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1471, BCInfo_D1539, 0);
	lrd_fetch(Csr1471, -1, 1, 0, PrintRow450, 0);
	GRID(450);
	lrd_close_cursor(&Csr1471, 0);
	lrd_open_cursor(&Csr1472, Con23, 0);
	lrd_stmt(Csr1472, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_SESSION_TEST;"
        "Unique=SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1472, BCInfo_D1550, 0);
	lrd_fetch(Csr1472, -2, 1, 0, PrintRow452, 0);
	GRID(452);
	lrd_close_cursor(&Csr1472, 0);
	lrd_open_cursor(&Csr1473, Con23, 0);
	lrd_stmt(Csr1473, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_SESSION_TEST;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1473, BCInfo_D1555, 0);
	lrd_fetch(Csr1473, 0, 1, 0, PrintRow454, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1473, 0);
	lrd_open_cursor(&Csr1474, Con23, 0);
	lrd_stmt(Csr1474, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_SESSION_TEST;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1474, BCInfo_D1560, 0);
	lrd_fetch(Csr1474, 0, 1, 0, PrintRow456, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1474, 0);
	lrd_open_cursor(&Csr1475, Con23, 0);
	lrd_stmt(Csr1475, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_STORE;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1475, BCInfo_D1569, 0);
	lrd_fetch(Csr1475, -20, 1, 0, PrintRow458, 0);
	GRID(458);
	lrd_close_cursor(&Csr1475, 0);
	lrd_open_cursor(&Csr1476, Con23, 0);
	lrd_stmt(Csr1476, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_STORE;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1476, BCInfo_D1573, 0);
	lrd_fetch(Csr1476, -1, 1, 0, PrintRow460, 0);
	GRID(460);
	lrd_close_cursor(&Csr1476, 0);
	lrd_open_cursor(&Csr1477, Con23, 0);
	lrd_stmt(Csr1477, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_STORE;Unique="
        "SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1477, BCInfo_D1584, 0);
	lrd_fetch(Csr1477, -2, 1, 0, PrintRow462, 0);
	GRID(462);
	lrd_close_cursor(&Csr1477, 0);
	lrd_open_cursor(&Csr1478, Con23, 0);
	lrd_stmt(Csr1478, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_STORE;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1478, BCInfo_D1589, 0);
	lrd_fetch(Csr1478, -4, 1, 0, PrintRow464, 0);
	GRID(464);
	lrd_close_cursor(&Csr1478, 0);
	lrd_open_cursor(&Csr1479, Con23, 0);
	lrd_stmt(Csr1479, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName=UMCS_STORE;"
        "FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1479, BCInfo_D1594, 0);
	lrd_fetch(Csr1479, -2, 1, 0, PrintRow466, 0);
	GRID(466);
	lrd_close_cursor(&Csr1479, 0);
	lrd_open_cursor(&Csr1480, Con23, 0);
	lrd_stmt(Csr1480, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_SYS_SETTINGS;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1480, BCInfo_D1603, 0);
	lrd_fetch(Csr1480, -2, 1, 0, PrintRow468, 0);
	GRID(468);
	lrd_close_cursor(&Csr1480, 0);
	lrd_open_cursor(&Csr1481, Con23, 0);
	lrd_stmt(Csr1481, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_SYS_SETTINGS;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1481, BCInfo_D1607, 0);
	lrd_fetch(Csr1481, -1, 1, 0, PrintRow470, 0);
	GRID(470);
	lrd_close_cursor(&Csr1481, 0);
	lrd_open_cursor(&Csr1482, Con23, 0);
	lrd_stmt(Csr1482, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_SYS_SETTINGS;"
        "Unique=SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1482, BCInfo_D1618, 0);
	lrd_fetch(Csr1482, -2, 1, 0, PrintRow472, 0);
	GRID(472);
	lrd_close_cursor(&Csr1482, 0);
	lrd_open_cursor(&Csr1483, Con23, 0);
	lrd_stmt(Csr1483, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_SYS_SETTINGS;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1483, BCInfo_D1623, 0);
	lrd_fetch(Csr1483, 0, 1, 0, PrintRow474, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1483, 0);
	lrd_open_cursor(&Csr1484, Con23, 0);
	lrd_stmt(Csr1484, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_SYS_SETTINGS;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1484, BCInfo_D1628, 0);
	lrd_fetch(Csr1484, 0, 1, 0, PrintRow476, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1484, 0);
	lrd_open_cursor(&Csr1485, Con23, 0);
	lrd_stmt(Csr1485, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_TASK_CMD;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1485, BCInfo_D1637, 0);
	lrd_fetch(Csr1485, -2, 1, 0, PrintRow478, 0);
	GRID(478);
	lrd_close_cursor(&Csr1485, 0);
	lrd_open_cursor(&Csr1486, Con23, 0);
	lrd_stmt(Csr1486, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_TASK_CMD;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1486, BCInfo_D1641, 0);
	lrd_fetch(Csr1486, -1, 1, 0, PrintRow480, 0);
	GRID(480);
	lrd_close_cursor(&Csr1486, 0);
	lrd_open_cursor(&Csr1487, Con23, 0);
	lrd_stmt(Csr1487, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_TASK_CMD;Unique="
        "SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1487, BCInfo_D1652, 0);
	lrd_fetch(Csr1487, -2, 1, 0, PrintRow482, 0);
	GRID(482);
	lrd_close_cursor(&Csr1487, 0);
	lrd_open_cursor(&Csr1488, Con23, 0);
	lrd_stmt(Csr1488, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_TASK_CMD;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1488, BCInfo_D1657, 0);
	lrd_fetch(Csr1488, 0, 1, 0, PrintRow484, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1488, 0);
	lrd_open_cursor(&Csr1489, Con23, 0);
	lrd_stmt(Csr1489, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName=UMCS_TASK_CMD;"
        "FkTableQualifier=;FkTableOwner=;FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1489, BCInfo_D1662, 0);
	lrd_fetch(Csr1489, 0, 1, 0, PrintRow486, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1489, 0);
	lrd_open_cursor(&Csr1490, Con23, 0);
	lrd_stmt(Csr1490, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_TRANSACTION_LOG;"
        "ColumnName=;", -1, 3, 2 /*SQLColumns*/, 0);
	lrd_bind_cols(Csr1490, BCInfo_D1671, 0);
	lrd_fetch(Csr1490, -58, 1, 0, PrintRow488, 0);
	GRID(488);
	lrd_close_cursor(&Csr1490, 0);
	lrd_open_cursor(&Csr1491, Con23, 0);
	lrd_stmt(Csr1491, 
        "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_TRANSACTION_LOG;", -1, 3, 5 /*SQLPrimaryKeys*/, 0);
	lrd_bind_cols(Csr1491, BCInfo_D1675, 0);
	lrd_fetch(Csr1491, -1, 1, 0, PrintRow490, 0);
	GRID(490);
	lrd_close_cursor(&Csr1491, 0);
	lrd_open_cursor(&Csr1492, Con23, 0);
	lrd_stmt(Csr1492, "TableQualifier=MAINDB;TableOwner=dbo;TableName=UMCS_TRANSACTION_LOG;"
        "Unique=SQL_INDEX_ALL;Accuracy=SQL_QUICK;", -1, 3, 9 /*SQLStatistics*/, 0);
	lrd_bind_cols(Csr1492, BCInfo_D1686, 0);
	lrd_fetch(Csr1492, -4, 1, 0, PrintRow492, 0);
	GRID(492);
	lrd_close_cursor(&Csr1492, 0);
	lrd_open_cursor(&Csr1493, Con23, 0);
	lrd_stmt(Csr1493, "PkTableQualifier=;PkTableOwner=;PkTableName=;FkTableQualifier="
        "MAINDB;FkTableOwner=dbo;FkTableName=UMCS_TRANSACTION_LOG;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1493, BCInfo_D1691, 0);
	lrd_fetch(Csr1493, -6, 1, 0, PrintRow494, 0);
	GRID(494);
	lrd_close_cursor(&Csr1493, 0);
	lrd_open_cursor(&Csr1494, Con23, 0);
	lrd_stmt(Csr1494, "PkTableQualifier=MAINDB;PkTableOwner=dbo;PkTableName="
        "UMCS_TRANSACTION_LOG;FkTableQualifier=;FkTableOwner=;"
        "FkTableName=;", -1, 3, 3 /*SQLForeignKeys*/, 0);
	lrd_bind_cols(Csr1494, BCInfo_D1696, 0);
	lrd_fetch(Csr1494, 0, 1, 0, PrintRow496, 0);
	/*Note:  no rows returned by above lrd_fetch*/

	lrd_close_cursor(&Csr1494, 0);
	lrd_close_connection(&Con23, 0, 0);
	lrd_open_cursor(&Csr1495, Con22, 0);
	lrd_stmt(Csr1495, "ProcQualifier=;ProcOwner=;ProcName=;", -1, 3, 7 /*SQLProcedures*/, 0);
	lrd_bind_cols(Csr1495, BCInfo_D1700, 0);
	lrd_fetch(Csr1495, -1797, 1, 0, PrintRow498, 0);
	GRID(498);
	lrd_close_cursor(&Csr1495, 0);
	lrd_open_cursor(&Csr1496, Con22, 0);
	lrd_stmt(Csr1496, "ProcQualifier=;ProcOwner=dbo;ProcName=PerformTransfer;ColumnName=;", -1, 3, 6 /*SQLProcedureColumns*/, 0);
	lrd_bind_cols(Csr1496, BCInfo_D1710, 0);
	lrd_fetch(Csr1496, -9, 1, 0, PrintRow500, 0);
	GRID(500);
	lrd_close_cursor(&Csr1496, 0);
	lrd_open_cursor(&Csr1497, Con22, 0);
	lrd_stmt(Csr1497, "\r\nselect CASE type\r\n        WHEN 'P' Then 'if exists (select * "
        "from dbo.sysobjects where id = object_id(N''[dbo]."
        "[PerformTransfer]'') and OBJECTPROPERTY(id, "
        "N''IsProcedure'') = 1)' +\r\n    CHAR(13) + CHAR(10) + "
        "'drop procedure [dbo].[PerformTransfer]' +\r\n    CHAR(13) +"
        " CHAR(10) + 'go' + CHAR(13) + CHAR(10)\r\n        WHEN 'FN' "
        "THEN 'if exists (select * from dbo.sysobjects where id = "
        "object_id(N''[dbo].[PerformTransfer]'')  AND xtype in "
        "(N''FN'', N''IF'', N''TF'', N''FS'', N''FT'') )' +\r\n    "
        "CHAR(13) + CHAR(10) + 'drop function [dbo].[PerformTransfer]"
        "' +\r\n    CHAR(13) + CHAR(10) + 'go' + CHAR(13) + CHAR(10)"
        "\r\n       END\r\nfrom sysobjects o, sysusers u\r\nwhere "
        "u.name = 'dbo' and o.name = 'PerformTransfer' and o.uid = "
        "u.uid\r\n\r\n\r\n", -1, 1, 0 /*None*/, 0);
	lrd_bind_cols(Csr1497, BCInfo_D1712, 0);
	lrd_fetch(Csr1497, -1, 1, 0, PrintRow502, 0);
	GRID(502);
	lrd_close_cursor(&Csr1497, 0);
	lrd_open_cursor(&Csr1498, Con22, 0);
	lrd_stmt(Csr1498, "\r\n\t\r\nsp_helptext 'dbo.PerformTransfer' ", -1, 1, 0 /*None*/, 1);
	lrd_open_cursor(&Csr1499, Con22, 0);
	lrd_stmt(Csr1499, "{?=call dbo.PerformTransfer(?, ?, ?, ?, ?, ?, ?, ?)}", -1, 0, 0 /*None*/, 0);
	lrd_bind_placeholder(Csr1499, "1", &_1_D1713, 
        LRD_BIND_FOR_OUTPUT_ONLY, 0);
	lrd_assign(&_2_D1714, "11", 0, 0, 0);
	lrd_bind_placeholder(Csr1499, "2", &_2_D1714, 
        LRD_BIND_FOR_INPUT_ONLY, 0);
	lrd_assign(&_3_D1715, "11", 0, 0, 0);
	lrd_bind_placeholder(Csr1499, "3", &_3_D1715, 
        LRD_BIND_FOR_INPUT_ONLY, 0);
	lrd_assign(&_4_D1716, "11", 0, 0, 0);
	lrd_bind_placeholder(Csr1499, "4", &_4_D1716, 
        LRD_BIND_FOR_INPUT_ONLY, 0);
	lrd_assign(&_5_D1717, "11", 0, 0, 0);
	lrd_bind_placeholder(Csr1499, "5", &_5_D1717, 
        LRD_BIND_FOR_INPUT_ONLY, 0);
	lrd_assign(&_6_D1718, "11", 0, 0, 0);
	lrd_bind_placeholder(Csr1499, "6", &_6_D1718, 
        LRD_BIND_FOR_INPUT_ONLY, 0);
	lrd_assign(&_7_D1719, "11", 0, 0, 0);
	lrd_bind_placeholder(Csr1499, "7", &_7_D1719, 
        LRD_BIND_FOR_INPUT_ONLY, 0);
	lrd_assign(&_8_D1720, "11", 0, 0, 0);
	lrd_bind_placeholder(Csr1499, "8", &_8_D1720, 
        LRD_BIND_FOR_INPUT_ONLY, 0);
	lrd_assign(&_9_D1721, "11", 0, 0, 0);
	lrd_bind_placeholder(Csr1499, "9", &_9_D1721, 
        LRD_BIND_FOR_INPUT_ONLY, 0);
	lrd_exec(Csr1499, 0, 0, 0, 0, 1);
	GRID0(504);
	return 0;
}