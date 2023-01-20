#ifndef INL_H
#define  INL_H
LRD_PRINT_ROW_PROTO(PrintRow2)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szTYPE_NAME_D1[256];
    char szDATA_TYPE_D2[256];
    char szCOLUMN_SIZE_D3[256];
    char szLITERAL_PREFIX_D4[256];
    char szLITERAL_SUFFIX_D5[256];
    char szCREATE_PARAMS_D6[256];
    char szNULLABLE_D7[256];
    char szCASE_SENSITIVE_D8[256];
    char szSEARCHABLE_D9[256];
    char szFIXED_PREC_SCALE_D10[256];
    char szAUTO_UNIQUE_VALUE_D11[256];
    char szMINIMUM_SCALE_D12[256];
lrd_to_printable(&TYPE_NAME_D1, muliRowIndex, szTYPE_NAME_D1, 256, "");
lrd_to_printable(&DATA_TYPE_D2, muliRowIndex, szDATA_TYPE_D2, 256, "");
lrd_to_printable(&COLUMN_SIZE_D3, muliRowIndex, szCOLUMN_SIZE_D3, 256, "");
lrd_to_printable(&LITERAL_PREFIX_D4, muliRowIndex, szLITERAL_PREFIX_D4, 256, "");
lrd_to_printable(&LITERAL_SUFFIX_D5, muliRowIndex, szLITERAL_SUFFIX_D5, 256, "");
lrd_to_printable(&CREATE_PARAMS_D6, muliRowIndex, szCREATE_PARAMS_D6, 256, "");
lrd_to_printable(&NULLABLE_D7, muliRowIndex, szNULLABLE_D7, 256, "");
lrd_to_printable(&CASE_SENSITIVE_D8, muliRowIndex, szCASE_SENSITIVE_D8, 256, "");
lrd_to_printable(&SEARCHABLE_D9, muliRowIndex, szSEARCHABLE_D9, 256, "");
lrd_to_printable(&FIXED_PREC_SCALE_D10, muliRowIndex, szFIXED_PREC_SCALE_D10, 256, "");
lrd_to_printable(&AUTO_UNIQUE_VALUE_D11, muliRowIndex, szAUTO_UNIQUE_VALUE_D11, 256, "");
lrd_to_printable(&MINIMUM_SCALE_D12, muliRowIndex, szMINIMUM_SCALE_D12, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s, %s, %s, ...", szTYPE_NAME_D1, szDATA_TYPE_D2,
        szCOLUMN_SIZE_D3, szLITERAL_PREFIX_D4, szLITERAL_SUFFIX_D5,
        szCREATE_PARAMS_D6, szNULLABLE_D7, szCASE_SENSITIVE_D8,
        szSEARCHABLE_D9, szFIXED_PREC_SCALE_D10,
        szAUTO_UNIQUE_VALUE_D11, szMINIMUM_SCALE_D12);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow4)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szTABLE_CAT_D15[256];
    char szTABLE_SCHEM_D16[256];
    char szTABLE_NAME_D17[256];
    char szTABLE_TYPE_D18[256];
    char szREMARKS_D19[256];
lrd_to_printable(&TABLE_CAT_D15, muliRowIndex, szTABLE_CAT_D15, 256, "");
lrd_to_printable(&TABLE_SCHEM_D16, muliRowIndex, szTABLE_SCHEM_D16, 256, "");
lrd_to_printable(&TABLE_NAME_D17, muliRowIndex, szTABLE_NAME_D17, 256, "");
lrd_to_printable(&TABLE_TYPE_D18, muliRowIndex, szTABLE_TYPE_D18, 256, "");
lrd_to_printable(&REMARKS_D19, muliRowIndex, szREMARKS_D19, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s",
        szTABLE_CAT_D15, szTABLE_SCHEM_D16, szTABLE_NAME_D17,
        szTABLE_TYPE_D18, szREMARKS_D19);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow6)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szTABLE_CAT_D21[256];
    char szTABLE_SCHEM_D22[256];
    char szTABLE_NAME_D23[256];
    char szTABLE_TYPE_D24[256];
    char szREMARKS_D25[256];
lrd_to_printable(&TABLE_CAT_D21, muliRowIndex, szTABLE_CAT_D21, 256, "");
lrd_to_printable(&TABLE_SCHEM_D22, muliRowIndex, szTABLE_SCHEM_D22, 256, "");
lrd_to_printable(&TABLE_NAME_D23, muliRowIndex, szTABLE_NAME_D23, 256, "");
lrd_to_printable(&TABLE_TYPE_D24, muliRowIndex, szTABLE_TYPE_D24, 256, "");
lrd_to_printable(&REMARKS_D25, muliRowIndex, szREMARKS_D25, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s",
        szTABLE_CAT_D21, szTABLE_SCHEM_D22, szTABLE_NAME_D23,
        szTABLE_TYPE_D24, szREMARKS_D25);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow8)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szTYPE_NAME_D27[256];
    char szDATA_TYPE_D28[256];
    char szCOLUMN_SIZE_D29[256];
    char szLITERAL_PREFIX_D30[256];
    char szLITERAL_SUFFIX_D31[256];
    char szCREATE_PARAMS_D32[256];
    char szNULLABLE_D33[256];
    char szCASE_SENSITIVE_D34[256];
    char szSEARCHABLE_D35[256];
    char szFIXED_PREC_SCALE_D36[256];
    char szAUTO_UNIQUE_VALUE_D37[256];
    char szMINIMUM_SCALE_D38[256];
lrd_to_printable(&TYPE_NAME_D27, muliRowIndex, szTYPE_NAME_D27, 256, "");
lrd_to_printable(&DATA_TYPE_D28, muliRowIndex, szDATA_TYPE_D28, 256, "");
lrd_to_printable(&COLUMN_SIZE_D29, muliRowIndex, szCOLUMN_SIZE_D29, 256, "");
lrd_to_printable(&LITERAL_PREFIX_D30, muliRowIndex, szLITERAL_PREFIX_D30, 256, "");
lrd_to_printable(&LITERAL_SUFFIX_D31, muliRowIndex, szLITERAL_SUFFIX_D31, 256, "");
lrd_to_printable(&CREATE_PARAMS_D32, muliRowIndex, szCREATE_PARAMS_D32, 256, "");
lrd_to_printable(&NULLABLE_D33, muliRowIndex, szNULLABLE_D33, 256, "");
lrd_to_printable(&CASE_SENSITIVE_D34, muliRowIndex, szCASE_SENSITIVE_D34, 256, "");
lrd_to_printable(&SEARCHABLE_D35, muliRowIndex, szSEARCHABLE_D35, 256, "");
lrd_to_printable(&FIXED_PREC_SCALE_D36, muliRowIndex, szFIXED_PREC_SCALE_D36, 256, "");
lrd_to_printable(&AUTO_UNIQUE_VALUE_D37, muliRowIndex, szAUTO_UNIQUE_VALUE_D37, 256, "");
lrd_to_printable(&MINIMUM_SCALE_D38, muliRowIndex, szMINIMUM_SCALE_D38, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s, %s, %s, ...", szTYPE_NAME_D27, szDATA_TYPE_D28,
        szCOLUMN_SIZE_D29, szLITERAL_PREFIX_D30, szLITERAL_SUFFIX_D31,
        szCREATE_PARAMS_D32, szNULLABLE_D33, szCASE_SENSITIVE_D34,
        szSEARCHABLE_D35, szFIXED_PREC_SCALE_D36,
        szAUTO_UNIQUE_VALUE_D37, szMINIMUM_SCALE_D38);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow10)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szTABLE_CAT_D41[256];
    char szTABLE_SCHEM_D42[256];
    char szTABLE_NAME_D43[256];
    char szTABLE_TYPE_D44[256];
    char szREMARKS_D45[256];
lrd_to_printable(&TABLE_CAT_D41, muliRowIndex, szTABLE_CAT_D41, 256, "");
lrd_to_printable(&TABLE_SCHEM_D42, muliRowIndex, szTABLE_SCHEM_D42, 256, "");
lrd_to_printable(&TABLE_NAME_D43, muliRowIndex, szTABLE_NAME_D43, 256, "");
lrd_to_printable(&TABLE_TYPE_D44, muliRowIndex, szTABLE_TYPE_D44, 256, "");
lrd_to_printable(&REMARKS_D45, muliRowIndex, szREMARKS_D45, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s",
        szTABLE_CAT_D41, szTABLE_SCHEM_D42, szTABLE_NAME_D43,
        szTABLE_TYPE_D44, szREMARKS_D45);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow12)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szTABLE_CAT_D47[256];
    char szTABLE_SCHEM_D48[256];
    char szTABLE_NAME_D49[256];
    char szTABLE_TYPE_D50[256];
    char szREMARKS_D51[256];
lrd_to_printable(&TABLE_CAT_D47, muliRowIndex, szTABLE_CAT_D47, 256, "");
lrd_to_printable(&TABLE_SCHEM_D48, muliRowIndex, szTABLE_SCHEM_D48, 256, "");
lrd_to_printable(&TABLE_NAME_D49, muliRowIndex, szTABLE_NAME_D49, 256, "");
lrd_to_printable(&TABLE_TYPE_D50, muliRowIndex, szTABLE_TYPE_D50, 256, "");
lrd_to_printable(&REMARKS_D51, muliRowIndex, szREMARKS_D51, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s",
        szTABLE_CAT_D47, szTABLE_SCHEM_D48, szTABLE_NAME_D49,
        szTABLE_TYPE_D50, szREMARKS_D51);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow14)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szTABLE_CAT_D53[256];
    char szTABLE_SCHEM_D54[256];
    char szTABLE_NAME_D55[256];
    char szTABLE_TYPE_D56[256];
    char szREMARKS_D57[256];
lrd_to_printable(&TABLE_CAT_D53, muliRowIndex, szTABLE_CAT_D53, 256, "");
lrd_to_printable(&TABLE_SCHEM_D54, muliRowIndex, szTABLE_SCHEM_D54, 256, "");
lrd_to_printable(&TABLE_NAME_D55, muliRowIndex, szTABLE_NAME_D55, 256, "");
lrd_to_printable(&TABLE_TYPE_D56, muliRowIndex, szTABLE_TYPE_D56, 256, "");
lrd_to_printable(&REMARKS_D57, muliRowIndex, szREMARKS_D57, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s",
        szTABLE_CAT_D53, szTABLE_SCHEM_D54, szTABLE_NAME_D55,
        szTABLE_TYPE_D56, szREMARKS_D57);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow16)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szTABLE_CAT_D59[256];
    char szTABLE_SCHEM_D60[256];
    char szTABLE_NAME_D61[256];
    char szTABLE_TYPE_D62[256];
    char szREMARKS_D63[256];
lrd_to_printable(&TABLE_CAT_D59, muliRowIndex, szTABLE_CAT_D59, 256, "");
lrd_to_printable(&TABLE_SCHEM_D60, muliRowIndex, szTABLE_SCHEM_D60, 256, "");
lrd_to_printable(&TABLE_NAME_D61, muliRowIndex, szTABLE_NAME_D61, 256, "");
lrd_to_printable(&TABLE_TYPE_D62, muliRowIndex, szTABLE_TYPE_D62, 256, "");
lrd_to_printable(&REMARKS_D63, muliRowIndex, szREMARKS_D63, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s",
        szTABLE_CAT_D59, szTABLE_SCHEM_D60, szTABLE_NAME_D61,
        szTABLE_TYPE_D62, szREMARKS_D63);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow18)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D65[256];
    char szDATA_TYPE_D66[256];
    char szTYPE_NAME_D67[256];
    char szCOLUMN_SIZE_D68[256];
    char szDECIMAL_DIGITS_D69[256];
    char szNULLABLE_D70[256];
    char szREMARKS_D71[256];
    char szCOLUMN_DEF_D72[256];
lrd_to_printable(&COLUMN_NAME_D65, muliRowIndex, szCOLUMN_NAME_D65, 256, "");
lrd_to_printable(&DATA_TYPE_D66, muliRowIndex, szDATA_TYPE_D66, 256, "");
lrd_to_printable(&TYPE_NAME_D67, muliRowIndex, szTYPE_NAME_D67, 256, "");
lrd_to_printable(&COLUMN_SIZE_D68, muliRowIndex, szCOLUMN_SIZE_D68, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D69, muliRowIndex, szDECIMAL_DIGITS_D69, 256, "");
lrd_to_printable(&NULLABLE_D70, muliRowIndex, szNULLABLE_D70, 256, "");
lrd_to_printable(&REMARKS_D71, muliRowIndex, szREMARKS_D71, 256, "");
lrd_to_printable(&COLUMN_DEF_D72, muliRowIndex, szCOLUMN_DEF_D72, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D65, szDATA_TYPE_D66, szTYPE_NAME_D67,
        szCOLUMN_SIZE_D68, szDECIMAL_DIGITS_D69, szNULLABLE_D70,
        szREMARKS_D71, szCOLUMN_DEF_D72);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow20)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D74[256];
    char szKEY_SEQ_D75[256];
    char szPK_NAME_D76[256];
lrd_to_printable(&COLUMN_NAME_D74, muliRowIndex, szCOLUMN_NAME_D74, 256, "");
lrd_to_printable(&KEY_SEQ_D75, muliRowIndex, szKEY_SEQ_D75, 256, "");
lrd_to_printable(&PK_NAME_D76, muliRowIndex, szPK_NAME_D76, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D74, szKEY_SEQ_D75, szPK_NAME_D76);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow22)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D78[256];
    char szINDEX_QUALIFIER_D79[256];
    char szINDEX_NAME_D80[256];
    char szTYPE_D81[256];
    char szORDINAL_POSITION_D82[256];
    char szCOLUMN_NAME_D83[256];
    char szASC_OR_DESC_D84[256];
    char szCARDINALITY_D85[256];
    char szPAGES_D86[256];
    char szFILTER_CONDITION_D87[256];
lrd_to_printable(&NON_UNIQUE_D78, muliRowIndex, szNON_UNIQUE_D78, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D79, muliRowIndex, szINDEX_QUALIFIER_D79, 256, "");
lrd_to_printable(&INDEX_NAME_D80, muliRowIndex, szINDEX_NAME_D80, 256, "");
lrd_to_printable(&TYPE_D81, muliRowIndex, szTYPE_D81, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D82, muliRowIndex, szORDINAL_POSITION_D82, 256, "");
lrd_to_printable(&COLUMN_NAME_D83, muliRowIndex, szCOLUMN_NAME_D83, 256, "");
lrd_to_printable(&ASC_OR_DESC_D84, muliRowIndex, szASC_OR_DESC_D84, 256, "");
lrd_to_printable(&CARDINALITY_D85, muliRowIndex, szCARDINALITY_D85, 256, "");
lrd_to_printable(&PAGES_D86, muliRowIndex, szPAGES_D86, 256, "");
lrd_to_printable(&FILTER_CONDITION_D87, muliRowIndex, szFILTER_CONDITION_D87, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D78, szINDEX_QUALIFIER_D79,
        szINDEX_NAME_D80, szTYPE_D81, szORDINAL_POSITION_D82,
        szCOLUMN_NAME_D83, szASC_OR_DESC_D84, szCARDINALITY_D85,
        szPAGES_D86, szFILTER_CONDITION_D87);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow24)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D89[256];
    char szPKTABLE_NAME_D90[256];
    char szPKCOLUMN_NAME_D91[256];
    char szFKCOLUMN_NAME_D92[256];
lrd_to_printable(&PKTABLE_SCHEM_D89, muliRowIndex, szPKTABLE_SCHEM_D89, 256, "");
lrd_to_printable(&PKTABLE_NAME_D90, muliRowIndex, szPKTABLE_NAME_D90, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D91, muliRowIndex, szPKCOLUMN_NAME_D91, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D92, muliRowIndex, szFKCOLUMN_NAME_D92, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D89, szPKTABLE_NAME_D90, szPKCOLUMN_NAME_D91,
        szFKCOLUMN_NAME_D92);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow26)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D94[256];
    char szFKTABLE_SCHEM_D95[256];
    char szFKTABLE_NAME_D96[256];
    char szFKCOLUMN_NAME_D97[256];
lrd_to_printable(&PKCOLUMN_NAME_D94, muliRowIndex, szPKCOLUMN_NAME_D94, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D95, muliRowIndex, szFKTABLE_SCHEM_D95, 256, "");
lrd_to_printable(&FKTABLE_NAME_D96, muliRowIndex, szFKTABLE_NAME_D96, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D97, muliRowIndex, szFKCOLUMN_NAME_D97, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D94, szFKTABLE_SCHEM_D95, szFKTABLE_NAME_D96,
        szFKCOLUMN_NAME_D97);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow28)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D99[256];
    char szDATA_TYPE_D100[256];
    char szTYPE_NAME_D101[256];
    char szCOLUMN_SIZE_D102[256];
    char szDECIMAL_DIGITS_D103[256];
    char szNULLABLE_D104[256];
    char szREMARKS_D105[256];
    char szCOLUMN_DEF_D106[256];
lrd_to_printable(&COLUMN_NAME_D99, muliRowIndex, szCOLUMN_NAME_D99, 256, "");
lrd_to_printable(&DATA_TYPE_D100, muliRowIndex, szDATA_TYPE_D100, 256, "");
lrd_to_printable(&TYPE_NAME_D101, muliRowIndex, szTYPE_NAME_D101, 256, "");
lrd_to_printable(&COLUMN_SIZE_D102, muliRowIndex, szCOLUMN_SIZE_D102, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D103, muliRowIndex, szDECIMAL_DIGITS_D103, 256, "");
lrd_to_printable(&NULLABLE_D104, muliRowIndex, szNULLABLE_D104, 256, "");
lrd_to_printable(&REMARKS_D105, muliRowIndex, szREMARKS_D105, 256, "");
lrd_to_printable(&COLUMN_DEF_D106, muliRowIndex, szCOLUMN_DEF_D106, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D99, szDATA_TYPE_D100,
        szTYPE_NAME_D101, szCOLUMN_SIZE_D102, szDECIMAL_DIGITS_D103,
        szNULLABLE_D104, szREMARKS_D105, szCOLUMN_DEF_D106);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow30)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D108[256];
    char szKEY_SEQ_D109[256];
    char szPK_NAME_D110[256];
lrd_to_printable(&COLUMN_NAME_D108, muliRowIndex, szCOLUMN_NAME_D108, 256, "");
lrd_to_printable(&KEY_SEQ_D109, muliRowIndex, szKEY_SEQ_D109, 256, "");
lrd_to_printable(&PK_NAME_D110, muliRowIndex, szPK_NAME_D110, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D108, szKEY_SEQ_D109, szPK_NAME_D110);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow32)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D112[256];
    char szINDEX_QUALIFIER_D113[256];
    char szINDEX_NAME_D114[256];
    char szTYPE_D115[256];
    char szORDINAL_POSITION_D116[256];
    char szCOLUMN_NAME_D117[256];
    char szASC_OR_DESC_D118[256];
    char szCARDINALITY_D119[256];
    char szPAGES_D120[256];
    char szFILTER_CONDITION_D121[256];
lrd_to_printable(&NON_UNIQUE_D112, muliRowIndex, szNON_UNIQUE_D112, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D113, muliRowIndex, szINDEX_QUALIFIER_D113, 256, "");
lrd_to_printable(&INDEX_NAME_D114, muliRowIndex, szINDEX_NAME_D114, 256, "");
lrd_to_printable(&TYPE_D115, muliRowIndex, szTYPE_D115, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D116, muliRowIndex, szORDINAL_POSITION_D116, 256, "");
lrd_to_printable(&COLUMN_NAME_D117, muliRowIndex, szCOLUMN_NAME_D117, 256, "");
lrd_to_printable(&ASC_OR_DESC_D118, muliRowIndex, szASC_OR_DESC_D118, 256, "");
lrd_to_printable(&CARDINALITY_D119, muliRowIndex, szCARDINALITY_D119, 256, "");
lrd_to_printable(&PAGES_D120, muliRowIndex, szPAGES_D120, 256, "");
lrd_to_printable(&FILTER_CONDITION_D121, muliRowIndex, szFILTER_CONDITION_D121, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D112, szINDEX_QUALIFIER_D113,
        szINDEX_NAME_D114, szTYPE_D115, szORDINAL_POSITION_D116,
        szCOLUMN_NAME_D117, szASC_OR_DESC_D118, szCARDINALITY_D119,
        szPAGES_D120, szFILTER_CONDITION_D121);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow34)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D123[256];
    char szPKTABLE_NAME_D124[256];
    char szPKCOLUMN_NAME_D125[256];
    char szFKCOLUMN_NAME_D126[256];
lrd_to_printable(&PKTABLE_SCHEM_D123, muliRowIndex, szPKTABLE_SCHEM_D123, 256, "");
lrd_to_printable(&PKTABLE_NAME_D124, muliRowIndex, szPKTABLE_NAME_D124, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D125, muliRowIndex, szPKCOLUMN_NAME_D125, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D126, muliRowIndex, szFKCOLUMN_NAME_D126, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D123, szPKTABLE_NAME_D124,
        szPKCOLUMN_NAME_D125, szFKCOLUMN_NAME_D126);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow36)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D128[256];
    char szFKTABLE_SCHEM_D129[256];
    char szFKTABLE_NAME_D130[256];
    char szFKCOLUMN_NAME_D131[256];
lrd_to_printable(&PKCOLUMN_NAME_D128, muliRowIndex, szPKCOLUMN_NAME_D128, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D129, muliRowIndex, szFKTABLE_SCHEM_D129, 256, "");
lrd_to_printable(&FKTABLE_NAME_D130, muliRowIndex, szFKTABLE_NAME_D130, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D131, muliRowIndex, szFKCOLUMN_NAME_D131, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D128, szFKTABLE_SCHEM_D129,
        szFKTABLE_NAME_D130, szFKCOLUMN_NAME_D131);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow38)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D133[256];
    char szDATA_TYPE_D134[256];
    char szTYPE_NAME_D135[256];
    char szCOLUMN_SIZE_D136[256];
    char szDECIMAL_DIGITS_D137[256];
    char szNULLABLE_D138[256];
    char szREMARKS_D139[256];
    char szCOLUMN_DEF_D140[256];
lrd_to_printable(&COLUMN_NAME_D133, muliRowIndex, szCOLUMN_NAME_D133, 256, "");
lrd_to_printable(&DATA_TYPE_D134, muliRowIndex, szDATA_TYPE_D134, 256, "");
lrd_to_printable(&TYPE_NAME_D135, muliRowIndex, szTYPE_NAME_D135, 256, "");
lrd_to_printable(&COLUMN_SIZE_D136, muliRowIndex, szCOLUMN_SIZE_D136, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D137, muliRowIndex, szDECIMAL_DIGITS_D137, 256, "");
lrd_to_printable(&NULLABLE_D138, muliRowIndex, szNULLABLE_D138, 256, "");
lrd_to_printable(&REMARKS_D139, muliRowIndex, szREMARKS_D139, 256, "");
lrd_to_printable(&COLUMN_DEF_D140, muliRowIndex, szCOLUMN_DEF_D140, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D133, szDATA_TYPE_D134,
        szTYPE_NAME_D135, szCOLUMN_SIZE_D136, szDECIMAL_DIGITS_D137,
        szNULLABLE_D138, szREMARKS_D139, szCOLUMN_DEF_D140);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow40)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D142[256];
    char szKEY_SEQ_D143[256];
    char szPK_NAME_D144[256];
lrd_to_printable(&COLUMN_NAME_D142, muliRowIndex, szCOLUMN_NAME_D142, 256, "");
lrd_to_printable(&KEY_SEQ_D143, muliRowIndex, szKEY_SEQ_D143, 256, "");
lrd_to_printable(&PK_NAME_D144, muliRowIndex, szPK_NAME_D144, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D142, szKEY_SEQ_D143, szPK_NAME_D144);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow42)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D146[256];
    char szINDEX_QUALIFIER_D147[256];
    char szINDEX_NAME_D148[256];
    char szTYPE_D149[256];
    char szORDINAL_POSITION_D150[256];
    char szCOLUMN_NAME_D151[256];
    char szASC_OR_DESC_D152[256];
    char szCARDINALITY_D153[256];
    char szPAGES_D154[256];
    char szFILTER_CONDITION_D155[256];
lrd_to_printable(&NON_UNIQUE_D146, muliRowIndex, szNON_UNIQUE_D146, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D147, muliRowIndex, szINDEX_QUALIFIER_D147, 256, "");
lrd_to_printable(&INDEX_NAME_D148, muliRowIndex, szINDEX_NAME_D148, 256, "");
lrd_to_printable(&TYPE_D149, muliRowIndex, szTYPE_D149, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D150, muliRowIndex, szORDINAL_POSITION_D150, 256, "");
lrd_to_printable(&COLUMN_NAME_D151, muliRowIndex, szCOLUMN_NAME_D151, 256, "");
lrd_to_printable(&ASC_OR_DESC_D152, muliRowIndex, szASC_OR_DESC_D152, 256, "");
lrd_to_printable(&CARDINALITY_D153, muliRowIndex, szCARDINALITY_D153, 256, "");
lrd_to_printable(&PAGES_D154, muliRowIndex, szPAGES_D154, 256, "");
lrd_to_printable(&FILTER_CONDITION_D155, muliRowIndex, szFILTER_CONDITION_D155, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D146, szINDEX_QUALIFIER_D147,
        szINDEX_NAME_D148, szTYPE_D149, szORDINAL_POSITION_D150,
        szCOLUMN_NAME_D151, szASC_OR_DESC_D152, szCARDINALITY_D153,
        szPAGES_D154, szFILTER_CONDITION_D155);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow44)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D157[256];
    char szPKTABLE_NAME_D158[256];
    char szPKCOLUMN_NAME_D159[256];
    char szFKCOLUMN_NAME_D160[256];
lrd_to_printable(&PKTABLE_SCHEM_D157, muliRowIndex, szPKTABLE_SCHEM_D157, 256, "");
lrd_to_printable(&PKTABLE_NAME_D158, muliRowIndex, szPKTABLE_NAME_D158, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D159, muliRowIndex, szPKCOLUMN_NAME_D159, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D160, muliRowIndex, szFKCOLUMN_NAME_D160, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D157, szPKTABLE_NAME_D158,
        szPKCOLUMN_NAME_D159, szFKCOLUMN_NAME_D160);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow46)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D162[256];
    char szFKTABLE_SCHEM_D163[256];
    char szFKTABLE_NAME_D164[256];
    char szFKCOLUMN_NAME_D165[256];
lrd_to_printable(&PKCOLUMN_NAME_D162, muliRowIndex, szPKCOLUMN_NAME_D162, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D163, muliRowIndex, szFKTABLE_SCHEM_D163, 256, "");
lrd_to_printable(&FKTABLE_NAME_D164, muliRowIndex, szFKTABLE_NAME_D164, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D165, muliRowIndex, szFKCOLUMN_NAME_D165, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D162, szFKTABLE_SCHEM_D163,
        szFKTABLE_NAME_D164, szFKCOLUMN_NAME_D165);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow48)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D167[256];
    char szDATA_TYPE_D168[256];
    char szTYPE_NAME_D169[256];
    char szCOLUMN_SIZE_D170[256];
    char szDECIMAL_DIGITS_D171[256];
    char szNULLABLE_D172[256];
    char szREMARKS_D173[256];
    char szCOLUMN_DEF_D174[256];
lrd_to_printable(&COLUMN_NAME_D167, muliRowIndex, szCOLUMN_NAME_D167, 256, "");
lrd_to_printable(&DATA_TYPE_D168, muliRowIndex, szDATA_TYPE_D168, 256, "");
lrd_to_printable(&TYPE_NAME_D169, muliRowIndex, szTYPE_NAME_D169, 256, "");
lrd_to_printable(&COLUMN_SIZE_D170, muliRowIndex, szCOLUMN_SIZE_D170, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D171, muliRowIndex, szDECIMAL_DIGITS_D171, 256, "");
lrd_to_printable(&NULLABLE_D172, muliRowIndex, szNULLABLE_D172, 256, "");
lrd_to_printable(&REMARKS_D173, muliRowIndex, szREMARKS_D173, 256, "");
lrd_to_printable(&COLUMN_DEF_D174, muliRowIndex, szCOLUMN_DEF_D174, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D167, szDATA_TYPE_D168,
        szTYPE_NAME_D169, szCOLUMN_SIZE_D170, szDECIMAL_DIGITS_D171,
        szNULLABLE_D172, szREMARKS_D173, szCOLUMN_DEF_D174);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow50)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D176[256];
    char szKEY_SEQ_D177[256];
    char szPK_NAME_D178[256];
lrd_to_printable(&COLUMN_NAME_D176, muliRowIndex, szCOLUMN_NAME_D176, 256, "");
lrd_to_printable(&KEY_SEQ_D177, muliRowIndex, szKEY_SEQ_D177, 256, "");
lrd_to_printable(&PK_NAME_D178, muliRowIndex, szPK_NAME_D178, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D176, szKEY_SEQ_D177, szPK_NAME_D178);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow52)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D180[256];
    char szINDEX_QUALIFIER_D181[256];
    char szINDEX_NAME_D182[256];
    char szTYPE_D183[256];
    char szORDINAL_POSITION_D184[256];
    char szCOLUMN_NAME_D185[256];
    char szASC_OR_DESC_D186[256];
    char szCARDINALITY_D187[256];
    char szPAGES_D188[256];
    char szFILTER_CONDITION_D189[256];
lrd_to_printable(&NON_UNIQUE_D180, muliRowIndex, szNON_UNIQUE_D180, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D181, muliRowIndex, szINDEX_QUALIFIER_D181, 256, "");
lrd_to_printable(&INDEX_NAME_D182, muliRowIndex, szINDEX_NAME_D182, 256, "");
lrd_to_printable(&TYPE_D183, muliRowIndex, szTYPE_D183, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D184, muliRowIndex, szORDINAL_POSITION_D184, 256, "");
lrd_to_printable(&COLUMN_NAME_D185, muliRowIndex, szCOLUMN_NAME_D185, 256, "");
lrd_to_printable(&ASC_OR_DESC_D186, muliRowIndex, szASC_OR_DESC_D186, 256, "");
lrd_to_printable(&CARDINALITY_D187, muliRowIndex, szCARDINALITY_D187, 256, "");
lrd_to_printable(&PAGES_D188, muliRowIndex, szPAGES_D188, 256, "");
lrd_to_printable(&FILTER_CONDITION_D189, muliRowIndex, szFILTER_CONDITION_D189, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D180, szINDEX_QUALIFIER_D181,
        szINDEX_NAME_D182, szTYPE_D183, szORDINAL_POSITION_D184,
        szCOLUMN_NAME_D185, szASC_OR_DESC_D186, szCARDINALITY_D187,
        szPAGES_D188, szFILTER_CONDITION_D189);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow54)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D191[256];
    char szPKTABLE_NAME_D192[256];
    char szPKCOLUMN_NAME_D193[256];
    char szFKCOLUMN_NAME_D194[256];
lrd_to_printable(&PKTABLE_SCHEM_D191, muliRowIndex, szPKTABLE_SCHEM_D191, 256, "");
lrd_to_printable(&PKTABLE_NAME_D192, muliRowIndex, szPKTABLE_NAME_D192, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D193, muliRowIndex, szPKCOLUMN_NAME_D193, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D194, muliRowIndex, szFKCOLUMN_NAME_D194, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D191, szPKTABLE_NAME_D192,
        szPKCOLUMN_NAME_D193, szFKCOLUMN_NAME_D194);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow56)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D196[256];
    char szFKTABLE_SCHEM_D197[256];
    char szFKTABLE_NAME_D198[256];
    char szFKCOLUMN_NAME_D199[256];
lrd_to_printable(&PKCOLUMN_NAME_D196, muliRowIndex, szPKCOLUMN_NAME_D196, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D197, muliRowIndex, szFKTABLE_SCHEM_D197, 256, "");
lrd_to_printable(&FKTABLE_NAME_D198, muliRowIndex, szFKTABLE_NAME_D198, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D199, muliRowIndex, szFKCOLUMN_NAME_D199, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D196, szFKTABLE_SCHEM_D197,
        szFKTABLE_NAME_D198, szFKCOLUMN_NAME_D199);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow58)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D201[256];
    char szDATA_TYPE_D202[256];
    char szTYPE_NAME_D203[256];
    char szCOLUMN_SIZE_D204[256];
    char szDECIMAL_DIGITS_D205[256];
    char szNULLABLE_D206[256];
    char szREMARKS_D207[256];
    char szCOLUMN_DEF_D208[256];
lrd_to_printable(&COLUMN_NAME_D201, muliRowIndex, szCOLUMN_NAME_D201, 256, "");
lrd_to_printable(&DATA_TYPE_D202, muliRowIndex, szDATA_TYPE_D202, 256, "");
lrd_to_printable(&TYPE_NAME_D203, muliRowIndex, szTYPE_NAME_D203, 256, "");
lrd_to_printable(&COLUMN_SIZE_D204, muliRowIndex, szCOLUMN_SIZE_D204, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D205, muliRowIndex, szDECIMAL_DIGITS_D205, 256, "");
lrd_to_printable(&NULLABLE_D206, muliRowIndex, szNULLABLE_D206, 256, "");
lrd_to_printable(&REMARKS_D207, muliRowIndex, szREMARKS_D207, 256, "");
lrd_to_printable(&COLUMN_DEF_D208, muliRowIndex, szCOLUMN_DEF_D208, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D201, szDATA_TYPE_D202,
        szTYPE_NAME_D203, szCOLUMN_SIZE_D204, szDECIMAL_DIGITS_D205,
        szNULLABLE_D206, szREMARKS_D207, szCOLUMN_DEF_D208);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow60)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D210[256];
    char szKEY_SEQ_D211[256];
    char szPK_NAME_D212[256];
