#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
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
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var[] uLocal_18 = new var[3];
	int iLocal_22 = 0;
	var[] uLocal_23 = new var[3];
	int iLocal_27 = 0;
	int iLocal_28 = 0;
#endregion

void main()
{
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
	if (has_force_cleanup_occurred(2))
	{
		func_11();
	}
	while (true)
	{
		wait(250);
		switch (iLocal_27)
		{
			case 0:
				if (uLocal_18[0])
				{
					StringCopy(&(Global_16831[1 /*42*/]), "CL_C1A", 16);
					StringCopy(&(Global_16831[1 /*42*/].f_4), "CL_C1A_BR", 16);
					Global_16831[1 /*42*/].f_8 = 0;
					Global_16831[1 /*42*/].f_9 = 2;
					StringCopy(&(Global_16831[1 /*42*/].f_10[1 /*4*/]), "CL_C1A_J1", 16);
					Global_16831[1 /*42*/].f_37[1] = 0;
					Global_16831[1 /*42*/].f_32[1] = 3;
					Global_16831[1 /*42*/].f_27[1] = 0;
					StringCopy(&(Global_16831[1 /*42*/].f_10[2 /*4*/]), "CL_C1A_J2", 16);
					Global_16831[1 /*42*/].f_37[2] = 0;
					Global_16831[1 /*42*/].f_32[2] = 3;
					Global_16831[1 /*42*/].f_27[2] = 0;
					iLocal_22 = 0;
					while (iLocal_22 < Global_16831[1 /*42*/].f_32[1])
					{
						Global_25174[iLocal_22] = 0;
						Global_25170[iLocal_22] = 0;
						iLocal_22++;
					}
					func_4(1, 1, 1, 1);
					func_3("CL_ADDED", "CL_C1A", 3000, 1);
					iLocal_27 = 1;
				}
				break;
			
			case 1:
				iLocal_22 = 0;
				while (iLocal_22 < Global_16831[1 /*42*/].f_32[1])
				{
					if (!is_ped_injured(player_ped_id()))
					{
						if (does_entity_exist(uLocal_23[iLocal_22]))
						{
							if (is_ped_injured(uLocal_23[iLocal_22]))
							{
								if (has_entity_been_damaged_by_entity(uLocal_23[iLocal_22], player_ped_id(), 1))
								{
									if (!Global_25170[iLocal_22])
									{
										Global_16831[1 /*42*/].f_27[1]++;
										func_2("CL_C1A_J1", Global_16831[1 /*42*/].f_27[1], Global_16831[1 /*42*/].f_32[1], 2000, 1);
										Global_25170[iLocal_22] = 1;
									}
									if (is_entity_dead(uLocal_23[iLocal_22], 0))
									{
										if (!Global_25174[iLocal_22])
										{
											if (cell_cam_is_char_visible_no_face_check(uLocal_23[iLocal_22]) && func_1())
											{
												Global_16831[1 /*42*/].f_27[2]++;
												func_2("CL_C1A_J2", Global_16831[1 /*42*/].f_27[2], Global_16831[1 /*42*/].f_32[2], 2000, 1);
												Global_25174[iLocal_22] = 1;
											}
										}
									}
									if (Global_16831[1 /*42*/].f_27[1] >= Global_16831[1 /*42*/].f_32[1] && Global_16831[1 /*42*/].f_27[2] >= Global_16831[1 /*42*/].f_32[2])
									{
										func_3("CL_COMPLETE", "CL_C1A", 3000, 1);
										Global_16831[1 /*42*/].f_8 = 1;
										iLocal_27 = 2;
									}
								}
							}
						}
					}
					iLocal_22++;
				}
				break;
			
			case 2:
				break;
		}
		wait(250);
		switch (iLocal_28)
		{
			case 0:
				if (uLocal_18[1])
				{
					StringCopy(&(Global_16831[2 /*42*/]), "CL_C1B", 16);
					StringCopy(&(Global_16831[2 /*42*/].f_4), "CL_C1B_BR", 16);
					Global_16831[2 /*42*/].f_8 = 0;
					Global_16831[2 /*42*/].f_9 = 3;
					StringCopy(&(Global_16831[2 /*42*/].f_10[1 /*4*/]), "CL_C1B_J1", 16);
					Global_16831[2 /*42*/].f_37[1] = 0;
					Global_16831[2 /*42*/].f_32[1] = -1;
					Global_16831[2 /*42*/].f_27[1] = -1;
					StringCopy(&(Global_16831[2 /*42*/].f_10[2 /*4*/]), "CL_C1B_J2", 16);
					Global_16831[2 /*42*/].f_37[2] = 0;
					Global_16831[2 /*42*/].f_32[2] = -1;
					Global_16831[2 /*42*/].f_27[2] = -1;
					StringCopy(&(Global_16831[2 /*42*/].f_10[3 /*4*/]), "CL_C1B_J3", 16);
					Global_16831[2 /*42*/].f_37[3] = 0;
					Global_16831[2 /*42*/].f_32[3] = -1;
					Global_16831[2 /*42*/].f_27[3] = -1;
					func_4(136, 2, 1, 1);
					func_3("CL_ADDED", "CL_C1B", 3000, 1);
					iLocal_28 = 1;
				}
				break;
			
			case 1:
				if (!Global_16831[2 /*42*/].f_37[1])
				{
				}
				if (!Global_16831[2 /*42*/].f_37[2])
				{
				}
				if (!Global_16831[2 /*42*/].f_37[3])
				{
				}
				if ((Global_16831[2 /*42*/].f_37[1] == 1 && Global_16831[2 /*42*/].f_37[2] == 1) && Global_16831[2 /*42*/].f_37[3] == 1)
				{
					func_3("CL_COMPLETE", "CL_C1B", 3000, 1);
					Global_16831[2 /*42*/].f_8 = 1;
					iLocal_28 = 2;
				}
				break;
			
			case 2:
				break;
		}
	}
}

