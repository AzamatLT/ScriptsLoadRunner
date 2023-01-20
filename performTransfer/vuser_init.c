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
	
	lrd_open_cursor(&Csr1499, Con22, 0);
	lrd_stmt(Csr1499, "{?=call dbo.PerformTransfer(?, ?, ? )}", -1, 0, 0 /*None*/, 0);
	//{?=call dbo.PerformTransfer(?, ?, ?, /*?, ?, ?, ?, ?*/ )}
	lrd_bind_placeholder(Csr1499, "1", &_1_D1713, 
        LRD_BIND_FOR_OUTPUT_ONLY, 0);
	lrd_assign(&_2_D1714, "1", 0, 0, 0);
	lrd_bind_placeholder(Csr1499, "2", &_2_D1714, 
        LRD_BIND_FOR_INPUT_ONLY, 0);
	lrd_assign(&_3_D1715, "{ctn}", 0, 0, 0);
	lrd_bind_placeholder(Csr1499, "3", &_3_D1715, 
        LRD_BIND_FOR_INPUT_ONLY, 0);
	lrd_assign(&_4_D1716, "1", 0, 0, 0);
	lrd_bind_placeholder(Csr1499, "4", &_4_D1716, 
        LRD_BIND_FOR_INPUT_ONLY, 0);
	lrd_assign(&_5_D1717, "100", 0, 0, 0);

	/*
	lrd_bind_placeholder(Csr1499, "5", &_5_D1717, 
        LRD_BIND_FOR_INPUT_ONLY, 0);
	lrd_assign(&_6_D1718, "", 0, 0, 0);
	lrd_bind_placeholder(Csr1499, "6", &_6_D1718, 
        LRD_BIND_FOR_INPUT_ONLY, 0);
	lrd_assign(&_7_D1719, "", 0, 0, 0);
	lrd_bind_placeholder(Csr1499, "7", &_7_D1719, 
        LRD_BIND_FOR_INPUT_ONLY, 0);
	lrd_assign(&_8_D1720, "", 0, 0, 0);
	lrd_bind_placeholder(Csr1499, "8", &_8_D1720, 
        LRD_BIND_FOR_INPUT_ONLY, 0);
	lrd_assign(&_9_D1721, "", 0, 0, 0);
	lrd_bind_placeholder(Csr1499, "9", &_9_D1721, 
        LRD_BIND_FOR_INPUT_ONLY, 0);
*/		
	lrd_exec(Csr1499, 0, 0, 0, 0, 1);

	return 0;
}