lrd_to_printable(&COLUMN_NAME_D210, muliRowIndex, szCOLUMN_NAME_D210, 256, "");
lrd_to_printable(&KEY_SEQ_D211, muliRowIndex, szKEY_SEQ_D211, 256, "");
lrd_to_printable(&PK_NAME_D212, muliRowIndex, szPK_NAME_D212, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D210, szKEY_SEQ_D211, szPK_NAME_D212);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow62)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D214[256];
    char szINDEX_QUALIFIER_D215[256];
    char szINDEX_NAME_D216[256];
    char szTYPE_D217[256];
    char szORDINAL_POSITION_D218[256];
    char szCOLUMN_NAME_D219[256];
    char szASC_OR_DESC_D220[256];
    char szCARDINALITY_D221[256];
    char szPAGES_D222[256];
    char szFILTER_CONDITION_D223[256];
lrd_to_printable(&NON_UNIQUE_D214, muliRowIndex, szNON_UNIQUE_D214, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D215, muliRowIndex, szINDEX_QUALIFIER_D215, 256, "");
lrd_to_printable(&INDEX_NAME_D216, muliRowIndex, szINDEX_NAME_D216, 256, "");
lrd_to_printable(&TYPE_D217, muliRowIndex, szTYPE_D217, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D218, muliRowIndex, szORDINAL_POSITION_D218, 256, "");
lrd_to_printable(&COLUMN_NAME_D219, muliRowIndex, szCOLUMN_NAME_D219, 256, "");
lrd_to_printable(&ASC_OR_DESC_D220, muliRowIndex, szASC_OR_DESC_D220, 256, "");
lrd_to_printable(&CARDINALITY_D221, muliRowIndex, szCARDINALITY_D221, 256, "");
lrd_to_printable(&PAGES_D222, muliRowIndex, szPAGES_D222, 256, "");
lrd_to_printable(&FILTER_CONDITION_D223, muliRowIndex, szFILTER_CONDITION_D223, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D214, szINDEX_QUALIFIER_D215,
        szINDEX_NAME_D216, szTYPE_D217, szORDINAL_POSITION_D218,
        szCOLUMN_NAME_D219, szASC_OR_DESC_D220, szCARDINALITY_D221,
        szPAGES_D222, szFILTER_CONDITION_D223);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow64)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D225[256];
    char szPKTABLE_NAME_D226[256];
    char szPKCOLUMN_NAME_D227[256];
    char szFKCOLUMN_NAME_D228[256];
lrd_to_printable(&PKTABLE_SCHEM_D225, muliRowIndex, szPKTABLE_SCHEM_D225, 256, "");
lrd_to_printable(&PKTABLE_NAME_D226, muliRowIndex, szPKTABLE_NAME_D226, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D227, muliRowIndex, szPKCOLUMN_NAME_D227, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D228, muliRowIndex, szFKCOLUMN_NAME_D228, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D225, szPKTABLE_NAME_D226,
        szPKCOLUMN_NAME_D227, szFKCOLUMN_NAME_D228);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow66)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D230[256];
    char szFKTABLE_SCHEM_D231[256];
    char szFKTABLE_NAME_D232[256];
    char szFKCOLUMN_NAME_D233[256];
lrd_to_printable(&PKCOLUMN_NAME_D230, muliRowIndex, szPKCOLUMN_NAME_D230, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D231, muliRowIndex, szFKTABLE_SCHEM_D231, 256, "");
lrd_to_printable(&FKTABLE_NAME_D232, muliRowIndex, szFKTABLE_NAME_D232, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D233, muliRowIndex, szFKCOLUMN_NAME_D233, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D230, szFKTABLE_SCHEM_D231,
        szFKTABLE_NAME_D232, szFKCOLUMN_NAME_D233);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow68)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D235[256];
    char szDATA_TYPE_D236[256];
    char szTYPE_NAME_D237[256];
    char szCOLUMN_SIZE_D238[256];
    char szDECIMAL_DIGITS_D239[256];
    char szNULLABLE_D240[256];
    char szREMARKS_D241[256];
    char szCOLUMN_DEF_D242[256];
lrd_to_printable(&COLUMN_NAME_D235, muliRowIndex, szCOLUMN_NAME_D235, 256, "");
lrd_to_printable(&DATA_TYPE_D236, muliRowIndex, szDATA_TYPE_D236, 256, "");
lrd_to_printable(&TYPE_NAME_D237, muliRowIndex, szTYPE_NAME_D237, 256, "");
lrd_to_printable(&COLUMN_SIZE_D238, muliRowIndex, szCOLUMN_SIZE_D238, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D239, muliRowIndex, szDECIMAL_DIGITS_D239, 256, "");
lrd_to_printable(&NULLABLE_D240, muliRowIndex, szNULLABLE_D240, 256, "");
lrd_to_printable(&REMARKS_D241, muliRowIndex, szREMARKS_D241, 256, "");
lrd_to_printable(&COLUMN_DEF_D242, muliRowIndex, szCOLUMN_DEF_D242, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D235, szDATA_TYPE_D236,
        szTYPE_NAME_D237, szCOLUMN_SIZE_D238, szDECIMAL_DIGITS_D239,
        szNULLABLE_D240, szREMARKS_D241, szCOLUMN_DEF_D242);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow70)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D244[256];
    char szKEY_SEQ_D245[256];
    char szPK_NAME_D246[256];
lrd_to_printable(&COLUMN_NAME_D244, muliRowIndex, szCOLUMN_NAME_D244, 256, "");
lrd_to_printable(&KEY_SEQ_D245, muliRowIndex, szKEY_SEQ_D245, 256, "");
lrd_to_printable(&PK_NAME_D246, muliRowIndex, szPK_NAME_D246, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D244, szKEY_SEQ_D245, szPK_NAME_D246);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow72)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D248[256];
    char szINDEX_QUALIFIER_D249[256];
    char szINDEX_NAME_D250[256];
    char szTYPE_D251[256];
    char szORDINAL_POSITION_D252[256];
    char szCOLUMN_NAME_D253[256];
    char szASC_OR_DESC_D254[256];
    char szCARDINALITY_D255[256];
    char szPAGES_D256[256];
    char szFILTER_CONDITION_D257[256];
lrd_to_printable(&NON_UNIQUE_D248, muliRowIndex, szNON_UNIQUE_D248, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D249, muliRowIndex, szINDEX_QUALIFIER_D249, 256, "");
lrd_to_printable(&INDEX_NAME_D250, muliRowIndex, szINDEX_NAME_D250, 256, "");
lrd_to_printable(&TYPE_D251, muliRowIndex, szTYPE_D251, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D252, muliRowIndex, szORDINAL_POSITION_D252, 256, "");
lrd_to_printable(&COLUMN_NAME_D253, muliRowIndex, szCOLUMN_NAME_D253, 256, "");
lrd_to_printable(&ASC_OR_DESC_D254, muliRowIndex, szASC_OR_DESC_D254, 256, "");
lrd_to_printable(&CARDINALITY_D255, muliRowIndex, szCARDINALITY_D255, 256, "");
lrd_to_printable(&PAGES_D256, muliRowIndex, szPAGES_D256, 256, "");
lrd_to_printable(&FILTER_CONDITION_D257, muliRowIndex, szFILTER_CONDITION_D257, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D248, szINDEX_QUALIFIER_D249,
        szINDEX_NAME_D250, szTYPE_D251, szORDINAL_POSITION_D252,
        szCOLUMN_NAME_D253, szASC_OR_DESC_D254, szCARDINALITY_D255,
        szPAGES_D256, szFILTER_CONDITION_D257);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow74)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D259[256];
    char szPKTABLE_NAME_D260[256];
    char szPKCOLUMN_NAME_D261[256];
    char szFKCOLUMN_NAME_D262[256];
lrd_to_printable(&PKTABLE_SCHEM_D259, muliRowIndex, szPKTABLE_SCHEM_D259, 256, "");
lrd_to_printable(&PKTABLE_NAME_D260, muliRowIndex, szPKTABLE_NAME_D260, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D261, muliRowIndex, szPKCOLUMN_NAME_D261, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D262, muliRowIndex, szFKCOLUMN_NAME_D262, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D259, szPKTABLE_NAME_D260,
        szPKCOLUMN_NAME_D261, szFKCOLUMN_NAME_D262);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow76)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D264[256];
    char szFKTABLE_SCHEM_D265[256];
    char szFKTABLE_NAME_D266[256];
    char szFKCOLUMN_NAME_D267[256];
lrd_to_printable(&PKCOLUMN_NAME_D264, muliRowIndex, szPKCOLUMN_NAME_D264, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D265, muliRowIndex, szFKTABLE_SCHEM_D265, 256, "");
lrd_to_printable(&FKTABLE_NAME_D266, muliRowIndex, szFKTABLE_NAME_D266, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D267, muliRowIndex, szFKCOLUMN_NAME_D267, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D264, szFKTABLE_SCHEM_D265,
        szFKTABLE_NAME_D266, szFKCOLUMN_NAME_D267);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow78)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D269[256];
    char szDATA_TYPE_D270[256];
    char szTYPE_NAME_D271[256];
    char szCOLUMN_SIZE_D272[256];
    char szDECIMAL_DIGITS_D273[256];
    char szNULLABLE_D274[256];
    char szREMARKS_D275[256];
    char szCOLUMN_DEF_D276[256];
lrd_to_printable(&COLUMN_NAME_D269, muliRowIndex, szCOLUMN_NAME_D269, 256, "");
lrd_to_printable(&DATA_TYPE_D270, muliRowIndex, szDATA_TYPE_D270, 256, "");
lrd_to_printable(&TYPE_NAME_D271, muliRowIndex, szTYPE_NAME_D271, 256, "");
lrd_to_printable(&COLUMN_SIZE_D272, muliRowIndex, szCOLUMN_SIZE_D272, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D273, muliRowIndex, szDECIMAL_DIGITS_D273, 256, "");
lrd_to_printable(&NULLABLE_D274, muliRowIndex, szNULLABLE_D274, 256, "");
lrd_to_printable(&REMARKS_D275, muliRowIndex, szREMARKS_D275, 256, "");
lrd_to_printable(&COLUMN_DEF_D276, muliRowIndex, szCOLUMN_DEF_D276, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D269, szDATA_TYPE_D270,
        szTYPE_NAME_D271, szCOLUMN_SIZE_D272, szDECIMAL_DIGITS_D273,
        szNULLABLE_D274, szREMARKS_D275, szCOLUMN_DEF_D276);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow80)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D278[256];
    char szKEY_SEQ_D279[256];
    char szPK_NAME_D280[256];
lrd_to_printable(&COLUMN_NAME_D278, muliRowIndex, szCOLUMN_NAME_D278, 256, "");
lrd_to_printable(&KEY_SEQ_D279, muliRowIndex, szKEY_SEQ_D279, 256, "");
lrd_to_printable(&PK_NAME_D280, muliRowIndex, szPK_NAME_D280, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D278, szKEY_SEQ_D279, szPK_NAME_D280);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow82)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D282[256];
    char szINDEX_QUALIFIER_D283[256];
    char szINDEX_NAME_D284[256];
    char szTYPE_D285[256];
    char szORDINAL_POSITION_D286[256];
    char szCOLUMN_NAME_D287[256];
    char szASC_OR_DESC_D288[256];
    char szCARDINALITY_D289[256];
    char szPAGES_D290[256];
    char szFILTER_CONDITION_D291[256];
lrd_to_printable(&NON_UNIQUE_D282, muliRowIndex, szNON_UNIQUE_D282, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D283, muliRowIndex, szINDEX_QUALIFIER_D283, 256, "");
lrd_to_printable(&INDEX_NAME_D284, muliRowIndex, szINDEX_NAME_D284, 256, "");
lrd_to_printable(&TYPE_D285, muliRowIndex, szTYPE_D285, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D286, muliRowIndex, szORDINAL_POSITION_D286, 256, "");
lrd_to_printable(&COLUMN_NAME_D287, muliRowIndex, szCOLUMN_NAME_D287, 256, "");
lrd_to_printable(&ASC_OR_DESC_D288, muliRowIndex, szASC_OR_DESC_D288, 256, "");
lrd_to_printable(&CARDINALITY_D289, muliRowIndex, szCARDINALITY_D289, 256, "");
lrd_to_printable(&PAGES_D290, muliRowIndex, szPAGES_D290, 256, "");
lrd_to_printable(&FILTER_CONDITION_D291, muliRowIndex, szFILTER_CONDITION_D291, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D282, szINDEX_QUALIFIER_D283,
        szINDEX_NAME_D284, szTYPE_D285, szORDINAL_POSITION_D286,
        szCOLUMN_NAME_D287, szASC_OR_DESC_D288, szCARDINALITY_D289,
        szPAGES_D290, szFILTER_CONDITION_D291);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow84)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D293[256];
    char szPKTABLE_NAME_D294[256];
    char szPKCOLUMN_NAME_D295[256];
    char szFKCOLUMN_NAME_D296[256];
lrd_to_printable(&PKTABLE_SCHEM_D293, muliRowIndex, szPKTABLE_SCHEM_D293, 256, "");
lrd_to_printable(&PKTABLE_NAME_D294, muliRowIndex, szPKTABLE_NAME_D294, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D295, muliRowIndex, szPKCOLUMN_NAME_D295, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D296, muliRowIndex, szFKCOLUMN_NAME_D296, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D293, szPKTABLE_NAME_D294,
        szPKCOLUMN_NAME_D295, szFKCOLUMN_NAME_D296);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow86)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D298[256];
    char szFKTABLE_SCHEM_D299[256];
    char szFKTABLE_NAME_D300[256];
    char szFKCOLUMN_NAME_D301[256];
lrd_to_printable(&PKCOLUMN_NAME_D298, muliRowIndex, szPKCOLUMN_NAME_D298, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D299, muliRowIndex, szFKTABLE_SCHEM_D299, 256, "");
lrd_to_printable(&FKTABLE_NAME_D300, muliRowIndex, szFKTABLE_NAME_D300, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D301, muliRowIndex, szFKCOLUMN_NAME_D301, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D298, szFKTABLE_SCHEM_D299,
        szFKTABLE_NAME_D300, szFKCOLUMN_NAME_D301);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow88)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D303[256];
    char szDATA_TYPE_D304[256];
    char szTYPE_NAME_D305[256];
    char szCOLUMN_SIZE_D306[256];
    char szDECIMAL_DIGITS_D307[256];
    char szNULLABLE_D308[256];
    char szREMARKS_D309[256];
    char szCOLUMN_DEF_D310[256];
lrd_to_printable(&COLUMN_NAME_D303, muliRowIndex, szCOLUMN_NAME_D303, 256, "");
lrd_to_printable(&DATA_TYPE_D304, muliRowIndex, szDATA_TYPE_D304, 256, "");
lrd_to_printable(&TYPE_NAME_D305, muliRowIndex, szTYPE_NAME_D305, 256, "");
lrd_to_printable(&COLUMN_SIZE_D306, muliRowIndex, szCOLUMN_SIZE_D306, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D307, muliRowIndex, szDECIMAL_DIGITS_D307, 256, "");
lrd_to_printable(&NULLABLE_D308, muliRowIndex, szNULLABLE_D308, 256, "");
lrd_to_printable(&REMARKS_D309, muliRowIndex, szREMARKS_D309, 256, "");
lrd_to_printable(&COLUMN_DEF_D310, muliRowIndex, szCOLUMN_DEF_D310, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D303, szDATA_TYPE_D304,
        szTYPE_NAME_D305, szCOLUMN_SIZE_D306, szDECIMAL_DIGITS_D307,
        szNULLABLE_D308, szREMARKS_D309, szCOLUMN_DEF_D310);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow90)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D312[256];
    char szKEY_SEQ_D313[256];
    char szPK_NAME_D314[256];
lrd_to_printable(&COLUMN_NAME_D312, muliRowIndex, szCOLUMN_NAME_D312, 256, "");
lrd_to_printable(&KEY_SEQ_D313, muliRowIndex, szKEY_SEQ_D313, 256, "");
lrd_to_printable(&PK_NAME_D314, muliRowIndex, szPK_NAME_D314, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D312, szKEY_SEQ_D313, szPK_NAME_D314);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow92)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D316[256];
    char szINDEX_QUALIFIER_D317[256];
    char szINDEX_NAME_D318[256];
    char szTYPE_D319[256];
    char szORDINAL_POSITION_D320[256];
    char szCOLUMN_NAME_D321[256];
    char szASC_OR_DESC_D322[256];
    char szCARDINALITY_D323[256];
    char szPAGES_D324[256];
    char szFILTER_CONDITION_D325[256];
lrd_to_printable(&NON_UNIQUE_D316, muliRowIndex, szNON_UNIQUE_D316, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D317, muliRowIndex, szINDEX_QUALIFIER_D317, 256, "");
lrd_to_printable(&INDEX_NAME_D318, muliRowIndex, szINDEX_NAME_D318, 256, "");
lrd_to_printable(&TYPE_D319, muliRowIndex, szTYPE_D319, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D320, muliRowIndex, szORDINAL_POSITION_D320, 256, "");
lrd_to_printable(&COLUMN_NAME_D321, muliRowIndex, szCOLUMN_NAME_D321, 256, "");
lrd_to_printable(&ASC_OR_DESC_D322, muliRowIndex, szASC_OR_DESC_D322, 256, "");
lrd_to_printable(&CARDINALITY_D323, muliRowIndex, szCARDINALITY_D323, 256, "");
lrd_to_printable(&PAGES_D324, muliRowIndex, szPAGES_D324, 256, "");
lrd_to_printable(&FILTER_CONDITION_D325, muliRowIndex, szFILTER_CONDITION_D325, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D316, szINDEX_QUALIFIER_D317,
        szINDEX_NAME_D318, szTYPE_D319, szORDINAL_POSITION_D320,
        szCOLUMN_NAME_D321, szASC_OR_DESC_D322, szCARDINALITY_D323,
        szPAGES_D324, szFILTER_CONDITION_D325);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow94)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D327[256];
    char szPKTABLE_NAME_D328[256];
    char szPKCOLUMN_NAME_D329[256];
    char szFKCOLUMN_NAME_D330[256];
lrd_to_printable(&PKTABLE_SCHEM_D327, muliRowIndex, szPKTABLE_SCHEM_D327, 256, "");
lrd_to_printable(&PKTABLE_NAME_D328, muliRowIndex, szPKTABLE_NAME_D328, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D329, muliRowIndex, szPKCOLUMN_NAME_D329, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D330, muliRowIndex, szFKCOLUMN_NAME_D330, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D327, szPKTABLE_NAME_D328,
        szPKCOLUMN_NAME_D329, szFKCOLUMN_NAME_D330);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow96)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D332[256];
    char szFKTABLE_SCHEM_D333[256];
    char szFKTABLE_NAME_D334[256];
    char szFKCOLUMN_NAME_D335[256];
lrd_to_printable(&PKCOLUMN_NAME_D332, muliRowIndex, szPKCOLUMN_NAME_D332, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D333, muliRowIndex, szFKTABLE_SCHEM_D333, 256, "");
lrd_to_printable(&FKTABLE_NAME_D334, muliRowIndex, szFKTABLE_NAME_D334, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D335, muliRowIndex, szFKCOLUMN_NAME_D335, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D332, szFKTABLE_SCHEM_D333,
        szFKTABLE_NAME_D334, szFKCOLUMN_NAME_D335);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow98)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D337[256];
    char szDATA_TYPE_D338[256];
    char szTYPE_NAME_D339[256];
    char szCOLUMN_SIZE_D340[256];
    char szDECIMAL_DIGITS_D341[256];
    char szNULLABLE_D342[256];
    char szREMARKS_D343[256];
    char szCOLUMN_DEF_D344[256];
lrd_to_printable(&COLUMN_NAME_D337, muliRowIndex, szCOLUMN_NAME_D337, 256, "");
lrd_to_printable(&DATA_TYPE_D338, muliRowIndex, szDATA_TYPE_D338, 256, "");
lrd_to_printable(&TYPE_NAME_D339, muliRowIndex, szTYPE_NAME_D339, 256, "");
lrd_to_printable(&COLUMN_SIZE_D340, muliRowIndex, szCOLUMN_SIZE_D340, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D341, muliRowIndex, szDECIMAL_DIGITS_D341, 256, "");
lrd_to_printable(&NULLABLE_D342, muliRowIndex, szNULLABLE_D342, 256, "");
lrd_to_printable(&REMARKS_D343, muliRowIndex, szREMARKS_D343, 256, "");
lrd_to_printable(&COLUMN_DEF_D344, muliRowIndex, szCOLUMN_DEF_D344, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D337, szDATA_TYPE_D338,
        szTYPE_NAME_D339, szCOLUMN_SIZE_D340, szDECIMAL_DIGITS_D341,
        szNULLABLE_D342, szREMARKS_D343, szCOLUMN_DEF_D344);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow100)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D346[256];
    char szKEY_SEQ_D347[256];
    char szPK_NAME_D348[256];
lrd_to_printable(&COLUMN_NAME_D346, muliRowIndex, szCOLUMN_NAME_D346, 256, "");
lrd_to_printable(&KEY_SEQ_D347, muliRowIndex, szKEY_SEQ_D347, 256, "");
lrd_to_printable(&PK_NAME_D348, muliRowIndex, szPK_NAME_D348, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D346, szKEY_SEQ_D347, szPK_NAME_D348);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow102)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D350[256];
    char szINDEX_QUALIFIER_D351[256];
    char szINDEX_NAME_D352[256];
    char szTYPE_D353[256];
    char szORDINAL_POSITION_D354[256];
    char szCOLUMN_NAME_D355[256];
    char szASC_OR_DESC_D356[256];
    char szCARDINALITY_D357[256];
    char szPAGES_D358[256];
    char szFILTER_CONDITION_D359[256];
lrd_to_printable(&NON_UNIQUE_D350, muliRowIndex, szNON_UNIQUE_D350, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D351, muliRowIndex, szINDEX_QUALIFIER_D351, 256, "");
lrd_to_printable(&INDEX_NAME_D352, muliRowIndex, szINDEX_NAME_D352, 256, "");
lrd_to_printable(&TYPE_D353, muliRowIndex, szTYPE_D353, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D354, muliRowIndex, szORDINAL_POSITION_D354, 256, "");
lrd_to_printable(&COLUMN_NAME_D355, muliRowIndex, szCOLUMN_NAME_D355, 256, "");
lrd_to_printable(&ASC_OR_DESC_D356, muliRowIndex, szASC_OR_DESC_D356, 256, "");
lrd_to_printable(&CARDINALITY_D357, muliRowIndex, szCARDINALITY_D357, 256, "");
lrd_to_printable(&PAGES_D358, muliRowIndex, szPAGES_D358, 256, "");
lrd_to_printable(&FILTER_CONDITION_D359, muliRowIndex, szFILTER_CONDITION_D359, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D350, szINDEX_QUALIFIER_D351,
        szINDEX_NAME_D352, szTYPE_D353, szORDINAL_POSITION_D354,
        szCOLUMN_NAME_D355, szASC_OR_DESC_D356, szCARDINALITY_D357,
        szPAGES_D358, szFILTER_CONDITION_D359);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow104)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D361[256];
    char szPKTABLE_NAME_D362[256];
    char szPKCOLUMN_NAME_D363[256];
    char szFKCOLUMN_NAME_D364[256];
lrd_to_printable(&PKTABLE_SCHEM_D361, muliRowIndex, szPKTABLE_SCHEM_D361, 256, "");
lrd_to_printable(&PKTABLE_NAME_D362, muliRowIndex, szPKTABLE_NAME_D362, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D363, muliRowIndex, szPKCOLUMN_NAME_D363, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D364, muliRowIndex, szFKCOLUMN_NAME_D364, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D361, szPKTABLE_NAME_D362,
        szPKCOLUMN_NAME_D363, szFKCOLUMN_NAME_D364);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow106)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D366[256];
    char szFKTABLE_SCHEM_D367[256];
    char szFKTABLE_NAME_D368[256];
    char szFKCOLUMN_NAME_D369[256];
lrd_to_printable(&PKCOLUMN_NAME_D366, muliRowIndex, szPKCOLUMN_NAME_D366, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D367, muliRowIndex, szFKTABLE_SCHEM_D367, 256, "");
lrd_to_printable(&FKTABLE_NAME_D368, muliRowIndex, szFKTABLE_NAME_D368, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D369, muliRowIndex, szFKCOLUMN_NAME_D369, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D366, szFKTABLE_SCHEM_D367,
        szFKTABLE_NAME_D368, szFKCOLUMN_NAME_D369);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow108)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D371[256];
    char szDATA_TYPE_D372[256];
    char szTYPE_NAME_D373[256];
    char szCOLUMN_SIZE_D374[256];
    char szDECIMAL_DIGITS_D375[256];
    char szNULLABLE_D376[256];
    char szREMARKS_D377[256];
    char szCOLUMN_DEF_D378[256];
lrd_to_printable(&COLUMN_NAME_D371, muliRowIndex, szCOLUMN_NAME_D371, 256, "");
lrd_to_printable(&DATA_TYPE_D372, muliRowIndex, szDATA_TYPE_D372, 256, "");
lrd_to_printable(&TYPE_NAME_D373, muliRowIndex, szTYPE_NAME_D373, 256, "");
lrd_to_printable(&COLUMN_SIZE_D374, muliRowIndex, szCOLUMN_SIZE_D374, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D375, muliRowIndex, szDECIMAL_DIGITS_D375, 256, "");
lrd_to_printable(&NULLABLE_D376, muliRowIndex, szNULLABLE_D376, 256, "");
lrd_to_printable(&REMARKS_D377, muliRowIndex, szREMARKS_D377, 256, "");
lrd_to_printable(&COLUMN_DEF_D378, muliRowIndex, szCOLUMN_DEF_D378, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D371, szDATA_TYPE_D372,
        szTYPE_NAME_D373, szCOLUMN_SIZE_D374, szDECIMAL_DIGITS_D375,
        szNULLABLE_D376, szREMARKS_D377, szCOLUMN_DEF_D378);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow110)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D380[256];
    char szKEY_SEQ_D381[256];
    char szPK_NAME_D382[256];
lrd_to_printable(&COLUMN_NAME_D380, muliRowIndex, szCOLUMN_NAME_D380, 256, "");
lrd_to_printable(&KEY_SEQ_D381, muliRowIndex, szKEY_SEQ_D381, 256, "");
lrd_to_printable(&PK_NAME_D382, muliRowIndex, szPK_NAME_D382, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D380, szKEY_SEQ_D381, szPK_NAME_D382);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow112)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D384[256];
    char szINDEX_QUALIFIER_D385[256];
    char szINDEX_NAME_D386[256];
    char szTYPE_D387[256];
    char szORDINAL_POSITION_D388[256];
    char szCOLUMN_NAME_D389[256];
    char szASC_OR_DESC_D390[256];
    char szCARDINALITY_D391[256];
    char szPAGES_D392[256];
    char szFILTER_CONDITION_D393[256];
lrd_to_printable(&NON_UNIQUE_D384, muliRowIndex, szNON_UNIQUE_D384, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D385, muliRowIndex, szINDEX_QUALIFIER_D385, 256, "");
lrd_to_printable(&INDEX_NAME_D386, muliRowIndex, szINDEX_NAME_D386, 256, "");
lrd_to_printable(&TYPE_D387, muliRowIndex, szTYPE_D387, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D388, muliRowIndex, szORDINAL_POSITION_D388, 256, "");
lrd_to_printable(&COLUMN_NAME_D389, muliRowIndex, szCOLUMN_NAME_D389, 256, "");
lrd_to_printable(&ASC_OR_DESC_D390, muliRowIndex, szASC_OR_DESC_D390, 256, "");
lrd_to_printable(&CARDINALITY_D391, muliRowIndex, szCARDINALITY_D391, 256, "");
lrd_to_printable(&PAGES_D392, muliRowIndex, szPAGES_D392, 256, "");
lrd_to_printable(&FILTER_CONDITION_D393, muliRowIndex, szFILTER_CONDITION_D393, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D384, szINDEX_QUALIFIER_D385,
        szINDEX_NAME_D386, szTYPE_D387, szORDINAL_POSITION_D388,
        szCOLUMN_NAME_D389, szASC_OR_DESC_D390, szCARDINALITY_D391,
        szPAGES_D392, szFILTER_CONDITION_D393);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow114)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D395[256];
    char szPKTABLE_NAME_D396[256];
    char szPKCOLUMN_NAME_D397[256];
    char szFKCOLUMN_NAME_D398[256];
lrd_to_printable(&PKTABLE_SCHEM_D395, muliRowIndex, szPKTABLE_SCHEM_D395, 256, "");
lrd_to_printable(&PKTABLE_NAME_D396, muliRowIndex, szPKTABLE_NAME_D396, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D397, muliRowIndex, szPKCOLUMN_NAME_D397, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D398, muliRowIndex, szFKCOLUMN_NAME_D398, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D395, szPKTABLE_NAME_D396,
        szPKCOLUMN_NAME_D397, szFKCOLUMN_NAME_D398);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow116)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D400[256];
    char szFKTABLE_SCHEM_D401[256];
    char szFKTABLE_NAME_D402[256];
    char szFKCOLUMN_NAME_D403[256];
lrd_to_printable(&PKCOLUMN_NAME_D400, muliRowIndex, szPKCOLUMN_NAME_D400, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D401, muliRowIndex, szFKTABLE_SCHEM_D401, 256, "");
lrd_to_printable(&FKTABLE_NAME_D402, muliRowIndex, szFKTABLE_NAME_D402, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D403, muliRowIndex, szFKCOLUMN_NAME_D403, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D400, szFKTABLE_SCHEM_D401,
        szFKTABLE_NAME_D402, szFKCOLUMN_NAME_D403);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow118)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D405[256];
    char szDATA_TYPE_D406[256];
    char szTYPE_NAME_D407[256];
    char szCOLUMN_SIZE_D408[256];
    char szDECIMAL_DIGITS_D409[256];
    char szNULLABLE_D410[256];
    char szREMARKS_D411[256];
    char szCOLUMN_DEF_D412[256];
lrd_to_printable(&COLUMN_NAME_D405, muliRowIndex, szCOLUMN_NAME_D405, 256, "");
lrd_to_printable(&DATA_TYPE_D406, muliRowIndex, szDATA_TYPE_D406, 256, "");
lrd_to_printable(&TYPE_NAME_D407, muliRowIndex, szTYPE_NAME_D407, 256, "");
lrd_to_printable(&COLUMN_SIZE_D408, muliRowIndex, szCOLUMN_SIZE_D408, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D409, muliRowIndex, szDECIMAL_DIGITS_D409, 256, "");
lrd_to_printable(&NULLABLE_D410, muliRowIndex, szNULLABLE_D410, 256, "");
lrd_to_printable(&REMARKS_D411, muliRowIndex, szREMARKS_D411, 256, "");
lrd_to_printable(&COLUMN_DEF_D412, muliRowIndex, szCOLUMN_DEF_D412, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D405, szDATA_TYPE_D406,
        szTYPE_NAME_D407, szCOLUMN_SIZE_D408, szDECIMAL_DIGITS_D409,
        szNULLABLE_D410, szREMARKS_D411, szCOLUMN_DEF_D412);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow120)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D414[256];
    char szKEY_SEQ_D415[256];
    char szPK_NAME_D416[256];
lrd_to_printable(&COLUMN_NAME_D414, muliRowIndex, szCOLUMN_NAME_D414, 256, "");
lrd_to_printable(&KEY_SEQ_D415, muliRowIndex, szKEY_SEQ_D415, 256, "");
lrd_to_printable(&PK_NAME_D416, muliRowIndex, szPK_NAME_D416, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D414, szKEY_SEQ_D415, szPK_NAME_D416);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow122)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D418[256];
    char szINDEX_QUALIFIER_D419[256];
    char szINDEX_NAME_D420[256];
    char szTYPE_D421[256];
    char szORDINAL_POSITION_D422[256];
    char szCOLUMN_NAME_D423[256];
    char szASC_OR_DESC_D424[256];
    char szCARDINALITY_D425[256];
    char szPAGES_D426[256];
    char szFILTER_CONDITION_D427[256];
lrd_to_printable(&NON_UNIQUE_D418, muliRowIndex, szNON_UNIQUE_D418, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D419, muliRowIndex, szINDEX_QUALIFIER_D419, 256, "");
lrd_to_printable(&INDEX_NAME_D420, muliRowIndex, szINDEX_NAME_D420, 256, "");
lrd_to_printable(&TYPE_D421, muliRowIndex, szTYPE_D421, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D422, muliRowIndex, szORDINAL_POSITION_D422, 256, "");
lrd_to_printable(&COLUMN_NAME_D423, muliRowIndex, szCOLUMN_NAME_D423, 256, "");
lrd_to_printable(&ASC_OR_DESC_D424, muliRowIndex, szASC_OR_DESC_D424, 256, "");
lrd_to_printable(&CARDINALITY_D425, muliRowIndex, szCARDINALITY_D425, 256, "");
lrd_to_printable(&PAGES_D426, muliRowIndex, szPAGES_D426, 256, "");
lrd_to_printable(&FILTER_CONDITION_D427, muliRowIndex, szFILTER_CONDITION_D427, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D418, szINDEX_QUALIFIER_D419,
        szINDEX_NAME_D420, szTYPE_D421, szORDINAL_POSITION_D422,
        szCOLUMN_NAME_D423, szASC_OR_DESC_D424, szCARDINALITY_D425,
        szPAGES_D426, szFILTER_CONDITION_D427);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow124)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D429[256];
    char szPKTABLE_NAME_D430[256];
    char szPKCOLUMN_NAME_D431[256];
    char szFKCOLUMN_NAME_D432[256];
lrd_to_printable(&PKTABLE_SCHEM_D429, muliRowIndex, szPKTABLE_SCHEM_D429, 256, "");
lrd_to_printable(&PKTABLE_NAME_D430, muliRowIndex, szPKTABLE_NAME_D430, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D431, muliRowIndex, szPKCOLUMN_NAME_D431, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D432, muliRowIndex, szFKCOLUMN_NAME_D432, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D429, szPKTABLE_NAME_D430,
        szPKCOLUMN_NAME_D431, szFKCOLUMN_NAME_D432);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow126)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D434[256];
    char szFKTABLE_SCHEM_D435[256];
    char szFKTABLE_NAME_D436[256];
    char szFKCOLUMN_NAME_D437[256];