bool func_1()
{
	if (Global_16748)
	{
		return true;
	}
	return false;
}

void func_2(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iParam4 = iParam4;
	_set_text_entry_2(sParam0);
	add_text_component_integer(iParam1);
	add_text_component_integer(iParam2);
	_draw_subtitle_timed(iParam3, 0);
}

void func_3(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	_set_text_entry_2(sParam0);
	_add_text_component_item_string(sParam1);
	_draw_subtitle_timed(iParam2, 0);
}

bool func_4(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_10())
	{
		return false;
	}
	if (func_5(iParam0, iParam1, iParam2, iParam3) == 1)
	{
		return true;
	}
	return false;
}

bool func_5(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (_get_number_of_instances_of_streamed_script(joaat("appsidetask")) > 0)
	{
		return false;
	}
	if (func_8() == 0)
	{
		func_7();
		return false;
	}
	func_6(Global_16830);
	Global_17000[Global_16830 /*9*/].f_1 = uParam1;
	Global_17000[Global_16830 /*9*/] = uParam0;
	if (iParam3 == 0)
	{
	}
	else
	{
		Global_17000[Global_16830 /*9*/].f_8 = iParam3;
	}
	if (iParam2)
	{
	}
	return true;
}

void func_6(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = get_clock_seconds();
	iVar1 = get_clock_minutes();
	iVar2 = get_clock_hours();
	iVar3 = get_clock_day_of_month();
	uVar4 = get_clock_month() + 1;
	iVar5 = get_clock_year();
	Global_17000[uParam0 /*9*/].f_2 = iVar0;
	Global_17000[uParam0 /*9*/].f_2.f_1 = iVar1;
	Global_17000[uParam0 /*9*/].f_2.f_2 = iVar2;
	Global_17000[uParam0 /*9*/].f_2.f_3 = iVar3;
	Global_17000[uParam0 /*9*/].f_2.f_4 = uVar4;
	Global_17000[uParam0 /*9*/].f_2.f_5 = iVar5;
}

void func_7()
{
}

bool func_8()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_17000[iVar0 /*9*/].f_8 == 0)
		{
			Global_16830 = iVar0;
			return true;
		}
		iVar0++;
	}
	iVar0 = 0;
	Global_16830 = 3;
	Global_17000[Global_16830 /*9*/].f_2 = -1;
	Global_17000[Global_16830 /*9*/].f_2.f_1 = 0;
	Global_17000[Global_16830 /*9*/].f_2.f_2 = 0;
	Global_17000[Global_16830 /*9*/].f_2.f_3 = 0;
	Global_17000[Global_16830 /*9*/].f_2.f_5 = 99999;
	while (iVar0 < 2)
	{
		if (Global_17000[iVar0 /*9*/].f_8 == 0 || Global_17000[iVar0 /*9*/].f_8 == 1)
		{
			if (!func_9(Global_17000[iVar0 /*9*/].f_2, Global_17000[Global_16830 /*9*/].f_2))
			{
				Global_16830 = iVar0;
			}
		}
		iVar0++;
	}
	if (Global_16830 == 3)
	{
		return false;
	}
	return true;
}

bool func_9(struct<6> Param0, struct<6> Param1)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return false;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return true;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return false;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return true;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = Param0.f_3 * 86400;
			iVar12 = Var0 + Var0.f_1 + Var0.f_2 + Var0.f_3;
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = Param6.f_3 * 86400;
			iVar13 = Var6 + Var6.f_1 + Var6.f_2 + Var6.f_3;
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	return false;
}

bool func_10()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_11()
{
	terminate_this_thread();
}
