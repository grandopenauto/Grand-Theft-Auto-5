#region Local Var
	auto uLocal_0 = 0;
	auto uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	auto uLocal_12 = 0;
	auto uLocal_13 = 0;
	float fLocal_14 = 0;
	auto uLocal_15 = 0;
	auto uLocal_16 = 0;
	int iLocal_17 = 0;
	auto uLocal_18 = 0;
	auto uLocal_19 = 0;
#endregion

void main()
{
	int[] iVar0 = new int[122];
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	int iVar131;
	int iVar132;
	int iVar133;
	int iVar134;
	int iVar135;
	int iVar136;
	int iVar137;
	int iVar138;
	int iVar139;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_67();
	}
	func_66();
	func_65();
	Global_36841 = 0;
	iVar123 = func_58();
	iVar124 = func_58();
	iVar125 = 2000;
	Global_36843 = 1;
	iVar126 = true;
	while (true)
	{
		iVar127 = 0;
		if (iVar126)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_101154.f_29511, 4 - 1))
			{
				func_57(26);
				iVar126 = false;
			}
		}
		if (!Global_36842 && GAMEPLAY::GET_GAME_TIMER() > Global_36262)
		{
			iVar127 = 0;
			while (iVar127 < 122)
			{
				if ((Global_40177[iVar127 /*46*/] && !Global_40177[iVar127 /*46*/].f_1) && !Global_40177[iVar127 /*46*/].f_45)
				{
					iVar0[iVar127] += iVar125;
					if (iVar0[iVar127] > Global_40177[iVar127 /*46*/].f_43)
					{
						if (func_33(7, 144, 2, -1, 0))
						{
							func_31(iVar127, 0);
							iVar0[iVar127] = 0;
							Global_36843 = 1;
						}
					}
				}
				wait(0);
				iVar127++;
			}
			iVar123 = func_58();
			iVar128 = 0;
			iVar129 = 0;
			iVar130 = 0;
			func_19(iVar123, iVar124, &iVar129, &iVar129, &iVar128, &iVar129, &iVar129, &iVar129);
			if (iVar128 < 0)
			{
				iVar128 *= -1;
			}
			if (iVar128 > 0 && Global_14413.f_1 == 3)
			{
				iVar124 = iVar123;
				if (Global_47574 > 0)
				{
					iVar131 = Global_47574;
					iVar132 = 0;
					while (iVar131 != 0)
					{
						if ((Global_47575[iVar132 /*53*/].f_52 != 0 && iVar132 < 8) && Global_47575[iVar132 /*53*/].f_4)
						{
							Global_47575[iVar132 /*53*/].f_2 -= iVar128;
							iVar133 = false;
							iVar134 = false;
							iVar135 = false;
							iVar136 = 0;
							while (!iVar135)
							{
								if (Global_46152[iVar136 /*203*/].f_1 != Global_47575[iVar132 /*53*/].f_52)
								{
									iVar136++;
								}
								else
								{
									iVar134 = true;
									iVar135 = true;
								}
								if (iVar136 == 7)
								{
									iVar135 = true;
									Global_47575[iVar132 /*53*/].f_52 = 0;
									iVar133 = true;
								}
							}
							if (!iVar134)
							{
								iVar133 = true;
								Global_47575[iVar132 /*53*/].f_4 = 0;
							}
							else if (Global_47575[iVar132 /*53*/].f_2 < 1)
							{
								if (func_33(7, 145, 2, -1, 0))
								{
									iVar137 = false;
									if (Global_47575[iVar132 /*53*/].f_5 || Global_47575[iVar132 /*53*/].f_10 > 0)
									{
										iVar137 = true;
									}
									if (func_16(Global_47575[iVar132 /*53*/], Global_47575[iVar132 /*53*/].f_1, iVar137))
									{
										iVar138 = true;
										if (Global_47575[iVar132 /*53*/].f_10 > 0)
										{
											iVar138 = false;
										}
										if (Global_47575[iVar132 /*53*/].f_5)
										{
											func_15(Global_47575[iVar132 /*53*/], &(Global_47575[iVar132 /*53*/].f_6), iVar138);
										}
										if (Global_47575[iVar132 /*53*/].f_10 > 0)
										{
											iVar130 = 0;
											iVar130 = 0;
											while (iVar130 < Global_47575[iVar132 /*53*/].f_10)
											{
												func_14(Global_47575[iVar132 /*53*/], &(Global_47575[iVar132 /*53*/].f_11[iVar130 /*4*/]));
												iVar130++;
											}
										}
										if (iVar137 && !iVar138)
										{
											func_1(Global_47575[iVar132 /*53*/]);
										}
										func_57(Global_47575[iVar132 /*53*/]);
									}
									Global_47575[iVar132 /*53*/].f_52 = 0;
									Global_47575[iVar132 /*53*/].f_5 = 0;
									Global_47575[iVar132 /*53*/].f_2 = 0;
									iVar133 = true;
									Global_47575[iVar132 /*53*/].f_4 = 0;
								}
							}
							if (iVar133)
							{
								Global_47574--;
							}
							iVar131--;
						}
						iVar132++;
						if (iVar132 == 8)
						{
							iVar131 = 0;
						}
						wait(0);
					}
				}
			}
		}
		wait(iVar125);
		Global_36844 = 0;
		Global_36845 = 0;
		Global_36846 = 0;
		iVar139 = Global_45790[0 /*120*/];
		if (iVar139 > 16)
		{
			iVar139 = 16;
		}
		iVar127 = 0;
		while (iVar127 < iVar139)
		{
			if (!Global_45790[0 /*120*/].f_69[iVar127])
			{
				Global_36844++;
			}
			iVar127++;
		}
		iVar139 = Global_45790[1 /*120*/];
		if (iVar139 > 16)
		{
			iVar139 = 16;
		}
		iVar127 = 0;
		while (iVar127 < iVar139)
		{
			if (!Global_45790[1 /*120*/].f_69[iVar127])
			{
				Global_36845++;
			}
			iVar127++;
		}
		iVar139 = Global_45790[2 /*120*/];
		if (iVar139 > 16)
		{
			iVar139 = 16;
		}
		iVar127 = 0;
		while (iVar127 < iVar139)
		{
			if (!Global_45790[2 /*120*/].f_69[iVar127])
			{
				Global_36846++;
			}
			iVar127++;
		}
		wait(iVar125);
	}
}