lrd_to_printable(&PKCOLUMN_NAME_D434, muliRowIndex, szPKCOLUMN_NAME_D434, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D435, muliRowIndex, szFKTABLE_SCHEM_D435, 256, "");
lrd_to_printable(&FKTABLE_NAME_D436, muliRowIndex, szFKTABLE_NAME_D436, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D437, muliRowIndex, szFKCOLUMN_NAME_D437, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D434, szFKTABLE_SCHEM_D435,
        szFKTABLE_NAME_D436, szFKCOLUMN_NAME_D437);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow128)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D439[256];
    char szDATA_TYPE_D440[256];
    char szTYPE_NAME_D441[256];
    char szCOLUMN_SIZE_D442[256];
    char szDECIMAL_DIGITS_D443[256];
    char szNULLABLE_D444[256];
    char szREMARKS_D445[256];
    char szCOLUMN_DEF_D446[256];
lrd_to_printable(&COLUMN_NAME_D439, muliRowIndex, szCOLUMN_NAME_D439, 256, "");
lrd_to_printable(&DATA_TYPE_D440, muliRowIndex, szDATA_TYPE_D440, 256, "");
lrd_to_printable(&TYPE_NAME_D441, muliRowIndex, szTYPE_NAME_D441, 256, "");
lrd_to_printable(&COLUMN_SIZE_D442, muliRowIndex, szCOLUMN_SIZE_D442, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D443, muliRowIndex, szDECIMAL_DIGITS_D443, 256, "");
lrd_to_printable(&NULLABLE_D444, muliRowIndex, szNULLABLE_D444, 256, "");
lrd_to_printable(&REMARKS_D445, muliRowIndex, szREMARKS_D445, 256, "");
lrd_to_printable(&COLUMN_DEF_D446, muliRowIndex, szCOLUMN_DEF_D446, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D439, szDATA_TYPE_D440,
        szTYPE_NAME_D441, szCOLUMN_SIZE_D442, szDECIMAL_DIGITS_D443,
        szNULLABLE_D444, szREMARKS_D445, szCOLUMN_DEF_D446);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow130)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D448[256];
    char szKEY_SEQ_D449[256];
    char szPK_NAME_D450[256];
lrd_to_printable(&COLUMN_NAME_D448, muliRowIndex, szCOLUMN_NAME_D448, 256, "");
lrd_to_printable(&KEY_SEQ_D449, muliRowIndex, szKEY_SEQ_D449, 256, "");
lrd_to_printable(&PK_NAME_D450, muliRowIndex, szPK_NAME_D450, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D448, szKEY_SEQ_D449, szPK_NAME_D450);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow132)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D452[256];
    char szINDEX_QUALIFIER_D453[256];
    char szINDEX_NAME_D454[256];
    char szTYPE_D455[256];
    char szORDINAL_POSITION_D456[256];
    char szCOLUMN_NAME_D457[256];
    char szASC_OR_DESC_D458[256];
    char szCARDINALITY_D459[256];
    char szPAGES_D460[256];
    char szFILTER_CONDITION_D461[256];
lrd_to_printable(&NON_UNIQUE_D452, muliRowIndex, szNON_UNIQUE_D452, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D453, muliRowIndex, szINDEX_QUALIFIER_D453, 256, "");
lrd_to_printable(&INDEX_NAME_D454, muliRowIndex, szINDEX_NAME_D454, 256, "");
lrd_to_printable(&TYPE_D455, muliRowIndex, szTYPE_D455, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D456, muliRowIndex, szORDINAL_POSITION_D456, 256, "");
lrd_to_printable(&COLUMN_NAME_D457, muliRowIndex, szCOLUMN_NAME_D457, 256, "");
lrd_to_printable(&ASC_OR_DESC_D458, muliRowIndex, szASC_OR_DESC_D458, 256, "");
lrd_to_printable(&CARDINALITY_D459, muliRowIndex, szCARDINALITY_D459, 256, "");
lrd_to_printable(&PAGES_D460, muliRowIndex, szPAGES_D460, 256, "");
lrd_to_printable(&FILTER_CONDITION_D461, muliRowIndex, szFILTER_CONDITION_D461, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D452, szINDEX_QUALIFIER_D453,
        szINDEX_NAME_D454, szTYPE_D455, szORDINAL_POSITION_D456,
        szCOLUMN_NAME_D457, szASC_OR_DESC_D458, szCARDINALITY_D459,
        szPAGES_D460, szFILTER_CONDITION_D461);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow134)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D463[256];
    char szPKTABLE_NAME_D464[256];
    char szPKCOLUMN_NAME_D465[256];
    char szFKCOLUMN_NAME_D466[256];
lrd_to_printable(&PKTABLE_SCHEM_D463, muliRowIndex, szPKTABLE_SCHEM_D463, 256, "");
lrd_to_printable(&PKTABLE_NAME_D464, muliRowIndex, szPKTABLE_NAME_D464, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D465, muliRowIndex, szPKCOLUMN_NAME_D465, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D466, muliRowIndex, szFKCOLUMN_NAME_D466, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D463, szPKTABLE_NAME_D464,
        szPKCOLUMN_NAME_D465, szFKCOLUMN_NAME_D466);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow136)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D468[256];
    char szFKTABLE_SCHEM_D469[256];
    char szFKTABLE_NAME_D470[256];
    char szFKCOLUMN_NAME_D471[256];
lrd_to_printable(&PKCOLUMN_NAME_D468, muliRowIndex, szPKCOLUMN_NAME_D468, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D469, muliRowIndex, szFKTABLE_SCHEM_D469, 256, "");
lrd_to_printable(&FKTABLE_NAME_D470, muliRowIndex, szFKTABLE_NAME_D470, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D471, muliRowIndex, szFKCOLUMN_NAME_D471, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D468, szFKTABLE_SCHEM_D469,
        szFKTABLE_NAME_D470, szFKCOLUMN_NAME_D471);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow138)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D473[256];
    char szDATA_TYPE_D474[256];
    char szTYPE_NAME_D475[256];
    char szCOLUMN_SIZE_D476[256];
    char szDECIMAL_DIGITS_D477[256];
    char szNULLABLE_D478[256];
    char szREMARKS_D479[256];
    char szCOLUMN_DEF_D480[256];
lrd_to_printable(&COLUMN_NAME_D473, muliRowIndex, szCOLUMN_NAME_D473, 256, "");
lrd_to_printable(&DATA_TYPE_D474, muliRowIndex, szDATA_TYPE_D474, 256, "");
lrd_to_printable(&TYPE_NAME_D475, muliRowIndex, szTYPE_NAME_D475, 256, "");
lrd_to_printable(&COLUMN_SIZE_D476, muliRowIndex, szCOLUMN_SIZE_D476, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D477, muliRowIndex, szDECIMAL_DIGITS_D477, 256, "");
lrd_to_printable(&NULLABLE_D478, muliRowIndex, szNULLABLE_D478, 256, "");
lrd_to_printable(&REMARKS_D479, muliRowIndex, szREMARKS_D479, 256, "");
lrd_to_printable(&COLUMN_DEF_D480, muliRowIndex, szCOLUMN_DEF_D480, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D473, szDATA_TYPE_D474,
        szTYPE_NAME_D475, szCOLUMN_SIZE_D476, szDECIMAL_DIGITS_D477,
        szNULLABLE_D478, szREMARKS_D479, szCOLUMN_DEF_D480);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow140)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D482[256];
    char szKEY_SEQ_D483[256];
    char szPK_NAME_D484[256];
lrd_to_printable(&COLUMN_NAME_D482, muliRowIndex, szCOLUMN_NAME_D482, 256, "");
lrd_to_printable(&KEY_SEQ_D483, muliRowIndex, szKEY_SEQ_D483, 256, "");
lrd_to_printable(&PK_NAME_D484, muliRowIndex, szPK_NAME_D484, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D482, szKEY_SEQ_D483, szPK_NAME_D484);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow142)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D486[256];
    char szINDEX_QUALIFIER_D487[256];
    char szINDEX_NAME_D488[256];
    char szTYPE_D489[256];
    char szORDINAL_POSITION_D490[256];
    char szCOLUMN_NAME_D491[256];
    char szASC_OR_DESC_D492[256];
    char szCARDINALITY_D493[256];
    char szPAGES_D494[256];
    char szFILTER_CONDITION_D495[256];
lrd_to_printable(&NON_UNIQUE_D486, muliRowIndex, szNON_UNIQUE_D486, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D487, muliRowIndex, szINDEX_QUALIFIER_D487, 256, "");
lrd_to_printable(&INDEX_NAME_D488, muliRowIndex, szINDEX_NAME_D488, 256, "");
lrd_to_printable(&TYPE_D489, muliRowIndex, szTYPE_D489, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D490, muliRowIndex, szORDINAL_POSITION_D490, 256, "");
lrd_to_printable(&COLUMN_NAME_D491, muliRowIndex, szCOLUMN_NAME_D491, 256, "");
lrd_to_printable(&ASC_OR_DESC_D492, muliRowIndex, szASC_OR_DESC_D492, 256, "");
lrd_to_printable(&CARDINALITY_D493, muliRowIndex, szCARDINALITY_D493, 256, "");
lrd_to_printable(&PAGES_D494, muliRowIndex, szPAGES_D494, 256, "");
lrd_to_printable(&FILTER_CONDITION_D495, muliRowIndex, szFILTER_CONDITION_D495, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D486, szINDEX_QUALIFIER_D487,
        szINDEX_NAME_D488, szTYPE_D489, szORDINAL_POSITION_D490,
        szCOLUMN_NAME_D491, szASC_OR_DESC_D492, szCARDINALITY_D493,
        szPAGES_D494, szFILTER_CONDITION_D495);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow144)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D497[256];
    char szPKTABLE_NAME_D498[256];
    char szPKCOLUMN_NAME_D499[256];
    char szFKCOLUMN_NAME_D500[256];
lrd_to_printable(&PKTABLE_SCHEM_D497, muliRowIndex, szPKTABLE_SCHEM_D497, 256, "");
lrd_to_printable(&PKTABLE_NAME_D498, muliRowIndex, szPKTABLE_NAME_D498, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D499, muliRowIndex, szPKCOLUMN_NAME_D499, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D500, muliRowIndex, szFKCOLUMN_NAME_D500, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D497, szPKTABLE_NAME_D498,
        szPKCOLUMN_NAME_D499, szFKCOLUMN_NAME_D500);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow146)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D502[256];
    char szFKTABLE_SCHEM_D503[256];
    char szFKTABLE_NAME_D504[256];
    char szFKCOLUMN_NAME_D505[256];
lrd_to_printable(&PKCOLUMN_NAME_D502, muliRowIndex, szPKCOLUMN_NAME_D502, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D503, muliRowIndex, szFKTABLE_SCHEM_D503, 256, "");
lrd_to_printable(&FKTABLE_NAME_D504, muliRowIndex, szFKTABLE_NAME_D504, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D505, muliRowIndex, szFKCOLUMN_NAME_D505, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D502, szFKTABLE_SCHEM_D503,
        szFKTABLE_NAME_D504, szFKCOLUMN_NAME_D505);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow148)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D507[256];
    char szDATA_TYPE_D508[256];
    char szTYPE_NAME_D509[256];
    char szCOLUMN_SIZE_D510[256];
    char szDECIMAL_DIGITS_D511[256];
    char szNULLABLE_D512[256];
    char szREMARKS_D513[256];
    char szCOLUMN_DEF_D514[256];
lrd_to_printable(&COLUMN_NAME_D507, muliRowIndex, szCOLUMN_NAME_D507, 256, "");
lrd_to_printable(&DATA_TYPE_D508, muliRowIndex, szDATA_TYPE_D508, 256, "");
lrd_to_printable(&TYPE_NAME_D509, muliRowIndex, szTYPE_NAME_D509, 256, "");
lrd_to_printable(&COLUMN_SIZE_D510, muliRowIndex, szCOLUMN_SIZE_D510, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D511, muliRowIndex, szDECIMAL_DIGITS_D511, 256, "");
lrd_to_printable(&NULLABLE_D512, muliRowIndex, szNULLABLE_D512, 256, "");
lrd_to_printable(&REMARKS_D513, muliRowIndex, szREMARKS_D513, 256, "");
lrd_to_printable(&COLUMN_DEF_D514, muliRowIndex, szCOLUMN_DEF_D514, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D507, szDATA_TYPE_D508,
        szTYPE_NAME_D509, szCOLUMN_SIZE_D510, szDECIMAL_DIGITS_D511,
        szNULLABLE_D512, szREMARKS_D513, szCOLUMN_DEF_D514);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow150)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D516[256];
    char szKEY_SEQ_D517[256];
    char szPK_NAME_D518[256];
lrd_to_printable(&COLUMN_NAME_D516, muliRowIndex, szCOLUMN_NAME_D516, 256, "");
lrd_to_printable(&KEY_SEQ_D517, muliRowIndex, szKEY_SEQ_D517, 256, "");
lrd_to_printable(&PK_NAME_D518, muliRowIndex, szPK_NAME_D518, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D516, szKEY_SEQ_D517, szPK_NAME_D518);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow152)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D520[256];
    char szINDEX_QUALIFIER_D521[256];
    char szINDEX_NAME_D522[256];
    char szTYPE_D523[256];
    char szORDINAL_POSITION_D524[256];
    char szCOLUMN_NAME_D525[256];
    char szASC_OR_DESC_D526[256];
    char szCARDINALITY_D527[256];
    char szPAGES_D528[256];
    char szFILTER_CONDITION_D529[256];
lrd_to_printable(&NON_UNIQUE_D520, muliRowIndex, szNON_UNIQUE_D520, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D521, muliRowIndex, szINDEX_QUALIFIER_D521, 256, "");
lrd_to_printable(&INDEX_NAME_D522, muliRowIndex, szINDEX_NAME_D522, 256, "");
lrd_to_printable(&TYPE_D523, muliRowIndex, szTYPE_D523, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D524, muliRowIndex, szORDINAL_POSITION_D524, 256, "");
lrd_to_printable(&COLUMN_NAME_D525, muliRowIndex, szCOLUMN_NAME_D525, 256, "");
lrd_to_printable(&ASC_OR_DESC_D526, muliRowIndex, szASC_OR_DESC_D526, 256, "");
lrd_to_printable(&CARDINALITY_D527, muliRowIndex, szCARDINALITY_D527, 256, "");
lrd_to_printable(&PAGES_D528, muliRowIndex, szPAGES_D528, 256, "");
lrd_to_printable(&FILTER_CONDITION_D529, muliRowIndex, szFILTER_CONDITION_D529, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D520, szINDEX_QUALIFIER_D521,
        szINDEX_NAME_D522, szTYPE_D523, szORDINAL_POSITION_D524,
        szCOLUMN_NAME_D525, szASC_OR_DESC_D526, szCARDINALITY_D527,
        szPAGES_D528, szFILTER_CONDITION_D529);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow154)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D531[256];
    char szPKTABLE_NAME_D532[256];
    char szPKCOLUMN_NAME_D533[256];
    char szFKCOLUMN_NAME_D534[256];
lrd_to_printable(&PKTABLE_SCHEM_D531, muliRowIndex, szPKTABLE_SCHEM_D531, 256, "");
lrd_to_printable(&PKTABLE_NAME_D532, muliRowIndex, szPKTABLE_NAME_D532, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D533, muliRowIndex, szPKCOLUMN_NAME_D533, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D534, muliRowIndex, szFKCOLUMN_NAME_D534, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D531, szPKTABLE_NAME_D532,
        szPKCOLUMN_NAME_D533, szFKCOLUMN_NAME_D534);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow156)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D536[256];
    char szFKTABLE_SCHEM_D537[256];
    char szFKTABLE_NAME_D538[256];
    char szFKCOLUMN_NAME_D539[256];
lrd_to_printable(&PKCOLUMN_NAME_D536, muliRowIndex, szPKCOLUMN_NAME_D536, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D537, muliRowIndex, szFKTABLE_SCHEM_D537, 256, "");
lrd_to_printable(&FKTABLE_NAME_D538, muliRowIndex, szFKTABLE_NAME_D538, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D539, muliRowIndex, szFKCOLUMN_NAME_D539, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D536, szFKTABLE_SCHEM_D537,
        szFKTABLE_NAME_D538, szFKCOLUMN_NAME_D539);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow158)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D541[256];
    char szDATA_TYPE_D542[256];
    char szTYPE_NAME_D543[256];
    char szCOLUMN_SIZE_D544[256];
    char szDECIMAL_DIGITS_D545[256];
    char szNULLABLE_D546[256];
    char szREMARKS_D547[256];
    char szCOLUMN_DEF_D548[256];
lrd_to_printable(&COLUMN_NAME_D541, muliRowIndex, szCOLUMN_NAME_D541, 256, "");
lrd_to_printable(&DATA_TYPE_D542, muliRowIndex, szDATA_TYPE_D542, 256, "");
lrd_to_printable(&TYPE_NAME_D543, muliRowIndex, szTYPE_NAME_D543, 256, "");
lrd_to_printable(&COLUMN_SIZE_D544, muliRowIndex, szCOLUMN_SIZE_D544, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D545, muliRowIndex, szDECIMAL_DIGITS_D545, 256, "");
lrd_to_printable(&NULLABLE_D546, muliRowIndex, szNULLABLE_D546, 256, "");
lrd_to_printable(&REMARKS_D547, muliRowIndex, szREMARKS_D547, 256, "");
lrd_to_printable(&COLUMN_DEF_D548, muliRowIndex, szCOLUMN_DEF_D548, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D541, szDATA_TYPE_D542,
        szTYPE_NAME_D543, szCOLUMN_SIZE_D544, szDECIMAL_DIGITS_D545,
        szNULLABLE_D546, szREMARKS_D547, szCOLUMN_DEF_D548);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow160)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D550[256];
    char szKEY_SEQ_D551[256];
    char szPK_NAME_D552[256];
lrd_to_printable(&COLUMN_NAME_D550, muliRowIndex, szCOLUMN_NAME_D550, 256, "");
lrd_to_printable(&KEY_SEQ_D551, muliRowIndex, szKEY_SEQ_D551, 256, "");
lrd_to_printable(&PK_NAME_D552, muliRowIndex, szPK_NAME_D552, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D550, szKEY_SEQ_D551, szPK_NAME_D552);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow162)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D554[256];
    char szINDEX_QUALIFIER_D555[256];
    char szINDEX_NAME_D556[256];
    char szTYPE_D557[256];
    char szORDINAL_POSITION_D558[256];
    char szCOLUMN_NAME_D559[256];
    char szASC_OR_DESC_D560[256];
    char szCARDINALITY_D561[256];
    char szPAGES_D562[256];
    char szFILTER_CONDITION_D563[256];
lrd_to_printable(&NON_UNIQUE_D554, muliRowIndex, szNON_UNIQUE_D554, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D555, muliRowIndex, szINDEX_QUALIFIER_D555, 256, "");
lrd_to_printable(&INDEX_NAME_D556, muliRowIndex, szINDEX_NAME_D556, 256, "");
lrd_to_printable(&TYPE_D557, muliRowIndex, szTYPE_D557, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D558, muliRowIndex, szORDINAL_POSITION_D558, 256, "");
lrd_to_printable(&COLUMN_NAME_D559, muliRowIndex, szCOLUMN_NAME_D559, 256, "");
lrd_to_printable(&ASC_OR_DESC_D560, muliRowIndex, szASC_OR_DESC_D560, 256, "");
lrd_to_printable(&CARDINALITY_D561, muliRowIndex, szCARDINALITY_D561, 256, "");
lrd_to_printable(&PAGES_D562, muliRowIndex, szPAGES_D562, 256, "");
lrd_to_printable(&FILTER_CONDITION_D563, muliRowIndex, szFILTER_CONDITION_D563, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D554, szINDEX_QUALIFIER_D555,
        szINDEX_NAME_D556, szTYPE_D557, szORDINAL_POSITION_D558,
        szCOLUMN_NAME_D559, szASC_OR_DESC_D560, szCARDINALITY_D561,
        szPAGES_D562, szFILTER_CONDITION_D563);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow164)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D565[256];
    char szPKTABLE_NAME_D566[256];
    char szPKCOLUMN_NAME_D567[256];
    char szFKCOLUMN_NAME_D568[256];
lrd_to_printable(&PKTABLE_SCHEM_D565, muliRowIndex, szPKTABLE_SCHEM_D565, 256, "");
lrd_to_printable(&PKTABLE_NAME_D566, muliRowIndex, szPKTABLE_NAME_D566, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D567, muliRowIndex, szPKCOLUMN_NAME_D567, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D568, muliRowIndex, szFKCOLUMN_NAME_D568, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D565, szPKTABLE_NAME_D566,
        szPKCOLUMN_NAME_D567, szFKCOLUMN_NAME_D568);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow166)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D570[256];
    char szFKTABLE_SCHEM_D571[256];
    char szFKTABLE_NAME_D572[256];
    char szFKCOLUMN_NAME_D573[256];
lrd_to_printable(&PKCOLUMN_NAME_D570, muliRowIndex, szPKCOLUMN_NAME_D570, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D571, muliRowIndex, szFKTABLE_SCHEM_D571, 256, "");
lrd_to_printable(&FKTABLE_NAME_D572, muliRowIndex, szFKTABLE_NAME_D572, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D573, muliRowIndex, szFKCOLUMN_NAME_D573, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D570, szFKTABLE_SCHEM_D571,
        szFKTABLE_NAME_D572, szFKCOLUMN_NAME_D573);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow168)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D575[256];
    char szDATA_TYPE_D576[256];
    char szTYPE_NAME_D577[256];
    char szCOLUMN_SIZE_D578[256];
    char szDECIMAL_DIGITS_D579[256];
    char szNULLABLE_D580[256];
    char szREMARKS_D581[256];
    char szCOLUMN_DEF_D582[256];
lrd_to_printable(&COLUMN_NAME_D575, muliRowIndex, szCOLUMN_NAME_D575, 256, "");
lrd_to_printable(&DATA_TYPE_D576, muliRowIndex, szDATA_TYPE_D576, 256, "");
lrd_to_printable(&TYPE_NAME_D577, muliRowIndex, szTYPE_NAME_D577, 256, "");
lrd_to_printable(&COLUMN_SIZE_D578, muliRowIndex, szCOLUMN_SIZE_D578, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D579, muliRowIndex, szDECIMAL_DIGITS_D579, 256, "");
lrd_to_printable(&NULLABLE_D580, muliRowIndex, szNULLABLE_D580, 256, "");
lrd_to_printable(&REMARKS_D581, muliRowIndex, szREMARKS_D581, 256, "");
lrd_to_printable(&COLUMN_DEF_D582, muliRowIndex, szCOLUMN_DEF_D582, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D575, szDATA_TYPE_D576,
        szTYPE_NAME_D577, szCOLUMN_SIZE_D578, szDECIMAL_DIGITS_D579,
        szNULLABLE_D580, szREMARKS_D581, szCOLUMN_DEF_D582);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow170)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D584[256];
    char szKEY_SEQ_D585[256];
    char szPK_NAME_D586[256];
lrd_to_printable(&COLUMN_NAME_D584, muliRowIndex, szCOLUMN_NAME_D584, 256, "");
lrd_to_printable(&KEY_SEQ_D585, muliRowIndex, szKEY_SEQ_D585, 256, "");
lrd_to_printable(&PK_NAME_D586, muliRowIndex, szPK_NAME_D586, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D584, szKEY_SEQ_D585, szPK_NAME_D586);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow172)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D588[256];
    char szINDEX_QUALIFIER_D589[256];
    char szINDEX_NAME_D590[256];
    char szTYPE_D591[256];
    char szORDINAL_POSITION_D592[256];
    char szCOLUMN_NAME_D593[256];
    char szASC_OR_DESC_D594[256];
    char szCARDINALITY_D595[256];
    char szPAGES_D596[256];
    char szFILTER_CONDITION_D597[256];
lrd_to_printable(&NON_UNIQUE_D588, muliRowIndex, szNON_UNIQUE_D588, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D589, muliRowIndex, szINDEX_QUALIFIER_D589, 256, "");
lrd_to_printable(&INDEX_NAME_D590, muliRowIndex, szINDEX_NAME_D590, 256, "");
lrd_to_printable(&TYPE_D591, muliRowIndex, szTYPE_D591, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D592, muliRowIndex, szORDINAL_POSITION_D592, 256, "");
lrd_to_printable(&COLUMN_NAME_D593, muliRowIndex, szCOLUMN_NAME_D593, 256, "");
lrd_to_printable(&ASC_OR_DESC_D594, muliRowIndex, szASC_OR_DESC_D594, 256, "");
lrd_to_printable(&CARDINALITY_D595, muliRowIndex, szCARDINALITY_D595, 256, "");
lrd_to_printable(&PAGES_D596, muliRowIndex, szPAGES_D596, 256, "");
lrd_to_printable(&FILTER_CONDITION_D597, muliRowIndex, szFILTER_CONDITION_D597, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D588, szINDEX_QUALIFIER_D589,
        szINDEX_NAME_D590, szTYPE_D591, szORDINAL_POSITION_D592,
        szCOLUMN_NAME_D593, szASC_OR_DESC_D594, szCARDINALITY_D595,
        szPAGES_D596, szFILTER_CONDITION_D597);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow174)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D599[256];
    char szPKTABLE_NAME_D600[256];
    char szPKCOLUMN_NAME_D601[256];
    char szFKCOLUMN_NAME_D602[256];
lrd_to_printable(&PKTABLE_SCHEM_D599, muliRowIndex, szPKTABLE_SCHEM_D599, 256, "");
lrd_to_printable(&PKTABLE_NAME_D600, muliRowIndex, szPKTABLE_NAME_D600, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D601, muliRowIndex, szPKCOLUMN_NAME_D601, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D602, muliRowIndex, szFKCOLUMN_NAME_D602, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D599, szPKTABLE_NAME_D600,
        szPKCOLUMN_NAME_D601, szFKCOLUMN_NAME_D602);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow176)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D604[256];
    char szFKTABLE_SCHEM_D605[256];
    char szFKTABLE_NAME_D606[256];
    char szFKCOLUMN_NAME_D607[256];
lrd_to_printable(&PKCOLUMN_NAME_D604, muliRowIndex, szPKCOLUMN_NAME_D604, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D605, muliRowIndex, szFKTABLE_SCHEM_D605, 256, "");
lrd_to_printable(&FKTABLE_NAME_D606, muliRowIndex, szFKTABLE_NAME_D606, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D607, muliRowIndex, szFKCOLUMN_NAME_D607, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D604, szFKTABLE_SCHEM_D605,
        szFKTABLE_NAME_D606, szFKCOLUMN_NAME_D607);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow178)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D609[256];
    char szDATA_TYPE_D610[256];
    char szTYPE_NAME_D611[256];
    char szCOLUMN_SIZE_D612[256];
    char szDECIMAL_DIGITS_D613[256];
    char szNULLABLE_D614[256];
    char szREMARKS_D615[256];
    char szCOLUMN_DEF_D616[256];
lrd_to_printable(&COLUMN_NAME_D609, muliRowIndex, szCOLUMN_NAME_D609, 256, "");
lrd_to_printable(&DATA_TYPE_D610, muliRowIndex, szDATA_TYPE_D610, 256, "");
lrd_to_printable(&TYPE_NAME_D611, muliRowIndex, szTYPE_NAME_D611, 256, "");
lrd_to_printable(&COLUMN_SIZE_D612, muliRowIndex, szCOLUMN_SIZE_D612, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D613, muliRowIndex, szDECIMAL_DIGITS_D613, 256, "");
lrd_to_printable(&NULLABLE_D614, muliRowIndex, szNULLABLE_D614, 256, "");
lrd_to_printable(&REMARKS_D615, muliRowIndex, szREMARKS_D615, 256, "");
lrd_to_printable(&COLUMN_DEF_D616, muliRowIndex, szCOLUMN_DEF_D616, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D609, szDATA_TYPE_D610,
        szTYPE_NAME_D611, szCOLUMN_SIZE_D612, szDECIMAL_DIGITS_D613,
        szNULLABLE_D614, szREMARKS_D615, szCOLUMN_DEF_D616);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow180)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D618[256];
    char szKEY_SEQ_D619[256];
    char szPK_NAME_D620[256];
lrd_to_printable(&COLUMN_NAME_D618, muliRowIndex, szCOLUMN_NAME_D618, 256, "");
lrd_to_printable(&KEY_SEQ_D619, muliRowIndex, szKEY_SEQ_D619, 256, "");
lrd_to_printable(&PK_NAME_D620, muliRowIndex, szPK_NAME_D620, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D618, szKEY_SEQ_D619, szPK_NAME_D620);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow182)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D622[256];
    char szINDEX_QUALIFIER_D623[256];
    char szINDEX_NAME_D624[256];
    char szTYPE_D625[256];
    char szORDINAL_POSITION_D626[256];
    char szCOLUMN_NAME_D627[256];
    char szASC_OR_DESC_D628[256];
    char szCARDINALITY_D629[256];
    char szPAGES_D630[256];
    char szFILTER_CONDITION_D631[256];
lrd_to_printable(&NON_UNIQUE_D622, muliRowIndex, szNON_UNIQUE_D622, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D623, muliRowIndex, szINDEX_QUALIFIER_D623, 256, "");
lrd_to_printable(&INDEX_NAME_D624, muliRowIndex, szINDEX_NAME_D624, 256, "");
lrd_to_printable(&TYPE_D625, muliRowIndex, szTYPE_D625, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D626, muliRowIndex, szORDINAL_POSITION_D626, 256, "");
lrd_to_printable(&COLUMN_NAME_D627, muliRowIndex, szCOLUMN_NAME_D627, 256, "");
lrd_to_printable(&ASC_OR_DESC_D628, muliRowIndex, szASC_OR_DESC_D628, 256, "");
lrd_to_printable(&CARDINALITY_D629, muliRowIndex, szCARDINALITY_D629, 256, "");
lrd_to_printable(&PAGES_D630, muliRowIndex, szPAGES_D630, 256, "");
lrd_to_printable(&FILTER_CONDITION_D631, muliRowIndex, szFILTER_CONDITION_D631, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D622, szINDEX_QUALIFIER_D623,
        szINDEX_NAME_D624, szTYPE_D625, szORDINAL_POSITION_D626,
        szCOLUMN_NAME_D627, szASC_OR_DESC_D628, szCARDINALITY_D629,
        szPAGES_D630, szFILTER_CONDITION_D631);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow184)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D633[256];
    char szPKTABLE_NAME_D634[256];
    char szPKCOLUMN_NAME_D635[256];
    char szFKCOLUMN_NAME_D636[256];
lrd_to_printable(&PKTABLE_SCHEM_D633, muliRowIndex, szPKTABLE_SCHEM_D633, 256, "");
lrd_to_printable(&PKTABLE_NAME_D634, muliRowIndex, szPKTABLE_NAME_D634, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D635, muliRowIndex, szPKCOLUMN_NAME_D635, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D636, muliRowIndex, szFKCOLUMN_NAME_D636, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D633, szPKTABLE_NAME_D634,
        szPKCOLUMN_NAME_D635, szFKCOLUMN_NAME_D636);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow186)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D638[256];
    char szFKTABLE_SCHEM_D639[256];
    char szFKTABLE_NAME_D640[256];
    char szFKCOLUMN_NAME_D641[256];
lrd_to_printable(&PKCOLUMN_NAME_D638, muliRowIndex, szPKCOLUMN_NAME_D638, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D639, muliRowIndex, szFKTABLE_SCHEM_D639, 256, "");
lrd_to_printable(&FKTABLE_NAME_D640, muliRowIndex, szFKTABLE_NAME_D640, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D641, muliRowIndex, szFKCOLUMN_NAME_D641, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D638, szFKTABLE_SCHEM_D639,
        szFKTABLE_NAME_D640, szFKCOLUMN_NAME_D641);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow188)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D643[256];
    char szDATA_TYPE_D644[256];
    char szTYPE_NAME_D645[256];
    char szCOLUMN_SIZE_D646[256];
    char szDECIMAL_DIGITS_D647[256];
    char szNULLABLE_D648[256];
    char szREMARKS_D649[256];
    char szCOLUMN_DEF_D650[256];
lrd_to_printable(&COLUMN_NAME_D643, muliRowIndex, szCOLUMN_NAME_D643, 256, "");
lrd_to_printable(&DATA_TYPE_D644, muliRowIndex, szDATA_TYPE_D644, 256, "");
lrd_to_printable(&TYPE_NAME_D645, muliRowIndex, szTYPE_NAME_D645, 256, "");
lrd_to_printable(&COLUMN_SIZE_D646, muliRowIndex, szCOLUMN_SIZE_D646, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D647, muliRowIndex, szDECIMAL_DIGITS_D647, 256, "");
lrd_to_printable(&NULLABLE_D648, muliRowIndex, szNULLABLE_D648, 256, "");
lrd_to_printable(&REMARKS_D649, muliRowIndex, szREMARKS_D649, 256, "");
lrd_to_printable(&COLUMN_DEF_D650, muliRowIndex, szCOLUMN_DEF_D650, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D643, szDATA_TYPE_D644,
        szTYPE_NAME_D645, szCOLUMN_SIZE_D646, szDECIMAL_DIGITS_D647,
        szNULLABLE_D648, szREMARKS_D649, szCOLUMN_DEF_D650);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow190)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D652[256];
    char szKEY_SEQ_D653[256];
    char szPK_NAME_D654[256];
lrd_to_printable(&COLUMN_NAME_D652, muliRowIndex, szCOLUMN_NAME_D652, 256, "");
lrd_to_printable(&KEY_SEQ_D653, muliRowIndex, szKEY_SEQ_D653, 256, "");
lrd_to_printable(&PK_NAME_D654, muliRowIndex, szPK_NAME_D654, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D652, szKEY_SEQ_D653, szPK_NAME_D654);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow192)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D656[256];
    char szINDEX_QUALIFIER_D657[256];
    char szINDEX_NAME_D658[256];
    char szTYPE_D659[256];
    char szORDINAL_POSITION_D660[256];
    char szCOLUMN_NAME_D661[256];
    char szASC_OR_DESC_D662[256];
    char szCARDINALITY_D663[256];
    char szPAGES_D664[256];
    char szFILTER_CONDITION_D665[256];
lrd_to_printable(&NON_UNIQUE_D656, muliRowIndex, szNON_UNIQUE_D656, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D657, muliRowIndex, szINDEX_QUALIFIER_D657, 256, "");
lrd_to_printable(&INDEX_NAME_D658, muliRowIndex, szINDEX_NAME_D658, 256, "");
lrd_to_printable(&TYPE_D659, muliRowIndex, szTYPE_D659, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D660, muliRowIndex, szORDINAL_POSITION_D660, 256, "");
lrd_to_printable(&COLUMN_NAME_D661, muliRowIndex, szCOLUMN_NAME_D661, 256, "");
lrd_to_printable(&ASC_OR_DESC_D662, muliRowIndex, szASC_OR_DESC_D662, 256, "");
lrd_to_printable(&CARDINALITY_D663, muliRowIndex, szCARDINALITY_D663, 256, "");
lrd_to_printable(&PAGES_D664, muliRowIndex, szPAGES_D664, 256, "");
lrd_to_printable(&FILTER_CONDITION_D665, muliRowIndex, szFILTER_CONDITION_D665, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D656, szINDEX_QUALIFIER_D657,
        szINDEX_NAME_D658, szTYPE_D659, szORDINAL_POSITION_D660,
        szCOLUMN_NAME_D661, szASC_OR_DESC_D662, szCARDINALITY_D663,
        szPAGES_D664, szFILTER_CONDITION_D665);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow194)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D667[256];
    char szPKTABLE_NAME_D668[256];
    char szPKCOLUMN_NAME_D669[256];
    char szFKCOLUMN_NAME_D670[256];
lrd_to_printable(&PKTABLE_SCHEM_D667, muliRowIndex, szPKTABLE_SCHEM_D667, 256, "");
lrd_to_printable(&PKTABLE_NAME_D668, muliRowIndex, szPKTABLE_NAME_D668, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D669, muliRowIndex, szPKCOLUMN_NAME_D669, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D670, muliRowIndex, szFKCOLUMN_NAME_D670, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D667, szPKTABLE_NAME_D668,
        szPKCOLUMN_NAME_D669, szFKCOLUMN_NAME_D670);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow196)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D672[256];
    char szFKTABLE_SCHEM_D673[256];
    char szFKTABLE_NAME_D674[256];
    char szFKCOLUMN_NAME_D675[256];
lrd_to_printable(&PKCOLUMN_NAME_D672, muliRowIndex, szPKCOLUMN_NAME_D672, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D673, muliRowIndex, szFKTABLE_SCHEM_D673, 256, "");
lrd_to_printable(&FKTABLE_NAME_D674, muliRowIndex, szFKTABLE_NAME_D674, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D675, muliRowIndex, szFKCOLUMN_NAME_D675, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D672, szFKTABLE_SCHEM_D673,
        szFKTABLE_NAME_D674, szFKCOLUMN_NAME_D675);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow198)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D677[256];
    char szDATA_TYPE_D678[256];
    char szTYPE_NAME_D679[256];
    char szCOLUMN_SIZE_D680[256];
    char szDECIMAL_DIGITS_D681[256];
    char szNULLABLE_D682[256];
    char szREMARKS_D683[256];
    char szCOLUMN_DEF_D684[256];
lrd_to_printable(&COLUMN_NAME_D677, muliRowIndex, szCOLUMN_NAME_D677, 256, "");
lrd_to_printable(&DATA_TYPE_D678, muliRowIndex, szDATA_TYPE_D678, 256, "");
lrd_to_printable(&TYPE_NAME_D679, muliRowIndex, szTYPE_NAME_D679, 256, "");
lrd_to_printable(&COLUMN_SIZE_D680, muliRowIndex, szCOLUMN_SIZE_D680, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D681, muliRowIndex, szDECIMAL_DIGITS_D681, 256, "");
lrd_to_printable(&NULLABLE_D682, muliRowIndex, szNULLABLE_D682, 256, "");
lrd_to_printable(&REMARKS_D683, muliRowIndex, szREMARKS_D683, 256, "");
lrd_to_printable(&COLUMN_DEF_D684, muliRowIndex, szCOLUMN_DEF_D684, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D677, szDATA_TYPE_D678,
        szTYPE_NAME_D679, szCOLUMN_SIZE_D680, szDECIMAL_DIGITS_D681,
        szNULLABLE_D682, szREMARKS_D683, szCOLUMN_DEF_D684);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow200)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D686[256];
    char szKEY_SEQ_D687[256];
    char szPK_NAME_D688[256];
lrd_to_printable(&COLUMN_NAME_D686, muliRowIndex, szCOLUMN_NAME_D686, 256, "");
lrd_to_printable(&KEY_SEQ_D687, muliRowIndex, szKEY_SEQ_D687, 256, "");
lrd_to_printable(&PK_NAME_D688, muliRowIndex, szPK_NAME_D688, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D686, szKEY_SEQ_D687, szPK_NAME_D688);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow202)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D690[256];
    char szINDEX_QUALIFIER_D691[256];
    char szINDEX_NAME_D692[256];
    char szTYPE_D693[256];
    char szORDINAL_POSITION_D694[256];
    char szCOLUMN_NAME_D695[256];
    char szASC_OR_DESC_D696[256];
    char szCARDINALITY_D697[256];
    char szPAGES_D698[256];
    char szFILTER_CONDITION_D699[256];
lrd_to_printable(&NON_UNIQUE_D690, muliRowIndex, szNON_UNIQUE_D690, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D691, muliRowIndex, szINDEX_QUALIFIER_D691, 256, "");
lrd_to_printable(&INDEX_NAME_D692, muliRowIndex, szINDEX_NAME_D692, 256, "");
lrd_to_printable(&TYPE_D693, muliRowIndex, szTYPE_D693, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D694, muliRowIndex, szORDINAL_POSITION_D694, 256, "");
lrd_to_printable(&COLUMN_NAME_D695, muliRowIndex, szCOLUMN_NAME_D695, 256, "");
lrd_to_printable(&ASC_OR_DESC_D696, muliRowIndex, szASC_OR_DESC_D696, 256, "");
lrd_to_printable(&CARDINALITY_D697, muliRowIndex, szCARDINALITY_D697, 256, "");
lrd_to_printable(&PAGES_D698, muliRowIndex, szPAGES_D698, 256, "");
lrd_to_printable(&FILTER_CONDITION_D699, muliRowIndex, szFILTER_CONDITION_D699, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D690, szINDEX_QUALIFIER_D691,
        szINDEX_NAME_D692, szTYPE_D693, szORDINAL_POSITION_D694,
        szCOLUMN_NAME_D695, szASC_OR_DESC_D696, szCARDINALITY_D697,
        szPAGES_D698, szFILTER_CONDITION_D699);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow204)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D701[256];
    char szPKTABLE_NAME_D702[256];
    char szPKCOLUMN_NAME_D703[256];
    char szFKCOLUMN_NAME_D704[256];
lrd_to_printable(&PKTABLE_SCHEM_D701, muliRowIndex, szPKTABLE_SCHEM_D701, 256, "");
lrd_to_printable(&PKTABLE_NAME_D702, muliRowIndex, szPKTABLE_NAME_D702, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D703, muliRowIndex, szPKCOLUMN_NAME_D703, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D704, muliRowIndex, szFKCOLUMN_NAME_D704, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D701, szPKTABLE_NAME_D702,
        szPKCOLUMN_NAME_D703, szFKCOLUMN_NAME_D704);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow206)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D706[256];
    char szFKTABLE_SCHEM_D707[256];
    char szFKTABLE_NAME_D708[256];
    char szFKCOLUMN_NAME_D709[256];
lrd_to_printable(&PKCOLUMN_NAME_D706, muliRowIndex, szPKCOLUMN_NAME_D706, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D707, muliRowIndex, szFKTABLE_SCHEM_D707, 256, "");
lrd_to_printable(&FKTABLE_NAME_D708, muliRowIndex, szFKTABLE_NAME_D708, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D709, muliRowIndex, szFKCOLUMN_NAME_D709, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D706, szFKTABLE_SCHEM_D707,
        szFKTABLE_NAME_D708, szFKCOLUMN_NAME_D709);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow208)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D711[256];
    char szDATA_TYPE_D712[256];
    char szTYPE_NAME_D713[256];
    char szCOLUMN_SIZE_D714[256];
    char szDECIMAL_DIGITS_D715[256];
    char szNULLABLE_D716[256];
    char szREMARKS_D717[256];
    char szCOLUMN_DEF_D718[256];
lrd_to_printable(&COLUMN_NAME_D711, muliRowIndex, szCOLUMN_NAME_D711, 256, "");
lrd_to_printable(&DATA_TYPE_D712, muliRowIndex, szDATA_TYPE_D712, 256, "");
lrd_to_printable(&TYPE_NAME_D713, muliRowIndex, szTYPE_NAME_D713, 256, "");
lrd_to_printable(&COLUMN_SIZE_D714, muliRowIndex, szCOLUMN_SIZE_D714, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D715, muliRowIndex, szDECIMAL_DIGITS_D715, 256, "");
lrd_to_printable(&NULLABLE_D716, muliRowIndex, szNULLABLE_D716, 256, "");
lrd_to_printable(&REMARKS_D717, muliRowIndex, szREMARKS_D717, 256, "");
lrd_to_printable(&COLUMN_DEF_D718, muliRowIndex, szCOLUMN_DEF_D718, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D711, szDATA_TYPE_D712,
        szTYPE_NAME_D713, szCOLUMN_SIZE_D714, szDECIMAL_DIGITS_D715,
        szNULLABLE_D716, szREMARKS_D717, szCOLUMN_DEF_D718);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow210)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D720[256];
    char szKEY_SEQ_D721[256];
    char szPK_NAME_D722[256];
lrd_to_printable(&COLUMN_NAME_D720, muliRowIndex, szCOLUMN_NAME_D720, 256, "");
lrd_to_printable(&KEY_SEQ_D721, muliRowIndex, szKEY_SEQ_D721, 256, "");
lrd_to_printable(&PK_NAME_D722, muliRowIndex, szPK_NAME_D722, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D720, szKEY_SEQ_D721, szPK_NAME_D722);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow212)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D724[256];
    char szINDEX_QUALIFIER_D725[256];
    char szINDEX_NAME_D726[256];
    char szTYPE_D727[256];
    char szORDINAL_POSITION_D728[256];
    char szCOLUMN_NAME_D729[256];
    char szASC_OR_DESC_D730[256];
    char szCARDINALITY_D731[256];
    char szPAGES_D732[256];
    char szFILTER_CONDITION_D733[256];
lrd_to_printable(&NON_UNIQUE_D724, muliRowIndex, szNON_UNIQUE_D724, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D725, muliRowIndex, szINDEX_QUALIFIER_D725, 256, "");
lrd_to_printable(&INDEX_NAME_D726, muliRowIndex, szINDEX_NAME_D726, 256, "");
lrd_to_printable(&TYPE_D727, muliRowIndex, szTYPE_D727, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D728, muliRowIndex, szORDINAL_POSITION_D728, 256, "");
lrd_to_printable(&COLUMN_NAME_D729, muliRowIndex, szCOLUMN_NAME_D729, 256, "");
lrd_to_printable(&ASC_OR_DESC_D730, muliRowIndex, szASC_OR_DESC_D730, 256, "");
lrd_to_printable(&CARDINALITY_D731, muliRowIndex, szCARDINALITY_D731, 256, "");
lrd_to_printable(&PAGES_D732, muliRowIndex, szPAGES_D732, 256, "");
lrd_to_printable(&FILTER_CONDITION_D733, muliRowIndex, szFILTER_CONDITION_D733, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D724, szINDEX_QUALIFIER_D725,
        szINDEX_NAME_D726, szTYPE_D727, szORDINAL_POSITION_D728,
        szCOLUMN_NAME_D729, szASC_OR_DESC_D730, szCARDINALITY_D731,
        szPAGES_D732, szFILTER_CONDITION_D733);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow214)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D735[256];
    char szPKTABLE_NAME_D736[256];
    char szPKCOLUMN_NAME_D737[256];
    char szFKCOLUMN_NAME_D738[256];
lrd_to_printable(&PKTABLE_SCHEM_D735, muliRowIndex, szPKTABLE_SCHEM_D735, 256, "");
lrd_to_printable(&PKTABLE_NAME_D736, muliRowIndex, szPKTABLE_NAME_D736, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D737, muliRowIndex, szPKCOLUMN_NAME_D737, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D738, muliRowIndex, szFKCOLUMN_NAME_D738, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D735, szPKTABLE_NAME_D736,
        szPKCOLUMN_NAME_D737, szFKCOLUMN_NAME_D738);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow216)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D740[256];
    char szFKTABLE_SCHEM_D741[256];
    char szFKTABLE_NAME_D742[256];
    char szFKCOLUMN_NAME_D743[256];
lrd_to_printable(&PKCOLUMN_NAME_D740, muliRowIndex, szPKCOLUMN_NAME_D740, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D741, muliRowIndex, szFKTABLE_SCHEM_D741, 256, "");
lrd_to_printable(&FKTABLE_NAME_D742, muliRowIndex, szFKTABLE_NAME_D742, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D743, muliRowIndex, szFKCOLUMN_NAME_D743, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D740, szFKTABLE_SCHEM_D741,
        szFKTABLE_NAME_D742, szFKCOLUMN_NAME_D743);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow218)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D745[256];
    char szDATA_TYPE_D746[256];
    char szTYPE_NAME_D747[256];
    char szCOLUMN_SIZE_D748[256];
    char szDECIMAL_DIGITS_D749[256];
    char szNULLABLE_D750[256];
    char szREMARKS_D751[256];
    char szCOLUMN_DEF_D752[256];
lrd_to_printable(&COLUMN_NAME_D745, muliRowIndex, szCOLUMN_NAME_D745, 256, "");
lrd_to_printable(&DATA_TYPE_D746, muliRowIndex, szDATA_TYPE_D746, 256, "");
lrd_to_printable(&TYPE_NAME_D747, muliRowIndex, szTYPE_NAME_D747, 256, "");
lrd_to_printable(&COLUMN_SIZE_D748, muliRowIndex, szCOLUMN_SIZE_D748, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D749, muliRowIndex, szDECIMAL_DIGITS_D749, 256, "");
lrd_to_printable(&NULLABLE_D750, muliRowIndex, szNULLABLE_D750, 256, "");
lrd_to_printable(&REMARKS_D751, muliRowIndex, szREMARKS_D751, 256, "");
lrd_to_printable(&COLUMN_DEF_D752, muliRowIndex, szCOLUMN_DEF_D752, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D745, szDATA_TYPE_D746,
        szTYPE_NAME_D747, szCOLUMN_SIZE_D748, szDECIMAL_DIGITS_D749,
        szNULLABLE_D750, szREMARKS_D751, szCOLUMN_DEF_D752);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow220)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D754[256];
    char szKEY_SEQ_D755[256];
    char szPK_NAME_D756[256];
lrd_to_printable(&COLUMN_NAME_D754, muliRowIndex, szCOLUMN_NAME_D754, 256, "");
lrd_to_printable(&KEY_SEQ_D755, muliRowIndex, szKEY_SEQ_D755, 256, "");
lrd_to_printable(&PK_NAME_D756, muliRowIndex, szPK_NAME_D756, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D754, szKEY_SEQ_D755, szPK_NAME_D756);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow222)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D758[256];
    char szINDEX_QUALIFIER_D759[256];
    char szINDEX_NAME_D760[256];
    char szTYPE_D761[256];
    char szORDINAL_POSITION_D762[256];
    char szCOLUMN_NAME_D763[256];
    char szASC_OR_DESC_D764[256];
    char szCARDINALITY_D765[256];
    char szPAGES_D766[256];
    char szFILTER_CONDITION_D767[256];
lrd_to_printable(&NON_UNIQUE_D758, muliRowIndex, szNON_UNIQUE_D758, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D759, muliRowIndex, szINDEX_QUALIFIER_D759, 256, "");
lrd_to_printable(&INDEX_NAME_D760, muliRowIndex, szINDEX_NAME_D760, 256, "");
lrd_to_printable(&TYPE_D761, muliRowIndex, szTYPE_D761, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D762, muliRowIndex, szORDINAL_POSITION_D762, 256, "");
lrd_to_printable(&COLUMN_NAME_D763, muliRowIndex, szCOLUMN_NAME_D763, 256, "");
lrd_to_printable(&ASC_OR_DESC_D764, muliRowIndex, szASC_OR_DESC_D764, 256, "");
lrd_to_printable(&CARDINALITY_D765, muliRowIndex, szCARDINALITY_D765, 256, "");
lrd_to_printable(&PAGES_D766, muliRowIndex, szPAGES_D766, 256, "");
lrd_to_printable(&FILTER_CONDITION_D767, muliRowIndex, szFILTER_CONDITION_D767, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D758, szINDEX_QUALIFIER_D759,
        szINDEX_NAME_D760, szTYPE_D761, szORDINAL_POSITION_D762,
        szCOLUMN_NAME_D763, szASC_OR_DESC_D764, szCARDINALITY_D765,
        szPAGES_D766, szFILTER_CONDITION_D767);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow224)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D769[256];
    char szPKTABLE_NAME_D770[256];
    char szPKCOLUMN_NAME_D771[256];
    char szFKCOLUMN_NAME_D772[256];
lrd_to_printable(&PKTABLE_SCHEM_D769, muliRowIndex, szPKTABLE_SCHEM_D769, 256, "");
lrd_to_printable(&PKTABLE_NAME_D770, muliRowIndex, szPKTABLE_NAME_D770, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D771, muliRowIndex, szPKCOLUMN_NAME_D771, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D772, muliRowIndex, szFKCOLUMN_NAME_D772, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D769, szPKTABLE_NAME_D770,
        szPKCOLUMN_NAME_D771, szFKCOLUMN_NAME_D772);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow226)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D774[256];
    char szFKTABLE_SCHEM_D775[256];
    char szFKTABLE_NAME_D776[256];
    char szFKCOLUMN_NAME_D777[256];
lrd_to_printable(&PKCOLUMN_NAME_D774, muliRowIndex, szPKCOLUMN_NAME_D774, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D775, muliRowIndex, szFKTABLE_SCHEM_D775, 256, "");
lrd_to_printable(&FKTABLE_NAME_D776, muliRowIndex, szFKTABLE_NAME_D776, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D777, muliRowIndex, szFKCOLUMN_NAME_D777, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D774, szFKTABLE_SCHEM_D775,
        szFKTABLE_NAME_D776, szFKCOLUMN_NAME_D777);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow228)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D779[256];
    char szDATA_TYPE_D780[256];
    char szTYPE_NAME_D781[256];
    char szCOLUMN_SIZE_D782[256];
    char szDECIMAL_DIGITS_D783[256];
    char szNULLABLE_D784[256];
    char szREMARKS_D785[256];
    char szCOLUMN_DEF_D786[256];
lrd_to_printable(&COLUMN_NAME_D779, muliRowIndex, szCOLUMN_NAME_D779, 256, "");
lrd_to_printable(&DATA_TYPE_D780, muliRowIndex, szDATA_TYPE_D780, 256, "");
lrd_to_printable(&TYPE_NAME_D781, muliRowIndex, szTYPE_NAME_D781, 256, "");
lrd_to_printable(&COLUMN_SIZE_D782, muliRowIndex, szCOLUMN_SIZE_D782, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D783, muliRowIndex, szDECIMAL_DIGITS_D783, 256, "");
lrd_to_printable(&NULLABLE_D784, muliRowIndex, szNULLABLE_D784, 256, "");
lrd_to_printable(&REMARKS_D785, muliRowIndex, szREMARKS_D785, 256, "");
lrd_to_printable(&COLUMN_DEF_D786, muliRowIndex, szCOLUMN_DEF_D786, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D779, szDATA_TYPE_D780,
        szTYPE_NAME_D781, szCOLUMN_SIZE_D782, szDECIMAL_DIGITS_D783,
        szNULLABLE_D784, szREMARKS_D785, szCOLUMN_DEF_D786);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow230)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D788[256];
    char szKEY_SEQ_D789[256];
    char szPK_NAME_D790[256];
lrd_to_printable(&COLUMN_NAME_D788, muliRowIndex, szCOLUMN_NAME_D788, 256, "");
lrd_to_printable(&KEY_SEQ_D789, muliRowIndex, szKEY_SEQ_D789, 256, "");
lrd_to_printable(&PK_NAME_D790, muliRowIndex, szPK_NAME_D790, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D788, szKEY_SEQ_D789, szPK_NAME_D790);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow232)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D792[256];
    char szINDEX_QUALIFIER_D793[256];
    char szINDEX_NAME_D794[256];
    char szTYPE_D795[256];
    char szORDINAL_POSITION_D796[256];
    char szCOLUMN_NAME_D797[256];
    char szASC_OR_DESC_D798[256];
    char szCARDINALITY_D799[256];
    char szPAGES_D800[256];
    char szFILTER_CONDITION_D801[256];
lrd_to_printable(&NON_UNIQUE_D792, muliRowIndex, szNON_UNIQUE_D792, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D793, muliRowIndex, szINDEX_QUALIFIER_D793, 256, "");
lrd_to_printable(&INDEX_NAME_D794, muliRowIndex, szINDEX_NAME_D794, 256, "");
lrd_to_printable(&TYPE_D795, muliRowIndex, szTYPE_D795, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D796, muliRowIndex, szORDINAL_POSITION_D796, 256, "");
lrd_to_printable(&COLUMN_NAME_D797, muliRowIndex, szCOLUMN_NAME_D797, 256, "");
lrd_to_printable(&ASC_OR_DESC_D798, muliRowIndex, szASC_OR_DESC_D798, 256, "");
lrd_to_printable(&CARDINALITY_D799, muliRowIndex, szCARDINALITY_D799, 256, "");
lrd_to_printable(&PAGES_D800, muliRowIndex, szPAGES_D800, 256, "");
lrd_to_printable(&FILTER_CONDITION_D801, muliRowIndex, szFILTER_CONDITION_D801, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D792, szINDEX_QUALIFIER_D793,
        szINDEX_NAME_D794, szTYPE_D795, szORDINAL_POSITION_D796,
        szCOLUMN_NAME_D797, szASC_OR_DESC_D798, szCARDINALITY_D799,
        szPAGES_D800, szFILTER_CONDITION_D801);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow234)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D803[256];
    char szPKTABLE_NAME_D804[256];
    char szPKCOLUMN_NAME_D805[256];
    char szFKCOLUMN_NAME_D806[256];
lrd_to_printable(&PKTABLE_SCHEM_D803, muliRowIndex, szPKTABLE_SCHEM_D803, 256, "");
lrd_to_printable(&PKTABLE_NAME_D804, muliRowIndex, szPKTABLE_NAME_D804, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D805, muliRowIndex, szPKCOLUMN_NAME_D805, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D806, muliRowIndex, szFKCOLUMN_NAME_D806, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D803, szPKTABLE_NAME_D804,
        szPKCOLUMN_NAME_D805, szFKCOLUMN_NAME_D806);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow236)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D808[256];
    char szFKTABLE_SCHEM_D809[256];
    char szFKTABLE_NAME_D810[256];
    char szFKCOLUMN_NAME_D811[256];
lrd_to_printable(&PKCOLUMN_NAME_D808, muliRowIndex, szPKCOLUMN_NAME_D808, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D809, muliRowIndex, szFKTABLE_SCHEM_D809, 256, "");
lrd_to_printable(&FKTABLE_NAME_D810, muliRowIndex, szFKTABLE_NAME_D810, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D811, muliRowIndex, szFKCOLUMN_NAME_D811, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D808, szFKTABLE_SCHEM_D809,
        szFKTABLE_NAME_D810, szFKCOLUMN_NAME_D811);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow238)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D813[256];
    char szDATA_TYPE_D814[256];
    char szTYPE_NAME_D815[256];
    char szCOLUMN_SIZE_D816[256];
    char szDECIMAL_DIGITS_D817[256];
    char szNULLABLE_D818[256];
    char szREMARKS_D819[256];
    char szCOLUMN_DEF_D820[256];
lrd_to_printable(&COLUMN_NAME_D813, muliRowIndex, szCOLUMN_NAME_D813, 256, "");
lrd_to_printable(&DATA_TYPE_D814, muliRowIndex, szDATA_TYPE_D814, 256, "");
lrd_to_printable(&TYPE_NAME_D815, muliRowIndex, szTYPE_NAME_D815, 256, "");
lrd_to_printable(&COLUMN_SIZE_D816, muliRowIndex, szCOLUMN_SIZE_D816, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D817, muliRowIndex, szDECIMAL_DIGITS_D817, 256, "");
lrd_to_printable(&NULLABLE_D818, muliRowIndex, szNULLABLE_D818, 256, "");
lrd_to_printable(&REMARKS_D819, muliRowIndex, szREMARKS_D819, 256, "");
lrd_to_printable(&COLUMN_DEF_D820, muliRowIndex, szCOLUMN_DEF_D820, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D813, szDATA_TYPE_D814,
        szTYPE_NAME_D815, szCOLUMN_SIZE_D816, szDECIMAL_DIGITS_D817,
        szNULLABLE_D818, szREMARKS_D819, szCOLUMN_DEF_D820);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow240)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D822[256];
    char szKEY_SEQ_D823[256];
    char szPK_NAME_D824[256];
lrd_to_printable(&COLUMN_NAME_D822, muliRowIndex, szCOLUMN_NAME_D822, 256, "");
lrd_to_printable(&KEY_SEQ_D823, muliRowIndex, szKEY_SEQ_D823, 256, "");
lrd_to_printable(&PK_NAME_D824, muliRowIndex, szPK_NAME_D824, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D822, szKEY_SEQ_D823, szPK_NAME_D824);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow242)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D826[256];
    char szINDEX_QUALIFIER_D827[256];
    char szINDEX_NAME_D828[256];
    char szTYPE_D829[256];
    char szORDINAL_POSITION_D830[256];
    char szCOLUMN_NAME_D831[256];
    char szASC_OR_DESC_D832[256];
    char szCARDINALITY_D833[256];
    char szPAGES_D834[256];
    char szFILTER_CONDITION_D835[256];
lrd_to_printable(&NON_UNIQUE_D826, muliRowIndex, szNON_UNIQUE_D826, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D827, muliRowIndex, szINDEX_QUALIFIER_D827, 256, "");
lrd_to_printable(&INDEX_NAME_D828, muliRowIndex, szINDEX_NAME_D828, 256, "");
lrd_to_printable(&TYPE_D829, muliRowIndex, szTYPE_D829, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D830, muliRowIndex, szORDINAL_POSITION_D830, 256, "");
lrd_to_printable(&COLUMN_NAME_D831, muliRowIndex, szCOLUMN_NAME_D831, 256, "");
lrd_to_printable(&ASC_OR_DESC_D832, muliRowIndex, szASC_OR_DESC_D832, 256, "");
lrd_to_printable(&CARDINALITY_D833, muliRowIndex, szCARDINALITY_D833, 256, "");
lrd_to_printable(&PAGES_D834, muliRowIndex, szPAGES_D834, 256, "");
lrd_to_printable(&FILTER_CONDITION_D835, muliRowIndex, szFILTER_CONDITION_D835, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D826, szINDEX_QUALIFIER_D827,
        szINDEX_NAME_D828, szTYPE_D829, szORDINAL_POSITION_D830,
        szCOLUMN_NAME_D831, szASC_OR_DESC_D832, szCARDINALITY_D833,
        szPAGES_D834, szFILTER_CONDITION_D835);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow244)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D837[256];
    char szPKTABLE_NAME_D838[256];
    char szPKCOLUMN_NAME_D839[256];
    char szFKCOLUMN_NAME_D840[256];
lrd_to_printable(&PKTABLE_SCHEM_D837, muliRowIndex, szPKTABLE_SCHEM_D837, 256, "");
lrd_to_printable(&PKTABLE_NAME_D838, muliRowIndex, szPKTABLE_NAME_D838, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D839, muliRowIndex, szPKCOLUMN_NAME_D839, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D840, muliRowIndex, szFKCOLUMN_NAME_D840, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D837, szPKTABLE_NAME_D838,
        szPKCOLUMN_NAME_D839, szFKCOLUMN_NAME_D840);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow246)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D842[256];
    char szFKTABLE_SCHEM_D843[256];
    char szFKTABLE_NAME_D844[256];
    char szFKCOLUMN_NAME_D845[256];
lrd_to_printable(&PKCOLUMN_NAME_D842, muliRowIndex, szPKCOLUMN_NAME_D842, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D843, muliRowIndex, szFKTABLE_SCHEM_D843, 256, "");
lrd_to_printable(&FKTABLE_NAME_D844, muliRowIndex, szFKTABLE_NAME_D844, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D845, muliRowIndex, szFKCOLUMN_NAME_D845, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D842, szFKTABLE_SCHEM_D843,
        szFKTABLE_NAME_D844, szFKCOLUMN_NAME_D845);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow248)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D847[256];
    char szDATA_TYPE_D848[256];
    char szTYPE_NAME_D849[256];
    char szCOLUMN_SIZE_D850[256];
    char szDECIMAL_DIGITS_D851[256];
    char szNULLABLE_D852[256];
    char szREMARKS_D853[256];
    char szCOLUMN_DEF_D854[256];
lrd_to_printable(&COLUMN_NAME_D847, muliRowIndex, szCOLUMN_NAME_D847, 256, "");
lrd_to_printable(&DATA_TYPE_D848, muliRowIndex, szDATA_TYPE_D848, 256, "");
lrd_to_printable(&TYPE_NAME_D849, muliRowIndex, szTYPE_NAME_D849, 256, "");
lrd_to_printable(&COLUMN_SIZE_D850, muliRowIndex, szCOLUMN_SIZE_D850, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D851, muliRowIndex, szDECIMAL_DIGITS_D851, 256, "");
lrd_to_printable(&NULLABLE_D852, muliRowIndex, szNULLABLE_D852, 256, "");
lrd_to_printable(&REMARKS_D853, muliRowIndex, szREMARKS_D853, 256, "");
lrd_to_printable(&COLUMN_DEF_D854, muliRowIndex, szCOLUMN_DEF_D854, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D847, szDATA_TYPE_D848,
        szTYPE_NAME_D849, szCOLUMN_SIZE_D850, szDECIMAL_DIGITS_D851,
        szNULLABLE_D852, szREMARKS_D853, szCOLUMN_DEF_D854);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow250)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D856[256];
    char szKEY_SEQ_D857[256];
    char szPK_NAME_D858[256];
lrd_to_printable(&COLUMN_NAME_D856, muliRowIndex, szCOLUMN_NAME_D856, 256, "");
lrd_to_printable(&KEY_SEQ_D857, muliRowIndex, szKEY_SEQ_D857, 256, "");
lrd_to_printable(&PK_NAME_D858, muliRowIndex, szPK_NAME_D858, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D856, szKEY_SEQ_D857, szPK_NAME_D858);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow252)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D860[256];
    char szINDEX_QUALIFIER_D861[256];
    char szINDEX_NAME_D862[256];
    char szTYPE_D863[256];
    char szORDINAL_POSITION_D864[256];
    char szCOLUMN_NAME_D865[256];
    char szASC_OR_DESC_D866[256];
    char szCARDINALITY_D867[256];
    char szPAGES_D868[256];
    char szFILTER_CONDITION_D869[256];
lrd_to_printable(&NON_UNIQUE_D860, muliRowIndex, szNON_UNIQUE_D860, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D861, muliRowIndex, szINDEX_QUALIFIER_D861, 256, "");
lrd_to_printable(&INDEX_NAME_D862, muliRowIndex, szINDEX_NAME_D862, 256, "");
lrd_to_printable(&TYPE_D863, muliRowIndex, szTYPE_D863, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D864, muliRowIndex, szORDINAL_POSITION_D864, 256, "");
lrd_to_printable(&COLUMN_NAME_D865, muliRowIndex, szCOLUMN_NAME_D865, 256, "");
lrd_to_printable(&ASC_OR_DESC_D866, muliRowIndex, szASC_OR_DESC_D866, 256, "");
lrd_to_printable(&CARDINALITY_D867, muliRowIndex, szCARDINALITY_D867, 256, "");
lrd_to_printable(&PAGES_D868, muliRowIndex, szPAGES_D868, 256, "");
lrd_to_printable(&FILTER_CONDITION_D869, muliRowIndex, szFILTER_CONDITION_D869, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D860, szINDEX_QUALIFIER_D861,
        szINDEX_NAME_D862, szTYPE_D863, szORDINAL_POSITION_D864,
        szCOLUMN_NAME_D865, szASC_OR_DESC_D866, szCARDINALITY_D867,
        szPAGES_D868, szFILTER_CONDITION_D869);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow254)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D871[256];
    char szPKTABLE_NAME_D872[256];
    char szPKCOLUMN_NAME_D873[256];
    char szFKCOLUMN_NAME_D874[256];
lrd_to_printable(&PKTABLE_SCHEM_D871, muliRowIndex, szPKTABLE_SCHEM_D871, 256, "");
lrd_to_printable(&PKTABLE_NAME_D872, muliRowIndex, szPKTABLE_NAME_D872, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D873, muliRowIndex, szPKCOLUMN_NAME_D873, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D874, muliRowIndex, szFKCOLUMN_NAME_D874, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D871, szPKTABLE_NAME_D872,
        szPKCOLUMN_NAME_D873, szFKCOLUMN_NAME_D874);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow256)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D876[256];
    char szFKTABLE_SCHEM_D877[256];
    char szFKTABLE_NAME_D878[256];
    char szFKCOLUMN_NAME_D879[256];