void func_1(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	auto uVar7;
	char* sVar8;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46152[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/];
	iVar2 = Global_46152[iVar0 /*203*/].f_9 - 1;
	if (!Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		uVar7 = Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_12(Global_36852[uVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = {Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2};
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar8 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar8 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar8 = "PW_FEED_EM_2";
				break;
		}
		func_2(1, Global_36852[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_36852[iVar1 /*12*/].f_3)
		{
			case 0:
				func_2(0, Global_36852[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_2(1, Global_36852[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_2(2, Global_36852[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_46152[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_2(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	int iVar1;
	char[64] cVar2;
	
	if (is_cutscene_playing())
	{
		return;
	}
	iVar0 = func_6();
	iVar1 = false;
	StringCopy(&cVar2, func_5(iParam1, &iVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				_set_notification_text_entry("PROPR_INCEMAIL1");
				break;
			
			case 73:
				_set_notification_text_entry("PROPR_INCEMAIL3");
				break;
			
			case 74:
				_set_notification_text_entry("PROPR_INCEMAIL2");
				break;
			
			default:
				_set_notification_text_entry(sParam3);
				if (!is_string_null_or_empty(sParam4))
				{
					_add_text_component_item_string(sParam4);
				}
				if (!is_string_null_or_empty(sParam5))
				{
					_add_text_component_item_string(sParam5);
				}
				if (!is_string_null_or_empty(sParam6))
				{
					_add_text_component_item_string(sParam6);
				}
				if (!is_string_null_or_empty(sParam7))
				{
					_add_text_component_item_string(sParam7);
				}
				if (!is_string_null_or_empty(sParam8))
				{
					_add_text_component_item_string(sParam8);
				}
				if (!is_string_null_or_empty(sParam9))
				{
					_add_text_component_item_string(sParam9);
				}
				if (!is_string_null_or_empty(sParam10))
				{
					_add_text_component_item_string(sParam10);
				}
				if (!is_string_null_or_empty(sParam11))
				{
					_add_text_component_item_string(sParam11);
				}
				if (!is_string_null_or_empty(sParam12))
				{
					_add_text_component_item_string(sParam12);
				}
				if (!is_string_null_or_empty(sParam13))
				{
					_add_text_component_item_string(sParam13);
				}
				break;
		}
		if (iVar1)
		{
			func_3(_set_notification_message(&cVar2, &cVar2, 0, 2, _get_label_text(func_4(iParam1)), 0));
		}
		else
		{
			func_3(_set_notification_message("CHAR_DEFAULT", "CHAR_DEFAULT", 0, 2, _get_label_text(func_4(iParam1)), 0));
		}
		switch (Global_14413)
		{
			case 0:
				StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
				Global_36844++;
				if (Global_36844 > 16)
				{
					Global_36844 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
				Global_36846++;
				if (Global_36846 > 16)
				{
					Global_36846 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
				Global_36845++;
				if (Global_36845 > 16)
				{
					Global_36845 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
				break;
		}
		play_sound_frontend(-1, "Notification", &Global_14402, 1);
	}
}

void func_3(auto uParam0)
{
	Global_36847[Global_36851] = uParam0;
	Global_16770 = 1;
	Global_16769 = uParam0;
	Global_36851++;
	if (Global_36851 == 3)
	{
		Global_36851 = 0;
	}
}

char* func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_5(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return _get_label_text(&(Global_101154.f_32575[0 /*29*/].f_7));
		
		case 1:
			return _get_label_text(&(Global_101154.f_32575[1 /*29*/].f_7));
		
		case 2:
			return _get_label_text(&(Global_101154.f_32575[2 /*29*/].f_7));
		
		case 7:
			return _get_label_text(&(Global_101154.f_32575[12 /*29*/].f_7));
		
		case 4:
			return _get_label_text(&(Global_101154.f_32575[60 /*29*/].f_7));
		
		case 6:
			return _get_label_text(&(Global_101154.f_32575[62 /*29*/].f_7));
		
		case 3:
			return _get_label_text(&(Global_101154.f_32575[14 /*29*/].f_7));
		
		case 16:
			return _get_label_text(&(Global_101154.f_32575[97 /*29*/].f_7));
		
		case 19:
			return _get_label_text(&(Global_101154.f_32575[99 /*29*/].f_7));
		
		case 15:
			return _get_label_text(&(Global_101154.f_32575[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return _get_label_text(&(Global_101154.f_32575[15 /*29*/].f_7));
		
		case 26:
			return _get_label_text(&(Global_101154.f_32575[30 /*29*/].f_7));
		
		case 27:
			return _get_label_text(&(Global_101154.f_32575[17 /*29*/].f_7));
		
		case 29:
			return _get_label_text(&(Global_101154.f_32575[20 /*29*/].f_7));
		
		case 30:
			return _get_label_text(&(Global_101154.f_32575[43 /*29*/].f_7));
		
		case 31:
			return _get_label_text(&(Global_101154.f_32575[44 /*29*/].f_7));
		
		case 32:
			return _get_label_text(&(Global_101154.f_32575[19 /*29*/].f_7));
		
		case 34:
			return _get_label_text(&(Global_101154.f_32575[40 /*29*/].f_7));
		
		case 36:
			return _get_label_text(&(Global_101154.f_32575[22 /*29*/].f_7));
		
		case 38:
			return _get_label_text(&(Global_101154.f_32575[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return _get_label_text(&(Global_101154.f_32575[122 /*29*/].f_7));
		
		case 40:
			return _get_label_text(&(Global_101154.f_32575[125 /*29*/].f_7));
		
		case 41:
			return _get_label_text(&(Global_101154.f_32575[113 /*29*/].f_7));
		
		case 42:
			return _get_label_text(&(Global_101154.f_32575[126 /*29*/].f_7));
		
		case 43:
			return _get_label_text(&(Global_101154.f_32575[127 /*29*/].f_7));
		
		case 44:
			return _get_label_text(&(Global_101154.f_32575[124 /*29*/].f_7));
		
		case 45:
			return _get_label_text(&(Global_101154.f_32575[114 /*29*/].f_7));
		
		case 46:
			return _get_label_text(&(Global_101154.f_32575[115 /*29*/].f_7));
		
		case 47:
			return _get_label_text(&(Global_101154.f_32575[116 /*29*/].f_7));
		
		case 48:
			return _get_label_text(&(Global_101154.f_32575[123 /*29*/].f_7));
		
		case 49:
			return _get_label_text(&(Global_101154.f_32575[117 /*29*/].f_7));
		
		case 50:
			return _get_label_text(&(Global_101154.f_32575[118 /*29*/].f_7));
		
		case 51:
			return _get_label_text(&(Global_101154.f_32575[119 /*29*/].f_7));
		
		case 52:
			return _get_label_text(&(Global_101154.f_32575[120 /*29*/].f_7));
		
		case 53:
			return _get_label_text(&(Global_101154.f_32575[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

auto func_6()
{
	func_7();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_7()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_11(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_10(PLAYER::PLAYER_PED_ID());
			if (func_9(iVar0) && (!func_8(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_9(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

int func_8(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_9(int iParam0)
{
	return iParam0 < 3;
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_11(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_11(int iParam0)
{
	if (func_9(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

struct<16> func_12(int iParam0)
{
	char[64] cVar0;
	char[64] cVar16;
	
	if (iParam0 > -1)
	{
		StringCopy(&cVar0, "EMSTR_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
		return cVar0;
	}
	StringCopy(&cVar16, "FAIL", 64);
	return cVar16;
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_46152[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_46152[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_46152[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_14(int iParam0, char* sParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46152[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_6 == 10)
	{
		return;
	}
	uVar1 = Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_6;
	Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_6++;
	StringCopy(&(Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_7[uVar1 /*4*/]), sParam1, 16);
}

void func_15(int iParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_46152[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_1 = 1;
	StringCopy(&(Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_2), sParam1, 16);
	Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_6 = 0;
	StringCopy(&(Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_7[0 /*4*/]), "", 16);
	StringCopy(&(Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_7[1 /*4*/]), "", 16);
	StringCopy(&(Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_7[2 /*4*/]), "", 16);
	StringCopy(&(Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_7[3 /*4*/]), "", 16);
	StringCopy(&(Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 - 1 /*48*/].f_7[4 /*4*/]), "", 16);
	if (iParam2)
	{
		func_1(iParam0);
	}
}

bool func_16(int iParam0, auto uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_18(iParam0, 1);
	if (iVar0 == -1)
	{
		return false;
	}
	if (Global_46152[iVar0 /*203*/].f_9 == 4)
	{
		return false;
	}
	Global_46152[iVar0 /*203*/].f_2 = iParam0;
	Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 /*48*/] = uParam1;
	Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_46152[iVar0 /*203*/].f_10[Global_46152[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_46152[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46152[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46152[iVar0 /*203*/].f_4[iVar1] == Global_36852[uParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46152[iVar0 /*203*/].f_3 == 4)
		{
			return false;
		}
		else
		{
			Global_46152[iVar0 /*203*/].f_4[Global_46152[iVar0 /*203*/].f_3] = Global_36852[uParam1 /*12*/].f_3;
			Global_46152[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_46152[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_46152[iVar0 /*203*/].f_4[iVar1] == Global_36852[uParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_46152[iVar0 /*203*/].f_3 == 4)
		{
			return false;
		}
		else
		{
			Global_46152[iVar0 /*203*/].f_4[Global_46152[iVar0 /*203*/].f_3] = Global_36852[uParam1 /*12*/].f_2;
			Global_46152[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_46152[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_46152[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_17(Global_46152[iVar0 /*203*/].f_4[iVar1], Global_46152[iVar0 /*203*/].f_1, 1, iParam2, 0);
		}
		iVar1++;
	}
	return true;
}

void func_17(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	auto uVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	auto uVar25;
	auto uVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!iParam2)
	{
		iVar19 = Global_40177[iParam1 /*46*/].f_42 - 1;
		if (iVar19 < 0)
		{
			return;
		}
		uVar20 = Global_40177[iParam1 /*46*/].f_32[iVar19];
		iVar2 = uVar20;
		Var3 = {func_12(Global_36852[uVar20 /*12*/].f_1)};
		if (Global_36852[uVar20 /*12*/].f_2 == iParam0 && !Global_36852[uVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_36852[uVar20 /*12*/].f_2;
		iVar0 = Global_45790[iParam0 /*120*/];
		iVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 -= 16;
			iVar21 = true;
		}
		if (iVar21)
		{
			if (!Global_45790[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36844--;
						if (Global_36844 < 0)
						{
							Global_36844 = 0;
						}
						break;
					
					case 1:
						Global_36845--;
						if (Global_36845 < 0)
						{
							Global_36845 = 0;
						}
						break;
					
					case 2:
						Global_36846--;
						if (Global_36846 < 0)
						{
							Global_36846 = 0;
						}
						break;
					}
				}
		}
		Global_45790[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_45790[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_45790[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45790[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_45790[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45790[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_45790[iParam0 /*120*/];
		iVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 -= 16;
			iVar22 = true;
		}
		if (iVar22)
		{
			if (!Global_45790[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_36844--;
						if (Global_36844 < 0)
						{
							Global_36844 = 0;
						}
						break;
					
					case 1:
						Global_36845--;
						if (Global_36845 < 0)
						{
							Global_36845 = 0;
						}
						break;
					
					case 2:
						Global_36846--;
						if (Global_36846 < 0)
						{
							Global_36846 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_46152[iVar24 /*203*/].f_1 == iParam1 && Global_46152[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_45790[iParam0 /*120*/].f_18[iVar0] = Global_46152[iVar23 /*203*/].f_1;
		Global_45790[iParam0 /*120*/].f_1[iVar0] = Global_46152[iVar23 /*203*/].f_9 - 1;
		Global_45790[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_45790[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_45790[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_45790[iParam0 /*120*/]++;
		uVar25 = Global_45790[iParam0 /*120*/].f_1[iVar0];
		uVar26 = Global_46152[iVar23 /*203*/].f_10[uVar25 /*48*/];
		iVar2 = uVar26;
		iVar1 = Global_36852[uVar26 /*12*/].f_2;
		if (Global_46152[iVar23 /*203*/].f_10[Global_46152[iVar23 /*203*/].f_9 - 1 /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_46152[iVar23 /*203*/].f_10[Global_46152[iVar23 /*203*/].f_9 - 1 /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = {func_12(Global_36852[uVar26 /*12*/].f_1)};
		}
	}
	if (!iParam4)
	{
		if (!Global_45790[iParam0 /*120*/].f_69[iVar0] && !iParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_2(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_2(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_2(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_2(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_18(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_13(iParam0);
	if (iVar0 > -1)
	{
		if (Global_46152[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	iVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46152[iVar1 /*203*/] == 0)
		{
			iVar2 = true;
		}
		iVar1++;
	}
	if (!iVar2)
	{
		return -1;
	}
	iVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_46152[iVar1 /*203*/] == 0)
		{
			if (iVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_46152[iVar1 /*203*/].f_1;
				iVar3 = false;
			}
			else if (iVar5 > Global_46152[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_46152[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_46152[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_46152[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_45790[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_45790[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_45790[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_45790[iVar6 /*120*/].f_18[iVar8] == Global_46152[iVar4 /*203*/].f_1)
							{
								if (Global_45790[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_36844--;
											break;
										
										case 1:
											Global_36845--;
											break;
										
										case 2:
											Global_36846--;
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_46152[iVar4 /*203*/].f_2 = iParam0;
	Global_46152[iVar4 /*203*/].f_3 = 0;
	if (!iParam1)
	{
		Global_46152[iVar4 /*203*/] = 1;
	}
	Global_101154.f_25562.f_310++;
	if (Global_101154.f_25562.f_310 == 0)
	{
		Global_101154.f_25562.f_310 = 1;
	}
	Global_46152[iVar4 /*203*/].f_1 = Global_101154.f_25562.f_310;
	Global_46152[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_19(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_29(iParam0, iParam1))
	{
		iVar0 = func_28(iParam1);
		iVar1 = func_26(iParam0);
		iVar2 = func_26(iParam0) - func_26(iParam1);
		iVar3 = func_28(iParam0) - func_28(iParam1);
		iVar4 = func_25(iParam0) - func_25(iParam1);
		iVar5 = func_24(iParam0) - func_24(iParam1);
		iVar6 = func_23(iParam0) - func_23(iParam1);
		iVar7 = func_22(iParam0) - func_22(iParam1);
	}
	else
	{
		iVar0 = func_28(iParam0);
		iVar1 = func_26(iParam1);
		iVar2 = func_26(iParam1) - func_26(iParam0);
		iVar3 = func_28(iParam1) - func_28(iParam0);
		iVar4 = func_25(iParam1) - func_25(iParam0);
		iVar5 = func_24(iParam1) - func_24(iParam0);
		iVar6 = func_23(iParam1) - func_23(iParam0);
		iVar7 = func_22(iParam1) - func_22(iParam0);
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6--;
	}
	while (iVar7 > 59)
	{
		iVar7 -= 60;
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5--;
	}
	while (iVar6 > 59)
	{
		iVar6 -= 60;
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4--;
	}
	while (iVar5 > 23)
	{
		iVar5 -= 24;
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2--;
		}
		iVar4 += func_21(iVar0, iVar1);
		iVar3--;
		iVar0 = round(func_20(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2--;
	}
	while (iVar3 > 12)
	{
		iVar3 -= 12;
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

float func_20(Vector3 fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = fParam2 - fParam1;
	fParam0 -= IntToFloat(round(fParam0 - fParam1 / fVar0)) * fVar0;
	if (fParam0 < fParam1)
	{
		fParam0 += fVar0;
	}
	return fParam0;
}

int func_21(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if (iParam1 % 4 == 0)
			{
				if (iParam1 % 100 != 0)
				{
					return 29;
				}
				else if (iParam1 % 400 == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_22(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_23(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_24(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_25(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

auto func_26(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_27(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1) + 2011;
}

int func_27(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_28(int iParam0)
{
	return (iParam0 && 15);
}

bool func_29(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_30(iParam1) || !func_30(iParam0))
	{
		return true;
	}
	iVar0 = func_26(iParam0);
	iVar1 = func_26(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_28(iParam0);
	iVar1 = func_28(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_25(iParam0);
	iVar1 = func_25(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_24(iParam0);
	iVar1 = func_24(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_23(iParam0);
	iVar1 = func_23(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	else if (iVar0 < iVar1)
	{
		return false;
	}
	iVar0 = func_22(iParam0);
	iVar1 = func_22(iParam1);
	if (iVar0 > iVar1)
	{
		return true;
	}
	return false;
}

bool func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_22(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_23(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_24(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_26(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return false;
	}
	iVar4 = func_28(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_25(iParam0);
	if (iVar5 < 1 || iVar5 > func_21(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_31(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_40177[iParam0 /*46*/] && !Global_40177[iParam0 /*46*/].f_1)
	{
		return;
	}
	if (Global_40177[iParam0 /*46*/].f_31 == Global_40177[iParam0 /*46*/].f_30)
	{
		iVar0 = Global_40177[iParam0 /*46*/].f_42 - 1;
		if (iVar0 < 0)
		{
			return;
		}
		if (Global_36852[Global_40177[iParam0 /*46*/].f_32[iVar0] /*12*/].f_4 == 0)
		{
			Global_40177[iParam0 /*46*/].f_1 = 1;
		}
		return;
	}
	if (Global_40177[iParam0 /*46*/].f_1)
	{
		return;
	}
	uVar1 = Global_40177[iParam0 /*46*/].f_8[Global_40177[iParam0 /*46*/].f_31];
	Global_40177[iParam0 /*46*/].f_31++;
	func_32(iParam0, uVar1);
	Global_40177[iParam0 /*46*/].f_45 = Global_36852[uVar1 /*12*/].f_10;
	Global_40177[iParam0 /*46*/].f_43 = Global_36852[uVar1 /*12*/].f_11;
	iVar2 = Global_40177[iParam0 /*46*/].f_2;
	func_17(Global_36852[uVar1 /*12*/].f_3, iParam0, 0, 0, iParam1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_40177[iParam0 /*46*/].f_3[iVar3] != Global_36852[uVar1 /*12*/].f_2 && Global_40177[iParam0 /*46*/].f_3[iVar3] != Global_36852[uVar1 /*12*/].f_3)
		{
			func_17(Global_40177[iParam0 /*46*/].f_3[iVar3], iParam0, 0, 0, iParam1);
		}
		iVar3++;
	}
	if (Global_40177[iParam0 /*46*/].f_31 == Global_40177[iParam0 /*46*/].f_30)
	{
		if (Global_36852[Global_40177[iParam0 /*46*/].f_32[Global_40177[iParam0 /*46*/].f_42 - 1] /*12*/].f_4 == 0)
		{
			Global_40177[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}
}

bool func_32(auto uParam0, auto uParam1)
{
	if (Global_40177[uParam0 /*46*/].f_42 >= 9)
	{
		return false;
	}
	Global_40177[uParam0 /*46*/].f_32[Global_40177[uParam0 /*46*/].f_42] = uParam1;
	Global_40177[uParam0 /*46*/].f_42++;
	return true;
}

bool func_33(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var[] uVar5 = new var[16];
	int[] iVar22 = new int[2];
	int iVar25;
	int iVar26;
	int iVar27;
	
	if (!is_screen_faded_in())
	{
		return false;
	}
	if (func_56())
	{
		return false;
	}
	if (is_player_playing(player_id()))
	{
		if (get_ped_parachute_state(PLAYER::PLAYER_PED_ID()) != -1)
		{
			return false;
		}
	}
	if (is_scripted_conversation_ongoing())
	{
		return false;
	}
	if (func_55() && iParam2 < 4)
	{
		return false;
	}
	if (is_player_playing(player_id()))
	{
		if (func_53(PLAYER::PLAYER_PED_ID()))
		{
			if (GAMEPLAY::IS_BIT_SET(iParam0, func_52()) && !GAMEPLAY::IS_BIT_SET(iParam4, 19))
			{
				return false;
			}
		}
	}
	if (Global_69487)
	{
		return false;
	}
	if (is_cutscene_playing())
	{
		return false;
	}
	if (Global_68058)
	{
		return false;
	}
	if (Global_87618)
	{
		return false;
	}
	if ((func_51() || (Global_17118.f_4 && Global_17118.f_104 == 4)) || func_50())
	{
		return false;
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, 18))
	{
		if (!GAMEPLAY::IS_BIT_SET(iParam0, func_52()))
		{
			return false;
		}
	}
	iVar0 = 1;
	if (((Global_91278 == 13 || Global_91278 == 10) || Global_91278 == 11) || Global_91278 == 12)
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		return false;
	}
	if (!is_player_playing(player_id()))
	{
		return false;
	}
	else if (iParam2 != 5)
	{
		if (get_player_wanted_level(player_id()) > 1)
		{
			return false;
		}
		if (is_auto_save_in_progress())
		{
			return false;
		}
		if (Global_88539)
		{
			return false;
		}
		if (func_43(50f, 1) != -1)
		{
			return false;
		}
		if (((((iParam1 == 17 || iParam1 == 19) || iParam1 == 14) || iParam1 == 0) || iParam1 == 1) || iParam1 == 2)
		{
			if (GAMEPLAY::IS_BIT_SET(iParam0, func_52()))
			{
				iVar1 = func_42(func_6());
				iVar2 = func_42(iParam1);
				iVar3 = func_41(iVar1, iVar2);
				if (iVar3 < 9)
				{
					if (Global_101154.f_16793.f_175[iVar3 /*19*/].f_8 == 1 || Global_101154.f_16793.f_175[iVar3 /*19*/].f_8 == 2)
					{
						if (func_40(&(Global_101154.f_16793.f_175[iVar3 /*19*/].f_5)))
						{
							if (func_37(&(Global_101154.f_16793.f_175[iVar3 /*19*/].f_5)) < 30f)
							{
								return false;
							}
						}
					}
				}
			}
		}
	}
	if (get_player_wanted_level(player_id()) > 2)
	{
		return false;
	}
	if (func_36())
	{
		return false;
	}
	if (GAMEPLAY::IS_BIT_SET(iParam4, 3))
	{
		if (Global_100201)
		{
			return false;
		}
		if (is_player_playing(player_id()))
		{
			if (get_player_wanted_level(player_id()) > 0)
			{
				return false;
			}
		}
		if (Global_99866.f_19 != 0)
		{
			return false;
		}
		if (Global_35711 == 5)
		{
			return false;
		}
	}
	if (iParam3 != -1)
	{
		if (func_35(PLAYER::PLAYER_PED_ID(), iParam3, 0))
		{
			return false;
		}
	}
	iVar4 = func_6();
	if (func_9(iVar4))
	{
		get_ped_nearby_peds(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		switch (iParam1)
		{
			case 4:
				switch (iVar4)
				{
					case 0:
						iVar22[0] = func_11(1);
						iVar22[1] = func_11(2);
						break;
					
					case 1:
						iVar22[0] = func_11(0);
						iVar22[1] = func_11(2);
						break;
					
					case 2:
						iVar22[0] = func_11(0);
						iVar22[1] = func_11(1);
						break;
				}
				break;
			
			case 5:
				iVar22[0] = func_11(1);
				iVar22[1] = func_11(2);
				break;
			
			case 6:
				iVar22[0] = func_34(12);
				iVar22[1] = func_11(1);
				break;
			
			case 7:
				iVar22[0] = func_34(12);
				iVar22[1] = func_11(0);
				break;
			
			case 8:
				iVar22[0] = func_11(0);
				iVar22[1] = func_11(1);
				break;
			
			case 9:
				iVar22[0] = func_11(0);
				iVar22[1] = func_11(2);
				break;
			
			case 10:
				iVar22[0] = func_34(23);
				iVar22[1] = func_11(0);
				break;
			
			case 11:
				iVar22[0] = func_34(23);
				iVar22[1] = func_11(0);
				break;
			
			default:
				if (func_9(iParam1))
				{
					iVar22[0] = func_11(iParam1);
				}
				else
				{
					iVar22[0] = func_34(iParam1);
				}
				iVar22[1] = 0;
				break;
		}
		iVar25 = 0;
		while (iVar25 < 2)
		{
			if (iVar22[iVar25] != 0)
			{
				iVar26 = 0;
				while (iVar26 < 16)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar5[iVar26]))
					{
						if (ENTITY::GET_ENTITY_MODEL(uVar5[iVar26]) == iVar22[iVar25])
						{
							if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar26], 0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (vdist2(ENTITY::GET_ENTITY_COORDS(uVar5[iVar26], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 6400f)
									{
										return false;
									}
								}
							}
							else
							{
								return false;
							}
						}
					}
					iVar26++;
				}
				iVar27 = false;
				switch (iVar22[iVar25])
				{
					case joaat("player_zero"):
						iVar27 = Global_89089[0];
						break;
					
					case joaat("player_one"):
						iVar27 = Global_89089[1];
						break;
					
					case joaat("player_two"):
						iVar27 = Global_89089[2];
						break;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar27))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (vdist2(ENTITY::GET_ENTITY_COORDS(iVar27, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 6400f)
						{
							return false;
						}
					}
				}
				switch (iVar22[iVar25])
				{
					case joaat("player_zero"):
						iVar27 = Global_91268[0];
						break;
					
					case joaat("player_one"):
						iVar27 = Global_91268[1];
						break;
					
					case joaat("player_two"):
						iVar27 = Global_91268[2];
						break;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar27))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (vdist2(ENTITY::GET_ENTITY_COORDS(iVar27, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 6400f)
						{
							return false;
						}
					}
				}
			}
			iVar25++;
		}
	}
	else
	{
		return false;
	}
	return true;
}

int func_34(int iParam0)
{
	if (!func_9(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_35(int iParam0, int iParam1, float fParam2)
{
	struct<5> Var0;
	float fVar5;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		Var0 = {Global_35712[iParam1 /*5*/]};
		fVar5 = Var0.f_3;
		if (fParam2 > 0f)
		{
			fVar5 = fParam2;
		}
		if (INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Var0, 1) < fVar5)
		{
			return 1;
		}
		else if (Var0.f_4 != -1)
		{
			return func_35(iParam0, Var0.f_4, fParam2);
		}
	}
	return 0;
}

bool func_36()
{
	if (Global_69749)
	{
		return true;
	}
	else if (Global_55743 && !Global_55749)
	{
		return true;
	}
	return false;
}

float func_37(auto uParam0)
{
	if (func_40(uParam0))
	{
		if (func_39(uParam0))
		{
			return *uParam0.f_2;
		}
		else
		{
			return func_38(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - *uParam0.f_1;
		}
	}
	return *uParam0.f_1;
}

float func_38(int iParam0)
{
	int iVar0;
	
	if (iParam0)
	{
		return to_float(GAMEPLAY::GET_GAME_TIMER()) / 1000f;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return to_float(iVar0) / 1000f;
	}
	return to_float(GAMEPLAY::GET_GAME_TIMER()) / 1000f;
}

int func_39(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

int func_40(auto uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, true);
}

int func_41(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_42(int iParam0)
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < 147)
	{
		return Global_101154.f_32575[iParam0 /*29*/].f_11;
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == 147)
	{
		return 6;
	}
	if (iParam0 == 148)
	{
		return 6;
	}
	return 6;
}

int func_43(float fParam0, int iParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (is_player_playing(player_id()))
	{
		iVar36 = func_49();
		iVar37 = 0;
		iVar37 = 0;
		while (iVar37 < 63)
		{
			iVar32 = iVar37;
			if (GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 2) && !GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar32 /*6*/], 3))
			{
				func_44(iVar32, &Var0);
				fVar35 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
				if (fVar35 < fVar34)
				{
					iVar38 = true;
					if (iParam1)
					{
						if (iVar36 != Var0.f_26)
						{
							iVar38 = false;
						}
					}
					if (iVar38)
					{
						iVar33 = iVar32;
						fVar34 = fVar35;
					}
				}
			}
			iVar37++;
		}
	}
	return iVar33;
}

void func_44(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_45(uParam1, "Abigail1", func_47(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 1:
			func_45(uParam1, "Abigail2", func_47(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 2:
			func_45(uParam1, "Barry1", func_47(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 3:
			func_45(uParam1, "Barry2", func_47(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 4:
			func_45(uParam1, "Barry3", func_47(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 5:
			func_45(uParam1, "Barry3A", func_47(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 6:
			func_45(uParam1, "Barry3C", func_47(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 7:
			func_45(uParam1, "Barry4", func_47(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_46(iParam0), 0, 0);
			break;
		
		case 8:
			func_45(uParam1, "Dreyfuss1", func_47(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 9:
			func_45(uParam1, "Epsilon1", func_47(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 10:
			func_45(uParam1, "Epsilon2", func_47(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 11:
			func_45(uParam1, "Epsilon3", func_47(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 12:
			func_45(uParam1, "Epsilon4", func_47(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 13:
			func_45(uParam1, "Epsilon5", func_47(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 14:
			func_45(uParam1, "Epsilon6", func_47(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 15:
			func_45(uParam1, "Epsilon7", func_47(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 16:
			func_45(uParam1, "Epsilon8", func_47(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 17:
			func_45(uParam1, "Extreme1", func_47(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 18:
			func_45(uParam1, "Extreme2", func_47(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 19:
			func_45(uParam1, "Extreme3", func_47(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 20:
			func_45(uParam1, "Extreme4", func_47(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 21:
			func_45(uParam1, "Fanatic1", func_47(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_46(iParam0), 1, 0);
			break;
		
		case 22:
			func_45(uParam1, "Fanatic2", func_47(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_46(iParam0), 1, 0);
			break;
		
		case 23:
			func_45(uParam1, "Fanatic3", func_47(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_46(iParam0), 0, 1);
			break;
		
		case 24:
			func_45(uParam1, "Hao1", func_47(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_46(iParam0), 0, 1);
			break;
		
		case 25:
			func_45(uParam1, "Hunting1", func_47(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 26:
			func_45(uParam1, "Hunting2", func_47(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 27:
			func_45(uParam1, "Josh1", func_47(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 28:
			func_45(uParam1, "Josh2", func_47(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 29:
			func_45(uParam1, "Josh3", func_47(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 30:
			func_45(uParam1, "Josh4", func_47(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 31:
			func_45(uParam1, "Maude1", func_47(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 32:
			func_45(uParam1, "Minute1", func_47(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 33:
			func_45(uParam1, "Minute2", func_47(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 34:
			func_45(uParam1, "Minute3", func_47(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 35:
			func_45(uParam1, "MrsPhilips1", func_47(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 36:
			func_45(uParam1, "MrsPhilips2", func_47(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 37:
			func_45(uParam1, "Nigel1", func_47(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 38:
			func_45(uParam1, "Nigel1A", func_47(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 39:
			func_45(uParam1, "Nigel1B", func_47(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_46(iParam0), 1, 1);
			break;
		
		case 40:
			func_45(uParam1, "Nigel1C", func_47(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_46(iParam0), 1, 1);
			break;
		
		case 41:
			func_45(uParam1, "Nigel1D", func_47(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_46(iParam0), 1, 1);
			break;
		
		case 42:
			func_45(uParam1, "Nigel2", func_47(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 43:
			func_45(uParam1, "Nigel3", func_47(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_46(iParam0), 1, 1);
			break;
		
		case 44:
			func_45(uParam1, "Omega1", func_47(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 45:
			func_45(uParam1, "Omega2", func_47(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 46:
			func_45(uParam1, "Paparazzo1", func_47(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 47:
			func_45(uParam1, "Paparazzo2", func_47(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 48:
			func_45(uParam1, "Paparazzo3", func_47(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 49:
			func_45(uParam1, "Paparazzo3A", func_47(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 50:
			func_45(uParam1, "Paparazzo3B", func_47(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 51:
			func_45(uParam1, "Paparazzo4", func_47(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 52:
			func_45(uParam1, "Rampage1", func_47(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 54:
			func_45(uParam1, "Rampage3", func_47(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 55:
			func_45(uParam1, "Rampage4", func_47(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 56:
			func_45(uParam1, "Rampage5", func_47(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_46(iParam0), 0, 0);
			break;
		
		case 53:
			func_45(uParam1, "Rampage2", func_47(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_46(iParam0), 1, 0);
			break;
		
		case 57:
			func_45(uParam1, "TheLastOne", func_47(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 58:
			func_45(uParam1, "Tonya1", func_47(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 59:
			func_45(uParam1, "Tonya2", func_47(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 60:
			func_45(uParam1, "Tonya3", func_47(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 61:
			func_45(uParam1, "Tonya4", func_47(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		case 62:
			func_45(uParam1, "Tonya5", func_47(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_46(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_45(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
{
	*uParam0.f_4 = iParam5;
	*uParam0 = sParam1;
	*uParam0.f_1 = {Param2};
	*uParam0.f_3 = iParam4;
	*uParam0.f_5 = iParam6;
	*uParam0.f_6 = {vParam7};
	*uParam0.f_9 = iParam10;
	StringCopy(uParam0.f_10, sParam11, 16);
	*uParam0.f_14 = iParam12;
	*uParam0.f_15 = iParam13;
	StringCopy(uParam0.f_16, sParam14, 24);
	*uParam0.f_22 = iParam15;
	*uParam0.f_23 = iParam16;
	*uParam0.f_24 = iParam17;
	*uParam0.f_25 = iParam18;
	*uParam0.f_26 = iParam19;
	*uParam0.f_27 = iParam20;
	*uParam0.f_28 = iParam21;
	*uParam0.f_29 = uParam22;
	*uParam0.f_30 = iParam23;
	*uParam0.f_31 = iParam24;
}

bool func_46(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
			break;
		
		case 1:
			return false;
			break;
		
		case 2:
			return true;
			break;
		
		case 3:
			return true;
			break;
		
		case 4:
			return false;
			break;
		
		case 5:
			return true;
			break;
		
		case 6:
			return true;
			break;
		
		case 7:
			return false;
			break;
		
		case 8:
			return true;
			break;
		
		case 9:
			return false;
			break;
		
		case 10:
			return false;
			break;
		
		case 11:
			return false;
			break;
		
		case 12:
			return true;
			break;
		
		case 13:
			return false;
			break;
		
		case 14:
			return true;
			break;
		
		case 15:
			return false;
			break;
		
		case 16:
			return true;
			break;
		
		case 17:
			return true;
			break;
		
		case 18:
			return true;
			break;
		
		case 19:
			return true;
			break;
		
		case 20:
			return true;
			break;
		
		case 21:
			return true;
			break;
		
		case 22:
			return true;
			break;
		
		case 23:
			return true;
			break;
		
		case 24:
			return true;
			break;
		
		case 25:
			return true;
			break;
		
		case 26:
			return true;
			break;
		
		case 27:
			return false;
			break;
		
		case 28:
			return true;
			break;
		
		case 29:
			return true;
			break;
		
		case 30:
			return true;
			break;
		
		case 31:
			return false;
			break;
		
		case 32:
			return true;
			break;
		
		case 33:
			return true;
			break;
		
		case 34:
			return true;
			break;
		
		case 35:
			return false;
			break;
		
		case 36:
			return false;
			break;
		
		case 37:
			return false;
			break;
		
		case 38:
			return true;
			break;
		
		case 39:
			return true;
			break;
		
		case 40:
			return true;
			break;
		
		case 41:
			return true;
			break;
		
		case 42:
			return true;
			break;
		
		case 43:
			return true;
			break;
		
		case 44:
			return false;
			break;
		
		case 45:
			return false;
			break;
		
		case 46:
			return true;
			break;
		
		case 47:
			return true;
			break;
		
		case 48:
			return false;
			break;
		
		case 49:
			return true;
			break;
		
		case 50:
			return true;
			break;
		
		case 51:
			return true;
			break;
		
		case 52:
			return true;
			break;
		
		case 54:
			return true;
			break;
		
		case 55:
			return true;
			break;
		
		case 56:
			return true;
			break;
		
		case 53:
			return true;
			break;
		
		case 57:
			return true;
			break;
		
		case 58:
			return true;
			break;
		
		case 59:
			return true;
			break;
		
		case 60:
			return true;
			break;
		
		case 61:
			return true;
			break;
		
		case 62:
			return true;
			break;
		
		default:
			break;
	}
	return false;
}

struct<2> func_47(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_48(iParam0)};
	if (is_string_null_or_empty(&Var2))
	{
	}
	else
	{
		StringCopy(&cVar0, "RC_", 8);
		StringConCat(&cVar0, &Var2, 8);
	}
	return cVar0;
}

struct<2> func_48(int iParam0)
{
	char[8] cVar0;
	
	StringCopy(&cVar0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&cVar0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&cVar0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&cVar0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&cVar0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&cVar0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&cVar0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&cVar0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&cVar0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&cVar0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&cVar0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&cVar0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&cVar0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&cVar0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&cVar0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&cVar0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&cVar0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&cVar0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&cVar0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&cVar0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&cVar0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&cVar0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&cVar0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&cVar0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&cVar0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&cVar0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&cVar0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&cVar0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&cVar0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&cVar0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&cVar0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&cVar0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&cVar0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&cVar0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&cVar0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&cVar0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&cVar0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&cVar0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&cVar0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&cVar0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&cVar0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&cVar0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&cVar0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&cVar0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&cVar0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&cVar0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&cVar0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&cVar0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&cVar0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&cVar0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&cVar0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&cVar0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&cVar0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&cVar0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&cVar0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&cVar0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&cVar0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&cVar0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&cVar0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&cVar0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&cVar0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&cVar0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&cVar0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return cVar0;
}

int func_49()
{
	func_7();
	switch (Global_101154.f_1826.f_539.f_3549)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

bool func_50()
{
	if (_get_number_of_instances_of_streamed_script(joaat("player_timetable_scene")) > 0)
	{
		return true;
	}
	return false;
}

int func_51()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_89089.f_44 == 1;
	}
	return false;
}

auto func_52()
{
	func_7();
	return Global_101154.f_1826.f_539.f_3549;
}

bool func_53(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (func_54(iParam0) == -1)
	{
		return false;
	}
	return true;
}

int func_54(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_36642[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_36642[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_55()
{
	if (Global_35711 == 15)
	{
		return false;
	}
	return true;
}

bool func_56()
{
	if (Global_14413.f_1 == 1)
	{
		return true;
	}
	return false;
}

void func_57(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_29511, 4 - 1))
		{
			return;
		}
	}
	iVar0 = func_13(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_46152[iVar0 /*203*/] = 0;
}

auto func_58()
{
	auto uVar0;
	
	func_64(&uVar0, get_clock_seconds());
	func_63(&uVar0, get_clock_minutes());
	func_62(&uVar0, TIME::GET_CLOCK_HOURS());
	func_61(&uVar0, get_clock_day_of_month());
	func_60(&uVar0, get_clock_month());
	func_59(&uVar0, get_clock_year());
	return uVar0;
}

void func_59(auto uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 -= *uParam0 & 2080374784;
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || shift_left(2011 - iParam1, 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left(iParam1 - 2011, 26));
		*uParam0 -= *uParam0 & -2147483648;
	}
}

void func_60(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_61(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_28(*uParam0);
	iVar1 = func_26(*uParam0);
	if (iParam1 < 1 || iParam1 > func_21(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_62(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_63(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_64(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

void func_65()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_45790[iVar0 /*120*/] = Global_101154.f_25562[iVar0 /*103*/];
		iVar1 = 0;
		while (iVar1 < 16)
		{
			Global_45790[iVar0 /*120*/].f_1[iVar1] = Global_101154.f_25562[iVar0 /*103*/].f_1[iVar1];
			Global_45790[iVar0 /*120*/].f_18[iVar1] = Global_101154.f_25562[iVar0 /*103*/].f_18[iVar1];
			Global_45790[iVar0 /*120*/].f_35[iVar1] = Global_101154.f_25562[iVar0 /*103*/].f_35[iVar1];
			Global_45790[iVar0 /*120*/].f_52[iVar1] = Global_101154.f_25562[iVar0 /*103*/].f_52[iVar1];
			Global_45790[iVar0 /*120*/].f_69[iVar1] = Global_101154.f_25562[iVar0 /*103*/].f_69[iVar1];
			Global_45790[iVar0 /*120*/].f_86[iVar1] = Global_101154.f_25562[iVar0 /*103*/].f_86[iVar1];
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_46152[iVar0 /*203*/].f_2 = Global_101154.f_25562.f_311[iVar0 /*203*/];
		Global_46152[iVar0 /*203*/] = Global_101154.f_25562.f_311[iVar0 /*203*/].f_2;
		Global_46152[iVar0 /*203*/].f_3 = Global_101154.f_25562.f_311[iVar0 /*203*/].f_3;
		Global_46152[iVar0 /*203*/].f_1 = Global_101154.f_25562.f_311[iVar0 /*203*/].f_1;
		Global_46152[iVar0 /*203*/].f_9 = Global_101154.f_25562.f_311[iVar0 /*203*/].f_9;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_46152[iVar0 /*203*/].f_4[iVar1] = Global_101154.f_25562.f_311[iVar0 /*203*/].f_4[iVar1];
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_46152[iVar0 /*203*/].f_10[iVar1 /*48*/] = Global_101154.f_25562.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/];
			Global_46152[iVar0 /*203*/].f_10[iVar1 /*48*/].f_1 = Global_101154.f_25562.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_1;
			Global_46152[iVar0 /*203*/].f_10[iVar1 /*48*/].f_2 = {Global_101154.f_25562.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_2};
			Global_46152[iVar0 /*203*/].f_10[iVar1 /*48*/].f_6 = Global_101154.f_25562.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_6;
			iVar2 = 0;
			while (iVar2 < 10)
			{
				Global_46152[iVar0 /*203*/].f_10[iVar1 /*48*/].f_7[iVar2 /*4*/] = {Global_101154.f_25562.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_7[iVar2 /*4*/]};
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 122)
	{
		Global_40177[iVar0 /*46*/] = Global_101154.f_25562.f_1733[iVar0 /*14*/];
		Global_40177[iVar0 /*46*/].f_1 = Global_101154.f_25562.f_1733[iVar0 /*14*/].f_1;
		Global_40177[iVar0 /*46*/].f_45 = Global_101154.f_25562.f_1733[iVar0 /*14*/].f_2;
		Global_40177[iVar0 /*46*/].f_31 = Global_101154.f_25562.f_1733[iVar0 /*14*/].f_3;
		iVar1 = 0;
		while (iVar1 < 9)
		{
			if (Global_101154.f_25562.f_1733[iVar0 /*14*/].f_4[iVar1] > 0)
			{
				Global_40177[iVar0 /*46*/].f_32[iVar1] = Global_101154.f_25562.f_1733[iVar0 /*14*/].f_4[iVar1] - 1;
				Global_40177[iVar0 /*46*/].f_42++;
			}
			iVar1++;
		}
		iVar0++;
	}
	Global_47574 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_47575[iVar0 /*53*/] = Global_101154.f_25562.f_3442[iVar0 /*53*/];
		Global_47575[iVar0 /*53*/].f_1 = Global_101154.f_25562.f_3442[iVar0 /*53*/].f_1;
		Global_47575[iVar0 /*53*/].f_2 = Global_101154.f_25562.f_3442[iVar0 /*53*/].f_2;
		Global_47575[iVar0 /*53*/].f_5 = Global_101154.f_25562.f_3442[iVar0 /*53*/].f_5;
		Global_47575[iVar0 /*53*/].f_6 = {Global_101154.f_25562.f_3442[iVar0 /*53*/].f_6};
		Global_47575[iVar0 /*53*/].f_10 = Global_101154.f_25562.f_3442[iVar0 /*53*/].f_10;
		iVar1 = 0;
		while (iVar1 < 10)
		{
			Global_47575[iVar0 /*53*/].f_11[iVar1 /*4*/] = {Global_101154.f_25562.f_3442[iVar0 /*53*/].f_11[iVar1 /*4*/]};
			iVar1++;
		}
		Global_47575[iVar0 /*53*/].f_52 = Global_101154.f_25562.f_3442[iVar0 /*53*/].f_52;
		if (Global_47575[iVar0 /*53*/].f_52 != 0)
		{
			Global_47574++;
		}
		iVar0++;
	}
}

void func_66()
{
	Global_36852[0 /*12*/] = 15;
	Global_36852[0 /*12*/].f_1 = 16;
	Global_36852[0 /*12*/].f_2 = 4;
	Global_36852[0 /*12*/].f_3 = 0;
	Global_36852[0 /*12*/].f_10 = 1;
	Global_36852[0 /*12*/].f_11 = 0;
	Global_36852[0 /*12*/].f_4 = 0;
	Global_36852[1 /*12*/] = 17;
	Global_36852[1 /*12*/].f_1 = 16;
	Global_36852[1 /*12*/].f_2 = 4;
	Global_36852[1 /*12*/].f_3 = 0;
	Global_36852[1 /*12*/].f_10 = 1;
	Global_36852[1 /*12*/].f_11 = 0;
	Global_36852[1 /*12*/].f_4 = 0;
	Global_36852[2 /*12*/] = 18;
	Global_36852[2 /*12*/].f_1 = 16;
	Global_36852[2 /*12*/].f_2 = 4;
	Global_36852[2 /*12*/].f_3 = 0;
	Global_36852[2 /*12*/].f_10 = 1;
	Global_36852[2 /*12*/].f_11 = 0;
	Global_36852[2 /*12*/].f_4 = 0;
	Global_36852[3 /*12*/] = 19;
	Global_36852[3 /*12*/].f_1 = 16;
	Global_36852[3 /*12*/].f_2 = 4;
	Global_36852[3 /*12*/].f_3 = 0;
	Global_36852[3 /*12*/].f_10 = 1;
	Global_36852[3 /*12*/].f_11 = 0;
	Global_36852[3 /*12*/].f_4 = 0;
	Global_36852[4 /*12*/] = 20;
	Global_36852[4 /*12*/].f_1 = 16;
	Global_36852[4 /*12*/].f_2 = 4;
	Global_36852[4 /*12*/].f_3 = 0;
	Global_36852[4 /*12*/].f_10 = 1;
	Global_36852[4 /*12*/].f_11 = 0;
	Global_36852[4 /*12*/].f_4 = 0;
	Global_36852[5 /*12*/] = 21;
	Global_36852[5 /*12*/].f_1 = 16;
	Global_36852[5 /*12*/].f_2 = 4;
	Global_36852[5 /*12*/].f_3 = 0;
	Global_36852[5 /*12*/].f_10 = 1;
	Global_36852[5 /*12*/].f_11 = 0;
	Global_36852[5 /*12*/].f_4 = 0;
	Global_36852[6 /*12*/] = 22;
	Global_36852[6 /*12*/].f_1 = 16;
	Global_36852[6 /*12*/].f_2 = 4;
	Global_36852[6 /*12*/].f_3 = 0;
	Global_36852[6 /*12*/].f_10 = 0;
	Global_36852[6 /*12*/].f_11 = 0;
	Global_36852[6 /*12*/].f_4 = 0;
	Global_36852[7 /*12*/] = 23;
	Global_36852[7 /*12*/].f_1 = 24;
	Global_36852[7 /*12*/].f_2 = 4;
	Global_36852[7 /*12*/].f_3 = 0;
	Global_36852[7 /*12*/].f_10 = 0;
	Global_36852[7 /*12*/].f_11 = 0;
	Global_36852[7 /*12*/].f_4 = 0;
	Global_36852[8 /*12*/] = 25;
	Global_36852[8 /*12*/].f_1 = 26;
	Global_36852[8 /*12*/].f_2 = 4;
	Global_36852[8 /*12*/].f_3 = 0;
	Global_36852[8 /*12*/].f_10 = 0;
	Global_36852[8 /*12*/].f_11 = 0;
	Global_36852[8 /*12*/].f_4 = 0;
	Global_36852[9 /*12*/] = 27;
	Global_36852[9 /*12*/].f_1 = 28;
	Global_36852[9 /*12*/].f_2 = 4;
	Global_36852[9 /*12*/].f_3 = 0;
	Global_36852[9 /*12*/].f_10 = 0;
	Global_36852[9 /*12*/].f_11 = 0;
	Global_36852[9 /*12*/].f_4 = 0;
	Global_36852[10 /*12*/] = 32;
	Global_36852[10 /*12*/].f_1 = 33;
	Global_36852[10 /*12*/].f_2 = 5;
	Global_36852[10 /*12*/].f_3 = 0;
	Global_36852[10 /*12*/].f_10 = 0;
	Global_36852[10 /*12*/].f_11 = 0;
	Global_36852[10 /*12*/].f_4 = 0;
	Global_36852[11 /*12*/] = 34;
	Global_36852[11 /*12*/].f_1 = 35;
	Global_36852[11 /*12*/].f_2 = 5;
	Global_36852[11 /*12*/].f_3 = 0;
	Global_36852[11 /*12*/].f_10 = 0;
	Global_36852[11 /*12*/].f_11 = 0;
	Global_36852[11 /*12*/].f_4 = 0;
	Global_36852[12 /*12*/] = 42;
	Global_36852[12 /*12*/].f_1 = 43;
	Global_36852[12 /*12*/].f_2 = 7;
	Global_36852[12 /*12*/].f_3 = 1;
	Global_36852[12 /*12*/].f_10 = 0;
	Global_36852[12 /*12*/].f_11 = 0;
	Global_36852[12 /*12*/].f_4 = 0;
	Global_36852[13 /*12*/] = 44;
	Global_36852[13 /*12*/].f_1 = 45;
	Global_36852[13 /*12*/].f_2 = 7;
	Global_36852[13 /*12*/].f_3 = 1;
	Global_36852[13 /*12*/].f_10 = 0;
	Global_36852[13 /*12*/].f_11 = 0;
	Global_36852[13 /*12*/].f_4 = 0;
	Global_36852[14 /*12*/] = 46;
	Global_36852[14 /*12*/].f_1 = 47;
	Global_36852[14 /*12*/].f_2 = 7;
	Global_36852[14 /*12*/].f_3 = 1;
	Global_36852[14 /*12*/].f_10 = 0;
	Global_36852[14 /*12*/].f_11 = 0;
	Global_36852[14 /*12*/].f_4 = 0;
	Global_36852[15 /*12*/] = 48;
	Global_36852[15 /*12*/].f_1 = 49;
	Global_36852[15 /*12*/].f_2 = 7;
	Global_36852[15 /*12*/].f_3 = 1;
	Global_36852[15 /*12*/].f_10 = 0;
	Global_36852[15 /*12*/].f_11 = 0;
	Global_36852[15 /*12*/].f_4 = 0;
	Global_36852[16 /*12*/] = 50;
	Global_36852[16 /*12*/].f_1 = 51;
	Global_36852[16 /*12*/].f_2 = 4;
	Global_36852[16 /*12*/].f_3 = 0;
	Global_36852[16 /*12*/].f_10 = 0;
	Global_36852[16 /*12*/].f_11 = 0;
	Global_36852[16 /*12*/].f_4 = 0;
	Global_36852[17 /*12*/] = 61;
	Global_36852[17 /*12*/].f_1 = 62;
	Global_36852[17 /*12*/].f_2 = 8;
	Global_36852[17 /*12*/].f_3 = 0;
	Global_36852[17 /*12*/].f_10 = 1;
	Global_36852[17 /*12*/].f_11 = 0;
	Global_36852[17 /*12*/].f_4 = 0;
	Global_36852[18 /*12*/] = 63;
	Global_36852[18 /*12*/].f_1 = 64;
	Global_36852[18 /*12*/].f_2 = 9;
	Global_36852[18 /*12*/].f_3 = 1;
	Global_36852[18 /*12*/].f_10 = 1;
	Global_36852[18 /*12*/].f_11 = 0;
	Global_36852[18 /*12*/].f_4 = 0;
	Global_36852[19 /*12*/] = 61;
	Global_36852[19 /*12*/].f_1 = 65;
	Global_36852[19 /*12*/].f_2 = 8;
	Global_36852[19 /*12*/].f_3 = 0;
	Global_36852[19 /*12*/].f_10 = 1;
	Global_36852[19 /*12*/].f_11 = 0;
	Global_36852[19 /*12*/].f_4 = 0;
	Global_36852[20 /*12*/] = 61;
	Global_36852[20 /*12*/].f_1 = 66;
	Global_36852[20 /*12*/].f_2 = 8;
	Global_36852[20 /*12*/].f_3 = 0;
	Global_36852[20 /*12*/].f_10 = 1;
	Global_36852[20 /*12*/].f_11 = 0;
	Global_36852[20 /*12*/].f_4 = 0;
	Global_36852[21 /*12*/] = 61;
	Global_36852[21 /*12*/].f_1 = 67;
	Global_36852[21 /*12*/].f_2 = 8;
	Global_36852[21 /*12*/].f_3 = 0;
	Global_36852[21 /*12*/].f_10 = 1;
	Global_36852[21 /*12*/].f_11 = 0;
	Global_36852[21 /*12*/].f_4 = 0;
	Global_36852[22 /*12*/] = 61;
	Global_36852[22 /*12*/].f_1 = 68;
	Global_36852[22 /*12*/].f_2 = 8;
	Global_36852[22 /*12*/].f_3 = 0;
	Global_36852[22 /*12*/].f_10 = 0;
	Global_36852[22 /*12*/].f_11 = 0;
	Global_36852[22 /*12*/].f_4 = 0;
	Global_36852[23 /*12*/] = 69;
	Global_36852[23 /*12*/].f_1 = 70;
	Global_36852[23 /*12*/].f_2 = 10;
	Global_36852[23 /*12*/].f_3 = 2;
	Global_36852[23 /*12*/].f_10 = 1;
	Global_36852[23 /*12*/].f_11 = 0;
	Global_36852[23 /*12*/].f_4 = 0;
	Global_36852[24 /*12*/] = 63;
	Global_36852[24 /*12*/].f_1 = 74;
	Global_36852[24 /*12*/].f_2 = 9;
	Global_36852[24 /*12*/].f_3 = 1;
	Global_36852[24 /*12*/].f_10 = 1;
	Global_36852[24 /*12*/].f_11 = 0;
	Global_36852[24 /*12*/].f_4 = 0;
	Global_36852[25 /*12*/] = 63;
	Global_36852[25 /*12*/].f_1 = 75;
	Global_36852[25 /*12*/].f_2 = 9;
	Global_36852[25 /*12*/].f_3 = 1;
	Global_36852[25 /*12*/].f_10 = 1;
	Global_36852[25 /*12*/].f_11 = 0;
	Global_36852[25 /*12*/].f_4 = 0;
	Global_36852[26 /*12*/] = 63;
	Global_36852[26 /*12*/].f_1 = 76;
	Global_36852[26 /*12*/].f_2 = 9;
	Global_36852[26 /*12*/].f_3 = 1;
	Global_36852[26 /*12*/].f_10 = 1;
	Global_36852[26 /*12*/].f_11 = 0;
	Global_36852[26 /*12*/].f_4 = 0;
	Global_36852[27 /*12*/] = 63;
	Global_36852[27 /*12*/].f_1 = 77;
	Global_36852[27 /*12*/].f_2 = 9;
	Global_36852[27 /*12*/].f_3 = 1;
	Global_36852[27 /*12*/].f_10 = 0;
	Global_36852[27 /*12*/].f_11 = 0;
	Global_36852[27 /*12*/].f_4 = 0;
	Global_36852[28 /*12*/] = 69;
	Global_36852[28 /*12*/].f_1 = 73;
	Global_36852[28 /*12*/].f_2 = 10;
	Global_36852[28 /*12*/].f_3 = 2;
	Global_36852[28 /*12*/].f_10 = 1;
	Global_36852[28 /*12*/].f_11 = 0;
	Global_36852[28 /*12*/].f_4 = 0;
	Global_36852[29 /*12*/] = 69;
	Global_36852[29 /*12*/].f_1 = 72;
	Global_36852[29 /*12*/].f_2 = 10;
	Global_36852[29 /*12*/].f_3 = 2;
	Global_36852[29 /*12*/].f_10 = 1;
	Global_36852[29 /*12*/].f_11 = 0;
	Global_36852[29 /*12*/].f_4 = 0;
	Global_36852[30 /*12*/] = 69;
	Global_36852[30 /*12*/].f_1 = 71;
	Global_36852[30 /*12*/].f_2 = 10;
	Global_36852[30 /*12*/].f_3 = 2;
	Global_36852[30 /*12*/].f_10 = 0;
	Global_36852[30 /*12*/].f_11 = 0;
	Global_36852[30 /*12*/].f_4 = 0;
	Global_36852[31 /*12*/] = 90;
	Global_36852[31 /*12*/].f_1 = 91;
	Global_36852[31 /*12*/].f_2 = 11;
	Global_36852[31 /*12*/].f_3 = 1;
	Global_36852[31 /*12*/].f_10 = 0;
	Global_36852[31 /*12*/].f_11 = 0;
	Global_36852[31 /*12*/].f_4 = 0;
	Global_36852[32 /*12*/] = 90;
	Global_36852[32 /*12*/].f_1 = 92;
	Global_36852[32 /*12*/].f_2 = 11;
	Global_36852[32 /*12*/].f_3 = 0;
	Global_36852[32 /*12*/].f_10 = 0;
	Global_36852[32 /*12*/].f_11 = 0;
	Global_36852[32 /*12*/].f_4 = 0;
	Global_36852[33 /*12*/] = 90;
	Global_36852[33 /*12*/].f_1 = 93;
	Global_36852[33 /*12*/].f_2 = 11;
	Global_36852[33 /*12*/].f_3 = 2;
	Global_36852[33 /*12*/].f_10 = 0;
	Global_36852[33 /*12*/].f_11 = 0;
	Global_36852[33 /*12*/].f_4 = 0;
	Global_36852[34 /*12*/] = 94;
	Global_36852[34 /*12*/].f_1 = 95;
	Global_36852[34 /*12*/].f_2 = 13;
	Global_36852[34 /*12*/].f_3 = 0;
	Global_36852[34 /*12*/].f_10 = 0;
	Global_36852[34 /*12*/].f_11 = 0;
	Global_36852[34 /*12*/].f_4 = 0;
	Global_36852[35 /*12*/] = 94;
	Global_36852[35 /*12*/].f_1 = 96;
	Global_36852[35 /*12*/].f_2 = 13;
	Global_36852[35 /*12*/].f_3 = 1;
	Global_36852[35 /*12*/].f_10 = 0;
	Global_36852[35 /*12*/].f_11 = 0;
	Global_36852[35 /*12*/].f_4 = 0;
	Global_36852[36 /*12*/] = 94;
	Global_36852[36 /*12*/].f_1 = 97;
	Global_36852[36 /*12*/].f_2 = 13;
	Global_36852[36 /*12*/].f_3 = 2;
	Global_36852[36 /*12*/].f_10 = 0;
	Global_36852[36 /*12*/].f_11 = 0;
	Global_36852[36 /*12*/].f_4 = 0;
	Global_36852[37 /*12*/] = 94;
	Global_36852[37 /*12*/].f_1 = 98;
	Global_36852[37 /*12*/].f_2 = 14;
	Global_36852[37 /*12*/].f_3 = 0;
	Global_36852[37 /*12*/].f_10 = 0;
	Global_36852[37 /*12*/].f_11 = 0;
	Global_36852[37 /*12*/].f_4 = 0;
	Global_36852[38 /*12*/] = 94;
	Global_36852[38 /*12*/].f_1 = 99;
	Global_36852[38 /*12*/].f_2 = 14;
	Global_36852[38 /*12*/].f_3 = 1;
	Global_36852[38 /*12*/].f_10 = 0;
	Global_36852[38 /*12*/].f_11 = 0;
	Global_36852[38 /*12*/].f_4 = 0;
	Global_36852[39 /*12*/] = 94;
	Global_36852[39 /*12*/].f_1 = 100;
	Global_36852[39 /*12*/].f_2 = 14;
	Global_36852[39 /*12*/].f_3 = 2;
	Global_36852[39 /*12*/].f_10 = 0;
	Global_36852[39 /*12*/].f_11 = 0;
	Global_36852[39 /*12*/].f_4 = 0;
	Global_36852[40 /*12*/] = 94;
	Global_36852[40 /*12*/].f_1 = 101;
	Global_36852[40 /*12*/].f_2 = 12;
	Global_36852[40 /*12*/].f_3 = 0;
	Global_36852[40 /*12*/].f_10 = 0;
	Global_36852[40 /*12*/].f_11 = 0;
	Global_36852[40 /*12*/].f_4 = 0;
	Global_36852[41 /*12*/] = 94;
	Global_36852[41 /*12*/].f_1 = 102;
	Global_36852[41 /*12*/].f_2 = 12;
	Global_36852[41 /*12*/].f_3 = 1;
	Global_36852[41 /*12*/].f_10 = 0;
	Global_36852[41 /*12*/].f_11 = 0;
	Global_36852[41 /*12*/].f_4 = 0;
	Global_36852[42 /*12*/] = 94;
	Global_36852[42 /*12*/].f_1 = 103;
	Global_36852[42 /*12*/].f_2 = 12;
	Global_36852[42 /*12*/].f_3 = 2;
	Global_36852[42 /*12*/].f_10 = 0;
	Global_36852[42 /*12*/].f_11 = 0;
	Global_36852[42 /*12*/].f_4 = 0;
	Global_36852[43 /*12*/] = 104;
	Global_36852[43 /*12*/].f_1 = 105;
	Global_36852[43 /*12*/].f_2 = 7;
	Global_36852[43 /*12*/].f_3 = 0;
	Global_36852[43 /*12*/].f_10 = 1;
	Global_36852[43 /*12*/].f_11 = 0;
	Global_36852[43 /*12*/].f_4 = 0;
	Global_36852[44 /*12*/] = 108;
	Global_36852[44 /*12*/].f_1 = 109;
	Global_36852[44 /*12*/].f_2 = 15;
	Global_36852[44 /*12*/].f_3 = 0;
	Global_36852[44 /*12*/].f_10 = 1;
	Global_36852[44 /*12*/].f_11 = 0;
	Global_36852[44 /*12*/].f_4 = 0;
	Global_36852[45 /*12*/] = 110;
	Global_36852[45 /*12*/].f_1 = 111;
	Global_36852[45 /*12*/].f_2 = 15;
	Global_36852[45 /*12*/].f_3 = 0;
	Global_36852[45 /*12*/].f_10 = 1;
	Global_36852[45 /*12*/].f_11 = 0;
	Global_36852[45 /*12*/].f_4 = 0;
	Global_36852[46 /*12*/] = 112;
	Global_36852[46 /*12*/].f_1 = 113;
	Global_36852[46 /*12*/].f_2 = 15;
	Global_36852[46 /*12*/].f_3 = 0;
	Global_36852[46 /*12*/].f_10 = 1;
	Global_36852[46 /*12*/].f_11 = 0;
	Global_36852[46 /*12*/].f_4 = 0;
	Global_36852[47 /*12*/] = 117;
	Global_36852[47 /*12*/].f_1 = 118;
	Global_36852[47 /*12*/].f_2 = 16;
	Global_36852[47 /*12*/].f_3 = 0;
	Global_36852[47 /*12*/].f_10 = 1;
	Global_36852[47 /*12*/].f_11 = 0;
	Global_36852[47 /*12*/].f_4 = 0;
	Global_36852[48 /*12*/] = 119;
	Global_36852[48 /*12*/].f_1 = 120;
	Global_36852[48 /*12*/].f_2 = 16;
	Global_36852[48 /*12*/].f_3 = 0;
	Global_36852[48 /*12*/].f_10 = 1;
	Global_36852[48 /*12*/].f_11 = 0;
	Global_36852[48 /*12*/].f_4 = 0;
	Global_36852[49 /*12*/] = 131;
	Global_36852[49 /*12*/].f_1 = 132;
	Global_36852[49 /*12*/].f_2 = 16;
	Global_36852[49 /*12*/].f_3 = 0;
	Global_36852[49 /*12*/].f_10 = 1;
	Global_36852[49 /*12*/].f_11 = 0;
	Global_36852[49 /*12*/].f_4 = 0;
	Global_36852[50 /*12*/] = 129;
	Global_36852[50 /*12*/].f_1 = 130;
	Global_36852[50 /*12*/].f_2 = 16;
	Global_36852[50 /*12*/].f_3 = 0;
	Global_36852[50 /*12*/].f_10 = 0;
	Global_36852[50 /*12*/].f_11 = 0;
	Global_36852[50 /*12*/].f_4 = 0;
	Global_36852[51 /*12*/] = 127;
	Global_36852[51 /*12*/].f_1 = 128;
	Global_36852[51 /*12*/].f_2 = 16;
	Global_36852[51 /*12*/].f_3 = 0;
	Global_36852[51 /*12*/].f_10 = 1;
	Global_36852[51 /*12*/].f_11 = 0;
	Global_36852[51 /*12*/].f_4 = 0;
	Global_36852[52 /*12*/] = 125;
	Global_36852[52 /*12*/].f_1 = 126;
	Global_36852[52 /*12*/].f_2 = 16;
	Global_36852[52 /*12*/].f_3 = 0;
	Global_36852[52 /*12*/].f_10 = 1;
	Global_36852[52 /*12*/].f_11 = 0;
	Global_36852[52 /*12*/].f_4 = 0;
	Global_36852[53 /*12*/] = 123;
	Global_36852[53 /*12*/].f_1 = 124;
	Global_36852[53 /*12*/].f_2 = 16;
	Global_36852[53 /*12*/].f_3 = 0;
	Global_36852[53 /*12*/].f_10 = 1;
	Global_36852[53 /*12*/].f_11 = 0;
	Global_36852[53 /*12*/].f_4 = 0;
	Global_36852[54 /*12*/] = 121;
	Global_36852[54 /*12*/].f_1 = 122;
	Global_36852[54 /*12*/].f_2 = 16;
	Global_36852[54 /*12*/].f_3 = 0;
	Global_36852[54 /*12*/].f_10 = 1;
	Global_36852[54 /*12*/].f_11 = 0;
	Global_36852[54 /*12*/].f_4 = 0;
	Global_36852[55 /*12*/] = 133;
	Global_36852[55 /*12*/].f_1 = 134;
	Global_36852[55 /*12*/].f_2 = 12;
	Global_36852[55 /*12*/].f_3 = 0;
	Global_36852[55 /*12*/].f_10 = 0;
	Global_36852[55 /*12*/].f_11 = 0;
	Global_36852[55 /*12*/].f_4 = 0;
	Global_36852[56 /*12*/] = 135;
	Global_36852[56 /*12*/].f_1 = 136;
	Global_36852[56 /*12*/].f_2 = 14;
	Global_36852[56 /*12*/].f_3 = 0;
	Global_36852[56 /*12*/].f_10 = 0;
	Global_36852[56 /*12*/].f_11 = 0;
	Global_36852[56 /*12*/].f_4 = 0;
	Global_36852[57 /*12*/] = 137;
	Global_36852[57 /*12*/].f_1 = 138;
	Global_36852[57 /*12*/].f_2 = 12;
	Global_36852[57 /*12*/].f_3 = 0;
	Global_36852[57 /*12*/].f_10 = 0;
	Global_36852[57 /*12*/].f_11 = 0;
	Global_36852[57 /*12*/].f_4 = 0;
	Global_36852[58 /*12*/] = 133;
	Global_36852[58 /*12*/].f_1 = 139;
	Global_36852[58 /*12*/].f_2 = 12;
	Global_36852[58 /*12*/].f_3 = 1;
	Global_36852[58 /*12*/].f_10 = 0;
	Global_36852[58 /*12*/].f_11 = 0;
	Global_36852[58 /*12*/].f_4 = 0;
	Global_36852[59 /*12*/] = 133;
	Global_36852[59 /*12*/].f_1 = 140;
	Global_36852[59 /*12*/].f_2 = 12;
	Global_36852[59 /*12*/].f_3 = 2;
	Global_36852[59 /*12*/].f_10 = 0;
	Global_36852[59 /*12*/].f_11 = 0;
	Global_36852[59 /*12*/].f_4 = 0;
	Global_36852[60 /*12*/] = 135;
	Global_36852[60 /*12*/].f_1 = 136;
	Global_36852[60 /*12*/].f_2 = 14;
	Global_36852[60 /*12*/].f_3 = 1;
	Global_36852[60 /*12*/].f_10 = 0;
	Global_36852[60 /*12*/].f_11 = 0;
	Global_36852[60 /*12*/].f_4 = 0;
	Global_36852[61 /*12*/] = 135;
	Global_36852[61 /*12*/].f_1 = 136;
	Global_36852[61 /*12*/].f_2 = 14;
	Global_36852[61 /*12*/].f_3 = 2;
	Global_36852[61 /*12*/].f_10 = 0;
	Global_36852[61 /*12*/].f_11 = 0;
	Global_36852[61 /*12*/].f_4 = 0;
	Global_36852[62 /*12*/] = 137;
	Global_36852[62 /*12*/].f_1 = 141;
	Global_36852[62 /*12*/].f_2 = 12;
	Global_36852[62 /*12*/].f_3 = 1;
	Global_36852[62 /*12*/].f_10 = 0;
	Global_36852[62 /*12*/].f_11 = 0;
	Global_36852[62 /*12*/].f_4 = 0;
	Global_36852[63 /*12*/] = 137;
	Global_36852[63 /*12*/].f_1 = 138;
	Global_36852[63 /*12*/].f_2 = 12;
	Global_36852[63 /*12*/].f_3 = 2;
	Global_36852[63 /*12*/].f_10 = 0;
	Global_36852[63 /*12*/].f_11 = 0;
	Global_36852[63 /*12*/].f_4 = 0;
	Global_36852[64 /*12*/] = 148;
	Global_36852[64 /*12*/].f_1 = 149;
	Global_36852[64 /*12*/].f_2 = 7;
	Global_36852[64 /*12*/].f_3 = 0;
	Global_36852[64 /*12*/].f_10 = 0;
	Global_36852[64 /*12*/].f_11 = 0;
	Global_36852[64 /*12*/].f_4 = 0;
	Global_36852[65 /*12*/] = 148;
	Global_36852[65 /*12*/].f_1 = 151;
	Global_36852[65 /*12*/].f_2 = 7;
	Global_36852[65 /*12*/].f_3 = 0;
	Global_36852[65 /*12*/].f_10 = 0;
	Global_36852[65 /*12*/].f_11 = 0;
	Global_36852[65 /*12*/].f_4 = 0;
	Global_36852[66 /*12*/] = 148;
	Global_36852[66 /*12*/].f_1 = 150;
	Global_36852[66 /*12*/].f_2 = 7;
	Global_36852[66 /*12*/].f_3 = 0;
	Global_36852[66 /*12*/].f_10 = 0;
	Global_36852[66 /*12*/].f_11 = 0;
	Global_36852[66 /*12*/].f_4 = 0;
	Global_36852[67 /*12*/] = 155;
	Global_36852[67 /*12*/].f_1 = 156;
	Global_36852[67 /*12*/].f_2 = 63;
	Global_36852[67 /*12*/].f_3 = 2;
	Global_36852[67 /*12*/].f_10 = 0;
	Global_36852[67 /*12*/].f_11 = 0;
	Global_36852[67 /*12*/].f_4 = 0;
	Global_36852[68 /*12*/] = 125;
	Global_36852[68 /*12*/].f_1 = 160;
	Global_36852[68 /*12*/].f_2 = 16;
	Global_36852[68 /*12*/].f_3 = 0;
	Global_36852[68 /*12*/].f_10 = 1;
	Global_36852[68 /*12*/].f_11 = 0;
	Global_36852[68 /*12*/].f_4 = 0;
	Global_36852[69 /*12*/] = 161;
	Global_36852[69 /*12*/].f_1 = 162;
	Global_36852[69 /*12*/].f_2 = 64;
	Global_36852[69 /*12*/].f_3 = 2;
	Global_36852[69 /*12*/].f_10 = 0;
	Global_36852[69 /*12*/].f_11 = 0;
	Global_36852[69 /*12*/].f_4 = 0;
	Global_36852[70 /*12*/] = 161;
	Global_36852[70 /*12*/].f_1 = 162;
	Global_36852[70 /*12*/].f_2 = 64;
	Global_36852[70 /*12*/].f_3 = 1;
	Global_36852[70 /*12*/].f_10 = 0;
	Global_36852[70 /*12*/].f_11 = 0;
	Global_36852[70 /*12*/].f_4 = 0;
	Global_36852[71 /*12*/] = 161;
	Global_36852[71 /*12*/].f_1 = 162;
	Global_36852[71 /*12*/].f_2 = 64;
	Global_36852[71 /*12*/].f_3 = 2;
	Global_36852[71 /*12*/].f_10 = 0;
	Global_36852[71 /*12*/].f_11 = 0;
	Global_36852[71 /*12*/].f_4 = 0;
	Global_36852[72 /*12*/] = 166;
	Global_36852[72 /*12*/].f_1 = 16;
	Global_36852[72 /*12*/].f_2 = 21;
	Global_36852[72 /*12*/].f_3 = 0;
	Global_36852[72 /*12*/].f_10 = 0;
	Global_36852[72 /*12*/].f_11 = 0;
	Global_36852[72 /*12*/].f_4 = 0;
	Global_36852[73 /*12*/] = 166;
	Global_36852[73 /*12*/].f_1 = 16;
	Global_36852[73 /*12*/].f_2 = 21;
	Global_36852[73 /*12*/].f_3 = 1;
	Global_36852[73 /*12*/].f_10 = 0;
	Global_36852[73 /*12*/].f_11 = 0;
	Global_36852[73 /*12*/].f_4 = 0;
	Global_36852[74 /*12*/] = 166;
	Global_36852[74 /*12*/].f_1 = 16;
	Global_36852[74 /*12*/].f_2 = 21;
	Global_36852[74 /*12*/].f_3 = 2;
	Global_36852[74 /*12*/].f_10 = 0;
	Global_36852[74 /*12*/].f_11 = 0;
	Global_36852[74 /*12*/].f_4 = 0;
	Global_36852[75 /*12*/] = 167;
	Global_36852[75 /*12*/].f_1 = 16;
	Global_36852[75 /*12*/].f_2 = 6;
	Global_36852[75 /*12*/].f_3 = 2;
	Global_36852[75 /*12*/].f_10 = 0;
	Global_36852[75 /*12*/].f_11 = 0;
	Global_36852[75 /*12*/].f_4 = 0;
	Global_36852[76 /*12*/] = 168;
	Global_36852[76 /*12*/].f_1 = 16;
	Global_36852[76 /*12*/].f_2 = 6;
	Global_36852[76 /*12*/].f_3 = 2;
	Global_36852[76 /*12*/].f_10 = 0;
	Global_36852[76 /*12*/].f_11 = 0;
	Global_36852[76 /*12*/].f_4 = 0;
	Global_36852[77 /*12*/] = 169;
	Global_36852[77 /*12*/].f_1 = 16;
	Global_36852[77 /*12*/].f_2 = 6;
	Global_36852[77 /*12*/].f_3 = 2;
	Global_36852[77 /*12*/].f_10 = 0;
	Global_36852[77 /*12*/].f_11 = 0;
	Global_36852[77 /*12*/].f_4 = 0;
	Global_36852[78 /*12*/] = 170;
	Global_36852[78 /*12*/].f_1 = 16;
	Global_36852[78 /*12*/].f_2 = 6;
	Global_36852[78 /*12*/].f_3 = 2;
	Global_36852[78 /*12*/].f_10 = 0;
	Global_36852[78 /*12*/].f_11 = 0;
	Global_36852[78 /*12*/].f_4 = 0;
	Global_36852[79 /*12*/] = 171;
	Global_36852[79 /*12*/].f_1 = 16;
	Global_36852[79 /*12*/].f_2 = 6;
	Global_36852[79 /*12*/].f_3 = 2;
	Global_36852[79 /*12*/].f_10 = 0;
	Global_36852[79 /*12*/].f_11 = 0;
	Global_36852[79 /*12*/].f_4 = 0;
	Global_36852[80 /*12*/] = 172;
	Global_36852[80 /*12*/].f_1 = 173;
	Global_36852[80 /*12*/].f_2 = 6;
	Global_36852[80 /*12*/].f_3 = 2;
	Global_36852[80 /*12*/].f_10 = 0;
	Global_36852[80 /*12*/].f_11 = 0;
	Global_36852[80 /*12*/].f_4 = 0;
	Global_36852[81 /*12*/] = 174;
	Global_36852[81 /*12*/].f_1 = 175;
	Global_36852[81 /*12*/].f_2 = 6;
	Global_36852[81 /*12*/].f_3 = 2;
	Global_36852[81 /*12*/].f_10 = 0;
	Global_36852[81 /*12*/].f_11 = 0;
	Global_36852[81 /*12*/].f_4 = 0;
	Global_36852[82 /*12*/] = 176;
	Global_36852[82 /*12*/].f_1 = 177;
	Global_36852[82 /*12*/].f_2 = 6;
	Global_36852[82 /*12*/].f_3 = 2;
	Global_36852[82 /*12*/].f_10 = 0;
	Global_36852[82 /*12*/].f_11 = 0;
	Global_36852[82 /*12*/].f_4 = 0;
	Global_36852[83 /*12*/] = 178;
	Global_36852[83 /*12*/].f_1 = 179;
	Global_36852[83 /*12*/].f_2 = 6;
	Global_36852[83 /*12*/].f_3 = 2;
	Global_36852[83 /*12*/].f_10 = 0;
	Global_36852[83 /*12*/].f_11 = 0;
	Global_36852[83 /*12*/].f_4 = 0;
	Global_36852[84 /*12*/] = 180;
	Global_36852[84 /*12*/].f_1 = 181;
	Global_36852[84 /*12*/].f_2 = 4;
	Global_36852[84 /*12*/].f_3 = 0;
	Global_36852[84 /*12*/].f_10 = 0;
	Global_36852[84 /*12*/].f_11 = 3000;
	Global_36852[84 /*12*/].f_4 = 0;
	Global_36852[85 /*12*/] = 185;
	Global_36852[85 /*12*/].f_1 = 186;
	Global_36852[85 /*12*/].f_2 = 22;
	Global_36852[85 /*12*/].f_3 = 0;
	Global_36852[85 /*12*/].f_10 = 0;
	Global_36852[85 /*12*/].f_11 = 0;
	Global_36852[85 /*12*/].f_4 = 0;
	Global_36852[86 /*12*/] = 193;
	Global_36852[86 /*12*/].f_1 = 194;
	Global_36852[86 /*12*/].f_2 = 24;
	Global_36852[86 /*12*/].f_3 = 0;
	Global_36852[86 /*12*/].f_10 = 1;
	Global_36852[86 /*12*/].f_11 = 0;
	Global_36852[86 /*12*/].f_4 = 1;
	Global_36852[86 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[86 /*12*/].f_5[0 /*4*/].f_1 = 87;
	Global_36852[86 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[86 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[87 /*12*/] = 195;
	Global_36852[87 /*12*/].f_1 = 196;
	Global_36852[87 /*12*/].f_2 = 0;
	Global_36852[87 /*12*/].f_3 = 24;
	Global_36852[87 /*12*/].f_10 = 0;
	Global_36852[87 /*12*/].f_11 = 0;
	Global_36852[87 /*12*/].f_4 = 1;
	Global_36852[87 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[87 /*12*/].f_5[0 /*4*/].f_1 = 88;
	Global_36852[87 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[87 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[88 /*12*/] = 197;
	Global_36852[88 /*12*/].f_1 = 198;
	Global_36852[88 /*12*/].f_2 = 24;
	Global_36852[88 /*12*/].f_3 = 0;
	Global_36852[88 /*12*/].f_10 = 0;
	Global_36852[88 /*12*/].f_11 = 120000;
	Global_36852[88 /*12*/].f_4 = 0;
	Global_36852[89 /*12*/] = 200;
	Global_36852[89 /*12*/].f_1 = 201;
	Global_36852[89 /*12*/].f_2 = 24;
	Global_36852[89 /*12*/].f_3 = 0;
	Global_36852[89 /*12*/].f_10 = 1;
	Global_36852[89 /*12*/].f_11 = 0;
	Global_36852[89 /*12*/].f_4 = 1;
	Global_36852[89 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[89 /*12*/].f_5[0 /*4*/].f_1 = 90;
	Global_36852[89 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[89 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[90 /*12*/] = 202;
	Global_36852[90 /*12*/].f_1 = 203;
	Global_36852[90 /*12*/].f_2 = 0;
	Global_36852[90 /*12*/].f_3 = 24;
	Global_36852[90 /*12*/].f_10 = 0;
	Global_36852[90 /*12*/].f_11 = 0;
	Global_36852[90 /*12*/].f_4 = 1;
	Global_36852[90 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[90 /*12*/].f_5[0 /*4*/].f_1 = 91;
	Global_36852[90 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[90 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[91 /*12*/] = 204;
	Global_36852[91 /*12*/].f_1 = 205;
	Global_36852[91 /*12*/].f_2 = 24;
	Global_36852[91 /*12*/].f_3 = 0;
	Global_36852[91 /*12*/].f_10 = 0;
	Global_36852[91 /*12*/].f_11 = 120000;
	Global_36852[91 /*12*/].f_4 = 0;
	Global_36852[92 /*12*/] = 209;
	Global_36852[92 /*12*/].f_1 = 210;
	Global_36852[92 /*12*/].f_2 = 25;
	Global_36852[92 /*12*/].f_3 = 0;
	Global_36852[92 /*12*/].f_10 = 1;
	Global_36852[92 /*12*/].f_11 = 0;
	Global_36852[92 /*12*/].f_4 = 1;
	Global_36852[92 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[92 /*12*/].f_5[0 /*4*/].f_1 = 93;
	Global_36852[92 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[92 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[93 /*12*/] = 211;
	Global_36852[93 /*12*/].f_1 = 212;
	Global_36852[93 /*12*/].f_2 = 0;
	Global_36852[93 /*12*/].f_3 = 25;
	Global_36852[93 /*12*/].f_10 = 0;
	Global_36852[93 /*12*/].f_11 = 0;
	Global_36852[93 /*12*/].f_4 = 1;
	Global_36852[93 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[93 /*12*/].f_5[0 /*4*/].f_1 = 94;
	Global_36852[93 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[93 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[94 /*12*/] = 213;
	Global_36852[94 /*12*/].f_1 = 214;
	Global_36852[94 /*12*/].f_2 = 25;
	Global_36852[94 /*12*/].f_3 = 0;
	Global_36852[94 /*12*/].f_10 = 1;
	Global_36852[94 /*12*/].f_11 = 60000;
	Global_36852[94 /*12*/].f_4 = 1;
	Global_36852[94 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[94 /*12*/].f_5[0 /*4*/].f_1 = 95;
	Global_36852[94 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[94 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[95 /*12*/] = 215;
	Global_36852[95 /*12*/].f_1 = 216;
	Global_36852[95 /*12*/].f_2 = 0;
	Global_36852[95 /*12*/].f_3 = 25;
	Global_36852[95 /*12*/].f_10 = 0;
	Global_36852[95 /*12*/].f_11 = 0;
	Global_36852[95 /*12*/].f_4 = 1;
	Global_36852[95 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[95 /*12*/].f_5[0 /*4*/].f_1 = 96;
	Global_36852[95 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[95 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[96 /*12*/] = 217;
	Global_36852[96 /*12*/].f_1 = 218;
	Global_36852[96 /*12*/].f_2 = 25;
	Global_36852[96 /*12*/].f_3 = 0;
	Global_36852[96 /*12*/].f_10 = 0;
	Global_36852[96 /*12*/].f_11 = 60000;
	Global_36852[96 /*12*/].f_4 = 0;
	Global_36852[97 /*12*/] = 222;
	Global_36852[97 /*12*/].f_1 = 223;
	Global_36852[97 /*12*/].f_2 = 26;
	Global_36852[97 /*12*/].f_3 = 0;
	Global_36852[97 /*12*/].f_10 = 1;
	Global_36852[97 /*12*/].f_11 = 0;
	Global_36852[97 /*12*/].f_4 = 1;
	Global_36852[97 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[97 /*12*/].f_5[0 /*4*/].f_1 = 98;
	Global_36852[97 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[97 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[98 /*12*/] = 224;
	Global_36852[98 /*12*/].f_1 = 225;
	Global_36852[98 /*12*/].f_2 = 0;
	Global_36852[98 /*12*/].f_3 = 26;
	Global_36852[98 /*12*/].f_10 = 0;
	Global_36852[98 /*12*/].f_11 = 0;
	Global_36852[98 /*12*/].f_4 = 0;
	Global_36852[99 /*12*/] = 229;
	Global_36852[99 /*12*/].f_1 = 230;
	Global_36852[99 /*12*/].f_2 = 27;
	Global_36852[99 /*12*/].f_3 = 0;
	Global_36852[99 /*12*/].f_10 = 1;
	Global_36852[99 /*12*/].f_11 = 0;
	Global_36852[99 /*12*/].f_4 = 1;
	Global_36852[99 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[99 /*12*/].f_5[0 /*4*/].f_1 = 100;
	Global_36852[99 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[99 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[100 /*12*/] = 231;
	Global_36852[100 /*12*/].f_1 = 232;
	Global_36852[100 /*12*/].f_2 = 0;
	Global_36852[100 /*12*/].f_3 = 27;
	Global_36852[100 /*12*/].f_10 = 0;
	Global_36852[100 /*12*/].f_11 = 0;
	Global_36852[100 /*12*/].f_4 = 0;
	Global_36852[101 /*12*/] = 236;
	Global_36852[101 /*12*/].f_1 = 237;
	Global_36852[101 /*12*/].f_2 = 28;
	Global_36852[101 /*12*/].f_3 = 0;
	Global_36852[101 /*12*/].f_10 = 0;
	Global_36852[101 /*12*/].f_11 = 0;
	Global_36852[101 /*12*/].f_4 = 0;
	Global_36852[102 /*12*/] = 238;
	Global_36852[102 /*12*/].f_1 = 239;
	Global_36852[102 /*12*/].f_2 = 26;
	Global_36852[102 /*12*/].f_3 = 0;
	Global_36852[102 /*12*/].f_10 = 1;
	Global_36852[102 /*12*/].f_11 = 0;
	Global_36852[102 /*12*/].f_4 = 1;
	Global_36852[102 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[102 /*12*/].f_5[0 /*4*/].f_1 = 103;
	Global_36852[102 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[102 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[103 /*12*/] = 240;
	Global_36852[103 /*12*/].f_1 = 241;
	Global_36852[103 /*12*/].f_2 = 0;
	Global_36852[103 /*12*/].f_3 = 26;
	Global_36852[103 /*12*/].f_10 = 0;
	Global_36852[103 /*12*/].f_11 = 0;
	Global_36852[103 /*12*/].f_4 = 0;
	Global_36852[104 /*12*/] = 245;
	Global_36852[104 /*12*/].f_1 = 246;
	Global_36852[104 /*12*/].f_2 = 29;
	Global_36852[104 /*12*/].f_3 = 0;
	Global_36852[104 /*12*/].f_10 = 1;
	Global_36852[104 /*12*/].f_11 = 0;
	Global_36852[104 /*12*/].f_4 = 1;
	Global_36852[104 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[104 /*12*/].f_5[0 /*4*/].f_1 = 105;
	Global_36852[104 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[104 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[105 /*12*/] = 247;
	Global_36852[105 /*12*/].f_1 = 248;
	Global_36852[105 /*12*/].f_2 = 0;
	Global_36852[105 /*12*/].f_3 = 29;
	Global_36852[105 /*12*/].f_10 = 0;
	Global_36852[105 /*12*/].f_11 = 0;
	Global_36852[105 /*12*/].f_4 = 0;
	Global_36852[106 /*12*/] = 252;
	Global_36852[106 /*12*/].f_1 = 253;
	Global_36852[106 /*12*/].f_2 = 30;
	Global_36852[106 /*12*/].f_3 = 1;
	Global_36852[106 /*12*/].f_10 = 1;
	Global_36852[106 /*12*/].f_11 = 120000;
	Global_36852[106 /*12*/].f_4 = 1;
	Global_36852[106 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[106 /*12*/].f_5[0 /*4*/].f_1 = 107;
	Global_36852[106 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[106 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[107 /*12*/] = 254;
	Global_36852[107 /*12*/].f_1 = 255;
	Global_36852[107 /*12*/].f_2 = 1;
	Global_36852[107 /*12*/].f_3 = 30;
	Global_36852[107 /*12*/].f_10 = 0;
	Global_36852[107 /*12*/].f_11 = 0;
	Global_36852[107 /*12*/].f_4 = 1;
	Global_36852[107 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[107 /*12*/].f_5[0 /*4*/].f_1 = 108;
	Global_36852[107 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[107 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[108 /*12*/] = 256;
	Global_36852[108 /*12*/].f_1 = 257;
	Global_36852[108 /*12*/].f_2 = 30;
	Global_36852[108 /*12*/].f_3 = 1;
	Global_36852[108 /*12*/].f_10 = 1;
	Global_36852[108 /*12*/].f_11 = 120000;
	Global_36852[108 /*12*/].f_4 = 1;
	Global_36852[108 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[108 /*12*/].f_5[0 /*4*/].f_1 = 109;
	Global_36852[108 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[108 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[109 /*12*/] = 258;
	Global_36852[109 /*12*/].f_1 = 259;
	Global_36852[109 /*12*/].f_2 = 1;
	Global_36852[109 /*12*/].f_3 = 30;
	Global_36852[109 /*12*/].f_10 = 0;
	Global_36852[109 /*12*/].f_11 = 0;
	Global_36852[109 /*12*/].f_4 = 1;
	Global_36852[109 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[109 /*12*/].f_5[0 /*4*/].f_1 = 110;
	Global_36852[109 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[109 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[110 /*12*/] = 260;
	Global_36852[110 /*12*/].f_1 = 261;
	Global_36852[110 /*12*/].f_2 = 30;
	Global_36852[110 /*12*/].f_3 = 1;
	Global_36852[110 /*12*/].f_10 = 0;
	Global_36852[110 /*12*/].f_11 = 60000;
	Global_36852[110 /*12*/].f_4 = 0;
	Global_36852[111 /*12*/] = 265;
	Global_36852[111 /*12*/].f_1 = 266;
	Global_36852[111 /*12*/].f_2 = 31;
	Global_36852[111 /*12*/].f_3 = 1;
	Global_36852[111 /*12*/].f_10 = 1;
	Global_36852[111 /*12*/].f_11 = 0;
	Global_36852[111 /*12*/].f_4 = 1;
	Global_36852[111 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[111 /*12*/].f_5[0 /*4*/].f_1 = 112;
	Global_36852[111 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[111 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[112 /*12*/] = 267;
	Global_36852[112 /*12*/].f_1 = 268;
	Global_36852[112 /*12*/].f_2 = 1;
	Global_36852[112 /*12*/].f_3 = 31;
	Global_36852[112 /*12*/].f_10 = 0;
	Global_36852[112 /*12*/].f_11 = 0;
	Global_36852[112 /*12*/].f_4 = 0;
	Global_36852[113 /*12*/] = 272;
	Global_36852[113 /*12*/].f_1 = 273;
	Global_36852[113 /*12*/].f_2 = 32;
	Global_36852[113 /*12*/].f_3 = 1;
	Global_36852[113 /*12*/].f_10 = 1;
	Global_36852[113 /*12*/].f_11 = 0;
	Global_36852[113 /*12*/].f_4 = 1;
	Global_36852[113 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[113 /*12*/].f_5[0 /*4*/].f_1 = 114;
	Global_36852[113 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[113 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[114 /*12*/] = 274;
	Global_36852[114 /*12*/].f_1 = 275;
	Global_36852[114 /*12*/].f_2 = 1;
	Global_36852[114 /*12*/].f_3 = 32;
	Global_36852[114 /*12*/].f_10 = 0;
	Global_36852[114 /*12*/].f_11 = 0;
	Global_36852[114 /*12*/].f_4 = 1;
	Global_36852[114 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[114 /*12*/].f_5[0 /*4*/].f_1 = 115;
	Global_36852[114 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[114 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[115 /*12*/] = 276;
	Global_36852[115 /*12*/].f_1 = 277;
	Global_36852[115 /*12*/].f_2 = 32;
	Global_36852[115 /*12*/].f_3 = 1;
	Global_36852[115 /*12*/].f_10 = 0;
	Global_36852[115 /*12*/].f_11 = 30000;
	Global_36852[115 /*12*/].f_4 = 0;
	Global_36852[116 /*12*/] = 278;
	Global_36852[116 /*12*/].f_1 = 279;
	Global_36852[116 /*12*/].f_2 = 32;
	Global_36852[116 /*12*/].f_3 = 1;
	Global_36852[116 /*12*/].f_10 = 1;
	Global_36852[116 /*12*/].f_11 = 0;
	Global_36852[116 /*12*/].f_4 = 1;
	Global_36852[116 /*12*/].f_5[0 /*4*/] = 282;
	Global_36852[116 /*12*/].f_5[0 /*4*/].f_1 = 117;
	Global_36852[116 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[116 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[117 /*12*/] = 280;
	Global_36852[117 /*12*/].f_1 = 281;
	Global_36852[117 /*12*/].f_2 = 1;
	Global_36852[117 /*12*/].f_3 = 32;
	Global_36852[117 /*12*/].f_10 = 0;
	Global_36852[117 /*12*/].f_11 = 0;
	Global_36852[117 /*12*/].f_4 = 0;
	Global_36852[118 /*12*/] = 283;
	Global_36852[118 /*12*/].f_1 = 284;
	Global_36852[118 /*12*/].f_2 = 32;
	Global_36852[118 /*12*/].f_3 = 1;
	Global_36852[118 /*12*/].f_10 = 1;
	Global_36852[118 /*12*/].f_11 = 0;
	Global_36852[118 /*12*/].f_4 = 1;
	Global_36852[118 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[118 /*12*/].f_5[0 /*4*/].f_1 = 119;
	Global_36852[118 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[118 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[119 /*12*/] = 285;
	Global_36852[119 /*12*/].f_1 = 286;
	Global_36852[119 /*12*/].f_2 = 1;
	Global_36852[119 /*12*/].f_3 = 32;
	Global_36852[119 /*12*/].f_10 = 0;
	Global_36852[119 /*12*/].f_11 = 0;
	Global_36852[119 /*12*/].f_4 = 0;
	Global_36852[120 /*12*/] = 287;
	Global_36852[120 /*12*/].f_1 = 288;
	Global_36852[120 /*12*/].f_2 = 32;
	Global_36852[120 /*12*/].f_3 = 1;
	Global_36852[120 /*12*/].f_10 = 1;
	Global_36852[120 /*12*/].f_11 = 0;
	Global_36852[120 /*12*/].f_4 = 1;
	Global_36852[120 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[120 /*12*/].f_5[0 /*4*/].f_1 = 121;
	Global_36852[120 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[120 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[121 /*12*/] = 289;
	Global_36852[121 /*12*/].f_1 = 290;
	Global_36852[121 /*12*/].f_2 = 1;
	Global_36852[121 /*12*/].f_3 = 32;
	Global_36852[121 /*12*/].f_10 = 0;
	Global_36852[121 /*12*/].f_11 = 0;
	Global_36852[121 /*12*/].f_4 = 1;
	Global_36852[121 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[121 /*12*/].f_5[0 /*4*/].f_1 = 122;
	Global_36852[121 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[121 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[122 /*12*/] = 291;
	Global_36852[122 /*12*/].f_1 = 292;
	Global_36852[122 /*12*/].f_2 = 32;
	Global_36852[122 /*12*/].f_3 = 1;
	Global_36852[122 /*12*/].f_10 = 1;
	Global_36852[122 /*12*/].f_11 = 30000;
	Global_36852[122 /*12*/].f_4 = 1;
	Global_36852[122 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[122 /*12*/].f_5[0 /*4*/].f_1 = 123;
	Global_36852[122 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[122 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[123 /*12*/] = 293;
	Global_36852[123 /*12*/].f_1 = 294;
	Global_36852[123 /*12*/].f_2 = 1;
	Global_36852[123 /*12*/].f_3 = 32;
	Global_36852[123 /*12*/].f_10 = 0;
	Global_36852[123 /*12*/].f_11 = 0;
	Global_36852[123 /*12*/].f_4 = 0;
	Global_36852[124 /*12*/] = 295;
	Global_36852[124 /*12*/].f_1 = 296;
	Global_36852[124 /*12*/].f_2 = 27;
	Global_36852[124 /*12*/].f_3 = 1;
	Global_36852[124 /*12*/].f_10 = 1;
	Global_36852[124 /*12*/].f_11 = 0;
	Global_36852[124 /*12*/].f_4 = 1;
	Global_36852[124 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[124 /*12*/].f_5[0 /*4*/].f_1 = 125;
	Global_36852[124 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[124 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[125 /*12*/] = 297;
	Global_36852[125 /*12*/].f_1 = 298;
	Global_36852[125 /*12*/].f_2 = 1;
	Global_36852[125 /*12*/].f_3 = 27;
	Global_36852[125 /*12*/].f_10 = 0;
	Global_36852[125 /*12*/].f_11 = 0;
	Global_36852[125 /*12*/].f_4 = 0;
	Global_36852[126 /*12*/] = 299;
	Global_36852[126 /*12*/].f_1 = 300;
	Global_36852[126 /*12*/].f_2 = 2;
	Global_36852[126 /*12*/].f_3 = 1;
	Global_36852[126 /*12*/].f_10 = 1;
	Global_36852[126 /*12*/].f_11 = 0;
	Global_36852[126 /*12*/].f_4 = 1;
	Global_36852[126 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[126 /*12*/].f_5[0 /*4*/].f_1 = 127;
	Global_36852[126 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[126 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[127 /*12*/] = 301;
	Global_36852[127 /*12*/].f_1 = 302;
	Global_36852[127 /*12*/].f_2 = 1;
	Global_36852[127 /*12*/].f_3 = 2;
	Global_36852[127 /*12*/].f_10 = 0;
	Global_36852[127 /*12*/].f_11 = 0;
	Global_36852[127 /*12*/].f_4 = 1;
	Global_36852[127 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[127 /*12*/].f_5[0 /*4*/].f_1 = 128;
	Global_36852[127 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[127 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[128 /*12*/] = 303;
	Global_36852[128 /*12*/].f_1 = 304;
	Global_36852[128 /*12*/].f_2 = 2;
	Global_36852[128 /*12*/].f_3 = 1;
	Global_36852[128 /*12*/].f_10 = 1;
	Global_36852[128 /*12*/].f_11 = 60000;
	Global_36852[128 /*12*/].f_4 = 1;
	Global_36852[128 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[128 /*12*/].f_5[0 /*4*/].f_1 = 129;
	Global_36852[128 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[128 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[129 /*12*/] = 305;
	Global_36852[129 /*12*/].f_1 = 306;
	Global_36852[129 /*12*/].f_2 = 1;
	Global_36852[129 /*12*/].f_3 = 2;
	Global_36852[129 /*12*/].f_10 = 0;
	Global_36852[129 /*12*/].f_11 = 0;
	Global_36852[129 /*12*/].f_4 = 1;
	Global_36852[129 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[129 /*12*/].f_5[0 /*4*/].f_1 = 130;
	Global_36852[129 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[129 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[130 /*12*/] = 307;
	Global_36852[130 /*12*/].f_1 = 308;
	Global_36852[130 /*12*/].f_2 = 2;
	Global_36852[130 /*12*/].f_3 = 1;
	Global_36852[130 /*12*/].f_10 = 0;
	Global_36852[130 /*12*/].f_11 = 30000;
	Global_36852[130 /*12*/].f_4 = 0;
	Global_36852[131 /*12*/] = 309;
	Global_36852[131 /*12*/].f_1 = 310;
	Global_36852[131 /*12*/].f_2 = 0;
	Global_36852[131 /*12*/].f_3 = 1;
	Global_36852[131 /*12*/].f_10 = 1;
	Global_36852[131 /*12*/].f_11 = 0;
	Global_36852[131 /*12*/].f_4 = 1;
	Global_36852[131 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[131 /*12*/].f_5[0 /*4*/].f_1 = 132;
	Global_36852[131 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[131 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[132 /*12*/] = 311;
	Global_36852[132 /*12*/].f_1 = 312;
	Global_36852[132 /*12*/].f_2 = 1;
	Global_36852[132 /*12*/].f_3 = 0;
	Global_36852[132 /*12*/].f_10 = 0;
	Global_36852[132 /*12*/].f_11 = 0;
	Global_36852[132 /*12*/].f_4 = 1;
	Global_36852[132 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[132 /*12*/].f_5[0 /*4*/].f_1 = 133;
	Global_36852[132 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[132 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[133 /*12*/] = 313;
	Global_36852[133 /*12*/].f_1 = 314;
	Global_36852[133 /*12*/].f_2 = 0;
	Global_36852[133 /*12*/].f_3 = 1;
	Global_36852[133 /*12*/].f_10 = 0;
	Global_36852[133 /*12*/].f_11 = 25000;
	Global_36852[133 /*12*/].f_4 = 0;
	Global_36852[134 /*12*/] = 315;
	Global_36852[134 /*12*/].f_1 = 316;
	Global_36852[134 /*12*/].f_2 = 0;
	Global_36852[134 /*12*/].f_3 = 1;
	Global_36852[134 /*12*/].f_10 = 1;
	Global_36852[134 /*12*/].f_11 = 0;
	Global_36852[134 /*12*/].f_4 = 1;
	Global_36852[134 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[134 /*12*/].f_5[0 /*4*/].f_1 = 135;
	Global_36852[134 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[134 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[135 /*12*/] = 317;
	Global_36852[135 /*12*/].f_1 = 318;
	Global_36852[135 /*12*/].f_2 = 1;
	Global_36852[135 /*12*/].f_3 = 0;
	Global_36852[135 /*12*/].f_10 = 0;
	Global_36852[135 /*12*/].f_11 = 0;
	Global_36852[135 /*12*/].f_4 = 0;
	Global_36852[136 /*12*/] = 322;
	Global_36852[136 /*12*/].f_1 = 323;
	Global_36852[136 /*12*/].f_2 = 33;
	Global_36852[136 /*12*/].f_3 = 2;
	Global_36852[136 /*12*/].f_10 = 1;
	Global_36852[136 /*12*/].f_11 = 0;
	Global_36852[136 /*12*/].f_4 = 1;
	Global_36852[136 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[136 /*12*/].f_5[0 /*4*/].f_1 = 137;
	Global_36852[136 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[136 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[137 /*12*/] = 324;
	Global_36852[137 /*12*/].f_1 = 325;
	Global_36852[137 /*12*/].f_2 = 2;
	Global_36852[137 /*12*/].f_3 = 33;
	Global_36852[137 /*12*/].f_10 = 0;
	Global_36852[137 /*12*/].f_11 = 0;
	Global_36852[137 /*12*/].f_4 = 0;
	Global_36852[138 /*12*/] = 326;
	Global_36852[138 /*12*/].f_1 = 327;
	Global_36852[138 /*12*/].f_2 = 33;
	Global_36852[138 /*12*/].f_3 = 2;
	Global_36852[138 /*12*/].f_10 = 1;
	Global_36852[138 /*12*/].f_11 = 0;
	Global_36852[138 /*12*/].f_4 = 1;
	Global_36852[138 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[138 /*12*/].f_5[0 /*4*/].f_1 = 139;
	Global_36852[138 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[138 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[139 /*12*/] = 328;
	Global_36852[139 /*12*/].f_1 = 329;
	Global_36852[139 /*12*/].f_2 = 2;
	Global_36852[139 /*12*/].f_3 = 33;
	Global_36852[139 /*12*/].f_10 = 0;
	Global_36852[139 /*12*/].f_11 = 0;
	Global_36852[139 /*12*/].f_4 = 1;
	Global_36852[139 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[139 /*12*/].f_5[0 /*4*/].f_1 = -1;
	Global_36852[139 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[139 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[140 /*12*/] = 330;
	Global_36852[140 /*12*/].f_1 = 331;
	Global_36852[140 /*12*/].f_2 = 2;
	Global_36852[140 /*12*/].f_3 = 33;
	Global_36852[140 /*12*/].f_10 = 0;
	Global_36852[140 /*12*/].f_11 = 0;
	Global_36852[140 /*12*/].f_4 = 0;
	Global_36852[141 /*12*/] = 332;
	Global_36852[141 /*12*/].f_1 = 333;
	Global_36852[141 /*12*/].f_2 = 29;
	Global_36852[141 /*12*/].f_3 = 2;
	Global_36852[141 /*12*/].f_10 = 0;
	Global_36852[141 /*12*/].f_11 = 0;
	Global_36852[141 /*12*/].f_4 = 1;
	Global_36852[141 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[141 /*12*/].f_5[0 /*4*/].f_1 = 142;
	Global_36852[141 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[141 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[142 /*12*/] = 334;
	Global_36852[142 /*12*/].f_1 = 335;
	Global_36852[142 /*12*/].f_2 = 2;
	Global_36852[142 /*12*/].f_3 = 29;
	Global_36852[142 /*12*/].f_10 = 0;
	Global_36852[142 /*12*/].f_11 = 0;
	Global_36852[142 /*12*/].f_4 = 0;
	Global_36852[143 /*12*/] = 336;
	Global_36852[143 /*12*/].f_1 = 337;
	Global_36852[143 /*12*/].f_2 = 3;
	Global_36852[143 /*12*/].f_3 = 2;
	Global_36852[143 /*12*/].f_10 = 0;
	Global_36852[143 /*12*/].f_11 = 0;
	Global_36852[143 /*12*/].f_4 = 1;
	Global_36852[143 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[143 /*12*/].f_5[0 /*4*/].f_1 = 144;
	Global_36852[143 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[143 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[144 /*12*/] = 338;
	Global_36852[144 /*12*/].f_1 = 339;
	Global_36852[144 /*12*/].f_2 = 2;
	Global_36852[144 /*12*/].f_3 = 3;
	Global_36852[144 /*12*/].f_10 = 0;
	Global_36852[144 /*12*/].f_11 = 0;
	Global_36852[144 /*12*/].f_4 = 0;
	Global_36852[145 /*12*/] = 343;
	Global_36852[145 /*12*/].f_1 = 344;
	Global_36852[145 /*12*/].f_2 = 34;
	Global_36852[145 /*12*/].f_3 = 2;
	Global_36852[145 /*12*/].f_10 = 0;
	Global_36852[145 /*12*/].f_11 = 0;
	Global_36852[145 /*12*/].f_4 = 1;
	Global_36852[145 /*12*/].f_5[0 /*4*/] = 199;
	Global_36852[145 /*12*/].f_5[0 /*4*/].f_1 = 146;
	Global_36852[145 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[145 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[146 /*12*/] = 345;
	Global_36852[146 /*12*/].f_1 = 346;
	Global_36852[146 /*12*/].f_2 = 2;
	Global_36852[146 /*12*/].f_3 = 34;
	Global_36852[146 /*12*/].f_10 = 0;
	Global_36852[146 /*12*/].f_11 = 0;
	Global_36852[146 /*12*/].f_4 = 0;
	Global_36852[147 /*12*/] = 319;
	Global_36852[147 /*12*/].f_1 = 347;
	Global_36852[147 /*12*/].f_2 = 26;
	Global_36852[147 /*12*/].f_3 = 2;
	Global_36852[147 /*12*/].f_10 = 0;
	Global_36852[147 /*12*/].f_11 = 0;
	Global_36852[147 /*12*/].f_4 = 0;
	Global_36852[148 /*12*/] = 351;
	Global_36852[148 /*12*/].f_1 = 352;
	Global_36852[148 /*12*/].f_2 = 35;
	Global_36852[148 /*12*/].f_3 = 2;
	Global_36852[148 /*12*/].f_10 = 0;
	Global_36852[148 /*12*/].f_11 = 0;
	Global_36852[148 /*12*/].f_4 = 0;
	Global_36852[149 /*12*/] = 351;
	Global_36852[149 /*12*/].f_1 = 352;
	Global_36852[149 /*12*/].f_2 = 35;
	Global_36852[149 /*12*/].f_3 = 0;
	Global_36852[149 /*12*/].f_10 = 0;
	Global_36852[149 /*12*/].f_11 = 0;
	Global_36852[149 /*12*/].f_4 = 0;
	Global_36852[150 /*12*/] = 351;
	Global_36852[150 /*12*/].f_1 = 352;
	Global_36852[150 /*12*/].f_2 = 35;
	Global_36852[150 /*12*/].f_3 = 1;
	Global_36852[150 /*12*/].f_10 = 0;
	Global_36852[150 /*12*/].f_11 = 0;
	Global_36852[150 /*12*/].f_4 = 0;
	Global_36852[151 /*12*/] = 355;
	Global_36852[151 /*12*/].f_1 = 356;
	Global_36852[151 /*12*/].f_2 = 36;
	Global_36852[151 /*12*/].f_3 = 2;
	Global_36852[151 /*12*/].f_10 = 0;
	Global_36852[151 /*12*/].f_11 = 0;
	Global_36852[151 /*12*/].f_4 = 0;
	Global_36852[152 /*12*/] = 355;
	Global_36852[152 /*12*/].f_1 = 356;
	Global_36852[152 /*12*/].f_2 = 36;
	Global_36852[152 /*12*/].f_3 = 0;
	Global_36852[152 /*12*/].f_10 = 0;
	Global_36852[152 /*12*/].f_11 = 0;
	Global_36852[152 /*12*/].f_4 = 0;
	Global_36852[153 /*12*/] = 355;
	Global_36852[153 /*12*/].f_1 = 356;
	Global_36852[153 /*12*/].f_2 = 36;
	Global_36852[153 /*12*/].f_3 = 1;
	Global_36852[153 /*12*/].f_10 = 0;
	Global_36852[153 /*12*/].f_11 = 0;
	Global_36852[153 /*12*/].f_4 = 0;
	Global_36852[154 /*12*/] = 363;
	Global_36852[154 /*12*/].f_1 = 364;
	Global_36852[154 /*12*/].f_2 = 38;
	Global_36852[154 /*12*/].f_3 = 2;
	Global_36852[154 /*12*/].f_10 = 0;
	Global_36852[154 /*12*/].f_11 = 0;
	Global_36852[154 /*12*/].f_4 = 0;
	Global_36852[155 /*12*/] = 365;
	Global_36852[155 /*12*/].f_1 = 366;
	Global_36852[155 /*12*/].f_2 = 11;
	Global_36852[155 /*12*/].f_3 = 0;
	Global_36852[155 /*12*/].f_10 = 0;
	Global_36852[155 /*12*/].f_11 = 0;
	Global_36852[155 /*12*/].f_4 = 0;
	Global_36852[156 /*12*/] = 365;
	Global_36852[156 /*12*/].f_1 = 366;
	Global_36852[156 /*12*/].f_2 = 11;
	Global_36852[156 /*12*/].f_3 = 1;
	Global_36852[156 /*12*/].f_10 = 0;
	Global_36852[156 /*12*/].f_11 = 0;
	Global_36852[156 /*12*/].f_4 = 0;
	Global_36852[157 /*12*/] = 365;
	Global_36852[157 /*12*/].f_1 = 366;
	Global_36852[157 /*12*/].f_2 = 11;
	Global_36852[157 /*12*/].f_3 = 2;
	Global_36852[157 /*12*/].f_10 = 0;
	Global_36852[157 /*12*/].f_11 = 0;
	Global_36852[157 /*12*/].f_4 = 0;
	Global_36852[158 /*12*/] = 367;
	Global_36852[158 /*12*/].f_1 = 368;
	Global_36852[158 /*12*/].f_2 = 29;
	Global_36852[158 /*12*/].f_3 = 2;
	Global_36852[158 /*12*/].f_10 = 0;
	Global_36852[158 /*12*/].f_11 = 0;
	Global_36852[158 /*12*/].f_4 = 0;
	Global_36852[159 /*12*/] = 372;
	Global_36852[159 /*12*/].f_1 = 373;
	Global_36852[159 /*12*/].f_2 = 39;
	Global_36852[159 /*12*/].f_3 = 0;
	Global_36852[159 /*12*/].f_10 = 0;
	Global_36852[159 /*12*/].f_11 = 0;
	Global_36852[159 /*12*/].f_4 = 0;
	Global_36852[160 /*12*/] = 374;
	Global_36852[160 /*12*/].f_1 = 375;
	Global_36852[160 /*12*/].f_2 = 39;
	Global_36852[160 /*12*/].f_3 = 1;
	Global_36852[160 /*12*/].f_10 = 0;
	Global_36852[160 /*12*/].f_11 = 0;
	Global_36852[160 /*12*/].f_4 = 0;
	Global_36852[161 /*12*/] = 417;
	Global_36852[161 /*12*/].f_1 = 418;
	Global_36852[161 /*12*/].f_2 = 40;
	Global_36852[161 /*12*/].f_3 = 1;
	Global_36852[161 /*12*/].f_10 = 0;
	Global_36852[161 /*12*/].f_11 = 0;
	Global_36852[161 /*12*/].f_4 = 0;
	Global_36852[162 /*12*/] = 419;
	Global_36852[162 /*12*/].f_1 = 420;
	Global_36852[162 /*12*/].f_2 = 43;
	Global_36852[162 /*12*/].f_3 = 0;
	Global_36852[162 /*12*/].f_10 = 0;
	Global_36852[162 /*12*/].f_11 = 0;
	Global_36852[162 /*12*/].f_4 = 0;
	Global_36852[163 /*12*/] = 421;
	Global_36852[163 /*12*/].f_1 = 422;
	Global_36852[163 /*12*/].f_2 = 43;
	Global_36852[163 /*12*/].f_3 = 2;
	Global_36852[163 /*12*/].f_10 = 0;
	Global_36852[163 /*12*/].f_11 = 0;
	Global_36852[163 /*12*/].f_4 = 0;
	Global_36852[164 /*12*/] = 423;
	Global_36852[164 /*12*/].f_1 = 424;
	Global_36852[164 /*12*/].f_2 = 43;
	Global_36852[164 /*12*/].f_3 = 1;
	Global_36852[164 /*12*/].f_10 = 0;
	Global_36852[164 /*12*/].f_11 = 0;
	Global_36852[164 /*12*/].f_4 = 0;
	Global_36852[165 /*12*/] = 425;
	Global_36852[165 /*12*/].f_1 = 426;
	Global_36852[165 /*12*/].f_2 = 44;
	Global_36852[165 /*12*/].f_3 = 1;
	Global_36852[165 /*12*/].f_10 = 0;
	Global_36852[165 /*12*/].f_11 = 0;
	Global_36852[165 /*12*/].f_4 = 0;
	Global_36852[166 /*12*/] = 427;
	Global_36852[166 /*12*/].f_1 = 428;
	Global_36852[166 /*12*/].f_2 = 45;
	Global_36852[166 /*12*/].f_3 = 0;
	Global_36852[166 /*12*/].f_10 = 0;
	Global_36852[166 /*12*/].f_11 = 0;
	Global_36852[166 /*12*/].f_4 = 0;
	Global_36852[167 /*12*/] = 429;
	Global_36852[167 /*12*/].f_1 = 430;
	Global_36852[167 /*12*/].f_2 = 46;
	Global_36852[167 /*12*/].f_3 = 0;
	Global_36852[167 /*12*/].f_10 = 0;
	Global_36852[167 /*12*/].f_11 = 0;
	Global_36852[167 /*12*/].f_4 = 0;
	Global_36852[168 /*12*/] = 431;
	Global_36852[168 /*12*/].f_1 = 432;
	Global_36852[168 /*12*/].f_2 = 49;
	Global_36852[168 /*12*/].f_3 = 0;
	Global_36852[168 /*12*/].f_10 = 0;
	Global_36852[168 /*12*/].f_11 = 0;
	Global_36852[168 /*12*/].f_4 = 0;
	Global_36852[169 /*12*/] = 433;
	Global_36852[169 /*12*/].f_1 = 434;
	Global_36852[169 /*12*/].f_2 = 49;
	Global_36852[169 /*12*/].f_3 = 2;
	Global_36852[169 /*12*/].f_10 = 0;
	Global_36852[169 /*12*/].f_11 = 0;
	Global_36852[169 /*12*/].f_4 = 0;
	Global_36852[170 /*12*/] = 435;
	Global_36852[170 /*12*/].f_1 = 436;
	Global_36852[170 /*12*/].f_2 = 49;
	Global_36852[170 /*12*/].f_3 = 1;
	Global_36852[170 /*12*/].f_10 = 0;
	Global_36852[170 /*12*/].f_11 = 0;
	Global_36852[170 /*12*/].f_4 = 0;
	Global_36852[171 /*12*/] = 437;
	Global_36852[171 /*12*/].f_1 = 438;
	Global_36852[171 /*12*/].f_2 = 50;
	Global_36852[171 /*12*/].f_3 = 1;
	Global_36852[171 /*12*/].f_10 = 0;
	Global_36852[171 /*12*/].f_11 = 0;
	Global_36852[171 /*12*/].f_4 = 0;
	Global_36852[172 /*12*/] = 439;
	Global_36852[172 /*12*/].f_1 = 440;
	Global_36852[172 /*12*/].f_2 = 51;
	Global_36852[172 /*12*/].f_3 = 0;
	Global_36852[172 /*12*/].f_10 = 0;
	Global_36852[172 /*12*/].f_11 = 0;
	Global_36852[172 /*12*/].f_4 = 0;
	Global_36852[173 /*12*/] = 441;
	Global_36852[173 /*12*/].f_1 = 442;
	Global_36852[173 /*12*/].f_2 = 51;
	Global_36852[173 /*12*/].f_3 = 2;
	Global_36852[173 /*12*/].f_10 = 0;
	Global_36852[173 /*12*/].f_11 = 0;
	Global_36852[173 /*12*/].f_4 = 0;
	Global_36852[174 /*12*/] = 443;
	Global_36852[174 /*12*/].f_1 = 444;
	Global_36852[174 /*12*/].f_2 = 51;
	Global_36852[174 /*12*/].f_3 = 1;
	Global_36852[174 /*12*/].f_10 = 0;
	Global_36852[174 /*12*/].f_11 = 0;
	Global_36852[174 /*12*/].f_4 = 0;
	Global_36852[175 /*12*/] = 445;
	Global_36852[175 /*12*/].f_1 = 446;
	Global_36852[175 /*12*/].f_2 = 52;
	Global_36852[175 /*12*/].f_3 = 0;
	Global_36852[175 /*12*/].f_10 = 0;
	Global_36852[175 /*12*/].f_11 = 0;
	Global_36852[175 /*12*/].f_4 = 0;
	Global_36852[176 /*12*/] = 447;
	Global_36852[176 /*12*/].f_1 = 448;
	Global_36852[176 /*12*/].f_2 = 52;
	Global_36852[176 /*12*/].f_3 = 2;
	Global_36852[176 /*12*/].f_10 = 0;
	Global_36852[176 /*12*/].f_11 = 0;
	Global_36852[176 /*12*/].f_4 = 0;
	Global_36852[177 /*12*/] = 449;
	Global_36852[177 /*12*/].f_1 = 450;
	Global_36852[177 /*12*/].f_2 = 52;
	Global_36852[177 /*12*/].f_3 = 1;
	Global_36852[177 /*12*/].f_10 = 0;
	Global_36852[177 /*12*/].f_11 = 0;
	Global_36852[177 /*12*/].f_4 = 0;
	Global_36852[178 /*12*/] = 451;
	Global_36852[178 /*12*/].f_1 = 452;
	Global_36852[178 /*12*/].f_2 = 53;
	Global_36852[178 /*12*/].f_3 = 2;
	Global_36852[178 /*12*/].f_10 = 0;
	Global_36852[178 /*12*/].f_11 = 0;
	Global_36852[178 /*12*/].f_4 = 0;
	Global_36852[179 /*12*/] = 453;
	Global_36852[179 /*12*/].f_1 = 454;
	Global_36852[179 /*12*/].f_2 = 53;
	Global_36852[179 /*12*/].f_3 = 0;
	Global_36852[179 /*12*/].f_10 = 0;
	Global_36852[179 /*12*/].f_11 = 0;
	Global_36852[179 /*12*/].f_4 = 0;
	Global_36852[180 /*12*/] = 455;
	Global_36852[180 /*12*/].f_1 = 456;
	Global_36852[180 /*12*/].f_2 = 53;
	Global_36852[180 /*12*/].f_3 = 1;
	Global_36852[180 /*12*/].f_10 = 0;
	Global_36852[180 /*12*/].f_11 = 0;
	Global_36852[180 /*12*/].f_4 = 0;
	Global_36852[181 /*12*/] = 457;
	Global_36852[181 /*12*/].f_1 = 458;
	Global_36852[181 /*12*/].f_2 = 4;
	Global_36852[181 /*12*/].f_3 = 0;
	Global_36852[181 /*12*/].f_10 = 0;
	Global_36852[181 /*12*/].f_11 = 0;
	Global_36852[181 /*12*/].f_4 = 0;
	Global_36852[182 /*12*/] = 459;
	Global_36852[182 /*12*/].f_1 = 460;
	Global_36852[182 /*12*/].f_2 = 37;
	Global_36852[182 /*12*/].f_3 = 0;
	Global_36852[182 /*12*/].f_10 = 0;
	Global_36852[182 /*12*/].f_11 = 0;
	Global_36852[182 /*12*/].f_4 = 0;
	Global_36852[183 /*12*/] = 461;
	Global_36852[183 /*12*/].f_1 = 462;
	Global_36852[183 /*12*/].f_2 = 37;
	Global_36852[183 /*12*/].f_3 = 2;
	Global_36852[183 /*12*/].f_10 = 0;
	Global_36852[183 /*12*/].f_11 = 0;
	Global_36852[183 /*12*/].f_4 = 0;
	Global_36852[184 /*12*/] = 463;
	Global_36852[184 /*12*/].f_1 = 464;
	Global_36852[184 /*12*/].f_2 = 37;
	Global_36852[184 /*12*/].f_3 = 1;
	Global_36852[184 /*12*/].f_10 = 0;
	Global_36852[184 /*12*/].f_11 = 0;
	Global_36852[184 /*12*/].f_4 = 0;
	Global_36852[185 /*12*/] = 471;
	Global_36852[185 /*12*/].f_1 = 472;
	Global_36852[185 /*12*/].f_2 = 54;
	Global_36852[185 /*12*/].f_3 = 1;
	Global_36852[185 /*12*/].f_10 = 0;
	Global_36852[185 /*12*/].f_11 = 0;
	Global_36852[185 /*12*/].f_4 = 0;
	Global_36852[186 /*12*/] = 473;
	Global_36852[186 /*12*/].f_1 = 474;
	Global_36852[186 /*12*/].f_2 = 54;
	Global_36852[186 /*12*/].f_3 = 0;
	Global_36852[186 /*12*/].f_10 = 0;
	Global_36852[186 /*12*/].f_11 = 0;
	Global_36852[186 /*12*/].f_4 = 0;
	Global_36852[187 /*12*/] = 475;
	Global_36852[187 /*12*/].f_1 = 476;
	Global_36852[187 /*12*/].f_2 = 55;
	Global_36852[187 /*12*/].f_3 = 1;
	Global_36852[187 /*12*/].f_10 = 0;
	Global_36852[187 /*12*/].f_11 = 0;
	Global_36852[187 /*12*/].f_4 = 0;
	Global_36852[188 /*12*/] = 477;
	Global_36852[188 /*12*/].f_1 = 478;
	Global_36852[188 /*12*/].f_2 = 54;
	Global_36852[188 /*12*/].f_3 = 2;
	Global_36852[188 /*12*/].f_10 = 0;
	Global_36852[188 /*12*/].f_11 = 0;
	Global_36852[188 /*12*/].f_4 = 0;
	Global_36852[189 /*12*/] = 479;
	Global_36852[189 /*12*/].f_1 = 480;
	Global_36852[189 /*12*/].f_2 = 55;
	Global_36852[189 /*12*/].f_3 = 0;
	Global_36852[189 /*12*/].f_10 = 0;
	Global_36852[189 /*12*/].f_11 = 0;
	Global_36852[189 /*12*/].f_4 = 0;
	Global_36852[190 /*12*/] = 481;
	Global_36852[190 /*12*/].f_1 = 482;
	Global_36852[190 /*12*/].f_2 = 55;
	Global_36852[190 /*12*/].f_3 = 2;
	Global_36852[190 /*12*/].f_10 = 0;
	Global_36852[190 /*12*/].f_11 = 0;
	Global_36852[190 /*12*/].f_4 = 0;
	Global_36852[191 /*12*/] = 483;
	Global_36852[191 /*12*/].f_1 = 484;
	Global_36852[191 /*12*/].f_2 = 12;
	Global_36852[191 /*12*/].f_3 = 0;
	Global_36852[191 /*12*/].f_10 = 0;
	Global_36852[191 /*12*/].f_11 = 0;
	Global_36852[191 /*12*/].f_4 = 0;
	Global_36852[192 /*12*/] = 485;
	Global_36852[192 /*12*/].f_1 = 486;
	Global_36852[192 /*12*/].f_2 = 12;
	Global_36852[192 /*12*/].f_3 = 1;
	Global_36852[192 /*12*/].f_10 = 0;
	Global_36852[192 /*12*/].f_11 = 0;
	Global_36852[192 /*12*/].f_4 = 0;
	Global_36852[193 /*12*/] = 487;
	Global_36852[193 /*12*/].f_1 = 488;
	Global_36852[193 /*12*/].f_2 = 12;
	Global_36852[193 /*12*/].f_3 = 2;
	Global_36852[193 /*12*/].f_10 = 0;
	Global_36852[193 /*12*/].f_11 = 0;
	Global_36852[193 /*12*/].f_4 = 0;
	Global_36852[194 /*12*/] = 510;
	Global_36852[194 /*12*/].f_1 = 511;
	Global_36852[194 /*12*/].f_2 = 56;
	Global_36852[194 /*12*/].f_3 = 0;
	Global_36852[194 /*12*/].f_10 = 0;
	Global_36852[194 /*12*/].f_11 = 0;
	Global_36852[194 /*12*/].f_4 = 0;
	Global_36852[195 /*12*/] = 512;
	Global_36852[195 /*12*/].f_1 = 513;
	Global_36852[195 /*12*/].f_2 = 56;
	Global_36852[195 /*12*/].f_3 = 0;
	Global_36852[195 /*12*/].f_10 = 0;
	Global_36852[195 /*12*/].f_11 = 0;
	Global_36852[195 /*12*/].f_4 = 0;
	Global_36852[196 /*12*/] = 514;
	Global_36852[196 /*12*/].f_1 = 515;
	Global_36852[196 /*12*/].f_2 = 56;
	Global_36852[196 /*12*/].f_3 = 0;
	Global_36852[196 /*12*/].f_10 = 0;
	Global_36852[196 /*12*/].f_11 = 0;
	Global_36852[196 /*12*/].f_4 = 0;
	Global_36852[197 /*12*/] = 516;
	Global_36852[197 /*12*/].f_1 = 517;
	Global_36852[197 /*12*/].f_2 = 56;
	Global_36852[197 /*12*/].f_3 = 0;
	Global_36852[197 /*12*/].f_10 = 0;
	Global_36852[197 /*12*/].f_11 = 0;
	Global_36852[197 /*12*/].f_4 = 0;
	Global_36852[198 /*12*/] = 518;
	Global_36852[198 /*12*/].f_1 = 519;
	Global_36852[198 /*12*/].f_2 = 56;
	Global_36852[198 /*12*/].f_3 = 0;
	Global_36852[198 /*12*/].f_10 = 0;
	Global_36852[198 /*12*/].f_11 = 0;
	Global_36852[198 /*12*/].f_4 = 0;
	Global_36852[199 /*12*/] = 520;
	Global_36852[199 /*12*/].f_1 = 521;
	Global_36852[199 /*12*/].f_2 = 57;
	Global_36852[199 /*12*/].f_3 = 0;
	Global_36852[199 /*12*/].f_10 = 1;
	Global_36852[199 /*12*/].f_11 = 60000;
	Global_36852[199 /*12*/].f_4 = 1;
	Global_36852[199 /*12*/].f_5[0 /*4*/] = 536;
	Global_36852[199 /*12*/].f_5[0 /*4*/].f_1 = 200;
	Global_36852[199 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[199 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[200 /*12*/] = 522;
	Global_36852[200 /*12*/].f_1 = 523;
	Global_36852[200 /*12*/].f_2 = 0;
	Global_36852[200 /*12*/].f_3 = 57;
	Global_36852[200 /*12*/].f_10 = 0;
	Global_36852[200 /*12*/].f_11 = 0;
	Global_36852[200 /*12*/].f_4 = 1;
	Global_36852[200 /*12*/].f_5[0 /*4*/] = 537;
	Global_36852[200 /*12*/].f_5[0 /*4*/].f_1 = 201;
	Global_36852[200 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[200 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[201 /*12*/] = 524;
	Global_36852[201 /*12*/].f_1 = 525;
	Global_36852[201 /*12*/].f_2 = 57;
	Global_36852[201 /*12*/].f_3 = 0;
	Global_36852[201 /*12*/].f_10 = 1;
	Global_36852[201 /*12*/].f_11 = 60000;
	Global_36852[201 /*12*/].f_4 = 1;
	Global_36852[201 /*12*/].f_5[0 /*4*/] = 538;
	Global_36852[201 /*12*/].f_5[0 /*4*/].f_1 = 202;
	Global_36852[201 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[201 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[202 /*12*/] = 526;
	Global_36852[202 /*12*/].f_1 = 527;
	Global_36852[202 /*12*/].f_2 = 0;
	Global_36852[202 /*12*/].f_3 = 57;
	Global_36852[202 /*12*/].f_10 = 0;
	Global_36852[202 /*12*/].f_11 = 0;
	Global_36852[202 /*12*/].f_4 = 1;
	Global_36852[202 /*12*/].f_5[0 /*4*/] = 539;
	Global_36852[202 /*12*/].f_5[0 /*4*/].f_1 = 203;
	Global_36852[202 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[202 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[203 /*12*/] = 528;
	Global_36852[203 /*12*/].f_1 = 529;
	Global_36852[203 /*12*/].f_2 = 57;
	Global_36852[203 /*12*/].f_3 = 0;
	Global_36852[203 /*12*/].f_10 = 1;
	Global_36852[203 /*12*/].f_11 = 60000;
	Global_36852[203 /*12*/].f_4 = 1;
	Global_36852[203 /*12*/].f_5[0 /*4*/] = 540;
	Global_36852[203 /*12*/].f_5[0 /*4*/].f_1 = 204;
	Global_36852[203 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[203 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[204 /*12*/] = 530;
	Global_36852[204 /*12*/].f_1 = 531;
	Global_36852[204 /*12*/].f_2 = 0;
	Global_36852[204 /*12*/].f_3 = 57;
	Global_36852[204 /*12*/].f_10 = 0;
	Global_36852[204 /*12*/].f_11 = 0;
	Global_36852[204 /*12*/].f_4 = 1;
	Global_36852[204 /*12*/].f_5[0 /*4*/] = 541;
	Global_36852[204 /*12*/].f_5[0 /*4*/].f_1 = 205;
	Global_36852[204 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[204 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[205 /*12*/] = 532;
	Global_36852[205 /*12*/].f_1 = 533;
	Global_36852[205 /*12*/].f_2 = 57;
	Global_36852[205 /*12*/].f_3 = 0;
	Global_36852[205 /*12*/].f_10 = 1;
	Global_36852[205 /*12*/].f_11 = 60000;
	Global_36852[205 /*12*/].f_4 = 1;
	Global_36852[205 /*12*/].f_5[0 /*4*/] = 542;
	Global_36852[205 /*12*/].f_5[0 /*4*/].f_1 = 206;
	Global_36852[205 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[205 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[206 /*12*/] = 534;
	Global_36852[206 /*12*/].f_1 = 535;
	Global_36852[206 /*12*/].f_2 = 0;
	Global_36852[206 /*12*/].f_3 = 57;
	Global_36852[206 /*12*/].f_10 = 0;
	Global_36852[206 /*12*/].f_11 = 0;
	Global_36852[206 /*12*/].f_4 = 0;
	Global_36852[207 /*12*/] = 543;
	Global_36852[207 /*12*/].f_1 = 544;
	Global_36852[207 /*12*/].f_2 = 58;
	Global_36852[207 /*12*/].f_3 = 0;
	Global_36852[207 /*12*/].f_10 = 1;
	Global_36852[207 /*12*/].f_11 = 60000;
	Global_36852[207 /*12*/].f_4 = 1;
	Global_36852[207 /*12*/].f_5[0 /*4*/] = 557;
	Global_36852[207 /*12*/].f_5[0 /*4*/].f_1 = 208;
	Global_36852[207 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[207 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[208 /*12*/] = 545;
	Global_36852[208 /*12*/].f_1 = 546;
	Global_36852[208 /*12*/].f_2 = 0;
	Global_36852[208 /*12*/].f_3 = 58;
	Global_36852[208 /*12*/].f_10 = 0;
	Global_36852[208 /*12*/].f_11 = 0;
	Global_36852[208 /*12*/].f_4 = 1;
	Global_36852[208 /*12*/].f_5[0 /*4*/] = 558;
	Global_36852[208 /*12*/].f_5[0 /*4*/].f_1 = 209;
	Global_36852[208 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[208 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[209 /*12*/] = 547;
	Global_36852[209 /*12*/].f_1 = 548;
	Global_36852[209 /*12*/].f_2 = 58;
	Global_36852[209 /*12*/].f_3 = 0;
	Global_36852[209 /*12*/].f_10 = 1;
	Global_36852[209 /*12*/].f_11 = 60000;
	Global_36852[209 /*12*/].f_4 = 1;
	Global_36852[209 /*12*/].f_5[0 /*4*/] = 559;
	Global_36852[209 /*12*/].f_5[0 /*4*/].f_1 = 210;
	Global_36852[209 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[209 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[210 /*12*/] = 549;
	Global_36852[210 /*12*/].f_1 = 550;
	Global_36852[210 /*12*/].f_2 = 0;
	Global_36852[210 /*12*/].f_3 = 58;
	Global_36852[210 /*12*/].f_10 = 0;
	Global_36852[210 /*12*/].f_11 = 0;
	Global_36852[210 /*12*/].f_4 = 1;
	Global_36852[210 /*12*/].f_5[0 /*4*/] = 560;
	Global_36852[210 /*12*/].f_5[0 /*4*/].f_1 = 211;
	Global_36852[210 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[210 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[211 /*12*/] = 551;
	Global_36852[211 /*12*/].f_1 = 552;
	Global_36852[211 /*12*/].f_2 = 58;
	Global_36852[211 /*12*/].f_3 = 0;
	Global_36852[211 /*12*/].f_10 = 1;
	Global_36852[211 /*12*/].f_11 = 60000;
	Global_36852[211 /*12*/].f_4 = 1;
	Global_36852[211 /*12*/].f_5[0 /*4*/] = 561;
	Global_36852[211 /*12*/].f_5[0 /*4*/].f_1 = 212;
	Global_36852[211 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[211 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[212 /*12*/] = 553;
	Global_36852[212 /*12*/].f_1 = 554;
	Global_36852[212 /*12*/].f_2 = 0;
	Global_36852[212 /*12*/].f_3 = 58;
	Global_36852[212 /*12*/].f_10 = 0;
	Global_36852[212 /*12*/].f_11 = 0;
	Global_36852[212 /*12*/].f_4 = 1;
	Global_36852[212 /*12*/].f_5[0 /*4*/] = 562;
	Global_36852[212 /*12*/].f_5[0 /*4*/].f_1 = -1;
	Global_36852[212 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[212 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[213 /*12*/] = 555;
	Global_36852[213 /*12*/].f_1 = 556;
	Global_36852[213 /*12*/].f_2 = 58;
	Global_36852[213 /*12*/].f_3 = 0;
	Global_36852[213 /*12*/].f_10 = 1;
	Global_36852[213 /*12*/].f_11 = 60000;
	Global_36852[213 /*12*/].f_4 = 0;
	Global_36852[214 /*12*/] = 563;
	Global_36852[214 /*12*/].f_1 = 564;
	Global_36852[214 /*12*/].f_2 = 59;
	Global_36852[214 /*12*/].f_3 = 0;
	Global_36852[214 /*12*/].f_10 = 1;
	Global_36852[214 /*12*/].f_11 = 60000;
	Global_36852[214 /*12*/].f_4 = 1;
	Global_36852[214 /*12*/].f_5[0 /*4*/] = 579;
	Global_36852[214 /*12*/].f_5[0 /*4*/].f_1 = 215;
	Global_36852[214 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[214 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[215 /*12*/] = 565;
	Global_36852[215 /*12*/].f_1 = 566;
	Global_36852[215 /*12*/].f_2 = 0;
	Global_36852[215 /*12*/].f_3 = 59;
	Global_36852[215 /*12*/].f_10 = 0;
	Global_36852[215 /*12*/].f_11 = 0;
	Global_36852[215 /*12*/].f_4 = 1;
	Global_36852[215 /*12*/].f_5[0 /*4*/] = 580;
	Global_36852[215 /*12*/].f_5[0 /*4*/].f_1 = 216;
	Global_36852[215 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[215 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[216 /*12*/] = 567;
	Global_36852[216 /*12*/].f_1 = 568;
	Global_36852[216 /*12*/].f_2 = 59;
	Global_36852[216 /*12*/].f_3 = 0;
	Global_36852[216 /*12*/].f_10 = 1;
	Global_36852[216 /*12*/].f_11 = 60000;
	Global_36852[216 /*12*/].f_4 = 1;
	Global_36852[216 /*12*/].f_5[0 /*4*/] = 581;
	Global_36852[216 /*12*/].f_5[0 /*4*/].f_1 = 217;
	Global_36852[216 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[216 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[217 /*12*/] = 569;
	Global_36852[217 /*12*/].f_1 = 570;
	Global_36852[217 /*12*/].f_2 = 0;
	Global_36852[217 /*12*/].f_3 = 59;
	Global_36852[217 /*12*/].f_10 = 0;
	Global_36852[217 /*12*/].f_11 = 0;
	Global_36852[217 /*12*/].f_4 = 1;
	Global_36852[217 /*12*/].f_5[0 /*4*/] = 582;
	Global_36852[217 /*12*/].f_5[0 /*4*/].f_1 = 218;
	Global_36852[217 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[217 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[218 /*12*/] = 571;
	Global_36852[218 /*12*/].f_1 = 572;
	Global_36852[218 /*12*/].f_2 = 59;
	Global_36852[218 /*12*/].f_3 = 0;
	Global_36852[218 /*12*/].f_10 = 1;
	Global_36852[218 /*12*/].f_11 = 60000;
	Global_36852[218 /*12*/].f_4 = 1;
	Global_36852[218 /*12*/].f_5[0 /*4*/] = 583;
	Global_36852[218 /*12*/].f_5[0 /*4*/].f_1 = 219;
	Global_36852[218 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[218 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[219 /*12*/] = 573;
	Global_36852[219 /*12*/].f_1 = 574;
	Global_36852[219 /*12*/].f_2 = 0;
	Global_36852[219 /*12*/].f_3 = 59;
	Global_36852[219 /*12*/].f_10 = 0;
	Global_36852[219 /*12*/].f_11 = 0;
	Global_36852[219 /*12*/].f_4 = 1;
	Global_36852[219 /*12*/].f_5[0 /*4*/] = 584;
	Global_36852[219 /*12*/].f_5[0 /*4*/].f_1 = 220;
	Global_36852[219 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[219 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[220 /*12*/] = 575;
	Global_36852[220 /*12*/].f_1 = 576;
	Global_36852[220 /*12*/].f_2 = 59;
	Global_36852[220 /*12*/].f_3 = 0;
	Global_36852[220 /*12*/].f_10 = 1;
	Global_36852[220 /*12*/].f_11 = 60000;
	Global_36852[220 /*12*/].f_4 = 1;
	Global_36852[220 /*12*/].f_5[0 /*4*/] = 585;
	Global_36852[220 /*12*/].f_5[0 /*4*/].f_1 = 221;
	Global_36852[220 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[220 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[221 /*12*/] = 577;
	Global_36852[221 /*12*/].f_1 = 578;
	Global_36852[221 /*12*/].f_2 = 0;
	Global_36852[221 /*12*/].f_3 = 59;
	Global_36852[221 /*12*/].f_10 = 0;
	Global_36852[221 /*12*/].f_11 = 0;
	Global_36852[221 /*12*/].f_4 = 0;
	Global_36852[222 /*12*/] = 586;
	Global_36852[222 /*12*/].f_1 = 587;
	Global_36852[222 /*12*/].f_2 = 60;
	Global_36852[222 /*12*/].f_3 = 2;
	Global_36852[222 /*12*/].f_10 = 1;
	Global_36852[222 /*12*/].f_11 = 60000;
	Global_36852[222 /*12*/].f_4 = 1;
	Global_36852[222 /*12*/].f_5[0 /*4*/] = 600;
	Global_36852[222 /*12*/].f_5[0 /*4*/].f_1 = 223;
	Global_36852[222 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[222 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[223 /*12*/] = 588;
	Global_36852[223 /*12*/].f_1 = 589;
	Global_36852[223 /*12*/].f_2 = 2;
	Global_36852[223 /*12*/].f_3 = 60;
	Global_36852[223 /*12*/].f_10 = 0;
	Global_36852[223 /*12*/].f_11 = 0;
	Global_36852[223 /*12*/].f_4 = 1;
	Global_36852[223 /*12*/].f_5[0 /*4*/] = 601;
	Global_36852[223 /*12*/].f_5[0 /*4*/].f_1 = 224;
	Global_36852[223 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[223 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[224 /*12*/] = 590;
	Global_36852[224 /*12*/].f_1 = 591;
	Global_36852[224 /*12*/].f_2 = 60;
	Global_36852[224 /*12*/].f_3 = 2;
	Global_36852[224 /*12*/].f_10 = 1;
	Global_36852[224 /*12*/].f_11 = 60000;
	Global_36852[224 /*12*/].f_4 = 1;
	Global_36852[224 /*12*/].f_5[0 /*4*/] = 602;
	Global_36852[224 /*12*/].f_5[0 /*4*/].f_1 = 225;
	Global_36852[224 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[224 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[225 /*12*/] = 592;
	Global_36852[225 /*12*/].f_1 = 593;
	Global_36852[225 /*12*/].f_2 = 2;
	Global_36852[225 /*12*/].f_3 = 60;
	Global_36852[225 /*12*/].f_10 = 0;
	Global_36852[225 /*12*/].f_11 = 0;
	Global_36852[225 /*12*/].f_4 = 1;
	Global_36852[225 /*12*/].f_5[0 /*4*/] = 603;
	Global_36852[225 /*12*/].f_5[0 /*4*/].f_1 = 226;
	Global_36852[225 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[225 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[226 /*12*/] = 594;
	Global_36852[226 /*12*/].f_1 = 595;
	Global_36852[226 /*12*/].f_2 = 60;
	Global_36852[226 /*12*/].f_3 = 2;
	Global_36852[226 /*12*/].f_10 = 1;
	Global_36852[226 /*12*/].f_11 = 60000;
	Global_36852[226 /*12*/].f_4 = 1;
	Global_36852[226 /*12*/].f_5[0 /*4*/] = 604;
	Global_36852[226 /*12*/].f_5[0 /*4*/].f_1 = 227;
	Global_36852[226 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[226 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[227 /*12*/] = 596;
	Global_36852[227 /*12*/].f_1 = 597;
	Global_36852[227 /*12*/].f_2 = 2;
	Global_36852[227 /*12*/].f_3 = 60;
	Global_36852[227 /*12*/].f_10 = 1;
	Global_36852[227 /*12*/].f_11 = 60000;
	Global_36852[227 /*12*/].f_4 = 1;
	Global_36852[227 /*12*/].f_5[0 /*4*/] = 605;
	Global_36852[227 /*12*/].f_5[0 /*4*/].f_1 = 228;
	Global_36852[227 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[227 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[228 /*12*/] = 598;
	Global_36852[228 /*12*/].f_1 = 599;
	Global_36852[228 /*12*/].f_2 = 2;
	Global_36852[228 /*12*/].f_3 = 60;
	Global_36852[228 /*12*/].f_10 = 0;
	Global_36852[228 /*12*/].f_11 = 0;
	Global_36852[228 /*12*/].f_4 = 0;
	Global_36852[229 /*12*/] = 606;
	Global_36852[229 /*12*/].f_1 = 607;
	Global_36852[229 /*12*/].f_2 = 61;
	Global_36852[229 /*12*/].f_3 = 2;
	Global_36852[229 /*12*/].f_10 = 1;
	Global_36852[229 /*12*/].f_11 = 60000;
	Global_36852[229 /*12*/].f_4 = 1;
	Global_36852[229 /*12*/].f_5[0 /*4*/] = 610;
	Global_36852[229 /*12*/].f_5[0 /*4*/].f_1 = 230;
	Global_36852[229 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[229 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[230 /*12*/] = 608;
	Global_36852[230 /*12*/].f_1 = 609;
	Global_36852[230 /*12*/].f_2 = 2;
	Global_36852[230 /*12*/].f_3 = 61;
	Global_36852[230 /*12*/].f_10 = 0;
	Global_36852[230 /*12*/].f_11 = 0;
	Global_36852[230 /*12*/].f_4 = 1;
	Global_36852[230 /*12*/].f_5[0 /*4*/] = 617;
	Global_36852[230 /*12*/].f_5[0 /*4*/].f_1 = 231;
	Global_36852[230 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[230 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[231 /*12*/] = 611;
	Global_36852[231 /*12*/].f_1 = 612;
	Global_36852[231 /*12*/].f_2 = 61;
	Global_36852[231 /*12*/].f_3 = 2;
	Global_36852[231 /*12*/].f_10 = 1;
	Global_36852[231 /*12*/].f_11 = 60000;
	Global_36852[231 /*12*/].f_4 = 1;
	Global_36852[231 /*12*/].f_5[0 /*4*/] = 618;
	Global_36852[231 /*12*/].f_5[0 /*4*/].f_1 = 232;
	Global_36852[231 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[231 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[232 /*12*/] = 613;
	Global_36852[232 /*12*/].f_1 = 614;
	Global_36852[232 /*12*/].f_2 = 2;
	Global_36852[232 /*12*/].f_3 = 61;
	Global_36852[232 /*12*/].f_10 = 0;
	Global_36852[232 /*12*/].f_11 = 0;
	Global_36852[232 /*12*/].f_4 = 1;
	Global_36852[232 /*12*/].f_5[0 /*4*/] = 619;
	Global_36852[232 /*12*/].f_5[0 /*4*/].f_1 = 233;
	Global_36852[232 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[232 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[233 /*12*/] = 615;
	Global_36852[233 /*12*/].f_1 = 616;
	Global_36852[233 /*12*/].f_2 = 61;
	Global_36852[233 /*12*/].f_3 = 2;
	Global_36852[233 /*12*/].f_10 = 1;
	Global_36852[233 /*12*/].f_11 = 60000;
	Global_36852[233 /*12*/].f_4 = 1;
	Global_36852[233 /*12*/].f_5[0 /*4*/] = 622;
	Global_36852[233 /*12*/].f_5[0 /*4*/].f_1 = 234;
	Global_36852[233 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[233 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[234 /*12*/] = 620;
	Global_36852[234 /*12*/].f_1 = 621;
	Global_36852[234 /*12*/].f_2 = 2;
	Global_36852[234 /*12*/].f_3 = 61;
	Global_36852[234 /*12*/].f_10 = 0;
	Global_36852[234 /*12*/].f_11 = 0;
	Global_36852[234 /*12*/].f_4 = 0;
	Global_36852[235 /*12*/] = 623;
	Global_36852[235 /*12*/].f_1 = 624;
	Global_36852[235 /*12*/].f_2 = 62;
	Global_36852[235 /*12*/].f_3 = 2;
	Global_36852[235 /*12*/].f_10 = 1;
	Global_36852[235 /*12*/].f_11 = 60000;
	Global_36852[235 /*12*/].f_4 = 1;
	Global_36852[235 /*12*/].f_5[0 /*4*/] = 635;
	Global_36852[235 /*12*/].f_5[0 /*4*/].f_1 = 236;
	Global_36852[235 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[235 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[236 /*12*/] = 625;
	Global_36852[236 /*12*/].f_1 = 626;
	Global_36852[236 /*12*/].f_2 = 2;
	Global_36852[236 /*12*/].f_3 = 62;
	Global_36852[236 /*12*/].f_10 = 0;
	Global_36852[236 /*12*/].f_11 = 0;
	Global_36852[236 /*12*/].f_4 = 1;
	Global_36852[236 /*12*/].f_5[0 /*4*/] = 636;
	Global_36852[236 /*12*/].f_5[0 /*4*/].f_1 = 237;
	Global_36852[236 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[236 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[237 /*12*/] = 627;
	Global_36852[237 /*12*/].f_1 = 628;
	Global_36852[237 /*12*/].f_2 = 62;
	Global_36852[237 /*12*/].f_3 = 2;
	Global_36852[237 /*12*/].f_10 = 1;
	Global_36852[237 /*12*/].f_11 = 60000;
	Global_36852[237 /*12*/].f_4 = 1;
	Global_36852[237 /*12*/].f_5[0 /*4*/] = 637;
	Global_36852[237 /*12*/].f_5[0 /*4*/].f_1 = 238;
	Global_36852[237 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[237 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[238 /*12*/] = 629;
	Global_36852[238 /*12*/].f_1 = 630;
	Global_36852[238 /*12*/].f_2 = 2;
	Global_36852[238 /*12*/].f_3 = 62;
	Global_36852[238 /*12*/].f_10 = 0;
	Global_36852[238 /*12*/].f_11 = 0;
	Global_36852[238 /*12*/].f_4 = 1;
	Global_36852[238 /*12*/].f_5[0 /*4*/] = 638;
	Global_36852[238 /*12*/].f_5[0 /*4*/].f_1 = 239;
	Global_36852[238 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[238 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[239 /*12*/] = 631;
	Global_36852[239 /*12*/].f_1 = 632;
	Global_36852[239 /*12*/].f_2 = 62;
	Global_36852[239 /*12*/].f_3 = 2;
	Global_36852[239 /*12*/].f_10 = 1;
	Global_36852[239 /*12*/].f_11 = 60000;
	Global_36852[239 /*12*/].f_4 = 1;
	Global_36852[239 /*12*/].f_5[0 /*4*/] = 639;
	Global_36852[239 /*12*/].f_5[0 /*4*/].f_1 = 240;
	Global_36852[239 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_36852[239 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_36852[240 /*12*/] = 633;
	Global_36852[240 /*12*/].f_1 = 634;
	Global_36852[240 /*12*/].f_2 = 2;
	Global_36852[240 /*12*/].f_3 = 62;
	Global_36852[240 /*12*/].f_10 = 0;
	Global_36852[240 /*12*/].f_11 = 0;
	Global_36852[240 /*12*/].f_4 = 0;
	Global_36852[241 /*12*/] = 646;
	Global_36852[241 /*12*/].f_1 = 647;
	Global_36852[241 /*12*/].f_2 = 36;
	Global_36852[241 /*12*/].f_3 = 2;
	Global_36852[241 /*12*/].f_10 = 0;
	Global_36852[241 /*12*/].f_11 = 0;
	Global_36852[241 /*12*/].f_4 = 0;
	Global_36852[242 /*12*/] = 648;
	Global_36852[242 /*12*/].f_1 = 649;
	Global_36852[242 /*12*/].f_2 = 36;
	Global_36852[242 /*12*/].f_3 = 0;
	Global_36852[242 /*12*/].f_10 = 0;
	Global_36852[242 /*12*/].f_11 = 0;
	Global_36852[242 /*12*/].f_4 = 0;
	Global_36852[243 /*12*/] = 650;
	Global_36852[243 /*12*/].f_1 = 651;
	Global_36852[243 /*12*/].f_2 = 36;
	Global_36852[243 /*12*/].f_3 = 1;
	Global_36852[243 /*12*/].f_10 = 0;
	Global_36852[243 /*12*/].f_11 = 0;
	Global_36852[243 /*12*/].f_4 = 0;
	Global_36852[244 /*12*/] = 655;
	Global_36852[244 /*12*/].f_1 = 656;
	Global_36852[244 /*12*/].f_2 = 65;
	Global_36852[244 /*12*/].f_3 = 1;
	Global_36852[244 /*12*/].f_10 = 0;
	Global_36852[244 /*12*/].f_11 = 0;
	Global_36852[244 /*12*/].f_4 = 0;
	Global_36852[245 /*12*/] = 657;
	Global_36852[245 /*12*/].f_1 = 658;
	Global_36852[245 /*12*/].f_2 = 65;
	Global_36852[245 /*12*/].f_3 = 1;
	Global_36852[245 /*12*/].f_10 = 0;
	Global_36852[245 /*12*/].f_11 = 0;
	Global_36852[245 /*12*/].f_4 = 0;
	Global_36852[246 /*12*/] = 659;
	Global_36852[246 /*12*/].f_1 = 660;
	Global_36852[246 /*12*/].f_2 = 65;
	Global_36852[246 /*12*/].f_3 = 1;
	Global_36852[246 /*12*/].f_10 = 0;
	Global_36852[246 /*12*/].f_11 = 0;
	Global_36852[246 /*12*/].f_4 = 0;
	Global_36852[247 /*12*/] = 661;
	Global_36852[247 /*12*/].f_1 = 662;
	Global_36852[247 /*12*/].f_2 = 65;
	Global_36852[247 /*12*/].f_3 = 1;
	Global_36852[247 /*12*/].f_10 = 0;
	Global_36852[247 /*12*/].f_11 = 0;
	Global_36852[247 /*12*/].f_4 = 0;
	Global_36852[248 /*12*/] = 663;
	Global_36852[248 /*12*/].f_1 = 664;
	Global_36852[248 /*12*/].f_2 = 33;
	Global_36852[248 /*12*/].f_3 = 2;
	Global_36852[248 /*12*/].f_10 = 0;
	Global_36852[248 /*12*/].f_11 = 40000;
	Global_36852[248 /*12*/].f_4 = 0;
	Global_36852[249 /*12*/] = 665;
	Global_36852[249 /*12*/].f_1 = 666;
	Global_36852[249 /*12*/].f_2 = 19;
	Global_36852[249 /*12*/].f_3 = 1;
	Global_36852[249 /*12*/].f_10 = 1;
	Global_36852[249 /*12*/].f_11 = 0;
	Global_36852[249 /*12*/].f_4 = 0;
	Global_36852[250 /*12*/] = 667;
	Global_36852[250 /*12*/].f_1 = 668;
	Global_36852[250 /*12*/].f_2 = 19;
	Global_36852[250 /*12*/].f_3 = 1;
	Global_36852[250 /*12*/].f_10 = 1;
	Global_36852[250 /*12*/].f_11 = 0;
	Global_36852[250 /*12*/].f_4 = 0;
	Global_36852[251 /*12*/] = 669;
	Global_36852[251 /*12*/].f_1 = 670;
	Global_36852[251 /*12*/].f_2 = 19;
	Global_36852[251 /*12*/].f_3 = 1;
	Global_36852[251 /*12*/].f_10 = 1;
	Global_36852[251 /*12*/].f_11 = 0;
	Global_36852[251 /*12*/].f_4 = 0;
	Global_36852[252 /*12*/] = 671;
	Global_36852[252 /*12*/].f_1 = 672;
	Global_36852[252 /*12*/].f_2 = 19;
	Global_36852[252 /*12*/].f_3 = 1;
	Global_36852[252 /*12*/].f_10 = 1;
	Global_36852[252 /*12*/].f_11 = 0;
	Global_36852[252 /*12*/].f_4 = 0;
	Global_36852[253 /*12*/] = 673;
	Global_36852[253 /*12*/].f_1 = 674;
	Global_36852[253 /*12*/].f_2 = 19;
	Global_36852[253 /*12*/].f_3 = 1;
	Global_36852[253 /*12*/].f_10 = 1;
	Global_36852[253 /*12*/].f_11 = 0;
	Global_36852[253 /*12*/].f_4 = 0;
	Global_36852[254 /*12*/] = 675;
	Global_36852[254 /*12*/].f_1 = 676;
	Global_36852[254 /*12*/].f_2 = 19;
	Global_36852[254 /*12*/].f_3 = 1;
	Global_36852[254 /*12*/].f_10 = 1;
	Global_36852[254 /*12*/].f_11 = 0;
	Global_36852[254 /*12*/].f_4 = 0;
	Global_36852[255 /*12*/] = 679;
	Global_36852[255 /*12*/].f_1 = 680;
	Global_36852[255 /*12*/].f_2 = 19;
	Global_36852[255 /*12*/].f_3 = 1;
	Global_36852[255 /*12*/].f_10 = 1;
	Global_36852[255 /*12*/].f_11 = 0;
	Global_36852[255 /*12*/].f_4 = 0;
	Global_36852[256 /*12*/] = 677;
	Global_36852[256 /*12*/].f_1 = 678;
	Global_36852[256 /*12*/].f_2 = 19;
	Global_36852[256 /*12*/].f_3 = 1;
	Global_36852[256 /*12*/].f_10 = 1;
	Global_36852[256 /*12*/].f_11 = 0;
	Global_36852[256 /*12*/].f_4 = 0;
	Global_36852[257 /*12*/] = 681;
	Global_36852[257 /*12*/].f_1 = 682;
	Global_36852[257 /*12*/].f_2 = 19;
	Global_36852[257 /*12*/].f_3 = 1;
	Global_36852[257 /*12*/].f_10 = 1;
	Global_36852[257 /*12*/].f_11 = 0;
	Global_36852[257 /*12*/].f_4 = 0;
	Global_36852[258 /*12*/] = 683;
	Global_36852[258 /*12*/].f_1 = 684;
	Global_36852[258 /*12*/].f_2 = 19;
	Global_36852[258 /*12*/].f_3 = 1;
	Global_36852[258 /*12*/].f_10 = 1;
	Global_36852[258 /*12*/].f_11 = 0;
	Global_36852[258 /*12*/].f_4 = 0;
	Global_36852[259 /*12*/] = 685;
	Global_36852[259 /*12*/].f_1 = 686;
	Global_36852[259 /*12*/].f_2 = 19;
	Global_36852[259 /*12*/].f_3 = 1;
	Global_36852[259 /*12*/].f_10 = 1;
	Global_36852[259 /*12*/].f_11 = 0;
	Global_36852[259 /*12*/].f_4 = 0;
	Global_36852[260 /*12*/] = 687;
	Global_36852[260 /*12*/].f_1 = 688;
	Global_36852[260 /*12*/].f_2 = 19;
	Global_36852[260 /*12*/].f_3 = 1;
	Global_36852[260 /*12*/].f_10 = 1;
	Global_36852[260 /*12*/].f_11 = 0;
	Global_36852[260 /*12*/].f_4 = 0;
	Global_36852[261 /*12*/] = 691;
	Global_36852[261 /*12*/].f_1 = 692;
	Global_36852[261 /*12*/].f_2 = 19;
	Global_36852[261 /*12*/].f_3 = 1;
	Global_36852[261 /*12*/].f_10 = 1;
	Global_36852[261 /*12*/].f_11 = 0;
	Global_36852[261 /*12*/].f_4 = 0;
	Global_36852[262 /*12*/] = 689;
	Global_36852[262 /*12*/].f_1 = 690;
	Global_36852[262 /*12*/].f_2 = 19;
	Global_36852[262 /*12*/].f_3 = 1;
	Global_36852[262 /*12*/].f_10 = 1;
	Global_36852[262 /*12*/].f_11 = 0;
	Global_36852[262 /*12*/].f_4 = 0;
	Global_36852[263 /*12*/] = 693;
	Global_36852[263 /*12*/].f_1 = 694;
	Global_36852[263 /*12*/].f_2 = 19;
	Global_36852[263 /*12*/].f_3 = 1;
	Global_36852[263 /*12*/].f_10 = 1;
	Global_36852[263 /*12*/].f_11 = 0;
	Global_36852[263 /*12*/].f_4 = 0;
	Global_36852[264 /*12*/] = 695;
	Global_36852[264 /*12*/].f_1 = 696;
	Global_36852[264 /*12*/].f_2 = 19;
	Global_36852[264 /*12*/].f_3 = 1;
	Global_36852[264 /*12*/].f_10 = 1;
	Global_36852[264 /*12*/].f_11 = 0;
	Global_36852[264 /*12*/].f_4 = 0;
	Global_36852[265 /*12*/] = 697;
	Global_36852[265 /*12*/].f_1 = 698;
	Global_36852[265 /*12*/].f_2 = 19;
	Global_36852[265 /*12*/].f_3 = 1;
	Global_36852[265 /*12*/].f_10 = 1;
	Global_36852[265 /*12*/].f_11 = 0;
	Global_36852[265 /*12*/].f_4 = 0;
	Global_36852[266 /*12*/] = 699;
	Global_36852[266 /*12*/].f_1 = 700;
	Global_36852[266 /*12*/].f_2 = 19;
	Global_36852[266 /*12*/].f_3 = 1;
	Global_36852[266 /*12*/].f_10 = 1;
	Global_36852[266 /*12*/].f_11 = 0;
	Global_36852[266 /*12*/].f_4 = 0;
	Global_36852[267 /*12*/] = 701;
	Global_36852[267 /*12*/].f_1 = 702;
	Global_36852[267 /*12*/].f_2 = 19;
	Global_36852[267 /*12*/].f_3 = 1;
	Global_36852[267 /*12*/].f_10 = 1;
	Global_36852[267 /*12*/].f_11 = 0;
	Global_36852[267 /*12*/].f_4 = 0;
	Global_36852[268 /*12*/] = 703;
	Global_36852[268 /*12*/].f_1 = 704;
	Global_36852[268 /*12*/].f_2 = 19;
	Global_36852[268 /*12*/].f_3 = 1;
	Global_36852[268 /*12*/].f_10 = 1;
	Global_36852[268 /*12*/].f_11 = 0;
	Global_36852[268 /*12*/].f_4 = 0;
	Global_36852[269 /*12*/] = 705;
	Global_36852[269 /*12*/].f_1 = 706;
	Global_36852[269 /*12*/].f_2 = 19;
	Global_36852[269 /*12*/].f_3 = 1;
	Global_36852[269 /*12*/].f_10 = 1;
	Global_36852[269 /*12*/].f_11 = 0;
	Global_36852[269 /*12*/].f_4 = 0;
	Global_36852[270 /*12*/] = 707;
	Global_36852[270 /*12*/].f_1 = 708;
	Global_36852[270 /*12*/].f_2 = 16;
	Global_36852[270 /*12*/].f_3 = 0;
	Global_36852[270 /*12*/].f_10 = 1;
	Global_36852[270 /*12*/].f_11 = 0;
	Global_36852[270 /*12*/].f_4 = 0;
	Global_36852[271 /*12*/] = 709;
	Global_36852[271 /*12*/].f_1 = 710;
	Global_36852[271 /*12*/].f_2 = 16;
	Global_36852[271 /*12*/].f_3 = 0;
	Global_36852[271 /*12*/].f_10 = 1;
	Global_36852[271 /*12*/].f_11 = 0;
	Global_36852[271 /*12*/].f_4 = 0;
	Global_36852[272 /*12*/] = 711;
	Global_36852[272 /*12*/].f_1 = 712;
	Global_36852[272 /*12*/].f_2 = 16;
	Global_36852[272 /*12*/].f_3 = 0;
	Global_36852[272 /*12*/].f_10 = 1;
	Global_36852[272 /*12*/].f_11 = 0;
	Global_36852[272 /*12*/].f_4 = 0;
	Global_36852[273 /*12*/] = 713;
	Global_36852[273 /*12*/].f_1 = 714;
	Global_36852[273 /*12*/].f_2 = 16;
	Global_36852[273 /*12*/].f_3 = 0;
	Global_36852[273 /*12*/].f_10 = 1;
	Global_36852[273 /*12*/].f_11 = 0;
	Global_36852[273 /*12*/].f_4 = 0;
	Global_36852[274 /*12*/] = 715;
	Global_36852[274 /*12*/].f_1 = 716;
	Global_36852[274 /*12*/].f_2 = 16;
	Global_36852[274 /*12*/].f_3 = 0;
	Global_36852[274 /*12*/].f_10 = 1;
	Global_36852[274 /*12*/].f_11 = 0;
	Global_36852[274 /*12*/].f_4 = 0;
	Global_36852[275 /*12*/] = 717;
	Global_36852[275 /*12*/].f_1 = 718;
	Global_36852[275 /*12*/].f_2 = 16;
	Global_36852[275 /*12*/].f_3 = 0;
	Global_36852[275 /*12*/].f_10 = 1;
	Global_36852[275 /*12*/].f_11 = 0;
	Global_36852[275 /*12*/].f_4 = 0;
	Global_36852[276 /*12*/] = 719;
	Global_36852[276 /*12*/].f_1 = 720;
	Global_36852[276 /*12*/].f_2 = 16;
	Global_36852[276 /*12*/].f_3 = 0;
	Global_36852[276 /*12*/].f_10 = 1;
	Global_36852[276 /*12*/].f_11 = 0;
	Global_36852[276 /*12*/].f_4 = 0;
	Global_40177[0 /*46*/].f_45 = 0;
	Global_40177[0 /*46*/].f_31 = 0;
	Global_40177[0 /*46*/].f_42 = 0;
	Global_40177[0 /*46*/].f_43 = 0;
	Global_40177[0 /*46*/].f_2 = 2;
	Global_40177[0 /*46*/].f_3[0] = 0;
	Global_40177[0 /*46*/].f_3[1] = 4;
	Global_40177[0 /*46*/].f_30 = 8;
	Global_40177[0 /*46*/].f_8[0] = 0;
	Global_40177[0 /*46*/].f_8[1] = 1;
	Global_40177[0 /*46*/].f_8[2] = 2;
	Global_40177[0 /*46*/].f_8[3] = 3;
	Global_40177[0 /*46*/].f_8[4] = 4;
	Global_40177[0 /*46*/].f_8[5] = 5;
	Global_40177[0 /*46*/].f_8[6] = 6;
	Global_40177[0 /*46*/].f_8[7] = 9;
	Global_40177[1 /*46*/].f_45 = 0;
	Global_40177[1 /*46*/].f_31 = 0;
	Global_40177[1 /*46*/].f_42 = 0;
	Global_40177[1 /*46*/].f_43 = 0;
	Global_40177[1 /*46*/].f_2 = 3;
	Global_40177[1 /*46*/].f_3[0] = 5;
	Global_40177[1 /*46*/].f_3[1] = 0;
	Global_40177[1 /*46*/].f_3[2] = 4;
	Global_40177[1 /*46*/].f_30 = 3;
	Global_40177[1 /*46*/].f_8[0] = 10;
	Global_40177[1 /*46*/].f_8[1] = 11;
	Global_40177[1 /*46*/].f_8[2] = 16;
	Global_40177[2 /*46*/].f_45 = 0;
	Global_40177[2 /*46*/].f_31 = 0;
	Global_40177[2 /*46*/].f_42 = 0;
	Global_40177[2 /*46*/].f_43 = 0;
	Global_40177[2 /*46*/].f_2 = 2;
	Global_40177[2 /*46*/].f_3[0] = 7;
	Global_40177[2 /*46*/].f_3[1] = 1;
	Global_40177[2 /*46*/].f_30 = 1;
	Global_40177[2 /*46*/].f_8[0] = 12;
	Global_40177[3 /*46*/].f_45 = 0;
	Global_40177[3 /*46*/].f_31 = 0;
	Global_40177[3 /*46*/].f_42 = 0;
	Global_40177[3 /*46*/].f_43 = 0;
	Global_40177[3 /*46*/].f_2 = 2;
	Global_40177[3 /*46*/].f_3[0] = 7;
	Global_40177[3 /*46*/].f_3[1] = 1;
	Global_40177[3 /*46*/].f_30 = 1;
	Global_40177[3 /*46*/].f_8[0] = 14;
	Global_40177[4 /*46*/].f_45 = 0;
	Global_40177[4 /*46*/].f_31 = 0;
	Global_40177[4 /*46*/].f_42 = 0;
	Global_40177[4 /*46*/].f_43 = 0;
	Global_40177[4 /*46*/].f_2 = 2;
	Global_40177[4 /*46*/].f_3[0] = 7;
	Global_40177[4 /*46*/].f_3[1] = 1;
	Global_40177[4 /*46*/].f_30 = 1;
	Global_40177[4 /*46*/].f_8[0] = 13;
	Global_40177[5 /*46*/].f_45 = 0;
	Global_40177[5 /*46*/].f_31 = 0;
	Global_40177[5 /*46*/].f_42 = 0;
	Global_40177[5 /*46*/].f_43 = 0;
	Global_40177[5 /*46*/].f_2 = 2;
	Global_40177[5 /*46*/].f_3[0] = 7;
	Global_40177[5 /*46*/].f_3[1] = 1;
	Global_40177[5 /*46*/].f_30 = 1;
	Global_40177[5 /*46*/].f_8[0] = 15;
	Global_40177[6 /*46*/].f_45 = 0;
	Global_40177[6 /*46*/].f_31 = 0;
	Global_40177[6 /*46*/].f_42 = 0;
	Global_40177[6 /*46*/].f_43 = 0;
	Global_40177[6 /*46*/].f_2 = 2;
	Global_40177[6 /*46*/].f_3[0] = 0;
	Global_40177[6 /*46*/].f_3[1] = 8;
	Global_40177[6 /*46*/].f_30 = 5;
	Global_40177[6 /*46*/].f_8[0] = 17;
	Global_40177[6 /*46*/].f_8[1] = 19;
	Global_40177[6 /*46*/].f_8[2] = 20;
	Global_40177[6 /*46*/].f_8[3] = 21;
	Global_40177[6 /*46*/].f_8[4] = 22;
	Global_40177[7 /*46*/].f_45 = 0;
	Global_40177[7 /*46*/].f_31 = 0;
	Global_40177[7 /*46*/].f_42 = 0;
	Global_40177[7 /*46*/].f_43 = 0;
	Global_40177[7 /*46*/].f_2 = 2;
	Global_40177[7 /*46*/].f_3[0] = 1;
	Global_40177[7 /*46*/].f_3[1] = 9;
	Global_40177[7 /*46*/].f_30 = 5;
	Global_40177[7 /*46*/].f_8[0] = 18;
	Global_40177[7 /*46*/].f_8[1] = 24;
	Global_40177[7 /*46*/].f_8[2] = 25;
	Global_40177[7 /*46*/].f_8[3] = 26;
	Global_40177[7 /*46*/].f_8[4] = 27;
	Global_40177[8 /*46*/].f_45 = 0;
	Global_40177[8 /*46*/].f_31 = 0;
	Global_40177[8 /*46*/].f_42 = 0;
	Global_40177[8 /*46*/].f_43 = 0;
	Global_40177[8 /*46*/].f_2 = 2;
	Global_40177[8 /*46*/].f_3[0] = 2;
	Global_40177[8 /*46*/].f_3[1] = 10;
	Global_40177[8 /*46*/].f_30 = 4;
	Global_40177[8 /*46*/].f_8[0] = 23;
	Global_40177[8 /*46*/].f_8[1] = 28;
	Global_40177[8 /*46*/].f_8[2] = 29;
	Global_40177[8 /*46*/].f_8[3] = 30;
	Global_40177[9 /*46*/].f_45 = 0;
	Global_40177[9 /*46*/].f_31 = 0;
	Global_40177[9 /*46*/].f_42 = 0;
	Global_40177[9 /*46*/].f_43 = 0;
	Global_40177[9 /*46*/].f_2 = 1;
	Global_40177[9 /*46*/].f_3[0] = 11;
	Global_40177[9 /*46*/].f_30 = 3;
	Global_40177[9 /*46*/].f_8[0] = 31;
	Global_40177[9 /*46*/].f_8[1] = 32;
	Global_40177[9 /*46*/].f_8[2] = 33;
	Global_40177[10 /*46*/].f_45 = 0;
	Global_40177[10 /*46*/].f_31 = 0;
	Global_40177[10 /*46*/].f_42 = 0;
	Global_40177[10 /*46*/].f_43 = 0;
	Global_40177[10 /*46*/].f_2 = 1;
	Global_40177[10 /*46*/].f_3[0] = 13;
	Global_40177[10 /*46*/].f_30 = 3;
	Global_40177[10 /*46*/].f_8[0] = 34;
	Global_40177[10 /*46*/].f_8[1] = 35;
	Global_40177[10 /*46*/].f_8[2] = 36;
	Global_40177[11 /*46*/].f_45 = 0;
	Global_40177[11 /*46*/].f_31 = 0;
	Global_40177[11 /*46*/].f_42 = 0;
	Global_40177[11 /*46*/].f_43 = 0;
	Global_40177[11 /*46*/].f_2 = 1;
	Global_40177[11 /*46*/].f_3[0] = 14;
	Global_40177[11 /*46*/].f_30 = 3;
	Global_40177[11 /*46*/].f_8[0] = 37;
	Global_40177[11 /*46*/].f_8[1] = 38;
	Global_40177[11 /*46*/].f_8[2] = 39;
	Global_40177[12 /*46*/].f_45 = 0;
	Global_40177[12 /*46*/].f_31 = 0;
	Global_40177[12 /*46*/].f_42 = 0;
	Global_40177[12 /*46*/].f_43 = 0;
	Global_40177[12 /*46*/].f_2 = 1;
	Global_40177[12 /*46*/].f_3[0] = 12;
	Global_40177[12 /*46*/].f_30 = 6;
	Global_40177[12 /*46*/].f_8[0] = 40;
	Global_40177[12 /*46*/].f_8[1] = 41;
	Global_40177[12 /*46*/].f_8[2] = 42;
	Global_40177[12 /*46*/].f_8[3] = 191;
	Global_40177[12 /*46*/].f_8[4] = 192;
	Global_40177[12 /*46*/].f_8[5] = 193;
	Global_40177[13 /*46*/].f_45 = 0;
	Global_40177[13 /*46*/].f_31 = 0;
	Global_40177[13 /*46*/].f_42 = 0;
	Global_40177[13 /*46*/].f_43 = 0;
	Global_40177[13 /*46*/].f_2 = 2;
	Global_40177[13 /*46*/].f_3[0] = 7;
	Global_40177[13 /*46*/].f_3[1] = 0;
	Global_40177[13 /*46*/].f_30 = 1;
	Global_40177[13 /*46*/].f_8[0] = 43;
	Global_40177[14 /*46*/].f_45 = 0;
	Global_40177[14 /*46*/].f_31 = 0;
	Global_40177[14 /*46*/].f_42 = 0;
	Global_40177[14 /*46*/].f_43 = 0;
	Global_40177[14 /*46*/].f_2 = 4;
	Global_40177[14 /*46*/].f_3[0] = 15;
	Global_40177[14 /*46*/].f_3[1] = 0;
	Global_40177[14 /*46*/].f_3[2] = 1;
	Global_40177[14 /*46*/].f_3[3] = 2;
	Global_40177[14 /*46*/].f_30 = 3;
	Global_40177[14 /*46*/].f_8[0] = 44;
	Global_40177[14 /*46*/].f_8[1] = 45;
	Global_40177[14 /*46*/].f_8[2] = 46;
	Global_40177[15 /*46*/].f_45 = 0;
	Global_40177[15 /*46*/].f_31 = 0;
	Global_40177[15 /*46*/].f_42 = 0;
	Global_40177[15 /*46*/].f_43 = 0;
	Global_40177[15 /*46*/].f_2 = 4;
	Global_40177[15 /*46*/].f_3[0] = 16;
	Global_40177[15 /*46*/].f_3[1] = 0;
	Global_40177[15 /*46*/].f_3[2] = 1;
	Global_40177[15 /*46*/].f_3[3] = 2;
	Global_40177[15 /*46*/].f_30 = 1;
	Global_40177[15 /*46*/].f_8[0] = 47;
	Global_40177[16 /*46*/].f_45 = 0;
	Global_40177[16 /*46*/].f_31 = 0;
	Global_40177[16 /*46*/].f_42 = 0;
	Global_40177[16 /*46*/].f_43 = 0;
	Global_40177[16 /*46*/].f_2 = 4;
	Global_40177[16 /*46*/].f_3[0] = 16;
	Global_40177[16 /*46*/].f_3[1] = 0;
	Global_40177[16 /*46*/].f_3[2] = 1;
	Global_40177[16 /*46*/].f_3[3] = 2;
	Global_40177[16 /*46*/].f_30 = 1;
	Global_40177[16 /*46*/].f_8[0] = 48;
	Global_40177[17 /*46*/].f_45 = 0;
	Global_40177[17 /*46*/].f_31 = 0;
	Global_40177[17 /*46*/].f_42 = 0;
	Global_40177[17 /*46*/].f_43 = 0;
	Global_40177[17 /*46*/].f_2 = 4;
	Global_40177[17 /*46*/].f_3[0] = 0;
	Global_40177[17 /*46*/].f_3[1] = 1;
	Global_40177[17 /*46*/].f_3[2] = 2;
	Global_40177[17 /*46*/].f_3[3] = 16;
	Global_40177[17 /*46*/].f_30 = 1;
	Global_40177[17 /*46*/].f_8[0] = 49;
	Global_40177[18 /*46*/].f_45 = 0;
	Global_40177[18 /*46*/].f_31 = 0;
	Global_40177[18 /*46*/].f_42 = 0;
	Global_40177[18 /*46*/].f_43 = 0;
	Global_40177[18 /*46*/].f_2 = 4;
	Global_40177[18 /*46*/].f_3[0] = 0;
	Global_40177[18 /*46*/].f_3[1] = 1;
	Global_40177[18 /*46*/].f_3[2] = 2;
	Global_40177[18 /*46*/].f_3[3] = 16;
	Global_40177[18 /*46*/].f_30 = 1;
	Global_40177[18 /*46*/].f_8[0] = 50;
	Global_40177[19 /*46*/].f_45 = 0;
	Global_40177[19 /*46*/].f_31 = 0;
	Global_40177[19 /*46*/].f_42 = 0;
	Global_40177[19 /*46*/].f_43 = 0;
	Global_40177[19 /*46*/].f_2 = 4;
	Global_40177[19 /*46*/].f_3[0] = 0;
	Global_40177[19 /*46*/].f_3[1] = 1;
	Global_40177[19 /*46*/].f_3[2] = 2;
	Global_40177[19 /*46*/].f_3[3] = 16;
	Global_40177[19 /*46*/].f_30 = 1;
	Global_40177[19 /*46*/].f_8[0] = 51;
	Global_40177[20 /*46*/].f_45 = 0;
	Global_40177[20 /*46*/].f_31 = 0;
	Global_40177[20 /*46*/].f_42 = 0;
	Global_40177[20 /*46*/].f_43 = 0;
	Global_40177[20 /*46*/].f_2 = 4;
	Global_40177[20 /*46*/].f_3[0] = 0;
	Global_40177[20 /*46*/].f_3[1] = 1;
	Global_40177[20 /*46*/].f_3[2] = 2;
	Global_40177[20 /*46*/].f_3[3] = 16;
	Global_40177[20 /*46*/].f_30 = 1;
	Global_40177[20 /*46*/].f_8[0] = 52;
	Global_40177[21 /*46*/].f_45 = 0;
	Global_40177[21 /*46*/].f_31 = 0;
	Global_40177[21 /*46*/].f_42 = 0;
	Global_40177[21 /*46*/].f_43 = 0;
	Global_40177[21 /*46*/].f_2 = 4;
	Global_40177[21 /*46*/].f_3[0] = 16;
	Global_40177[21 /*46*/].f_3[1] = 0;
	Global_40177[21 /*46*/].f_3[2] = 1;
	Global_40177[21 /*46*/].f_3[3] = 2;
	Global_40177[21 /*46*/].f_30 = 1;
	Global_40177[21 /*46*/].f_8[0] = 53;
	Global_40177[22 /*46*/].f_45 = 0;
	Global_40177[22 /*46*/].f_31 = 0;
	Global_40177[22 /*46*/].f_42 = 0;
	Global_40177[22 /*46*/].f_43 = 0;
	Global_40177[22 /*46*/].f_2 = 4;
	Global_40177[22 /*46*/].f_3[0] = 0;
	Global_40177[22 /*46*/].f_3[1] = 1;
	Global_40177[22 /*46*/].f_3[2] = 2;
	Global_40177[22 /*46*/].f_3[3] = 16;
	Global_40177[22 /*46*/].f_30 = 1;
	Global_40177[22 /*46*/].f_8[0] = 54;
	Global_40177[23 /*46*/].f_45 = 0;
	Global_40177[23 /*46*/].f_31 = 0;
	Global_40177[23 /*46*/].f_42 = 0;
	Global_40177[23 /*46*/].f_43 = 0;
	Global_40177[23 /*46*/].f_2 = 1;
	Global_40177[23 /*46*/].f_3[0] = 12;
	Global_40177[23 /*46*/].f_30 = 3;
	Global_40177[23 /*46*/].f_8[0] = 55;
	Global_40177[23 /*46*/].f_8[1] = 58;
	Global_40177[23 /*46*/].f_8[2] = 59;
	Global_40177[24 /*46*/].f_45 = 0;
	Global_40177[24 /*46*/].f_31 = 0;
	Global_40177[24 /*46*/].f_42 = 0;
	Global_40177[24 /*46*/].f_43 = 0;
	Global_40177[24 /*46*/].f_2 = 1;
	Global_40177[24 /*46*/].f_3[0] = 14;
	Global_40177[24 /*46*/].f_30 = 3;
	Global_40177[24 /*46*/].f_8[0] = 56;
	Global_40177[24 /*46*/].f_8[1] = 60;
	Global_40177[24 /*46*/].f_8[2] = 61;
	Global_40177[25 /*46*/].f_45 = 0;
	Global_40177[25 /*46*/].f_31 = 0;
	Global_40177[25 /*46*/].f_42 = 0;
	Global_40177[25 /*46*/].f_43 = 0;
	Global_40177[25 /*46*/].f_2 = 1;
	Global_40177[25 /*46*/].f_3[0] = 12;
	Global_40177[25 /*46*/].f_30 = 3;
	Global_40177[25 /*46*/].f_8[0] = 57;
	Global_40177[25 /*46*/].f_8[1] = 62;
	Global_40177[25 /*46*/].f_8[2] = 63;
	Global_40177[26 /*46*/].f_45 = 0;
	Global_40177[26 /*46*/].f_31 = 0;
	Global_40177[26 /*46*/].f_42 = 0;
	Global_40177[26 /*46*/].f_43 = 0;
	Global_40177[26 /*46*/].f_2 = 4;
	Global_40177[26 /*46*/].f_3[0] = 1;
	Global_40177[26 /*46*/].f_3[1] = 0;
	Global_40177[26 /*46*/].f_3[2] = 2;
	Global_40177[26 /*46*/].f_3[3] = 20;
	Global_40177[26 /*46*/].f_30 = 1;
	Global_40177[26 /*46*/].f_8[0] = 64;
	Global_40177[27 /*46*/].f_45 = 0;
	Global_40177[27 /*46*/].f_31 = 0;
	Global_40177[27 /*46*/].f_42 = 0;
	Global_40177[27 /*46*/].f_43 = 0;
	Global_40177[27 /*46*/].f_2 = 4;
	Global_40177[27 /*46*/].f_3[0] = 17;
	Global_40177[27 /*46*/].f_3[1] = 0;
	Global_40177[27 /*46*/].f_3[2] = 1;
	Global_40177[27 /*46*/].f_3[3] = 2;
	Global_40177[27 /*46*/].f_30 = 1;
	Global_40177[27 /*46*/].f_8[0] = 66;
	Global_40177[28 /*46*/].f_45 = 0;
	Global_40177[28 /*46*/].f_31 = 0;
	Global_40177[28 /*46*/].f_42 = 0;
	Global_40177[28 /*46*/].f_43 = 0;
	Global_40177[28 /*46*/].f_2 = 4;
	Global_40177[28 /*46*/].f_3[0] = 18;
	Global_40177[28 /*46*/].f_3[1] = 0;
	Global_40177[28 /*46*/].f_3[2] = 1;
	Global_40177[28 /*46*/].f_3[3] = 2;
	Global_40177[28 /*46*/].f_30 = 1;
	Global_40177[28 /*46*/].f_8[0] = 65;
	Global_40177[29 /*46*/].f_45 = 0;
	Global_40177[29 /*46*/].f_31 = 0;
	Global_40177[29 /*46*/].f_42 = 0;
	Global_40177[29 /*46*/].f_43 = 0;
	Global_40177[29 /*46*/].f_2 = 2;
	Global_40177[29 /*46*/].f_3[0] = 2;
	Global_40177[29 /*46*/].f_3[1] = 63;
	Global_40177[29 /*46*/].f_30 = 1;
	Global_40177[29 /*46*/].f_8[0] = 67;
	Global_40177[30 /*46*/].f_45 = 0;
	Global_40177[30 /*46*/].f_31 = 0;
	Global_40177[30 /*46*/].f_42 = 0;
	Global_40177[30 /*46*/].f_43 = 0;
	Global_40177[30 /*46*/].f_2 = 3;
	Global_40177[30 /*46*/].f_3[0] = 0;
	Global_40177[30 /*46*/].f_3[1] = 1;
	Global_40177[30 /*46*/].f_3[2] = 2;
	Global_40177[30 /*46*/].f_30 = 1;
	Global_40177[30 /*46*/].f_8[0] = 68;
	Global_40177[31 /*46*/].f_45 = 0;
	Global_40177[31 /*46*/].f_31 = 0;
	Global_40177[31 /*46*/].f_42 = 0;
	Global_40177[31 /*46*/].f_43 = 0;
	Global_40177[31 /*46*/].f_2 = 2;
	Global_40177[31 /*46*/].f_3[0] = 0;
	Global_40177[31 /*46*/].f_3[1] = 64;
	Global_40177[31 /*46*/].f_30 = 1;
	Global_40177[31 /*46*/].f_8[0] = 69;
	Global_40177[32 /*46*/].f_45 = 0;
	Global_40177[32 /*46*/].f_31 = 0;
	Global_40177[32 /*46*/].f_42 = 0;
	Global_40177[32 /*46*/].f_43 = 0;
	Global_40177[32 /*46*/].f_2 = 2;
	Global_40177[32 /*46*/].f_3[0] = 1;
	Global_40177[32 /*46*/].f_3[1] = 64;
	Global_40177[32 /*46*/].f_30 = 1;
	Global_40177[32 /*46*/].f_8[0] = 70;
	Global_40177[33 /*46*/].f_45 = 0;
	Global_40177[33 /*46*/].f_31 = 0;
	Global_40177[33 /*46*/].f_42 = 0;
	Global_40177[33 /*46*/].f_43 = 0;
	Global_40177[33 /*46*/].f_2 = 2;
	Global_40177[33 /*46*/].f_3[0] = 2;
	Global_40177[33 /*46*/].f_3[1] = 64;
	Global_40177[33 /*46*/].f_30 = 1;
	Global_40177[33 /*46*/].f_8[0] = 71;
	Global_40177[34 /*46*/].f_45 = 0;
	Global_40177[34 /*46*/].f_31 = 0;
	Global_40177[34 /*46*/].f_42 = 0;
	Global_40177[34 /*46*/].f_43 = 0;
	Global_40177[34 /*46*/].f_2 = 1;
	Global_40177[34 /*46*/].f_3[0] = 21;
	Global_40177[34 /*46*/].f_30 = 1;
	Global_40177[34 /*46*/].f_8[0] = 72;
	Global_40177[35 /*46*/].f_45 = 0;
	Global_40177[35 /*46*/].f_31 = 0;
	Global_40177[35 /*46*/].f_42 = 0;
	Global_40177[35 /*46*/].f_43 = 0;
	Global_40177[35 /*46*/].f_2 = 1;
	Global_40177[35 /*46*/].f_3[0] = 21;
	Global_40177[35 /*46*/].f_30 = 1;
	Global_40177[35 /*46*/].f_8[0] = 73;
	Global_40177[36 /*46*/].f_45 = 0;
	Global_40177[36 /*46*/].f_31 = 0;
	Global_40177[36 /*46*/].f_42 = 0;
	Global_40177[36 /*46*/].f_43 = 0;
	Global_40177[36 /*46*/].f_2 = 1;
	Global_40177[36 /*46*/].f_3[0] = 21;
	Global_40177[36 /*46*/].f_30 = 1;
	Global_40177[36 /*46*/].f_8[0] = 74;
	Global_40177[37 /*46*/].f_45 = 0;
	Global_40177[37 /*46*/].f_31 = 0;
	Global_40177[37 /*46*/].f_42 = 0;
	Global_40177[37 /*46*/].f_43 = 0;
	Global_40177[37 /*46*/].f_2 = 2;
	Global_40177[37 /*46*/].f_3[0] = 6;
	Global_40177[37 /*46*/].f_3[1] = 2;
	Global_40177[37 /*46*/].f_30 = 9;
	Global_40177[37 /*46*/].f_8[0] = 75;
	Global_40177[37 /*46*/].f_8[1] = 76;
	Global_40177[37 /*46*/].f_8[2] = 77;
	Global_40177[37 /*46*/].f_8[3] = 78;
	Global_40177[37 /*46*/].f_8[4] = 79;
	Global_40177[37 /*46*/].f_8[5] = 80;
	Global_40177[37 /*46*/].f_8[6] = 81;
	Global_40177[37 /*46*/].f_8[7] = 82;
	Global_40177[37 /*46*/].f_8[8] = 83;
	Global_40177[38 /*46*/].f_45 = 0;
	Global_40177[38 /*46*/].f_31 = 0;
	Global_40177[38 /*46*/].f_42 = 0;
	Global_40177[38 /*46*/].f_43 = 0;
	Global_40177[38 /*46*/].f_2 = 2;
	Global_40177[38 /*46*/].f_3[0] = 0;
	Global_40177[38 /*46*/].f_3[1] = 4;
	Global_40177[38 /*46*/].f_30 = 1;
	Global_40177[38 /*46*/].f_8[0] = 84;
	Global_40177[39 /*46*/].f_45 = 0;
	Global_40177[39 /*46*/].f_31 = 0;
	Global_40177[39 /*46*/].f_42 = 0;
	Global_40177[39 /*46*/].f_43 = 0;
	Global_40177[39 /*46*/].f_2 = 4;
	Global_40177[39 /*46*/].f_3[0] = 22;
	Global_40177[39 /*46*/].f_3[1] = 0;
	Global_40177[39 /*46*/].f_3[2] = 1;
	Global_40177[39 /*46*/].f_3[3] = 2;
	Global_40177[39 /*46*/].f_30 = 1;
	Global_40177[39 /*46*/].f_8[0] = 85;
	Global_40177[40 /*46*/].f_45 = 0;
	Global_40177[40 /*46*/].f_31 = 0;
	Global_40177[40 /*46*/].f_42 = 0;
	Global_40177[40 /*46*/].f_43 = 0;
	Global_40177[40 /*46*/].f_2 = 2;
	Global_40177[40 /*46*/].f_3[0] = 0;
	Global_40177[40 /*46*/].f_3[1] = 24;
	Global_40177[40 /*46*/].f_30 = 3;
	Global_40177[40 /*46*/].f_8[0] = 86;
	Global_40177[40 /*46*/].f_8[1] = 87;
	Global_40177[40 /*46*/].f_8[2] = 88;
	Global_40177[41 /*46*/].f_45 = 0;
	Global_40177[41 /*46*/].f_31 = 0;
	Global_40177[41 /*46*/].f_42 = 0;
	Global_40177[41 /*46*/].f_43 = 0;
	Global_40177[41 /*46*/].f_2 = 2;
	Global_40177[41 /*46*/].f_3[0] = 0;
	Global_40177[41 /*46*/].f_3[1] = 24;
	Global_40177[41 /*46*/].f_30 = 3;
	Global_40177[41 /*46*/].f_8[0] = 89;
	Global_40177[41 /*46*/].f_8[1] = 90;
	Global_40177[41 /*46*/].f_8[2] = 91;
	Global_40177[42 /*46*/].f_45 = 0;
	Global_40177[42 /*46*/].f_31 = 0;
	Global_40177[42 /*46*/].f_42 = 0;
	Global_40177[42 /*46*/].f_43 = 0;
	Global_40177[42 /*46*/].f_2 = 2;
	Global_40177[42 /*46*/].f_3[0] = 0;
	Global_40177[42 /*46*/].f_3[1] = 25;
	Global_40177[42 /*46*/].f_30 = 5;
	Global_40177[42 /*46*/].f_8[0] = 92;
	Global_40177[42 /*46*/].f_8[1] = 93;
	Global_40177[42 /*46*/].f_8[2] = 94;
	Global_40177[42 /*46*/].f_8[3] = 95;
	Global_40177[42 /*46*/].f_8[4] = 96;
	Global_40177[43 /*46*/].f_45 = 0;
	Global_40177[43 /*46*/].f_31 = 0;
	Global_40177[43 /*46*/].f_42 = 0;
	Global_40177[43 /*46*/].f_43 = 0;
	Global_40177[43 /*46*/].f_2 = 2;
	Global_40177[43 /*46*/].f_3[0] = 26;
	Global_40177[43 /*46*/].f_3[1] = 0;
	Global_40177[43 /*46*/].f_30 = 2;
	Global_40177[43 /*46*/].f_8[0] = 97;
	Global_40177[43 /*46*/].f_8[1] = 98;
	Global_40177[44 /*46*/].f_45 = 0;
	Global_40177[44 /*46*/].f_31 = 0;
	Global_40177[44 /*46*/].f_42 = 0;
	Global_40177[44 /*46*/].f_43 = 0;
	Global_40177[44 /*46*/].f_2 = 2;
	Global_40177[44 /*46*/].f_3[0] = 27;
	Global_40177[44 /*46*/].f_3[1] = 0;
	Global_40177[44 /*46*/].f_30 = 2;
	Global_40177[44 /*46*/].f_8[0] = 99;
	Global_40177[44 /*46*/].f_8[1] = 100;
	Global_40177[45 /*46*/].f_45 = 0;
	Global_40177[45 /*46*/].f_31 = 0;
	Global_40177[45 /*46*/].f_42 = 0;
	Global_40177[45 /*46*/].f_43 = 0;
	Global_40177[45 /*46*/].f_2 = 3;
	Global_40177[45 /*46*/].f_3[0] = 0;
	Global_40177[45 /*46*/].f_3[1] = 2;
	Global_40177[45 /*46*/].f_3[2] = 28;
	Global_40177[45 /*46*/].f_30 = 1;
	Global_40177[45 /*46*/].f_8[0] = 101;
	Global_40177[46 /*46*/].f_45 = 0;
	Global_40177[46 /*46*/].f_31 = 0;
	Global_40177[46 /*46*/].f_42 = 0;
	Global_40177[46 /*46*/].f_43 = 0;
	Global_40177[46 /*46*/].f_2 = 2;
	Global_40177[46 /*46*/].f_3[0] = 0;
	Global_40177[46 /*46*/].f_3[1] = 26;
	Global_40177[46 /*46*/].f_30 = 2;
	Global_40177[46 /*46*/].f_8[0] = 102;
	Global_40177[46 /*46*/].f_8[1] = 103;
	Global_40177[47 /*46*/].f_45 = 0;
	Global_40177[47 /*46*/].f_31 = 0;
	Global_40177[47 /*46*/].f_42 = 0;
	Global_40177[47 /*46*/].f_43 = 0;
	Global_40177[47 /*46*/].f_2 = 2;
	Global_40177[47 /*46*/].f_3[0] = 0;
	Global_40177[47 /*46*/].f_3[1] = 29;
	Global_40177[47 /*46*/].f_30 = 2;
	Global_40177[47 /*46*/].f_8[0] = 104;
	Global_40177[47 /*46*/].f_8[1] = 105;
	Global_40177[48 /*46*/].f_45 = 0;
	Global_40177[48 /*46*/].f_31 = 0;
	Global_40177[48 /*46*/].f_42 = 0;
	Global_40177[48 /*46*/].f_43 = 0;
	Global_40177[48 /*46*/].f_2 = 2;
	Global_40177[48 /*46*/].f_3[0] = 1;
	Global_40177[48 /*46*/].f_3[1] = 30;
	Global_40177[48 /*46*/].f_30 = 5;
	Global_40177[48 /*46*/].f_8[0] = 106;
	Global_40177[48 /*46*/].f_8[1] = 107;
	Global_40177[48 /*46*/].f_8[2] = 108;
	Global_40177[48 /*46*/].f_8[3] = 109;
	Global_40177[48 /*46*/].f_8[4] = 110;
	Global_40177[49 /*46*/].f_45 = 0;
	Global_40177[49 /*46*/].f_31 = 0;
	Global_40177[49 /*46*/].f_42 = 0;
	Global_40177[49 /*46*/].f_43 = 0;
	Global_40177[49 /*46*/].f_2 = 2;
	Global_40177[49 /*46*/].f_3[0] = 1;
	Global_40177[49 /*46*/].f_3[1] = 31;
	Global_40177[49 /*46*/].f_30 = 2;
	Global_40177[49 /*46*/].f_8[0] = 111;
	Global_40177[49 /*46*/].f_8[1] = 112;
	Global_40177[50 /*46*/].f_45 = 0;
	Global_40177[50 /*46*/].f_31 = 0;
	Global_40177[50 /*46*/].f_42 = 0;
	Global_40177[50 /*46*/].f_43 = 0;
	Global_40177[50 /*46*/].f_2 = 2;
	Global_40177[50 /*46*/].f_3[0] = 1;
	Global_40177[50 /*46*/].f_3[1] = 32;
	Global_40177[50 /*46*/].f_30 = 3;
	Global_40177[50 /*46*/].f_8[0] = 113;
	Global_40177[50 /*46*/].f_8[1] = 114;
	Global_40177[50 /*46*/].f_8[2] = 115;
	Global_40177[51 /*46*/].f_45 = 0;
	Global_40177[51 /*46*/].f_31 = 0;
	Global_40177[51 /*46*/].f_42 = 0;
	Global_40177[51 /*46*/].f_43 = 0;
	Global_40177[51 /*46*/].f_2 = 2;
	Global_40177[51 /*46*/].f_3[0] = 1;
	Global_40177[51 /*46*/].f_3[1] = 32;
	Global_40177[51 /*46*/].f_30 = 2;
	Global_40177[51 /*46*/].f_8[0] = 116;
	Global_40177[51 /*46*/].f_8[1] = 117;
	Global_40177[52 /*46*/].f_45 = 0;
	Global_40177[52 /*46*/].f_31 = 0;
	Global_40177[52 /*46*/].f_42 = 0;
	Global_40177[52 /*46*/].f_43 = 0;
	Global_40177[52 /*46*/].f_2 = 2;
	Global_40177[52 /*46*/].f_3[0] = 1;
	Global_40177[52 /*46*/].f_3[1] = 32;
	Global_40177[52 /*46*/].f_30 = 2;
	Global_40177[52 /*46*/].f_8[0] = 118;
	Global_40177[52 /*46*/].f_8[1] = 119;
	Global_40177[53 /*46*/].f_45 = 0;
	Global_40177[53 /*46*/].f_31 = 0;
	Global_40177[53 /*46*/].f_42 = 0;
	Global_40177[53 /*46*/].f_43 = 0;
	Global_40177[53 /*46*/].f_2 = 2;
	Global_40177[53 /*46*/].f_3[0] = 1;
	Global_40177[53 /*46*/].f_3[1] = 32;
	Global_40177[53 /*46*/].f_30 = 4;
	Global_40177[53 /*46*/].f_8[0] = 120;
	Global_40177[53 /*46*/].f_8[1] = 121;
	Global_40177[53 /*46*/].f_8[2] = 122;
	Global_40177[53 /*46*/].f_8[3] = 123;
	Global_40177[54 /*46*/].f_45 = 0;
	Global_40177[54 /*46*/].f_31 = 0;
	Global_40177[54 /*46*/].f_42 = 0;
	Global_40177[54 /*46*/].f_43 = 0;
	Global_40177[54 /*46*/].f_2 = 2;
	Global_40177[54 /*46*/].f_3[0] = 1;
	Global_40177[54 /*46*/].f_3[1] = 27;
	Global_40177[54 /*46*/].f_30 = 2;
	Global_40177[54 /*46*/].f_8[0] = 124;
	Global_40177[54 /*46*/].f_8[1] = 125;
	Global_40177[55 /*46*/].f_45 = 0;
	Global_40177[55 /*46*/].f_31 = 0;
	Global_40177[55 /*46*/].f_42 = 0;
	Global_40177[55 /*46*/].f_43 = 0;
	Global_40177[55 /*46*/].f_2 = 2;
	Global_40177[55 /*46*/].f_3[0] = 1;
	Global_40177[55 /*46*/].f_3[1] = 2;
	Global_40177[55 /*46*/].f_30 = 5;
	Global_40177[55 /*46*/].f_8[0] = 126;
	Global_40177[55 /*46*/].f_8[1] = 127;
	Global_40177[55 /*46*/].f_8[2] = 128;
	Global_40177[55 /*46*/].f_8[3] = 129;
	Global_40177[55 /*46*/].f_8[4] = 130;
	Global_40177[56 /*46*/].f_45 = 0;
	Global_40177[56 /*46*/].f_31 = 0;
	Global_40177[56 /*46*/].f_42 = 0;
	Global_40177[56 /*46*/].f_43 = 0;
	Global_40177[56 /*46*/].f_2 = 2;
	Global_40177[56 /*46*/].f_3[0] = 1;
	Global_40177[56 /*46*/].f_3[1] = 0;
	Global_40177[56 /*46*/].f_30 = 3;
	Global_40177[56 /*46*/].f_8[0] = 131;
	Global_40177[56 /*46*/].f_8[1] = 132;
	Global_40177[56 /*46*/].f_8[2] = 133;
	Global_40177[57 /*46*/].f_45 = 0;
	Global_40177[57 /*46*/].f_31 = 0;
	Global_40177[57 /*46*/].f_42 = 0;
	Global_40177[57 /*46*/].f_43 = 0;
	Global_40177[57 /*46*/].f_2 = 2;
	Global_40177[57 /*46*/].f_3[0] = 0;
	Global_40177[57 /*46*/].f_3[1] = 1;
	Global_40177[57 /*46*/].f_30 = 2;
	Global_40177[57 /*46*/].f_8[0] = 134;
	Global_40177[57 /*46*/].f_8[1] = 135;
	Global_40177[58 /*46*/].f_45 = 0;
	Global_40177[58 /*46*/].f_31 = 0;
	Global_40177[58 /*46*/].f_42 = 0;
	Global_40177[58 /*46*/].f_43 = 0;
	Global_40177[58 /*46*/].f_2 = 2;
	Global_40177[58 /*46*/].f_3[0] = 2;
	Global_40177[58 /*46*/].f_3[1] = 33;
	Global_40177[58 /*46*/].f_30 = 2;
	Global_40177[58 /*46*/].f_8[0] = 136;
	Global_40177[58 /*46*/].f_8[1] = 137;
	Global_40177[59 /*46*/].f_45 = 0;
	Global_40177[59 /*46*/].f_31 = 0;
	Global_40177[59 /*46*/].f_42 = 0;
	Global_40177[59 /*46*/].f_43 = 0;
	Global_40177[59 /*46*/].f_2 = 2;
	Global_40177[59 /*46*/].f_3[0] = 2;
	Global_40177[59 /*46*/].f_3[1] = 33;
	Global_40177[59 /*46*/].f_30 = 3;
	Global_40177[59 /*46*/].f_8[0] = 138;
	Global_40177[59 /*46*/].f_8[1] = 139;
	Global_40177[59 /*46*/].f_8[2] = 248;
	Global_40177[60 /*46*/].f_45 = 0;
	Global_40177[60 /*46*/].f_31 = 0;
	Global_40177[60 /*46*/].f_42 = 0;
	Global_40177[60 /*46*/].f_43 = 0;
	Global_40177[60 /*46*/].f_2 = 2;
	Global_40177[60 /*46*/].f_3[0] = 2;
	Global_40177[60 /*46*/].f_3[1] = 33;
	Global_40177[60 /*46*/].f_30 = 1;
	Global_40177[60 /*46*/].f_8[0] = 140;
	Global_40177[61 /*46*/].f_45 = 0;
	Global_40177[61 /*46*/].f_31 = 0;
	Global_40177[61 /*46*/].f_42 = 0;
	Global_40177[61 /*46*/].f_43 = 0;
	Global_40177[61 /*46*/].f_2 = 2;
	Global_40177[61 /*46*/].f_3[0] = 2;
	Global_40177[61 /*46*/].f_3[1] = 29;
	Global_40177[61 /*46*/].f_30 = 2;
	Global_40177[61 /*46*/].f_8[0] = 141;
	Global_40177[61 /*46*/].f_8[1] = 142;
	Global_40177[62 /*46*/].f_45 = 0;
	Global_40177[62 /*46*/].f_31 = 0;
	Global_40177[62 /*46*/].f_42 = 0;
	Global_40177[62 /*46*/].f_43 = 0;
	Global_40177[62 /*46*/].f_2 = 2;
	Global_40177[62 /*46*/].f_3[0] = 3;
	Global_40177[62 /*46*/].f_3[1] = 2;
	Global_40177[62 /*46*/].f_30 = 2;
	Global_40177[62 /*46*/].f_8[0] = 143;
	Global_40177[62 /*46*/].f_8[1] = 144;
	Global_40177[63 /*46*/].f_45 = 0;
	Global_40177[63 /*46*/].f_31 = 0;
	Global_40177[63 /*46*/].f_42 = 0;
	Global_40177[63 /*46*/].f_43 = 0;
	Global_40177[63 /*46*/].f_2 = 2;
	Global_40177[63 /*46*/].f_3[0] = 2;
	Global_40177[63 /*46*/].f_3[1] = 34;
	Global_40177[63 /*46*/].f_30 = 2;
	Global_40177[63 /*46*/].f_8[0] = 145;
	Global_40177[63 /*46*/].f_8[1] = 146;
	Global_40177[64 /*46*/].f_45 = 0;
	Global_40177[64 /*46*/].f_31 = 0;
	Global_40177[64 /*46*/].f_42 = 0;
	Global_40177[64 /*46*/].f_43 = 0;
	Global_40177[64 /*46*/].f_2 = 2;
	Global_40177[64 /*46*/].f_3[0] = 2;
	Global_40177[64 /*46*/].f_3[1] = 26;
	Global_40177[64 /*46*/].f_30 = 1;
	Global_40177[64 /*46*/].f_8[0] = 147;
	Global_40177[65 /*46*/].f_45 = 0;
	Global_40177[65 /*46*/].f_31 = 0;
	Global_40177[65 /*46*/].f_42 = 0;
	Global_40177[65 /*46*/].f_43 = 0;
	Global_40177[65 /*46*/].f_2 = 1;
	Global_40177[65 /*46*/].f_3[0] = 35;
	Global_40177[65 /*46*/].f_30 = 3;
	Global_40177[65 /*46*/].f_8[0] = 148;
	Global_40177[65 /*46*/].f_8[1] = 149;
	Global_40177[65 /*46*/].f_8[2] = 150;
	Global_40177[66 /*46*/].f_45 = 0;
	Global_40177[66 /*46*/].f_31 = 0;
	Global_40177[66 /*46*/].f_42 = 0;
	Global_40177[66 /*46*/].f_43 = 0;
	Global_40177[66 /*46*/].f_2 = 1;
	Global_40177[66 /*46*/].f_3[0] = 36;
	Global_40177[66 /*46*/].f_30 = 3;
	Global_40177[66 /*46*/].f_8[0] = 151;
	Global_40177[66 /*46*/].f_8[1] = 152;
	Global_40177[66 /*46*/].f_8[2] = 153;
	Global_40177[67 /*46*/].f_45 = 0;
	Global_40177[67 /*46*/].f_31 = 0;
	Global_40177[67 /*46*/].f_42 = 0;
	Global_40177[67 /*46*/].f_43 = 0;
	Global_40177[67 /*46*/].f_2 = 2;
	Global_40177[67 /*46*/].f_3[0] = 4;
	Global_40177[67 /*46*/].f_3[1] = 0;
	Global_40177[67 /*46*/].f_30 = 1;
	Global_40177[67 /*46*/].f_8[0] = 7;
	Global_40177[68 /*46*/].f_45 = 0;
	Global_40177[68 /*46*/].f_31 = 0;
	Global_40177[68 /*46*/].f_42 = 0;
	Global_40177[68 /*46*/].f_43 = 0;
	Global_40177[68 /*46*/].f_2 = 2;
	Global_40177[68 /*46*/].f_3[0] = 4;
	Global_40177[68 /*46*/].f_3[1] = 0;
	Global_40177[68 /*46*/].f_30 = 1;
	Global_40177[68 /*46*/].f_8[0] = 8;
	Global_40177[69 /*46*/].f_45 = 0;
	Global_40177[69 /*46*/].f_31 = 0;
	Global_40177[69 /*46*/].f_42 = 0;
	Global_40177[69 /*46*/].f_43 = 0;
	Global_40177[69 /*46*/].f_2 = 2;
	Global_40177[69 /*46*/].f_3[0] = 2;
	Global_40177[69 /*46*/].f_3[1] = 38;
	Global_40177[69 /*46*/].f_30 = 1;
	Global_40177[69 /*46*/].f_8[0] = 154;
	Global_40177[70 /*46*/].f_45 = 0;
	Global_40177[70 /*46*/].f_31 = 0;
	Global_40177[70 /*46*/].f_42 = 0;
	Global_40177[70 /*46*/].f_43 = 0;
	Global_40177[70 /*46*/].f_2 = 1;
	Global_40177[70 /*46*/].f_3[0] = 11;
	Global_40177[70 /*46*/].f_30 = 3;
	Global_40177[70 /*46*/].f_8[0] = 155;
	Global_40177[70 /*46*/].f_8[1] = 156;
	Global_40177[70 /*46*/].f_8[2] = 157;
	Global_40177[71 /*46*/].f_45 = 0;
	Global_40177[71 /*46*/].f_31 = 0;
	Global_40177[71 /*46*/].f_42 = 0;
	Global_40177[71 /*46*/].f_43 = 0;
	Global_40177[71 /*46*/].f_2 = 2;
	Global_40177[71 /*46*/].f_3[0] = 2;
	Global_40177[71 /*46*/].f_3[1] = 29;
	Global_40177[71 /*46*/].f_30 = 1;
	Global_40177[71 /*46*/].f_8[0] = 158;
	Global_40177[72 /*46*/].f_45 = 0;
	Global_40177[72 /*46*/].f_31 = 0;
	Global_40177[72 /*46*/].f_42 = 0;
	Global_40177[72 /*46*/].f_43 = 0;
	Global_40177[72 /*46*/].f_2 = 1;
	Global_40177[72 /*46*/].f_3[0] = 0;
	Global_40177[72 /*46*/].f_30 = 1;
	Global_40177[72 /*46*/].f_8[0] = 159;
	Global_40177[73 /*46*/].f_45 = 0;
	Global_40177[73 /*46*/].f_31 = 0;
	Global_40177[73 /*46*/].f_42 = 0;
	Global_40177[73 /*46*/].f_43 = 0;
	Global_40177[73 /*46*/].f_2 = 1;
	Global_40177[73 /*46*/].f_3[0] = 1;
	Global_40177[73 /*46*/].f_30 = 1;
	Global_40177[73 /*46*/].f_8[0] = 160;
	Global_40177[74 /*46*/].f_45 = 0;
	Global_40177[74 /*46*/].f_31 = 0;
	Global_40177[74 /*46*/].f_42 = 0;
	Global_40177[74 /*46*/].f_43 = 0;
	Global_40177[74 /*46*/].f_2 = 1;
	Global_40177[74 /*46*/].f_3[0] = 1;
	Global_40177[74 /*46*/].f_30 = 1;
	Global_40177[74 /*46*/].f_8[0] = 161;
	Global_40177[75 /*46*/].f_45 = 0;
	Global_40177[75 /*46*/].f_31 = 0;
	Global_40177[75 /*46*/].f_42 = 0;
	Global_40177[75 /*46*/].f_43 = 0;
	Global_40177[75 /*46*/].f_2 = 1;
	Global_40177[75 /*46*/].f_3[0] = 0;
	Global_40177[75 /*46*/].f_30 = 1;
	Global_40177[75 /*46*/].f_8[0] = 162;
	Global_40177[76 /*46*/].f_45 = 0;
	Global_40177[76 /*46*/].f_31 = 0;
	Global_40177[76 /*46*/].f_42 = 0;
	Global_40177[76 /*46*/].f_43 = 0;
	Global_40177[76 /*46*/].f_2 = 1;
	Global_40177[76 /*46*/].f_3[0] = 2;
	Global_40177[76 /*46*/].f_30 = 1;
	Global_40177[76 /*46*/].f_8[0] = 163;
	Global_40177[77 /*46*/].f_45 = 0;
	Global_40177[77 /*46*/].f_31 = 0;
	Global_40177[77 /*46*/].f_42 = 0;
	Global_40177[77 /*46*/].f_43 = 0;
	Global_40177[77 /*46*/].f_2 = 1;
	Global_40177[77 /*46*/].f_3[0] = 1;
	Global_40177[77 /*46*/].f_30 = 1;
	Global_40177[77 /*46*/].f_8[0] = 164;
	Global_40177[78 /*46*/].f_45 = 0;
	Global_40177[78 /*46*/].f_31 = 0;
	Global_40177[78 /*46*/].f_42 = 0;
	Global_40177[78 /*46*/].f_43 = 0;
	Global_40177[78 /*46*/].f_2 = 1;
	Global_40177[78 /*46*/].f_3[0] = 1;
	Global_40177[78 /*46*/].f_30 = 1;
	Global_40177[78 /*46*/].f_8[0] = 165;
	Global_40177[79 /*46*/].f_45 = 0;
	Global_40177[79 /*46*/].f_31 = 0;
	Global_40177[79 /*46*/].f_42 = 0;
	Global_40177[79 /*46*/].f_43 = 0;
	Global_40177[79 /*46*/].f_2 = 1;
	Global_40177[79 /*46*/].f_3[0] = 0;
	Global_40177[79 /*46*/].f_30 = 1;
	Global_40177[79 /*46*/].f_8[0] = 166;
	Global_40177[80 /*46*/].f_45 = 0;
	Global_40177[80 /*46*/].f_31 = 0;
	Global_40177[80 /*46*/].f_42 = 0;
	Global_40177[80 /*46*/].f_43 = 0;
	Global_40177[80 /*46*/].f_2 = 1;
	Global_40177[80 /*46*/].f_3[0] = 0;
	Global_40177[80 /*46*/].f_30 = 1;
	Global_40177[80 /*46*/].f_8[0] = 167;
	Global_40177[81 /*46*/].f_45 = 0;
	Global_40177[81 /*46*/].f_31 = 0;
	Global_40177[81 /*46*/].f_42 = 0;
	Global_40177[81 /*46*/].f_43 = 0;
	Global_40177[81 /*46*/].f_2 = 1;
	Global_40177[81 /*46*/].f_3[0] = 0;
	Global_40177[81 /*46*/].f_30 = 1;
	Global_40177[81 /*46*/].f_8[0] = 168;
	Global_40177[82 /*46*/].f_45 = 0;
	Global_40177[82 /*46*/].f_31 = 0;
	Global_40177[82 /*46*/].f_42 = 0;
	Global_40177[82 /*46*/].f_43 = 0;
	Global_40177[82 /*46*/].f_2 = 1;
	Global_40177[82 /*46*/].f_3[0] = 2;
	Global_40177[82 /*46*/].f_30 = 1;
	Global_40177[82 /*46*/].f_8[0] = 169;
	Global_40177[83 /*46*/].f_45 = 0;
	Global_40177[83 /*46*/].f_31 = 0;
	Global_40177[83 /*46*/].f_42 = 0;
	Global_40177[83 /*46*/].f_43 = 0;
	Global_40177[83 /*46*/].f_2 = 1;
	Global_40177[83 /*46*/].f_3[0] = 1;
	Global_40177[83 /*46*/].f_30 = 1;
	Global_40177[83 /*46*/].f_8[0] = 170;
	Global_40177[84 /*46*/].f_45 = 0;
	Global_40177[84 /*46*/].f_31 = 0;
	Global_40177[84 /*46*/].f_42 = 0;
	Global_40177[84 /*46*/].f_43 = 0;
	Global_40177[84 /*46*/].f_2 = 1;
	Global_40177[84 /*46*/].f_3[0] = 1;
	Global_40177[84 /*46*/].f_30 = 1;
	Global_40177[84 /*46*/].f_8[0] = 171;
	Global_40177[85 /*46*/].f_45 = 0;
	Global_40177[85 /*46*/].f_31 = 0;
	Global_40177[85 /*46*/].f_42 = 0;
	Global_40177[85 /*46*/].f_43 = 0;
	Global_40177[85 /*46*/].f_2 = 1;
	Global_40177[85 /*46*/].f_3[0] = 0;
	Global_40177[85 /*46*/].f_30 = 1;
	Global_40177[85 /*46*/].f_8[0] = 172;
	Global_40177[86 /*46*/].f_45 = 0;
	Global_40177[86 /*46*/].f_31 = 0;
	Global_40177[86 /*46*/].f_42 = 0;
	Global_40177[86 /*46*/].f_43 = 0;
	Global_40177[86 /*46*/].f_2 = 1;
	Global_40177[86 /*46*/].f_3[0] = 2;
	Global_40177[86 /*46*/].f_30 = 1;
	Global_40177[86 /*46*/].f_8[0] = 173;
	Global_40177[87 /*46*/].f_45 = 0;
	Global_40177[87 /*46*/].f_31 = 0;
	Global_40177[87 /*46*/].f_42 = 0;
	Global_40177[87 /*46*/].f_43 = 0;
	Global_40177[87 /*46*/].f_2 = 1;
	Global_40177[87 /*46*/].f_3[0] = 1;
	Global_40177[87 /*46*/].f_30 = 1;
	Global_40177[87 /*46*/].f_8[0] = 174;
	Global_40177[88 /*46*/].f_45 = 0;
	Global_40177[88 /*46*/].f_31 = 0;
	Global_40177[88 /*46*/].f_42 = 0;
	Global_40177[88 /*46*/].f_43 = 0;
	Global_40177[88 /*46*/].f_2 = 1;
	Global_40177[88 /*46*/].f_3[0] = 0;
	Global_40177[88 /*46*/].f_30 = 1;
	Global_40177[88 /*46*/].f_8[0] = 175;
	Global_40177[89 /*46*/].f_45 = 0;
	Global_40177[89 /*46*/].f_31 = 0;
	Global_40177[89 /*46*/].f_42 = 0;
	Global_40177[89 /*46*/].f_43 = 0;
	Global_40177[89 /*46*/].f_2 = 1;
	Global_40177[89 /*46*/].f_3[0] = 2;
	Global_40177[89 /*46*/].f_30 = 1;
	Global_40177[89 /*46*/].f_8[0] = 176;
	Global_40177[90 /*46*/].f_45 = 0;
	Global_40177[90 /*46*/].f_31 = 0;
	Global_40177[90 /*46*/].f_42 = 0;
	Global_40177[90 /*46*/].f_43 = 0;
	Global_40177[90 /*46*/].f_2 = 1;
	Global_40177[90 /*46*/].f_3[0] = 1;
	Global_40177[90 /*46*/].f_30 = 1;
	Global_40177[90 /*46*/].f_8[0] = 177;
	Global_40177[91 /*46*/].f_45 = 0;
	Global_40177[91 /*46*/].f_31 = 0;
	Global_40177[91 /*46*/].f_42 = 0;
	Global_40177[91 /*46*/].f_43 = 0;
	Global_40177[91 /*46*/].f_2 = 1;
	Global_40177[91 /*46*/].f_3[0] = 0;
	Global_40177[91 /*46*/].f_30 = 1;
	Global_40177[91 /*46*/].f_8[0] = 179;
	Global_40177[92 /*46*/].f_45 = 0;
	Global_40177[92 /*46*/].f_31 = 0;
	Global_40177[92 /*46*/].f_42 = 0;
	Global_40177[92 /*46*/].f_43 = 0;
	Global_40177[92 /*46*/].f_2 = 1;
	Global_40177[92 /*46*/].f_3[0] = 2;
	Global_40177[92 /*46*/].f_30 = 1;
	Global_40177[92 /*46*/].f_8[0] = 178;
	Global_40177[93 /*46*/].f_45 = 0;
	Global_40177[93 /*46*/].f_31 = 0;
	Global_40177[93 /*46*/].f_42 = 0;
	Global_40177[93 /*46*/].f_43 = 0;
	Global_40177[93 /*46*/].f_2 = 1;
	Global_40177[93 /*46*/].f_3[0] = 1;
	Global_40177[93 /*46*/].f_30 = 1;
	Global_40177[93 /*46*/].f_8[0] = 180;
	Global_40177[94 /*46*/].f_45 = 0;
	Global_40177[94 /*46*/].f_31 = 0;
	Global_40177[94 /*46*/].f_42 = 0;
	Global_40177[94 /*46*/].f_43 = 0;
	Global_40177[94 /*46*/].f_2 = 2;
	Global_40177[94 /*46*/].f_3[0] = 4;
	Global_40177[94 /*46*/].f_3[1] = 0;
	Global_40177[94 /*46*/].f_30 = 1;
	Global_40177[94 /*46*/].f_8[0] = 181;
	Global_40177[95 /*46*/].f_45 = 0;
	Global_40177[95 /*46*/].f_31 = 0;
	Global_40177[95 /*46*/].f_42 = 0;
	Global_40177[95 /*46*/].f_43 = 0;
	Global_40177[95 /*46*/].f_2 = 1;
	Global_40177[95 /*46*/].f_3[0] = 37;
	Global_40177[95 /*46*/].f_30 = 1;
	Global_40177[95 /*46*/].f_8[0] = 182;
	Global_40177[96 /*46*/].f_45 = 0;
	Global_40177[96 /*46*/].f_31 = 0;
	Global_40177[96 /*46*/].f_42 = 0;
	Global_40177[96 /*46*/].f_43 = 0;
	Global_40177[96 /*46*/].f_2 = 1;
	Global_40177[96 /*46*/].f_3[0] = 37;
	Global_40177[96 /*46*/].f_30 = 1;
	Global_40177[96 /*46*/].f_8[0] = 183;
	Global_40177[97 /*46*/].f_45 = 0;
	Global_40177[97 /*46*/].f_31 = 0;
	Global_40177[97 /*46*/].f_42 = 0;
	Global_40177[97 /*46*/].f_43 = 0;
	Global_40177[97 /*46*/].f_2 = 1;
	Global_40177[97 /*46*/].f_3[0] = 37;
	Global_40177[97 /*46*/].f_30 = 1;
	Global_40177[97 /*46*/].f_8[0] = 184;
	Global_40177[98 /*46*/].f_45 = 0;
	Global_40177[98 /*46*/].f_31 = 0;
	Global_40177[98 /*46*/].f_42 = 0;
	Global_40177[98 /*46*/].f_43 = 0;
	Global_40177[98 /*46*/].f_2 = 1;
	Global_40177[98 /*46*/].f_3[0] = 54;
	Global_40177[98 /*46*/].f_30 = 3;
	Global_40177[98 /*46*/].f_8[0] = 185;
	Global_40177[98 /*46*/].f_8[1] = 186;
	Global_40177[98 /*46*/].f_8[2] = 188;
	Global_40177[99 /*46*/].f_45 = 0;
	Global_40177[99 /*46*/].f_31 = 0;
	Global_40177[99 /*46*/].f_42 = 0;
	Global_40177[99 /*46*/].f_43 = 0;
	Global_40177[99 /*46*/].f_2 = 1;
	Global_40177[99 /*46*/].f_3[0] = 55;
	Global_40177[99 /*46*/].f_30 = 3;
	Global_40177[99 /*46*/].f_8[0] = 187;
	Global_40177[99 /*46*/].f_8[1] = 189;
	Global_40177[99 /*46*/].f_8[2] = 190;
	Global_40177[100 /*46*/].f_45 = 0;
	Global_40177[100 /*46*/].f_31 = 0;
	Global_40177[100 /*46*/].f_42 = 0;
	Global_40177[100 /*46*/].f_43 = 0;
	Global_40177[100 /*46*/].f_2 = 3;
	Global_40177[100 /*46*/].f_3[0] = 56;
	Global_40177[100 /*46*/].f_3[1] = 0;
	Global_40177[100 /*46*/].f_3[2] = 2;
	Global_40177[100 /*46*/].f_30 = 5;
	Global_40177[100 /*46*/].f_8[0] = 194;
	Global_40177[100 /*46*/].f_8[1] = 195;
	Global_40177[100 /*46*/].f_8[2] = 196;
	Global_40177[100 /*46*/].f_8[3] = 197;
	Global_40177[100 /*46*/].f_8[4] = 198;
	Global_40177[101 /*46*/].f_45 = 0;
	Global_40177[101 /*46*/].f_31 = 0;
	Global_40177[101 /*46*/].f_42 = 0;
	Global_40177[101 /*46*/].f_43 = 0;
	Global_40177[101 /*46*/].f_2 = 2;
	Global_40177[101 /*46*/].f_3[0] = 57;
	Global_40177[101 /*46*/].f_3[1] = 0;
	Global_40177[101 /*46*/].f_30 = 8;
	Global_40177[101 /*46*/].f_8[0] = 199;
	Global_40177[101 /*46*/].f_8[1] = 200;
	Global_40177[101 /*46*/].f_8[2] = 201;
	Global_40177[101 /*46*/].f_8[3] = 202;
	Global_40177[101 /*46*/].f_8[4] = 203;
	Global_40177[101 /*46*/].f_8[5] = 204;
	Global_40177[101 /*46*/].f_8[6] = 205;
	Global_40177[101 /*46*/].f_8[7] = 206;
	Global_40177[102 /*46*/].f_45 = 0;
	Global_40177[102 /*46*/].f_31 = 0;
	Global_40177[102 /*46*/].f_42 = 0;
	Global_40177[102 /*46*/].f_43 = 0;
	Global_40177[102 /*46*/].f_2 = 2;
	Global_40177[102 /*46*/].f_3[0] = 58;
	Global_40177[102 /*46*/].f_3[1] = 0;
	Global_40177[102 /*46*/].f_30 = 7;
	Global_40177[102 /*46*/].f_8[0] = 207;
	Global_40177[102 /*46*/].f_8[1] = 208;
	Global_40177[102 /*46*/].f_8[2] = 209;
	Global_40177[102 /*46*/].f_8[3] = 210;
	Global_40177[102 /*46*/].f_8[4] = 211;
	Global_40177[102 /*46*/].f_8[5] = 212;
	Global_40177[102 /*46*/].f_8[6] = 213;
	Global_40177[103 /*46*/].f_45 = 0;
	Global_40177[103 /*46*/].f_31 = 0;
	Global_40177[103 /*46*/].f_42 = 0;
	Global_40177[103 /*46*/].f_43 = 0;
	Global_40177[103 /*46*/].f_2 = 2;
	Global_40177[103 /*46*/].f_3[0] = 59;
	Global_40177[103 /*46*/].f_3[1] = 0;
	Global_40177[103 /*46*/].f_30 = 8;
	Global_40177[103 /*46*/].f_8[0] = 214;
	Global_40177[103 /*46*/].f_8[1] = 215;
	Global_40177[103 /*46*/].f_8[2] = 216;
	Global_40177[103 /*46*/].f_8[3] = 217;
	Global_40177[103 /*46*/].f_8[4] = 218;
	Global_40177[103 /*46*/].f_8[5] = 219;
	Global_40177[103 /*46*/].f_8[6] = 220;
	Global_40177[103 /*46*/].f_8[7] = 221;
	Global_40177[104 /*46*/].f_45 = 0;
	Global_40177[104 /*46*/].f_31 = 0;
	Global_40177[104 /*46*/].f_42 = 0;
	Global_40177[104 /*46*/].f_43 = 0;
	Global_40177[104 /*46*/].f_2 = 2;
	Global_40177[104 /*46*/].f_3[0] = 60;
	Global_40177[104 /*46*/].f_3[1] = 2;
	Global_40177[104 /*46*/].f_30 = 7;
	Global_40177[104 /*46*/].f_8[0] = 222;
	Global_40177[104 /*46*/].f_8[1] = 223;
	Global_40177[104 /*46*/].f_8[2] = 224;
	Global_40177[104 /*46*/].f_8[3] = 225;
	Global_40177[104 /*46*/].f_8[4] = 226;
	Global_40177[104 /*46*/].f_8[5] = 227;
	Global_40177[104 /*46*/].f_8[6] = 228;
	Global_40177[105 /*46*/].f_45 = 0;
	Global_40177[105 /*46*/].f_31 = 0;
	Global_40177[105 /*46*/].f_42 = 0;
	Global_40177[105 /*46*/].f_43 = 0;
	Global_40177[105 /*46*/].f_2 = 2;
	Global_40177[105 /*46*/].f_3[0] = 61;
	Global_40177[105 /*46*/].f_3[1] = 2;
	Global_40177[105 /*46*/].f_30 = 6;
	Global_40177[105 /*46*/].f_8[0] = 229;
	Global_40177[105 /*46*/].f_8[1] = 230;
	Global_40177[105 /*46*/].f_8[2] = 231;
	Global_40177[105 /*46*/].f_8[3] = 232;
	Global_40177[105 /*46*/].f_8[4] = 233;
	Global_40177[105 /*46*/].f_8[5] = 234;
	Global_40177[106 /*46*/].f_45 = 0;
	Global_40177[106 /*46*/].f_31 = 0;
	Global_40177[106 /*46*/].f_42 = 0;
	Global_40177[106 /*46*/].f_43 = 0;
	Global_40177[106 /*46*/].f_2 = 2;
	Global_40177[106 /*46*/].f_3[0] = 62;
	Global_40177[106 /*46*/].f_3[1] = 2;
	Global_40177[106 /*46*/].f_30 = 6;
	Global_40177[106 /*46*/].f_8[0] = 235;
	Global_40177[106 /*46*/].f_8[1] = 236;
	Global_40177[106 /*46*/].f_8[2] = 237;
	Global_40177[106 /*46*/].f_8[3] = 238;
	Global_40177[106 /*46*/].f_8[4] = 239;
	Global_40177[106 /*46*/].f_8[5] = 240;
	Global_40177[107 /*46*/].f_45 = 0;
	Global_40177[107 /*46*/].f_31 = 0;
	Global_40177[107 /*46*/].f_42 = 0;
	Global_40177[107 /*46*/].f_43 = 0;
	Global_40177[107 /*46*/].f_2 = 1;
	Global_40177[107 /*46*/].f_3[0] = 36;
	Global_40177[107 /*46*/].f_30 = 1;
	Global_40177[107 /*46*/].f_8[0] = 241;
	Global_40177[108 /*46*/].f_45 = 0;
	Global_40177[108 /*46*/].f_31 = 0;
	Global_40177[108 /*46*/].f_42 = 0;
	Global_40177[108 /*46*/].f_43 = 0;
	Global_40177[108 /*46*/].f_2 = 1;
	Global_40177[108 /*46*/].f_3[0] = 36;
	Global_40177[108 /*46*/].f_30 = 1;
	Global_40177[108 /*46*/].f_8[0] = 242;
	Global_40177[109 /*46*/].f_45 = 0;
	Global_40177[109 /*46*/].f_31 = 0;
	Global_40177[109 /*46*/].f_42 = 0;
	Global_40177[109 /*46*/].f_43 = 0;
	Global_40177[109 /*46*/].f_2 = 1;
	Global_40177[109 /*46*/].f_3[0] = 36;
	Global_40177[109 /*46*/].f_30 = 1;
	Global_40177[109 /*46*/].f_8[0] = 243;
	Global_40177[110 /*46*/].f_45 = 0;
	Global_40177[110 /*46*/].f_31 = 0;
	Global_40177[110 /*46*/].f_42 = 0;
	Global_40177[110 /*46*/].f_43 = 0;
	Global_40177[110 /*46*/].f_2 = 1;
	Global_40177[110 /*46*/].f_3[0] = 65;
	Global_40177[110 /*46*/].f_30 = 1;
	Global_40177[110 /*46*/].f_8[0] = 244;
	Global_40177[111 /*46*/].f_45 = 0;
	Global_40177[111 /*46*/].f_31 = 0;
	Global_40177[111 /*46*/].f_42 = 0;
	Global_40177[111 /*46*/].f_43 = 0;
	Global_40177[111 /*46*/].f_2 = 1;
	Global_40177[111 /*46*/].f_3[0] = 65;
	Global_40177[111 /*46*/].f_30 = 1;
	Global_40177[111 /*46*/].f_8[0] = 245;
	Global_40177[112 /*46*/].f_45 = 0;
	Global_40177[112 /*46*/].f_31 = 0;
	Global_40177[112 /*46*/].f_42 = 0;
	Global_40177[112 /*46*/].f_43 = 0;
	Global_40177[112 /*46*/].f_2 = 1;
	Global_40177[112 /*46*/].f_3[0] = 65;
	Global_40177[112 /*46*/].f_30 = 1;
	Global_40177[112 /*46*/].f_8[0] = 246;
	Global_40177[113 /*46*/].f_45 = 0;
	Global_40177[113 /*46*/].f_31 = 0;
	Global_40177[113 /*46*/].f_42 = 0;
	Global_40177[113 /*46*/].f_43 = 0;
	Global_40177[113 /*46*/].f_2 = 1;
	Global_40177[113 /*46*/].f_3[0] = 65;
	Global_40177[113 /*46*/].f_30 = 1;
	Global_40177[113 /*46*/].f_8[0] = 247;
	Global_40177[114 /*46*/].f_45 = 0;
	Global_40177[114 /*46*/].f_31 = 0;
	Global_40177[114 /*46*/].f_42 = 0;
	Global_40177[114 /*46*/].f_43 = 0;
	Global_40177[114 /*46*/].f_2 = 2;
	Global_40177[114 /*46*/].f_3[0] = 19;
	Global_40177[114 /*46*/].f_3[1] = 1;
	Global_40177[114 /*46*/].f_30 = 21;
	Global_40177[114 /*46*/].f_8[0] = 249;
	Global_40177[114 /*46*/].f_8[1] = 250;
	Global_40177[114 /*46*/].f_8[2] = 251;
	Global_40177[114 /*46*/].f_8[3] = 252;
	Global_40177[114 /*46*/].f_8[4] = 253;
	Global_40177[114 /*46*/].f_8[5] = 254;
	Global_40177[114 /*46*/].f_8[6] = 255;
	Global_40177[114 /*46*/].f_8[7] = 256;
	Global_40177[114 /*46*/].f_8[8] = 257;
	Global_40177[114 /*46*/].f_8[9] = 258;
	Global_40177[114 /*46*/].f_8[10] = 259;
	Global_40177[114 /*46*/].f_8[11] = 260;
	Global_40177[114 /*46*/].f_8[12] = 261;
	Global_40177[114 /*46*/].f_8[13] = 262;
	Global_40177[114 /*46*/].f_8[14] = 263;
	Global_40177[114 /*46*/].f_8[15] = 264;
	Global_40177[114 /*46*/].f_8[16] = 265;
	Global_40177[114 /*46*/].f_8[17] = 266;
	Global_40177[114 /*46*/].f_8[18] = 267;
	Global_40177[114 /*46*/].f_8[19] = 268;
	Global_40177[114 /*46*/].f_8[20] = 269;
	Global_40177[115 /*46*/].f_45 = 0;
	Global_40177[115 /*46*/].f_31 = 0;
	Global_40177[115 /*46*/].f_42 = 0;
	Global_40177[115 /*46*/].f_43 = 0;
	Global_40177[115 /*46*/].f_2 = 4;
	Global_40177[115 /*46*/].f_3[0] = 0;
	Global_40177[115 /*46*/].f_3[1] = 1;
	Global_40177[115 /*46*/].f_3[2] = 2;
	Global_40177[115 /*46*/].f_3[3] = 16;
	Global_40177[115 /*46*/].f_30 = 1;
	Global_40177[115 /*46*/].f_8[0] = 270;
	Global_40177[116 /*46*/].f_45 = 0;
	Global_40177[116 /*46*/].f_31 = 0;
	Global_40177[116 /*46*/].f_42 = 0;
	Global_40177[116 /*46*/].f_43 = 0;
	Global_40177[116 /*46*/].f_2 = 4;
	Global_40177[116 /*46*/].f_3[0] = 0;
	Global_40177[116 /*46*/].f_3[1] = 1;
	Global_40177[116 /*46*/].f_3[2] = 2;
	Global_40177[116 /*46*/].f_3[3] = 16;
	Global_40177[116 /*46*/].f_30 = 1;
	Global_40177[116 /*46*/].f_8[0] = 271;
	Global_40177[117 /*46*/].f_45 = 0;
	Global_40177[117 /*46*/].f_31 = 0;
	Global_40177[117 /*46*/].f_42 = 0;
	Global_40177[117 /*46*/].f_43 = 0;
	Global_40177[117 /*46*/].f_2 = 4;
	Global_40177[117 /*46*/].f_3[0] = 0;
	Global_40177[117 /*46*/].f_3[1] = 1;
	Global_40177[117 /*46*/].f_3[2] = 2;
	Global_40177[117 /*46*/].f_3[3] = 16;
	Global_40177[117 /*46*/].f_30 = 1;
	Global_40177[117 /*46*/].f_8[0] = 272;
	Global_40177[118 /*46*/].f_45 = 0;
	Global_40177[118 /*46*/].f_31 = 0;
	Global_40177[118 /*46*/].f_42 = 0;
	Global_40177[118 /*46*/].f_43 = 0;
	Global_40177[118 /*46*/].f_2 = 4;
	Global_40177[118 /*46*/].f_3[0] = 0;
	Global_40177[118 /*46*/].f_3[1] = 1;
	Global_40177[118 /*46*/].f_3[2] = 2;
	Global_40177[118 /*46*/].f_3[3] = 16;
	Global_40177[118 /*46*/].f_30 = 1;
	Global_40177[118 /*46*/].f_8[0] = 273;
	Global_40177[119 /*46*/].f_45 = 0;
	Global_40177[119 /*46*/].f_31 = 0;
	Global_40177[119 /*46*/].f_42 = 0;
	Global_40177[119 /*46*/].f_43 = 0;
	Global_40177[119 /*46*/].f_2 = 4;
	Global_40177[119 /*46*/].f_3[0] = 0;
	Global_40177[119 /*46*/].f_3[1] = 1;
	Global_40177[119 /*46*/].f_3[2] = 2;
	Global_40177[119 /*46*/].f_3[3] = 16;
	Global_40177[119 /*46*/].f_30 = 1;
	Global_40177[119 /*46*/].f_8[0] = 274;
	Global_40177[120 /*46*/].f_45 = 0;
	Global_40177[120 /*46*/].f_31 = 0;
	Global_40177[120 /*46*/].f_42 = 0;
	Global_40177[120 /*46*/].f_43 = 0;
	Global_40177[120 /*46*/].f_2 = 4;
	Global_40177[120 /*46*/].f_3[0] = 0;
	Global_40177[120 /*46*/].f_3[1] = 1;
	Global_40177[120 /*46*/].f_3[2] = 2;
	Global_40177[120 /*46*/].f_3[3] = 16;
	Global_40177[120 /*46*/].f_30 = 1;
	Global_40177[120 /*46*/].f_8[0] = 275;
	Global_40177[121 /*46*/].f_45 = 0;
	Global_40177[121 /*46*/].f_31 = 0;
	Global_40177[121 /*46*/].f_42 = 0;
	Global_40177[121 /*46*/].f_43 = 0;
	Global_40177[121 /*46*/].f_2 = 4;
	Global_40177[121 /*46*/].f_3[0] = 0;
	Global_40177[121 /*46*/].f_3[1] = 1;
	Global_40177[121 /*46*/].f_3[2] = 2;
	Global_40177[121 /*46*/].f_3[3] = 16;
	Global_40177[121 /*46*/].f_30 = 1;
	Global_40177[121 /*46*/].f_8[0] = 276;
}

void func_67()
{
	terminate_this_thread();
}