lrd_to_printable(&PKCOLUMN_NAME_D876, muliRowIndex, szPKCOLUMN_NAME_D876, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D877, muliRowIndex, szFKTABLE_SCHEM_D877, 256, "");
lrd_to_printable(&FKTABLE_NAME_D878, muliRowIndex, szFKTABLE_NAME_D878, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D879, muliRowIndex, szFKCOLUMN_NAME_D879, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D876, szFKTABLE_SCHEM_D877,
        szFKTABLE_NAME_D878, szFKCOLUMN_NAME_D879);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow258)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D881[256];
    char szDATA_TYPE_D882[256];
    char szTYPE_NAME_D883[256];
    char szCOLUMN_SIZE_D884[256];
    char szDECIMAL_DIGITS_D885[256];
    char szNULLABLE_D886[256];
    char szREMARKS_D887[256];
    char szCOLUMN_DEF_D888[256];
lrd_to_printable(&COLUMN_NAME_D881, muliRowIndex, szCOLUMN_NAME_D881, 256, "");
lrd_to_printable(&DATA_TYPE_D882, muliRowIndex, szDATA_TYPE_D882, 256, "");
lrd_to_printable(&TYPE_NAME_D883, muliRowIndex, szTYPE_NAME_D883, 256, "");
lrd_to_printable(&COLUMN_SIZE_D884, muliRowIndex, szCOLUMN_SIZE_D884, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D885, muliRowIndex, szDECIMAL_DIGITS_D885, 256, "");
lrd_to_printable(&NULLABLE_D886, muliRowIndex, szNULLABLE_D886, 256, "");
lrd_to_printable(&REMARKS_D887, muliRowIndex, szREMARKS_D887, 256, "");
lrd_to_printable(&COLUMN_DEF_D888, muliRowIndex, szCOLUMN_DEF_D888, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D881, szDATA_TYPE_D882,
        szTYPE_NAME_D883, szCOLUMN_SIZE_D884, szDECIMAL_DIGITS_D885,
        szNULLABLE_D886, szREMARKS_D887, szCOLUMN_DEF_D888);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow260)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D890[256];
    char szKEY_SEQ_D891[256];
    char szPK_NAME_D892[256];
lrd_to_printable(&COLUMN_NAME_D890, muliRowIndex, szCOLUMN_NAME_D890, 256, "");
lrd_to_printable(&KEY_SEQ_D891, muliRowIndex, szKEY_SEQ_D891, 256, "");
lrd_to_printable(&PK_NAME_D892, muliRowIndex, szPK_NAME_D892, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D890, szKEY_SEQ_D891, szPK_NAME_D892);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow262)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D894[256];
    char szINDEX_QUALIFIER_D895[256];
    char szINDEX_NAME_D896[256];
    char szTYPE_D897[256];
    char szORDINAL_POSITION_D898[256];
    char szCOLUMN_NAME_D899[256];
    char szASC_OR_DESC_D900[256];
    char szCARDINALITY_D901[256];
    char szPAGES_D902[256];
    char szFILTER_CONDITION_D903[256];
lrd_to_printable(&NON_UNIQUE_D894, muliRowIndex, szNON_UNIQUE_D894, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D895, muliRowIndex, szINDEX_QUALIFIER_D895, 256, "");
lrd_to_printable(&INDEX_NAME_D896, muliRowIndex, szINDEX_NAME_D896, 256, "");
lrd_to_printable(&TYPE_D897, muliRowIndex, szTYPE_D897, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D898, muliRowIndex, szORDINAL_POSITION_D898, 256, "");
lrd_to_printable(&COLUMN_NAME_D899, muliRowIndex, szCOLUMN_NAME_D899, 256, "");
lrd_to_printable(&ASC_OR_DESC_D900, muliRowIndex, szASC_OR_DESC_D900, 256, "");
lrd_to_printable(&CARDINALITY_D901, muliRowIndex, szCARDINALITY_D901, 256, "");
lrd_to_printable(&PAGES_D902, muliRowIndex, szPAGES_D902, 256, "");
lrd_to_printable(&FILTER_CONDITION_D903, muliRowIndex, szFILTER_CONDITION_D903, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D894, szINDEX_QUALIFIER_D895,
        szINDEX_NAME_D896, szTYPE_D897, szORDINAL_POSITION_D898,
        szCOLUMN_NAME_D899, szASC_OR_DESC_D900, szCARDINALITY_D901,
        szPAGES_D902, szFILTER_CONDITION_D903);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow264)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D905[256];
    char szPKTABLE_NAME_D906[256];
    char szPKCOLUMN_NAME_D907[256];
    char szFKCOLUMN_NAME_D908[256];
lrd_to_printable(&PKTABLE_SCHEM_D905, muliRowIndex, szPKTABLE_SCHEM_D905, 256, "");
lrd_to_printable(&PKTABLE_NAME_D906, muliRowIndex, szPKTABLE_NAME_D906, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D907, muliRowIndex, szPKCOLUMN_NAME_D907, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D908, muliRowIndex, szFKCOLUMN_NAME_D908, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D905, szPKTABLE_NAME_D906,
        szPKCOLUMN_NAME_D907, szFKCOLUMN_NAME_D908);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow266)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D910[256];
    char szFKTABLE_SCHEM_D911[256];
    char szFKTABLE_NAME_D912[256];
    char szFKCOLUMN_NAME_D913[256];
lrd_to_printable(&PKCOLUMN_NAME_D910, muliRowIndex, szPKCOLUMN_NAME_D910, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D911, muliRowIndex, szFKTABLE_SCHEM_D911, 256, "");
lrd_to_printable(&FKTABLE_NAME_D912, muliRowIndex, szFKTABLE_NAME_D912, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D913, muliRowIndex, szFKCOLUMN_NAME_D913, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D910, szFKTABLE_SCHEM_D911,
        szFKTABLE_NAME_D912, szFKCOLUMN_NAME_D913);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow268)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D915[256];
    char szDATA_TYPE_D916[256];
    char szTYPE_NAME_D917[256];
    char szCOLUMN_SIZE_D918[256];
    char szDECIMAL_DIGITS_D919[256];
    char szNULLABLE_D920[256];
    char szREMARKS_D921[256];
    char szCOLUMN_DEF_D922[256];
lrd_to_printable(&COLUMN_NAME_D915, muliRowIndex, szCOLUMN_NAME_D915, 256, "");
lrd_to_printable(&DATA_TYPE_D916, muliRowIndex, szDATA_TYPE_D916, 256, "");
lrd_to_printable(&TYPE_NAME_D917, muliRowIndex, szTYPE_NAME_D917, 256, "");
lrd_to_printable(&COLUMN_SIZE_D918, muliRowIndex, szCOLUMN_SIZE_D918, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D919, muliRowIndex, szDECIMAL_DIGITS_D919, 256, "");
lrd_to_printable(&NULLABLE_D920, muliRowIndex, szNULLABLE_D920, 256, "");
lrd_to_printable(&REMARKS_D921, muliRowIndex, szREMARKS_D921, 256, "");
lrd_to_printable(&COLUMN_DEF_D922, muliRowIndex, szCOLUMN_DEF_D922, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D915, szDATA_TYPE_D916,
        szTYPE_NAME_D917, szCOLUMN_SIZE_D918, szDECIMAL_DIGITS_D919,
        szNULLABLE_D920, szREMARKS_D921, szCOLUMN_DEF_D922);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow270)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D924[256];
    char szKEY_SEQ_D925[256];
    char szPK_NAME_D926[256];
lrd_to_printable(&COLUMN_NAME_D924, muliRowIndex, szCOLUMN_NAME_D924, 256, "");
lrd_to_printable(&KEY_SEQ_D925, muliRowIndex, szKEY_SEQ_D925, 256, "");
lrd_to_printable(&PK_NAME_D926, muliRowIndex, szPK_NAME_D926, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D924, szKEY_SEQ_D925, szPK_NAME_D926);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow272)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D928[256];
    char szINDEX_QUALIFIER_D929[256];
    char szINDEX_NAME_D930[256];
    char szTYPE_D931[256];
    char szORDINAL_POSITION_D932[256];
    char szCOLUMN_NAME_D933[256];
    char szASC_OR_DESC_D934[256];
    char szCARDINALITY_D935[256];
    char szPAGES_D936[256];
    char szFILTER_CONDITION_D937[256];
lrd_to_printable(&NON_UNIQUE_D928, muliRowIndex, szNON_UNIQUE_D928, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D929, muliRowIndex, szINDEX_QUALIFIER_D929, 256, "");
lrd_to_printable(&INDEX_NAME_D930, muliRowIndex, szINDEX_NAME_D930, 256, "");
lrd_to_printable(&TYPE_D931, muliRowIndex, szTYPE_D931, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D932, muliRowIndex, szORDINAL_POSITION_D932, 256, "");
lrd_to_printable(&COLUMN_NAME_D933, muliRowIndex, szCOLUMN_NAME_D933, 256, "");
lrd_to_printable(&ASC_OR_DESC_D934, muliRowIndex, szASC_OR_DESC_D934, 256, "");
lrd_to_printable(&CARDINALITY_D935, muliRowIndex, szCARDINALITY_D935, 256, "");
lrd_to_printable(&PAGES_D936, muliRowIndex, szPAGES_D936, 256, "");
lrd_to_printable(&FILTER_CONDITION_D937, muliRowIndex, szFILTER_CONDITION_D937, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D928, szINDEX_QUALIFIER_D929,
        szINDEX_NAME_D930, szTYPE_D931, szORDINAL_POSITION_D932,
        szCOLUMN_NAME_D933, szASC_OR_DESC_D934, szCARDINALITY_D935,
        szPAGES_D936, szFILTER_CONDITION_D937);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow274)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D939[256];
    char szPKTABLE_NAME_D940[256];
    char szPKCOLUMN_NAME_D941[256];
    char szFKCOLUMN_NAME_D942[256];
lrd_to_printable(&PKTABLE_SCHEM_D939, muliRowIndex, szPKTABLE_SCHEM_D939, 256, "");
lrd_to_printable(&PKTABLE_NAME_D940, muliRowIndex, szPKTABLE_NAME_D940, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D941, muliRowIndex, szPKCOLUMN_NAME_D941, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D942, muliRowIndex, szFKCOLUMN_NAME_D942, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D939, szPKTABLE_NAME_D940,
        szPKCOLUMN_NAME_D941, szFKCOLUMN_NAME_D942);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow276)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D944[256];
    char szFKTABLE_SCHEM_D945[256];
    char szFKTABLE_NAME_D946[256];
    char szFKCOLUMN_NAME_D947[256];
lrd_to_printable(&PKCOLUMN_NAME_D944, muliRowIndex, szPKCOLUMN_NAME_D944, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D945, muliRowIndex, szFKTABLE_SCHEM_D945, 256, "");
lrd_to_printable(&FKTABLE_NAME_D946, muliRowIndex, szFKTABLE_NAME_D946, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D947, muliRowIndex, szFKCOLUMN_NAME_D947, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D944, szFKTABLE_SCHEM_D945,
        szFKTABLE_NAME_D946, szFKCOLUMN_NAME_D947);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow278)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D949[256];
    char szDATA_TYPE_D950[256];
    char szTYPE_NAME_D951[256];
    char szCOLUMN_SIZE_D952[256];
    char szDECIMAL_DIGITS_D953[256];
    char szNULLABLE_D954[256];
    char szREMARKS_D955[256];
    char szCOLUMN_DEF_D956[256];
lrd_to_printable(&COLUMN_NAME_D949, muliRowIndex, szCOLUMN_NAME_D949, 256, "");
lrd_to_printable(&DATA_TYPE_D950, muliRowIndex, szDATA_TYPE_D950, 256, "");
lrd_to_printable(&TYPE_NAME_D951, muliRowIndex, szTYPE_NAME_D951, 256, "");
lrd_to_printable(&COLUMN_SIZE_D952, muliRowIndex, szCOLUMN_SIZE_D952, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D953, muliRowIndex, szDECIMAL_DIGITS_D953, 256, "");
lrd_to_printable(&NULLABLE_D954, muliRowIndex, szNULLABLE_D954, 256, "");
lrd_to_printable(&REMARKS_D955, muliRowIndex, szREMARKS_D955, 256, "");
lrd_to_printable(&COLUMN_DEF_D956, muliRowIndex, szCOLUMN_DEF_D956, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D949, szDATA_TYPE_D950,
        szTYPE_NAME_D951, szCOLUMN_SIZE_D952, szDECIMAL_DIGITS_D953,
        szNULLABLE_D954, szREMARKS_D955, szCOLUMN_DEF_D956);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow280)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D958[256];
    char szKEY_SEQ_D959[256];
    char szPK_NAME_D960[256];
lrd_to_printable(&COLUMN_NAME_D958, muliRowIndex, szCOLUMN_NAME_D958, 256, "");
lrd_to_printable(&KEY_SEQ_D959, muliRowIndex, szKEY_SEQ_D959, 256, "");
lrd_to_printable(&PK_NAME_D960, muliRowIndex, szPK_NAME_D960, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D958, szKEY_SEQ_D959, szPK_NAME_D960);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow282)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D962[256];
    char szINDEX_QUALIFIER_D963[256];
    char szINDEX_NAME_D964[256];
    char szTYPE_D965[256];
    char szORDINAL_POSITION_D966[256];
    char szCOLUMN_NAME_D967[256];
    char szASC_OR_DESC_D968[256];
    char szCARDINALITY_D969[256];
    char szPAGES_D970[256];
    char szFILTER_CONDITION_D971[256];
lrd_to_printable(&NON_UNIQUE_D962, muliRowIndex, szNON_UNIQUE_D962, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D963, muliRowIndex, szINDEX_QUALIFIER_D963, 256, "");
lrd_to_printable(&INDEX_NAME_D964, muliRowIndex, szINDEX_NAME_D964, 256, "");
lrd_to_printable(&TYPE_D965, muliRowIndex, szTYPE_D965, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D966, muliRowIndex, szORDINAL_POSITION_D966, 256, "");
lrd_to_printable(&COLUMN_NAME_D967, muliRowIndex, szCOLUMN_NAME_D967, 256, "");
lrd_to_printable(&ASC_OR_DESC_D968, muliRowIndex, szASC_OR_DESC_D968, 256, "");
lrd_to_printable(&CARDINALITY_D969, muliRowIndex, szCARDINALITY_D969, 256, "");
lrd_to_printable(&PAGES_D970, muliRowIndex, szPAGES_D970, 256, "");
lrd_to_printable(&FILTER_CONDITION_D971, muliRowIndex, szFILTER_CONDITION_D971, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D962, szINDEX_QUALIFIER_D963,
        szINDEX_NAME_D964, szTYPE_D965, szORDINAL_POSITION_D966,
        szCOLUMN_NAME_D967, szASC_OR_DESC_D968, szCARDINALITY_D969,
        szPAGES_D970, szFILTER_CONDITION_D971);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow284)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D973[256];
    char szPKTABLE_NAME_D974[256];
    char szPKCOLUMN_NAME_D975[256];
    char szFKCOLUMN_NAME_D976[256];
lrd_to_printable(&PKTABLE_SCHEM_D973, muliRowIndex, szPKTABLE_SCHEM_D973, 256, "");
lrd_to_printable(&PKTABLE_NAME_D974, muliRowIndex, szPKTABLE_NAME_D974, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D975, muliRowIndex, szPKCOLUMN_NAME_D975, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D976, muliRowIndex, szFKCOLUMN_NAME_D976, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D973, szPKTABLE_NAME_D974,
        szPKCOLUMN_NAME_D975, szFKCOLUMN_NAME_D976);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow286)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D978[256];
    char szFKTABLE_SCHEM_D979[256];
    char szFKTABLE_NAME_D980[256];
    char szFKCOLUMN_NAME_D981[256];
lrd_to_printable(&PKCOLUMN_NAME_D978, muliRowIndex, szPKCOLUMN_NAME_D978, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D979, muliRowIndex, szFKTABLE_SCHEM_D979, 256, "");
lrd_to_printable(&FKTABLE_NAME_D980, muliRowIndex, szFKTABLE_NAME_D980, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D981, muliRowIndex, szFKCOLUMN_NAME_D981, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D978, szFKTABLE_SCHEM_D979,
        szFKTABLE_NAME_D980, szFKCOLUMN_NAME_D981);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow288)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D983[256];
    char szDATA_TYPE_D984[256];
    char szTYPE_NAME_D985[256];
    char szCOLUMN_SIZE_D986[256];
    char szDECIMAL_DIGITS_D987[256];
    char szNULLABLE_D988[256];
    char szREMARKS_D989[256];
    char szCOLUMN_DEF_D990[256];
lrd_to_printable(&COLUMN_NAME_D983, muliRowIndex, szCOLUMN_NAME_D983, 256, "");
lrd_to_printable(&DATA_TYPE_D984, muliRowIndex, szDATA_TYPE_D984, 256, "");
lrd_to_printable(&TYPE_NAME_D985, muliRowIndex, szTYPE_NAME_D985, 256, "");
lrd_to_printable(&COLUMN_SIZE_D986, muliRowIndex, szCOLUMN_SIZE_D986, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D987, muliRowIndex, szDECIMAL_DIGITS_D987, 256, "");
lrd_to_printable(&NULLABLE_D988, muliRowIndex, szNULLABLE_D988, 256, "");
lrd_to_printable(&REMARKS_D989, muliRowIndex, szREMARKS_D989, 256, "");
lrd_to_printable(&COLUMN_DEF_D990, muliRowIndex, szCOLUMN_DEF_D990, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D983, szDATA_TYPE_D984,
        szTYPE_NAME_D985, szCOLUMN_SIZE_D986, szDECIMAL_DIGITS_D987,
        szNULLABLE_D988, szREMARKS_D989, szCOLUMN_DEF_D990);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow290)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D992[256];
    char szKEY_SEQ_D993[256];
    char szPK_NAME_D994[256];
lrd_to_printable(&COLUMN_NAME_D992, muliRowIndex, szCOLUMN_NAME_D992, 256, "");
lrd_to_printable(&KEY_SEQ_D993, muliRowIndex, szKEY_SEQ_D993, 256, "");
lrd_to_printable(&PK_NAME_D994, muliRowIndex, szPK_NAME_D994, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D992, szKEY_SEQ_D993, szPK_NAME_D994);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow292)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D996[256];
    char szINDEX_QUALIFIER_D997[256];
    char szINDEX_NAME_D998[256];
    char szTYPE_D999[256];
    char szORDINAL_POSITION_D1000[256];
    char szCOLUMN_NAME_D1001[256];
    char szASC_OR_DESC_D1002[256];
    char szCARDINALITY_D1003[256];
    char szPAGES_D1004[256];
    char szFILTER_CONDITION_D1005[256];
lrd_to_printable(&NON_UNIQUE_D996, muliRowIndex, szNON_UNIQUE_D996, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D997, muliRowIndex, szINDEX_QUALIFIER_D997, 256, "");
lrd_to_printable(&INDEX_NAME_D998, muliRowIndex, szINDEX_NAME_D998, 256, "");
lrd_to_printable(&TYPE_D999, muliRowIndex, szTYPE_D999, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D1000, muliRowIndex, szORDINAL_POSITION_D1000, 256, "");
lrd_to_printable(&COLUMN_NAME_D1001, muliRowIndex, szCOLUMN_NAME_D1001, 256, "");
lrd_to_printable(&ASC_OR_DESC_D1002, muliRowIndex, szASC_OR_DESC_D1002, 256, "");
lrd_to_printable(&CARDINALITY_D1003, muliRowIndex, szCARDINALITY_D1003, 256, "");
lrd_to_printable(&PAGES_D1004, muliRowIndex, szPAGES_D1004, 256, "");
lrd_to_printable(&FILTER_CONDITION_D1005, muliRowIndex, szFILTER_CONDITION_D1005, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D996, szINDEX_QUALIFIER_D997,
        szINDEX_NAME_D998, szTYPE_D999, szORDINAL_POSITION_D1000,
        szCOLUMN_NAME_D1001, szASC_OR_DESC_D1002, szCARDINALITY_D1003,
        szPAGES_D1004, szFILTER_CONDITION_D1005);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow294)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D1007[256];
    char szPKTABLE_NAME_D1008[256];
    char szPKCOLUMN_NAME_D1009[256];
    char szFKCOLUMN_NAME_D1010[256];
lrd_to_printable(&PKTABLE_SCHEM_D1007, muliRowIndex, szPKTABLE_SCHEM_D1007, 256, "");
lrd_to_printable(&PKTABLE_NAME_D1008, muliRowIndex, szPKTABLE_NAME_D1008, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D1009, muliRowIndex, szPKCOLUMN_NAME_D1009, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1010, muliRowIndex, szFKCOLUMN_NAME_D1010, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D1007, szPKTABLE_NAME_D1008,
        szPKCOLUMN_NAME_D1009, szFKCOLUMN_NAME_D1010);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow296)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D1012[256];
    char szFKTABLE_SCHEM_D1013[256];
    char szFKTABLE_NAME_D1014[256];
    char szFKCOLUMN_NAME_D1015[256];
lrd_to_printable(&PKCOLUMN_NAME_D1012, muliRowIndex, szPKCOLUMN_NAME_D1012, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D1013, muliRowIndex, szFKTABLE_SCHEM_D1013, 256, "");
lrd_to_printable(&FKTABLE_NAME_D1014, muliRowIndex, szFKTABLE_NAME_D1014, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1015, muliRowIndex, szFKCOLUMN_NAME_D1015, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D1012, szFKTABLE_SCHEM_D1013,
        szFKTABLE_NAME_D1014, szFKCOLUMN_NAME_D1015);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow298)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1017[256];
    char szDATA_TYPE_D1018[256];
    char szTYPE_NAME_D1019[256];
    char szCOLUMN_SIZE_D1020[256];
    char szDECIMAL_DIGITS_D1021[256];
    char szNULLABLE_D1022[256];
    char szREMARKS_D1023[256];
    char szCOLUMN_DEF_D1024[256];
lrd_to_printable(&COLUMN_NAME_D1017, muliRowIndex, szCOLUMN_NAME_D1017, 256, "");
lrd_to_printable(&DATA_TYPE_D1018, muliRowIndex, szDATA_TYPE_D1018, 256, "");
lrd_to_printable(&TYPE_NAME_D1019, muliRowIndex, szTYPE_NAME_D1019, 256, "");
lrd_to_printable(&COLUMN_SIZE_D1020, muliRowIndex, szCOLUMN_SIZE_D1020, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D1021, muliRowIndex, szDECIMAL_DIGITS_D1021, 256, "");
lrd_to_printable(&NULLABLE_D1022, muliRowIndex, szNULLABLE_D1022, 256, "");
lrd_to_printable(&REMARKS_D1023, muliRowIndex, szREMARKS_D1023, 256, "");
lrd_to_printable(&COLUMN_DEF_D1024, muliRowIndex, szCOLUMN_DEF_D1024, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D1017, szDATA_TYPE_D1018,
        szTYPE_NAME_D1019, szCOLUMN_SIZE_D1020,
        szDECIMAL_DIGITS_D1021, szNULLABLE_D1022, szREMARKS_D1023,
        szCOLUMN_DEF_D1024);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow300)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1026[256];
    char szKEY_SEQ_D1027[256];
    char szPK_NAME_D1028[256];
lrd_to_printable(&COLUMN_NAME_D1026, muliRowIndex, szCOLUMN_NAME_D1026, 256, "");
lrd_to_printable(&KEY_SEQ_D1027, muliRowIndex, szKEY_SEQ_D1027, 256, "");
lrd_to_printable(&PK_NAME_D1028, muliRowIndex, szPK_NAME_D1028, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D1026, szKEY_SEQ_D1027, szPK_NAME_D1028);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow302)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D1030[256];
    char szINDEX_QUALIFIER_D1031[256];
    char szINDEX_NAME_D1032[256];
    char szTYPE_D1033[256];
    char szORDINAL_POSITION_D1034[256];
    char szCOLUMN_NAME_D1035[256];
    char szASC_OR_DESC_D1036[256];
    char szCARDINALITY_D1037[256];
    char szPAGES_D1038[256];
    char szFILTER_CONDITION_D1039[256];
lrd_to_printable(&NON_UNIQUE_D1030, muliRowIndex, szNON_UNIQUE_D1030, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D1031, muliRowIndex, szINDEX_QUALIFIER_D1031, 256, "");
lrd_to_printable(&INDEX_NAME_D1032, muliRowIndex, szINDEX_NAME_D1032, 256, "");
lrd_to_printable(&TYPE_D1033, muliRowIndex, szTYPE_D1033, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D1034, muliRowIndex, szORDINAL_POSITION_D1034, 256, "");
lrd_to_printable(&COLUMN_NAME_D1035, muliRowIndex, szCOLUMN_NAME_D1035, 256, "");
lrd_to_printable(&ASC_OR_DESC_D1036, muliRowIndex, szASC_OR_DESC_D1036, 256, "");
lrd_to_printable(&CARDINALITY_D1037, muliRowIndex, szCARDINALITY_D1037, 256, "");
lrd_to_printable(&PAGES_D1038, muliRowIndex, szPAGES_D1038, 256, "");
lrd_to_printable(&FILTER_CONDITION_D1039, muliRowIndex, szFILTER_CONDITION_D1039, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D1030, szINDEX_QUALIFIER_D1031,
        szINDEX_NAME_D1032, szTYPE_D1033, szORDINAL_POSITION_D1034,
        szCOLUMN_NAME_D1035, szASC_OR_DESC_D1036, szCARDINALITY_D1037,
        szPAGES_D1038, szFILTER_CONDITION_D1039);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow304)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D1041[256];
    char szPKTABLE_NAME_D1042[256];
    char szPKCOLUMN_NAME_D1043[256];
    char szFKCOLUMN_NAME_D1044[256];
lrd_to_printable(&PKTABLE_SCHEM_D1041, muliRowIndex, szPKTABLE_SCHEM_D1041, 256, "");
lrd_to_printable(&PKTABLE_NAME_D1042, muliRowIndex, szPKTABLE_NAME_D1042, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D1043, muliRowIndex, szPKCOLUMN_NAME_D1043, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1044, muliRowIndex, szFKCOLUMN_NAME_D1044, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D1041, szPKTABLE_NAME_D1042,
        szPKCOLUMN_NAME_D1043, szFKCOLUMN_NAME_D1044);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow306)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D1046[256];
    char szFKTABLE_SCHEM_D1047[256];
    char szFKTABLE_NAME_D1048[256];
    char szFKCOLUMN_NAME_D1049[256];
lrd_to_printable(&PKCOLUMN_NAME_D1046, muliRowIndex, szPKCOLUMN_NAME_D1046, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D1047, muliRowIndex, szFKTABLE_SCHEM_D1047, 256, "");
lrd_to_printable(&FKTABLE_NAME_D1048, muliRowIndex, szFKTABLE_NAME_D1048, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1049, muliRowIndex, szFKCOLUMN_NAME_D1049, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D1046, szFKTABLE_SCHEM_D1047,
        szFKTABLE_NAME_D1048, szFKCOLUMN_NAME_D1049);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow308)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1051[256];
    char szDATA_TYPE_D1052[256];
    char szTYPE_NAME_D1053[256];
    char szCOLUMN_SIZE_D1054[256];
    char szDECIMAL_DIGITS_D1055[256];
    char szNULLABLE_D1056[256];
    char szREMARKS_D1057[256];
    char szCOLUMN_DEF_D1058[256];
lrd_to_printable(&COLUMN_NAME_D1051, muliRowIndex, szCOLUMN_NAME_D1051, 256, "");
lrd_to_printable(&DATA_TYPE_D1052, muliRowIndex, szDATA_TYPE_D1052, 256, "");
lrd_to_printable(&TYPE_NAME_D1053, muliRowIndex, szTYPE_NAME_D1053, 256, "");
lrd_to_printable(&COLUMN_SIZE_D1054, muliRowIndex, szCOLUMN_SIZE_D1054, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D1055, muliRowIndex, szDECIMAL_DIGITS_D1055, 256, "");
lrd_to_printable(&NULLABLE_D1056, muliRowIndex, szNULLABLE_D1056, 256, "");
lrd_to_printable(&REMARKS_D1057, muliRowIndex, szREMARKS_D1057, 256, "");
lrd_to_printable(&COLUMN_DEF_D1058, muliRowIndex, szCOLUMN_DEF_D1058, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D1051, szDATA_TYPE_D1052,
        szTYPE_NAME_D1053, szCOLUMN_SIZE_D1054,
        szDECIMAL_DIGITS_D1055, szNULLABLE_D1056, szREMARKS_D1057,
        szCOLUMN_DEF_D1058);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow310)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1060[256];
    char szKEY_SEQ_D1061[256];
    char szPK_NAME_D1062[256];
lrd_to_printable(&COLUMN_NAME_D1060, muliRowIndex, szCOLUMN_NAME_D1060, 256, "");
lrd_to_printable(&KEY_SEQ_D1061, muliRowIndex, szKEY_SEQ_D1061, 256, "");
lrd_to_printable(&PK_NAME_D1062, muliRowIndex, szPK_NAME_D1062, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D1060, szKEY_SEQ_D1061, szPK_NAME_D1062);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow312)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D1064[256];
    char szINDEX_QUALIFIER_D1065[256];
    char szINDEX_NAME_D1066[256];
    char szTYPE_D1067[256];
    char szORDINAL_POSITION_D1068[256];
    char szCOLUMN_NAME_D1069[256];
    char szASC_OR_DESC_D1070[256];
    char szCARDINALITY_D1071[256];
    char szPAGES_D1072[256];
    char szFILTER_CONDITION_D1073[256];
lrd_to_printable(&NON_UNIQUE_D1064, muliRowIndex, szNON_UNIQUE_D1064, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D1065, muliRowIndex, szINDEX_QUALIFIER_D1065, 256, "");
lrd_to_printable(&INDEX_NAME_D1066, muliRowIndex, szINDEX_NAME_D1066, 256, "");
lrd_to_printable(&TYPE_D1067, muliRowIndex, szTYPE_D1067, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D1068, muliRowIndex, szORDINAL_POSITION_D1068, 256, "");
lrd_to_printable(&COLUMN_NAME_D1069, muliRowIndex, szCOLUMN_NAME_D1069, 256, "");
lrd_to_printable(&ASC_OR_DESC_D1070, muliRowIndex, szASC_OR_DESC_D1070, 256, "");
lrd_to_printable(&CARDINALITY_D1071, muliRowIndex, szCARDINALITY_D1071, 256, "");
lrd_to_printable(&PAGES_D1072, muliRowIndex, szPAGES_D1072, 256, "");
lrd_to_printable(&FILTER_CONDITION_D1073, muliRowIndex, szFILTER_CONDITION_D1073, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D1064, szINDEX_QUALIFIER_D1065,
        szINDEX_NAME_D1066, szTYPE_D1067, szORDINAL_POSITION_D1068,
        szCOLUMN_NAME_D1069, szASC_OR_DESC_D1070, szCARDINALITY_D1071,
        szPAGES_D1072, szFILTER_CONDITION_D1073);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow314)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D1075[256];
    char szPKTABLE_NAME_D1076[256];
    char szPKCOLUMN_NAME_D1077[256];
    char szFKCOLUMN_NAME_D1078[256];
lrd_to_printable(&PKTABLE_SCHEM_D1075, muliRowIndex, szPKTABLE_SCHEM_D1075, 256, "");
lrd_to_printable(&PKTABLE_NAME_D1076, muliRowIndex, szPKTABLE_NAME_D1076, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D1077, muliRowIndex, szPKCOLUMN_NAME_D1077, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1078, muliRowIndex, szFKCOLUMN_NAME_D1078, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D1075, szPKTABLE_NAME_D1076,
        szPKCOLUMN_NAME_D1077, szFKCOLUMN_NAME_D1078);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow316)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D1080[256];
    char szFKTABLE_SCHEM_D1081[256];
    char szFKTABLE_NAME_D1082[256];
    char szFKCOLUMN_NAME_D1083[256];
lrd_to_printable(&PKCOLUMN_NAME_D1080, muliRowIndex, szPKCOLUMN_NAME_D1080, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D1081, muliRowIndex, szFKTABLE_SCHEM_D1081, 256, "");
lrd_to_printable(&FKTABLE_NAME_D1082, muliRowIndex, szFKTABLE_NAME_D1082, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1083, muliRowIndex, szFKCOLUMN_NAME_D1083, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D1080, szFKTABLE_SCHEM_D1081,
        szFKTABLE_NAME_D1082, szFKCOLUMN_NAME_D1083);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow318)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1085[256];
    char szDATA_TYPE_D1086[256];
    char szTYPE_NAME_D1087[256];
    char szCOLUMN_SIZE_D1088[256];
    char szDECIMAL_DIGITS_D1089[256];
    char szNULLABLE_D1090[256];
    char szREMARKS_D1091[256];
    char szCOLUMN_DEF_D1092[256];
lrd_to_printable(&COLUMN_NAME_D1085, muliRowIndex, szCOLUMN_NAME_D1085, 256, "");
lrd_to_printable(&DATA_TYPE_D1086, muliRowIndex, szDATA_TYPE_D1086, 256, "");
lrd_to_printable(&TYPE_NAME_D1087, muliRowIndex, szTYPE_NAME_D1087, 256, "");
lrd_to_printable(&COLUMN_SIZE_D1088, muliRowIndex, szCOLUMN_SIZE_D1088, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D1089, muliRowIndex, szDECIMAL_DIGITS_D1089, 256, "");
lrd_to_printable(&NULLABLE_D1090, muliRowIndex, szNULLABLE_D1090, 256, "");
lrd_to_printable(&REMARKS_D1091, muliRowIndex, szREMARKS_D1091, 256, "");
lrd_to_printable(&COLUMN_DEF_D1092, muliRowIndex, szCOLUMN_DEF_D1092, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D1085, szDATA_TYPE_D1086,
        szTYPE_NAME_D1087, szCOLUMN_SIZE_D1088,
        szDECIMAL_DIGITS_D1089, szNULLABLE_D1090, szREMARKS_D1091,
        szCOLUMN_DEF_D1092);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow320)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1094[256];
    char szKEY_SEQ_D1095[256];
    char szPK_NAME_D1096[256];
lrd_to_printable(&COLUMN_NAME_D1094, muliRowIndex, szCOLUMN_NAME_D1094, 256, "");
lrd_to_printable(&KEY_SEQ_D1095, muliRowIndex, szKEY_SEQ_D1095, 256, "");
lrd_to_printable(&PK_NAME_D1096, muliRowIndex, szPK_NAME_D1096, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D1094, szKEY_SEQ_D1095, szPK_NAME_D1096);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow322)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D1098[256];
    char szINDEX_QUALIFIER_D1099[256];
    char szINDEX_NAME_D1100[256];
    char szTYPE_D1101[256];
    char szORDINAL_POSITION_D1102[256];
    char szCOLUMN_NAME_D1103[256];
    char szASC_OR_DESC_D1104[256];
    char szCARDINALITY_D1105[256];
    char szPAGES_D1106[256];
    char szFILTER_CONDITION_D1107[256];
lrd_to_printable(&NON_UNIQUE_D1098, muliRowIndex, szNON_UNIQUE_D1098, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D1099, muliRowIndex, szINDEX_QUALIFIER_D1099, 256, "");
lrd_to_printable(&INDEX_NAME_D1100, muliRowIndex, szINDEX_NAME_D1100, 256, "");
lrd_to_printable(&TYPE_D1101, muliRowIndex, szTYPE_D1101, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D1102, muliRowIndex, szORDINAL_POSITION_D1102, 256, "");
lrd_to_printable(&COLUMN_NAME_D1103, muliRowIndex, szCOLUMN_NAME_D1103, 256, "");
lrd_to_printable(&ASC_OR_DESC_D1104, muliRowIndex, szASC_OR_DESC_D1104, 256, "");
lrd_to_printable(&CARDINALITY_D1105, muliRowIndex, szCARDINALITY_D1105, 256, "");
lrd_to_printable(&PAGES_D1106, muliRowIndex, szPAGES_D1106, 256, "");
lrd_to_printable(&FILTER_CONDITION_D1107, muliRowIndex, szFILTER_CONDITION_D1107, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D1098, szINDEX_QUALIFIER_D1099,
        szINDEX_NAME_D1100, szTYPE_D1101, szORDINAL_POSITION_D1102,
        szCOLUMN_NAME_D1103, szASC_OR_DESC_D1104, szCARDINALITY_D1105,
        szPAGES_D1106, szFILTER_CONDITION_D1107);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow324)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D1109[256];
    char szPKTABLE_NAME_D1110[256];
    char szPKCOLUMN_NAME_D1111[256];
    char szFKCOLUMN_NAME_D1112[256];
lrd_to_printable(&PKTABLE_SCHEM_D1109, muliRowIndex, szPKTABLE_SCHEM_D1109, 256, "");
lrd_to_printable(&PKTABLE_NAME_D1110, muliRowIndex, szPKTABLE_NAME_D1110, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D1111, muliRowIndex, szPKCOLUMN_NAME_D1111, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1112, muliRowIndex, szFKCOLUMN_NAME_D1112, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D1109, szPKTABLE_NAME_D1110,
        szPKCOLUMN_NAME_D1111, szFKCOLUMN_NAME_D1112);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow326)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D1114[256];
    char szFKTABLE_SCHEM_D1115[256];
    char szFKTABLE_NAME_D1116[256];
    char szFKCOLUMN_NAME_D1117[256];
lrd_to_printable(&PKCOLUMN_NAME_D1114, muliRowIndex, szPKCOLUMN_NAME_D1114, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D1115, muliRowIndex, szFKTABLE_SCHEM_D1115, 256, "");
lrd_to_printable(&FKTABLE_NAME_D1116, muliRowIndex, szFKTABLE_NAME_D1116, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1117, muliRowIndex, szFKCOLUMN_NAME_D1117, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D1114, szFKTABLE_SCHEM_D1115,
        szFKTABLE_NAME_D1116, szFKCOLUMN_NAME_D1117);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow328)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1119[256];
    char szDATA_TYPE_D1120[256];
    char szTYPE_NAME_D1121[256];
    char szCOLUMN_SIZE_D1122[256];
    char szDECIMAL_DIGITS_D1123[256];
    char szNULLABLE_D1124[256];
    char szREMARKS_D1125[256];
    char szCOLUMN_DEF_D1126[256];
lrd_to_printable(&COLUMN_NAME_D1119, muliRowIndex, szCOLUMN_NAME_D1119, 256, "");
lrd_to_printable(&DATA_TYPE_D1120, muliRowIndex, szDATA_TYPE_D1120, 256, "");
lrd_to_printable(&TYPE_NAME_D1121, muliRowIndex, szTYPE_NAME_D1121, 256, "");
lrd_to_printable(&COLUMN_SIZE_D1122, muliRowIndex, szCOLUMN_SIZE_D1122, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D1123, muliRowIndex, szDECIMAL_DIGITS_D1123, 256, "");
lrd_to_printable(&NULLABLE_D1124, muliRowIndex, szNULLABLE_D1124, 256, "");
lrd_to_printable(&REMARKS_D1125, muliRowIndex, szREMARKS_D1125, 256, "");
lrd_to_printable(&COLUMN_DEF_D1126, muliRowIndex, szCOLUMN_DEF_D1126, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D1119, szDATA_TYPE_D1120,
        szTYPE_NAME_D1121, szCOLUMN_SIZE_D1122,
        szDECIMAL_DIGITS_D1123, szNULLABLE_D1124, szREMARKS_D1125,
        szCOLUMN_DEF_D1126);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow330)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1128[256];
    char szKEY_SEQ_D1129[256];
    char szPK_NAME_D1130[256];
lrd_to_printable(&COLUMN_NAME_D1128, muliRowIndex, szCOLUMN_NAME_D1128, 256, "");
lrd_to_printable(&KEY_SEQ_D1129, muliRowIndex, szKEY_SEQ_D1129, 256, "");
lrd_to_printable(&PK_NAME_D1130, muliRowIndex, szPK_NAME_D1130, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D1128, szKEY_SEQ_D1129, szPK_NAME_D1130);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow332)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D1132[256];
    char szINDEX_QUALIFIER_D1133[256];
    char szINDEX_NAME_D1134[256];
    char szTYPE_D1135[256];
    char szORDINAL_POSITION_D1136[256];
    char szCOLUMN_NAME_D1137[256];
    char szASC_OR_DESC_D1138[256];
    char szCARDINALITY_D1139[256];
    char szPAGES_D1140[256];
    char szFILTER_CONDITION_D1141[256];
lrd_to_printable(&NON_UNIQUE_D1132, muliRowIndex, szNON_UNIQUE_D1132, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D1133, muliRowIndex, szINDEX_QUALIFIER_D1133, 256, "");
lrd_to_printable(&INDEX_NAME_D1134, muliRowIndex, szINDEX_NAME_D1134, 256, "");
lrd_to_printable(&TYPE_D1135, muliRowIndex, szTYPE_D1135, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D1136, muliRowIndex, szORDINAL_POSITION_D1136, 256, "");
lrd_to_printable(&COLUMN_NAME_D1137, muliRowIndex, szCOLUMN_NAME_D1137, 256, "");
lrd_to_printable(&ASC_OR_DESC_D1138, muliRowIndex, szASC_OR_DESC_D1138, 256, "");
lrd_to_printable(&CARDINALITY_D1139, muliRowIndex, szCARDINALITY_D1139, 256, "");
lrd_to_printable(&PAGES_D1140, muliRowIndex, szPAGES_D1140, 256, "");
lrd_to_printable(&FILTER_CONDITION_D1141, muliRowIndex, szFILTER_CONDITION_D1141, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D1132, szINDEX_QUALIFIER_D1133,
        szINDEX_NAME_D1134, szTYPE_D1135, szORDINAL_POSITION_D1136,
        szCOLUMN_NAME_D1137, szASC_OR_DESC_D1138, szCARDINALITY_D1139,
        szPAGES_D1140, szFILTER_CONDITION_D1141);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow334)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D1143[256];
    char szPKTABLE_NAME_D1144[256];
    char szPKCOLUMN_NAME_D1145[256];
    char szFKCOLUMN_NAME_D1146[256];
lrd_to_printable(&PKTABLE_SCHEM_D1143, muliRowIndex, szPKTABLE_SCHEM_D1143, 256, "");
lrd_to_printable(&PKTABLE_NAME_D1144, muliRowIndex, szPKTABLE_NAME_D1144, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D1145, muliRowIndex, szPKCOLUMN_NAME_D1145, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1146, muliRowIndex, szFKCOLUMN_NAME_D1146, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D1143, szPKTABLE_NAME_D1144,
        szPKCOLUMN_NAME_D1145, szFKCOLUMN_NAME_D1146);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow336)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D1148[256];
    char szFKTABLE_SCHEM_D1149[256];
    char szFKTABLE_NAME_D1150[256];
    char szFKCOLUMN_NAME_D1151[256];
lrd_to_printable(&PKCOLUMN_NAME_D1148, muliRowIndex, szPKCOLUMN_NAME_D1148, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D1149, muliRowIndex, szFKTABLE_SCHEM_D1149, 256, "");
lrd_to_printable(&FKTABLE_NAME_D1150, muliRowIndex, szFKTABLE_NAME_D1150, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1151, muliRowIndex, szFKCOLUMN_NAME_D1151, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D1148, szFKTABLE_SCHEM_D1149,
        szFKTABLE_NAME_D1150, szFKCOLUMN_NAME_D1151);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow338)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1153[256];
    char szDATA_TYPE_D1154[256];
    char szTYPE_NAME_D1155[256];
    char szCOLUMN_SIZE_D1156[256];
    char szDECIMAL_DIGITS_D1157[256];
    char szNULLABLE_D1158[256];
    char szREMARKS_D1159[256];
    char szCOLUMN_DEF_D1160[256];
lrd_to_printable(&COLUMN_NAME_D1153, muliRowIndex, szCOLUMN_NAME_D1153, 256, "");
lrd_to_printable(&DATA_TYPE_D1154, muliRowIndex, szDATA_TYPE_D1154, 256, "");
lrd_to_printable(&TYPE_NAME_D1155, muliRowIndex, szTYPE_NAME_D1155, 256, "");
lrd_to_printable(&COLUMN_SIZE_D1156, muliRowIndex, szCOLUMN_SIZE_D1156, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D1157, muliRowIndex, szDECIMAL_DIGITS_D1157, 256, "");
lrd_to_printable(&NULLABLE_D1158, muliRowIndex, szNULLABLE_D1158, 256, "");
lrd_to_printable(&REMARKS_D1159, muliRowIndex, szREMARKS_D1159, 256, "");
lrd_to_printable(&COLUMN_DEF_D1160, muliRowIndex, szCOLUMN_DEF_D1160, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D1153, szDATA_TYPE_D1154,
        szTYPE_NAME_D1155, szCOLUMN_SIZE_D1156,
        szDECIMAL_DIGITS_D1157, szNULLABLE_D1158, szREMARKS_D1159,
        szCOLUMN_DEF_D1160);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow340)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1162[256];
    char szKEY_SEQ_D1163[256];
    char szPK_NAME_D1164[256];
lrd_to_printable(&COLUMN_NAME_D1162, muliRowIndex, szCOLUMN_NAME_D1162, 256, "");
lrd_to_printable(&KEY_SEQ_D1163, muliRowIndex, szKEY_SEQ_D1163, 256, "");
lrd_to_printable(&PK_NAME_D1164, muliRowIndex, szPK_NAME_D1164, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D1162, szKEY_SEQ_D1163, szPK_NAME_D1164);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow342)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D1166[256];
    char szINDEX_QUALIFIER_D1167[256];
    char szINDEX_NAME_D1168[256];
    char szTYPE_D1169[256];
    char szORDINAL_POSITION_D1170[256];
    char szCOLUMN_NAME_D1171[256];
    char szASC_OR_DESC_D1172[256];
    char szCARDINALITY_D1173[256];
    char szPAGES_D1174[256];
    char szFILTER_CONDITION_D1175[256];
lrd_to_printable(&NON_UNIQUE_D1166, muliRowIndex, szNON_UNIQUE_D1166, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D1167, muliRowIndex, szINDEX_QUALIFIER_D1167, 256, "");
lrd_to_printable(&INDEX_NAME_D1168, muliRowIndex, szINDEX_NAME_D1168, 256, "");
lrd_to_printable(&TYPE_D1169, muliRowIndex, szTYPE_D1169, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D1170, muliRowIndex, szORDINAL_POSITION_D1170, 256, "");
lrd_to_printable(&COLUMN_NAME_D1171, muliRowIndex, szCOLUMN_NAME_D1171, 256, "");
lrd_to_printable(&ASC_OR_DESC_D1172, muliRowIndex, szASC_OR_DESC_D1172, 256, "");
lrd_to_printable(&CARDINALITY_D1173, muliRowIndex, szCARDINALITY_D1173, 256, "");
lrd_to_printable(&PAGES_D1174, muliRowIndex, szPAGES_D1174, 256, "");
lrd_to_printable(&FILTER_CONDITION_D1175, muliRowIndex, szFILTER_CONDITION_D1175, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D1166, szINDEX_QUALIFIER_D1167,
        szINDEX_NAME_D1168, szTYPE_D1169, szORDINAL_POSITION_D1170,
        szCOLUMN_NAME_D1171, szASC_OR_DESC_D1172, szCARDINALITY_D1173,
        szPAGES_D1174, szFILTER_CONDITION_D1175);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow344)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D1177[256];
    char szPKTABLE_NAME_D1178[256];
    char szPKCOLUMN_NAME_D1179[256];
    char szFKCOLUMN_NAME_D1180[256];
lrd_to_printable(&PKTABLE_SCHEM_D1177, muliRowIndex, szPKTABLE_SCHEM_D1177, 256, "");
lrd_to_printable(&PKTABLE_NAME_D1178, muliRowIndex, szPKTABLE_NAME_D1178, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D1179, muliRowIndex, szPKCOLUMN_NAME_D1179, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1180, muliRowIndex, szFKCOLUMN_NAME_D1180, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D1177, szPKTABLE_NAME_D1178,
        szPKCOLUMN_NAME_D1179, szFKCOLUMN_NAME_D1180);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow346)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D1182[256];
    char szFKTABLE_SCHEM_D1183[256];
    char szFKTABLE_NAME_D1184[256];
    char szFKCOLUMN_NAME_D1185[256];
lrd_to_printable(&PKCOLUMN_NAME_D1182, muliRowIndex, szPKCOLUMN_NAME_D1182, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D1183, muliRowIndex, szFKTABLE_SCHEM_D1183, 256, "");
lrd_to_printable(&FKTABLE_NAME_D1184, muliRowIndex, szFKTABLE_NAME_D1184, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1185, muliRowIndex, szFKCOLUMN_NAME_D1185, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D1182, szFKTABLE_SCHEM_D1183,
        szFKTABLE_NAME_D1184, szFKCOLUMN_NAME_D1185);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow348)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1187[256];
    char szDATA_TYPE_D1188[256];
    char szTYPE_NAME_D1189[256];
    char szCOLUMN_SIZE_D1190[256];
    char szDECIMAL_DIGITS_D1191[256];
    char szNULLABLE_D1192[256];
    char szREMARKS_D1193[256];
    char szCOLUMN_DEF_D1194[256];
lrd_to_printable(&COLUMN_NAME_D1187, muliRowIndex, szCOLUMN_NAME_D1187, 256, "");
lrd_to_printable(&DATA_TYPE_D1188, muliRowIndex, szDATA_TYPE_D1188, 256, "");
lrd_to_printable(&TYPE_NAME_D1189, muliRowIndex, szTYPE_NAME_D1189, 256, "");
lrd_to_printable(&COLUMN_SIZE_D1190, muliRowIndex, szCOLUMN_SIZE_D1190, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D1191, muliRowIndex, szDECIMAL_DIGITS_D1191, 256, "");
lrd_to_printable(&NULLABLE_D1192, muliRowIndex, szNULLABLE_D1192, 256, "");
lrd_to_printable(&REMARKS_D1193, muliRowIndex, szREMARKS_D1193, 256, "");
lrd_to_printable(&COLUMN_DEF_D1194, muliRowIndex, szCOLUMN_DEF_D1194, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D1187, szDATA_TYPE_D1188,
        szTYPE_NAME_D1189, szCOLUMN_SIZE_D1190,
        szDECIMAL_DIGITS_D1191, szNULLABLE_D1192, szREMARKS_D1193,
        szCOLUMN_DEF_D1194);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow350)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1196[256];
    char szKEY_SEQ_D1197[256];
    char szPK_NAME_D1198[256];
lrd_to_printable(&COLUMN_NAME_D1196, muliRowIndex, szCOLUMN_NAME_D1196, 256, "");
lrd_to_printable(&KEY_SEQ_D1197, muliRowIndex, szKEY_SEQ_D1197, 256, "");
lrd_to_printable(&PK_NAME_D1198, muliRowIndex, szPK_NAME_D1198, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D1196, szKEY_SEQ_D1197, szPK_NAME_D1198);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow352)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D1200[256];
    char szINDEX_QUALIFIER_D1201[256];
    char szINDEX_NAME_D1202[256];
    char szTYPE_D1203[256];
    char szORDINAL_POSITION_D1204[256];
    char szCOLUMN_NAME_D1205[256];
    char szASC_OR_DESC_D1206[256];
    char szCARDINALITY_D1207[256];
    char szPAGES_D1208[256];
    char szFILTER_CONDITION_D1209[256];
lrd_to_printable(&NON_UNIQUE_D1200, muliRowIndex, szNON_UNIQUE_D1200, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D1201, muliRowIndex, szINDEX_QUALIFIER_D1201, 256, "");
lrd_to_printable(&INDEX_NAME_D1202, muliRowIndex, szINDEX_NAME_D1202, 256, "");
lrd_to_printable(&TYPE_D1203, muliRowIndex, szTYPE_D1203, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D1204, muliRowIndex, szORDINAL_POSITION_D1204, 256, "");
lrd_to_printable(&COLUMN_NAME_D1205, muliRowIndex, szCOLUMN_NAME_D1205, 256, "");
lrd_to_printable(&ASC_OR_DESC_D1206, muliRowIndex, szASC_OR_DESC_D1206, 256, "");
lrd_to_printable(&CARDINALITY_D1207, muliRowIndex, szCARDINALITY_D1207, 256, "");
lrd_to_printable(&PAGES_D1208, muliRowIndex, szPAGES_D1208, 256, "");
lrd_to_printable(&FILTER_CONDITION_D1209, muliRowIndex, szFILTER_CONDITION_D1209, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D1200, szINDEX_QUALIFIER_D1201,
        szINDEX_NAME_D1202, szTYPE_D1203, szORDINAL_POSITION_D1204,
        szCOLUMN_NAME_D1205, szASC_OR_DESC_D1206, szCARDINALITY_D1207,
        szPAGES_D1208, szFILTER_CONDITION_D1209);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow354)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D1211[256];
    char szPKTABLE_NAME_D1212[256];
    char szPKCOLUMN_NAME_D1213[256];
    char szFKCOLUMN_NAME_D1214[256];
lrd_to_printable(&PKTABLE_SCHEM_D1211, muliRowIndex, szPKTABLE_SCHEM_D1211, 256, "");
lrd_to_printable(&PKTABLE_NAME_D1212, muliRowIndex, szPKTABLE_NAME_D1212, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D1213, muliRowIndex, szPKCOLUMN_NAME_D1213, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1214, muliRowIndex, szFKCOLUMN_NAME_D1214, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D1211, szPKTABLE_NAME_D1212,
        szPKCOLUMN_NAME_D1213, szFKCOLUMN_NAME_D1214);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow356)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D1216[256];
    char szFKTABLE_SCHEM_D1217[256];
    char szFKTABLE_NAME_D1218[256];
    char szFKCOLUMN_NAME_D1219[256];
lrd_to_printable(&PKCOLUMN_NAME_D1216, muliRowIndex, szPKCOLUMN_NAME_D1216, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D1217, muliRowIndex, szFKTABLE_SCHEM_D1217, 256, "");
lrd_to_printable(&FKTABLE_NAME_D1218, muliRowIndex, szFKTABLE_NAME_D1218, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1219, muliRowIndex, szFKCOLUMN_NAME_D1219, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D1216, szFKTABLE_SCHEM_D1217,
        szFKTABLE_NAME_D1218, szFKCOLUMN_NAME_D1219);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow358)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1221[256];
    char szDATA_TYPE_D1222[256];
    char szTYPE_NAME_D1223[256];
    char szCOLUMN_SIZE_D1224[256];
    char szDECIMAL_DIGITS_D1225[256];
    char szNULLABLE_D1226[256];
    char szREMARKS_D1227[256];
    char szCOLUMN_DEF_D1228[256];
lrd_to_printable(&COLUMN_NAME_D1221, muliRowIndex, szCOLUMN_NAME_D1221, 256, "");
lrd_to_printable(&DATA_TYPE_D1222, muliRowIndex, szDATA_TYPE_D1222, 256, "");
lrd_to_printable(&TYPE_NAME_D1223, muliRowIndex, szTYPE_NAME_D1223, 256, "");
lrd_to_printable(&COLUMN_SIZE_D1224, muliRowIndex, szCOLUMN_SIZE_D1224, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D1225, muliRowIndex, szDECIMAL_DIGITS_D1225, 256, "");
lrd_to_printable(&NULLABLE_D1226, muliRowIndex, szNULLABLE_D1226, 256, "");
lrd_to_printable(&REMARKS_D1227, muliRowIndex, szREMARKS_D1227, 256, "");
lrd_to_printable(&COLUMN_DEF_D1228, muliRowIndex, szCOLUMN_DEF_D1228, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D1221, szDATA_TYPE_D1222,
        szTYPE_NAME_D1223, szCOLUMN_SIZE_D1224,
        szDECIMAL_DIGITS_D1225, szNULLABLE_D1226, szREMARKS_D1227,
        szCOLUMN_DEF_D1228);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow360)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1230[256];
    char szKEY_SEQ_D1231[256];
    char szPK_NAME_D1232[256];
lrd_to_printable(&COLUMN_NAME_D1230, muliRowIndex, szCOLUMN_NAME_D1230, 256, "");
lrd_to_printable(&KEY_SEQ_D1231, muliRowIndex, szKEY_SEQ_D1231, 256, "");
lrd_to_printable(&PK_NAME_D1232, muliRowIndex, szPK_NAME_D1232, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D1230, szKEY_SEQ_D1231, szPK_NAME_D1232);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow362)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D1234[256];
    char szINDEX_QUALIFIER_D1235[256];
    char szINDEX_NAME_D1236[256];
    char szTYPE_D1237[256];
    char szORDINAL_POSITION_D1238[256];
    char szCOLUMN_NAME_D1239[256];
    char szASC_OR_DESC_D1240[256];
    char szCARDINALITY_D1241[256];
    char szPAGES_D1242[256];
    char szFILTER_CONDITION_D1243[256];
lrd_to_printable(&NON_UNIQUE_D1234, muliRowIndex, szNON_UNIQUE_D1234, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D1235, muliRowIndex, szINDEX_QUALIFIER_D1235, 256, "");
lrd_to_printable(&INDEX_NAME_D1236, muliRowIndex, szINDEX_NAME_D1236, 256, "");
lrd_to_printable(&TYPE_D1237, muliRowIndex, szTYPE_D1237, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D1238, muliRowIndex, szORDINAL_POSITION_D1238, 256, "");
lrd_to_printable(&COLUMN_NAME_D1239, muliRowIndex, szCOLUMN_NAME_D1239, 256, "");
lrd_to_printable(&ASC_OR_DESC_D1240, muliRowIndex, szASC_OR_DESC_D1240, 256, "");
lrd_to_printable(&CARDINALITY_D1241, muliRowIndex, szCARDINALITY_D1241, 256, "");
lrd_to_printable(&PAGES_D1242, muliRowIndex, szPAGES_D1242, 256, "");
lrd_to_printable(&FILTER_CONDITION_D1243, muliRowIndex, szFILTER_CONDITION_D1243, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D1234, szINDEX_QUALIFIER_D1235,
        szINDEX_NAME_D1236, szTYPE_D1237, szORDINAL_POSITION_D1238,
        szCOLUMN_NAME_D1239, szASC_OR_DESC_D1240, szCARDINALITY_D1241,
        szPAGES_D1242, szFILTER_CONDITION_D1243);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow364)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D1245[256];
    char szPKTABLE_NAME_D1246[256];
    char szPKCOLUMN_NAME_D1247[256];
    char szFKCOLUMN_NAME_D1248[256];
lrd_to_printable(&PKTABLE_SCHEM_D1245, muliRowIndex, szPKTABLE_SCHEM_D1245, 256, "");
lrd_to_printable(&PKTABLE_NAME_D1246, muliRowIndex, szPKTABLE_NAME_D1246, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D1247, muliRowIndex, szPKCOLUMN_NAME_D1247, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1248, muliRowIndex, szFKCOLUMN_NAME_D1248, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D1245, szPKTABLE_NAME_D1246,
        szPKCOLUMN_NAME_D1247, szFKCOLUMN_NAME_D1248);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow366)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D1250[256];
    char szFKTABLE_SCHEM_D1251[256];
    char szFKTABLE_NAME_D1252[256];
    char szFKCOLUMN_NAME_D1253[256];
lrd_to_printable(&PKCOLUMN_NAME_D1250, muliRowIndex, szPKCOLUMN_NAME_D1250, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D1251, muliRowIndex, szFKTABLE_SCHEM_D1251, 256, "");
lrd_to_printable(&FKTABLE_NAME_D1252, muliRowIndex, szFKTABLE_NAME_D1252, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1253, muliRowIndex, szFKCOLUMN_NAME_D1253, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D1250, szFKTABLE_SCHEM_D1251,
        szFKTABLE_NAME_D1252, szFKCOLUMN_NAME_D1253);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow368)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1255[256];
    char szDATA_TYPE_D1256[256];
    char szTYPE_NAME_D1257[256];
    char szCOLUMN_SIZE_D1258[256];
    char szDECIMAL_DIGITS_D1259[256];
    char szNULLABLE_D1260[256];
    char szREMARKS_D1261[256];
    char szCOLUMN_DEF_D1262[256];
lrd_to_printable(&COLUMN_NAME_D1255, muliRowIndex, szCOLUMN_NAME_D1255, 256, "");
lrd_to_printable(&DATA_TYPE_D1256, muliRowIndex, szDATA_TYPE_D1256, 256, "");
lrd_to_printable(&TYPE_NAME_D1257, muliRowIndex, szTYPE_NAME_D1257, 256, "");
lrd_to_printable(&COLUMN_SIZE_D1258, muliRowIndex, szCOLUMN_SIZE_D1258, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D1259, muliRowIndex, szDECIMAL_DIGITS_D1259, 256, "");
lrd_to_printable(&NULLABLE_D1260, muliRowIndex, szNULLABLE_D1260, 256, "");
lrd_to_printable(&REMARKS_D1261, muliRowIndex, szREMARKS_D1261, 256, "");
lrd_to_printable(&COLUMN_DEF_D1262, muliRowIndex, szCOLUMN_DEF_D1262, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D1255, szDATA_TYPE_D1256,
        szTYPE_NAME_D1257, szCOLUMN_SIZE_D1258,
        szDECIMAL_DIGITS_D1259, szNULLABLE_D1260, szREMARKS_D1261,
        szCOLUMN_DEF_D1262);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow370)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1264[256];
    char szKEY_SEQ_D1265[256];
    char szPK_NAME_D1266[256];
lrd_to_printable(&COLUMN_NAME_D1264, muliRowIndex, szCOLUMN_NAME_D1264, 256, "");
lrd_to_printable(&KEY_SEQ_D1265, muliRowIndex, szKEY_SEQ_D1265, 256, "");
lrd_to_printable(&PK_NAME_D1266, muliRowIndex, szPK_NAME_D1266, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D1264, szKEY_SEQ_D1265, szPK_NAME_D1266);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow372)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D1268[256];
    char szINDEX_QUALIFIER_D1269[256];
    char szINDEX_NAME_D1270[256];
    char szTYPE_D1271[256];
    char szORDINAL_POSITION_D1272[256];
    char szCOLUMN_NAME_D1273[256];
    char szASC_OR_DESC_D1274[256];
    char szCARDINALITY_D1275[256];
    char szPAGES_D1276[256];
    char szFILTER_CONDITION_D1277[256];
lrd_to_printable(&NON_UNIQUE_D1268, muliRowIndex, szNON_UNIQUE_D1268, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D1269, muliRowIndex, szINDEX_QUALIFIER_D1269, 256, "");
lrd_to_printable(&INDEX_NAME_D1270, muliRowIndex, szINDEX_NAME_D1270, 256, "");
lrd_to_printable(&TYPE_D1271, muliRowIndex, szTYPE_D1271, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D1272, muliRowIndex, szORDINAL_POSITION_D1272, 256, "");
lrd_to_printable(&COLUMN_NAME_D1273, muliRowIndex, szCOLUMN_NAME_D1273, 256, "");
lrd_to_printable(&ASC_OR_DESC_D1274, muliRowIndex, szASC_OR_DESC_D1274, 256, "");
lrd_to_printable(&CARDINALITY_D1275, muliRowIndex, szCARDINALITY_D1275, 256, "");
lrd_to_printable(&PAGES_D1276, muliRowIndex, szPAGES_D1276, 256, "");
lrd_to_printable(&FILTER_CONDITION_D1277, muliRowIndex, szFILTER_CONDITION_D1277, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D1268, szINDEX_QUALIFIER_D1269,
        szINDEX_NAME_D1270, szTYPE_D1271, szORDINAL_POSITION_D1272,
        szCOLUMN_NAME_D1273, szASC_OR_DESC_D1274, szCARDINALITY_D1275,
        szPAGES_D1276, szFILTER_CONDITION_D1277);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow374)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D1279[256];
    char szPKTABLE_NAME_D1280[256];
    char szPKCOLUMN_NAME_D1281[256];
    char szFKCOLUMN_NAME_D1282[256];
lrd_to_printable(&PKTABLE_SCHEM_D1279, muliRowIndex, szPKTABLE_SCHEM_D1279, 256, "");
lrd_to_printable(&PKTABLE_NAME_D1280, muliRowIndex, szPKTABLE_NAME_D1280, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D1281, muliRowIndex, szPKCOLUMN_NAME_D1281, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1282, muliRowIndex, szFKCOLUMN_NAME_D1282, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D1279, szPKTABLE_NAME_D1280,
        szPKCOLUMN_NAME_D1281, szFKCOLUMN_NAME_D1282);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow376)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D1284[256];
    char szFKTABLE_SCHEM_D1285[256];
    char szFKTABLE_NAME_D1286[256];
    char szFKCOLUMN_NAME_D1287[256];
lrd_to_printable(&PKCOLUMN_NAME_D1284, muliRowIndex, szPKCOLUMN_NAME_D1284, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D1285, muliRowIndex, szFKTABLE_SCHEM_D1285, 256, "");
lrd_to_printable(&FKTABLE_NAME_D1286, muliRowIndex, szFKTABLE_NAME_D1286, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1287, muliRowIndex, szFKCOLUMN_NAME_D1287, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D1284, szFKTABLE_SCHEM_D1285,
        szFKTABLE_NAME_D1286, szFKCOLUMN_NAME_D1287);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow378)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1289[256];
    char szDATA_TYPE_D1290[256];
    char szTYPE_NAME_D1291[256];
    char szCOLUMN_SIZE_D1292[256];
    char szDECIMAL_DIGITS_D1293[256];
    char szNULLABLE_D1294[256];
    char szREMARKS_D1295[256];
    char szCOLUMN_DEF_D1296[256];
lrd_to_printable(&COLUMN_NAME_D1289, muliRowIndex, szCOLUMN_NAME_D1289, 256, "");
lrd_to_printable(&DATA_TYPE_D1290, muliRowIndex, szDATA_TYPE_D1290, 256, "");
lrd_to_printable(&TYPE_NAME_D1291, muliRowIndex, szTYPE_NAME_D1291, 256, "");
lrd_to_printable(&COLUMN_SIZE_D1292, muliRowIndex, szCOLUMN_SIZE_D1292, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D1293, muliRowIndex, szDECIMAL_DIGITS_D1293, 256, "");
lrd_to_printable(&NULLABLE_D1294, muliRowIndex, szNULLABLE_D1294, 256, "");
lrd_to_printable(&REMARKS_D1295, muliRowIndex, szREMARKS_D1295, 256, "");
lrd_to_printable(&COLUMN_DEF_D1296, muliRowIndex, szCOLUMN_DEF_D1296, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D1289, szDATA_TYPE_D1290,
        szTYPE_NAME_D1291, szCOLUMN_SIZE_D1292,
        szDECIMAL_DIGITS_D1293, szNULLABLE_D1294, szREMARKS_D1295,
        szCOLUMN_DEF_D1296);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow380)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1298[256];
    char szKEY_SEQ_D1299[256];
    char szPK_NAME_D1300[256];
lrd_to_printable(&COLUMN_NAME_D1298, muliRowIndex, szCOLUMN_NAME_D1298, 256, "");
lrd_to_printable(&KEY_SEQ_D1299, muliRowIndex, szKEY_SEQ_D1299, 256, "");
lrd_to_printable(&PK_NAME_D1300, muliRowIndex, szPK_NAME_D1300, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D1298, szKEY_SEQ_D1299, szPK_NAME_D1300);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow382)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D1302[256];
    char szINDEX_QUALIFIER_D1303[256];
    char szINDEX_NAME_D1304[256];
    char szTYPE_D1305[256];
    char szORDINAL_POSITION_D1306[256];
    char szCOLUMN_NAME_D1307[256];
    char szASC_OR_DESC_D1308[256];
    char szCARDINALITY_D1309[256];
    char szPAGES_D1310[256];
    char szFILTER_CONDITION_D1311[256];
lrd_to_printable(&NON_UNIQUE_D1302, muliRowIndex, szNON_UNIQUE_D1302, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D1303, muliRowIndex, szINDEX_QUALIFIER_D1303, 256, "");
lrd_to_printable(&INDEX_NAME_D1304, muliRowIndex, szINDEX_NAME_D1304, 256, "");
lrd_to_printable(&TYPE_D1305, muliRowIndex, szTYPE_D1305, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D1306, muliRowIndex, szORDINAL_POSITION_D1306, 256, "");
lrd_to_printable(&COLUMN_NAME_D1307, muliRowIndex, szCOLUMN_NAME_D1307, 256, "");
lrd_to_printable(&ASC_OR_DESC_D1308, muliRowIndex, szASC_OR_DESC_D1308, 256, "");
lrd_to_printable(&CARDINALITY_D1309, muliRowIndex, szCARDINALITY_D1309, 256, "");
lrd_to_printable(&PAGES_D1310, muliRowIndex, szPAGES_D1310, 256, "");
lrd_to_printable(&FILTER_CONDITION_D1311, muliRowIndex, szFILTER_CONDITION_D1311, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D1302, szINDEX_QUALIFIER_D1303,
        szINDEX_NAME_D1304, szTYPE_D1305, szORDINAL_POSITION_D1306,
        szCOLUMN_NAME_D1307, szASC_OR_DESC_D1308, szCARDINALITY_D1309,
        szPAGES_D1310, szFILTER_CONDITION_D1311);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow384)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D1313[256];
    char szPKTABLE_NAME_D1314[256];
    char szPKCOLUMN_NAME_D1315[256];
    char szFKCOLUMN_NAME_D1316[256];
lrd_to_printable(&PKTABLE_SCHEM_D1313, muliRowIndex, szPKTABLE_SCHEM_D1313, 256, "");
lrd_to_printable(&PKTABLE_NAME_D1314, muliRowIndex, szPKTABLE_NAME_D1314, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D1315, muliRowIndex, szPKCOLUMN_NAME_D1315, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1316, muliRowIndex, szFKCOLUMN_NAME_D1316, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D1313, szPKTABLE_NAME_D1314,
        szPKCOLUMN_NAME_D1315, szFKCOLUMN_NAME_D1316);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow386)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D1318[256];
    char szFKTABLE_SCHEM_D1319[256];
    char szFKTABLE_NAME_D1320[256];
    char szFKCOLUMN_NAME_D1321[256];
lrd_to_printable(&PKCOLUMN_NAME_D1318, muliRowIndex, szPKCOLUMN_NAME_D1318, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D1319, muliRowIndex, szFKTABLE_SCHEM_D1319, 256, "");
lrd_to_printable(&FKTABLE_NAME_D1320, muliRowIndex, szFKTABLE_NAME_D1320, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1321, muliRowIndex, szFKCOLUMN_NAME_D1321, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D1318, szFKTABLE_SCHEM_D1319,
        szFKTABLE_NAME_D1320, szFKCOLUMN_NAME_D1321);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow388)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1323[256];
    char szDATA_TYPE_D1324[256];
    char szTYPE_NAME_D1325[256];
    char szCOLUMN_SIZE_D1326[256];
    char szDECIMAL_DIGITS_D1327[256];
    char szNULLABLE_D1328[256];
    char szREMARKS_D1329[256];
    char szCOLUMN_DEF_D1330[256];
lrd_to_printable(&COLUMN_NAME_D1323, muliRowIndex, szCOLUMN_NAME_D1323, 256, "");
lrd_to_printable(&DATA_TYPE_D1324, muliRowIndex, szDATA_TYPE_D1324, 256, "");
lrd_to_printable(&TYPE_NAME_D1325, muliRowIndex, szTYPE_NAME_D1325, 256, "");
lrd_to_printable(&COLUMN_SIZE_D1326, muliRowIndex, szCOLUMN_SIZE_D1326, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D1327, muliRowIndex, szDECIMAL_DIGITS_D1327, 256, "");
lrd_to_printable(&NULLABLE_D1328, muliRowIndex, szNULLABLE_D1328, 256, "");
lrd_to_printable(&REMARKS_D1329, muliRowIndex, szREMARKS_D1329, 256, "");
lrd_to_printable(&COLUMN_DEF_D1330, muliRowIndex, szCOLUMN_DEF_D1330, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D1323, szDATA_TYPE_D1324,
        szTYPE_NAME_D1325, szCOLUMN_SIZE_D1326,
        szDECIMAL_DIGITS_D1327, szNULLABLE_D1328, szREMARKS_D1329,
        szCOLUMN_DEF_D1330);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow390)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1332[256];
    char szKEY_SEQ_D1333[256];
    char szPK_NAME_D1334[256];
lrd_to_printable(&COLUMN_NAME_D1332, muliRowIndex, szCOLUMN_NAME_D1332, 256, "");
lrd_to_printable(&KEY_SEQ_D1333, muliRowIndex, szKEY_SEQ_D1333, 256, "");
lrd_to_printable(&PK_NAME_D1334, muliRowIndex, szPK_NAME_D1334, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D1332, szKEY_SEQ_D1333, szPK_NAME_D1334);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow392)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D1336[256];
    char szINDEX_QUALIFIER_D1337[256];
    char szINDEX_NAME_D1338[256];
    char szTYPE_D1339[256];
    char szORDINAL_POSITION_D1340[256];
    char szCOLUMN_NAME_D1341[256];
    char szASC_OR_DESC_D1342[256];
    char szCARDINALITY_D1343[256];
    char szPAGES_D1344[256];
    char szFILTER_CONDITION_D1345[256];
lrd_to_printable(&NON_UNIQUE_D1336, muliRowIndex, szNON_UNIQUE_D1336, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D1337, muliRowIndex, szINDEX_QUALIFIER_D1337, 256, "");
lrd_to_printable(&INDEX_NAME_D1338, muliRowIndex, szINDEX_NAME_D1338, 256, "");
lrd_to_printable(&TYPE_D1339, muliRowIndex, szTYPE_D1339, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D1340, muliRowIndex, szORDINAL_POSITION_D1340, 256, "");
lrd_to_printable(&COLUMN_NAME_D1341, muliRowIndex, szCOLUMN_NAME_D1341, 256, "");
lrd_to_printable(&ASC_OR_DESC_D1342, muliRowIndex, szASC_OR_DESC_D1342, 256, "");
lrd_to_printable(&CARDINALITY_D1343, muliRowIndex, szCARDINALITY_D1343, 256, "");
lrd_to_printable(&PAGES_D1344, muliRowIndex, szPAGES_D1344, 256, "");
lrd_to_printable(&FILTER_CONDITION_D1345, muliRowIndex, szFILTER_CONDITION_D1345, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D1336, szINDEX_QUALIFIER_D1337,
        szINDEX_NAME_D1338, szTYPE_D1339, szORDINAL_POSITION_D1340,
        szCOLUMN_NAME_D1341, szASC_OR_DESC_D1342, szCARDINALITY_D1343,
        szPAGES_D1344, szFILTER_CONDITION_D1345);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow394)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D1347[256];
    char szPKTABLE_NAME_D1348[256];
    char szPKCOLUMN_NAME_D1349[256];
    char szFKCOLUMN_NAME_D1350[256];
lrd_to_printable(&PKTABLE_SCHEM_D1347, muliRowIndex, szPKTABLE_SCHEM_D1347, 256, "");
lrd_to_printable(&PKTABLE_NAME_D1348, muliRowIndex, szPKTABLE_NAME_D1348, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D1349, muliRowIndex, szPKCOLUMN_NAME_D1349, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1350, muliRowIndex, szFKCOLUMN_NAME_D1350, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D1347, szPKTABLE_NAME_D1348,
        szPKCOLUMN_NAME_D1349, szFKCOLUMN_NAME_D1350);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow396)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D1352[256];
    char szFKTABLE_SCHEM_D1353[256];
    char szFKTABLE_NAME_D1354[256];
    char szFKCOLUMN_NAME_D1355[256];
lrd_to_printable(&PKCOLUMN_NAME_D1352, muliRowIndex, szPKCOLUMN_NAME_D1352, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D1353, muliRowIndex, szFKTABLE_SCHEM_D1353, 256, "");
lrd_to_printable(&FKTABLE_NAME_D1354, muliRowIndex, szFKTABLE_NAME_D1354, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1355, muliRowIndex, szFKCOLUMN_NAME_D1355, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D1352, szFKTABLE_SCHEM_D1353,
        szFKTABLE_NAME_D1354, szFKCOLUMN_NAME_D1355);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow398)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1357[256];
    char szDATA_TYPE_D1358[256];
    char szTYPE_NAME_D1359[256];
    char szCOLUMN_SIZE_D1360[256];
    char szDECIMAL_DIGITS_D1361[256];
    char szNULLABLE_D1362[256];
    char szREMARKS_D1363[256];
    char szCOLUMN_DEF_D1364[256];
lrd_to_printable(&COLUMN_NAME_D1357, muliRowIndex, szCOLUMN_NAME_D1357, 256, "");
lrd_to_printable(&DATA_TYPE_D1358, muliRowIndex, szDATA_TYPE_D1358, 256, "");
lrd_to_printable(&TYPE_NAME_D1359, muliRowIndex, szTYPE_NAME_D1359, 256, "");
lrd_to_printable(&COLUMN_SIZE_D1360, muliRowIndex, szCOLUMN_SIZE_D1360, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D1361, muliRowIndex, szDECIMAL_DIGITS_D1361, 256, "");
lrd_to_printable(&NULLABLE_D1362, muliRowIndex, szNULLABLE_D1362, 256, "");
lrd_to_printable(&REMARKS_D1363, muliRowIndex, szREMARKS_D1363, 256, "");
lrd_to_printable(&COLUMN_DEF_D1364, muliRowIndex, szCOLUMN_DEF_D1364, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D1357, szDATA_TYPE_D1358,
        szTYPE_NAME_D1359, szCOLUMN_SIZE_D1360,
        szDECIMAL_DIGITS_D1361, szNULLABLE_D1362, szREMARKS_D1363,
        szCOLUMN_DEF_D1364);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow400)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1366[256];
    char szKEY_SEQ_D1367[256];
    char szPK_NAME_D1368[256];
lrd_to_printable(&COLUMN_NAME_D1366, muliRowIndex, szCOLUMN_NAME_D1366, 256, "");
lrd_to_printable(&KEY_SEQ_D1367, muliRowIndex, szKEY_SEQ_D1367, 256, "");
lrd_to_printable(&PK_NAME_D1368, muliRowIndex, szPK_NAME_D1368, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D1366, szKEY_SEQ_D1367, szPK_NAME_D1368);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow402)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D1370[256];
    char szINDEX_QUALIFIER_D1371[256];
    char szINDEX_NAME_D1372[256];
    char szTYPE_D1373[256];
    char szORDINAL_POSITION_D1374[256];
    char szCOLUMN_NAME_D1375[256];
    char szASC_OR_DESC_D1376[256];
    char szCARDINALITY_D1377[256];
    char szPAGES_D1378[256];
    char szFILTER_CONDITION_D1379[256];
lrd_to_printable(&NON_UNIQUE_D1370, muliRowIndex, szNON_UNIQUE_D1370, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D1371, muliRowIndex, szINDEX_QUALIFIER_D1371, 256, "");
lrd_to_printable(&INDEX_NAME_D1372, muliRowIndex, szINDEX_NAME_D1372, 256, "");
lrd_to_printable(&TYPE_D1373, muliRowIndex, szTYPE_D1373, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D1374, muliRowIndex, szORDINAL_POSITION_D1374, 256, "");
lrd_to_printable(&COLUMN_NAME_D1375, muliRowIndex, szCOLUMN_NAME_D1375, 256, "");
lrd_to_printable(&ASC_OR_DESC_D1376, muliRowIndex, szASC_OR_DESC_D1376, 256, "");
lrd_to_printable(&CARDINALITY_D1377, muliRowIndex, szCARDINALITY_D1377, 256, "");
lrd_to_printable(&PAGES_D1378, muliRowIndex, szPAGES_D1378, 256, "");
lrd_to_printable(&FILTER_CONDITION_D1379, muliRowIndex, szFILTER_CONDITION_D1379, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D1370, szINDEX_QUALIFIER_D1371,
        szINDEX_NAME_D1372, szTYPE_D1373, szORDINAL_POSITION_D1374,
        szCOLUMN_NAME_D1375, szASC_OR_DESC_D1376, szCARDINALITY_D1377,
        szPAGES_D1378, szFILTER_CONDITION_D1379);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow404)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D1381[256];
    char szPKTABLE_NAME_D1382[256];
    char szPKCOLUMN_NAME_D1383[256];
    char szFKCOLUMN_NAME_D1384[256];
lrd_to_printable(&PKTABLE_SCHEM_D1381, muliRowIndex, szPKTABLE_SCHEM_D1381, 256, "");
lrd_to_printable(&PKTABLE_NAME_D1382, muliRowIndex, szPKTABLE_NAME_D1382, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D1383, muliRowIndex, szPKCOLUMN_NAME_D1383, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1384, muliRowIndex, szFKCOLUMN_NAME_D1384, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D1381, szPKTABLE_NAME_D1382,
        szPKCOLUMN_NAME_D1383, szFKCOLUMN_NAME_D1384);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow406)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D1386[256];
    char szFKTABLE_SCHEM_D1387[256];
    char szFKTABLE_NAME_D1388[256];
    char szFKCOLUMN_NAME_D1389[256];
lrd_to_printable(&PKCOLUMN_NAME_D1386, muliRowIndex, szPKCOLUMN_NAME_D1386, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D1387, muliRowIndex, szFKTABLE_SCHEM_D1387, 256, "");
lrd_to_printable(&FKTABLE_NAME_D1388, muliRowIndex, szFKTABLE_NAME_D1388, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1389, muliRowIndex, szFKCOLUMN_NAME_D1389, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D1386, szFKTABLE_SCHEM_D1387,
        szFKTABLE_NAME_D1388, szFKCOLUMN_NAME_D1389);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow408)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1391[256];
    char szDATA_TYPE_D1392[256];
    char szTYPE_NAME_D1393[256];
    char szCOLUMN_SIZE_D1394[256];
    char szDECIMAL_DIGITS_D1395[256];
    char szNULLABLE_D1396[256];
    char szREMARKS_D1397[256];
    char szCOLUMN_DEF_D1398[256];
lrd_to_printable(&COLUMN_NAME_D1391, muliRowIndex, szCOLUMN_NAME_D1391, 256, "");
lrd_to_printable(&DATA_TYPE_D1392, muliRowIndex, szDATA_TYPE_D1392, 256, "");
lrd_to_printable(&TYPE_NAME_D1393, muliRowIndex, szTYPE_NAME_D1393, 256, "");
lrd_to_printable(&COLUMN_SIZE_D1394, muliRowIndex, szCOLUMN_SIZE_D1394, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D1395, muliRowIndex, szDECIMAL_DIGITS_D1395, 256, "");
lrd_to_printable(&NULLABLE_D1396, muliRowIndex, szNULLABLE_D1396, 256, "");
lrd_to_printable(&REMARKS_D1397, muliRowIndex, szREMARKS_D1397, 256, "");
lrd_to_printable(&COLUMN_DEF_D1398, muliRowIndex, szCOLUMN_DEF_D1398, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D1391, szDATA_TYPE_D1392,
        szTYPE_NAME_D1393, szCOLUMN_SIZE_D1394,
        szDECIMAL_DIGITS_D1395, szNULLABLE_D1396, szREMARKS_D1397,
        szCOLUMN_DEF_D1398);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow410)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1400[256];
    char szKEY_SEQ_D1401[256];
    char szPK_NAME_D1402[256];
lrd_to_printable(&COLUMN_NAME_D1400, muliRowIndex, szCOLUMN_NAME_D1400, 256, "");
lrd_to_printable(&KEY_SEQ_D1401, muliRowIndex, szKEY_SEQ_D1401, 256, "");
lrd_to_printable(&PK_NAME_D1402, muliRowIndex, szPK_NAME_D1402, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D1400, szKEY_SEQ_D1401, szPK_NAME_D1402);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow412)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D1404[256];
    char szINDEX_QUALIFIER_D1405[256];
    char szINDEX_NAME_D1406[256];
    char szTYPE_D1407[256];
    char szORDINAL_POSITION_D1408[256];
    char szCOLUMN_NAME_D1409[256];
    char szASC_OR_DESC_D1410[256];
    char szCARDINALITY_D1411[256];
    char szPAGES_D1412[256];
    char szFILTER_CONDITION_D1413[256];
lrd_to_printable(&NON_UNIQUE_D1404, muliRowIndex, szNON_UNIQUE_D1404, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D1405, muliRowIndex, szINDEX_QUALIFIER_D1405, 256, "");
lrd_to_printable(&INDEX_NAME_D1406, muliRowIndex, szINDEX_NAME_D1406, 256, "");
lrd_to_printable(&TYPE_D1407, muliRowIndex, szTYPE_D1407, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D1408, muliRowIndex, szORDINAL_POSITION_D1408, 256, "");
lrd_to_printable(&COLUMN_NAME_D1409, muliRowIndex, szCOLUMN_NAME_D1409, 256, "");
lrd_to_printable(&ASC_OR_DESC_D1410, muliRowIndex, szASC_OR_DESC_D1410, 256, "");
lrd_to_printable(&CARDINALITY_D1411, muliRowIndex, szCARDINALITY_D1411, 256, "");
lrd_to_printable(&PAGES_D1412, muliRowIndex, szPAGES_D1412, 256, "");
lrd_to_printable(&FILTER_CONDITION_D1413, muliRowIndex, szFILTER_CONDITION_D1413, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D1404, szINDEX_QUALIFIER_D1405,
        szINDEX_NAME_D1406, szTYPE_D1407, szORDINAL_POSITION_D1408,
        szCOLUMN_NAME_D1409, szASC_OR_DESC_D1410, szCARDINALITY_D1411,
        szPAGES_D1412, szFILTER_CONDITION_D1413);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow414)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D1415[256];
    char szPKTABLE_NAME_D1416[256];
    char szPKCOLUMN_NAME_D1417[256];
    char szFKCOLUMN_NAME_D1418[256];
lrd_to_printable(&PKTABLE_SCHEM_D1415, muliRowIndex, szPKTABLE_SCHEM_D1415, 256, "");
lrd_to_printable(&PKTABLE_NAME_D1416, muliRowIndex, szPKTABLE_NAME_D1416, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D1417, muliRowIndex, szPKCOLUMN_NAME_D1417, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1418, muliRowIndex, szFKCOLUMN_NAME_D1418, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D1415, szPKTABLE_NAME_D1416,
        szPKCOLUMN_NAME_D1417, szFKCOLUMN_NAME_D1418);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow416)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D1420[256];
    char szFKTABLE_SCHEM_D1421[256];
    char szFKTABLE_NAME_D1422[256];
    char szFKCOLUMN_NAME_D1423[256];
lrd_to_printable(&PKCOLUMN_NAME_D1420, muliRowIndex, szPKCOLUMN_NAME_D1420, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D1421, muliRowIndex, szFKTABLE_SCHEM_D1421, 256, "");
lrd_to_printable(&FKTABLE_NAME_D1422, muliRowIndex, szFKTABLE_NAME_D1422, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1423, muliRowIndex, szFKCOLUMN_NAME_D1423, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D1420, szFKTABLE_SCHEM_D1421,
        szFKTABLE_NAME_D1422, szFKCOLUMN_NAME_D1423);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow418)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1425[256];
    char szDATA_TYPE_D1426[256];
    char szTYPE_NAME_D1427[256];
    char szCOLUMN_SIZE_D1428[256];
    char szDECIMAL_DIGITS_D1429[256];
    char szNULLABLE_D1430[256];
    char szREMARKS_D1431[256];
    char szCOLUMN_DEF_D1432[256];
lrd_to_printable(&COLUMN_NAME_D1425, muliRowIndex, szCOLUMN_NAME_D1425, 256, "");
lrd_to_printable(&DATA_TYPE_D1426, muliRowIndex, szDATA_TYPE_D1426, 256, "");
lrd_to_printable(&TYPE_NAME_D1427, muliRowIndex, szTYPE_NAME_D1427, 256, "");
lrd_to_printable(&COLUMN_SIZE_D1428, muliRowIndex, szCOLUMN_SIZE_D1428, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D1429, muliRowIndex, szDECIMAL_DIGITS_D1429, 256, "");
lrd_to_printable(&NULLABLE_D1430, muliRowIndex, szNULLABLE_D1430, 256, "");
lrd_to_printable(&REMARKS_D1431, muliRowIndex, szREMARKS_D1431, 256, "");
lrd_to_printable(&COLUMN_DEF_D1432, muliRowIndex, szCOLUMN_DEF_D1432, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D1425, szDATA_TYPE_D1426,
        szTYPE_NAME_D1427, szCOLUMN_SIZE_D1428,
        szDECIMAL_DIGITS_D1429, szNULLABLE_D1430, szREMARKS_D1431,
        szCOLUMN_DEF_D1432);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow420)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1434[256];
    char szKEY_SEQ_D1435[256];
    char szPK_NAME_D1436[256];
lrd_to_printable(&COLUMN_NAME_D1434, muliRowIndex, szCOLUMN_NAME_D1434, 256, "");
lrd_to_printable(&KEY_SEQ_D1435, muliRowIndex, szKEY_SEQ_D1435, 256, "");
lrd_to_printable(&PK_NAME_D1436, muliRowIndex, szPK_NAME_D1436, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D1434, szKEY_SEQ_D1435, szPK_NAME_D1436);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow422)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D1438[256];
    char szINDEX_QUALIFIER_D1439[256];
    char szINDEX_NAME_D1440[256];
    char szTYPE_D1441[256];
    char szORDINAL_POSITION_D1442[256];
    char szCOLUMN_NAME_D1443[256];
    char szASC_OR_DESC_D1444[256];
    char szCARDINALITY_D1445[256];
    char szPAGES_D1446[256];
    char szFILTER_CONDITION_D1447[256];
lrd_to_printable(&NON_UNIQUE_D1438, muliRowIndex, szNON_UNIQUE_D1438, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D1439, muliRowIndex, szINDEX_QUALIFIER_D1439, 256, "");
lrd_to_printable(&INDEX_NAME_D1440, muliRowIndex, szINDEX_NAME_D1440, 256, "");
lrd_to_printable(&TYPE_D1441, muliRowIndex, szTYPE_D1441, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D1442, muliRowIndex, szORDINAL_POSITION_D1442, 256, "");
lrd_to_printable(&COLUMN_NAME_D1443, muliRowIndex, szCOLUMN_NAME_D1443, 256, "");
lrd_to_printable(&ASC_OR_DESC_D1444, muliRowIndex, szASC_OR_DESC_D1444, 256, "");
lrd_to_printable(&CARDINALITY_D1445, muliRowIndex, szCARDINALITY_D1445, 256, "");
lrd_to_printable(&PAGES_D1446, muliRowIndex, szPAGES_D1446, 256, "");
lrd_to_printable(&FILTER_CONDITION_D1447, muliRowIndex, szFILTER_CONDITION_D1447, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D1438, szINDEX_QUALIFIER_D1439,
        szINDEX_NAME_D1440, szTYPE_D1441, szORDINAL_POSITION_D1442,
        szCOLUMN_NAME_D1443, szASC_OR_DESC_D1444, szCARDINALITY_D1445,
        szPAGES_D1446, szFILTER_CONDITION_D1447);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow424)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D1449[256];
    char szPKTABLE_NAME_D1450[256];
    char szPKCOLUMN_NAME_D1451[256];
    char szFKCOLUMN_NAME_D1452[256];
lrd_to_printable(&PKTABLE_SCHEM_D1449, muliRowIndex, szPKTABLE_SCHEM_D1449, 256, "");
lrd_to_printable(&PKTABLE_NAME_D1450, muliRowIndex, szPKTABLE_NAME_D1450, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D1451, muliRowIndex, szPKCOLUMN_NAME_D1451, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1452, muliRowIndex, szFKCOLUMN_NAME_D1452, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D1449, szPKTABLE_NAME_D1450,
        szPKCOLUMN_NAME_D1451, szFKCOLUMN_NAME_D1452);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow426)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D1454[256];
    char szFKTABLE_SCHEM_D1455[256];
    char szFKTABLE_NAME_D1456[256];
    char szFKCOLUMN_NAME_D1457[256];
lrd_to_printable(&PKCOLUMN_NAME_D1454, muliRowIndex, szPKCOLUMN_NAME_D1454, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D1455, muliRowIndex, szFKTABLE_SCHEM_D1455, 256, "");
lrd_to_printable(&FKTABLE_NAME_D1456, muliRowIndex, szFKTABLE_NAME_D1456, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1457, muliRowIndex, szFKCOLUMN_NAME_D1457, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D1454, szFKTABLE_SCHEM_D1455,
        szFKTABLE_NAME_D1456, szFKCOLUMN_NAME_D1457);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow428)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1459[256];
    char szDATA_TYPE_D1460[256];
    char szTYPE_NAME_D1461[256];
    char szCOLUMN_SIZE_D1462[256];
    char szDECIMAL_DIGITS_D1463[256];
    char szNULLABLE_D1464[256];
    char szREMARKS_D1465[256];
    char szCOLUMN_DEF_D1466[256];
lrd_to_printable(&COLUMN_NAME_D1459, muliRowIndex, szCOLUMN_NAME_D1459, 256, "");
lrd_to_printable(&DATA_TYPE_D1460, muliRowIndex, szDATA_TYPE_D1460, 256, "");
lrd_to_printable(&TYPE_NAME_D1461, muliRowIndex, szTYPE_NAME_D1461, 256, "");
lrd_to_printable(&COLUMN_SIZE_D1462, muliRowIndex, szCOLUMN_SIZE_D1462, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D1463, muliRowIndex, szDECIMAL_DIGITS_D1463, 256, "");
lrd_to_printable(&NULLABLE_D1464, muliRowIndex, szNULLABLE_D1464, 256, "");
lrd_to_printable(&REMARKS_D1465, muliRowIndex, szREMARKS_D1465, 256, "");
lrd_to_printable(&COLUMN_DEF_D1466, muliRowIndex, szCOLUMN_DEF_D1466, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D1459, szDATA_TYPE_D1460,
        szTYPE_NAME_D1461, szCOLUMN_SIZE_D1462,
        szDECIMAL_DIGITS_D1463, szNULLABLE_D1464, szREMARKS_D1465,
        szCOLUMN_DEF_D1466);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow430)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1468[256];
    char szKEY_SEQ_D1469[256];
    char szPK_NAME_D1470[256];
lrd_to_printable(&COLUMN_NAME_D1468, muliRowIndex, szCOLUMN_NAME_D1468, 256, "");
lrd_to_printable(&KEY_SEQ_D1469, muliRowIndex, szKEY_SEQ_D1469, 256, "");
lrd_to_printable(&PK_NAME_D1470, muliRowIndex, szPK_NAME_D1470, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D1468, szKEY_SEQ_D1469, szPK_NAME_D1470);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow432)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D1472[256];
    char szINDEX_QUALIFIER_D1473[256];
    char szINDEX_NAME_D1474[256];
    char szTYPE_D1475[256];
    char szORDINAL_POSITION_D1476[256];
    char szCOLUMN_NAME_D1477[256];
    char szASC_OR_DESC_D1478[256];
    char szCARDINALITY_D1479[256];
    char szPAGES_D1480[256];
    char szFILTER_CONDITION_D1481[256];
lrd_to_printable(&NON_UNIQUE_D1472, muliRowIndex, szNON_UNIQUE_D1472, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D1473, muliRowIndex, szINDEX_QUALIFIER_D1473, 256, "");
lrd_to_printable(&INDEX_NAME_D1474, muliRowIndex, szINDEX_NAME_D1474, 256, "");
lrd_to_printable(&TYPE_D1475, muliRowIndex, szTYPE_D1475, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D1476, muliRowIndex, szORDINAL_POSITION_D1476, 256, "");
lrd_to_printable(&COLUMN_NAME_D1477, muliRowIndex, szCOLUMN_NAME_D1477, 256, "");
lrd_to_printable(&ASC_OR_DESC_D1478, muliRowIndex, szASC_OR_DESC_D1478, 256, "");
lrd_to_printable(&CARDINALITY_D1479, muliRowIndex, szCARDINALITY_D1479, 256, "");
lrd_to_printable(&PAGES_D1480, muliRowIndex, szPAGES_D1480, 256, "");
lrd_to_printable(&FILTER_CONDITION_D1481, muliRowIndex, szFILTER_CONDITION_D1481, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D1472, szINDEX_QUALIFIER_D1473,
        szINDEX_NAME_D1474, szTYPE_D1475, szORDINAL_POSITION_D1476,
        szCOLUMN_NAME_D1477, szASC_OR_DESC_D1478, szCARDINALITY_D1479,
        szPAGES_D1480, szFILTER_CONDITION_D1481);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow434)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D1483[256];
    char szPKTABLE_NAME_D1484[256];
    char szPKCOLUMN_NAME_D1485[256];
    char szFKCOLUMN_NAME_D1486[256];
lrd_to_printable(&PKTABLE_SCHEM_D1483, muliRowIndex, szPKTABLE_SCHEM_D1483, 256, "");
lrd_to_printable(&PKTABLE_NAME_D1484, muliRowIndex, szPKTABLE_NAME_D1484, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D1485, muliRowIndex, szPKCOLUMN_NAME_D1485, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1486, muliRowIndex, szFKCOLUMN_NAME_D1486, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D1483, szPKTABLE_NAME_D1484,
        szPKCOLUMN_NAME_D1485, szFKCOLUMN_NAME_D1486);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow436)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D1488[256];
    char szFKTABLE_SCHEM_D1489[256];
    char szFKTABLE_NAME_D1490[256];
    char szFKCOLUMN_NAME_D1491[256];
lrd_to_printable(&PKCOLUMN_NAME_D1488, muliRowIndex, szPKCOLUMN_NAME_D1488, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D1489, muliRowIndex, szFKTABLE_SCHEM_D1489, 256, "");
lrd_to_printable(&FKTABLE_NAME_D1490, muliRowIndex, szFKTABLE_NAME_D1490, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1491, muliRowIndex, szFKCOLUMN_NAME_D1491, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D1488, szFKTABLE_SCHEM_D1489,
        szFKTABLE_NAME_D1490, szFKCOLUMN_NAME_D1491);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow438)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1493[256];
    char szDATA_TYPE_D1494[256];
    char szTYPE_NAME_D1495[256];
    char szCOLUMN_SIZE_D1496[256];
    char szDECIMAL_DIGITS_D1497[256];
    char szNULLABLE_D1498[256];
    char szREMARKS_D1499[256];
    char szCOLUMN_DEF_D1500[256];
lrd_to_printable(&COLUMN_NAME_D1493, muliRowIndex, szCOLUMN_NAME_D1493, 256, "");
lrd_to_printable(&DATA_TYPE_D1494, muliRowIndex, szDATA_TYPE_D1494, 256, "");
lrd_to_printable(&TYPE_NAME_D1495, muliRowIndex, szTYPE_NAME_D1495, 256, "");
lrd_to_printable(&COLUMN_SIZE_D1496, muliRowIndex, szCOLUMN_SIZE_D1496, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D1497, muliRowIndex, szDECIMAL_DIGITS_D1497, 256, "");
lrd_to_printable(&NULLABLE_D1498, muliRowIndex, szNULLABLE_D1498, 256, "");
lrd_to_printable(&REMARKS_D1499, muliRowIndex, szREMARKS_D1499, 256, "");
lrd_to_printable(&COLUMN_DEF_D1500, muliRowIndex, szCOLUMN_DEF_D1500, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D1493, szDATA_TYPE_D1494,
        szTYPE_NAME_D1495, szCOLUMN_SIZE_D1496,
        szDECIMAL_DIGITS_D1497, szNULLABLE_D1498, szREMARKS_D1499,
        szCOLUMN_DEF_D1500);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow440)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1502[256];
    char szKEY_SEQ_D1503[256];
    char szPK_NAME_D1504[256];
lrd_to_printable(&COLUMN_NAME_D1502, muliRowIndex, szCOLUMN_NAME_D1502, 256, "");
lrd_to_printable(&KEY_SEQ_D1503, muliRowIndex, szKEY_SEQ_D1503, 256, "");
lrd_to_printable(&PK_NAME_D1504, muliRowIndex, szPK_NAME_D1504, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D1502, szKEY_SEQ_D1503, szPK_NAME_D1504);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow442)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D1506[256];
    char szINDEX_QUALIFIER_D1507[256];
    char szINDEX_NAME_D1508[256];
    char szTYPE_D1509[256];
    char szORDINAL_POSITION_D1510[256];
    char szCOLUMN_NAME_D1511[256];
    char szASC_OR_DESC_D1512[256];
    char szCARDINALITY_D1513[256];
    char szPAGES_D1514[256];
    char szFILTER_CONDITION_D1515[256];
lrd_to_printable(&NON_UNIQUE_D1506, muliRowIndex, szNON_UNIQUE_D1506, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D1507, muliRowIndex, szINDEX_QUALIFIER_D1507, 256, "");
lrd_to_printable(&INDEX_NAME_D1508, muliRowIndex, szINDEX_NAME_D1508, 256, "");
lrd_to_printable(&TYPE_D1509, muliRowIndex, szTYPE_D1509, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D1510, muliRowIndex, szORDINAL_POSITION_D1510, 256, "");
lrd_to_printable(&COLUMN_NAME_D1511, muliRowIndex, szCOLUMN_NAME_D1511, 256, "");
lrd_to_printable(&ASC_OR_DESC_D1512, muliRowIndex, szASC_OR_DESC_D1512, 256, "");
lrd_to_printable(&CARDINALITY_D1513, muliRowIndex, szCARDINALITY_D1513, 256, "");
lrd_to_printable(&PAGES_D1514, muliRowIndex, szPAGES_D1514, 256, "");
lrd_to_printable(&FILTER_CONDITION_D1515, muliRowIndex, szFILTER_CONDITION_D1515, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D1506, szINDEX_QUALIFIER_D1507,
        szINDEX_NAME_D1508, szTYPE_D1509, szORDINAL_POSITION_D1510,
        szCOLUMN_NAME_D1511, szASC_OR_DESC_D1512, szCARDINALITY_D1513,
        szPAGES_D1514, szFILTER_CONDITION_D1515);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow444)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D1517[256];
    char szPKTABLE_NAME_D1518[256];
    char szPKCOLUMN_NAME_D1519[256];
    char szFKCOLUMN_NAME_D1520[256];
lrd_to_printable(&PKTABLE_SCHEM_D1517, muliRowIndex, szPKTABLE_SCHEM_D1517, 256, "");
lrd_to_printable(&PKTABLE_NAME_D1518, muliRowIndex, szPKTABLE_NAME_D1518, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D1519, muliRowIndex, szPKCOLUMN_NAME_D1519, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1520, muliRowIndex, szFKCOLUMN_NAME_D1520, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D1517, szPKTABLE_NAME_D1518,
        szPKCOLUMN_NAME_D1519, szFKCOLUMN_NAME_D1520);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow446)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D1522[256];
    char szFKTABLE_SCHEM_D1523[256];
    char szFKTABLE_NAME_D1524[256];
    char szFKCOLUMN_NAME_D1525[256];
lrd_to_printable(&PKCOLUMN_NAME_D1522, muliRowIndex, szPKCOLUMN_NAME_D1522, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D1523, muliRowIndex, szFKTABLE_SCHEM_D1523, 256, "");
lrd_to_printable(&FKTABLE_NAME_D1524, muliRowIndex, szFKTABLE_NAME_D1524, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1525, muliRowIndex, szFKCOLUMN_NAME_D1525, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D1522, szFKTABLE_SCHEM_D1523,
        szFKTABLE_NAME_D1524, szFKCOLUMN_NAME_D1525);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow448)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1527[256];
    char szDATA_TYPE_D1528[256];
    char szTYPE_NAME_D1529[256];
    char szCOLUMN_SIZE_D1530[256];
    char szDECIMAL_DIGITS_D1531[256];
    char szNULLABLE_D1532[256];
    char szREMARKS_D1533[256];
    char szCOLUMN_DEF_D1534[256];
lrd_to_printable(&COLUMN_NAME_D1527, muliRowIndex, szCOLUMN_NAME_D1527, 256, "");
lrd_to_printable(&DATA_TYPE_D1528, muliRowIndex, szDATA_TYPE_D1528, 256, "");
lrd_to_printable(&TYPE_NAME_D1529, muliRowIndex, szTYPE_NAME_D1529, 256, "");
lrd_to_printable(&COLUMN_SIZE_D1530, muliRowIndex, szCOLUMN_SIZE_D1530, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D1531, muliRowIndex, szDECIMAL_DIGITS_D1531, 256, "");
lrd_to_printable(&NULLABLE_D1532, muliRowIndex, szNULLABLE_D1532, 256, "");
lrd_to_printable(&REMARKS_D1533, muliRowIndex, szREMARKS_D1533, 256, "");
lrd_to_printable(&COLUMN_DEF_D1534, muliRowIndex, szCOLUMN_DEF_D1534, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D1527, szDATA_TYPE_D1528,
        szTYPE_NAME_D1529, szCOLUMN_SIZE_D1530,
        szDECIMAL_DIGITS_D1531, szNULLABLE_D1532, szREMARKS_D1533,
        szCOLUMN_DEF_D1534);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow450)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1536[256];
    char szKEY_SEQ_D1537[256];
    char szPK_NAME_D1538[256];
lrd_to_printable(&COLUMN_NAME_D1536, muliRowIndex, szCOLUMN_NAME_D1536, 256, "");
lrd_to_printable(&KEY_SEQ_D1537, muliRowIndex, szKEY_SEQ_D1537, 256, "");
lrd_to_printable(&PK_NAME_D1538, muliRowIndex, szPK_NAME_D1538, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D1536, szKEY_SEQ_D1537, szPK_NAME_D1538);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow452)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D1540[256];
    char szINDEX_QUALIFIER_D1541[256];
    char szINDEX_NAME_D1542[256];
    char szTYPE_D1543[256];
    char szORDINAL_POSITION_D1544[256];
    char szCOLUMN_NAME_D1545[256];
    char szASC_OR_DESC_D1546[256];
    char szCARDINALITY_D1547[256];
    char szPAGES_D1548[256];
    char szFILTER_CONDITION_D1549[256];
lrd_to_printable(&NON_UNIQUE_D1540, muliRowIndex, szNON_UNIQUE_D1540, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D1541, muliRowIndex, szINDEX_QUALIFIER_D1541, 256, "");
lrd_to_printable(&INDEX_NAME_D1542, muliRowIndex, szINDEX_NAME_D1542, 256, "");
lrd_to_printable(&TYPE_D1543, muliRowIndex, szTYPE_D1543, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D1544, muliRowIndex, szORDINAL_POSITION_D1544, 256, "");
lrd_to_printable(&COLUMN_NAME_D1545, muliRowIndex, szCOLUMN_NAME_D1545, 256, "");
lrd_to_printable(&ASC_OR_DESC_D1546, muliRowIndex, szASC_OR_DESC_D1546, 256, "");
lrd_to_printable(&CARDINALITY_D1547, muliRowIndex, szCARDINALITY_D1547, 256, "");
lrd_to_printable(&PAGES_D1548, muliRowIndex, szPAGES_D1548, 256, "");
lrd_to_printable(&FILTER_CONDITION_D1549, muliRowIndex, szFILTER_CONDITION_D1549, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D1540, szINDEX_QUALIFIER_D1541,
        szINDEX_NAME_D1542, szTYPE_D1543, szORDINAL_POSITION_D1544,
        szCOLUMN_NAME_D1545, szASC_OR_DESC_D1546, szCARDINALITY_D1547,
        szPAGES_D1548, szFILTER_CONDITION_D1549);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow454)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D1551[256];
    char szPKTABLE_NAME_D1552[256];
    char szPKCOLUMN_NAME_D1553[256];
    char szFKCOLUMN_NAME_D1554[256];
lrd_to_printable(&PKTABLE_SCHEM_D1551, muliRowIndex, szPKTABLE_SCHEM_D1551, 256, "");
lrd_to_printable(&PKTABLE_NAME_D1552, muliRowIndex, szPKTABLE_NAME_D1552, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D1553, muliRowIndex, szPKCOLUMN_NAME_D1553, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1554, muliRowIndex, szFKCOLUMN_NAME_D1554, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D1551, szPKTABLE_NAME_D1552,
        szPKCOLUMN_NAME_D1553, szFKCOLUMN_NAME_D1554);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow456)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D1556[256];
    char szFKTABLE_SCHEM_D1557[256];
    char szFKTABLE_NAME_D1558[256];
    char szFKCOLUMN_NAME_D1559[256];
lrd_to_printable(&PKCOLUMN_NAME_D1556, muliRowIndex, szPKCOLUMN_NAME_D1556, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D1557, muliRowIndex, szFKTABLE_SCHEM_D1557, 256, "");
lrd_to_printable(&FKTABLE_NAME_D1558, muliRowIndex, szFKTABLE_NAME_D1558, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1559, muliRowIndex, szFKCOLUMN_NAME_D1559, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D1556, szFKTABLE_SCHEM_D1557,
        szFKTABLE_NAME_D1558, szFKCOLUMN_NAME_D1559);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow458)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1561[256];
    char szDATA_TYPE_D1562[256];
    char szTYPE_NAME_D1563[256];
    char szCOLUMN_SIZE_D1564[256];
    char szDECIMAL_DIGITS_D1565[256];
    char szNULLABLE_D1566[256];
    char szREMARKS_D1567[256];
    char szCOLUMN_DEF_D1568[256];
lrd_to_printable(&COLUMN_NAME_D1561, muliRowIndex, szCOLUMN_NAME_D1561, 256, "");
lrd_to_printable(&DATA_TYPE_D1562, muliRowIndex, szDATA_TYPE_D1562, 256, "");
lrd_to_printable(&TYPE_NAME_D1563, muliRowIndex, szTYPE_NAME_D1563, 256, "");
lrd_to_printable(&COLUMN_SIZE_D1564, muliRowIndex, szCOLUMN_SIZE_D1564, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D1565, muliRowIndex, szDECIMAL_DIGITS_D1565, 256, "");
lrd_to_printable(&NULLABLE_D1566, muliRowIndex, szNULLABLE_D1566, 256, "");
lrd_to_printable(&REMARKS_D1567, muliRowIndex, szREMARKS_D1567, 256, "");
lrd_to_printable(&COLUMN_DEF_D1568, muliRowIndex, szCOLUMN_DEF_D1568, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D1561, szDATA_TYPE_D1562,
        szTYPE_NAME_D1563, szCOLUMN_SIZE_D1564,
        szDECIMAL_DIGITS_D1565, szNULLABLE_D1566, szREMARKS_D1567,
        szCOLUMN_DEF_D1568);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow460)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1570[256];
    char szKEY_SEQ_D1571[256];
    char szPK_NAME_D1572[256];
lrd_to_printable(&COLUMN_NAME_D1570, muliRowIndex, szCOLUMN_NAME_D1570, 256, "");
lrd_to_printable(&KEY_SEQ_D1571, muliRowIndex, szKEY_SEQ_D1571, 256, "");
lrd_to_printable(&PK_NAME_D1572, muliRowIndex, szPK_NAME_D1572, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D1570, szKEY_SEQ_D1571, szPK_NAME_D1572);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow462)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D1574[256];
    char szINDEX_QUALIFIER_D1575[256];
    char szINDEX_NAME_D1576[256];
    char szTYPE_D1577[256];
    char szORDINAL_POSITION_D1578[256];
    char szCOLUMN_NAME_D1579[256];
    char szASC_OR_DESC_D1580[256];
    char szCARDINALITY_D1581[256];
    char szPAGES_D1582[256];
    char szFILTER_CONDITION_D1583[256];
lrd_to_printable(&NON_UNIQUE_D1574, muliRowIndex, szNON_UNIQUE_D1574, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D1575, muliRowIndex, szINDEX_QUALIFIER_D1575, 256, "");
lrd_to_printable(&INDEX_NAME_D1576, muliRowIndex, szINDEX_NAME_D1576, 256, "");
lrd_to_printable(&TYPE_D1577, muliRowIndex, szTYPE_D1577, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D1578, muliRowIndex, szORDINAL_POSITION_D1578, 256, "");
lrd_to_printable(&COLUMN_NAME_D1579, muliRowIndex, szCOLUMN_NAME_D1579, 256, "");
lrd_to_printable(&ASC_OR_DESC_D1580, muliRowIndex, szASC_OR_DESC_D1580, 256, "");
lrd_to_printable(&CARDINALITY_D1581, muliRowIndex, szCARDINALITY_D1581, 256, "");
lrd_to_printable(&PAGES_D1582, muliRowIndex, szPAGES_D1582, 256, "");
lrd_to_printable(&FILTER_CONDITION_D1583, muliRowIndex, szFILTER_CONDITION_D1583, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D1574, szINDEX_QUALIFIER_D1575,
        szINDEX_NAME_D1576, szTYPE_D1577, szORDINAL_POSITION_D1578,
        szCOLUMN_NAME_D1579, szASC_OR_DESC_D1580, szCARDINALITY_D1581,
        szPAGES_D1582, szFILTER_CONDITION_D1583);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow464)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D1585[256];
    char szPKTABLE_NAME_D1586[256];
    char szPKCOLUMN_NAME_D1587[256];
    char szFKCOLUMN_NAME_D1588[256];
lrd_to_printable(&PKTABLE_SCHEM_D1585, muliRowIndex, szPKTABLE_SCHEM_D1585, 256, "");
lrd_to_printable(&PKTABLE_NAME_D1586, muliRowIndex, szPKTABLE_NAME_D1586, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D1587, muliRowIndex, szPKCOLUMN_NAME_D1587, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1588, muliRowIndex, szFKCOLUMN_NAME_D1588, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D1585, szPKTABLE_NAME_D1586,
        szPKCOLUMN_NAME_D1587, szFKCOLUMN_NAME_D1588);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow466)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D1590[256];
    char szFKTABLE_SCHEM_D1591[256];
    char szFKTABLE_NAME_D1592[256];
    char szFKCOLUMN_NAME_D1593[256];
lrd_to_printable(&PKCOLUMN_NAME_D1590, muliRowIndex, szPKCOLUMN_NAME_D1590, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D1591, muliRowIndex, szFKTABLE_SCHEM_D1591, 256, "");
lrd_to_printable(&FKTABLE_NAME_D1592, muliRowIndex, szFKTABLE_NAME_D1592, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1593, muliRowIndex, szFKCOLUMN_NAME_D1593, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D1590, szFKTABLE_SCHEM_D1591,
        szFKTABLE_NAME_D1592, szFKCOLUMN_NAME_D1593);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow468)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1595[256];
    char szDATA_TYPE_D1596[256];
    char szTYPE_NAME_D1597[256];
    char szCOLUMN_SIZE_D1598[256];
    char szDECIMAL_DIGITS_D1599[256];
    char szNULLABLE_D1600[256];
    char szREMARKS_D1601[256];
    char szCOLUMN_DEF_D1602[256];
lrd_to_printable(&COLUMN_NAME_D1595, muliRowIndex, szCOLUMN_NAME_D1595, 256, "");
lrd_to_printable(&DATA_TYPE_D1596, muliRowIndex, szDATA_TYPE_D1596, 256, "");
lrd_to_printable(&TYPE_NAME_D1597, muliRowIndex, szTYPE_NAME_D1597, 256, "");
lrd_to_printable(&COLUMN_SIZE_D1598, muliRowIndex, szCOLUMN_SIZE_D1598, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D1599, muliRowIndex, szDECIMAL_DIGITS_D1599, 256, "");
lrd_to_printable(&NULLABLE_D1600, muliRowIndex, szNULLABLE_D1600, 256, "");
lrd_to_printable(&REMARKS_D1601, muliRowIndex, szREMARKS_D1601, 256, "");
lrd_to_printable(&COLUMN_DEF_D1602, muliRowIndex, szCOLUMN_DEF_D1602, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D1595, szDATA_TYPE_D1596,
        szTYPE_NAME_D1597, szCOLUMN_SIZE_D1598,
        szDECIMAL_DIGITS_D1599, szNULLABLE_D1600, szREMARKS_D1601,
        szCOLUMN_DEF_D1602);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow470)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1604[256];
    char szKEY_SEQ_D1605[256];
    char szPK_NAME_D1606[256];
lrd_to_printable(&COLUMN_NAME_D1604, muliRowIndex, szCOLUMN_NAME_D1604, 256, "");
lrd_to_printable(&KEY_SEQ_D1605, muliRowIndex, szKEY_SEQ_D1605, 256, "");
lrd_to_printable(&PK_NAME_D1606, muliRowIndex, szPK_NAME_D1606, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D1604, szKEY_SEQ_D1605, szPK_NAME_D1606);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow472)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D1608[256];
    char szINDEX_QUALIFIER_D1609[256];
    char szINDEX_NAME_D1610[256];
    char szTYPE_D1611[256];
    char szORDINAL_POSITION_D1612[256];
    char szCOLUMN_NAME_D1613[256];
    char szASC_OR_DESC_D1614[256];
    char szCARDINALITY_D1615[256];
    char szPAGES_D1616[256];
    char szFILTER_CONDITION_D1617[256];
lrd_to_printable(&NON_UNIQUE_D1608, muliRowIndex, szNON_UNIQUE_D1608, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D1609, muliRowIndex, szINDEX_QUALIFIER_D1609, 256, "");
lrd_to_printable(&INDEX_NAME_D1610, muliRowIndex, szINDEX_NAME_D1610, 256, "");
lrd_to_printable(&TYPE_D1611, muliRowIndex, szTYPE_D1611, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D1612, muliRowIndex, szORDINAL_POSITION_D1612, 256, "");
lrd_to_printable(&COLUMN_NAME_D1613, muliRowIndex, szCOLUMN_NAME_D1613, 256, "");
lrd_to_printable(&ASC_OR_DESC_D1614, muliRowIndex, szASC_OR_DESC_D1614, 256, "");
lrd_to_printable(&CARDINALITY_D1615, muliRowIndex, szCARDINALITY_D1615, 256, "");
lrd_to_printable(&PAGES_D1616, muliRowIndex, szPAGES_D1616, 256, "");
lrd_to_printable(&FILTER_CONDITION_D1617, muliRowIndex, szFILTER_CONDITION_D1617, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D1608, szINDEX_QUALIFIER_D1609,
        szINDEX_NAME_D1610, szTYPE_D1611, szORDINAL_POSITION_D1612,
        szCOLUMN_NAME_D1613, szASC_OR_DESC_D1614, szCARDINALITY_D1615,
        szPAGES_D1616, szFILTER_CONDITION_D1617);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow474)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D1619[256];
    char szPKTABLE_NAME_D1620[256];
    char szPKCOLUMN_NAME_D1621[256];
    char szFKCOLUMN_NAME_D1622[256];
lrd_to_printable(&PKTABLE_SCHEM_D1619, muliRowIndex, szPKTABLE_SCHEM_D1619, 256, "");
lrd_to_printable(&PKTABLE_NAME_D1620, muliRowIndex, szPKTABLE_NAME_D1620, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D1621, muliRowIndex, szPKCOLUMN_NAME_D1621, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1622, muliRowIndex, szFKCOLUMN_NAME_D1622, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D1619, szPKTABLE_NAME_D1620,
        szPKCOLUMN_NAME_D1621, szFKCOLUMN_NAME_D1622);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow476)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D1624[256];
    char szFKTABLE_SCHEM_D1625[256];
    char szFKTABLE_NAME_D1626[256];
    char szFKCOLUMN_NAME_D1627[256];
lrd_to_printable(&PKCOLUMN_NAME_D1624, muliRowIndex, szPKCOLUMN_NAME_D1624, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D1625, muliRowIndex, szFKTABLE_SCHEM_D1625, 256, "");
lrd_to_printable(&FKTABLE_NAME_D1626, muliRowIndex, szFKTABLE_NAME_D1626, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1627, muliRowIndex, szFKCOLUMN_NAME_D1627, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D1624, szFKTABLE_SCHEM_D1625,
        szFKTABLE_NAME_D1626, szFKCOLUMN_NAME_D1627);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow478)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1629[256];
    char szDATA_TYPE_D1630[256];
    char szTYPE_NAME_D1631[256];
    char szCOLUMN_SIZE_D1632[256];
    char szDECIMAL_DIGITS_D1633[256];
    char szNULLABLE_D1634[256];
    char szREMARKS_D1635[256];
    char szCOLUMN_DEF_D1636[256];
lrd_to_printable(&COLUMN_NAME_D1629, muliRowIndex, szCOLUMN_NAME_D1629, 256, "");
lrd_to_printable(&DATA_TYPE_D1630, muliRowIndex, szDATA_TYPE_D1630, 256, "");
lrd_to_printable(&TYPE_NAME_D1631, muliRowIndex, szTYPE_NAME_D1631, 256, "");
lrd_to_printable(&COLUMN_SIZE_D1632, muliRowIndex, szCOLUMN_SIZE_D1632, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D1633, muliRowIndex, szDECIMAL_DIGITS_D1633, 256, "");
lrd_to_printable(&NULLABLE_D1634, muliRowIndex, szNULLABLE_D1634, 256, "");
lrd_to_printable(&REMARKS_D1635, muliRowIndex, szREMARKS_D1635, 256, "");
lrd_to_printable(&COLUMN_DEF_D1636, muliRowIndex, szCOLUMN_DEF_D1636, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D1629, szDATA_TYPE_D1630,
        szTYPE_NAME_D1631, szCOLUMN_SIZE_D1632,
        szDECIMAL_DIGITS_D1633, szNULLABLE_D1634, szREMARKS_D1635,
        szCOLUMN_DEF_D1636);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow480)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1638[256];
    char szKEY_SEQ_D1639[256];
    char szPK_NAME_D1640[256];
lrd_to_printable(&COLUMN_NAME_D1638, muliRowIndex, szCOLUMN_NAME_D1638, 256, "");
lrd_to_printable(&KEY_SEQ_D1639, muliRowIndex, szKEY_SEQ_D1639, 256, "");
lrd_to_printable(&PK_NAME_D1640, muliRowIndex, szPK_NAME_D1640, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D1638, szKEY_SEQ_D1639, szPK_NAME_D1640);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow482)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D1642[256];
    char szINDEX_QUALIFIER_D1643[256];
    char szINDEX_NAME_D1644[256];
    char szTYPE_D1645[256];
    char szORDINAL_POSITION_D1646[256];
    char szCOLUMN_NAME_D1647[256];
    char szASC_OR_DESC_D1648[256];
    char szCARDINALITY_D1649[256];
    char szPAGES_D1650[256];
    char szFILTER_CONDITION_D1651[256];
lrd_to_printable(&NON_UNIQUE_D1642, muliRowIndex, szNON_UNIQUE_D1642, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D1643, muliRowIndex, szINDEX_QUALIFIER_D1643, 256, "");
lrd_to_printable(&INDEX_NAME_D1644, muliRowIndex, szINDEX_NAME_D1644, 256, "");
lrd_to_printable(&TYPE_D1645, muliRowIndex, szTYPE_D1645, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D1646, muliRowIndex, szORDINAL_POSITION_D1646, 256, "");
lrd_to_printable(&COLUMN_NAME_D1647, muliRowIndex, szCOLUMN_NAME_D1647, 256, "");
lrd_to_printable(&ASC_OR_DESC_D1648, muliRowIndex, szASC_OR_DESC_D1648, 256, "");
lrd_to_printable(&CARDINALITY_D1649, muliRowIndex, szCARDINALITY_D1649, 256, "");
lrd_to_printable(&PAGES_D1650, muliRowIndex, szPAGES_D1650, 256, "");
lrd_to_printable(&FILTER_CONDITION_D1651, muliRowIndex, szFILTER_CONDITION_D1651, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D1642, szINDEX_QUALIFIER_D1643,
        szINDEX_NAME_D1644, szTYPE_D1645, szORDINAL_POSITION_D1646,
        szCOLUMN_NAME_D1647, szASC_OR_DESC_D1648, szCARDINALITY_D1649,
        szPAGES_D1650, szFILTER_CONDITION_D1651);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow484)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D1653[256];
    char szPKTABLE_NAME_D1654[256];
    char szPKCOLUMN_NAME_D1655[256];
    char szFKCOLUMN_NAME_D1656[256];
lrd_to_printable(&PKTABLE_SCHEM_D1653, muliRowIndex, szPKTABLE_SCHEM_D1653, 256, "");
lrd_to_printable(&PKTABLE_NAME_D1654, muliRowIndex, szPKTABLE_NAME_D1654, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D1655, muliRowIndex, szPKCOLUMN_NAME_D1655, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1656, muliRowIndex, szFKCOLUMN_NAME_D1656, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D1653, szPKTABLE_NAME_D1654,
        szPKCOLUMN_NAME_D1655, szFKCOLUMN_NAME_D1656);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow486)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D1658[256];
    char szFKTABLE_SCHEM_D1659[256];
    char szFKTABLE_NAME_D1660[256];
    char szFKCOLUMN_NAME_D1661[256];
lrd_to_printable(&PKCOLUMN_NAME_D1658, muliRowIndex, szPKCOLUMN_NAME_D1658, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D1659, muliRowIndex, szFKTABLE_SCHEM_D1659, 256, "");
lrd_to_printable(&FKTABLE_NAME_D1660, muliRowIndex, szFKTABLE_NAME_D1660, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1661, muliRowIndex, szFKCOLUMN_NAME_D1661, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D1658, szFKTABLE_SCHEM_D1659,
        szFKTABLE_NAME_D1660, szFKCOLUMN_NAME_D1661);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow488)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1663[256];
    char szDATA_TYPE_D1664[256];
    char szTYPE_NAME_D1665[256];
    char szCOLUMN_SIZE_D1666[256];
    char szDECIMAL_DIGITS_D1667[256];
    char szNULLABLE_D1668[256];
    char szREMARKS_D1669[256];
    char szCOLUMN_DEF_D1670[256];
lrd_to_printable(&COLUMN_NAME_D1663, muliRowIndex, szCOLUMN_NAME_D1663, 256, "");
lrd_to_printable(&DATA_TYPE_D1664, muliRowIndex, szDATA_TYPE_D1664, 256, "");
lrd_to_printable(&TYPE_NAME_D1665, muliRowIndex, szTYPE_NAME_D1665, 256, "");
lrd_to_printable(&COLUMN_SIZE_D1666, muliRowIndex, szCOLUMN_SIZE_D1666, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D1667, muliRowIndex, szDECIMAL_DIGITS_D1667, 256, "");
lrd_to_printable(&NULLABLE_D1668, muliRowIndex, szNULLABLE_D1668, 256, "");
lrd_to_printable(&REMARKS_D1669, muliRowIndex, szREMARKS_D1669, 256, "");
lrd_to_printable(&COLUMN_DEF_D1670, muliRowIndex, szCOLUMN_DEF_D1670, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s", szCOLUMN_NAME_D1663, szDATA_TYPE_D1664,
        szTYPE_NAME_D1665, szCOLUMN_SIZE_D1666,
        szDECIMAL_DIGITS_D1667, szNULLABLE_D1668, szREMARKS_D1669,
        szCOLUMN_DEF_D1670);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow490)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szCOLUMN_NAME_D1672[256];
    char szKEY_SEQ_D1673[256];
    char szPK_NAME_D1674[256];
lrd_to_printable(&COLUMN_NAME_D1672, muliRowIndex, szCOLUMN_NAME_D1672, 256, "");
lrd_to_printable(&KEY_SEQ_D1673, muliRowIndex, szKEY_SEQ_D1673, 256, "");
lrd_to_printable(&PK_NAME_D1674, muliRowIndex, szPK_NAME_D1674, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szCOLUMN_NAME_D1672, szKEY_SEQ_D1673, szPK_NAME_D1674);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow492)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szNON_UNIQUE_D1676[256];
    char szINDEX_QUALIFIER_D1677[256];
    char szINDEX_NAME_D1678[256];
    char szTYPE_D1679[256];
    char szORDINAL_POSITION_D1680[256];
    char szCOLUMN_NAME_D1681[256];
    char szASC_OR_DESC_D1682[256];
    char szCARDINALITY_D1683[256];
    char szPAGES_D1684[256];
    char szFILTER_CONDITION_D1685[256];
lrd_to_printable(&NON_UNIQUE_D1676, muliRowIndex, szNON_UNIQUE_D1676, 256, "");
lrd_to_printable(&INDEX_QUALIFIER_D1677, muliRowIndex, szINDEX_QUALIFIER_D1677, 256, "");
lrd_to_printable(&INDEX_NAME_D1678, muliRowIndex, szINDEX_NAME_D1678, 256, "");
lrd_to_printable(&TYPE_D1679, muliRowIndex, szTYPE_D1679, 256, "");
lrd_to_printable(&ORDINAL_POSITION_D1680, muliRowIndex, szORDINAL_POSITION_D1680, 256, "");
lrd_to_printable(&COLUMN_NAME_D1681, muliRowIndex, szCOLUMN_NAME_D1681, 256, "");
lrd_to_printable(&ASC_OR_DESC_D1682, muliRowIndex, szASC_OR_DESC_D1682, 256, "");
lrd_to_printable(&CARDINALITY_D1683, muliRowIndex, szCARDINALITY_D1683, 256, "");
lrd_to_printable(&PAGES_D1684, muliRowIndex, szPAGES_D1684, 256, "");
lrd_to_printable(&FILTER_CONDITION_D1685, muliRowIndex, szFILTER_CONDITION_D1685, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s, %s", szNON_UNIQUE_D1676, szINDEX_QUALIFIER_D1677,
        szINDEX_NAME_D1678, szTYPE_D1679, szORDINAL_POSITION_D1680,
        szCOLUMN_NAME_D1681, szASC_OR_DESC_D1682, szCARDINALITY_D1683,
        szPAGES_D1684, szFILTER_CONDITION_D1685);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow494)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKTABLE_SCHEM_D1687[256];
    char szPKTABLE_NAME_D1688[256];
    char szPKCOLUMN_NAME_D1689[256];
    char szFKCOLUMN_NAME_D1690[256];
lrd_to_printable(&PKTABLE_SCHEM_D1687, muliRowIndex, szPKTABLE_SCHEM_D1687, 256, "");
lrd_to_printable(&PKTABLE_NAME_D1688, muliRowIndex, szPKTABLE_NAME_D1688, 256, "");
lrd_to_printable(&PKCOLUMN_NAME_D1689, muliRowIndex, szPKCOLUMN_NAME_D1689, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1690, muliRowIndex, szFKCOLUMN_NAME_D1690, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKTABLE_SCHEM_D1687, szPKTABLE_NAME_D1688,
        szPKCOLUMN_NAME_D1689, szFKCOLUMN_NAME_D1690);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow496)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPKCOLUMN_NAME_D1692[256];
    char szFKTABLE_SCHEM_D1693[256];
    char szFKTABLE_NAME_D1694[256];
    char szFKCOLUMN_NAME_D1695[256];
lrd_to_printable(&PKCOLUMN_NAME_D1692, muliRowIndex, szPKCOLUMN_NAME_D1692, 256, "");
lrd_to_printable(&FKTABLE_SCHEM_D1693, muliRowIndex, szFKTABLE_SCHEM_D1693, 256, "");
lrd_to_printable(&FKTABLE_NAME_D1694, muliRowIndex, szFKTABLE_NAME_D1694, 256, "");
lrd_to_printable(&FKCOLUMN_NAME_D1695, muliRowIndex, szFKCOLUMN_NAME_D1695, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s",
        szPKCOLUMN_NAME_D1692, szFKTABLE_SCHEM_D1693,
        szFKTABLE_NAME_D1694, szFKCOLUMN_NAME_D1695);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow498)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPROCEDURE_SCHEM_D1697[256];
    char szPROCEDURE_NAME_D1698[256];
    char szPROCEDURE_TYPE_D1699[256];
lrd_to_printable(&PROCEDURE_SCHEM_D1697, muliRowIndex, szPROCEDURE_SCHEM_D1697, 256, "");
lrd_to_printable(&PROCEDURE_NAME_D1698, muliRowIndex, szPROCEDURE_NAME_D1698, 256, "");
lrd_to_printable(&PROCEDURE_TYPE_D1699, muliRowIndex, szPROCEDURE_TYPE_D1699, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s",
        szPROCEDURE_SCHEM_D1697, szPROCEDURE_NAME_D1698,
        szPROCEDURE_TYPE_D1699);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow500)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szPROCEDURE_NAME_D1701[256];
    char szCOLUMN_NAME_D1702[256];
    char szCOLUMN_TYPE_D1703[256];
    char szDATA_TYPE_D1704[256];
    char szTYPE_NAME_D1705[256];
    char szCOLUMN_SIZE_D1706[256];
    char szDECIMAL_DIGITS_D1707[256];
    char szNULLABLE_D1708[256];
    char szREMARKS_D1709[256];
lrd_to_printable(&PROCEDURE_NAME_D1701, muliRowIndex, szPROCEDURE_NAME_D1701, 256, "");
lrd_to_printable(&COLUMN_NAME_D1702, muliRowIndex, szCOLUMN_NAME_D1702, 256, "");
lrd_to_printable(&COLUMN_TYPE_D1703, muliRowIndex, szCOLUMN_TYPE_D1703, 256, "");
lrd_to_printable(&DATA_TYPE_D1704, muliRowIndex, szDATA_TYPE_D1704, 256, "");
lrd_to_printable(&TYPE_NAME_D1705, muliRowIndex, szTYPE_NAME_D1705, 256, "");
lrd_to_printable(&COLUMN_SIZE_D1706, muliRowIndex, szCOLUMN_SIZE_D1706, 256, "");
lrd_to_printable(&DECIMAL_DIGITS_D1707, muliRowIndex, szDECIMAL_DIGITS_D1707, 256, "");
lrd_to_printable(&NULLABLE_D1708, muliRowIndex, szNULLABLE_D1708, 256, "");
lrd_to_printable(&REMARKS_D1709, muliRowIndex, szREMARKS_D1709, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s, %s, %s, %s, %s, %s,"
        "%s, %s, %s", szPROCEDURE_NAME_D1701, szCOLUMN_NAME_D1702,
        szCOLUMN_TYPE_D1703, szDATA_TYPE_D1704, szTYPE_NAME_D1705,
        szCOLUMN_SIZE_D1706, szDECIMAL_DIGITS_D1707, szNULLABLE_D1708,
        szREMARKS_D1709);
    return gjLRDRet;
}

LRD_PRINT_ROW_PROTO(PrintRow502)
{
    LRDRET gjLRDRet = LRDRET_I_OK;
    char szD1711[256];
lrd_to_printable(&D1711, muliRowIndex, szD1711, 256, "");
    lr_debug_message(LR_MSG_CLASS_RESULT_DATA, "%s", szD1711);
    return gjLRDRet;
}

#ifndef CCI
BEGIN_VUSER_DECLARATION
    DECLARE_VUSER_RUN("Vuser Run", Actions)
END_VUSER_DECLARATION
#endif

#endif
