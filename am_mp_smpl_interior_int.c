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
	char* sLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0;
	float fLocal_24 = 0;
	float fLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0;
	float fLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	float fLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0;
	float fLocal_91 = 0;
	float fLocal_92 = 0;
	float fLocal_93 = 0;
	float fLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 32;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	struct<128> Local_130 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
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
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_87 = 0.05f + 0.275f - 0.01f;
	fLocal_90 = -0.05f;
	fLocal_91 = 0.92f;
	fLocal_92 = 1.94f;
	fLocal_93 = 2.99f;
	fLocal_94 = 3.7f;
	if (network_is_game_in_progress())
	{
		func_817(&uLocal_258);
	}
	else
	{
		func_805(0);
	}
	while (true)
	{
		func_804();
		if (func_796())
		{
			Global_1728515.f_120 = Local_130.f_1;
			func_805(7);
		}
		if (Local_130.f_1 > -1 && func_795(Local_130.f_1))
		{
			func_805(6);
		}
		func_2();
		if (network_is_host_of_this_script())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	func_791();
	func_790();
	if (func_789(0))
	{
		func_787();
	}
	else if (func_789(1))
	{
		func_780();
	}
	else if (func_789(2))
	{
		func_779();
	}
	else if (func_789(3))
	{
		func_776();
	}
	else if (func_789(4))
	{
		func_772();
	}
	else if (func_789(5))
	{
		func_771();
	}
	else if (func_789(6))
	{
		func_768();
	}
	else if (func_789(7))
	{
		func_762(Local_130.f_1);
		func_760(&(Local_130.f_9), Local_130.f_1);
		func_667();
	}
	else if (func_789(8))
	{
		func_762(Local_130.f_1);
		func_760(&(Local_130.f_9), Local_130.f_1);
		func_666();
	}
	else if (func_789(9))
	{
		func_762(Local_130.f_1);
		func_760(&(Local_130.f_9), Local_130.f_1);
		func_665();
	}
	else if (func_789(10))
	{
		func_663();
	}
	else if (func_789(11))
	{
		func_21();
	}
	else if (func_789(12))
	{
		func_12();
	}
	else if (func_789(13))
	{
		func_3();
	}
}

void func_3()
{
	func_10();
	if ((is_screen_faded_in() && !is_string_null_or_empty(Local_130.f_126)) && !is_bit_set(Local_130, false))
	{
		func_9(Local_130.f_126, 10500);
		set_bit(&Local_130, false);
	}
	if (is_screen_faded_in())
	{
		if (func_8())
		{
			func_7(0, Local_130.f_1, 0);
		}
	}
	if ((is_screen_faded_in() && !is_entity_dead(player_ped_id(), 0)) && !_0x422F32CC7E56ABAD(player_ped_id()))
	{
		func_4(1);
		if (!is_string_null_or_empty(Local_130.f_126))
		{
			func_805(4);
		}
		else if (!is_valid_interior(Local_130.f_5))
		{
			func_805(5);
		}
		else if (Local_130.f_122 == 1)
		{
			func_805(3);
			Local_130.f_122 = 0;
		}
		else
		{
			func_805(2);
		}
	}
}

void func_4(int iParam0)
{
	if (!iParam0)
	{
		func_6(&Global_2467233, 1, 0);
	}
	else
	{
		func_5(&Global_2467233);
	}
}

void func_5(var uParam0)
{
	*uParam0.f_1 = 0;
}

void func_6(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0.f_1 == 0)
	{
		if (network_is_game_in_progress() && !iParam1)
		{
			if (!iParam2)
			{
				*uParam0 = get_network_time();
			}
			else
			{
				*uParam0 = _0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = get_game_timer();
		}
		*uParam0.f_1 = 1;
	}
}

void func_7(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		if (Global_1728515.f_9 == -1)
		{
			Global_1728515.f_9 = iParam1;
			Global_1728515.f_7 = 1;
			Global_1728515.f_8 = iParam2;
			set_bit(&(Global_2418472[player_id() /*313*/].f_305), 3);
		}
	}
	else if (Global_1728515.f_9 == iParam1)
	{
		Global_1728515.f_9 = -1;
		Global_1728515.f_7 = 0;
		Global_1728515.f_8 = 0;
		clear_bit(&(Global_2418472[player_id() /*313*/].f_305), 3);
	}
}

var func_8()
{
	return Global_1728515.f_7;
}

void func_9(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_10()
{
	_0xEB2D525B57F42B40();
	func_11();
}

void func_11()
{
	Global_17118.f_134 = 1;
}

void func_12()
{
	if (func_20(&(Local_130.f_99), 400, 0))
	{
		clear_help(1);
		do_screen_fade_in(322);
		func_14(player_id(), 1, 524288);
		func_5(&(Local_130.f_99));
		if (!is_string_null_or_empty(Local_130.f_9.f_6.f_55) && !is_string_null_or_empty(Local_130.f_9.f_6.f_56))
		{
			play_sound_frontend(-1, Local_130.f_9.f_6.f_55, Local_130.f_9.f_6.f_56, 1);
		}
		func_13(13);
	}
}

void func_13(int iParam0)
{
	if (Local_130.f_2 != iParam0)
	{
		Local_130.f_2 = iParam0;
	}
}

void func_14(int iParam0, int iParam1, int iParam2)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (iParam1)
	{
		if (_get_no_loading_screen())
		{
			set_no_loading_screen(0);
		}
	}
	if (!network_is_game_in_progress())
	{
		iVar0 = iParam2;
		set_player_control(iParam0, iParam1, iVar0);
	}
	else
	{
		iVar1 = iParam2 & 2 != false;
		iVar2 = iParam2 & 4 != false;
		iVar3 = iParam2 & 8 != false;
		iVar4 = iParam2 & 16 != false;
		iVar5 = iParam2 & 32 != false;
		iVar6 = iParam2 & 64 != false;
		iVar7 = iParam2 & 128 != false;
		iVar8 = iParam2 & 256 != false;
		iVar9 = iParam2 & 512 != false;
		iVar10 = iParam2 & 1024 != false;
		iVar11 = iParam2 & 2048 != false;
		iVar12 = iParam2 & 4096 != false;
		iVar13 = iParam2 & 8192 != false;
		iVar14 = iParam2 & 16384 != false;
		iVar15 = iParam2 & 32768 != false;
		iVar16 = iParam2 & 65536 != false;
		iVar17 = iParam2 & 131072 != false;
		iVar18 = iParam2 & 262144 != false;
		iVar19 = iParam2 & 524288 != false;
		iVar20 = iParam2 & 1048576 != false;
		iVar21 = iParam2 & 2097152 != false;
		iVar22 = iParam2 & 4194304 != false;
		iVar23 = iParam2 & 8388608 != false;
		if (!func_18())
		{
			iVar24 = false;
			if (iParam1 == 1)
			{
				iVar24 = true;
			}
			if (iVar15 == 0 && !iVar20)
			{
				iVar24 = true;
			}
			if (iVar9 == 1)
			{
				iVar24 = true;
			}
			if (iVar24)
			{
				return;
			}
		}
		if (iVar17)
		{
		}
		if (network_is_player_active(iParam0) && is_player_playing(iParam0))
		{
			iVar25 = get_player_ped(iParam0);
			if (!iVar19)
			{
				if ((iVar18 && iParam1 == 0) && network_is_game_in_progress())
				{
					fade_out_local_player(1);
				}
				else
				{
					set_entity_visible(iVar25, !iVar13, 0);
				}
				if (!iVar13)
				{
					if (network_is_game_in_progress() && !iVar18)
					{
						fade_out_local_player(0);
					}
					Global_2418472[iParam0 /*313*/].f_240 = 0;
				}
			}
			if (iParam1)
			{
				if (!func_17(iVar25) && !is_entity_attached_to_any_vehicle(iVar25))
				{
					if (!iVar21)
					{
						set_entity_collision(iVar25, true, 0);
					}
				}
				if (!is_entity_attached(iVar25))
				{
					if (!iVar20)
					{
						freeze_entity_position(iVar25, false);
					}
					_0x3910051CCECDB00C(iVar25, true);
				}
				else if (!iVar20)
				{
					freeze_entity_position(iVar25, false);
				}
				set_ped_can_be_targetted(iVar25, true);
				set_player_invincible(iParam0, 0);
				_0x4668D80430D6C299(iVar25);
				set_ped_can_ragdoll(iVar25, 1);
				func_16();
				func_15();
				if (is_player_teleport_active())
				{
					if (!iVar22)
					{
					}
				}
				if (is_new_load_scene_active())
				{
				}
				Global_2418472[iParam0 /*313*/].f_241 = 0;
				if (!iVar23)
				{
					iVar2 = true;
				}
			}
			else
			{
				if (!func_17(iVar25) && !is_entity_attached_to_any_vehicle(iVar25))
				{
					if (!iVar21)
					{
						set_entity_collision(iVar25, !iVar14, 0);
					}
					if (!is_entity_attached(iVar25))
					{
						if (!iVar20)
						{
							freeze_entity_position(iVar25, iVar15);
						}
						if (!iVar15)
						{
							_0x3910051CCECDB00C(iVar25, true);
						}
					}
				}
				if (iVar9)
				{
					set_player_invincible(iParam0, 0);
				}
				else
				{
					set_player_invincible(iParam0, 1);
				}
				set_ped_can_be_targetted(iVar25, iVar16);
				if (iVar2)
				{
					if (!is_ped_fatally_injured(iVar25) && !is_ped_in_any_vehicle(iVar25, 0))
					{
						clear_ped_tasks_immediately(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (iVar1)
			{
				iVar26 |= 2;
			}
			if (iVar2)
			{
				iVar26 |= 4;
			}
			if (iVar3)
			{
				iVar26 |= 8;
			}
			if (iVar4)
			{
				iVar26 |= 16;
			}
			if (iVar5)
			{
				iVar26 |= 32;
			}
			if (iVar6)
			{
				iVar26 |= 64;
			}
			if (iVar7)
			{
				iVar26 |= 128;
			}
			if (iVar8)
			{
				iVar26 |= 256;
			}
			if (iVar9)
			{
				iVar26 |= 512;
			}
			if (iVar10)
			{
				iVar26 |= 1024;
			}
			if (iVar11)
			{
				iVar26 |= 2048;
			}
			if (iVar12)
			{
				iVar26 |= 4096;
			}
			set_player_control(iParam0, iParam1, iVar26);
		}
	}
}

void func_15()
{
	struct<2> Var0;
	
	Global_2428492.f_724 = 0;
	Global_2428492.f_725 = 0;
	Global_2428492.f_726 = {9999.9f, 9999.9f, 9999.9f};
	Global_2404956.f_1673 = {Var0};
}

void func_16()
{
	Global_2404956.f_626 = 0;
	Global_2404956.f_1714 = 0;
	Global_2404956.f_484 = 0;
	Global_2404956.f_558 = 0;
	Global_2418472[player_id() /*313*/].f_205 = 0;
}

bool func_17(int iParam0)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(iParam0, 1))
	{
		return true;
	}
	else
	{
		iVar0 = get_script_task_status(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_18()
{
	if (func_19() == 0)
	{
		return true;
	}
	return false;
}

var func_19()
{
	return Global_1312466.f_18;
}

bool func_20(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return true;
	}
	func_6(uParam0, iParam2, 0);
	if (network_is_game_in_progress() && !iParam2)
	{
		if (absi(get_time_difference(get_network_time(), *uParam0)) >= iParam1)
		{
			return true;
		}
	}
	else if (absi(get_time_difference(get_game_timer(), *uParam0)) >= iParam1)
	{
		return true;
	}
	return false;
}

void func_21()
{
	if (func_40(8, 0, 0, 0, 0, 0, 0, 0, 1, 3000, 1, 1, 0))
	{
		func_4(0);
		set_entity_visible(player_ped_id(), true, 0);
		network_fade_in_entity(player_ped_id(), 1, 1);
		freeze_entity_position(player_ped_id(), false);
		clear_area_of_peds(Local_130.f_6, 20f, 0);
		if (func_37(Local_130.f_1) && !Global_2404956.f_487.f_6)
		{
			if (!is_entity_dead(player_ped_id(), 0))
			{
				simulate_player_input_gait(player_id(), 1f, 850, 0f, 1, 0);
			}
		}
		func_35();
		func_33(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
		func_32(0, -1);
		func_22();
		func_6(&(Local_130.f_99), 0, 0);
		func_13(12);
	}
}

void func_22()
{
	int iVar0;
	
	iVar0 = false;
	while (iVar0 < 32)
	{
		func_23(int_to_playerindex(iVar0));
		iVar0++;
	}
}

void func_23(int iParam0)
{
	int iVar0;
	
	if (iParam0 == player_id() || !func_31(iParam0, 0, 1))
	{
		return;
	}
	if ((func_28(iParam0, 0, 1) || func_27(iParam0, 0)) || func_26(iParam0))
	{
		return;
	}
	if (func_24(player_id()) && Global_2418472[player_id() /*313*/].f_305.f_2 > -1)
	{
		if (func_24(iParam0) && Global_2418472[iParam0 /*313*/].f_305.f_2 > -1)
		{
			if (Global_2418472[player_id() /*313*/].f_305.f_2 != Global_2418472[iParam0 /*313*/].f_305.f_2)
			{
				iVar0 = true;
			}
		}
		else
		{
			iVar0 = true;
		}
	}
	else if (func_24(iParam0) && Global_2418472[iParam0 /*313*/].f_305.f_2 > -1)
	{
		iVar0 = true;
	}
	if (iVar0)
	{
		if (!_0x919B3C98ED8292F9(iParam0))
		{
			_0xBBDF066252829606(iParam0, true);
		}
	}
	else if (_0x919B3C98ED8292F9(iParam0))
	{
		_0xBBDF066252829606(iParam0, false);
	}
}

int func_24(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_31(iParam0, 1, 1))
		{
			return Global_2418472[iParam0 /*313*/].f_305.f_1 != -1;
		}
	}
	return false;
}

int func_25()
{
	return -1;
}

bool func_26(int iParam0)
{
	if (is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, 14))
	{
		return true;
	}
	if (is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, 11))
	{
		return true;
	}
	return false;
}

bool func_27(int iParam0, int iParam1)
{
	if (func_28(iParam0, iParam1, 0))
	{
		if (is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, 3))
		{
			return true;
		}
	}
	return false;
}

bool func_28(int iParam0, int iParam1, int iParam2)
{
	if (Global_1587523[iParam0 /*444*/].f_250.f_9 > 0)
	{
		if (iParam1)
		{
			if (is_bit_set(Global_1587523[iParam0 /*444*/].f_250.f_7, false))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	if (!iParam2)
	{
		if (func_29(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_29(int iParam0)
{
	if (iParam0 != func_25())
	{
		if (func_31(iParam0, 1, 1))
		{
			if (Global_2418472[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_30(Global_2418472[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return false;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
	}
	return -1;
}

bool func_31(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = iParam0;
	if (network_is_player_active(iParam0))
	{
		if (iParam1)
		{
			if (!is_player_playing(iParam0))
			{
				return false;
			}
		}
		if (iParam2)
		{
			if (!Global_2428492.f_3[uVar0])
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

void func_32(int iParam0, int iParam1)
{
	if (iParam0)
	{
		Global_1728515.f_1 = iParam1;
		Global_2418472[player_id() /*313*/].f_305.f_1 = iParam1;
	}
	else
	{
		Global_1728515.f_1 = -1;
		Global_2418472[player_id() /*313*/].f_305.f_1 = -1;
		Global_1728515.f_2 = 0;
		Global_2418472[player_id() /*313*/].f_305.f_3 = 0;
		clear_bit(&(Global_2418472[player_id() /*313*/].f_305), false);
	}
}

void func_33(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (iParam0)
	{
		Global_2404956.f_1139 = iParam1;
		Global_2404956.f_1140 = iParam2;
		Global_2404956.f_1141 = iParam10;
		func_35();
		func_34(8, 0, 0);
		Global_2404956.f_634 = 1;
		Global_2404956.f_1142 = iParam11;
		Global_2404956.f_1145 = fParam3;
		Global_2404956.f_1146 = fParam4;
		Global_2404956.f_1143 = iParam5;
		Global_2404956.f_1144 = iParam6;
		Global_2404956.f_1147 = fParam7;
		Global_2404956.f_1148 = iParam8;
		Global_2404956.f_1149 = iParam9;
	}
	else
	{
		func_35();
		func_34(0, 0, 0);
		Global_2404956.f_634 = 0;
	}
}

void func_34(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2409529 = 0;
	}
	Global_2404956.f_469 = iParam0;
	Global_2404956.f_469.f_1 = get_id_of_this_thread();
	Global_2404956.f_469.f_2 = iParam1;
	Global_2404956.f_469.f_3 = iParam2;
}

void func_35()
{
	func_36();
	Global_2404956.f_635 = 0;
}

void func_36()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404956.f_636[iVar0 /*5*/] = {Var1};
		iVar0++;
	}
}

int func_37(int iParam0)
{
	var uVar0;
	var uVar3;
	
	return func_38(iParam0, 0, &uVar0, &uVar3);
}

int func_38(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (func_30(iParam0))
	{
		case 0:
			return func_39(iParam0, iParam1, uParam2, uParam3);
			break;
	}
	return 0;
}

bool func_39(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {53.5655f, -2569.264f, 5.0046f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 1:
					*uParam2 = {53.3032f, -2566.764f, 5.0046f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 2:
					*uParam2 = {53.2278f, -2570.463f, 5.0046f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 3:
					*uParam2 = {53.3409f, -2564.764f, 5.0046f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 4:
					*uParam2 = {51.2658f, -2568.726f, 5.0046f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 5:
					*uParam2 = {51.3035f, -2566.726f, 5.0046f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 6:
					*uParam2 = {51.8281f, -2569.926f, 5.0046f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 7:
					*uParam2 = {51.3412f, -2564.727f, 5.0046f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 8:
					*uParam2 = {49.2662f, -2568.688f, 5.0046f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 9:
					*uParam2 = {49.3039f, -2566.689f, 5.0046f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 10:
					*uParam2 = {54.6285f, -2565.288f, 5.2087f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 11:
					*uParam2 = {49.3416f, -2564.689f, 5.0046f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 12:
					*uParam2 = {47.2666f, -2568.651f, 5.0046f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 13:
					*uParam2 = {47.3042f, -2566.651f, 5.0046f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 14:
					*uParam2 = {52.3289f, -2563.151f, 5.0046f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 15:
					*uParam2 = {47.3419f, -2564.651f, 5.0046f};
					*uParam3 = 88.92f;
					return true;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {-1082.37f, -1261.376f, 4.6112f};
					*uParam3 = 300.96f;
					return true;
					break;
				
				case 1:
					*uParam2 = {-1080.826f, -1263.949f, 4.6936f};
					*uParam3 = 300.96f;
					return true;
					break;
				
				case 2:
					*uParam2 = {-1083.913f, -1258.803f, 4.4974f};
					*uParam3 = 300.96f;
					return true;
					break;
				
				case 3:
					*uParam2 = {-1079.283f, -1266.521f, 4.7761f};
					*uParam3 = 300.96f;
					return true;
					break;
				
				case 4:
					*uParam2 = {-1085.456f, -1256.231f, 4.4452f};
					*uParam3 = 300.96f;
					return true;
					break;
				
				case 5:
					*uParam2 = {-1079.797f, -1259.833f, 4.6507f};
					*uParam3 = 300.96f;
					return true;
					break;
				
				case 6:
					*uParam2 = {-1078.254f, -1262.405f, 4.7587f};
					*uParam3 = 300.96f;
					return true;
					break;
				
				case 7:
					*uParam2 = {-1081.34f, -1257.26f, 4.5154f};
					*uParam3 = 300.96f;
					return true;
					break;
				
				case 8:
					*uParam2 = {-1076.71f, -1264.978f, 4.8411f};
					*uParam3 = 300.96f;
					return true;
					break;
				
				case 9:
					*uParam2 = {-1082.884f, -1254.688f, 4.4188f};
					*uParam3 = 300.96f;
					return true;
					break;
				
				case 10:
					*uParam2 = {-1077.224f, -1258.289f, 4.6669f};
					*uParam3 = 300.96f;
					return true;
					break;
				
				case 11:
					*uParam2 = {-1075.681f, -1260.862f, 4.7941f};
					*uParam3 = 300.96f;
					return true;
					break;
				
				case 12:
					*uParam2 = {-1078.768f, -1255.717f, 4.5341f};
					*uParam3 = 300.96f;
					return true;
					break;
				
				case 13:
					*uParam2 = {-1074.138f, -1263.435f, 4.8505f};
					*uParam3 = 300.96f;
					return true;
					break;
				
				case 14:
					*uParam2 = {-1080.311f, -1253.144f, 4.4313f};
					*uParam3 = 300.96f;
					return true;
					break;
				
				case 15:
					*uParam2 = {-1074.652f, -1256.746f, 4.6728f};
					*uParam3 = 300.96f;
					return true;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {896.2726f, -1035.337f, 34.1073f};
					*uParam3 = 360f;
					return true;
					break;
				
				case 1:
					*uParam2 = {898.7726f, -1035.337f, 34.1073f};
					*uParam3 = 360f;
					return true;
					break;
				
				case 2:
					*uParam2 = {901.2726f, -1035.337f, 34.1073f};
					*uParam3 = 360f;
					return true;
					break;
				
				case 3:
					*uParam2 = {903.7726f, -1035.337f, 34.1073f};
					*uParam3 = 360f;
					return true;
					break;
				
				case 4:
					*uParam2 = {896.2726f, -1032.837f, 33.9666f};
					*uParam3 = 360f;
					return true;
					break;
				
				case 5:
					*uParam2 = {898.7726f, -1032.837f, 33.9662f};
					*uParam3 = 360f;
					return true;
					break;
				
				case 6:
					*uParam2 = {901.2726f, -1032.837f, 33.9661f};
					*uParam3 = 360f;
					return true;
					break;
				
				case 7:
					*uParam2 = {903.7726f, -1032.837f, 33.9661f};
					*uParam3 = 360f;
					return true;
					break;
				
				case 8:
					*uParam2 = {896.2726f, -1030.337f, 33.9666f};
					*uParam3 = 360f;
					return true;
					break;
				
				case 9:
					*uParam2 = {898.7726f, -1030.337f, 33.9666f};
					*uParam3 = 360f;
					return true;
					break;
				
				case 10:
					*uParam2 = {901.2726f, -1030.337f, 33.9666f};
					*uParam3 = 360f;
					return true;
					break;
				
				case 11:
					*uParam2 = {903.7726f, -1030.337f, 33.9666f};
					*uParam3 = 360f;
					return true;
					break;
				
				case 12:
					*uParam2 = {896.2726f, -1027.837f, 33.9666f};
					*uParam3 = 360f;
					return true;
					break;
				
				case 13:
					*uParam2 = {898.7726f, -1027.837f, 33.9666f};
					*uParam3 = 360f;
					return true;
					break;
				
				case 14:
					*uParam2 = {901.2726f, -1027.837f, 33.9666f};
					*uParam3 = 360f;
					return true;
					break;
				
				case 15:
					*uParam2 = {903.7726f, -1027.837f, 33.9666f};
					*uParam3 = 360f;
					return true;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {247.8323f, -1956.504f, 22.1788f};
					*uParam3 = 317.16f;
					return true;
					break;
				
				case 1:
					*uParam2 = {249.5188f, -1958.068f, 22.1585f};
					*uParam3 = 317.16f;
					return true;
					break;
				
				case 2:
					*uParam2 = {246.1458f, -1954.94f, 22.2111f};
					*uParam3 = 317.16f;
					return true;
					break;
				
				case 3:
					*uParam2 = {251.2053f, -1959.632f, 22.1202f};
					*uParam3 = 317.16f;
					return true;
					break;
				
				case 4:
					*uParam2 = {244.4594f, -1953.377f, 22.251f};
					*uParam3 = 317.16f;
					return true;
					break;
				
				case 5:
					*uParam2 = {249.3962f, -1954.818f, 22.1503f};
					*uParam3 = 317.16f;
					return true;
					break;
				
				case 6:
					*uParam2 = {251.0827f, -1956.382f, 22.1042f};
					*uParam3 = 317.16f;
					return true;
					break;
				
				case 7:
					*uParam2 = {247.7097f, -1953.254f, 22.1978f};
					*uParam3 = 317.16f;
					return true;
					break;
				
				case 8:
					*uParam2 = {252.7692f, -1957.945f, 22.0476f};
					*uParam3 = 317.16f;
					return true;
					break;
				
				case 9:
					*uParam2 = {246.0232f, -1951.69f, 22.2508f};
					*uParam3 = 317.16f;
					return true;
					break;
				
				case 10:
					*uParam2 = {250.9601f, -1953.131f, 22.0426f};
					*uParam3 = 317.16f;
					return true;
					break;
				
				case 11:
					*uParam2 = {252.6466f, -1954.695f, 21.9945f};
					*uParam3 = 317.16f;
					return true;
					break;
				
				case 12:
					*uParam2 = {249.2736f, -1951.567f, 22.0914f};
					*uParam3 = 317.16f;
					return true;
					break;
				
				case 13:
					*uParam2 = {254.3331f, -1956.259f, 21.9397f};
					*uParam3 = 317.16f;
					return true;
					break;
				
				case 14:
					*uParam2 = {247.5871f, -1950.004f, 22.1449f};
					*uParam3 = 317.16f;
					return true;
					break;
				
				case 15:
					*uParam2 = {243.824f, -1951.445f, 22.26f};
					*uParam3 = 317.16f;
					return true;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {-424.8701f, 185.5529f, 79.7918f};
					*uParam3 = 178.56f;
					return true;
					break;
				
				case 1:
					*uParam2 = {-421.9708f, 184.8951f, 79.7919f};
					*uParam3 = 178.56f;
					return true;
					break;
				
				case 2:
					*uParam2 = {-420.2715f, 184.8373f, 79.7612f};
					*uParam3 = 178.56f;
					return true;
					break;
				
				case 3:
					*uParam2 = {-417.9722f, 185.4795f, 79.7288f};
					*uParam3 = 178.56f;
					return true;
					break;
				
				case 4:
					*uParam2 = {-415.6729f, 185.4217f, 79.6811f};
					*uParam3 = 178.56f;
					return true;
					break;
				
				case 5:
					*uParam2 = {-413.3736f, 185.3639f, 79.6331f};
					*uParam3 = 178.56f;
					return true;
					break;
				
				case 6:
					*uParam2 = {-424.9279f, 183.2536f, 79.627f};
					*uParam3 = 178.56f;
					return true;
					break;
				
				case 7:
					*uParam2 = {-422.6286f, 183.1958f, 79.5531f};
					*uParam3 = 178.56f;
					return true;
					break;
				
				case 8:
					*uParam2 = {-420.3293f, 183.138f, 79.4768f};
					*uParam3 = 178.56f;
					return true;
					break;
				
				case 9:
					*uParam2 = {-418.03f, 183.4802f, 79.4155f};
					*uParam3 = 178.56f;
					return true;
					break;
				
				case 10:
					*uParam2 = {-415.7307f, 183.3224f, 79.3917f};
					*uParam3 = 178.56f;
					return true;
					break;
				
				case 11:
					*uParam2 = {-413.4314f, 183.2646f, 79.3209f};
					*uParam3 = 178.56f;
					return true;
					break;
				
				case 12:
					*uParam2 = {-424.3857f, 181.2543f, 79.617f};
					*uParam3 = 265.56f;
					return true;
					break;
				
				case 13:
					*uParam2 = {-426.886f, 185.0965f, 79.5167f};
					*uParam3 = 88.56f;
					return true;
					break;
				
				case 14:
					*uParam2 = {-417.0871f, 181.4387f, 79.4749f};
					*uParam3 = 270.56f;
					return true;
					break;
				
				case 15:
					*uParam2 = {-414.4878f, 181.3809f, 79.406f};
					*uParam3 = 271.56f;
					return true;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {-1042.974f, -2022.881f, 12.1616f};
					*uParam3 = 43.56f;
					return true;
					break;
				
				case 1:
					*uParam2 = {-1044.941f, -2024.766f, 12.1616f};
					*uParam3 = 43.56f;
					return true;
					break;
				
				case 2:
					*uParam2 = {-1046.607f, -2026.351f, 12.1616f};
					*uParam3 = 43.56f;
					return true;
					break;
				
				case 3:
					*uParam2 = {-1048.274f, -2027.936f, 12.1616f};
					*uParam3 = 43.56f;
					return true;
					break;
				
				case 4:
					*uParam2 = {-1044.859f, -2021.514f, 12.1616f};
					*uParam3 = 43.56f;
					return true;
					break;
				
				case 5:
					*uParam2 = {-1046.526f, -2023.099f, 12.1616f};
					*uParam3 = 43.56f;
					return true;
					break;
				
				case 6:
					*uParam2 = {-1048.192f, -2024.684f, 12.1616f};
					*uParam3 = 43.56f;
					return true;
					break;
				
				case 7:
					*uParam2 = {-1049.859f, -2026.269f, 12.1616f};
					*uParam3 = 43.56f;
					return true;
					break;
				
				case 8:
					*uParam2 = {-1046.444f, -2019.847f, 12.1616f};
					*uParam3 = 43.56f;
					return true;
					break;
				
				case 9:
					*uParam2 = {-1048.111f, -2021.432f, 12.1616f};
					*uParam3 = 43.56f;
					return true;
					break;
				
				case 10:
					*uParam2 = {-1049.777f, -2023.017f, 12.1616f};
					*uParam3 = 43.56f;
					return true;
					break;
				
				case 11:
					*uParam2 = {-1051.444f, -2024.602f, 12.1616f};
					*uParam3 = 43.56f;
					return true;
					break;
				
				case 12:
					*uParam2 = {-1048.029f, -2018.181f, 12.1616f};
					*uParam3 = 43.56f;
					return true;
					break;
				
				case 13:
					*uParam2 = {-1049.696f, -2019.766f, 12.1616f};
					*uParam3 = 43.56f;
					return true;
					break;
				
				case 14:
					*uParam2 = {-1051.362f, -2021.351f, 12.1616f};
					*uParam3 = 43.56f;
					return true;
					break;
				
				case 15:
					*uParam2 = {-1053.029f, -2022.936f, 12.1616f};
					*uParam3 = 43.56f;
					return true;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {-1268.466f, -812.4496f, 16.1077f};
					*uParam3 = 127.8f;
					return true;
					break;
				
				case 1:
					*uParam2 = {-1269.998f, -810.4742f, 16.1168f};
					*uParam3 = 127.8f;
					return true;
					break;
				
				case 2:
					*uParam2 = {-1266.933f, -814.425f, 16.0992f};
					*uParam3 = 127.8f;
					return true;
					break;
				
				case 3:
					*uParam2 = {-1271.53f, -808.4988f, 16.1253f};
					*uParam3 = 127.8f;
					return true;
					break;
				
				case 4:
					*uParam2 = {-1265.401f, -816.4004f, 16.0992f};
					*uParam3 = 127.8f;
					return true;
					break;
				
				case 5:
					*uParam2 = {-1270.441f, -813.9819f, 16.1078f};
					*uParam3 = 127.8f;
					return true;
					break;
				
				case 6:
					*uParam2 = {-1271.973f, -812.0065f, 16.1169f};
					*uParam3 = 127.8f;
					return true;
					break;
				
				case 7:
					*uParam2 = {-1268.909f, -815.9573f, 16.0992f};
					*uParam3 = 127.8f;
					return true;
					break;
				
				case 8:
					*uParam2 = {-1273.505f, -810.0311f, 16.1253f};
					*uParam3 = 127.8f;
					return true;
					break;
				
				case 9:
					*uParam2 = {-1267.377f, -817.9327f, 16.0992f};
					*uParam3 = 127.8f;
					return true;
					break;
				
				case 10:
					*uParam2 = {-1272.416f, -815.5142f, 16.1078f};
					*uParam3 = 127.8f;
					return true;
					break;
				
				case 11:
					*uParam2 = {-1273.949f, -813.5388f, 16.1169f};
					*uParam3 = 127.8f;
					return true;
					break;
				
				case 12:
					*uParam2 = {-1270.884f, -817.4896f, 16.0992f};
					*uParam3 = 127.8f;
					return true;
					break;
				
				case 13:
					*uParam2 = {-1275.481f, -811.5634f, 16.1253f};
					*uParam3 = 127.8f;
					return true;
					break;
				
				case 14:
					*uParam2 = {-1269.352f, -819.465f, 16.0992f};
					*uParam3 = 127.8f;
					return true;
					break;
				
				case 15:
					*uParam2 = {-1274.392f, -817.0464f, 16.1222f};
					*uParam3 = 127.8f;
					return true;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {-874.0634f, -2734.716f, 12.9095f};
					*uParam3 = 59.04f;
					return true;
					break;
				
				case 1:
					*uParam2 = {-872.7773f, -2732.572f, 12.9109f};
					*uParam3 = 59.04f;
					return true;
					break;
				
				case 2:
					*uParam2 = {-875.3495f, -2736.86f, 12.9053f};
					*uParam3 = 59.04f;
					return true;
					break;
				
				case 3:
					*uParam2 = {-871.4913f, -2730.428f, 12.9083f};
					*uParam3 = 59.04f;
					return true;
					break;
				
				case 4:
					*uParam2 = {-876.6356f, -2739.004f, 12.9029f};
					*uParam3 = 59.04f;
					return true;
					break;
				
				case 5:
					*uParam2 = {-876.2072f, -2733.43f, 12.8285f};
					*uParam3 = 59.04f;
					return true;
					break;
				
				case 6:
					*uParam2 = {-874.9211f, -2731.286f, 12.8285f};
					*uParam3 = 59.04f;
					return true;
					break;
				
				case 7:
					*uParam2 = {-877.4933f, -2735.574f, 12.8285f};
					*uParam3 = 59.04f;
					return true;
					break;
				
				case 8:
					*uParam2 = {-873.6351f, -2729.142f, 12.8285f};
					*uParam3 = 59.04f;
					return true;
					break;
				
				case 9:
					*uParam2 = {-878.7794f, -2737.718f, 12.8285f};
					*uParam3 = 59.04f;
					return true;
					break;
				
				case 10:
					*uParam2 = {-878.351f, -2732.144f, 12.8285f};
					*uParam3 = 59.04f;
					return true;
					break;
				
				case 11:
					*uParam2 = {-877.0649f, -2730f, 12.8285f};
					*uParam3 = 59.04f;
					return true;
					break;
				
				case 12:
					*uParam2 = {-879.6371f, -2734.288f, 12.8285f};
					*uParam3 = 59.04f;
					return true;
					break;
				
				case 13:
					*uParam2 = {-875.7789f, -2727.856f, 12.8285f};
					*uParam3 = 59.04f;
					return true;
					break;
				
				case 14:
					*uParam2 = {-880.9232f, -2736.431f, 12.8285f};
					*uParam3 = 59.04f;
					return true;
					break;
				
				case 15:
					*uParam2 = {-880.4948f, -2730.858f, 12.8285f};
					*uParam3 = 59.04f;
					return true;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {274.3696f, -3015.411f, 4.6999f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 1:
					*uParam2 = {274.4167f, -3012.911f, 4.6995f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 2:
					*uParam2 = {274.3225f, -3017.91f, 4.7001f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 3:
					*uParam2 = {274.4639f, -3010.412f, 4.6994f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 4:
					*uParam2 = {274.2754f, -3020.41f, 4.7003f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 5:
					*uParam2 = {271.8701f, -3015.364f, 4.7094f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 6:
					*uParam2 = {271.9172f, -3012.864f, 4.7092f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 7:
					*uParam2 = {271.823f, -3017.863f, 4.7096f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 8:
					*uParam2 = {271.9643f, -3010.365f, 4.709f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 9:
					*uParam2 = {271.7758f, -3020.363f, 4.7097f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 10:
					*uParam2 = {269.3705f, -3015.316f, 4.7188f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 11:
					*uParam2 = {269.4177f, -3012.817f, 4.7196f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 12:
					*uParam2 = {269.3234f, -3017.816f, 4.7189f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 13:
					*uParam2 = {269.4648f, -3010.317f, 4.7188f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 14:
					*uParam2 = {269.2763f, -3020.315f, 4.7191f};
					*uParam3 = 88.92f;
					return true;
					break;
				
				case 15:
					*uParam2 = {266.871f, -3015.269f, 4.7284f};
					*uParam3 = 88.92f;
					return true;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {1569.859f, -2130.302f, 77.3351f};
					*uParam3 = 105.84f;
					return true;
					break;
				
				case 1:
					*uParam2 = {1568.416f, -2130.711f, 77.3351f};
					*uParam3 = 105.84f;
					return true;
					break;
				
				case 2:
					*uParam2 = {1566.973f, -2131.121f, 76.8952f};
					*uParam3 = 105.84f;
					return true;
					break;
				
				case 3:
					*uParam2 = {1566.092f, -2133.605f, 76.6096f};
					*uParam3 = 180f;
					return true;
					break;
				
				case 4:
					*uParam2 = {1563.592f, -2133.605f, 76.5872f};
					*uParam3 = 180f;
					return true;
					break;
				
				case 5:
					*uParam2 = {1568.592f, -2133.605f, 76.6408f};
					*uParam3 = 180f;
					return true;
					break;
				
				case 6:
					*uParam2 = {1566.092f, -2136.105f, 76.5637f};
					*uParam3 = 180f;
					return true;
					break;
				
				case 7:
					*uParam2 = {1563.592f, -2136.105f, 76.5312f};
					*uParam3 = 180f;
					return true;
					break;
				
				case 8:
					*uParam2 = {1568.592f, -2136.105f, 76.6043f};
					*uParam3 = 180f;
					return true;
					break;
				
				case 9:
					*uParam2 = {1566.092f, -2138.605f, 76.6349f};
					*uParam3 = 180f;
					return true;
					break;
				
				case 10:
					*uParam2 = {1563.592f, -2138.605f, 76.602f};
					*uParam3 = 180f;
					return true;
					break;
				
				case 11:
					*uParam2 = {1568.592f, -2138.605f, 76.6595f};
					*uParam3 = 180f;
					return true;
					break;
				
				case 12:
					*uParam2 = {1566.092f, -2141.105f, 76.6486f};
					*uParam3 = 180f;
					return true;
					break;
				
				case 13:
					*uParam2 = {1563.592f, -2141.105f, 76.6264f};
					*uParam3 = 180f;
					return true;
					break;
				
				case 14:
					*uParam2 = {1568.592f, -2141.105f, 76.6633f};
					*uParam3 = 180f;
					return true;
					break;
				
				case 15:
					*uParam2 = {1566.092f, -2143.605f, 76.638f};
					*uParam3 = 180f;
					return true;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {-315.0531f, -2698.236f, 6.5502f};
					*uParam3 = 315.72f;
					return true;
					break;
				
				case 1:
					*uParam2 = {-314.0059f, -2697.162f, 6.3438f};
					*uParam3 = 315.72f;
					return true;
					break;
				
				case 2:
					*uParam2 = {-312.9586f, -2696.088f, 5.951f};
					*uParam3 = 315.72f;
					return true;
					break;
				
				case 3:
					*uParam2 = {-311.9114f, -2695.014f, 5.5625f};
					*uParam3 = 315.72f;
					return true;
					break;
				
				case 4:
					*uParam2 = {-310.8642f, -2693.94f, 5.1789f};
					*uParam3 = 315.72f;
					return true;
					break;
				
				case 5:
					*uParam2 = {-309.8169f, -2692.866f, 5.1532f};
					*uParam3 = 315.72f;
					return true;
					break;
				
				case 6:
					*uParam2 = {-308.7697f, -2691.792f, 5.0003f};
					*uParam3 = 315.72f;
					return true;
					break;
				
				case 7:
					*uParam2 = {-307.7224f, -2690.718f, 5.0003f};
					*uParam3 = 315.72f;
					return true;
					break;
				
				case 8:
					*uParam2 = {-314.0204f, -2699.495f, 6.5486f};
					*uParam3 = 225f;
					return true;
					break;
				
				case 9:
					*uParam2 = {-312.9597f, -2700.555f, 6.5465f};
					*uParam3 = 225f;
					return true;
					break;
				
				case 10:
					*uParam2 = {-311.899f, -2701.616f, 6.0171f};
					*uParam3 = 225f;
					return true;
					break;
				
				case 11:
					*uParam2 = {-310.8384f, -2702.677f, 5.3512f};
					*uParam3 = 225f;
					return true;
					break;
				
				case 12:
					*uParam2 = {-309.7777f, -2703.737f, 5.1532f};
					*uParam3 = 225f;
					return true;
					break;
				
				case 13:
					*uParam2 = {-308.717f, -2704.798f, 5.1532f};
					*uParam3 = 225f;
					return true;
					break;
				
				case 14:
					*uParam2 = {-307.6564f, -2705.858f, 5.1532f};
					*uParam3 = 225f;
					return true;
					break;
				
				case 15:
					*uParam2 = {-306.5957f, -2706.919f, 5.1532f};
					*uParam3 = 225f;
					return true;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {500.513f, -652.0776f, 23.9102f};
					*uParam3 = 262.8f;
					return true;
					break;
				
				case 1:
					*uParam2 = {500.1997f, -654.5579f, 23.9046f};
					*uParam3 = 262.8f;
					return true;
					break;
				
				case 2:
					*uParam2 = {500.8264f, -649.5973f, 23.7512f};
					*uParam3 = 262.8f;
					return true;
					break;
				
				case 3:
					*uParam2 = {499.8864f, -657.0381f, 23.899f};
					*uParam3 = 262.8f;
					return true;
					break;
				
				case 4:
					*uParam2 = {501.1397f, -647.117f, 23.7512f};
					*uParam3 = 262.8f;
					return true;
					break;
				
				case 5:
					*uParam2 = {502.9933f, -652.3909f, 23.7512f};
					*uParam3 = 262.8f;
					return true;
					break;
				
				case 6:
					*uParam2 = {502.68f, -654.8712f, 23.7512f};
					*uParam3 = 262.8f;
					return true;
					break;
				
				case 7:
					*uParam2 = {503.3066f, -649.9106f, 23.7512f};
					*uParam3 = 262.8f;
					return true;
					break;
				
				case 8:
					*uParam2 = {502.3667f, -657.3515f, 23.7512f};
					*uParam3 = 262.8f;
					return true;
					break;
				
				case 9:
					*uParam2 = {503.62f, -647.4304f, 23.7512f};
					*uParam3 = 262.8f;
					return true;
					break;
				
				case 10:
					*uParam2 = {505.4736f, -652.7043f, 23.7512f};
					*uParam3 = 262.8f;
					return true;
					break;
				
				case 11:
					*uParam2 = {505.1603f, -655.1846f, 23.7512f};
					*uParam3 = 262.8f;
					return true;
					break;
				
				case 12:
					*uParam2 = {505.7869f, -650.224f, 23.7512f};
					*uParam3 = 262.8f;
					return true;
					break;
				
				case 13:
					*uParam2 = {504.847f, -657.6649f, 23.7512f};
					*uParam3 = 262.8f;
					return true;
					break;
				
				case 14:
					*uParam2 = {506.1003f, -647.7437f, 23.7512f};
					*uParam3 = 262.8f;
					return true;
					break;
				
				case 15:
					*uParam2 = {507.9539f, -653.0176f, 23.7512f};
					*uParam3 = 262.8f;
					return true;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {-527.8182f, -1783.653f, 20.5241f};
					*uParam3 = 331.56f;
					return true;
					break;
				
				case 1:
					*uParam2 = {-530.0165f, -1782.462f, 20.5136f};
					*uParam3 = 331.56f;
					return true;
					break;
				
				case 2:
					*uParam2 = {-532.2148f, -1781.272f, 20.4936f};
					*uParam3 = 322.56f;
					return true;
					break;
				
				case 3:
					*uParam2 = {-526.6276f, -1781.455f, 20.3953f};
					*uParam3 = 331.56f;
					return true;
					break;
				
				case 4:
					*uParam2 = {-528.8259f, -1780.264f, 20.3978f};
					*uParam3 = 331.56f;
					return true;
					break;
				
				case 5:
					*uParam2 = {-531.0242f, -1779.073f, 20.4048f};
					*uParam3 = 325.56f;
					return true;
					break;
				
				case 6:
					*uParam2 = {-525.437f, -1779.556f, 20.3393f};
					*uParam3 = 331.56f;
					return true;
					break;
				
				case 7:
					*uParam2 = {-527.6353f, -1778.366f, 20.362f};
					*uParam3 = 331.56f;
					return true;
					break;
				
				case 8:
					*uParam2 = {-531.9336f, -1776.875f, 20.3854f};
					*uParam3 = 331.56f;
					return true;
					break;
				
				case 9:
					*uParam2 = {-525.7464f, -1777.658f, 20.3332f};
					*uParam3 = 325.56f;
					return true;
					break;
				
				case 10:
					*uParam2 = {-527.9447f, -1776.468f, 20.3559f};
					*uParam3 = 325.56f;
					return true;
					break;
				
				case 11:
					*uParam2 = {-529.543f, -1777.077f, 20.3792f};
					*uParam3 = 331.56f;
					return true;
					break;
				
				case 12:
					*uParam2 = {-522.1558f, -1779.36f, 20.1963f};
					*uParam3 = 322.56f;
					return true;
					break;
				
				case 13:
					*uParam2 = {-520.1541f, -1780.869f, 20.225f};
					*uParam3 = 316.56f;
					return true;
					break;
				
				case 14:
					*uParam2 = {-523.2524f, -1780.879f, 20.2515f};
					*uParam3 = 331.56f;
					return true;
					break;
				
				case 15:
					*uParam2 = {-521.8652f, -1782.562f, 20.3421f};
					*uParam3 = 331.56f;
					return true;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {-294.8197f, -1353.221f, 30.3182f};
					*uParam3 = 268.2f;
					return true;
					break;
				
				case 1:
					*uParam2 = {-294.8982f, -1355.72f, 30.3161f};
					*uParam3 = 268.2f;
					return true;
					break;
				
				case 2:
					*uParam2 = {-294.7412f, -1350.722f, 30.3066f};
					*uParam3 = 268.2f;
					return true;
					break;
				
				case 3:
					*uParam2 = {-293.1767f, -1357.019f, 30.3098f};
					*uParam3 = 268.2f;
					return true;
					break;
				
				case 4:
					*uParam2 = {-294.6627f, -1348.224f, 30.3058f};
					*uParam3 = 268.2f;
					return true;
					break;
				
				case 5:
					*uParam2 = {-295.0553f, -1360.718f, 30.3097f};
					*uParam3 = 268.2f;
					return true;
					break;
				
				case 6:
					*uParam2 = {-294.5841f, -1345.725f, 30.3098f};
					*uParam3 = 268.2f;
					return true;
					break;
				
				case 7:
					*uParam2 = {-295.1338f, -1363.216f, 30.3097f};
					*uParam3 = 268.2f;
					return true;
					break;
				
				case 8:
					*uParam2 = {-292.9209f, -1351.8f, 30.317f};
					*uParam3 = 268.2f;
					return true;
					break;
				
				case 9:
					*uParam2 = {-292.9994f, -1354.598f, 30.3113f};
					*uParam3 = 268.2f;
					return true;
					break;
				
				case 10:
					*uParam2 = {-293.1424f, -1349.601f, 30.3154f};
					*uParam3 = 268.2f;
					return true;
					break;
				
				case 11:
					*uParam2 = {-292.778f, -1358.897f, 30.3111f};
					*uParam3 = 268.2f;
					return true;
					break;
				
				case 12:
					*uParam2 = {-293.0639f, -1347.102f, 30.307f};
					*uParam3 = 268.2f;
					return true;
					break;
				
				case 13:
					*uParam2 = {-293.1565f, -1360.796f, 30.3111f};
					*uParam3 = 268.2f;
					return true;
					break;
				
				case 14:
					*uParam2 = {-292.9854f, -1344.303f, 30.3044f};
					*uParam3 = 268.2f;
					return true;
					break;
				
				case 15:
					*uParam2 = {-293.235f, -1363.295f, 30.3111f};
					*uParam3 = 268.2f;
					return true;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {349.8802f, 328.4255f, 103.3104f};
					*uParam3 = 165.6f;
					return true;
					break;
				
				case 1:
					*uParam2 = {352.3017f, 327.8038f, 103.1931f};
					*uParam3 = 165.6f;
					return true;
					break;
				
				case 2:
					*uParam2 = {354.7231f, 327.182f, 103.0763f};
					*uParam3 = 165.6f;
					return true;
					break;
				
				case 3:
					*uParam2 = {357.1446f, 326.5603f, 102.9681f};
					*uParam3 = 165.6f;
					return true;
					break;
				
				case 4:
					*uParam2 = {359.566f, 325.9386f, 102.8674f};
					*uParam3 = 165.6f;
					return true;
					break;
				
				case 5:
					*uParam2 = {361.9875f, 325.3168f, 102.771f};
					*uParam3 = 165.6f;
					return true;
					break;
				
				case 6:
					*uParam2 = {364.4089f, 324.6951f, 102.7018f};
					*uParam3 = 165.6f;
					return true;
					break;
				
				case 7:
					*uParam2 = {366.8304f, 324.0734f, 102.6326f};
					*uParam3 = 165.6f;
					return true;
					break;
				
				case 8:
					*uParam2 = {348.0585f, 327.5041f, 103.3091f};
					*uParam3 = 165.6f;
					return true;
					break;
				
				case 9:
					*uParam2 = {350.78f, 326.2823f, 103.1918f};
					*uParam3 = 165.6f;
					return true;
					break;
				
				case 10:
					*uParam2 = {353.5014f, 325.6606f, 103.075f};
					*uParam3 = 165.6f;
					return true;
					break;
				
				case 11:
					*uParam2 = {356.2229f, 324.7389f, 102.9793f};
					*uParam3 = 165.6f;
					return true;
					break;
				
				case 12:
					*uParam2 = {358.6443f, 324.1171f, 102.8786f};
					*uParam3 = 165.6f;
					return true;
					break;
				
				case 13:
					*uParam2 = {361.0658f, 323.4954f, 102.7693f};
					*uParam3 = 165.6f;
					return true;
					break;
				
				case 14:
					*uParam2 = {363.1872f, 322.8737f, 102.7001f};
					*uParam3 = 165.6f;
					return true;
					break;
				
				case 15:
					*uParam2 = {365.9086f, 322.2519f, 102.6309f};
					*uParam3 = 165.6f;
					return true;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {925.6405f, -1560.243f, 29.7406f};
					*uParam3 = 89.64f;
					return true;
					break;
				
				case 1:
					*uParam2 = {925.6606f, -1557.043f, 29.8954f};
					*uParam3 = 89.64f;
					return true;
					break;
				
				case 2:
					*uParam2 = {925.6204f, -1563.443f, 29.8634f};
					*uParam3 = 89.64f;
					return true;
					break;
				
				case 3:
					*uParam2 = {925.6807f, -1553.843f, 29.8012f};
					*uParam3 = 89.64f;
					return true;
					break;
				
				case 4:
					*uParam2 = {925.6003f, -1566.642f, 29.6487f};
					*uParam3 = 89.64f;
					return true;
					break;
				
				case 5:
					*uParam2 = {922.4406f, -1560.222f, 29.7553f};
					*uParam3 = 89.64f;
					return true;
					break;
				
				case 6:
					*uParam2 = {922.4606f, -1557.022f, 29.775f};
					*uParam3 = 89.64f;
					return true;
					break;
				
				case 7:
					*uParam2 = {922.4205f, -1563.422f, 29.7366f};
					*uParam3 = 89.64f;
					return true;
					break;
				
				case 8:
					*uParam2 = {922.4807f, -1553.823f, 29.7882f};
					*uParam3 = 89.64f;
					return true;
					break;
				
				case 9:
					*uParam2 = {922.4004f, -1566.622f, 29.704f};
					*uParam3 = 89.64f;
					return true;
					break;
				
				case 10:
					*uParam2 = {919.2406f, -1560.202f, 29.7592f};
					*uParam3 = 89.64f;
					return true;
					break;
				
				case 11:
					*uParam2 = {919.2607f, -1557.002f, 29.7694f};
					*uParam3 = 89.64f;
					return true;
					break;
				
				case 12:
					*uParam2 = {919.2205f, -1563.402f, 29.76f};
					*uParam3 = 89.64f;
					return true;
					break;
				
				case 13:
					*uParam2 = {919.2808f, -1553.802f, 29.779f};
					*uParam3 = 89.64f;
					return true;
					break;
				
				case 14:
					*uParam2 = {919.2004f, -1566.602f, 29.744f};
					*uParam3 = 89.64f;
					return true;
					break;
				
				case 15:
					*uParam2 = {916.0406f, -1560.182f, 29.7456f};
					*uParam3 = 89.64f;
					return true;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {760.1638f, -909.4731f, 24.2546f};
					*uParam3 = 269.64f;
					return true;
					break;
				
				case 1:
					*uParam2 = {760.1839f, -906.2732f, 24.249f};
					*uParam3 = 269.64f;
					return true;
					break;
				
				case 2:
					*uParam2 = {760.204f, -903.0732f, 24.2297f};
					*uParam3 = 269.64f;
					return true;
					break;
				
				case 3:
					*uParam2 = {760.2241f, -899.8733f, 24.2069f};
					*uParam3 = 269.64f;
					return true;
					break;
				
				case 4:
					*uParam2 = {760.2441f, -896.6733f, 24.1849f};
					*uParam3 = 269.64f;
					return true;
					break;
				
				case 5:
					*uParam2 = {760.2642f, -893.4734f, 24.1641f};
					*uParam3 = 269.64f;
					return true;
					break;
				
				case 6:
					*uParam2 = {760.2843f, -890.2734f, 24.1432f};
					*uParam3 = 269.64f;
					return true;
					break;
				
				case 7:
					*uParam2 = {760.6044f, -911.6735f, 24.1212f};
					*uParam3 = 269.64f;
					return true;
					break;
				
				case 8:
					*uParam2 = {762.1638f, -909.4932f, 24.2505f};
					*uParam3 = 269.64f;
					return true;
					break;
				
				case 9:
					*uParam2 = {762.1839f, -906.2933f, 24.2306f};
					*uParam3 = 269.64f;
					return true;
					break;
				
				case 10:
					*uParam2 = {762.2039f, -903.0933f, 24.1944f};
					*uParam3 = 269.64f;
					return true;
					break;
				
				case 11:
					*uParam2 = {762.224f, -899.8934f, 24.1655f};
					*uParam3 = 269.64f;
					return true;
					break;
				
				case 12:
					*uParam2 = {762.2441f, -896.6934f, 24.1417f};
					*uParam3 = 269.64f;
					return true;
					break;
				
				case 13:
					*uParam2 = {762.2642f, -893.4935f, 24.1227f};
					*uParam3 = 269.64f;
					return true;
					break;
				
				case 14:
					*uParam2 = {762.2843f, -890.2935f, 24.1055f};
					*uParam3 = 269.64f;
					return true;
					break;
				
				case 15:
					*uParam2 = {762.3043f, -911.9936f, 24.0937f};
					*uParam3 = 269.64f;
					return true;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {1038.552f, -2173.207f, 30.5259f};
					*uParam3 = 265.68f;
					return true;
					break;
				
				case 1:
					*uParam2 = {1038.311f, -2176.398f, 30.5213f};
					*uParam3 = 265.68f;
					return true;
					break;
				
				case 2:
					*uParam2 = {1038.793f, -2170.016f, 30.5306f};
					*uParam3 = 265.68f;
					return true;
					break;
				
				case 3:
					*uParam2 = {1038.07f, -2179.589f, 30.5189f};
					*uParam3 = 265.68f;
					return true;
					break;
				
				case 4:
					*uParam2 = {1039.034f, -2166.825f, 30.533f};
					*uParam3 = 265.68f;
					return true;
					break;
				
				case 5:
					*uParam2 = {1037.829f, -2182.78f, 30.5083f};
					*uParam3 = 265.68f;
					return true;
					break;
				
				case 6:
					*uParam2 = {1041.743f, -2173.448f, 30.4763f};
					*uParam3 = 265.68f;
					return true;
					break;
				
				case 7:
					*uParam2 = {1041.502f, -2176.639f, 30.4677f};
					*uParam3 = 265.68f;
					return true;
					break;
				
				case 8:
					*uParam2 = {1041.984f, -2170.257f, 30.5075f};
					*uParam3 = 265.68f;
					return true;
					break;
				
				case 9:
					*uParam2 = {1041.261f, -2179.83f, 30.4313f};
					*uParam3 = 265.68f;
					return true;
					break;
				
				case 10:
					*uParam2 = {1042.225f, -2167.066f, 30.5287f};
					*uParam3 = 265.68f;
					return true;
					break;
				
				case 11:
					*uParam2 = {1041.02f, -2183.021f, 30.4238f};
					*uParam3 = 265.68f;
					return true;
					break;
				
				case 12:
					*uParam2 = {1044.934f, -2173.689f, 30.453f};
					*uParam3 = 265.68f;
					return true;
					break;
				
				case 13:
					*uParam2 = {1044.693f, -2176.88f, 30.422f};
					*uParam3 = 265.68f;
					return true;
					break;
				
				case 14:
					*uParam2 = {1045.175f, -2170.498f, 30.4845f};
					*uParam3 = 265.68f;
					return true;
					break;
				
				case 15:
					*uParam2 = {1044.452f, -2180.071f, 30.3856f};
					*uParam3 = 265.68f;
					return true;
					break;
			}
			break;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {1018.338f, -2511.65f, 27.4777f};
					*uParam3 = 86.4f;
					return true;
					break;
				
				case 1:
					*uParam2 = {1017.937f, -2516.668f, 27.302f};
					*uParam3 = 86.4f;
					return true;
					break;
				
				case 2:
					*uParam2 = {1018.138f, -2514.375f, 27.302f};
					*uParam3 = 86.4f;
					return true;
					break;
				
				case 3:
					*uParam2 = {1017.736f, -2519.862f, 27.302f};
					*uParam3 = 86.4f;
					return true;
					break;
				
				case 4:
					*uParam2 = {1014.542f, -2519.661f, 27.3058f};
					*uParam3 = 86.4f;
					return true;
					break;
				
				case 5:
					*uParam2 = {1014.743f, -2516.468f, 27.3049f};
					*uParam3 = 86.4f;
					return true;
					break;
				
				case 6:
					*uParam2 = {1014.944f, -2513.274f, 27.3037f};
					*uParam3 = 86.4f;
					return true;
					break;
				
				case 7:
					*uParam2 = {1015.145f, -2510.08f, 27.3024f};
					*uParam3 = 86.4f;
					return true;
					break;
				
				case 8:
					*uParam2 = {1011.348f, -2519.46f, 27.3077f};
					*uParam3 = 86.4f;
					return true;
					break;
				
				case 9:
					*uParam2 = {1011.549f, -2516.267f, 27.3062f};
					*uParam3 = 86.4f;
					return true;
					break;
				
				case 10:
					*uParam2 = {1011.75f, -2513.073f, 27.3048f};
					*uParam3 = 86.4f;
					return true;
					break;
				
				case 11:
					*uParam2 = {1011.951f, -2509.879f, 27.3034f};
					*uParam3 = 86.4f;
					return true;
					break;
				
				case 12:
					*uParam2 = {1008.155f, -2519.259f, 27.3043f};
					*uParam3 = 86.4f;
					return true;
					break;
				
				case 13:
					*uParam2 = {1008.356f, -2516.066f, 27.302f};
					*uParam3 = 86.4f;
					return true;
					break;
				
				case 14:
					*uParam2 = {1008.557f, -2512.872f, 27.302f};
					*uParam3 = 86.4f;
					return true;
					break;
				
				case 15:
					*uParam2 = {1008.757f, -2509.678f, 27.302f};
					*uParam3 = 86.4f;
					return true;
					break;
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {-245.497f, 202.4499f, 82.7567f};
					*uParam3 = 181.44f;
					return true;
					break;
				
				case 1:
					*uParam2 = {-247.9962f, 202.387f, 83.0061f};
					*uParam3 = 181.44f;
					return true;
					break;
				
				case 2:
					*uParam2 = {-250.4954f, 202.3242f, 83.2191f};
					*uParam3 = 181.44f;
					return true;
					break;
				
				case 3:
					*uParam2 = {-252.9946f, 202.2614f, 83.5141f};
					*uParam3 = 181.44f;
					return true;
					break;
				
				case 4:
					*uParam2 = {-245.4342f, 199.9507f, 82.2888f};
					*uParam3 = 181.44f;
					return true;
					break;
				
				case 5:
					*uParam2 = {-247.9334f, 199.8878f, 82.6439f};
					*uParam3 = 181.44f;
					return true;
					break;
				
				case 6:
					*uParam2 = {-250.4326f, 199.825f, 82.9599f};
					*uParam3 = 181.44f;
					return true;
					break;
				
				case 7:
					*uParam2 = {-252.9318f, 199.7622f, 83.3373f};
					*uParam3 = 181.44f;
					return true;
					break;
				
				case 8:
					*uParam2 = {-245.3714f, 197.4514f, 81.7634f};
					*uParam3 = 181.44f;
					return true;
					break;
				
				case 9:
					*uParam2 = {-247.8706f, 197.3886f, 82.2527f};
					*uParam3 = 181.44f;
					return true;
					break;
				
				case 10:
					*uParam2 = {-250.3698f, 197.3258f, 82.6763f};
					*uParam3 = 181.44f;
					return true;
					break;
				
				case 11:
					*uParam2 = {-252.869f, 197.263f, 83.1381f};
					*uParam3 = 181.44f;
					return true;
					break;
				
				case 12:
					*uParam2 = {-245.3085f, 194.9522f, 81.3477f};
					*uParam3 = 181.44f;
					return true;
					break;
				
				case 13:
					*uParam2 = {-247.8077f, 194.8894f, 81.9302f};
					*uParam3 = 181.44f;
					return true;
					break;
				
				case 14:
					*uParam2 = {-250.3069f, 194.8266f, 82.4314f};
					*uParam3 = 181.44f;
					return true;
					break;
				
				case 15:
					*uParam2 = {-252.8062f, 194.7638f, 82.9539f};
					*uParam3 = 181.44f;
					return true;
					break;
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {540.8308f, -1944.671f, 23.9851f};
					*uParam3 = 302.4f;
					return true;
					break;
				
				case 1:
					*uParam2 = {542.1703f, -1946.782f, 23.9845f};
					*uParam3 = 302.4f;
					return true;
					break;
				
				case 2:
					*uParam2 = {539.4913f, -1942.561f, 23.9851f};
					*uParam3 = 302.4f;
					return true;
					break;
				
				case 3:
					*uParam2 = {543.5099f, -1948.893f, 23.9824f};
					*uParam3 = 302.4f;
					return true;
					break;
				
				case 4:
					*uParam2 = {538.1517f, -1940.45f, 23.9851f};
					*uParam3 = 302.4f;
					return true;
					break;
				
				case 5:
					*uParam2 = {544.8494f, -1951.004f, 23.9803f};
					*uParam3 = 302.4f;
					return true;
					break;
				
				case 6:
					*uParam2 = {542.9417f, -1943.332f, 23.9851f};
					*uParam3 = 302.4f;
					return true;
					break;
				
				case 7:
					*uParam2 = {544.2812f, -1945.443f, 23.9851f};
					*uParam3 = 302.4f;
					return true;
					break;
				
				case 8:
					*uParam2 = {541.6021f, -1941.221f, 23.9851f};
					*uParam3 = 302.4f;
					return true;
					break;
				
				case 9:
					*uParam2 = {545.6207f, -1947.553f, 23.9851f};
					*uParam3 = 302.4f;
					return true;
					break;
				
				case 10:
					*uParam2 = {540.2626f, -1939.11f, 23.9851f};
					*uParam3 = 302.4f;
					return true;
					break;
				
				case 11:
					*uParam2 = {546.9603f, -1949.664f, 23.9838f};
					*uParam3 = 302.4f;
					return true;
					break;
				
				case 12:
					*uParam2 = {545.0525f, -1941.992f, 23.9851f};
					*uParam3 = 302.4f;
					return true;
					break;
				
				case 13:
					*uParam2 = {546.392f, -1944.103f, 23.9851f};
					*uParam3 = 302.4f;
					return true;
					break;
				
				case 14:
					*uParam2 = {543.713f, -1939.881f, 23.9851f};
					*uParam3 = 302.4f;
					return true;
					break;
				
				case 15:
					*uParam2 = {547.7316f, -1946.214f, 23.9851f};
					*uParam3 = 302.4f;
					return true;
					break;
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					*uParam2 = {95.663f, -2216.311f, 5.1712f};
					*uParam3 = 90.36f;
					return true;
					break;
				
				case 1:
					*uParam2 = {95.6473f, -2213.811f, 5.1787f};
					*uParam3 = 90.36f;
					return true;
					break;
				
				case 2:
					*uParam2 = {95.6787f, -2218.811f, 5.1712f};
					*uParam3 = 90.36f;
					return true;
					break;
				
				case 3:
					*uParam2 = {95.6316f, -2211.311f, 5.0431f};
					*uParam3 = 90.36f;
					return true;
					break;
				
				case 4:
					*uParam2 = {95.6945f, -2221.311f, 5.1712f};
					*uParam3 = 90.36f;
					return true;
					break;
				
				case 5:
					*uParam2 = {95.6159f, -2208.811f, 5.0431f};
					*uParam3 = 90.36f;
					return true;
					break;
				
				case 6:
					*uParam2 = {93.1631f, -2216.326f, 5.0333f};
					*uParam3 = 90.36f;
					return true;
					break;
				
				case 7:
					*uParam2 = {93.1474f, -2213.826f, 5.0368f};
					*uParam3 = 90.36f;
					return true;
					break;
				
				case 8:
					*uParam2 = {93.1788f, -2218.826f, 5.0333f};
					*uParam3 = 90.36f;
					return true;
					break;
				
				case 9:
					*uParam2 = {93.1317f, -2211.326f, 5.0431f};
					*uParam3 = 90.36f;
					return true;
					break;
				
				case 10:
					*uParam2 = {93.1945f, -2221.326f, 5.0333f};
					*uParam3 = 90.36f;
					return true;
					break;
				
				case 11:
					*uParam2 = {93.116f, -2208.826f, 5.0431f};
					*uParam3 = 90.36f;
					return true;
					break;
				
				case 12:
					*uParam2 = {90.6631f, -2216.342f, 5.0373f};
					*uParam3 = 90.36f;
					return true;
					break;
				
				case 13:
					*uParam2 = {90.6474f, -2213.842f, 5.0409f};
					*uParam3 = 90.36f;
					return true;
					break;
				
				case 14:
					*uParam2 = {90.6788f, -2218.842f, 5.0371f};
					*uParam3 = 90.36f;
					return true;
					break;
				
				case 15:
					*uParam2 = {90.6317f, -2211.342f, 5.0468f};
					*uParam3 = 90.36f;
					return true;
					break;
			}
			break;
	}
	return false;
}

bool func_40(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_662();
	if (func_661(player_id(), 1))
	{
		if (((iParam4 && func_31(player_id(), 1, 0)) && is_player_switch_in_progress()) && Global_2418472[player_id() /*313*/].f_220 == 1)
		{
		}
		else
		{
			return false;
		}
	}
	if (!is_ped_injured(player_ped_id()))
	{
		set_ped_reset_flag(player_ped_id(), 150, true);
		if (!Global_2404956.f_626 == iParam0)
		{
			if (!Global_2418472[player_id() /*313*/].f_205 == 0)
			{
				if (get_time_difference(get_network_time(), Global_2404956.f_627) < func_660(0))
				{
					return false;
				}
				Global_2418472[player_id() /*313*/].f_205 = 0;
			}
		}
		if (Global_2418472[player_id() /*313*/].f_205 == 0)
		{
			Global_2404956.f_626 = iParam0;
			Global_2418472[player_id() /*313*/].f_205 = 2;
			if (iParam2)
			{
				if (!func_659())
				{
					iParam2 = false;
				}
			}
			Global_2418472[player_id() /*313*/].f_205 = 2;
			Global_2404956.f_1496 = 0;
			Global_2404956.f_1497 = 0;
			Global_2404956.f_1495 = 0;
		}
		if (Global_2418472[player_id() /*313*/].f_205 == 2)
		{
			if (iParam2 || iParam7)
			{
				iVar3 = true;
			}
			if (Global_2404956.f_626 == 11)
			{
				Global_2404956.f_629 = {Global_2410702};
				Global_2404956.f_632 = Global_2410702.f_5;
				Global_2418472[player_id() /*313*/].f_205 = 3;
			}
			else if (func_495(&(Global_2404956.f_629), &(Global_2404956.f_632), iParam0, iVar3, iParam3, iParam5, iParam6, iParam8, iParam12, 0))
			{
				Global_2418472[player_id() /*313*/].f_205 = 3;
			}
		}
		if (Global_2418472[player_id() /*313*/].f_205 == 3)
		{
			if (iParam11)
			{
				if (iParam2)
				{
					if (is_ped_in_any_vehicle(player_ped_id(), 0))
					{
						iVar2 = get_vehicle_ped_is_in(player_ped_id(), 0);
						clear_ped_tasks_immediately(player_ped_id());
						func_490(&iVar2);
					}
					else
					{
						iVar2 = func_489();
						func_488(&iVar2);
					}
					if (func_659())
					{
						if (is_ped_in_any_vehicle(player_ped_id(), 0))
						{
							if (!get_entity_model(get_vehicle_ped_is_in(player_ped_id(), 0)) == Global_2404956.f_39.f_67)
							{
								iVar4 = get_vehicle_ped_is_in(player_ped_id(), 0);
								if (iVar4 == Global_2404956.f_39.f_169)
								{
									func_486();
								}
								clear_ped_tasks_immediately(player_ped_id());
							}
						}
					}
					if (!is_ped_in_any_vehicle(player_ped_id(), 0))
					{
						Global_2418472[player_id() /*313*/].f_205 = 4;
					}
					else
					{
						iVar2 = get_vehicle_ped_is_in(player_ped_id(), 0);
						if (network_has_control_of_entity(iVar2))
						{
							func_480(iVar2);
							func_479(1);
							Global_2418472[player_id() /*313*/].f_205 = 6;
						}
						else
						{
							network_request_control_of_entity(iVar2);
						}
					}
				}
				else
				{
					func_479(1);
					Global_2418472[player_id() /*313*/].f_205 = 6;
				}
			}
		}
		if (Global_2418472[player_id() /*313*/].f_205 == 4)
		{
			if (func_476())
			{
				if (func_262(Global_2404956.f_629, Global_2404956.f_629.f_1, func_473(Global_2404956.f_39.f_67), Global_2404956.f_632, 0))
				{
					Global_2404956.f_628 = get_network_time();
					Global_2418472[player_id() /*313*/].f_205 = 5;
				}
			}
		}
		if (Global_2418472[player_id() /*313*/].f_205 == 5)
		{
			if (is_ped_in_any_vehicle(player_ped_id(), 0))
			{
				Global_2418472[player_id() /*313*/].f_205 = 6;
				if (Global_2404956.f_39.f_171)
				{
					Global_2418472[player_id() /*313*/].f_224 = 1;
				}
				else
				{
					Global_2418472[player_id() /*313*/].f_224 = 0;
				}
			}
			else if (get_time_difference(get_network_time(), Global_2404956.f_628) > 5000)
			{
				clear_ped_tasks_immediately(player_ped_id());
				Global_2418472[player_id() /*313*/].f_205 = 4;
			}
			else if (get_script_task_status(player_ped_id(), -1794415470) == 7)
			{
				if (does_entity_exist(Global_2404956.f_39.f_169) && is_vehicle_driveable(Global_2404956.f_39.f_169, 0))
				{
					func_81(player_ped_id(), Global_2404956.f_39.f_169, -1);
				}
				else
				{
					clear_ped_tasks_immediately(player_ped_id());
					Global_2418472[player_id() /*313*/].f_205 = 4;
				}
			}
		}
		if (Global_2418472[player_id() /*313*/].f_205 == 6)
		{
			Global_2404956.f_627 = get_network_time();
			if (iParam7)
			{
				iVar1 = true;
			}
			else
			{
				iVar1 = iParam2;
			}
			if (func_76(Global_2404956.f_629, Global_2404956.f_632, iVar1, iParam1, 0, 0, 1, iParam4, 1, 1))
			{
				func_479(0);
				if (Global_2404956.f_1662)
				{
					func_71();
					Global_2404956.f_1662 = 0;
				}
				Global_2418472[player_id() /*313*/].f_205 = 10;
			}
		}
		if (Global_2418472[player_id() /*313*/].f_205 == 9)
		{
			if (vdist(Global_2410702, Global_2404956.f_629) > 0.1f)
			{
				if (is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					iVar2 = get_vehicle_ped_is_in(player_ped_id(), 0);
					if (is_this_model_a_bike(get_entity_model(iVar2)) || is_this_model_a_car(get_entity_model(iVar2)))
					{
						get_ground_z_for_3d_coord(Global_2404956.f_629, Global_2404956.f_629.f_1, Global_2404956.f_629.f_2, &fVar0, 0);
						if (fVar0 == 0f || Global_2404956.f_629.f_2 - fVar0 > 1.5f)
						{
							if (vdist(Global_2410702, Global_2404956.f_629) > 15f)
							{
								Global_2404956.f_629 = {Global_2410702};
								if (network_has_control_of_entity(iVar2))
								{
									set_entity_coords(iVar2, Global_2404956.f_629, Global_2404956.f_629.f_1, fVar0 + func_70(get_entity_model(iVar2)), 1, false, 0, 1);
									set_vehicle_on_ground_properly(iVar2);
								}
								Global_2418472[player_id() /*313*/].f_205 = 10;
							}
							else
							{
								Global_2404956.f_629.f_2++;
							}
						}
						else
						{
							if (network_has_control_of_entity(iVar2))
							{
								set_entity_coords(iVar2, Global_2404956.f_629, Global_2404956.f_629.f_1, fVar0 + func_70(get_entity_model(iVar2)), 1, false, 0, 1);
								set_vehicle_on_ground_properly(iVar2);
							}
							Global_2418472[player_id() /*313*/].f_205 = 10;
						}
					}
					else
					{
						Global_2418472[player_id() /*313*/].f_205 = 10;
					}
				}
				else
				{
					Global_2418472[player_id() /*313*/].f_205 = 10;
				}
			}
			else
			{
				Global_2418472[player_id() /*313*/].f_205 = 10;
			}
		}
		if (Global_2418472[player_id() /*313*/].f_205 == 10)
		{
			if (does_entity_exist(Global_2404956.f_39.f_169))
			{
				set_entity_visible(Global_2404956.f_39.f_169, true, 0);
			}
			if (iParam2 || iParam7)
			{
				func_63(iParam9, 0);
			}
			func_59(func_62(player_id()), 0);
			if (does_entity_exist(Global_2404956.f_39.f_169))
			{
				func_486();
			}
			func_58();
			func_56(0, 0);
			if (iParam10)
			{
				func_55();
			}
			func_54();
			func_41();
			func_16();
			return true;
		}
	}
	else if (!Global_2418472[player_id() /*313*/].f_205 == 0)
	{
		clear_ped_tasks_immediately(player_ped_id());
		func_488(&(Global_2404956.f_39.f_169));
		func_16();
	}
	Global_2404956.f_627 = get_network_time();
	return false;
}

void func_41()
{
	int iVar0;
	
	Global_2418472[player_id() /*313*/].f_257.f_20 = -1;
	Global_2404956.f_1779 = -1f;
	iVar0 = false;
	while (iVar0 < 36)
	{
		func_43(iVar0);
		iVar0++;
	}
	if (func_42(player_id(), 0))
	{
		Global_2467356.f_77 = 1;
		Global_2467356.f_78 = get_network_time();
	}
}

bool func_42(int iParam0, int iParam1)
{
	if (func_31(iParam0, 0, 1))
	{
		if (!iParam1)
		{
			if (!Global_2418472[iParam0 /*313*/].f_257.f_14 == -1)
			{
				return true;
			}
		}
		else if (!Global_2418472[iParam0 /*313*/].f_257.f_16 == -1)
		{
			return true;
		}
	}
	return false;
}

void func_43(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = player_id();
	if (Global_2418472[iVar0 /*313*/].f_257.f_14 != -1)
	{
		if (func_53(Global_2418472[iVar0 /*313*/].f_257.f_14))
		{
			if (!func_48(player_id(), Global_2418472[iVar0 /*313*/].f_257.f_14, 0, 0))
			{
				Global_2418472[iVar0 /*313*/].f_257.f_14 = -1;
			}
		}
		else
		{
			Global_2418472[iVar0 /*313*/].f_257.f_14 = -1;
		}
	}
	if (Global_2418472[iVar0 /*313*/].f_257.f_16 != -1)
	{
		if (func_53(Global_2418472[iVar0 /*313*/].f_257.f_16))
		{
			if (!func_48(player_id(), Global_2418472[iVar0 /*313*/].f_257.f_16, 0, 1))
			{
				Global_2418472[iVar0 /*313*/].f_257.f_16 = -1;
			}
		}
		else
		{
			Global_2418472[iVar0 /*313*/].f_257.f_16 = -1;
		}
	}
	if (Global_2418472[iVar0 /*313*/].f_257.f_15 != -1)
	{
		if (!func_48(player_id(), Global_2418472[iVar0 /*313*/].f_257.f_15, 0, 0))
		{
			Global_2418472[iVar0 /*313*/].f_257.f_15 = -1;
		}
	}
	if (func_53(iParam0))
	{
		if (func_48(player_id(), iParam0, 0, 0))
		{
			if (!Global_2418472[iVar0 /*313*/].f_257.f_14 == iParam0)
			{
				Global_2418472[iVar0 /*313*/].f_257.f_14 = iParam0;
			}
		}
		if (func_48(player_id(), iParam0, 0, 1))
		{
			if (!Global_2418472[iVar0 /*313*/].f_257.f_16 == iParam0)
			{
				Global_2418472[iVar0 /*313*/].f_257.f_16 = iParam0;
			}
		}
		iVar2 = floor(to_float(iParam0) / 32f);
		if (func_45(player_id(), iParam0, 1120403456))
		{
			set_bit(&(Global_2418472[iVar0 /*313*/].f_257.f_17[iVar2]), iParam0 - iVar2 * 32);
		}
		else
		{
			clear_bit(&(Global_2418472[iVar0 /*313*/].f_257.f_17[iVar2]), iParam0 - iVar2 * 32);
		}
		fVar1 = vdist(func_44(iParam0), func_62(player_id()));
		if (iParam0 == Global_2418472[iVar0 /*313*/].f_257.f_20)
		{
			Global_2404956.f_1779 = fVar1;
		}
		else if (fVar1 < Global_2404956.f_1779 || Global_2404956.f_1779 <= 0f)
		{
			Global_2404956.f_1779 = fVar1;
			Global_2418472[iVar0 /*313*/].f_257.f_20 = iParam0;
		}
	}
	else if (iParam0 == Global_2418472[iVar0 /*313*/].f_257.f_20)
	{
		Global_2418472[iVar0 /*313*/].f_257.f_20 = -1;
		Global_2404956.f_1779 = -1f;
	}
	if (func_48(player_id(), iParam0, 0, 0))
	{
		if (!Global_2418472[iVar0 /*313*/].f_257.f_15 == iParam0)
		{
			Global_2418472[iVar0 /*313*/].f_257.f_15 = iParam0;
		}
	}
}

Vector3 func_44(int iParam0)
{
	return Global_4005550[iParam0 /*45*/].f_4;
}

int func_45(int iParam0, int iParam1, float fParam2)
{
	if (func_47(iParam1))
	{
		return func_46(func_62(iParam0), iParam1, fParam2);
	}
	return 0;
}

bool func_46(vector3 vParam0, int iParam1, float fParam2)
{
	if (func_47(iParam3))
	{
		if (vdist2(vParam0, func_44(iParam3)) < fParam4 * fParam4)
		{
			return true;
		}
	}
	return false;
}

bool func_47(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 36)
	{
		return true;
	}
	return false;
}

int func_48(int iParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_47(iParam1))
	{
		if (!iParam3)
		{
			return func_49(func_62(iParam0), iParam1, fParam2);
		}
		else if (func_49(func_62(iParam0), iParam1, fParam2))
		{
			return true;
		}
		else if (func_49(func_62(iParam0), iParam1, 15f))
		{
			if (func_31(iParam0, 1, 1))
			{
				iVar0 = get_player_ped(iParam0);
				if (does_entity_exist(iVar0) && !is_entity_dead(iVar0, 0))
				{
					if (is_ped_in_any_vehicle(iVar0, 0))
					{
						iVar1 = get_vehicle_ped_is_using(iVar0);
						if (does_entity_exist(iVar1) && !is_entity_dead(iVar1, 0))
						{
							if (decor_exist_on(iVar1, "PYV_Yacht"))
							{
								iVar2 = decor_get_int(iVar1, "PYV_Yacht");
								if (iVar2 == iParam1)
								{
									return true;
								}
							}
						}
					}
				}
			}
		}
	}
	return false;
}

int func_49(vector3 vParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	if (func_47(iParam3))
	{
		func_50(iParam3, &vVar0, &vVar3, &fVar6, fParam4);
		return is_point_in_angled_area(vParam0, vVar0, vVar3, fVar6, 0, true);
	}
	return false;
}

void func_50(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	vector3 vVar0;
	var uVar3;
	vector3 vVar4;
	
	vVar0 = {func_44(iParam0)};
	uVar3 = func_52(iParam0);
	vVar4 = {0f, 1f, 0f};
	func_51(&vVar4, 0f, 0f, uVar3);
	vVar4 = {vVar4 / FtoV(vmag(vVar4))};
	*uParam1 = {vVar0 + vVar4 * Vector(0.5f * 120f + fParam4, 0.5f * 120f + fParam4, 0.5f * 120f + fParam4)};
	*uParam1.f_2 -= 0.5f * 34f + fParam4;
	*uParam2 = {vVar0 - vVar4 * Vector(0.5f * 120f + fParam4, 0.5f * 120f + fParam4, 0.5f * 120f + fParam4)};
	*uParam2.f_2 += 0.5f * 34f + fParam4;
	*uParam3 = 16.17f + fParam4;
}

void func_51(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = cos(vParam1.x);
	fVar1 = sin(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = fVar0 * *uParam0.f_1 - fVar1 * *uParam0.f_2;
	vVar2.z = fVar1 * *uParam0.f_1 + fVar0 * *uParam0.f_2;
	*uParam0 = {vVar2};
	fVar0 = cos(vParam1.y);
	fVar1 = sin(vParam1.y);
	vVar2.x = fVar0 * *uParam0 + fVar1 * *uParam0.f_2;
	vVar2.y = *uParam0.f_1;
	vVar2.z = fVar0 * *uParam0.f_2 - fVar1 * *uParam0;
	*uParam0 = {vVar2};
	fVar0 = cos(vParam1.z);
	fVar1 = sin(vParam1.z);
	vVar2.x = fVar0 * *uParam0 - fVar1 * *uParam0.f_1;
	vVar2.y = fVar1 * *uParam0 + fVar0 * *uParam0.f_1;
	vVar2.z = *uParam0.f_2;
	*uParam0 = {vVar2};
}

var func_52(var uParam0)
{
	return Global_4005550[uParam0 /*45*/].f_7;
}

int func_53(int iParam0)
{
	if (func_47(iParam0))
	{
		return Global_2467356.f_2[iParam0];
	}
	return 0;
}

void func_54()
{
	Global_1608889 = -1;
	Global_1608892 = 0;
}

void func_55()
{
	Global_2404956.f_3 = 1;
}

void func_56(float fParam0, int iParam1)
{
	if (!func_57() || iParam1)
	{
		if (is_screen_faded_out() || is_player_switch_in_progress())
		{
			set_gameplay_cam_relative_pitch(0f, 1f);
			set_gameplay_cam_relative_heading(fParam0);
		}
	}
}

var func_57()
{
	return Global_1315913;
}

void func_58()
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	
	if (!is_ped_in_any_vehicle(player_ped_id(), 0) && !is_entity_attached(player_ped_id()))
	{
		vVar0 = {get_entity_coords(player_ped_id(), 0)};
		if (get_ground_z_for_3d_coord(vVar0, &fVar3, 0))
		{
			fVar4 = vVar0.z - fVar3 + 1f;
			if (absf(fVar4) > 0f && absf(fVar4) < 1f)
			{
				set_entity_coords(player_ped_id(), vVar0.x, vVar0.y, fVar3, 0, true, 0, 1);
			}
		}
	}
}

void func_59(vector3 vParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	var uVar6;
	var uVar9;
	int iVar10;
	
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
		fVar1 = func_60(get_entity_model(iVar0));
		fVar1 *= 0.5f;
		fVar1 += 6f;
		clear_area(vParam0, fVar1, 1, 0, 0, iParam3);
		clear_area_of_vehicles(vParam0, fVar1, 1, 0, 1, 1, iParam3);
		stop_fire_in_range(vParam0, 6f);
	}
	else
	{
		iVar10 = _cast_ray_point_to_point(vParam0.x, vParam0.y, vParam0.z - 2f, vParam0.x, vParam0.y, vParam0.z + 1f, 19, false, 7);
		_get_raycast_result(iVar10, &iVar2, &uVar3, &uVar6, &uVar9);
		clear_area(vParam0, 0.7f, 1, 0, 0, iParam3);
		if (!iVar2 == 0)
		{
			clear_area_of_vehicles(vParam0, 6f, 1, 0, 1, 1, iParam3);
			if (iParam3)
			{
				clear_area_of_objects(vParam0, 6f, 17);
			}
			else
			{
				clear_area_of_objects(vParam0, 6f, 16);
			}
		}
		stop_fire_in_range(vParam0, 2.5f);
	}
}

float func_60(int iParam0)
{
	struct<2> Var0;
	struct<2> Var3;
	
	func_61(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	return absf(Var0.f_1 - Var3.f_1);
}

void func_61(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (is_model_valid(iParam0))
	{
		get_model_dimensions(iParam0, fParam1, fParam2);
	}
	if (vmag(*fParam1) <= 0.01f || vmag(*fParam2) <= 0.01f)
	{
		*fParam1 = 0f - fParam4 * 0.5f;
		*fParam2 = 0f + fParam4 * 0.5f;
		*fParam1.f_1 = 0f - fParam3 * 0.5f;
		*fParam2.f_1 = 0f + fParam3 * 0.5f;
		*fParam1.f_2 = 0f - fParam5 * 0.5f;
		*fParam2.f_2 = 0f + fParam5 * 0.5f;
	}
}

Vector3 func_62(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

void func_63(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	if (is_ped_in_any_vehicle(player_ped_id(), 0) && func_69())
	{
		iVar1 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (func_67(iVar1, &iVar0))
		{
			func_64(iVar1, iParam0, iParam1);
			if (iVar0)
			{
				set_vehicle_as_no_longer_needed(&iVar1);
			}
		}
	}
}

void func_64(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = network_get_network_id_from_entity(iParam0);
	if (network_does_network_id_exist(iVar0))
	{
		if (Global_1573831 && is_vehicle_model(iParam0, joaat("rhino")))
		{
			iParam1 = 1;
			set_network_vehicle_respot_timer(iVar0, 1, 1);
			return;
		}
		else if (func_66())
		{
			func_65(iParam0);
			return;
		}
		if (iParam2 > iParam1)
		{
			set_network_vehicle_respot_timer(iVar0, iParam2, 1);
			if (is_ped_in_vehicle(player_ped_id(), iParam0, 0))
			{
				network_set_local_player_invincible_time(iParam2);
			}
		}
		else
		{
			set_network_vehicle_respot_timer(iVar0, iParam1, 1);
			if (is_ped_in_vehicle(player_ped_id(), iParam0, 0))
			{
				network_set_local_player_invincible_time(iParam1);
			}
		}
	}
}

bool func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = false;
	while (iVar0 < _network_get_num_participants_host())
	{
		if (network_is_participant_active(int_to_participantindex(iVar0)))
		{
			iVar1 = network_get_player_index(int_to_participantindex(iVar0));
			_0x9DD368BF06983221(iVar1, 1);
		}
		iVar0++;
	}
	if (network_has_control_of_entity(iParam0))
	{
		_0x6274C4712850841E(iParam0, 1);
		return true;
	}
	else
	{
		network_request_control_of_entity(iParam0);
	}
	return false;
}

var func_66()
{
	return Global_1573849;
}

bool func_67(int iParam0, int iParam1)
{
	if (func_68(iParam0, iParam1))
	{
		return true;
	}
	return false;
}

bool func_68(int iParam0, var uParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_a_mission_entity(iParam0))
		{
			if (network_get_entity_is_local(iParam0))
			{
				set_entity_as_mission_entity(iParam0, false, 1);
				*uParam1 = 1;
			}
		}
		if (does_entity_belong_to_this_script(iParam0, 0))
		{
			if (network_has_control_of_entity(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_69()
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (does_entity_exist(iVar0))
		{
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (get_ped_in_vehicle_seat(iVar0, -1) == player_ped_id())
				{
					return true;
				}
			}
		}
	}
	return false;
}

float func_70(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	
	func_61(iParam0, &vVar0, &vVar3, 1086324736, 1080033280, 1077936128);
	return absf(vVar0.z - vVar3.z);
}

void func_71()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	Vector3 fVar8;
	float fVar9;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	vector3 vVar25;
	vector3 vVar28;
	vector3 vVar31;
	vector3 vVar34;
	vector3 vVar37;
	vector3 vVar40;
	vector3 vVar43;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	var uVar58;
	var uVar61;
	var uVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	vector3 vVar74;
	float fVar77;
	
	if (!is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		vVar1 = {get_entity_coords(player_ped_id(), 0)};
		if ((!Global_2404956.f_39.f_52 && !Global_2404956.f_39.f_53) && !Global_2404956.f_1663)
		{
			if (get_closest_vehicle_node(vVar1, &vVar4, 1, 3f, 0f))
			{
				vVar4.z++;
				iVar7 = true;
				if (!vdist(vVar1, vVar4) < 50f || Global_2404956.f_39.f_52)
				{
					iVar7 = false;
				}
			}
		}
		else if (Global_2404956.f_1663)
		{
			Global_2404956.f_1663 = 0;
		}
		if (!is_entity_dead(player_ped_id(), 0))
		{
			fVar8 = get_entity_heading(player_ped_id());
		}
		fVar9 = 3f;
		vVar10 = {get_entity_forward_vector(player_ped_id())};
		vVar10 = {vVar10 / FtoV(vmag(vVar10))};
		vVar10 = {vVar10 * Vector(fVar9, fVar9, fVar9)};
		vVar13 = {vVar10};
		func_51(&vVar13, 0f, 0f, -45f);
		vVar16 = {vVar10};
		func_51(&vVar16, 0f, 0f, -90f);
		vVar19 = {vVar10};
		func_51(&vVar19, 0f, 0f, 45f);
		vVar22 = {vVar10};
		func_51(&vVar22, 0f, 0f, 90f);
		if (iVar7)
		{
			vVar25 = {vVar4 - vVar1};
			vVar28 = {func_75(vVar25, 0f, 0f, 1f)};
			vVar28 = {vVar28 / FtoV(vmag(vVar28))};
			vVar28 = {vVar28 * Vector(0.2f, 0.2f, 0.2f)};
		}
		vVar31 = {vVar1 + vVar10};
		vVar34 = {vVar1 + vVar13};
		vVar37 = {vVar1 + vVar16};
		vVar40 = {vVar1 + vVar19};
		vVar43 = {vVar1 + vVar22};
		iVar46 = _cast_3d_ray_point_to_point(vVar1, vVar31, 0.2f, 257, player_ped_id(), 7);
		iVar47 = _cast_3d_ray_point_to_point(vVar1, vVar34, 0.2f, 257, player_ped_id(), 7);
		iVar48 = _cast_3d_ray_point_to_point(vVar1, vVar37, 0.2f, 257, player_ped_id(), 7);
		iVar49 = _cast_3d_ray_point_to_point(vVar1, vVar40, 0.2f, 257, player_ped_id(), 7);
		iVar50 = _cast_3d_ray_point_to_point(vVar1, vVar43, 0.2f, 257, player_ped_id(), 7);
		if (iVar7)
		{
			iVar51 = _cast_3d_ray_point_to_point(vVar1, vVar4, 0.2f, 257, player_ped_id(), 7);
		}
		iVar65 = _get_raycast_result(iVar46, &iVar52, &uVar58, &uVar61, &uVar64);
		iVar65 = _get_raycast_result(iVar47, &iVar53, &uVar58, &uVar61, &uVar64);
		iVar65 = _get_raycast_result(iVar48, &iVar54, &uVar58, &uVar61, &uVar64);
		iVar65 = _get_raycast_result(iVar49, &iVar55, &uVar58, &uVar61, &uVar64);
		iVar65 = _get_raycast_result(iVar50, &iVar56, &uVar58, &uVar61, &uVar64);
		if (iVar7)
		{
			iVar65 = _get_raycast_result(iVar51, &iVar57, &uVar58, &uVar61, &uVar64);
		}
		if (iVar65 == 0)
		{
		}
		iVar66 += iVar52;
		iVar67 += iVar53;
		iVar68 += iVar54;
		iVar69 += iVar55;
		iVar70 += iVar56;
		if (iVar7)
		{
			iVar71 += iVar57;
		}
		iVar72 = 99;
		iVar73 = -1;
		if (iVar66 < iVar72)
		{
			iVar72 = iVar66;
			iVar73 = 0;
		}
		if (iVar67 < iVar72)
		{
			iVar72 = iVar67;
			iVar73 = 1;
		}
		if (iVar69 < iVar72)
		{
			iVar72 = iVar69;
			iVar73 = 2;
		}
		if (iVar68 < iVar72)
		{
			iVar72 = iVar68;
			iVar73 = 3;
		}
		if (iVar70 < iVar72)
		{
			iVar72 = iVar70;
			iVar73 = 4;
		}
		if (iVar7)
		{
			if (iVar71 < iVar72)
			{
				iVar72 = iVar71;
				iVar73 = 5;
			}
		}
		if (iVar7 && iVar71 == 0)
		{
			fVar8 = get_heading_from_vector_2d(vVar25.x, vVar25.y);
			func_74(fVar8);
			return;
		}
		else if (iVar66 == 0)
		{
			return;
		}
		else if (Global_2404956.f_39.f_52)
		{
			vVar74 = {Global_2404956.f_39.f_49 - vVar1};
			fVar77 = func_73(vVar74, vVar37);
			if (fVar77 <= 0f)
			{
				if (iVar67 == 0)
				{
					fVar8 += -45f;
					func_74(fVar8);
					return;
				}
				else if (iVar68 == 0)
				{
					fVar8 += -90f;
					func_74(fVar8);
					return;
				}
				else if (iVar69 == 0)
				{
					fVar8 += 45f;
					func_74(fVar8);
					return;
				}
				else if (iVar70 == 0)
				{
					fVar8 += 90f;
					func_74(fVar8);
					return;
				}
				else
				{
					func_72(iVar73, fVar8, vVar25);
				}
			}
			else if (iVar69 == 0)
			{
				fVar8 += 45f;
				func_74(fVar8);
				return;
			}
			else if (iVar70 == 0)
			{
				fVar8 += 90f;
				func_74(fVar8);
				return;
			}
			else if (iVar67 == 0)
			{
				fVar8 += -45f;
				func_74(fVar8);
				return;
			}
			else if (iVar68 == 0)
			{
				fVar8 += -90f;
				func_74(fVar8);
				return;
			}
			else
			{
				func_72(iVar73, fVar8, vVar25);
			}
		}
		else
		{
			iVar0 = get_random_int_in_range(0, 2);
			if (iVar0 == 0)
			{
				if (iVar68 == 0)
				{
					fVar8 += -90f;
					func_74(fVar8);
					return;
				}
				else if (iVar70 == 0)
				{
					fVar8 += 90f;
					func_74(fVar8);
					return;
				}
				else
				{
					func_72(iVar73, fVar8, vVar25);
				}
			}
			else if (iVar70 == 0)
			{
				fVar8 += 90f;
				func_74(fVar8);
				return;
			}
			else if (iVar68 == 0)
			{
				fVar8 += -90f;
				func_74(fVar8);
				return;
			}
			else
			{
				func_72(iVar73, fVar8, vVar25);
			}
		}
	}
}

void func_72(int iParam0, Vector3 fParam1, struct<2> Param2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			return;
			break;
		
		case 1:
			fParam1 += -45f;
			func_74(fParam1);
			return;
			break;
		
		case 2:
			fParam1 += 45f;
			func_74(fParam1);
			return;
			break;
		
		case 3:
			fParam1 += -90f;
			func_74(fParam1);
			return;
			break;
		
		case 4:
			fParam1 += 90f;
			func_74(fParam1);
			return;
			break;
		
		case 5:
			fParam1 = get_heading_from_vector_2d(Param2, Param2.f_1);
			func_74(fParam1);
			return;
			break;
	}
}

float func_73(vector3 vParam0, vector3 vParam1)
{
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

void func_74(Vector3 fParam0)
{
	if (!is_ped_ragdoll(player_ped_id()))
	{
		set_entity_heading(player_ped_id(), fParam0);
	}
	func_56(0f, 1);
}

Vector3 func_75(vector3 vParam0, vector3 vParam1)
{
	return vParam0.y * vParam3.z - vParam0.z * vParam3.y, vParam0.z * vParam3.x - vParam0.x * vParam3.z, vParam0.x * vParam3.y - vParam0.y * vParam3.x;
}

bool func_76(vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	
	Global_17118.f_6 = 1;
	if (is_player_switch_in_progress() && !iParam9)
	{
		if (Global_2428492.f_724)
		{
			func_79(0, iParam9);
		}
		return false;
	}
	if ((is_new_load_scene_active() && !iParam9) && !is_player_teleport_active())
	{
		return false;
	}
	if (!func_78())
	{
		if (func_661(player_id(), 1))
		{
			if (((iParam9 && func_31(player_id(), 1, 0)) && is_player_switch_in_progress()) && Global_2418472[player_id() /*313*/].f_220 == 1)
			{
			}
			else
			{
				return false;
			}
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 += 360f;
	}
	if (fParam3 >= 360f)
	{
		fParam3 += -360f;
	}
	if (!Global_2428492.f_724 && !iParam11)
	{
		vVar0 = {get_entity_coords(player_ped_id(), 0)};
		if ((absf(vVar0.x - vParam0.x) < 0.2f && absf(vVar0.y - vParam0.y) < 0.2f) && absf(vVar0.z - vParam0.z) < 1.2f)
		{
			fVar3 = fParam3 - get_entity_heading(player_ped_id());
			if (fVar3 > 180f)
			{
				fVar3 += -360f;
			}
			if (fVar3 < -180f)
			{
				fVar3 += 360f;
			}
			if (absf(fVar3) < 1f)
			{
				Global_2428492.f_724 = 0;
				Global_2428492.f_725 = 0;
				if (is_player_teleport_active())
				{
					stop_player_teleport();
				}
				return true;
			}
		}
	}
	if (((!vParam0.x == Global_2428492.f_726 || !vParam0.y == Global_2428492.f_726.f_1) || !vParam0.z == Global_2428492.f_726.f_2) || !fParam3 == Global_2428492.f_729)
	{
		if (Global_2428492.f_724 == 1)
		{
			if (get_time_difference(get_network_time(), Global_2428492.f_730) < func_660(0))
			{
				return false;
			}
			stop_player_teleport();
			Global_2428492.f_725 = 1;
		}
		else
		{
			Global_2428492.f_725 = 0;
		}
		Global_2428492.f_726 = {vParam0};
		Global_2428492.f_729 = fParam3;
		Global_2428492.f_724 = 0;
	}
	if (!Global_2428492.f_724 && !is_player_teleport_active())
	{
		if (iParam4)
		{
			iParam5 = false;
		}
		iParam7 = iParam7;
		if (iParam7)
		{
		}
		if (iParam5)
		{
		}
		if (iParam8)
		{
		}
		if (is_ped_in_any_vehicle(player_ped_id(), 0))
		{
			if (!is_bit_set(Global_91330.f_1300[44], 16))
			{
				func_77();
			}
			if (!get_current_ped_vehicle_weapon(player_ped_id(), &(Global_2404956.f_473)))
			{
				Global_2404956.f_473 = 0;
			}
		}
		if (iParam9)
		{
			if (iParam4)
			{
				if (is_ped_in_any_vehicle(player_ped_id(), 0))
				{
					iVar4 = get_vehicle_ped_is_using(player_ped_id());
					set_entity_coords(iVar4, vParam0, 0, true, 1, 1);
					set_entity_heading(iVar4, fParam3);
				}
				else
				{
					set_entity_coords(player_ped_id(), vParam0, 0, false, 0, 1);
					set_entity_heading(player_ped_id(), fParam3);
				}
			}
			else
			{
				set_entity_coords(player_ped_id(), vParam0, 0, false, 0, 1);
				set_entity_heading(player_ped_id(), fParam3);
			}
			func_79(iParam6, iParam9);
			return true;
		}
		else
		{
			clear_focus();
			start_player_teleport(player_id(), vParam0, fParam3, iParam4, iParam10, 0);
		}
		Global_2428492.f_730 = get_network_time();
		Global_2428492.f_724 = 1;
	}
	if (Global_2428492.f_724)
	{
		Global_17118.f_6 = 1;
		Global_2428492.f_730 = get_network_time();
		if (iParam9)
		{
			if (vdist(get_entity_coords(player_ped_id(), 0), Global_2428492.f_726) < 2f)
			{
				if (is_player_teleport_active())
				{
					stop_player_teleport();
				}
				func_79(iParam6, iParam9);
				return true;
			}
		}
		if (!is_player_teleport_active())
		{
			func_79(iParam6, iParam9);
			return true;
		}
	}
	return false;
}

void func_77()
{
	Global_2404956.f_1672 = get_player_radio_station_index();
	if (unk_0x2DD39BF3E2F9C47F())
	{
		Global_2404956.f_1672 = 255;
	}
}

var func_78()
{
	return Global_1315888;
}

void func_79(int iParam0, int iParam1)
{
	if (!iParam0)
	{
		set_gameplay_cam_relative_pitch(0f, 1f);
		set_gameplay_cam_relative_heading(0f);
	}
	if (!is_entity_dead(player_ped_id(), 0))
	{
		clear_ped_wetness(player_ped_id());
	}
	if (!iParam1)
	{
		clear_focus();
	}
	if (is_player_teleport_active())
	{
		stop_player_teleport();
	}
	func_15();
	if (!is_bit_set(Global_1587523[player_id() /*444*/].f_250.f_7, 14))
	{
		func_80();
	}
}

void func_80()
{
	Global_2467356.f_80 = 1;
}

void func_81(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!func_261(iParam0, iParam1))
	{
		vVar0 = {get_entity_coords(iParam0, 0)};
		vVar3 = {get_entity_coords(iParam1, 0)};
		if (!vdist(vVar0, vVar3) < 5f || !iParam2 == -1)
		{
			vVar3.z += -4f;
			set_entity_coords(iParam0, vVar3, 0, false, 0, 1);
		}
		clear_ped_tasks_immediately(iParam0);
		set_entity_collision(iParam0, true, 0);
		freeze_entity_position(iParam0, false);
		set_ped_can_ragdoll(player_ped_id(), 0);
		task_enter_vehicle(iParam0, iParam1, -1, iParam2, 2f, 16, 0);
		_0x2208438012482A1A(iParam0, 0, 0);
		if (Global_1573837)
		{
			if (func_260(get_entity_model(iParam1)))
			{
				func_82(0);
			}
		}
	}
}

void func_82(int iParam0)
{
	struct<14> Var0;
	int iVar14;
	
	if (!is_ped_wearing_helmet(player_ped_id()))
	{
		if ((Global_2404956.f_1678 == -99 || Global_2404956.f_1678 == 0) || !func_259(get_entity_model(player_ped_id()), 14, Global_2404956.f_1678))
		{
			if (!iParam0)
			{
				iVar14 = func_258(581, -1, 0);
			}
		}
		else
		{
			iVar14 = Global_2404956.f_1678;
		}
		Var0 = {func_216(joaat("mp_m_freemode_01"), 14, iVar14)};
		func_215(player_ped_id(), 14, iVar14);
		func_83(player_ped_id(), 14, iVar14, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_83(player_ped_id(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
}

bool func_83(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar31;
	var uVar41;
	int iVar57;
	var uVar58;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	float fVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	var uVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	var uVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	
	if (!network_is_game_in_progress())
	{
		if ((Global_1315845 != 4 && Global_1315845 != 5) && Global_1315845 != 7)
		{
			return false;
		}
	}
	if (is_ped_injured(iParam0) || iParam2 == -99)
	{
		return false;
	}
	if (iParam0 == player_ped_id() && Global_2418472[player_id() /*313*/].f_220 == 2)
	{
		return false;
	}
	Global_69310++;
	iVar5 = get_entity_model(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_69311[1 /*14*/] = {func_216(iVar5, iParam1, iParam2)};
		if (!func_214(iParam3))
		{
			Global_69310--;
			return false;
		}
		func_209(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		clear_all_ped_props(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = {Global_69354};
		}
		else
		{
			uVar15 = {func_205(iVar5, iParam2)};
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10)
				{
					Global_69311[1 /*14*/] = {func_216(iVar5, 10, 0)};
					if (iParam4 == -1)
					{
						set_ped_component_variation(iParam0, func_204(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_204(iVar0)));
					}
					else
					{
						set_ped_component_variation(iParam0, func_204(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
					}
					if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
					{
						func_209(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_69311[1 /*14*/] = {func_216(iVar5, iVar0, uVar15[iVar0])};
					if (is_bit_set(Global_69311[1 /*14*/].f_6, false) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar31 = 9;
							if (iParam5 == 1)
							{
								uVar31 = {Global_69370};
							}
							else
							{
								uVar31 = {func_201(iVar5, uVar15[iVar0])};
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_69311[1 /*14*/] = {func_216(iVar5, 14, uVar31[iVar1])};
								func_200(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
								if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
								{
									func_209(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									set_ped_component_variation(iParam0, func_204(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_204(iVar0)));
								}
								else
								{
									set_ped_component_variation(iParam0, func_204(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_83(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
							if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
							{
								func_209(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_69311[1 /*14*/] = {func_216(iVar5, iVar0, func_199(iParam0, iVar0, -1))};
				if (is_bit_set(Global_69311[1 /*14*/].f_6, 3))
				{
					uVar41 = {func_205(iVar5, 0)};
					func_83(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar57 = func_198();
			if (iVar57 != -1)
			{
				func_196(iVar57, 0, Global_69309);
			}
			func_194(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = {func_201(iVar5, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_69311[1 /*14*/] = {func_216(iVar5, 14, uVar58[iVar1])};
			func_200(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
			if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
			{
				func_209(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_69310 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_192(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_83(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		iVar68 = get_hash_name_for_component(iParam0, true, get_ped_drawable_variation(iParam0, true), get_ped_texture_variation(iParam0, true));
		if (_0x341DE7ED1D2A1BFD(iVar68, 838607662, 0))
		{
			iVar69 = func_190(iParam0, 1);
			iVar3 = func_192(iParam0, iVar5, 1, iVar69, 14, Global_69311[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = func_189(iVar5, 1, -1);
			}
		}
		func_200(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
		if (is_bit_set(Global_69311[1 /*14*/].f_6, true))
		{
			func_209(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_69310 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_192(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_83(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
		}
	}
	else
	{
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar70 = -1;
				if (is_bit_set(Global_69311[1 /*14*/].f_6, 6) && _0x341DE7ED1D2A1BFD(Global_2621444, -1996375172, 11))
				{
					_0xCC9682B8951C5229(iParam0, Global_1317072, Global_1317073, Global_1317074, 0);
					_0xCC9682B8951C5229(iParam0, Global_1317072, Global_1317073, Global_1317074, 1);
					_0xCC9682B8951C5229(iParam0, Global_1317072, Global_1317073, Global_1317074, 2);
					_0xCC9682B8951C5229(iParam0, Global_1317072, Global_1317073, Global_1317074, 3);
				}
				iVar71 = func_190(iParam0, 11);
				iVar72 = func_190(iParam0, 8);
				iVar73 = func_190(iParam0, 4);
				iVar8 = get_hash_name_for_component(iParam0, 8, get_ped_drawable_variation(iParam0, 8), get_ped_texture_variation(iParam0, 8));
				if (_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar70 = func_188(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar70 = func_188(iVar5, iParam2, 11, 4);
					}
					if (((_0x341DE7ED1D2A1BFD(iVar70, 320460654, 0) || _0x341DE7ED1D2A1BFD(iVar70, -2017999390, 0)) || _0x341DE7ED1D2A1BFD(iVar70, -1410897066, 0)) || _0x341DE7ED1D2A1BFD(iVar70, -826135203, 0))
					{
					}
					else
					{
						iVar9 = func_190(iParam0, 8);
					}
				}
				iVar74 = get_hash_name_for_component(iParam0, 3, get_ped_drawable_variation(iParam0, 3), 0);
				if (_0x341DE7ED1D2A1BFD(iVar74, -356646862, 0))
				{
					iVar75 = func_187(iVar5, iVar72, iVar71, iVar73);
					if (iVar75 == -99)
					{
						iVar75 = func_192(iParam0, iVar5, 11, iVar71, 3, 0);
					}
					switch (iVar74)
					{
						case 1165919867:
						case 1606204151:
						case 1774276352:
						case 1934254610:
						case 980775017:
						case 399321881:
							iVar75 = 11;
							iVar70 = func_188(iVar5, iParam2, 11, 4);
							if (!_0x341DE7ED1D2A1BFD(iVar70, -530089825, 0))
							{
								iVar75 = -99;
							}
							break;
					}
					if (iVar75 != -99)
					{
						iVar76 = iVar75;
						iVar77 = 0;
						while (iVar77 < 15)
						{
							if (func_186(iVar5, iVar76, iVar77) == iVar74)
							{
								iVar11 = iVar77;
								iVar12 = get_ped_texture_variation(iParam0, 3);
							}
							iVar77++;
						}
					}
				}
				iVar70 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && _0x341DE7ED1D2A1BFD(func_188(iVar5, iParam2, 11, 4), -1200513218, 0))
				{
					iVar71 = func_190(iParam0, 11);
					if (iVar71 >= 256)
					{
						iVar70 = func_188(iVar5, iVar71, 11, 4);
					}
					if (iVar71 >= 256 && _0x341DE7ED1D2A1BFD(iVar70, 1965569012, 0))
					{
						iVar78 = func_184(iVar5, iVar71, iParam2, get_ped_texture_variation(iParam0, 11));
						if (iVar78 != -99)
						{
							func_83(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_69311[1 /*14*/] = {func_216(iVar5, iParam1, iParam2)};
						}
					}
				}
				else if (func_183(iVar5, iParam2))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar71 >= 237)
						{
							iVar70 = func_188(iVar5, iVar71, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar71 >= 256)
						{
							iVar70 = func_188(iVar5, iVar71, 11, 4);
						}
					}
					if (!func_183(iVar5, iVar71))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar71 >= 256) && (_0x341DE7ED1D2A1BFD(iVar70, -1200513218, 0) || _0x341DE7ED1D2A1BFD(iVar70, 1965569012, 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar71 >= 256) && ((((((_0x341DE7ED1D2A1BFD(iVar70, 684992453, 0) || _0x341DE7ED1D2A1BFD(iVar70, 916636514, 0)) || _0x341DE7ED1D2A1BFD(iVar70, -1939378450, 0)) || _0x341DE7ED1D2A1BFD(iVar70, -820724897, 0)) || _0x341DE7ED1D2A1BFD(iVar70, 153792394, 0)) || _0x341DE7ED1D2A1BFD(iVar70, -872449705, 0)) || _0x341DE7ED1D2A1BFD(iVar70, 700658917, 0)))
						{
						}
						else
						{
							iVar79 = func_184(iVar5, iVar71, iParam2, get_ped_texture_variation(iParam0, 11));
							if (iVar79 != -99)
							{
								func_83(iParam0, 8, iVar79, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_69311[1 /*14*/] = {func_216(iVar5, iParam1, iParam2)};
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar80 = func_189(iVar5, 11, -1);
									Global_69311[1 /*14*/] = {func_216(iVar5, 11, iVar80)};
									iVar79 = func_184(iVar5, iVar80, iParam2, Global_69311[1 /*14*/].f_4);
									if (iVar79 == -99)
									{
										iVar79 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar79 = 48;
								}
								func_83(iParam0, 8, iVar79, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_69311[1 /*14*/] = {func_216(iVar5, iParam1, iParam2)};
							}
						}
					}
					else
					{
						Global_69311[1 /*14*/] = {func_216(iVar5, 11, iVar71)};
						iVar81 = Global_69311[1 /*14*/].f_3;
						Global_69311[1 /*14*/] = {func_216(iVar5, 11, iParam2)};
						iVar82 = Global_69311[1 /*14*/].f_3;
						if (iVar81 != iVar82)
						{
							Global_69311[1 /*14*/] = {func_216(iVar5, 8, iVar72)};
							iVar83 = Global_69311[1 /*14*/].f_4;
							iVar84 = func_182(iVar5, iVar72, iVar83);
							if (iVar84 == -99)
							{
								iVar85 = iVar72;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if ((iParam2 >= 96 && iParam2 <= 107) || func_181(func_188(iVar5, iParam2, 11, 3)) == 6)
									{
										iVar84 = func_189(iVar5, 11, -1);
										Global_69311[1 /*14*/] = {func_216(iVar5, 11, iVar84)};
										iVar85 = func_184(iVar5, iVar84, iParam2, Global_69311[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && iVar72 == 32)
								{
									if (!_0x341DE7ED1D2A1BFD(func_188(iVar5, iParam2, 11, 4), -491588875, 0))
									{
										iVar84 = func_189(iVar5, 11, -1);
										Global_69311[1 /*14*/] = {func_216(iVar5, 11, iVar84)};
										iVar85 = func_184(iVar5, iVar84, iParam2, Global_69311[1 /*14*/].f_4);
									}
								}
							}
							else
							{
								iVar85 = func_184(iVar5, iVar84, iParam2, iVar83);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (_0x341DE7ED1D2A1BFD(func_188(iVar5, iParam2, 11, 3), -1719338724, 0))
									{
										if (!func_180(iVar5, func_190(iParam0, 4), iVar84))
										{
											iVar85 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (_0x341DE7ED1D2A1BFD(func_188(iVar5, iParam2, 11, 4), -1719338724, 0))
									{
										if (!func_180(iVar5, func_190(iParam0, 4), iVar84))
										{
											iVar85 = 48;
										}
									}
								}
							}
							if (iVar85 != -99)
							{
								func_83(iParam0, 8, iVar85, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar84 = func_189(iVar5, 11, -1);
								Global_69311[1 /*14*/] = {func_216(iVar5, 11, iVar84)};
								iVar85 = func_184(iVar5, iVar84, iParam2, Global_69311[1 /*14*/].f_4);
								if (iVar85 == -99)
								{
									iVar85 = 240;
								}
								func_83(iParam0, 8, iVar85, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_83(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_69311[1 /*14*/] = {func_216(iVar5, iParam1, iParam2)};
						}
					}
				}
				else
				{
					func_178(iVar5, iParam2);
					set_ped_component_variation(iParam0, 10, 0, 0, get_ped_palette_variation(iParam0, 10));
				}
			}
			func_194(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_187(iVar5, func_199(iParam0, 8, -1), iParam2, func_199(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_258(2143, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_258(2150, iParam10, 0);
				}
				_set_ped_hair_color(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				func_144(iParam0, iParam2, iParam10, iParam11);
			}
		}
		else if (iParam1 == 8)
		{
			func_194(iParam0, iParam1, iParam2, iParam6, 0);
			iVar86 = func_190(iParam0, 11);
			if (func_183(iVar5, iVar86))
			{
				iVar87 = func_182(iVar5, iParam2, Global_69311[1 /*14*/].f_4);
				func_178(iVar5, iVar87);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_187(iVar5, iParam2, func_190(iParam0, 11), func_190(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar88 = func_190(iParam0, 7);
				if (!func_141(iVar5, iVar88, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					set_ped_component_variation(iParam0, func_204(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && _0x341DE7ED1D2A1BFD(Global_2621444, -921710083, 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && _0x341DE7ED1D2A1BFD(Global_2621444, -921710083, 0)))
			{
				iVar89 = func_258(2090, iParam10, 0);
				iVar90 = func_258(2091, iParam10, 0);
				iVar91 = func_258(2092, iParam10, 0);
				fVar92 = func_140(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					set_ped_head_blend_data(iParam0, 0, 0, 0, iVar89, iVar90, iVar91, 0f, fVar92, 0f, 0);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					set_ped_head_blend_data(iParam0, 21, 0, 0, iVar89, iVar90, iVar91, 0f, fVar92, 0f, 0);
				}
				iVar93 = 0;
				while (iVar93 < 20)
				{
					_set_ped_face_feature(iParam0, iVar93, 0f);
					iVar93++;
				}
			}
			else
			{
				func_124(iParam0, Global_69309);
			}
			iVar94 = get_hash_name_for_component(iParam0, true, get_ped_drawable_variation(iParam0, true), get_ped_texture_variation(iParam0, true));
			iVar95 = get_hash_name_for_component(iParam0, true, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
			if (_0x341DE7ED1D2A1BFD(iVar94, 838607662, 0))
			{
				if (!_0x341DE7ED1D2A1BFD(iVar95, 838607662, 0))
				{
					iVar96 = func_190(iParam0, 1);
					iVar97 = false;
					while (iVar97 < 9)
					{
						iVar3 = func_192(iParam0, iVar5, iParam1, iVar96, 14, iVar97);
						iVar98 = func_120(iParam0, iVar97);
						if (iVar3 == iVar98)
						{
							clear_ped_prop(iParam0, iVar97);
						}
						iVar97++;
					}
				}
			}
		}
		else if (iParam1 == 4)
		{
			iVar99 = func_190(iParam0, 11);
			iVar100 = func_190(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (_0x341DE7ED1D2A1BFD(func_188(iVar5, iVar99, 11, 3), -1719338724, 0))
				{
					if (!func_180(iVar5, iParam2, func_182(iVar5, iVar100, 0)))
					{
						func_83(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						Global_69311[1 /*14*/] = {func_216(iVar5, iParam1, iParam2)};
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (_0x341DE7ED1D2A1BFD(func_188(iVar5, iVar99, 11, 4), -1719338724, 0))
				{
					if (!func_180(iVar5, iParam2, func_182(iVar5, iVar100, 0)))
					{
						func_83(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						Global_69311[1 /*14*/] = {func_216(iVar5, iParam1, iParam2)};
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_187(iVar5, func_190(iParam0, 8), func_190(iParam0, 11), iParam2);
			}
			iVar101 = get_hash_name_for_component(iParam0, 3, get_ped_drawable_variation(iParam0, 3), 0);
			if (_0x341DE7ED1D2A1BFD(iVar101, -356646862, 0))
			{
				iVar102 = func_187(iVar5, iVar100, iVar99, iParam2);
				if (iVar102 == -99)
				{
					iVar102 = func_192(iParam0, iVar5, 11, iVar99, 3, 0);
				}
				switch (iVar101)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar102 = 11;
						iVar103 = func_188(iVar5, iParam2, 11, 4);
						if (!_0x341DE7ED1D2A1BFD(iVar103, -530089825, 0))
						{
							iVar102 = -99;
						}
						break;
				}
				if (iVar102 != -99)
				{
					iVar104 = iVar102;
					iVar105 = 0;
					while (iVar105 < 15)
					{
						if (func_186(iVar5, iVar104, iVar105) == iVar101)
						{
							iVar11 = iVar105;
							iVar12 = get_ped_texture_variation(iParam0, 3);
						}
						iVar105++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			set_ped_component_variation(iParam0, func_204(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_204(iParam1)));
		}
		else
		{
			set_ped_component_variation(iParam0, func_204(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_69310 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_192(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_83(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						if (iVar2 == 3)
						{
							switch (Global_2621444)
							{
								case 1165919867:
								case 1606204151:
								case 1774276352:
								case 1934254610:
								case 980775017:
								case 399321881:
									iVar11 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_187(iVar5, iVar3, func_190(iParam0, 11), func_190(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (func_119(iParam0))
				{
					iVar106 = func_118(iVar5, iParam1, iParam2);
					if (iVar106 > 0)
					{
						iVar106 += get_ped_texture_variation(iParam0, 9);
						if (!func_112(iParam0, 9, iVar106))
						{
							func_83(iParam0, 9, iVar106, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_83(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = get_hash_name_for_component(iParam0, 8, get_ped_drawable_variation(iParam0, 8), get_ped_texture_variation(iParam0, 8));
					if (_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8))
					{
						func_83(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				iVar107 = func_258(2032, -1, 0);
				if (get_ped_drawable_variation(iParam0, 5) != 0)
				{
					set_ped_component_variation(iParam0, 5, func_109(iParam0, iVar107), func_108(iParam0, iVar107), func_107(iParam0, iVar107));
				}
				if (iParam0 == player_ped_id())
				{
					set_player_parachute_variation_override(player_id(), 5, func_109(player_ped_id(), iVar107), func_108(player_ped_id(), iVar107), 0);
					set_player_parachute_pack_tint_index(player_id(), func_107(player_ped_id(), iVar107));
					func_104(player_id(), iVar107);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (_0x341DE7ED1D2A1BFD(Global_2621444, -319568873, 0))
					{
						func_83(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar108 = func_199(iParam0, 4, -1);
					iVar109 = iParam2;
				}
				else
				{
					iVar108 = iParam2;
					iVar109 = func_199(iParam0, 11, -1);
				}
				if (func_103(iVar5, 11, iVar109))
				{
					if (!func_102(iVar5, 4, iVar108))
					{
						if (func_101(iVar5, 4, iVar108, &uVar110))
						{
							func_83(iParam0, 4, uVar110, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (func_102(iVar5, 4, iVar108))
				{
					if (func_100(iVar5, 4, iVar108, &uVar110))
					{
						func_83(iParam0, 4, uVar110, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iParam1 == 4)
			{
				iVar111 = get_ped_drawable_variation(iParam0, 6);
				iVar112 = get_ped_texture_variation(iParam0, 6);
				iVar113 = get_hash_name_for_component(iParam0, 6, iVar111, iVar112);
				if (func_99(iVar5, iVar113))
				{
					if (_0x341DE7ED1D2A1BFD(iVar113, 1812005517, 0) != func_98(iVar5, iParam2))
					{
						iVar114 = _0xC17AD0E5752BECDA(iVar113);
						iVar115 = 0;
						while (iVar115 < iVar114)
						{
							get_variant_component(iVar113, iVar115, &iVar116, &uVar117, &iVar118);
							if (iVar118 == 6)
							{
								if (iVar116 != 0 && iVar116 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										func_83(iParam0, 6, func_95(iVar5, iVar116, 6, 3), 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										func_83(iParam0, 6, func_95(iVar5, iVar116, 6, 4), 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
									}
								}
							}
							iVar115++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_93(iParam0);
				iVar119 = get_ped_drawable_variation(iParam0, true);
				iVar120 = get_ped_texture_variation(iParam0, true);
				iVar121 = get_hash_name_for_component(iParam0, true, iVar119, iVar120);
				if (_0x341DE7ED1D2A1BFD(iVar121, 838607662, 0))
				{
					iVar3 = func_192(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_83(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = func_192(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_83(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_84(iParam0, &uVar4))
		{
			func_83(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_83(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_83(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_83(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar11 != -1)
	{
		iVar122 = func_186(iVar5, get_ped_drawable_variation(iParam0, 3), iVar11);
		if (iVar122 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_95(iVar5, iVar122, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_95(iVar5, iVar122, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 += iVar12;
				func_83(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_69310--;
	return true;
}

bool func_84(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_199(player_ped_id(), 2, -1);
	if (func_258(746, Global_69309, 0) != -99 && func_90())
	{
		if (func_89() == 4)
		{
			return true;
		}
		if (func_258(746, Global_69309, 0) == 0 && func_258(747, Global_69309, 0) == 0)
		{
			if (func_88(161, Global_69309))
			{
				if (func_258(2043, Global_69309, 0) == 0)
				{
					return false;
				}
			}
			else if (func_258(745, Global_69309, 0) == 0)
			{
				return false;
			}
		}
		iVar0 = func_258(746, Global_69309, 0);
		iVar1 = func_258(747, Global_69309, 0);
		if (!func_112(iParam0, iVar1, iVar0))
		{
			if (func_88(161, Global_69309))
			{
				*uParam1 = func_258(2043, Global_69309, 0);
			}
			else
			{
				*uParam1 = func_258(745, Global_69309, 0);
			}
			func_85(746, -99, Global_69309, 1);
			func_85(747, 2, Global_69309, 1);
			return true;
		}
	}
	return false;
}

void func_85(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_86(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

int func_86(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_87();
		if (iVar1 > -1)
		{
			Global_2469052 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2469052 = 1;
		}
	}
	return iVar0;
}

var func_87()
{
	return Global_1312747;
}

int func_88(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_86(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_89()
{
	return Global_1315845;
}

bool func_90()
{
	if (func_92() && func_91(0))
	{
		return true;
	}
	return false;
}

var func_91(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_92()
{
	return func_91(func_87() + 1);
}

void func_93(int iParam0)
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
	int iVar9;
	int iVar10;
	
	iVar0 = get_entity_model(iParam0);
	iVar1 = get_ped_drawable_variation(iParam0, 11);
	iVar2 = get_ped_texture_variation(iParam0, 11);
	iVar3 = get_ped_drawable_variation(iParam0, true);
	iVar4 = get_ped_texture_variation(iParam0, true);
	iVar5 = get_ped_drawable_variation(iParam0, 8);
	iVar6 = get_ped_texture_variation(iParam0, 8);
	iVar7 = get_hash_name_for_component(iParam0, 11, iVar1, iVar2);
	iVar8 = get_hash_name_for_component(iParam0, true, iVar3, iVar4);
	iVar9 = get_hash_name_for_component(iParam0, 8, iVar5, iVar6);
	if (_0x341DE7ED1D2A1BFD(iVar7, -317649054, 0))
	{
		if (_0x341DE7ED1D2A1BFD(iVar8, 72391838, 0))
		{
			if (!_0x341DE7ED1D2A1BFD(iVar7, -1889900289, 0))
			{
				iVar1--;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar7, -1889900289, 0))
		{
			iVar1++;
		}
		set_ped_component_variation(iParam0, 11, iVar1, iVar2, get_ped_palette_variation(iParam0, 11));
	}
	iVar10 = false;
	if (iVar0 == joaat("mp_m_freemode_01"))
	{
		if (!_0x341DE7ED1D2A1BFD(iVar7, 572416369, 0))
		{
			iVar10 = true;
		}
		switch (iVar8)
		{
			case -486726551:
			case 219052171:
			case -1032068249:
			case -728660078:
			case -850691818:
			case -544072285:
			case -1811183977:
			case -1111303675:
			case 116190296:
			case -1282673470:
			case -936108522:
			case -671236695:
			case 1520550639:
			case 1816684092:
			case 2102823000:
			case -1866059977:
			case 1250403007:
			case 476038764:
			case 1863871456:
			case 351755390:
			case 1058844872:
			case 1549134650:
			case 1317097361:
			case -829567064:
			case -130604290:
			case -380009149:
			case 596212130:
			case 2140942786:
			case 1901696317:
			case -1797925843:
			case 790890703:
			case 1633873228:
			case 1272234544:
			case -672409000:
			case -1976713507:
			case -1902280196:
			case -115943475:
			case 1684425644:
			case 1983115079:
				iVar10 = true;
				break;
		}
	}
	else
	{
		if (!_0x341DE7ED1D2A1BFD(iVar7, -196114988, 0))
		{
			iVar10 = true;
		}
		switch (iVar8)
		{
			case -1615510302:
			case 1527692182:
			case -2083484391:
			case -1372200477:
			case 761684042:
			case 534496565:
			case 303671729:
			case 39193130:
			case -162598372:
			case -393062749:
			case 2063387500:
			case 1633785910:
			case -874910415:
			case -1240415841:
			case 4970004:
			case -1695478944:
			case -450420789:
			case 257455149:
			case 1098963073:
			case -204554982:
			case 1027252245:
			case 1482249810:
			case 1657236270:
			case 633729300:
			case 461560974:
			case 39856713:
			case -130673163:
			case 1595499458:
			case 1424510816:
			case -1686217589:
			case 415037286:
			case 1095714954:
			case -1384675744:
			case -603364477:
			case 423419373:
			case -945505606:
			case -188672778:
			case 578089053:
			case 1418122368:
			case 39432231:
			case 998548092:
			case -539458143:
			case 1285512993:
			case 1384673675:
			case 207316274:
			case 924498608:
			case 1626705513:
			case -1951407139:
			case 1109577920:
			case 1943254053:
			case -706250677:
			case -933962458:
			case 2065187502:
			case 2143125494:
			case -728857530:
			case 113895612:
			case -106672527:
			case -1674341487:
			case -1426640612:
			case -1616110970:
			case -825558845:
			case -1062773636:
			case 1680712586:
			case 731446975:
			case -1441694810:
			case 1076144086:
			case 1291534723:
			case 1653763249:
			case -402884741:
			case 1982600156:
			case -1955185040:
			case -1722820061:
			case 519431533:
			case 1338441322:
			case -97470603:
			case -1293080337:
			case -1531999116:
			case 762322431:
			case 1318477899:
			case 199940853:
			case 1034403438:
			case 1715572641:
			case -2013146335:
			case 1085654154:
			case 962496867:
			case 1611716295:
			case 637461160:
			case -1137111266:
			case 316882033:
			case 590699797:
			case -385914710:
			case -1897876374:
			case -861786128:
			case -633615581:
			case -1298728310:
			case 2019526172:
			case -156630377:
			case 99852586:
			case 1543589216:
			case 1783097837:
			case -1876706754:
			case -1647782520:
			case -1394117691:
			case 977702533:
			case -670092377:
			case -908093624:
			case 1219695857:
			case 1919117393:
			case -534990310:
			case 445654672:
			case 329262298:
			case 22970455:
			case -476401343:
			case -706275878:
			case 1876083388:
			case -1114385357:
			case -840010097:
			case -2048003518:
			case 286623891:
			case 1792195596:
			case 1992938490:
			case -1364343871:
			case 721974080:
			case -45508669:
			case 1998385862:
			case 1222776401:
				iVar10 = true;
				break;
			}
	}
	if (iVar10)
	{
		if (_0x341DE7ED1D2A1BFD(iVar9, -1889900289, 0) || _0x341DE7ED1D2A1BFD(iVar9, 1569775397, 0))
		{
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
				iVar5 = 15;
				iVar6 = 0;
			}
			else
			{
				iVar5 = 14;
				iVar6 = 0;
			}
		}
	}
	else if (_0x341DE7ED1D2A1BFD(iVar8, -1409448021, 0))
	{
		if (_0x341DE7ED1D2A1BFD(iVar9, 1569775397, 0))
		{
			iVar5++;
		}
		else
		{
			iVar5 = func_94(iParam0, 1);
			iVar6 = iVar2;
		}
	}
	else if (_0x341DE7ED1D2A1BFD(iVar9, -1889900289, 0))
	{
		iVar5--;
	}
	else
	{
		iVar5 = func_94(iParam0, 0);
		iVar6 = iVar2;
	}
	set_ped_component_variation(iParam0, 8, iVar5, iVar6, get_ped_palette_variation(iParam0, 8));
}

var func_94(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar17;
	
	iVar17 = get_entity_model(iParam0) == joaat("mp_m_freemode_01");
	Var0.f_3 = -1;
	if (iVar17)
	{
		if (iParam1)
		{
			get_shop_ped_component(-367850957, &Var0);
		}
		else
		{
			get_shop_ped_component(1241116144, &Var0);
		}
	}
	else if (iParam1)
	{
		get_shop_ped_component(555191698, &Var0);
	}
	else
	{
		get_shop_ped_component(-972757995, &Var0);
	}
	return Var0.f_3;
}

int func_95(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = _get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			get_shop_ped_query_prop(iVar17, &Var0);
			if (!_is_dlc_data_empty(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return func_97(iParam0) + iVar18;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		init_shop_ped_component(&Var20);
		iVar38 = 0;
		iVar39 = _get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_204(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			get_shop_ped_query_component(iVar37, &Var20);
			if (!_is_dlc_data_empty(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return func_96(iParam0, func_204(iParam2)) + iVar38;
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_96(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_98(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_188(iParam0, iParam1, 4, 3);
				iVar1 = func_181(iVar0);
			}
			iVar2 = 1;
			if (((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || _0x341DE7ED1D2A1BFD(iVar0, 320460654, 0))
			{
				iVar2 = 0;
			}
			switch (iVar0)
			{
				case -439764935:
				case 1858824227:
				case -44268217:
				case 301706885:
				case 1283072893:
				case -1590178565:
				case 1995307108:
				case 1029014836:
				case -365568266:
				case -138446327:
				case -2034722819:
				case -1219513062:
				case 153704652:
				case 356276239:
				case 586511233:
				case 1558996842:
				case 1183988406:
				case 1000678684:
				case 761792674:
				case -145679239:
				case 686423978:
				case -763407658:
				case 74266289:
				case 987390769:
				case 1591372991:
				case 1834027448:
				case 913054691:
				case 1142372153:
				case -1698011990:
				case -1443101939:
				case 2133699953:
				case -1924511318:
				case -475531676:
				case -237137197:
				case 754461254:
				case -1155840382:
				case 629180074:
				case 859251223:
				case 1610316715:
				case 901392169:
				case -92983136:
				case 1346362420:
				case 485782942:
				case 312004063:
				case 6695290:
				case 1724446270:
				case -448105673:
				case -611098679:
				case -1111088081:
				case -1406369540:
				case -1912159043:
				case 2076516410:
				case 1919618438:
				case 45227112:
				case -2129094253:
				case -421370587:
				case -675363106:
					iVar2 = 0;
					break;
			}
			return iVar2;
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_188(iParam0, iParam1, 4, 4);
				iVar1 = func_181(iVar0);
			}
			if (((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || _0x341DE7ED1D2A1BFD(iVar0, 1863955539, 0)) || _0x341DE7ED1D2A1BFD(iVar0, 2106216756, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -761463976, 0)) || _0x341DE7ED1D2A1BFD(iVar0, 684992453, 0)) || _0x341DE7ED1D2A1BFD(iVar0, 916636514, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -1939378450, 0)) || _0x341DE7ED1D2A1BFD(iVar0, 264959411, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -1127835965, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -1119232689, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -1207283343, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -849839091, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -2088146832, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -1446333198, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -430330349, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -1103045158, 0)) || _0x341DE7ED1D2A1BFD(iVar0, 1055526375, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -2020757158, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_99(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (_0x341DE7ED1D2A1BFD(iParam1, -364248070, 0))
			{
				return true;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (_0x341DE7ED1D2A1BFD(iParam1, -364248070, 0))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_100(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_188(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = _0xC17AD0E5752BECDA(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (!_0x341DE7ED1D2A1BFD(iVar3, -1100807313, 0))
										{
											*uParam3 = func_95(iParam0, iVar3, iParam1, 4);
											return true;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return false;
}

bool func_101(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_188(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = _0xC17AD0E5752BECDA(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (_0x341DE7ED1D2A1BFD(iVar3, -1100807313, 0))
										{
											*uParam3 = func_95(iParam0, iVar3, iParam1, 4);
											return true;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return false;
}

bool func_102(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (_0x341DE7ED1D2A1BFD(func_188(iParam0, iParam2, 4, 4), -1100807313, 0))
						{
							return true;
						}
					}
					break;
			}
			break;
	}
	return false;
}

int func_103(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						return _0x341DE7ED1D2A1BFD(func_188(iParam0, iParam2, 11, 4), -530089825, 0);
					}
					break;
			}
			break;
	}
	return false;
}

void func_104(int iParam0, int iParam1)
{
	if (func_106())
	{
		if (iParam1 > 46)
		{
			set_player_parachute_pack_model_override(iParam0, 1766664132);
		}
		else if (iParam1 > 26)
		{
			set_player_parachute_pack_model_override(iParam0, 1277738372);
		}
		else if (iParam1 > 0)
		{
			set_player_parachute_pack_model_override(iParam0, 1269440357);
		}
		else
		{
			clear_player_parachute_pack_model_override(iParam0);
		}
	}
	else if (func_105())
	{
		if (iParam1 > 0)
		{
			set_player_parachute_pack_model_override(iParam0, 1479397204);
		}
		else
		{
			clear_player_parachute_pack_model_override(iParam0);
		}
	}
}

int func_105()
{
	return is_dlc_present(1428761799);
}

int func_106()
{
	return is_dlc_present(-1005876368);
}

bool func_107(int iParam0, int iParam1)
{
	return false;
}

int func_108(int iParam0, int iParam1)
{
	if (iParam1 > 51)
	{
		return iParam1 - 52;
	}
	if (iParam1 > 46)
	{
		return iParam1 - 47;
	}
	if (iParam1 > 26)
	{
		return iParam1 - 27;
	}
	if (iParam1 > 0)
	{
		return iParam1 - 1;
	}
	return iParam1;
}

int func_109(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = get_ped_drawable_variation(iParam0, 11);
	if (get_ped_drawable_variation(iParam0, 9) != 0)
	{
		iVar1 = true;
	}
	iVar2 = get_entity_model(iParam0);
	iVar3 = get_hash_name_for_component(iParam0, 8, get_ped_drawable_variation(iParam0, 8), get_ped_texture_variation(iParam0, 8));
	if (_0x341DE7ED1D2A1BFD(iVar3, 240476421, 8))
	{
		if (iParam1 > 51)
		{
			return 51;
		}
		else if (iParam1 > 46)
		{
			return 51;
		}
		else if (iParam1 > 26)
		{
			return 50;
		}
		else if (iParam1 > 0)
		{
			return 49;
		}
		else
		{
			return 48;
		}
	}
	iVar4 = 0;
	if (iParam1 > 51 && iParam1 <= 61)
	{
		return iParam1;
	}
	else if (iParam1 > 46)
	{
		iVar4 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar4 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar4 = 9;
	}
	else
	{
		iVar4 = 0;
	}
	if (iVar0 > 15)
	{
		iVar5 = get_hash_name_for_component(iParam0, 11, iVar0, get_ped_texture_variation(iParam0, 11));
		if (_0x341DE7ED1D2A1BFD(iVar5, 655081063, 0))
		{
			if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -530089825, 0))
		{
			if (iVar1)
			{
				return 6 + iVar4;
			}
			else
			{
				return 6 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -713698407, 0))
		{
			if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1882920022, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -317649054, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1536649085, 0))
		{
			iVar6 = func_111(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return 2 + iVar4;
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_181(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return 7 + iVar4;
						break;
					
					default:
						iVar0 = func_181(iVar5);
						break;
					}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 248194463, 0))
		{
			if (_0x341DE7ED1D2A1BFD(iVar5, -1347486026, 0))
			{
				return 3 + iVar4;
			}
			else
			{
				return 7 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 396458410, 0))
		{
			iVar7 = func_110(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_181(iVar5);
					break;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -779835469, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1119232689, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 1 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -2102859770, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 2 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1784133476, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 2 + iVar4;
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 1 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1607949555, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1976716889, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 2099109084, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 2 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1488441032, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1719167561, 0) || _0x341DE7ED1D2A1BFD(iVar5, 1431529976, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1274099003, 0) || _0x341DE7ED1D2A1BFD(iVar5, 1723403459, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 912543594, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 2 + iVar4;
			}
		}
		else if ((_0x341DE7ED1D2A1BFD(iVar5, -1086258388, 0) || _0x341DE7ED1D2A1BFD(iVar5, 103539798, 0)) || _0x341DE7ED1D2A1BFD(iVar5, -994703884, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 6 + iVar4;
				}
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 7 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 2044466679, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (iVar1)
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -2020757158, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1064262817, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
			else if (iVar1)
			{
				if (iParam1 > 51)
				{
					return 51;
				}
				else if (iParam1 > 46)
				{
					return 51;
				}
				else if (iParam1 > 26)
				{
					return 50;
				}
				else if (iParam1 > 0)
				{
					return 49;
				}
				else
				{
					return 48;
				}
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1419806467, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 7 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1053842259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1358888880, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -441291342, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -747583185, 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (iVar1)
				{
					if (iParam1 > 51)
					{
						return 51;
					}
					else if (iParam1 > 46)
					{
						return 51;
					}
					else if (iParam1 > 26)
					{
						return 50;
					}
					else if (iParam1 > 0)
					{
						return 49;
					}
					else
					{
						return 48;
					}
				}
				else
				{
					return 2 + iVar4;
				}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1986415230, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -2088146832, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 6 + iVar4;
				}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -785939537, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 700658917, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1714969731, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 745826556, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1055526375, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 492620493, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 8 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -416620954, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
			}
			else
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
			else
			{
				return 7 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -733792105, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
			}
			else
			{
				return 4 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 137011325, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -641612092, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return 6 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1351486939, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
			}
			else if (iVar1)
			{
				if (iParam1 > 51)
				{
					return 51;
				}
				else if (iParam1 > 46)
				{
					return 51;
				}
				else if (iParam1 > 26)
				{
					return 50;
				}
				else if (iParam1 > 0)
				{
					return 49;
				}
				else
				{
					return 48;
				}
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -2119756144, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1507532917, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 51)
				{
					return 51;
				}
				else if (iParam1 > 46)
				{
					return 51;
				}
				else if (iParam1 > 26)
				{
					return 50;
				}
				else if (iParam1 > 0)
				{
					return 49;
				}
				else
				{
					return 48;
				}
			}
			else
			{
				return 7 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 947651647, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 1965569012, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 1 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, 2026620439, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (iVar1)
			{
				return 8 + iVar4;
			}
			else
			{
				return 2 + iVar4;
			}
		}
		else if (_0x341DE7ED1D2A1BFD(iVar5, -1410897066, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return 3 + iVar4;
			}
			else
			{
				return 8 + iVar4;
			}
		}
		else if ((_0x341DE7ED1D2A1BFD(iVar5, -2017999390, 0) || _0x341DE7ED1D2A1BFD(iVar5, 320460654, 0)) || _0x341DE7ED1D2A1BFD(iVar5, -826135203, 0))
		{
			return 7 + iVar4;
		}
		else
		{
			iVar0 = func_181(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 1:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 2:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 3:
				if (iVar1)
				{
					return 3 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
				break;
			
			case 4:
				if (iVar1)
				{
					return 3 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
				break;
			
			case 5:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 6:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
				break;
			
			case 7:
				if (iVar1)
				{
					return 3 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
				break;
			
			case 8:
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 9:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 10:
				if (iVar1)
				{
					return 3 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
				break;
			
			case 11:
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
				break;
			
			case 12:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 13:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 2 + iVar4;
				}
				break;
			
			case 14:
				if (iVar1)
				{
					return 6 + iVar4;
				}
				else
				{
					return 6 + iVar4;
				}
				break;
			
			case 15:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 5 + iVar4;
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 1:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 2:
				if (iVar1)
				{
					return 4 + iVar4;
				}
				else
				{
					return 3 + iVar4;
				}
				break;
			
			case 3:
				if (iVar1)
				{
					return 6 + iVar4;
				}
				else
				{
					return 5 + iVar4;
				}
				break;
			
			case 4:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 5:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 6:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 7:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 8:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 9:
				return 2 + iVar4;
				break;
			
			case 10:
				if (iVar1)
				{
					return 7 + iVar4;
				}
				else
				{
					return 7 + iVar4;
				}
				break;
			
			case 11:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 12:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 13:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			
			case 14:
				if (iVar1)
				{
					return 8 + iVar4;
				}
				else
				{
					return 4 + iVar4;
				}
				break;
			
			case 15:
				if (iVar1)
				{
					return 2 + iVar4;
				}
				else
				{
					return 1 + iVar4;
				}
				break;
			}
	}
	return 1 + iVar4;
	return 0;
}

int func_110(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (_0x341DE7ED1D2A1BFD(iParam0, 140732128, iParam1))
	{
		iVar0 = 0;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1863955539, iParam1))
	{
		iVar0 = 1;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 2106216756, iParam1))
	{
		iVar0 = 2;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -761463976, iParam1))
	{
		iVar0 = 3;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1627756587, iParam1))
	{
		iVar0 = 4;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 684992453, iParam1))
	{
		iVar0 = 5;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 916636514, iParam1))
	{
		iVar0 = 6;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1939378450, iParam1))
	{
		iVar0 = 7;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 441715397, iParam1))
	{
		iVar0 = 8;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 264959411, iParam1))
	{
		iVar0 = 9;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1127835965, iParam1))
	{
		iVar0 = 10;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -820724897, iParam1))
	{
		iVar0 = 11;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 153792394, iParam1))
	{
		iVar0 = 12;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -672871169, iParam1))
	{
		iVar0 = 13;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 572416369, iParam1))
	{
		iVar0 = 14;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -196114988, iParam1))
	{
		iVar0 = 15;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1322269404, iParam1))
	{
		iVar0 = 16;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 548036233, iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_111(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (_0x341DE7ED1D2A1BFD(iParam0, -870074461, iParam1))
	{
		iVar0 = 0;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1174924468, iParam1))
	{
		iVar0 = 1;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -868698159, iParam1))
	{
		iVar0 = 2;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1177480446, iParam1))
	{
		iVar0 = 3;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1347486026, iParam1))
	{
		iVar0 = 4;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1655154167, iParam1))
	{
		iVar0 = 5;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -2105858993, iParam1))
	{
		iVar0 = 6;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1893564692, iParam1))
	{
		iVar0 = 7;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1710451520, iParam1))
	{
		iVar0 = 8;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1416808511, iParam1))
	{
		iVar0 = 9;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1641506460, iParam1))
	{
		iVar0 = 10;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 699233865, iParam1))
	{
		iVar0 = 11;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_112(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar24;
	int iVar34;
	var uVar35;
	var uVar45;
	
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar0 = get_entity_model(iParam0);
	Global_69311[1 /*14*/] = {func_216(iVar0, iParam1, iParam2)};
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!is_bit_set(Global_69311[1 /*14*/].f_6, false))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = {func_205(iVar0, iParam2)};
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_112(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar24 = {func_201(iVar0, uVar8[iVar4])};
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_112(iParam0, 14, uVar24[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_69311[2 /*14*/] = {func_216(iVar0, 14, iVar6)};
									if (Global_69311[2 /*14*/].f_12 == iVar5)
									{
										if (func_112(iParam0, 14, iVar6))
										{
											if (!func_113(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_69311[2 /*14*/])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_190(iParam0, iVar4);
						Global_69311[2 /*14*/] = {func_216(iVar0, iVar4, iVar1)};
						if (!func_113(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_69311[2 /*14*/])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if (uVar8[10] != 0 && uVar8[10] != 1849449579)
		{
			if (func_258(1749, Global_69309, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar35 = {func_201(iVar0, iParam2)};
		iVar34 = 0;
		while (iVar34 <= 8)
		{
			if (!func_112(iParam0, 14, uVar35[iVar34]))
			{
				return 0;
			}
			iVar34++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (get_ped_prop_index(iParam0, Global_69311[1 /*14*/].f_12) == Global_69311[1 /*14*/].f_3 && (get_ped_prop_texture_index(iParam0, Global_69311[1 /*14*/].f_12) == Global_69311[1 /*14*/].f_4 || Global_69311[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else
	{
		if (Global_69311[1 /*14*/].f_3 == get_ped_drawable_variation(iParam0, func_204(iParam1)) && Global_69311[1 /*14*/].f_4 == get_ped_texture_variation(iParam0, func_204(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			if (func_103(iVar0, 11, func_190(iParam0, 11)))
			{
				if (func_101(iVar0, 4, iParam2, &uVar45))
				{
					return func_112(iParam0, 4, uVar45);
				}
			}
			else if (func_100(iVar0, 4, iParam2, &uVar45))
			{
				return func_112(iParam0, 4, uVar45);
			}
		}
	}
	return 0;
}

bool func_113(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar10;
	
	if (*uParam4[iParam2] == iParam3)
	{
		return true;
	}
	if ((*uParam4[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return true;
	}
	if (iParam2 == 13 || (iParam2 == 14 && *uParam4[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return true;
		}
	}
	if (iParam3 == -99 || *uParam5.f_1 == -1)
	{
		return true;
	}
	if (iParam2 == 14)
	{
		uVar0 = {func_201(iParam0, *uParam4[13])};
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == iParam3)
			{
				return true;
			}
			iVar10++;
		}
	}
	if (func_117(iParam0, iParam2, iParam3))
	{
		return true;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_116(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return false;
			}
			return true;
		}
		else if (func_115(iParam0, iParam2, iParam3))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return false;
			}
			if (iParam2 == 8)
			{
				if (*uParam4[8] != 0)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if (*uParam4[9] != 0)
				{
					return false;
				}
			}
			return true;
		}
		else if (func_114(iParam0, iParam2, iParam3))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return false;
			}
			return true;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_116(iParam0, iParam2, iParam3))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return false;
			}
			return true;
		}
		else if (func_115(iParam0, iParam2, iParam3))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return true;
						}
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			if (iParam2 == 8)
			{
				if (*uParam4[8] != 26)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if (*uParam4[9] != 0)
				{
					return false;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return false;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return false;
					}
				}
			}
			return true;
		}
		else if (func_114(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return false;
			}
			return true;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return true;
			}
		}
		if (func_116(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return false;
			}
			return true;
		}
		else if (func_115(iParam0, iParam2, iParam3))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return false;
			}
			if (iParam2 == 8)
			{
				if (*uParam4[8] != 15)
				{
					return false;
				}
			}
			else if (iParam2 == 9)
			{
				if (*uParam4[9] != 0)
				{
					return false;
				}
			}
			return true;
		}
		else if (func_114(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return false;
			}
			return true;
		}
	}
	return false;
}

int func_114(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return true;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return true;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return true;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return true;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return true;
					}
					else if (iParam2 >= 327)
					{
						return (_0x341DE7ED1D2A1BFD(func_188(iParam0, iParam2, 14, 3), -1757550583, 1) || _0x341DE7ED1D2A1BFD(func_188(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (_0x341DE7ED1D2A1BFD(func_188(iParam0, iParam2, 1, 3), -1757550583, 0) || _0x341DE7ED1D2A1BFD(func_188(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return true;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return true;
					}
					else if (iParam2 >= 327)
					{
						return (_0x341DE7ED1D2A1BFD(func_188(iParam0, iParam2, 14, 4), -1757550583, 1) || _0x341DE7ED1D2A1BFD(func_188(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (_0x341DE7ED1D2A1BFD(func_188(iParam0, iParam2, 1, 4), -1757550583, 0) || _0x341DE7ED1D2A1BFD(func_188(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return false;
}

bool func_115(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return true;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return true;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return true;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return true;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					iVar0 = func_188(iParam0, iParam2, 1, 3);
					if (_0x341DE7ED1D2A1BFD(iVar0, -1757550583, 0))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					iVar1 = func_188(iParam0, iParam2, 1, 4);
					if (_0x341DE7ED1D2A1BFD(iVar1, -1757550583, 0))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

int func_116(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return true;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return true;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return true;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return true;
				}
				else if (iParam2 >= 327)
				{
					return _0x341DE7ED1D2A1BFD(func_188(iParam0, iParam2, 14, 3), 97230661, 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return true;
				}
				else if (iParam2 >= 327)
				{
					return _0x341DE7ED1D2A1BFD(func_188(iParam0, iParam2, 14, 4), 97230661, 1);
				}
			}
			break;
	}
	return false;
}

bool func_117(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return true;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return true;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return true;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return true;
					}
					break;
			}
			break;
	}
	return false;
}

int func_118(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (iParam1 == 11)
	{
		if (iParam0 == joaat("mp_m_freemode_01"))
		{
			if (((((iParam2 >= 0 && iParam2 <= 15) || (iParam2 >= 16 && iParam2 <= 31)) || (iParam2 >= 80 && iParam2 <= 95)) || (iParam2 >= 140 && iParam2 <= 155)) || (iParam2 >= 188 && iParam2 <= 203))
			{
				return 1;
			}
			else if (iParam2 >= 32 && iParam2 <= 47)
			{
				return 6;
			}
			else if (((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 108 && iParam2 <= 123))
			{
				return 11;
			}
			else if (iParam2 >= 96 && iParam2 <= 107)
			{
				return 41;
			}
			else if (iParam2 >= 156 && iParam2 <= 171)
			{
				return 36;
			}
			else if (iParam2 >= 172 && iParam2 <= 187)
			{
				return 31;
			}
			else if (iParam2 >= 204 && iParam2 <= 219)
			{
				return 16;
			}
			else if ((iParam2 >= 220 && iParam2 <= 235) || (iParam2 >= 124 && iParam2 <= 139))
			{
				return 26;
			}
			else if (iParam2 == 236)
			{
				return 21;
			}
			else if (iParam2 >= 237)
			{
				iVar0 = func_188(iParam0, iParam2, 11, 3);
				if (iVar0 != -1)
				{
					iVar1 = _0xC17AD0E5752BECDA(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						get_variant_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != 1849449579)
							{
								return func_95(iParam0, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
			}
		}
		else if (iParam0 == joaat("mp_f_freemode_01"))
		{
			if ((((((iParam2 >= 0 && iParam2 <= 15) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 176 && iParam2 <= 191)) || (iParam2 >= 192 && iParam2 <= 207)) || (iParam2 >= 208 && iParam2 <= 223)) || (iParam2 >= 240 && iParam2 <= 255))
			{
				return 1;
			}
			else if (((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 112 && iParam2 <= 127)) || (iParam2 >= 128 && iParam2 <= 143))
			{
				return 16;
			}
			else if (iParam2 >= 32 && iParam2 <= 47)
			{
				return 6;
			}
			else if (iParam2 >= 48 && iParam2 <= 63)
			{
				return 11;
			}
			else if ((iParam2 >= 96 && iParam2 <= 111) || (iParam2 >= 160 && iParam2 <= 175))
			{
				return 21;
			}
			else if (iParam2 >= 224 && iParam2 <= 239)
			{
				return 26;
			}
			else if (iParam2 >= 144 && iParam2 <= 159)
			{
				return 0;
			}
			else if (iParam2 >= 80 && iParam2 <= 95)
			{
				return 31;
			}
			else if (iParam2 >= 256)
			{
				iVar6 = func_188(iParam0, iParam2, 11, 4);
				if (iVar6 != -1)
				{
					iVar7 = _0xC17AD0E5752BECDA(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						get_variant_component(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != 1849449579)
							{
								return func_95(iParam0, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

bool func_119(int iParam0)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = get_entity_model(iParam0);
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			if (func_190(iParam0, 9) != 0)
			{
				return true;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			if (func_190(iParam0, 9) != 0)
			{
				return true;
			}
		}
	}
	return false;
}

int func_120(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (is_ped_injured(iParam0))
	{
		return -99;
	}
	iVar0 = get_ped_prop_index(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_123(iParam1);
	}
	iVar1 = get_ped_prop_texture_index(iParam0, iParam1);
	return func_121(iParam0, iVar0, iVar1, iParam1);
}

int func_121(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_123(iParam3);
	}
	iVar0 = get_entity_model(iParam0);
	iVar1 = get_hash_name_for_prop(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_95(get_entity_model(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_95(get_entity_model(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = get_number_of_ped_prop_drawable_variations(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= iVar2 - 1)
	{
		iVar6 = get_number_of_ped_prop_texture_variations(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 += iVar6;
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= iVar6 - 1)
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 += func_122(iParam0, iParam3);
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_123(iParam3);
}

int func_122(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_123(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

void func_124(int iParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	int iVar20;
	
	if (!has_ped_head_blend_finished(iParam0))
	{
	}
	_get_ped_head_blend_data(iParam0, &Var0);
	iVar10 = func_258(2087, iParam1, 0);
	iVar11 = func_258(2088, iParam1, 0);
	iVar12 = func_258(2089, iParam1, 0);
	iVar13 = func_258(2090, iParam1, 0);
	iVar14 = func_258(2091, iParam1, 0);
	iVar15 = func_258(2092, iParam1, 0);
	fVar16 = func_140(134, iParam1);
	fVar17 = func_140(135, iParam1);
	fVar18 = func_140(136, iParam1);
	iVar19 = func_88(160, iParam1);
	if (((((((((Var0 != iVar10 || Var0.f_1 != iVar11) || Var0.f_2 != iVar12) || Var0.f_3 != iVar13) || Var0.f_4 != iVar14) || Var0.f_5 != iVar15) || Var0.f_6 != fVar16) || Var0.f_7 != fVar17) || Var0.f_8 != fVar18) || Var0.f_9 != iVar19)
	{
		set_ped_head_blend_data(iParam0, iVar10, iVar11, iVar12, iVar13, iVar14, iVar15, fVar16, fVar17, fVar18, iVar19);
		iVar20 = func_258(2093, iParam1, 0);
		if (iVar20 > 0)
		{
			func_125(iParam0, iParam1, 0);
		}
	}
}

void func_125(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_139(iVar1);
		if (!iParam2)
		{
			fVar3 = func_140(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_138(iVar2, iParam1);
		}
		_set_ped_face_feature(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_137(iVar4);
		iVar6 = func_136(iVar5);
		iVar7 = func_135(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!iParam2)
			{
				iVar10 = func_132(iVar6, iParam1, -1);
				fVar11 = func_140(iVar7, iParam1);
			}
			else
			{
				iVar10 = func_131(iVar6, iParam1);
				fVar11 = func_138(iVar7, iParam1);
			}
			set_ped_head_overlay(iParam0, iVar5, iVar10, fVar11);
			iVar8 = func_130(iVar5);
			iVar9 = func_129(iVar5);
			if (iVar8 != -1)
			{
				if (!iParam2)
				{
					iVar13 = func_258(iVar8, iParam1, 0);
					iVar14 = func_258(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_128(iVar8, iParam1);
					iVar14 = func_128(iVar9, iParam1);
				}
				func_127(iVar13, &iVar12, &iVar15);
				_set_ped_head_overlay_color(iParam0, iVar5, iVar15, iVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_126(&iParam0, iParam1, iParam2);
}

void func_126(int iParam0, int iParam1, int iParam2)
{
	Vector3 fVar0;
	
	if (!iParam2)
	{
		fVar0 = func_140(157, iParam1);
	}
	else
	{
		fVar0 = func_138(157, iParam1);
	}
	if (*iParam0 == player_ped_id())
	{
	}
	_set_ped_eye_color(*iParam0, round(fVar0));
}

void func_127(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	*uParam1 = shift_right(iParam0, 16);
	iVar0 = (iParam0 && 65535);
	*uParam2 = iVar0;
}

int func_128(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_86(iParam1)];
	if (set_userids_uihidden(iVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2151;
		
		case 1:
			return 2152;
		
		case 5:
			return 2153;
		
		case 8:
			return 2154;
		
		case 10:
			return 2149;
		
		default:
	}
	return -1;
}

int func_130(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2144;
		
		case 1:
			return 2145;
		
		case 5:
			return 2146;
		
		case 8:
			return 2147;
		
		case 10:
			return 2148;
		
		default:
	}
	return -1;
}

int func_131(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_87();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar1 = _0x61E111E323419E07(iParam0 - 384, 0, 1, iParam1);
		iVar2 = iParam0 - 384 - _0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar1 = _0x61E111E323419E07(iParam0 - 457, 1, 1, iParam1);
		iVar2 = iParam0 - 457 - _0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar1 = _0x61E111E323419E07(iParam0 - 1281, 0, 0, 0);
		iVar2 = iParam0 - 1281 - _0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar1 = _0x61E111E323419E07(iParam0 - 1305, 1, 0, 0);
		iVar2 = iParam0 - 1305 - _0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar1 = _0xD16C2AD6B8E32854(iParam0 - 1393, 0, 1, iParam1);
		iVar2 = iParam0 - 1393 - _0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar1 = _0xD16C2AD6B8E32854(iParam0 - 1361, 0, 0, 0);
		iVar2 = iParam0 - 1361 - _0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar1 = _0x2B4CDCA6F07FF3DA(iParam0 - 3879, 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = iParam0 - 3879 - _0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar1 = _0x2B4CDCA6F07FF3DA(iParam0 - 4143, 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = iParam0 - 4143 - _0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar1 = _0x2B4CDCA6F07FF3DA(iParam0 - 4399, 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = iParam0 - 4399 - _0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar1 = _0x2B4CDCA6F07FF3DA(iParam0 - 6413, 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = iParam0 - 6413 - _0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar1 = _0x2B4CDCA6F07FF3DA(iParam0 - 7262, 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = iParam0 - 7262 - _0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar1 = _0x2B4CDCA6F07FF3DA(iParam0 - 7641, 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = iParam0 - 7641 - _0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar1 = _0x2B4CDCA6F07FF3DA(iParam0 - 7313, 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = iParam0 - 7313 - _0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	if (!_0x90A6526CF0381030(iVar1, &iVar0, iVar2, 8))
	{
		iVar0 = 0;
	}
	if (iParam0 == 384)
	{
	}
	return iVar0;
}

int func_132(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_87();
	}
	iVar0 = 0;
	iVar1 = func_134(iParam0, iParam1);
	iVar2 = func_133(iParam0);
	if (0 != iVar1)
	{
		if (!stat_get_masked_int(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_133(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = iParam0 - 384 - _0x94F12ABF9C79E339(iParam0 - 384) * 8 * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = iParam0 - 457 - _0x94F12ABF9C79E339(iParam0 - 457) * 8 * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = iParam0 - 1281 - _0x94F12ABF9C79E339(iParam0 - 1281) * 8 * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = iParam0 - 1305 - _0x94F12ABF9C79E339(iParam0 - 1305) * 8 * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = iParam0 - 1361 - _0x94F12ABF9C79E339(iParam0 - 1361) * 8 * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = iParam0 - 1393 - _0x94F12ABF9C79E339(iParam0 - 1393) * 8 * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = iParam0 - 4143 - _0x94F12ABF9C79E339(iParam0 - 4143) * 8 * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = iParam0 - 3879 - _0x94F12ABF9C79E339(iParam0 - 3879) * 8 * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = iParam0 - 4399 - _0x94F12ABF9C79E339(iParam0 - 4399) * 8 * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = iParam0 - 6413 - _0x94F12ABF9C79E339(iParam0 - 6413) * 8 * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = iParam0 - 7262 - _0x94F12ABF9C79E339(iParam0 - 7262) * 8 * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = iParam0 - 7313 - _0x94F12ABF9C79E339(iParam0 - 7313) * 8 * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = iParam0 - 7641 - _0x94F12ABF9C79E339(iParam0 - 7641) * 8 * 8;
	}
	return iVar0;
}

int func_134(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_87();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 384, 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 457, 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1281, 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = _0x61E111E323419E07(iParam0 - 1305, 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1361, 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = _0xD16C2AD6B8E32854(iParam0 - 1393, 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4143, 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 3879, 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 4399, 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 6413, 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7262, 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7313, 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = _0x2B4CDCA6F07FF3DA(iParam0 - 7641, 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

int func_135(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 90;
		
		case 7:
			return 93;
		
		case 0:
			return 87;
		
		case 6:
			return 92;
		
		case 2:
			return 89;
		
		case 1:
			return 88;
		
		case 4:
			return 91;
		
		case 8:
			return 158;
		
		case 9:
			return 159;
		
		case 5:
			return 160;
		
		case 10:
			return 163;
		
		case 11:
			return 161;
		
		case 12:
			return 162;
		
		default:
	}
	return -1;
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 450;
		
		case 7:
			return 453;
		
		case 0:
			return 447;
		
		case 6:
			return 452;
		
		case 2:
			return 449;
		
		case 1:
			return 448;
		
		case 4:
			return 451;
		
		case 8:
			return 3940;
		
		case 9:
			return 3941;
		
		case 5:
			return 3942;
		
		case 10:
			return 3943;
		
		case 11:
			return 3944;
		
		case 12:
			return 3945;
		
		default:
	}
	return -1;
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 3;
		
		case 2:
			return 9;
		
		case 3:
			return 6;
		
		case 4:
			return 0;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 7:
			return 2;
		
		case 8:
			return 1;
		
		case 9:
			return 8;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		default:
	}
	return -1;
}

float func_138(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2489085[iParam0 /*5*/][func_86(iParam1)];
	if (_0x5FBD7095FE7AE57F(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_139(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 137;
		
		case 1:
			return 138;
		
		case 2:
			return 139;
		
		case 3:
			return 140;
		
		case 4:
			return 141;
		
		case 5:
			return 142;
		
		case 6:
			return 143;
		
		case 7:
			return 144;
		
		case 8:
			return 145;
		
		case 9:
			return 146;
		
		case 10:
			return 147;
		
		case 11:
			return 148;
		
		case 12:
			return 149;
		
		case 13:
			return 150;
		
		case 14:
			return 151;
		
		case 15:
			return 152;
		
		case 16:
			return 153;
		
		case 17:
			return 154;
		
		case 18:
			return 155;
		
		case 19:
			return 156;
		
		default:
	}
	return -1;
}

float func_140(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2489085[iParam0 /*5*/][func_86(iParam1)];
	if (stat_get_float(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

bool func_141(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar1 = -1;
		iVar2 = -1;
		if (Global_2560803 == iParam1)
		{
			iVar2 = Global_2560802;
			iVar1 = Global_2560801;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = func_188(iParam0, iParam1, 7, 3);
			iVar1 = func_181(iVar2);
			Global_2560803 = iParam1;
			Global_2560802 = iVar2;
			Global_2560801 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_2560806 == iParam3)
		{
			iVar4 = Global_2560805;
			iVar3 = Global_2560804;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = func_188(iParam0, iParam3, 11, 3);
			iVar3 = func_181(iVar4);
			Global_2560806 = iParam3;
			Global_2560805 = iVar4;
			Global_2560804 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_2560809 == iParam4)
		{
			iVar6 = Global_2560808;
			iVar5 = Global_2560807;
		}
		else if (iParam4 >= 241)
		{
			iVar6 = func_188(iParam0, iParam4, 8, 3);
			iVar5 = func_181(iVar6);
			Global_2560809 = iParam4;
			Global_2560808 = iVar6;
			Global_2560807 = iVar5;
		}
		if (_0x341DE7ED1D2A1BFD(iVar2, -120244486, 0))
		{
			if (iParam9 != -99)
			{
				iVar7 = -1;
				if (iParam9 >= 327)
				{
					iVar7 = func_188(iParam0, iParam9, 14, 3);
				}
				if (((iParam9 >= 27 && iParam9 <= 34) || (iParam9 >= 75 && iParam9 <= 82)) || (iParam9 >= 107 && iParam9 <= 114))
				{
					return false;
				}
				switch (iVar7)
				{
					case 1411612772:
					case 1399488226:
					case 1103092621:
					case 798340921:
					case 495850282:
					case -1972900644:
					case 2016102499:
					case 1719477511:
					case 288210625:
					case -882756821:
					case -1242625979:
					case -1358792084:
					case -1854813796:
					case -1257185072:
					case -75666008:
					case -451657514:
					case -1339992339:
					case -1987638855:
					case 1148780446:
						return false;
						break;
					}
				}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -1473812293, 0))
			{
				if (_0x341DE7ED1D2A1BFD(iVar2, 1396865968, 0))
				{
					if ((((((((((((((((((((((((((((((_0x341DE7ED1D2A1BFD(iVar4, -870074461, 0) || _0x341DE7ED1D2A1BFD(iVar4, -868698159, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1834446747, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1119232689, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -2102859770, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 1784133476, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1719167561, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1274099003, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1410897066, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 320460654, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -826135203, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 1431529976, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 1723403459, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -2020757158, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1064262817, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1419806467, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1053842259, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1358888880, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -441291342, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -785939537, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1507532917, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1446333198, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 492620493, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -416620954, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -102825006, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 137011325, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -641612092, 0))
					{
						return false;
					}
					else if (func_143(iParam0, iParam3))
					{
					}
					else
					{
						return false;
					}
				}
				else if (func_143(iParam0, iParam3))
				{
					return false;
				}
				else if (_0x341DE7ED1D2A1BFD(iVar2, -120244486, 0))
				{
					if (((((iParam3 >= 188 && iParam3 <= 203) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 12) || iVar3 == 14) || _0x341DE7ED1D2A1BFD(iVar4, -1127835965, 0))
					{
						return false;
					}
				}
			}
			if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -353070590, 0))
			{
				if (((_0x341DE7ED1D2A1BFD(iVar4, -870074461, 0) || _0x341DE7ED1D2A1BFD(iVar4, -868698159, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1834446747, 0))
				{
				}
				else
				{
					return false;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, 654065530, 0))
			{
				if (_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0) || _0x341DE7ED1D2A1BFD(iVar4, -641612092, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
		}
		if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, 596326873, 0))
		{
			if (iParam3 != -99)
			{
				if (_0x341DE7ED1D2A1BFD(iVar2, -319568873, 0))
				{
					if ((iParam3 >= 96 && iParam3 <= 107) || iVar3 == 6)
					{
						return false;
					}
				}
				if (iParam3 == 236)
				{
					if (_0x341DE7ED1D2A1BFD(iVar2, 525778571, 0))
					{
						return false;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || _0x341DE7ED1D2A1BFD(iVar4, 1625463492, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -713698407, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 1843965488, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -779835469, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1086258388, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 1021189127, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1939378450, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 441715397, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 264959411, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1127835965, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 153792394, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -672871169, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 572416369, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -196114988, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 1322269404, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1655154167, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1607949555, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1719167561, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 320460654, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -2017999390, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1410897066, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -826135203, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 1431529976, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 1723403459, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1419806467, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1053842259, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1358888880, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -785939537, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -416620954, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -102825006, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 137011325, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -641612092, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1351486939, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -491588875, 0))
				{
					return false;
				}
				else if (!_0x341DE7ED1D2A1BFD(iVar2, 525778571, 0))
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 12) || iVar5 == 13) || _0x341DE7ED1D2A1BFD(iVar6, 651155766, 0))
				{
					return false;
				}
			}
		}
		if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -319568873, 0))
		{
			if (iParam8 != -99)
			{
				return false;
			}
		}
		if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -713698407, 0))
		{
			if (iParam9 >= 327 && _0x341DE7ED1D2A1BFD(func_188(iParam0, iParam9, 14, 3), -713698407, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return false;
			}
		}
		else if ((iParam9 >= 327 && _0x341DE7ED1D2A1BFD(func_188(iParam0, iParam9, 14, 3), -713698407, 1)) && iParam1 != 0)
		{
			return false;
		}
		if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -1119006951, 0))
		{
			if (iParam3 != -99)
			{
				if (((((((((((((((((((((((((((((iParam3 >= 140 && iParam3 <= 155) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 9) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || _0x341DE7ED1D2A1BFD(iVar4, 248194463, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 572350888, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1817355735, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -713698407, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 1843965488, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 140732128, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 1863955539, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 441715397, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 153792394, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 572416369, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 2099109084, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 1538937264, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1064262817, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1053842259, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1358888880, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -441291342, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -785939537, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -641612092, 0))
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 144 && iParam4 <= 159)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 176 && iParam4 <= 191)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 9) || iVar5 == 10) || iVar5 == 11) || iVar5 == 12) || iVar5 == 13) || _0x341DE7ED1D2A1BFD(iVar6, -1778265882, 0)) || _0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0)) || _0x341DE7ED1D2A1BFD(iVar6, 651155766, 0)) || _0x341DE7ED1D2A1BFD(iVar6, -1914383230, 0)) || _0x341DE7ED1D2A1BFD(iVar6, 1553766533, 0)) || _0x341DE7ED1D2A1BFD(iVar6, 505220913, 0))
				{
					return false;
				}
			}
		}
		if ((iParam1 >= 1 && iParam1 <= 3) || iVar1 == 1)
		{
			if (iParam5 != -99)
			{
				if (iParam5 != 15)
				{
					return false;
				}
			}
			if (iParam3 != -99)
			{
				if (iParam3 != 236)
				{
					return false;
				}
			}
			if (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, 2066241403, 0))
			{
				return false;
			}
		}
		else if ((iParam1 >= 4 && iParam1 <= 6) || iVar1 == 2)
		{
			if (iParam3 != -99)
			{
				if ((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8)
				{
				}
				else
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((iParam4 >= 0 && iParam4 <= 15) || (iParam4 >= 16 && iParam4 <= 31)) || (iParam4 >= 32 && iParam4 <= 47)) || (iParam4 >= 80 && iParam4 <= 95)) || (iParam4 >= 128 && iParam4 <= 143)) || iParam4 == 240) || iVar5 == 0) || iVar5 == 1) || iVar5 == 2) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return false;
				}
			}
			else if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return false;
				}
			}
		}
		else if ((iParam1 >= 10 && iParam1 <= 25) || iVar1 == 4)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 124 && iParam3 <= 139)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 172 && iParam3 <= 187)) || (iParam3 >= 204 && iParam3 <= 219)) || iParam3 == 236) || iVar3 == 0) || iVar3 == 1) || iVar3 == 2) || iVar3 == 5) || iVar3 == 8) || iVar3 == 9) || iVar3 == 11) || iVar3 == 13) || iVar3 == 15)
				{
				}
				else
				{
					return false;
				}
			}
		}
		else if ((iParam1 >= 32 && iParam1 <= 37) || iVar1 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((iParam3 >= 96 && iParam3 <= 107) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 6) || iVar3 == 10)
				{
				}
				else
				{
					return false;
				}
			}
		}
		else if (((((iParam1 >= 41 && iParam1 <= 56) || (iParam1 >= 73 && iParam1 <= 88)) || iVar1 == 10) || iVar1 == 12) || (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -920534092, 0)))
		{
			if (iParam3 != -99)
			{
				if (((iParam3 >= 204 && iParam3 <= 219) || func_183(iParam0, iParam3)) || iVar3 == 13)
				{
					if (((_0x341DE7ED1D2A1BFD(iVar4, -1446333198, 0) || _0x341DE7ED1D2A1BFD(iVar4, 492620493, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1351486939, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -7109286, 0))
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((iParam4 >= 160 && iParam4 <= 175) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, -1778265882, 0))) || (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, 505220913, 0)))
				{
				}
				else
				{
					iVar0 = func_190(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_181(func_188(iParam0, iVar0, 11, 3)) == 13))
					{
						return true;
					}
					if (iParam7 == 1)
					{
						if ((iParam4 >= 176 && iParam4 <= 191) || iVar5 == 11)
						{
							return true;
						}
					}
					return false;
				}
			}
		}
		else if ((iParam1 >= 57 && iParam1 <= 72) || iVar1 == 11)
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 204 && iParam3 <= 219) || (iParam3 >= 172 && iParam3 <= 187)) || func_183(iParam0, iParam3)) || iVar3 == 13) || iVar3 == 11)
				{
					if ((_0x341DE7ED1D2A1BFD(iVar4, -1446333198, 0) || _0x341DE7ED1D2A1BFD(iVar4, 492620493, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -7109286, 0))
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10) || iVar5 == 13) || (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, -1778265882, 0))) || (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0))) || (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, 651155766, 0))) || (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, 505220913, 0))) || _0x341DE7ED1D2A1BFD(iVar6, -893126917, 0)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
				}
				else
				{
					iVar0 = func_190(iParam6, 11);
					if ((iVar0 >= 204 && iVar0 <= 219) || (iVar0 >= 237 && func_181(func_188(iParam0, iVar0, 11, 3)) == 13))
					{
						return true;
					}
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0))
							{
								return true;
							}
						}
					}
					return false;
				}
			}
		}
		else if (iParam1 >= 92 && _0x341DE7ED1D2A1BFD(iVar2, -1950939707, 0))
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11) || iVar4 == -27166014) || iVar4 == -273228435) || iVar4 == -2118057713) || iVar4 == -1809078812) || iVar4 == -1522415600) || iVar4 == -1212584705) || iVar4 == -886664231) || iVar4 == -646500230) || iVar4 == -290891042) || iVar4 == 15400801) || iVar4 == -485413449) || iVar4 == -254359230) || _0x341DE7ED1D2A1BFD(iVar4, 1769225721, 0)) || iVar4 == 1343601766) || iVar4 == 567992305) || iVar4 == -192707261) || iVar4 == 1156347903) || iVar4 == 1853344529) || iVar4 == 1597648022) || iVar4 == -1995669446)
				{
					if (!_0x341DE7ED1D2A1BFD(iVar4, -7109286, 0))
					{
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || iVar5 == 4) || iVar5 == 6) || (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0))) || _0x341DE7ED1D2A1BFD(iVar6, -893126917, 0)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658)
				{
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar5 == 3) || iVar5 == 7) || iVar5 == 11)
						{
							if (!_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0))
							{
								return true;
							}
						}
					}
					return false;
				}
			}
		}
		else if (iParam1 >= 92 && _0x341DE7ED1D2A1BFD(iVar2, -1371423804, 0))
		{
			if (iParam3 != -99)
			{
				if (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, 1625463492, 0))
				{
				}
				else
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, 651155766, 0)) && _0x341DE7ED1D2A1BFD(iVar2, -277681306, 0)) || ((iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, 505220913, 0)) && !_0x341DE7ED1D2A1BFD(iVar2, -277681306, 0)))
				{
				}
				else
				{
					return false;
				}
			}
		}
		else if (iParam1 >= 92 && _0x341DE7ED1D2A1BFD(iVar2, -108328099, 0))
		{
			if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 176 && iParam4 <= 191)) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == -1891018679) || iVar6 == -1583940380) || iVar6 == -693410036) || iVar6 == -2129413154) || iVar6 == -1280171750) || iVar6 == -971192849) || iVar6 == 389965873) || iVar6 == -1451291468) || iVar6 == -50613332) || iVar6 == 318070129) || iVar6 == -1851794728) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || iVar6 == -1305325922) || iVar6 == 242616108) || iVar6 == 1085565864) || iVar6 == -1968210019) || iVar6 == 2028002304) || iVar6 == 830393657) || iVar6 == -473747009) || iVar6 == 240453350) || iVar6 == 1083927410) || _0x341DE7ED1D2A1BFD(iVar6, 684992453, 0)) || _0x341DE7ED1D2A1BFD(iVar6, 1458930564, 0)) || _0x341DE7ED1D2A1BFD(iVar6, 2048281121, 0)) || _0x341DE7ED1D2A1BFD(iVar6, 19149565, 0))
				{
					if (!_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0))
					{
					}
					else
					{
						return false;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((((((iParam4 >= 64 && iParam4 <= 79) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 160 && iParam4 <= 175)) || iVar5 == 4) || iVar5 == 6) || iVar5 == 10)
						{
							if (!_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0))
							{
								return true;
							}
						}
					}
					return false;
				}
			}
		}
		else if (iParam1 >= 92 && _0x341DE7ED1D2A1BFD(iVar2, -378906828, 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 156 && iParam3 <= 171)) || iVar3 == 4) || iVar3 == 10) || _0x341DE7ED1D2A1BFD(iVar4, 470686834, 0))
				{
				}
				else
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((iParam4 >= 176 && iParam4 <= 191) || iVar6 == 2018316953) || iVar6 == 1771468076) || iVar6 == 1529567318) || iVar6 == 1299823859) || iVar6 == 1130047658) || iVar6 == 936913256) || iVar6 == -1891018679) || iVar6 == -1583940380) || iVar6 == -693410036) || iVar6 == -2129413154) || iVar6 == -1280171750) || iVar6 == -971192849) || iVar6 == 389965873) || iVar6 == -1451291468) || iVar6 == -50613332) || iVar6 == 318070129) || iVar6 == -1851794728) || iVar6 == 673515492) || iVar6 == 889168281) || iVar6 == 1270009599) || iVar6 == 1866208765) || iVar6 == 1546649325) || iVar6 == 1180816209) || _0x341DE7ED1D2A1BFD(iVar6, 684992453, 0))
				{
					if (!_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0))
					{
					}
					else
					{
						return false;
					}
				}
				else
				{
					if (iParam7 == 1)
					{
						if ((iParam4 >= 160 && iParam4 <= 175) || iVar5 == 10)
						{
							if (!_0x341DE7ED1D2A1BFD(iVar6, -7109286, 0))
							{
								return true;
							}
						}
					}
					return false;
				}
			}
		}
		else if (iParam1 >= 92 && _0x341DE7ED1D2A1BFD(iVar2, -695703461, 0))
		{
			if (iParam3 != -99)
			{
				if (((((iParam3 >= 64 && iParam3 <= 79) || (iParam3 >= 188 && iParam3 <= 203)) || iVar3 == 12) || iVar3 == 4) || _0x341DE7ED1D2A1BFD(iVar4, 470686834, 0))
				{
				}
				else
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if (((iParam4 >= 192 && iParam4 <= 207) || func_142(iVar6)) || (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, 310957510, 0)))
				{
				}
				else
				{
					return false;
				}
			}
		}
		else if (iParam1 >= 92 && _0x341DE7ED1D2A1BFD(iVar2, -1473812293, 0))
		{
			if (iParam3 != -99)
			{
				if ((iParam3 >= 172 && iParam3 <= 187) || iVar3 == 11)
				{
					return false;
				}
				else if ((iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, 1627756587, 0)) || (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, 1322269404, 0)))
				{
					return false;
				}
				else if (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, -713698407, 0))
				{
					return false;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 41))
				{
				}
				else
				{
					return false;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar8 = -1;
		iVar9 = -1;
		if (iParam1 >= 55)
		{
			iVar9 = func_188(iParam0, iParam1, 7, 4);
			iVar8 = func_181(iVar9);
		}
		iVar10 = -1;
		iVar11 = -1;
		if (iParam3 >= 256)
		{
			iVar11 = func_188(iParam0, iParam3, 11, 4);
			iVar10 = func_181(iVar11);
		}
		iVar12 = -1;
		if (iParam9 >= 327)
		{
			iVar12 = func_188(iParam0, iParam9, 14, 4);
		}
		iVar13 = -1;
		iVar14 = -1;
		if (iParam4 >= 136)
		{
			iVar13 = func_188(iParam0, iParam4, 8, 4);
			iVar14 = func_181(iVar13);
		}
		if (iParam3 != -99)
		{
			if (iVar9 != -1 && _0x341DE7ED1D2A1BFD(iVar9, -1473812293, 0))
			{
				if (_0x341DE7ED1D2A1BFD(iVar9, 1396865968, 0))
				{
					if (((((((_0x341DE7ED1D2A1BFD(iVar11, -1410897066, 0) || _0x341DE7ED1D2A1BFD(iVar11, 320460654, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -826135203, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -747583185, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -416620954, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -733792105, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -641612092, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1507532917, 0))
					{
						return false;
					}
					else if (func_143(iParam0, iParam3))
					{
					}
					else
					{
						return false;
					}
				}
				else if (func_143(iParam0, iParam3))
				{
					return false;
				}
			}
			if (iVar9 != -1 && _0x341DE7ED1D2A1BFD(iVar9, -353070590, 0))
			{
				if ((((_0x341DE7ED1D2A1BFD(iVar11, -870074461, 0) || _0x341DE7ED1D2A1BFD(iVar11, -1174924468, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -868698159, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 1769225721, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1834446747, 0))
				{
				}
				else
				{
					return false;
				}
			}
		}
		if (iVar9 != -1 && _0x341DE7ED1D2A1BFD(iVar9, -713698407, 0))
		{
			if (iParam9 >= 327 && _0x341DE7ED1D2A1BFD(func_188(iParam0, iParam9, 14, 4), -713698407, 1))
			{
			}
			else if (iParam2 == 14 || (iParam2 == 1 && iParam10 != 0))
			{
				return false;
			}
		}
		else if ((iParam9 >= 327 && _0x341DE7ED1D2A1BFD(func_188(iParam0, iParam9, 14, 4), -713698407, 1)) && iParam1 != 0)
		{
			return false;
		}
		if (iVar9 != -1 && (_0x341DE7ED1D2A1BFD(iVar9, -920534092, 0) || _0x341DE7ED1D2A1BFD(iVar9, 1537081084, 0)))
		{
			if (iParam2 == 11)
			{
				if ((((((((((_0x341DE7ED1D2A1BFD(iVar11, 684992453, 0) || _0x341DE7ED1D2A1BFD(iVar11, 916636514, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1939378450, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -820724897, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 153792394, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -872449705, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 1714969731, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 1055526375, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 947651647, 0)) || (iParam3 >= 112 && iParam3 <= 127)) || iVar10 == 7)
				{
				}
				else if ((_0x341DE7ED1D2A1BFD(iVar11, 700658917, 0) || _0x341DE7ED1D2A1BFD(iVar11, 745826556, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 144417099, 0))
				{
					if (_0x341DE7ED1D2A1BFD(iVar9, 1537081084, 0))
					{
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			else if (iParam2 == 8)
			{
				if (_0x341DE7ED1D2A1BFD(iVar13, 1553766533, 0) || _0x341DE7ED1D2A1BFD(iVar13, -1914383230, 0))
				{
					if (_0x341DE7ED1D2A1BFD(iVar9, -920534092, 0))
					{
						if (_0x341DE7ED1D2A1BFD(iVar13, 441715397, 0) || _0x341DE7ED1D2A1BFD(iVar13, 264959411, 0))
						{
							if (_0x341DE7ED1D2A1BFD(iVar9, 1828206051, 0))
							{
							}
							else
							{
								return false;
							}
						}
						else if (_0x341DE7ED1D2A1BFD(iVar9, 1828206051, 0))
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
		if (iParam9 != -99)
		{
			if (iVar12 != -1 && _0x341DE7ED1D2A1BFD(iVar12, 1406402954, 1))
			{
				if ((((iParam1 >= 1 && iParam1 <= 12) || iVar8 == 1) || iVar8 == 2) || (iVar9 != -1 && _0x341DE7ED1D2A1BFD(iVar9, 1406402954, 0)))
				{
					return false;
				}
			}
		}
		if (iVar9 != -1 && _0x341DE7ED1D2A1BFD(iVar9, 596326873, 0))
		{
			if (iParam3 != -99)
			{
				if ((((_0x341DE7ED1D2A1BFD(iVar11, -1358888880, 0) || _0x341DE7ED1D2A1BFD(iVar11, -102825006, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -733792105, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -641612092, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1507532917, 0))
				{
					return false;
				}
				else if (func_183(iParam0, iParam3))
				{
				}
				else if (((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 176 && iParam3 <= 191)) || iVar10 == 2) || iVar10 == 11) || _0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -761463976, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1347486026, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -939525357, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1119232689, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -2102859770, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 1784133476, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1488441032, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 2044466679, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -2020757158, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -430330349, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1351486939, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 2030343924, 0)) || iVar11 == 998321559) || iVar11 == 619380843)
				{
					if (!_0x341DE7ED1D2A1BFD(iVar9, 525778571, 0))
					{
						return false;
					}
				}
				else if ((((((((((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar10 == 3) || iVar10 == 9) || iVar10 == 14) || _0x341DE7ED1D2A1BFD(iVar11, -530089825, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 1965569012, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1200513218, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -713698407, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 1843965488, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -55104292, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -779835469, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1086258388, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 140732128, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 2106216756, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 1627756587, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 441715397, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 264959411, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1127835965, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -672871169, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 572416369, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -196114988, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1607949555, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 1976716889, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 2099109084, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1488441032, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 320460654, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -2017999390, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1410897066, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -826135203, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1053842259, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1358888880, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -441291342, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -747583185, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 1407863332, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1986415230, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -785939537, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1103045158, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -102825006, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -641612092, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1507532917, 0))
				{
					return false;
				}
				else if (_0x341DE7ED1D2A1BFD(iVar9, 525778571, 0))
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if (((((((((((((((((((((((((((((((((((((((((((((((iParam4 >= 71 && iParam4 <= 86) || iVar14 == 11) || _0x341DE7ED1D2A1BFD(iVar13, 1455992833, 0)) || _0x341DE7ED1D2A1BFD(iVar13, 153792394, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -870074461, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -1174924468, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -868698159, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -1177480446, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -1347486026, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -1655154167, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -2105858993, 0)) || _0x341DE7ED1D2A1BFD(iVar13, 1893564692, 0)) || _0x341DE7ED1D2A1BFD(iVar13, 1710451520, 0)) || _0x341DE7ED1D2A1BFD(iVar13, 1416808511, 0)) || _0x341DE7ED1D2A1BFD(iVar13, 1641506460, 0)) || _0x341DE7ED1D2A1BFD(iVar13, 699233865, 0)) || iVar13 == -565297075) || iVar13 == 262349558) || iVar13 == -917804055) || iVar13 == -1156067454) || iVar13 == -2124751863) || iVar13 == 1812836719) || iVar13 == 1582116924) || iVar13 == 877452376) || iVar13 == 1117419763) || iVar13 == 732885188) || iVar13 == -1037820496) || iVar13 == -79097863) || _0x341DE7ED1D2A1BFD(iVar13, -1119232689, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -2102859770, 0)) || _0x341DE7ED1D2A1BFD(iVar13, 1784133476, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -1607949555, 0)) || _0x341DE7ED1D2A1BFD(iVar13, 1976716889, 0)) || _0x341DE7ED1D2A1BFD(iVar13, 2099109084, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -1488441032, 0)) || _0x341DE7ED1D2A1BFD(iVar13, 2044466679, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -2020757158, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -1064262817, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -1419806467, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -1053842259, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -1358888880, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -849839091, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -2088146832, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -352447393, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -642551350, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -819569488, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -2020068325, 0))
				{
					if (!_0x341DE7ED1D2A1BFD(iVar9, 525778571, 0))
					{
						return false;
					}
				}
				else if (((((((_0x341DE7ED1D2A1BFD(iVar13, 1965569012, 0) || _0x341DE7ED1D2A1BFD(iVar13, 684992453, 0)) || _0x341DE7ED1D2A1BFD(iVar13, 916636514, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -1939378450, 0)) || _0x341DE7ED1D2A1BFD(iVar13, 441715397, 0)) || _0x341DE7ED1D2A1BFD(iVar13, 264959411, 0)) || _0x341DE7ED1D2A1BFD(iVar13, 1353777856, 0)) || _0x341DE7ED1D2A1BFD(iVar13, -1207283343, 0))
				{
					return false;
				}
				else if (func_182(iParam0, iParam4, 0) != -99)
				{
					if (_0x341DE7ED1D2A1BFD(iVar9, 525778571, 0))
					{
						return false;
					}
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return false;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar9 != -1 && _0x341DE7ED1D2A1BFD(iVar9, 654065530, 0))
			{
				if (_0x341DE7ED1D2A1BFD(iVar11, -1351486939, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
		}
		if (((iParam1 >= 13 && iParam1 <= 18) || iVar8 == 3) || (iVar9 != -1 && _0x341DE7ED1D2A1BFD(iVar9, -1320139576, 0)))
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar10 == 3) || iVar10 == 7) || iVar10 == 10) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 1147939952, 0)))
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && _0x341DE7ED1D2A1BFD(func_188(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return false;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar12 != -1 && _0x341DE7ED1D2A1BFD(iVar12, -1320139576, 1))
				{
					return false;
				}
			}
		}
		else if ((iParam1 >= 19 && iParam1 <= 24) || iVar8 == 4)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar10 == 3) || iVar10 == 7) || iVar10 == 10) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 1147939952, 0)))
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && _0x341DE7ED1D2A1BFD(func_188(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return false;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar12 != -1 && _0x341DE7ED1D2A1BFD(iVar12, -1320139576, 1))
				{
					return false;
				}
			}
		}
		else if ((iParam1 >= 25 && iParam1 <= 30) || iVar8 == 5)
		{
			if (iParam3 != -99)
			{
				if (((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 160 && iParam3 <= 175)) || iVar10 == 3) || iVar10 == 7) || iVar10 == 10) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 1147939952, 0)))
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && _0x341DE7ED1D2A1BFD(func_188(iParam0, iParam4, 8, 4), 1147939952, 0))
				{
					return false;
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar12 != -1 && _0x341DE7ED1D2A1BFD(iVar12, -1320139576, 1))
				{
					return false;
				}
			}
		}
		else if ((iParam1 >= 31 && iParam1 <= 36) || iVar8 == 6)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((((((((((((((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar10 == 3) || iVar10 == 9) || iVar10 == 14) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 1965569012, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 396458410, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -761463976, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 103539798, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1347486026, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -994703884, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1119232689, 0))) || _0x341DE7ED1D2A1BFD(iVar11, 320460654, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -2017999390, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1410897066, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -826135203, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 2044466679, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -2020757158, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1064262817, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1053842259, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1358888880, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -441291342, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -747583185, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1986415230, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -430330349, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -102825006, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -733792105, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -641612092, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1351486939, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1507532917, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 2030343924, 0))
				{
					return false;
				}
			}
		}
		else if (((iParam1 >= 37 && iParam1 <= 42) || iVar8 == 7) || (iParam1 >= 55 && _0x341DE7ED1D2A1BFD(iVar9, 2083259958, 0)))
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((((((((((((((((iParam3 >= 32 && iParam3 <= 47) || (iParam3 >= 48 && iParam3 <= 63)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 224 && iParam3 <= 239)) || iVar10 == 2) || iVar10 == 3) || iVar10 == 9) || iVar10 == 14) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 396458410, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -761463976, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 821147517, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 103539798, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1347486026, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -994703884, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1119232689, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1607949555, 0))) || _0x341DE7ED1D2A1BFD(iVar11, 320460654, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -2017999390, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1410897066, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -826135203, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 1965569012, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1064262817, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1053842259, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1358888880, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -441291342, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -747583185, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1986415230, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -430330349, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -102825006, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -733792105, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -641612092, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1351486939, 0)) || _0x341DE7ED1D2A1BFD(iVar11, -1507532917, 0)) || _0x341DE7ED1D2A1BFD(iVar11, 2030343924, 0))
				{
					return false;
				}
				else if (((((((((((iParam3 >= 112 && iParam3 <= 127) || (iParam3 >= 160 && iParam3 <= 175)) || (iParam3 >= 192 && iParam3 <= 207)) || iVar10 == 7) || iVar10 == 10) || iVar10 == 12) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 1147939952, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1200513218, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 2026620439, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1882920022, 0))) || _0x341DE7ED1D2A1BFD(iVar11, -747583185, 0))
				{
					if (iParam1 >= 55 && _0x341DE7ED1D2A1BFD(iVar9, 2083259958, 0))
					{
						return false;
					}
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && _0x341DE7ED1D2A1BFD(func_188(iParam0, iParam4, 8, 4), 1965569012, 0))
				{
					if (iParam1 >= 55 && _0x341DE7ED1D2A1BFD(iVar9, 2083259958, 0))
					{
						return false;
					}
				}
			}
			else if (iParam9 != -99)
			{
				if (iVar12 != -1 && _0x341DE7ED1D2A1BFD(iVar12, -1320139576, 1))
				{
					return false;
				}
			}
		}
		else if ((iParam1 >= 43 && iParam1 <= 48) || iVar8 == 8)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 32 && iParam3 <= 47)) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 144 && iParam3 <= 159)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar10 == 0) || iVar10 == 2) || iVar10 == 4) || iVar10 == 5) || iVar10 == 9) || iVar10 == 11) || iVar10 == 12) || iVar10 == 13) || iVar10 == 15) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1200513218, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -530089825, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, 103539798, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -994703884, 0)))
				{
				}
				else
				{
					return false;
				}
			}
		}
		else if ((iParam1 >= 49 && iParam1 <= 54) || iVar8 == 9)
		{
			if (iParam3 != -99)
			{
				if ((((((((((((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255)) || iVar10 == 0) || iVar10 == 4) || iVar10 == 5) || iVar10 == 11) || iVar10 == 12) || iVar10 == 13) || iVar10 == 15) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -1200513218, 0))) || (iParam3 >= 256 && _0x341DE7ED1D2A1BFD(iVar11, -530089825, 0)))
				{
				}
				else
				{
					return false;
				}
			}
			else if (iParam4 != -99)
			{
				if (iParam4 >= 136 && _0x341DE7ED1D2A1BFD(func_188(iParam0, iParam4, 8, 4), -7109286, 0))
				{
					return false;
				}
			}
			if (iParam8 != -99)
			{
				if (!(iParam8 >= 1 && iParam8 <= 31))
				{
				}
				else
				{
					return false;
				}
			}
		}
		else if (iParam1 >= 55 && _0x341DE7ED1D2A1BFD(iVar9, 1716958480, 0))
		{
			if (iParam3 != -99)
			{
				if (iVar11 != -1 && _0x341DE7ED1D2A1BFD(iVar11, -747583185, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (iParam11 != -99)
			{
				iVar15 = -1;
				if (iParam11 >= 256)
				{
					iVar15 = func_188(iParam0, iParam11, 4, 4);
				}
				if (_0x341DE7ED1D2A1BFD(iVar15, -33031567, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
		}
	}
	return true;
}

bool func_142(int iParam0)
{
	if (iParam0 != -1)
	{
		return false;
	}
	switch (iParam0)
	{
		case -783649692:
		case 691352495:
		case 1313566316:
		case 451909412:
		case 1552550633:
		case -206550874:
		case 860928119:
		case -445797343:
		case 1107219923:
		case -173716332:
		case -2017140386:
		case -538304226:
		case -1235599732:
		case -592242000:
		case 1815489089:
		case -831095241:
		case 2062043045:
		case -1092100326:
		case -1065332020:
		case -1465994616:
		case -1516536717:
		case 507503642:
		case -1470397961:
		case -1392082519:
		case 264425668:
		case -88859389:
		case 560755735:
		case 157858412:
		case -593565059:
		case -513152401:
		case -286945526:
		case 2004948615:
			return true;
			break;
	}
	return false;
}

int func_143(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = func_188(iParam0, iParam1, 11, 3);
		if (iVar0 != -1)
		{
			if ((((((((((((((((((((((_0x341DE7ED1D2A1BFD(iVar0, -1119232689, 0) || _0x341DE7ED1D2A1BFD(iVar0, -2102859770, 0)) || _0x341DE7ED1D2A1BFD(iVar0, 1784133476, 0)) || _0x341DE7ED1D2A1BFD(iVar0, 1976716889, 0)) || _0x341DE7ED1D2A1BFD(iVar0, 2099109084, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -1488441032, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -1719167561, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -1274099003, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -1410897066, 0)) || _0x341DE7ED1D2A1BFD(iVar0, 320460654, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -826135203, 0)) || _0x341DE7ED1D2A1BFD(iVar0, 1431529976, 0)) || _0x341DE7ED1D2A1BFD(iVar0, 1723403459, 0)) || _0x341DE7ED1D2A1BFD(iVar0, 2044466679, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -2020757158, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -1064262817, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -1419806467, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -1053842259, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -1358888880, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -441291342, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -785939537, 0)) || _0x341DE7ED1D2A1BFD(iVar0, -1446333198, 0)) || _0x341DE7ED1D2A1BFD(iVar0, 492620493, 0))
			{
				return 1;
			}
		}
		if (iVar0 != -1)
		{
			if (_0x341DE7ED1D2A1BFD(iVar0, -2017999390, 0))
			{
				return 1;
			}
		}
		return func_183(iParam0, iParam1);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar1 = func_188(iParam0, iParam1, 11, 4);
		iVar2 = -1;
		if (iVar1 != -1)
		{
			iVar2 = func_181(iVar1);
		}
		if (((((((((((((((((((((((((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 48 && iParam1 < 64)) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 144 && iParam1 < 160)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 224 && iParam1 < 240)) || iVar2 == 1) || iVar2 == 3) || iVar2 == 6) || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10) || iVar2 == 14) || _0x341DE7ED1D2A1BFD(iVar1, -1393156190, 0)) || _0x341DE7ED1D2A1BFD(iVar1, 1843965488, 0)) || _0x341DE7ED1D2A1BFD(iVar1, 441715397, 0)) || _0x341DE7ED1D2A1BFD(iVar1, 264959411, 0)) || _0x341DE7ED1D2A1BFD(iVar1, -1410897066, 0)) || _0x341DE7ED1D2A1BFD(iVar1, 320460654, 0)) || _0x341DE7ED1D2A1BFD(iVar1, -2017999390, 0)) || _0x341DE7ED1D2A1BFD(iVar1, -826135203, 0)) || _0x341DE7ED1D2A1BFD(iVar1, -747583185, 0)) || _0x341DE7ED1D2A1BFD(iVar1, -102825006, 0)) || _0x341DE7ED1D2A1BFD(iVar1, -733792105, 0)) || _0x341DE7ED1D2A1BFD(iVar1, -641612092, 0)) || _0x341DE7ED1D2A1BFD(iVar1, -1507532917, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_144(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_entity_model(iParam0);
	func_177(get_hash_key("hairOverlay"), iParam0);
	iVar1 = func_176(iVar0, iParam1);
	if (iVar1 != -1)
	{
		if (iParam2 == -1)
		{
			iParam2 = Global_69309;
		}
		func_196(iVar1, 1, Global_69309);
	}
	func_145(iParam0, iParam3, 0);
}

void func_145(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<9> Var1;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = Global_69309;
		_clear_ped_facial_decorations(iParam0);
		iVar14 = func_175(iParam0);
		iVar15 = func_166(iParam0);
		iVar16 = func_164(iParam0);
		iVar17 = func_163(iParam0);
		if (iParam1)
		{
			iVar16 = true;
		}
		if (iParam2)
		{
			iVar16 = false;
		}
		iVar18 = 0;
		while (iVar18 < 127)
		{
			if (func_156(iVar18, iVar0))
			{
				if (func_148(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (func_147(&Var1, Var1.f_4, Var1.f_8, iVar15, iVar16, iParam1, iVar17))
					{
						_set_ped_decoration(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (func_156(123, iVar0))
		{
			if (_get_tattoo_zone(-1719270477, -1824026490) != 7)
			{
				_set_ped_decoration(iParam0, -1719270477, -1824026490);
			}
		}
		iVar20 = _0x278F76C3B0A8F109(iVar14);
		iVar19 = 0;
		while (iVar19 < iVar20)
		{
			if (_0xFF56381874F82086(iVar14, iVar19, &Var21))
			{
				if (!_is_dlc_data_empty(Var21))
				{
					iVar36 = 129 + iVar19;
					if (func_156(iVar36, iVar0))
					{
						if (func_147(&(Var21.f_7), Var21.f_2, Var21.f_6, iVar15, iVar16, iParam1, iVar17))
						{
							_set_ped_decoration(iParam0, Var21.f_2, Var21.f_3);
							func_146(iParam0, Var21.f_2, Var21.f_3);
						}
					}
				}
			}
			iVar19++;
		}
	}
}

void func_146(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case -1194930348:
			switch (iParam2)
			{
				case -841238543:
					_set_ped_decoration(iParam0, -1194930348, -441419962);
					break;
				
				case -1405854945:
					_set_ped_decoration(iParam0, -1194930348, 1647997020);
					break;
			}
			break;
		
		case -777275782:
			switch (iParam2)
			{
				case 671171671:
					_set_ped_decoration(iParam0, -777275782, 904519720);
					break;
				
				case 1911627074:
					_set_ped_decoration(iParam0, -777275782, -607391498);
					break;
			}
			break;
		
		case 484754152:
			switch (iParam2)
			{
				case 266230635:
					_set_ped_decoration(iParam0, 484754152, -588549683);
					_set_ped_decoration(iParam0, 484754152, 464027076);
					break;
				
				case -1261787835:
					_set_ped_decoration(iParam0, 484754152, -965491494);
					_set_ped_decoration(iParam0, 484754152, 939374190);
					break;
			}
			break;
	}
}

bool func_147(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = get_entity_model(player_ped_id());
	if (iParam1 == 449512698)
	{
		return false;
	}
	switch (iParam2)
	{
		case -1409061796:
		case -454273031:
		case -388268096:
		case -763917073:
		case -2066166276:
		case -793495770:
		case -1469750959:
		case 1361645381:
		case -1238079313:
		case -1459967458:
		case 1548327796:
		case 1586504577:
		case 1753976524:
		case 849089063:
		case 1192230427:
		case 129912816:
			if (iParam3)
			{
				return false;
			}
			if (((((iParam2 == -793495770 && iVar0 == joaat("mp_f_freemode_01")) || (iParam2 == -1409061796 && iVar0 == joaat("mp_f_freemode_01"))) || iParam2 == -2066166276) || (iParam2 == 849089063 && iVar0 == joaat("mp_f_freemode_01"))) || (iParam2 == 1192230427 && iVar0 == joaat("mp_f_freemode_01")))
			{
				if (!iParam4)
				{
					if (Global_2561953 == -1)
					{
						if (!Global_91330.f_1446)
						{
							if (func_156(13, -1))
							{
								return false;
							}
							else if (func_156(14, -1))
							{
								return false;
							}
							else if (func_156(15, -1))
							{
								return false;
							}
							else if (func_156(16, -1))
							{
							}
							else if (func_156(71, -1))
							{
								return false;
							}
							else if (func_156(72, -1))
							{
							}
						}
					}
					else if (Global_2561953 == 13)
					{
						return false;
					}
					else if (Global_2561953 == 14)
					{
						return false;
					}
					else if (Global_2561953 == 15)
					{
						return false;
					}
					else if (Global_2561953 == 16)
					{
					}
					else if (Global_2561953 == 71)
					{
						return false;
					}
					else if (Global_2561953 == 72)
					{
					}
				}
			}
			else if (iParam2 == -763917073)
			{
				if (!iParam4)
				{
					if (Global_2561953 == -1)
					{
						if (!Global_91330.f_1446)
						{
							if (func_156(13, -1))
							{
								return false;
							}
							else if (func_156(14, -1))
							{
								return false;
							}
							else if (func_156(15, -1))
							{
								return false;
							}
							else if (func_156(16, -1))
							{
								return false;
							}
							else if (func_156(71, -1))
							{
								return false;
							}
							else if (func_156(72, -1))
							{
							}
						}
					}
					else if (Global_2561953 == 13)
					{
						return false;
					}
					else if (Global_2561953 == 14)
					{
						return false;
					}
					else if (Global_2561953 == 15)
					{
						return false;
					}
					else if (Global_2561953 == 16)
					{
						return false;
					}
					else if (Global_2561953 == 71)
					{
						return false;
					}
					else if (Global_2561953 == 72)
					{
					}
				}
			}
			else if (iParam2 == 129912816)
			{
				if (!iParam4)
				{
					if (Global_2561953 == -1)
					{
						if (!Global_91330.f_1446)
						{
							if (func_156(13, -1))
							{
							}
							else if (func_156(14, -1))
							{
								return false;
							}
							else if (func_156(15, -1))
							{
								return false;
							}
							else if (func_156(16, -1))
							{
							}
							else if (func_156(71, -1))
							{
								return false;
							}
							else if (func_156(72, -1))
							{
							}
						}
					}
					else if (Global_2561953 == 13)
					{
					}
					else if (Global_2561953 == 14)
					{
						return false;
					}
					else if (Global_2561953 == 15)
					{
						return false;
					}
					else if (Global_2561953 == 16)
					{
					}
					else if (Global_2561953 == 71)
					{
						return false;
					}
					else if (Global_2561953 == 72)
					{
					}
				}
			}
			break;
		
		case 1484379715:
		case 1206993109:
			if (iParam6)
			{
				return false;
			}
			break;
		
		case 1019352240:
			if (iParam4)
			{
				return false;
			}
			if (iParam3)
			{
				if (Global_2561953 == -1)
				{
					if (!Global_91330.f_1446)
					{
						if (func_156(13, -1))
						{
							return false;
						}
						else if (func_156(14, -1))
						{
							return false;
						}
						else if (func_156(15, -1))
						{
							return false;
						}
						else if (func_156(16, -1))
						{
						}
						else if (func_156(71, -1))
						{
						}
						else if (func_156(72, -1))
						{
						}
					}
				}
				else if (Global_2561953 == 13)
				{
					return false;
				}
				else if (Global_2561953 == 14)
				{
					return false;
				}
				else if (Global_2561953 == 15)
				{
					return false;
				}
				else if (Global_2561953 == 16)
				{
				}
				else if (Global_2561953 == 71)
				{
				}
				else if (Global_2561953 == 72)
				{
				}
			}
			break;
		
		case 0:
		case 2:
		case -518474626:
			if (iParam3)
			{
				if (!is_string_null_or_empty(sParam0))
				{
					switch (get_hash_key(sParam0))
					{
						case 1774176944:
						case 1363941829:
						case -328314869:
						case -1903783095:
						case -1674924399:
						case -106785870:
						case -344656041:
						case 1480281490:
						case -2097372400:
						case 118598456:
						case -1386676768:
						case 1464947154:
						case -1282504117:
						case -1877294236:
						case 736950162:
							return false;
							break;
						}
					}
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				if (!iParam4)
				{
					if (Global_2561953 == -1)
					{
						if (!Global_91330.f_1446)
						{
							if (func_156(13, -1))
							{
							}
							else if (func_156(14, -1))
							{
							}
							else if (func_156(15, -1))
							{
							}
							else if (func_156(16, -1))
							{
							}
							else if (func_156(71, -1))
							{
							}
							else if (func_156(72, -1))
							{
							}
						}
					}
					else if (Global_2561953 == 13)
					{
						return false;
					}
					else if (Global_2561953 == 14)
					{
					}
					else if (Global_2561953 == 15)
					{
						return false;
					}
					else if (Global_2561953 == 16)
					{
					}
					else if (Global_2561953 == 71)
					{
					}
					else if (Global_2561953 == 72)
					{
					}
				}
			}
			break;
		
		case 277073536:
			if (iParam5)
			{
				return false;
			}
			break;
	}
	return true;
}

int func_148(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	func_155(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
	if (does_entity_exist(iParam3) && !is_ped_injured(iParam3))
	{
		iVar0 = get_entity_model(iParam3);
	}
	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					func_155(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
				
				case 1:
					func_155(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
				
				case 2:
					func_155(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
				
				case 3:
					func_155(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
				
				case 4:
					func_155(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
				
				case 5:
					func_155(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
				
				case 6:
					func_155(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
				
				case 7:
					func_155(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
				
				case 8:
					func_155(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
				
				case 9:
					if (func_154() || func_153())
					{
						iVar1 = 400;
						if (func_152() && (func_151() || func_150()))
						{
							iVar1 = 0;
						}
						func_155(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
					}
					break;
				
				case 10:
					func_155(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
				
				case 11:
					func_155(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
				
				case 12:
					func_155(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
				
				case 13:
					func_155(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
				
				case 14:
					func_155(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
				
				case 15:
					func_155(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
				
				case 16:
					func_155(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
				
				case 17:
					func_155(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
				
				case 18:
					func_155(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
				
				case 19:
					func_155(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
				
				case 20:
					func_155(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
				
				default:
					func_149(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_154() || func_153())
					{
						iVar1 = 450;
						if (func_152() && (func_151() || func_150()))
						{
							iVar1 = 0;
						}
						func_155(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
					}
					break;
				
				case 1:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
				
				case 2:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
				
				case 3:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
				
				case 4:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
				
				case 5:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
				
				case 6:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
				
				case 7:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
				
				case 8:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
				
				case 9:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
				
				case 10:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
				
				case 11:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
				
				case 12:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
				
				case 13:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
				
				case 14:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
				
				case 15:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
				
				case 16:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
				
				case 17:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
				
				case 18:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
				
				case 19:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
				
				case 20:
					break;
				
				case 21:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
				
				case 22:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
				
				case 23:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
				
				case 24:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
				
				case 25:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
				
				case 26:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
				
				case 27:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
				
				case 28:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
				
				case 29:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
				
				case 30:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
				
				case 31:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
				
				case 32:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
				
				case 33:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
				
				case 34:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
				
				case 35:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
				
				case 36:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
				
				case 37:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
				
				case 38:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
				
				case 39:
					func_155(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
				
				default:
					func_149(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
				
				case 1:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
				
				case 2:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
				
				case 3:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
				
				case 4:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
				
				case 5:
					if (func_154() || func_153())
					{
						iVar1 = 380;
						if (func_152() && (func_151() || func_150()))
						{
							iVar1 = 0;
						}
						func_155(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
					}
					break;
				
				case 6:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
				
				case 7:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
				
				case 8:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
				
				case 9:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
				
				case 10:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
				
				case 11:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
				
				case 12:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
				
				case 13:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
				
				case 14:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
				
				case 15:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
				
				case 16:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
				
				case 17:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
				
				case 18:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
				
				case 19:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
				
				case 20:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
				
				case 21:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
				
				case 22:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
				
				case 23:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
				
				case 24:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
				
				case 25:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
				
				case 26:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
				
				case 27:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
				
				case 28:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
				
				case 29:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
				
				case 30:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
				
				case 31:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
				
				case 32:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
				
				case 33:
					func_155(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
				
				default:
					func_149(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, round(to_float(20000) * Global_262145.f_2902), 0);
					break;
				
				case 1:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, round(to_float(1400) * Global_262145.f_2903), 2);
					break;
				
				case 2:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, round(to_float(9750) * Global_262145.f_2904), 3);
					break;
				
				case 3:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, round(to_float(2150) * Global_262145.f_2905), 0);
					break;
				
				case 4:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, round(to_float(10000) * Global_262145.f_2906), 0);
					break;
				
				case 54:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, round(to_float(12400) * Global_262145.f_2907), 1);
					break;
				
				case 5:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, round(to_float(3500) * Global_262145.f_2908), 0);
					break;
				
				case 6:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, round(to_float(4950) * Global_262145.f_2909), 2);
					break;
				
				case 55:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, round(to_float(1350) * Global_262145.f_2910), 1);
					break;
				
				case 7:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, round(to_float(1450) * Global_262145.f_2911), 0);
					break;
				
				case 8:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, round(to_float(2700) * Global_262145.f_2912), 7);
					break;
				
				case 9:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, round(to_float(1200) * Global_262145.f_2913), 0);
					break;
				
				case 10:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, round(to_float(1500) * Global_262145.f_2914), 0);
					break;
				
				case 11:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, round(to_float(2650) * Global_262145.f_2915), 0);
					break;
				
				case 56:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, round(to_float(1900) * Global_262145.f_2916), 1);
					break;
				
				case 12:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, round(to_float(4950) * Global_262145.f_2917), 2);
					break;
				
				case 57:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, round(to_float(2400) * Global_262145.f_2918), 1);
					break;
				
				case 58:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, round(to_float(5100) * Global_262145.f_2919), 1);
					break;
				
				case 59:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, round(to_float(7400) * Global_262145.f_2920), 1);
					break;
				
				case 60:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, round(to_float(10000) * Global_262145.f_2921), 1);
					break;
				
				case 17:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, round(to_float(2400) * Global_262145.f_2926), 2);
					break;
				
				case 18:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, round(to_float(5100) * Global_262145.f_2927), 2);
					break;
				
				case 19:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, round(to_float(3600) * Global_262145.f_2928), 2);
					break;
				
				case 20:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, round(to_float(10000) * Global_262145.f_2929), 3);
					break;
				
				case 21:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, round(to_float(12500) * Global_262145.f_2930), 3);
					break;
				
				case 22:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, round(to_float(10000) * Global_262145.f_2931), 3);
					break;
				
				case 23:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, round(to_float(5000) * Global_262145.f_2932), 3);
					break;
				
				case 24:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, round(to_float(7500) * Global_262145.f_2933), 3);
					break;
				
				case 25:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, round(to_float(3750) * Global_262145.f_2934), 2);
					break;
				
				case 26:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, round(to_float(3750) * Global_262145.f_2935), 3);
					break;
				
				case 27:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, round(to_float(4800) * Global_262145.f_2936), 3);
					break;
				
				case 28:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, round(to_float(3500) * Global_262145.f_2937), 3);
					break;
				
				case 61:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, round(to_float(12350) * Global_262145.f_2938), 1);
					break;
				
				case 62:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, round(to_float(1900) * Global_262145.f_2939), 1);
					break;
				
				case 63:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, round(to_float(4500) * Global_262145.f_2940), 1);
					break;
				
				case 64:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, round(to_float(12250) * Global_262145.f_2941), 1);
					break;
				
				case 65:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, round(to_float(12300) * Global_262145.f_2942), 1);
					break;
				
				case 29:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, round(to_float(2500) * Global_262145.f_2943), 0);
					break;
				
				case 30:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, round(to_float(10000) * Global_262145.f_2944), 0);
					break;
				
				case 31:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, round(to_float(10000) * Global_262145.f_2945), 0);
					break;
				
				case 66:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, round(to_float(7500) * Global_262145.f_2946), 1);
					break;
				
				case 32:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, round(to_float(5000) * Global_262145.f_2947), 2);
					break;
				
				case 33:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, round(to_float(7300) * Global_262145.f_2948), 3);
					break;
				
				case 34:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, round(to_float(7250) * Global_262145.f_2949), 2);
					break;
				
				case 35:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, round(to_float(11900) * Global_262145.f_2950), 0);
					break;
				
				case 36:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, round(to_float(2750) * Global_262145.f_2951), 0);
					break;
				
				case 37:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, round(to_float(1750) * Global_262145.f_2952), 0);
					break;
				
				case 38:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, round(to_float(7300) * Global_262145.f_2953), 3);
					break;
				
				case 39:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, round(to_float(3250) * Global_262145.f_2954), 2);
					break;
				
				case 40:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, round(to_float(1000) * Global_262145.f_2955), 0);
					break;
				
				case 67:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, round(to_float(5000) * Global_262145.f_2956), 1);
					break;
				
				case 41:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, round(to_float(7500) * Global_262145.f_2957), 2);
					break;
				
				case 68:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, round(to_float(5100) * Global_262145.f_2958), 1);
					break;
				
				case 42:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, round(to_float(5050) * Global_262145.f_2959), 0);
					break;
				
				case 43:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, round(to_float(2450) * Global_262145.f_2960), 2);
					break;
				
				case 44:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, round(to_float(4950) * Global_262145.f_2961), 0);
					break;
				
				case 45:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, round(to_float(5100) * Global_262145.f_2962), 0);
					break;
				
				case 46:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, round(to_float(12250) * Global_262145.f_2963), 0);
					break;
				
				case 47:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, round(to_float(1150) * Global_262145.f_2964), 3);
					break;
				
				case 48:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, round(to_float(7500) * Global_262145.f_2965), 3);
					break;
				
				case 49:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, round(to_float(7600) * Global_262145.f_2966), 3);
					break;
				
				case 50:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, round(to_float(2600) * Global_262145.f_2967), 2);
					break;
				
				case 51:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, round(to_float(2500) * Global_262145.f_2968), 3);
					break;
				
				case 52:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, round(to_float(7450) * Global_262145.f_2969), 3);
					break;
				
				case 53:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, round(to_float(7500) * Global_262145.f_2970), 0);
					break;
				
				case 69:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, round(to_float(10000) * Global_262145.f_2971), 1);
					break;
				
				case 70:
					func_155(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, round(to_float(2500) * Global_262145.f_2972), 2);
					break;
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 86:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 90:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 91:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 124:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 125:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, round(to_float(100) * Global_262145.f_2973), 0);
						break;
					
					case 88:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, round(to_float(100) * Global_262145.f_2974), 0);
						break;
					
					case 89:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, round(to_float(100) * Global_262145.f_2975), 0);
						break;
					
					case 93:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_155(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round(to_float(5000) * Global_262145.f_2922), 0);
						break;
					
					case 14:
						func_155(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round(to_float(10000) * Global_262145.f_2923), 0);
						break;
					
					case 15:
						func_155(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round(to_float(10000) * Global_262145.f_2924), 2);
						break;
					
					case 16:
						func_155(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round(to_float(5000) * Global_262145.f_2925), 0);
						break;
					
					case 71:
						func_155(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2, round(to_float(10000) * Global_262145.f_2925), 0);
						break;
					
					case 72:
						func_155(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2, round(to_float(10000) * Global_262145.f_2925), 0);
						break;
				}
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 92:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, round(to_float(100) * Global_262145.f_2973), 0);
						break;
					
					case 88:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, round(to_float(100) * Global_262145.f_2974), 0);
						break;
					
					case 89:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, round(to_float(100) * Global_262145.f_2975), 0);
						break;
					
					case 93:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 118:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 119:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 120:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 121:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 122:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_155(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_155(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round(to_float(5000) * Global_262145.f_2922), 0);
						break;
					
					case 14:
						func_155(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round(to_float(5000) * Global_262145.f_2923), 0);
						break;
					
					case 15:
						func_155(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round(to_float(10000) * Global_262145.f_2924), 2);
						break;
					
					case 16:
						func_155(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round(to_float(10000) * Global_262145.f_2925), 0);
						break;
					}
			}
			break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129)
	{
		func_149(sParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22)
	{
		*sParam0.f_7 *= 2;
	}
	return *sParam0.f_11 != -1;
}

void func_149(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	
	iVar0 = iParam2 - iParam3;
	iVar1 = _0x278F76C3B0A8F109(iParam1);
	if (iVar1 > 0 && iVar0 < iVar1)
	{
		if (_0xFF56381874F82086(iParam1, iVar0, &Var2))
		{
			if (!_is_dlc_data_empty(Var2))
			{
				*sParam0.f_11 = iParam2;
				MemCopy(sParam0, {Var2.f_7}, 4);
				*sParam0.f_5 = Var2.f_3;
				*sParam0.f_4 = Var2.f_2;
				*sParam0.f_8 = Var2.f_6;
				*sParam0.f_6 = iParam1;
				*sParam0.f_7 = Var2.f_4;
				*sParam0.f_9 = iParam2 / 32;
				*sParam0.f_10 = iParam2 % 32;
				*sParam0.f_12 = Var2.f_5;
			}
		}
	}
}

bool func_150()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (is_bit_set(Global_25, 5))
	{
		if (is_bit_set(Global_25, true) || is_bit_set(Global_25, 3))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (is_bit_set(iVar0, 5))
		{
			if (is_bit_set(iVar0, true) || is_bit_set(iVar0, 3))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (stat_slot_is_loaded(0))
	{
		if (Global_138275.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (stat_get_int(iVar2, &iVar1, -1))
			{
				if (is_bit_set(iVar1, 5))
				{
					return true;
				}
			}
		}
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		iVar3 = get_profile_setting(866);
		if (is_bit_set(iVar3, true) || is_bit_set(iVar3, 3))
		{
			return true;
		}
	}
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x91B87C55093DE351())
			{
				stat_get_int(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				set_bit(&iVar4, true);
				set_bit(&iVar4, 3);
				set_bit(&iVar4, 5);
				set_bit(&Global_25, true);
				set_bit(&Global_25, 3);
				set_bit(&Global_25, 5);
				stat_set_int(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar4 = get_profile_setting(866);
					set_bit(&iVar4, true);
					set_bit(&iVar4, 3);
					_0xDAC073C7901F9E15(iVar4);
				}
				return true;
			}
		}
	}
	return false;
}

bool func_151()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (is_bit_set(Global_25, 6))
	{
		if (is_bit_set(Global_25, 2) || is_bit_set(Global_25, 4))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (is_bit_set(iVar0, 6))
		{
			if (is_bit_set(iVar0, 2) || is_bit_set(iVar0, 4))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (stat_slot_is_loaded(0))
	{
		if (Global_138275.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (stat_get_int(iVar2, &iVar1, -1))
			{
				if (is_bit_set(iVar1, 8))
				{
					return true;
				}
			}
		}
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		iVar3 = get_profile_setting(866);
		if (is_bit_set(iVar3, 2) || is_bit_set(iVar3, 4))
		{
			return true;
		}
	}
	return false;
}

bool func_152()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x593570C289A77688())
			{
				stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				set_bit(&iVar0, 2);
				set_bit(&iVar0, 4);
				set_bit(&iVar0, 6);
				set_bit(&Global_25, 2);
				set_bit(&Global_25, 4);
				set_bit(&Global_25, 6);
				stat_set_int(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar0 = get_profile_setting(866);
					set_bit(&iVar0, false);
					_0xDAC073C7901F9E15(iVar0);
				}
				return true;
			}
		}
	}
	if (Global_138274 == 2)
	{
		return true;
	}
	else if (Global_138274 == 3)
	{
		return false;
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		if (is_bit_set(get_profile_setting(866), false))
		{
			return true;
		}
	}
	return false;
}

bool func_153()
{
	return true;
}

bool func_154()
{
	return true;
}

void func_155(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)
{
	char[32] cVar0;
	
	*sParam0.f_11 = iParam1;
	StringCopy(sParam0, sParam3, 16);
	*sParam0.f_4 = get_hash_key(sParam4);
	*sParam0.f_5 = get_hash_key(sParam5);
	*sParam0.f_8 = get_hash_key(sParam6);
	*sParam0.f_6 = iParam7;
	*sParam0.f_7 = iParam8;
	*sParam0.f_9 = iParam1 / 32;
	*sParam0.f_10 = iParam1 % 32;
	*sParam0.f_12 = iParam9;
	if (does_entity_exist(iParam2) && !is_ped_injured(iParam2))
	{
		if ((*sParam0.f_6 == 0 || *sParam0.f_6 == 1) || *sParam0.f_6 == 2)
		{
		}
		else if (*sParam0.f_6 == 3 || *sParam0.f_6 == 4)
		{
			StringCopy(&cVar0, "", 32);
			if (((((*sParam0.f_11 == 13 || *sParam0.f_11 == 14) || *sParam0.f_11 == 15) || *sParam0.f_11 == 16) || *sParam0.f_11 == 71) || *sParam0.f_11 == 72)
			{
				StringConCat(&cVar0, "FM_", 32);
				StringConCat(&cVar0, "CREW_", 32);
				if (get_entity_model(iParam2) == joaat("mp_m_freemode_01"))
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			else if (are_strings_equal(sParam6, "torsoDecal") || are_strings_equal(sParam6, "hairOverlay"))
			{
				StringCopy(&cVar0, sParam5, 32);
			}
			else
			{
				if (((((((((((((((((((*sParam0.f_11 == 0 || *sParam0.f_11 == 1) || *sParam0.f_11 == 2) || *sParam0.f_11 == 4) || *sParam0.f_11 == 3) || *sParam0.f_11 == 54) || *sParam0.f_11 == 5) || *sParam0.f_11 == 6) || *sParam0.f_11 == 55) || *sParam0.f_11 == 7) || *sParam0.f_11 == 8) || *sParam0.f_11 == 9) || *sParam0.f_11 == 10) || *sParam0.f_11 == 11) || *sParam0.f_11 == 56) || *sParam0.f_11 == 12) || *sParam0.f_11 == 57) || *sParam0.f_11 == 58) || *sParam0.f_11 == 59) || *sParam0.f_11 == 60)
				{
					StringConCat(&cVar0, "FM_Tat_Award_", 32);
				}
				else
				{
					StringConCat(&cVar0, "FM_Tat_", 32);
				}
				if (get_entity_model(iParam2) == joaat("mp_m_freemode_01") || *sParam0.f_11 == 20)
				{
					StringConCat(&cVar0, "M_", 32);
				}
				else
				{
					StringConCat(&cVar0, "F_", 32);
				}
				StringConCat(&cVar0, sParam5, 32);
			}
			*sParam0.f_5 = get_hash_key(&cVar0);
			if (_get_tattoo_zone(*sParam0.f_4, *sParam0.f_5) == 7)
			{
				*sParam0.f_11 = -1;
			}
		}
	}
}

int func_156(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_158(iParam0, iParam1);
	iVar1 = func_157(iParam0);
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return false;
	}
	return is_bit_set(iVar0, iVar1);
}

int func_157(int iParam0)
{
	return iParam0 % 32;
}

var func_158(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_258(func_159(iParam0), iParam1, 0);
	return uVar0;
}

int func_159(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = func_162(iVar0);
	if ((func_161() == 0 || func_160() == 0) || (func_161() == 999 && func_160() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1041;
				break;
			
			case 1:
				return 1042;
				break;
			
			case 2:
				return 1043;
				break;
			
			case 3:
				return 1044;
				break;
			
			case 4:
				return 1045;
				break;
			
			case 5:
				return 1046;
				break;
			
			case 6:
				return 1480;
				break;
			
			case 7:
				return 1481;
				break;
			
			case 8:
				return 1482;
				break;
			
			case 9:
				return 1483;
				break;
			
			case 10:
				return 1939;
				break;
			
			case 11:
				return 1940;
				break;
			
			case 12:
				return 1941;
				break;
			
			case 13:
				return 2401;
				break;
			
			case 14:
				return 2421;
				break;
			
			case 15:
				return 2424;
				break;
			
			case 16:
				return 2427;
				break;
			
			case 17:
				return 2590;
				break;
			
			case 18:
				return 2593;
				break;
			
			case 19:
				return 2596;
				break;
			}
	}
	return 3949;
}

var func_160()
{
	return Global_25121;
}

var func_161()
{
	return Global_25120;
}

int func_162(int iParam0)
{
	return iParam0 / 32;
}

bool func_163(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!is_ped_injured(iParam0))
	{
		if (get_entity_model(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = get_ped_drawable_variation(iParam0, 11);
			iVar2 = func_258(1749, -1, 0);
			if (iVar0 > 15)
			{
				iVar3 = func_199(iParam0, 11, -1);
				if (iVar3 >= 256)
				{
					iVar4 = func_188(joaat("mp_f_freemode_01"), iVar3, 11, 4);
					if ((_0x341DE7ED1D2A1BFD(iVar4, 1113995558, 0) || _0x341DE7ED1D2A1BFD(iVar4, -1467682989, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 362493804, 0))
					{
						if (iVar2 == 671171671)
						{
							return true;
						}
					}
				}
			}
		}
		else if (get_entity_model(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = get_ped_drawable_variation(iParam0, 11);
			iVar1 = get_ped_texture_variation(iParam0, 11);
			iVar2 = func_258(1749, -1, 0);
			if (iVar0 == 3)
			{
				if (iVar1 == 14)
				{
					return true;
				}
			}
			else if (iVar0 > 15)
			{
				iVar5 = func_199(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = func_188(joaat("mp_f_freemode_01"), iVar5, 11, 4);
					if ((_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) || _0x341DE7ED1D2A1BFD(iVar6, -1467682989, 0)) || _0x341DE7ED1D2A1BFD(iVar6, 362493804, 0))
					{
						if (iVar2 == 1911627074)
						{
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_164(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1587523[player_id() /*444*/].f_88.f_28;
	if (iVar0 != -1 && iVar0 < 4)
	{
		if (func_165(iVar0) != -1 && func_165(iVar0) != 0)
		{
			return true;
		}
	}
	if (!is_ped_injured(iParam0))
	{
		if (get_entity_model(iParam0) == joaat("mp_m_freemode_01"))
		{
			if (get_ped_drawable_variation(iParam0, 11) == 15)
			{
				return true;
			}
		}
	}
	return false;
}

int func_165(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return -1;
	}
	return Global_2435528.f_5734[iParam0];
}

bool func_166(int iParam0)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (!is_ped_injured(iParam0))
	{
		if (get_entity_model(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = get_ped_drawable_variation(iParam0, 11);
			iVar1 = get_ped_texture_variation(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return true;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
							return true;
							break;
						
						case 1:
						case 7:
						case 12:
							iVar2 = func_168(joaat("mp_f_freemode_01"), 11, func_199(iParam0, 11, -1), 0);
							if (((iVar1 == 1 && iVar2 == 88) || (iVar1 == 7 && iVar2 == 89)) || (iVar1 == 12 && iVar2 == 87))
							{
								return true;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 9:
							return true;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar3 = func_199(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = func_188(joaat("mp_m_freemode_01"), iVar3, 11, 3);
							if ((_0x341DE7ED1D2A1BFD(iVar4, 1113995558, 0) || _0x341DE7ED1D2A1BFD(iVar4, -1467682989, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 362493804, 0))
							{
								return true;
							}
						}
					}
					break;
			}
			iVar0 = get_ped_drawable_variation(iParam0, 8);
			iVar1 = get_ped_texture_variation(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return true;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return true;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return true;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return true;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar5 = func_199(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = func_188(joaat("mp_m_freemode_01"), iVar5, 8, 3);
							if ((_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) || _0x341DE7ED1D2A1BFD(iVar6, -1467682989, 0)) || _0x341DE7ED1D2A1BFD(iVar6, 362493804, 0))
							{
								return true;
							}
						}
					}
					break;
			}
		}
		else if (get_entity_model(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = get_ped_drawable_variation(iParam0, 11);
			iVar1 = get_ped_texture_variation(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return true;
							break;
						
						case 7:
						case 4:
						case 9:
							iVar7 = func_168(joaat("mp_f_freemode_01"), 11, func_199(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar7 == 88) || (iVar1 == 4 && iVar7 == 89)) || (iVar1 == 9 && iVar7 == 87))
							{
								return true;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return true;
							break;
					}
					break;
				
				case 3:
					switch (iVar1)
					{
						case 14:
							return true;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return true;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_199(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = func_188(joaat("mp_f_freemode_01"), iVar8, 11, 4);
							if ((_0x341DE7ED1D2A1BFD(iVar9, 1113995558, 0) || _0x341DE7ED1D2A1BFD(iVar9, -1467682989, 0)) || _0x341DE7ED1D2A1BFD(iVar9, 362493804, 0))
							{
								return true;
							}
						}
					}
					break;
			}
			iVar0 = get_ped_drawable_variation(iParam0, 8);
			iVar1 = get_ped_texture_variation(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
							return true;
							break;
						
						case 7:
						case 4:
						case 9:
							iVar10 = func_168(joaat("mp_f_freemode_01"), 11, func_199(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar10 == 88) || (iVar1 == 4 && iVar10 == 89)) || (iVar1 == 9 && iVar10 == 87))
							{
								return true;
							}
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 1:
						case 2:
							return true;
							break;
						
						case 7:
						case 4:
						case 9:
							iVar11 = func_168(joaat("mp_f_freemode_01"), 11, func_199(iParam0, 11, -1), 0);
							if (((iVar1 == 7 && iVar11 == 88) || (iVar1 == 4 && iVar11 == 89)) || (iVar1 == 9 && iVar11 == 87))
							{
								return true;
							}
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return true;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return true;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return true;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar12 = func_199(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = func_188(joaat("mp_f_freemode_01"), iVar12, 8, 4);
							if ((_0x341DE7ED1D2A1BFD(iVar13, 1113995558, 0) || _0x341DE7ED1D2A1BFD(iVar13, -1467682989, 0)) || _0x341DE7ED1D2A1BFD(iVar13, 362493804, 0))
							{
								return true;
							}
						}
					}
					break;
				}
		}
		if (func_167(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_167(int iParam0)
{
	struct<5> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	
	iVar17 = get_entity_model(iParam0) == joaat("mp_m_freemode_01");
	iVar18 = get_ped_drawable_variation(iParam0, 11);
	iVar19 = get_ped_texture_variation(iParam0, 11);
	if (iVar17)
	{
		get_shop_ped_component(103980309, &Var0);
	}
	else
	{
		get_shop_ped_component(-31075674, &Var0);
	}
	if (iVar18 == Var0.f_3 && iVar19 == Var0.f_4)
	{
		return true;
	}
	return false;
}

int func_168(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	int iVar23;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 23)
			{
				if (func_172(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				if (func_172(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 28)
			{
				if (func_172(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 41)
			{
				return 86;
			}
			else if (iParam2 >= 237)
			{
				iVar0 = func_188(iParam0, iParam2, 11, 3);
				if (iVar0 != -1)
				{
					if (_0x341DE7ED1D2A1BFD(iVar0, 1113995558, 0) || _0x341DE7ED1D2A1BFD(iVar0, 362493804, 0))
					{
						iVar1 = _get_num_forced_components(iVar0);
						iVar2 = 0;
						while (iVar2 < iVar1)
						{
							get_forced_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
							if (iVar5 == 10)
							{
								if (iVar3 != 0 && iVar3 != 1849449579)
								{
									return func_169(iVar3, 3);
								}
								else
								{
									return uVar4;
								}
							}
							iVar2++;
						}
					}
					else if (_0x341DE7ED1D2A1BFD(iVar0, -1467682989, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_258(1749, -1, 0);
						}
						return func_169(iParam3, 3);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 23)
			{
				if (func_172(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 17)
			{
				if (func_172(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 28)
			{
				if (func_172(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 33)
			{
				return 73;
			}
			else if (iParam2 == 35)
			{
				return 74;
			}
			else if (iParam2 == 37)
			{
				return 75;
			}
			else if (iParam2 == 39)
			{
				return 76;
			}
			else if (iParam2 == 36)
			{
				return 77;
			}
			else if (iParam2 == 40)
			{
				return 78;
			}
			else if (iParam2 == 43)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 227)
			{
				return 80;
			}
			else if (iParam2 == 229)
			{
				return 81;
			}
			else if (iParam2 == 230)
			{
				return 82;
			}
			else if (iParam2 == 232)
			{
				return 83;
			}
			else if (iParam2 == 228)
			{
				return 84;
			}
			else if (iParam2 == 238)
			{
				return 85;
			}
			else if (iParam2 == 231)
			{
				if (func_172(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 225)
			{
				if (func_172(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 236)
			{
				if (func_172(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 >= 241)
			{
				iVar6 = func_188(iParam0, iParam2, 8, 3);
				if (iVar6 != -1)
				{
					if (_0x341DE7ED1D2A1BFD(iVar6, 1113995558, 0) || _0x341DE7ED1D2A1BFD(iVar6, 362493804, 0))
					{
						iVar7 = _get_num_forced_components(iVar6);
						iVar8 = 0;
						while (iVar8 < iVar7)
						{
							get_forced_component(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
							if (iVar11 == 10)
							{
								if (iVar9 != 0 && iVar9 != 1849449579)
								{
									return func_169(iVar9, 3);
								}
								else
								{
									return uVar10;
								}
							}
							iVar8++;
						}
					}
					else if (_0x341DE7ED1D2A1BFD(iVar6, -1467682989, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_258(1749, -1, 0);
						}
						return func_169(iParam3, 3);
					}
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_172(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				if (func_172(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 9)
			{
				if (func_172(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 32)
			{
				return 78;
			}
			else if (iParam2 == 33)
			{
				return 79;
			}
			else if (iParam2 == 34)
			{
				return 80;
			}
			else if (iParam2 == 35)
			{
				return 81;
			}
			else if (iParam2 == 36)
			{
				return 82;
			}
			else if (iParam2 == 62)
			{
				return 76;
			}
			else if (iParam2 == 63)
			{
				return 83;
			}
			else if (iParam2 == 186)
			{
				return 84;
			}
			else if (iParam2 == 187)
			{
				return 85;
			}
			else if (iParam2 == 191)
			{
				return 74;
			}
			else if (iParam2 >= 256)
			{
				iVar12 = func_188(iParam0, iParam2, 11, 4);
				if (iVar12 != -1)
				{
					if (_0x341DE7ED1D2A1BFD(iVar12, 1113995558, 0) || _0x341DE7ED1D2A1BFD(iVar12, 362493804, 0))
					{
						iVar13 = _get_num_forced_components(iVar12);
						iVar14 = 0;
						while (iVar14 < iVar13)
						{
							get_forced_component(iVar12, iVar14, &iVar15, &uVar16, &iVar17);
							if (iVar17 == 10)
							{
								if (iVar15 != 0 && iVar15 != 1849449579)
								{
									return func_169(iVar15, 4);
								}
								else
								{
									return uVar16;
								}
							}
							iVar14++;
						}
					}
					else if (_0x341DE7ED1D2A1BFD(iVar12, -1467682989, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_258(1749, -1, 0);
						}
						return func_169(iParam3, 4);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_172(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 7)
			{
				if (func_172(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 9)
			{
				if (func_172(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 17)
			{
				return 75;
			}
			else if (iParam2 == 18)
			{
				return 77;
			}
			else if (iParam2 == 20)
			{
				if (func_172(89, -1))
				{
					return 89;
				}
			}
			else if (iParam2 == 23)
			{
				if (func_172(88, -1))
				{
					return 88;
				}
			}
			else if (iParam2 == 25)
			{
				if (func_172(87, -1))
				{
					return 87;
				}
			}
			else if (iParam2 == 81)
			{
				return 84;
			}
			else if (iParam2 == 82)
			{
				return 85;
			}
			else if (iParam2 == 86)
			{
				return 74;
			}
			else if (iParam2 >= 136)
			{
				iVar18 = func_188(iParam0, iParam2, 8, 4);
				if (iVar18 != -1)
				{
					if (_0x341DE7ED1D2A1BFD(iVar18, 1113995558, 0) || _0x341DE7ED1D2A1BFD(iVar18, 362493804, 0))
					{
						iVar19 = _get_num_forced_components(iVar18);
						iVar20 = 0;
						while (iVar20 < iVar19)
						{
							get_forced_component(iVar18, iVar20, &iVar21, &uVar22, &iVar23);
							if (iVar23 == 10)
							{
								if (iVar21 != 0 && iVar21 != 1849449579)
								{
									return func_169(iVar21, 4);
								}
								else
								{
									return uVar22;
								}
							}
							iVar20++;
						}
					}
					else if (_0x341DE7ED1D2A1BFD(iVar18, -1467682989, 0))
					{
						if (iParam3 == 0)
						{
							iParam3 = func_258(1749, -1, 0);
						}
						return func_169(iParam3, 4);
					}
				}
			}
		}
	}
	return -1;
}

int func_169(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	
	if (iParam1 == 3)
	{
		if (func_171(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	else if (iParam1 == 4)
	{
		if (func_170(iParam0, &uVar0))
		{
			return uVar0;
		}
	}
	iVar2 = _0x278F76C3B0A8F109(iParam1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		if (_0xFF56381874F82086(iParam1, iVar1, &Var3))
		{
			if (iParam0 == Var3.f_3)
			{
				return 129 + iVar1;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_170(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 497719213:
			iVar0 = 0;
			break;
		
		case -1575660783:
			iVar0 = 1;
			break;
		
		case -720631087:
			iVar0 = 2;
			break;
		
		case 2143620721:
			iVar0 = 3;
			break;
		
		case 2049754822:
			iVar0 = 4;
			break;
		
		case -1293749076:
			iVar0 = 5;
			break;
		
		case -1571403599:
			iVar0 = 6;
			break;
		
		case -711123906:
			iVar0 = 7;
			break;
		
		case 152801037:
			iVar0 = 8;
			break;
		
		case -1324018585:
			iVar0 = 9;
			break;
		
		case -481068829:
			iVar0 = 10;
			break;
		
		case -1486741196:
			iVar0 = 11;
			break;
		
		case 939412564:
			iVar0 = 12;
			break;
		
		case 1187637739:
			iVar0 = 13;
			break;
		
		case -1092669445:
			iVar0 = 14;
			break;
		
		case 1659530389:
			iVar0 = 15;
			break;
		
		case 996857777:
			iVar0 = 16;
			break;
		
		case 817476859:
			iVar0 = 17;
			break;
		
		case -17051268:
			iVar0 = 18;
			break;
		
		case 1293774274:
			iVar0 = 19;
			break;
		
		case 567121699:
			iVar0 = 20;
			break;
		
		case -1179302160:
			iVar0 = 21;
			break;
		
		case -949165473:
			iVar0 = 22;
			break;
		
		case 354975189:
			iVar0 = 23;
			break;
		
		case -489121482:
			iVar0 = 24;
			break;
		
		case -1636954018:
			iVar0 = 25;
			break;
		
		case -1277740240:
			iVar0 = 26;
			break;
		
		case -1047439708:
			iVar0 = 27;
			break;
		
		case -814026121:
			iVar0 = 28;
			break;
		
		case 1732157956:
			iVar0 = 29;
			break;
		
		case 1024282018:
			iVar0 = 30;
			break;
		
		case -2099685063:
			iVar0 = 31;
			break;
		
		case 1483932781:
			iVar0 = 32;
			break;
		
		case 1406925627:
			iVar0 = 33;
			break;
		
		case 698590923:
			iVar0 = 34;
			break;
		
		case 1869001296:
			iVar0 = 35;
			break;
		
		case 1169907450:
			iVar0 = 36;
			break;
		
		case 717727185:
			iVar0 = 37;
			break;
		
		case 1058197095:
			iVar0 = 38;
			break;
		
		case 434115743:
			iVar0 = 39;
			break;
		
		case 665432114:
			iVar0 = 40;
			break;
		
		case 1198780358:
			iVar0 = 41;
			break;
		
		case -2128873857:
			iVar0 = 42;
			break;
		
		case -148547780:
			iVar0 = 43;
			break;
		
		case 1819096318:
			iVar0 = 44;
			break;
		
		case 1051122042:
			iVar0 = 45;
			break;
		
		case -1350495965:
			iVar0 = 46;
			break;
		
		case -150859291:
			iVar0 = 47;
			break;
		
		case -1186193045:
			iVar0 = 48;
			break;
		
		case -1206837515:
			iVar0 = 49;
			break;
		
		case -1513653662:
			iVar0 = 50;
			break;
		
		case -543948331:
			iVar0 = 51;
			break;
		
		case -175559233:
			iVar0 = 52;
			break;
		
		case -131530830:
			iVar0 = 53;
			break;
		
		case -1816086813:
			iVar0 = 54;
			break;
		
		case -2113006722:
			iVar0 = 55;
			break;
		
		case -1101886458:
			iVar0 = 56;
			break;
		
		case -1398740829:
			iVar0 = 57;
			break;
		
		case 1939258347:
			iVar0 = 58;
			break;
		
		case -1004151544:
			iVar0 = 59;
			break;
		
		case -822873436:
			iVar0 = 60;
			break;
		
		case -1445222284:
			iVar0 = 61;
			break;
		
		case -63910623:
			iVar0 = 62;
			break;
		
		case 101834979:
			iVar0 = 63;
			break;
		
		case -673512330:
			iVar0 = 64;
			break;
		
		case -423845319:
			iVar0 = 65;
			break;
		
		case 963561372:
			iVar0 = 66;
			break;
		
		case 1384839636:
			iVar0 = 67;
			break;
		
		case -1712879828:
			iVar0 = 68;
			break;
		
		case -951688727:
			iVar0 = 69;
			break;
		
		case -1132639145:
			iVar0 = 70;
			break;
		
		case -513632731:
			iVar0 = 71;
			break;
		
		case 263680718:
			iVar0 = 72;
			break;
		
		case 36296627:
			iVar0 = 73;
			break;
		
		case 800240324:
			iVar0 = 74;
			break;
		
		case 614243480:
			iVar0 = 75;
			break;
		
		case 1408138043:
			iVar0 = 76;
			break;
		
		case 957564293:
			iVar0 = 77;
			break;
		
		case -1614279399:
			iVar0 = 78;
			break;
		
		case -1451286393:
			iVar0 = 79;
			break;
		
		case -1758069771:
			iVar0 = 80;
			break;
		
		case -1225475222:
			iVar0 = 81;
			break;
		
		case -1992892433:
			iVar0 = 82;
			break;
		
		case -1838157215:
			iVar0 = 83;
			break;
		
		case 1688803028:
			iVar0 = 84;
			break;
		
		case 1844259164:
			iVar0 = 85;
			break;
		
		case 1070943545:
			iVar0 = 86;
			break;
		
		case 1234460855:
			iVar0 = 87;
			break;
		
		case -753798460:
			iVar0 = 88;
			break;
		
		case -1453351072:
			iVar0 = 89;
			break;
		
		case -1308053326:
			iVar0 = 90;
			break;
		
		case -2083859401:
			iVar0 = 91;
			break;
		
		case 1586137527:
			iVar0 = 92;
			break;
		
		case 1884564810:
			iVar0 = 93;
			break;
		
		case 1092964089:
			iVar0 = 94;
			break;
		
		case 1264280421:
			iVar0 = 95;
			break;
		
		case 496601058:
			iVar0 = 96;
			break;
		
		case 861352797:
			iVar0 = 97;
			break;
		
		case 1418328330:
			iVar0 = 98;
			break;
		
		case 1784554566:
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case 2081736627:
			iVar0 = 100;
			break;
		
		case -1897271971:
			iVar0 = 101;
			break;
		
		case -1666742056:
			iVar0 = 102;
			break;
		
		case -1282165072:
			iVar0 = 103;
			break;
		
		case -1052880379:
			iVar0 = 104;
			break;
		
		case -745474390:
			iVar0 = 105;
			break;
		
		case -515796465:
			iVar0 = 106;
			break;
		
		case -811206225:
			iVar0 = 107;
			break;
		
		case -1586815686:
			iVar0 = 108;
			break;
		
		case -1423429452:
			iVar0 = 109;
			break;
		
		case -1697869815:
			iVar0 = 110;
			break;
		
		case -1470846183:
			iVar0 = 111;
			break;
		
		case 1093884035:
			iVar0 = 112;
			break;
		
		case 861256904:
			iVar0 = 113;
			break;
		
		case 603201029:
			iVar0 = 114;
			break;
		
		case 1991426949:
			iVar0 = 115;
			break;
		
		case -135838228:
			iVar0 = 116;
			break;
		
		case 121616864:
			iVar0 = 117;
			break;
		
		case -834517002:
			iVar0 = 118;
			break;
		
		case -403932342:
			iVar0 = 119;
			break;
		
		case -1179738417:
			iVar0 = 120;
			break;
		
		case -1022250603:
			iVar0 = 121;
			break;
		
		case 558694786:
			iVar0 = 122;
			break;
		
		case 569279177:
			iVar0 = 123;
			break;
		
		case 544309199:
			iVar0 = 124;
			break;
		
		case 1190448341:
			iVar0 = 125;
			break;
		
		case 885139568:
			iVar0 = 126;
			break;
		
		case -1845683606:
			iVar0 = 127;
			break;
		
		case -1555317497:
			iVar0 = 128;
			break;
		
		case 1704673699:
			iVar0 = 129;
			break;
		
		case 1993401358:
			iVar0 = 130;
			break;
		
		case 1227065524:
			iVar0 = 131;
			break;
		
		case -533227790:
			iVar0 = 132;
			break;
		
		case 309459814:
			iVar0 = 133;
			break;
		
		case 77815753:
			iVar0 = 134;
			break;
		
		case -280939203:
			iVar0 = 135;
			break;
		
		case 1246882601:
			iVar0 = 136;
			break;
		
		case 314833986:
			iVar0 = 137;
			break;
		
		case -25635924:
			iVar0 = 138;
			break;
		
		case 351567983:
			iVar0 = 139;
			break;
		
		case -2027428652:
			iVar0 = 140;
			break;
		
		case 962677064:
			iVar0 = 141;
			break;
		
		case -105475497:
			iVar0 = 142;
			break;
		
		case 766835283:
			iVar0 = 143;
			break;
		
		case 471979821:
			iVar0 = 144;
			break;
		
		case 1122542778:
			iVar0 = 145;
			break;
		
		case 815530017:
			iVar0 = 146;
			break;
		
		case 1157900525:
			iVar0 = 147;
			break;
		
		case 859243859:
			iVar0 = 148;
			break;
		
		case 2032013608:
			iVar0 = 149;
			break;
		
		case 1471663700:
			iVar0 = 150;
			break;
		
		case -1679206722:
			iVar0 = 151;
			break;
		
		case -309397848:
			iVar0 = 152;
			break;
		
		case 534666054:
			iVar0 = 153;
			break;
		
		case -769376301:
			iVar0 = 154;
			break;
		
		case 1531057961:
			iVar0 = 155;
			break;
		
		case 1986678137:
			iVar0 = 156;
			break;
		
		case 2142789653:
			iVar0 = 157;
			break;
		
		case 7463306:
			iVar0 = 158;
			break;
		
		case 308053343:
			iVar0 = 159;
			break;
		
		case 753842819:
			iVar0 = 160;
			break;
		
		case 1052794406:
			iVar0 = 161;
			break;
		
		case -695726661:
			iVar0 = 162;
			break;
		
		case -1001821890:
			iVar0 = 163;
			break;
		
		case -1425459522:
			iVar0 = 164;
			break;
		
		case 1412653072:
			iVar0 = 165;
			break;
		
		case 1163510365:
			iVar0 = 166;
			break;
		
		case 933242602:
			iVar0 = 167;
			break;
		
		case -1347021116:
			iVar0 = 168;
			break;
		
		case 1297354841:
			iVar0 = 169;
			break;
		
		case -839806574:
			iVar0 = 170;
			break;
		
		case -542100209:
			iVar0 = 171;
			break;
		
		case 1472218269:
			iVar0 = 172;
			break;
		
		case 1783196079:
			iVar0 = 173;
			break;
		
		case 1007062314:
			iVar0 = 174;
			break;
		
		case -870732522:
			iVar0 = 175;
			break;
		
		case 547542627:
			iVar0 = 176;
			break;
		
		case 863894553:
			iVar0 = 177;
			break;
		
		case -2099242332:
			iVar0 = 178;
			break;
		
		case -1860028632:
			iVar0 = 179;
			break;
		
		case -560967165:
			iVar0 = 180;
			break;
		
		case -59437904:
			iVar0 = 181;
			break;
		
		case 757067269:
			iVar0 = 182;
			break;
		
		case 455625238:
			iVar0 = 183;
			break;
		
		case -1750514914:
			iVar0 = 184;
			break;
		
		case -983982466:
			iVar0 = 185;
			break;
		
		case -232228837:
			iVar0 = 186;
			break;
		
		case 1558269323:
			iVar0 = 187;
			break;
		
		case 2070579873:
			iVar0 = 188;
			break;
		
		case -1203181916:
			iVar0 = 189;
			break;
		
		case -2112587204:
			iVar0 = 190;
			break;
		
		case 1942412705:
			iVar0 = 191;
			break;
		
		case -1846437386:
			iVar0 = 192;
			break;
		
		case 61799795:
			iVar0 = 193;
			break;
		
		case -1388490611:
			iVar0 = 194;
			break;
		
		case -1627212776:
			iVar0 = 195;
			break;
		
		case 1525246127:
			iVar0 = 196;
			break;
		
		case -11341151:
			iVar0 = 197;
			break;
		
		case 516055815:
			iVar0 = 198;
			break;
		
		case -1034642040:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1022637316:
			iVar0 = 200;
			break;
		
		case -1677156418:
			iVar0 = 201;
			break;
		
		case -1130213300:
			iVar0 = 202;
			break;
		
		case 104062694:
			iVar0 = 203;
			break;
		
		case 869579299:
			iVar0 = 204;
			break;
		
		case 1201332655:
			iVar0 = 205;
			break;
		
		case 1028967715:
			iVar0 = 206;
			break;
		
		case -1651634800:
			iVar0 = 207;
			break;
		
		case -892278763:
			iVar0 = 208;
			break;
		
		case -1032005779:
			iVar0 = 209;
			break;
		
		case -255675400:
			iVar0 = 210;
			break;
		
		case 1890137027:
			iVar0 = 211;
			break;
		
		case -406805808:
			iVar0 = 212;
			break;
		
		case -592540500:
			iVar0 = 213;
			break;
		
		case 205417419:
			iVar0 = 214;
			break;
		
		case -2127276619:
			iVar0 = 215;
			break;
		
		case -1362677538:
			iVar0 = 216;
			break;
		
		case -1549722990:
			iVar0 = 217;
			break;
		
		case 3495990:
			iVar0 = 218;
			break;
		
		case -285526590:
			iVar0 = 219;
			break;
		
		case 1907377338:
			iVar0 = 220;
			break;
		
		case 2136399879:
			iVar0 = 221;
			break;
		
		case 1568410532:
			iVar0 = 222;
			break;
		
		case 1068879892:
			iVar0 = 223;
			break;
		
		case -1592750929:
			iVar0 = 224;
			break;
		
		case 772896404:
			iVar0 = 225;
			break;
		
		case -1999229916:
			iVar0 = 226;
			break;
		
		case -744701520:
			iVar0 = 227;
			break;
		
		case -425039925:
			iVar0 = 228;
			break;
		
		case -798409911:
			iVar0 = 229;
			break;
		
		case 1379974898:
			iVar0 = 230;
			break;
		
		case -1681436154:
			iVar0 = 231;
			break;
		
		case -1486919370:
			iVar0 = 232;
			break;
		
		case 2014677667:
			iVar0 = 233;
			break;
		
		case 325697857:
			iVar0 = 234;
			break;
		
		case -1188819501:
			iVar0 = 235;
			break;
		
		case -1765193438:
			iVar0 = 236;
			break;
		
		case -1416269126:
			iVar0 = 237;
			break;
		
		case -2111365154:
			iVar0 = 238;
			break;
		
		case -1880573087:
			iVar0 = 239;
			break;
		
		case 1421296887:
			iVar0 = 240;
			break;
		
		case 1655562468:
			iVar0 = 241;
			break;
		
		case 946048080:
			iVar0 = 242;
			break;
		
		case 1188768063:
			iVar0 = 243;
			break;
		
		case 498456313:
			iVar0 = 244;
			break;
		
		case 323007907:
			iVar0 = 245;
			break;
		
		case -1325371100:
			iVar0 = 246;
			break;
		
		case -829313978:
			iVar0 = 247;
			break;
		
		case -530624543:
			iVar0 = 248;
			break;
		
		case -299046020:
			iVar0 = 249;
			break;
		
		case 1812260650:
			iVar0 = 250;
			break;
		
		case 2043511487:
			iVar0 = 251;
			break;
		
		case -1753235933:
			iVar0 = 252;
			break;
		
		case -1525589690:
			iVar0 = 253;
			break;
		
		case 31003408:
			iVar0 = 254;
			break;
		
		case -1864998224:
			iVar0 = 255;
			break;
		
		case -2140814897:
			iVar0 = 256;
			break;
		
		case 223468453:
			iVar0 = 257;
			break;
		
		case -83970305:
			iVar0 = 258;
			break;
		
		case -406843262:
			iVar0 = 259;
			break;
		
		case -954740942:
			iVar0 = 260;
			break;
		
		case -1675526854:
			iVar0 = 261;
			break;
		
		case 2111717556:
			iVar0 = 262;
			break;
		
		case -415395003:
			iVar0 = 263;
			break;
		
		case 427521984:
			iVar0 = 264;
			break;
		
		case 1570178485:
			iVar0 = 265;
			break;
		
		case -1619850916:
			iVar0 = 266;
			break;
		
		case -713067148:
			iVar0 = 267;
			break;
		
		case 946477614:
			iVar0 = 268;
			break;
		
		case -1423343701:
			iVar0 = 269;
			break;
		
		case 445931457:
			iVar0 = 270;
			break;
		
		case 678558588:
			iVar0 = 271;
			break;
		
		case -854631987:
			iVar0 = 272;
			break;
		
		case -1707871209:
			iVar0 = 273;
			break;
		
		case 1675446188:
			iVar0 = 274;
			break;
		
		case 1911627074:
			iVar0 = 275;
			break;
		
		case -607391498:
			iVar0 = 276;
			break;
		
		case -1544625218:
			iVar0 = 277;
			break;
		
		case 1185175875:
			iVar0 = 278;
			break;
		
		case 155591269:
			iVar0 = 279;
			break;
		
		case -1057958846:
			iVar0 = 280;
			break;
		
		case -1853795495:
			iVar0 = 281;
			break;
		
		case -1860485560:
			iVar0 = 282;
			break;
		
		case 499288642:
			iVar0 = 283;
			break;
		
		case -7887054:
			iVar0 = 284;
			break;
		
		case -1553041502:
			iVar0 = 285;
			break;
		
		case -1080591445:
			iVar0 = 286;
			break;
		
		case -741060436:
			iVar0 = 287;
			break;
		
		case 645634644:
			iVar0 = 288;
			break;
		
		case -1096728771:
			iVar0 = 289;
			break;
		
		case 503268386:
			iVar0 = 290;
			break;
		
		case 109804153:
			iVar0 = 291;
			break;
		
		case 1410910279:
			iVar0 = 292;
			break;
		
		case 1501700194:
			iVar0 = 293;
			break;
		
		case -1793199216:
			iVar0 = 294;
			break;
		
		case 1405944575:
			iVar0 = 295;
			break;
		
		case 1731382556:
			iVar0 = 296;
			break;
		
		case 1743809026:
			iVar0 = 297;
			break;
		
		case 1589237530:
			iVar0 = 298;
			break;
		
		case -1558441108:
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case 793815980:
			iVar0 = 303;
			break;
		
		case 87277824:
			iVar0 = 304;
			break;
		
		case 1305470790:
			iVar0 = 305;
			break;
		
		case 252924758:
			iVar0 = 306;
			break;
		
		case 1043745875:
			iVar0 = 307;
			break;
		
		case 24304530:
			iVar0 = 308;
			break;
		
		case 582246031:
			iVar0 = 309;
			break;
		
		case 1840225396:
			iVar0 = 310;
			break;
		
		case -47863515:
			iVar0 = 311;
			break;
		
		case 26968202:
			iVar0 = 312;
			break;
		
		case 1720638120:
			iVar0 = 313;
			break;
		
		case 1372737856:
			iVar0 = 314;
			break;
		
		case -675719916:
			iVar0 = 315;
			break;
		
		case -610888268:
			iVar0 = 316;
			break;
		
		case -129698248:
			iVar0 = 317;
			break;
		
		case 1060644905:
			iVar0 = 318;
			break;
		
		case 776078819:
			iVar0 = 319;
			break;
		
		case -1069464482:
			iVar0 = 320;
			break;
		
		case -1342875239:
			iVar0 = 321;
			break;
		
		case 1967892405:
			iVar0 = 322;
			break;
		
		case 642864781:
			iVar0 = 323;
			break;
		
		case 1270860039:
			iVar0 = 324;
			break;
		
		case -1290780406:
			iVar0 = 325;
			break;
		
		case 1127641545:
			iVar0 = 326;
			break;
		
		case -1221948530:
			iVar0 = 327;
			break;
		
		case 1954153055:
			iVar0 = 328;
			break;
		
		case 543727307:
			iVar0 = 329;
			break;
		
		case -1806626643:
			iVar0 = 330;
			break;
		
		case 1146362323:
			iVar0 = 331;
			break;
		
		case -1918158051:
			iVar0 = 332;
			break;
		
		case -1835082731:
			iVar0 = 333;
			break;
		
		case 1935907419:
			iVar0 = 334;
			break;
		
		case 961997868:
			iVar0 = 335;
			break;
		
		case -415246024:
			iVar0 = 336;
			break;
		
		case -2003529037:
			iVar0 = 337;
			break;
		
		case -1272951326:
			iVar0 = 338;
			break;
		
		case 837851491:
			iVar0 = 339;
			break;
		
		case -64649653:
			iVar0 = 340;
			break;
		
		case 1997623301:
			iVar0 = 341;
			break;
		
		case 1177835340:
			iVar0 = 342;
			break;
		
		case -1261787835:
			iVar0 = 343;
			break;
		
		case -965491494:
			iVar0 = 344;
			break;
		
		case 939374190:
			iVar0 = 345;
			break;
		
		case 149461503:
			iVar0 = 346;
			break;
		
		case -1117498985:
			iVar0 = 347;
			break;
		
		case 1184468662:
			iVar0 = 348;
			break;
		
		case -772488648:
			iVar0 = 349;
			break;
		
		case -1399171334:
			iVar0 = 350;
			break;
		
		case -963164512:
			iVar0 = 351;
			break;
		
		case -1284517669:
			iVar0 = 352;
			break;
		
		case 1613773443:
			iVar0 = 353;
			break;
		
		case 1963092516:
			iVar0 = 354;
			break;
		
		case -878642668:
			iVar0 = 355;
			break;
		
		case -1618544925:
			iVar0 = 356;
			break;
		
		case 1185417232:
			iVar0 = 357;
			break;
		
		case -1649044153:
			iVar0 = 358;
			break;
		
		case -1293956525:
			iVar0 = 359;
			break;
		
		case -84085370:
			iVar0 = 360;
			break;
		
		case -943861479:
			iVar0 = 361;
			break;
		
		case -1355455834:
			iVar0 = 362;
			break;
		
		case 711764191:
			iVar0 = 363;
			break;
		
		case 41616632:
			iVar0 = 364;
			break;
		
		case -2053984264:
			iVar0 = 365;
			break;
		
		case -522832741:
			iVar0 = 366;
			break;
		
		case 711940316:
			iVar0 = 367;
			break;
		
		case -1512107004:
			iVar0 = 368;
			break;
		
		case -273305505:
			iVar0 = 369;
			break;
		
		case -779122930:
			iVar0 = 370;
			break;
		
		case 565678099:
			iVar0 = 371;
			break;
		
		case 2130135469:
			iVar0 = 372;
			break;
		
		case 2142072717:
			iVar0 = 373;
			break;
		
		case -636638153:
			iVar0 = 374;
			break;
		
		case 289539239:
			iVar0 = 375;
			break;
		
		case -1040822561:
			iVar0 = 376;
			break;
		
		case 217486581:
			iVar0 = 377;
			break;
		
		case -2147244302:
			iVar0 = 378;
			break;
		
		case 830186237:
			iVar0 = 379;
			break;
		
		case -1902384566:
			iVar0 = 380;
			break;
		
		case 1471583453:
			iVar0 = 381;
			break;
		
		case 2007332931:
			iVar0 = 382;
			break;
		
		case 1104156493:
			iVar0 = 383;
			break;
		
		case 616400258:
			iVar0 = 384;
			break;
		
		case 511243162:
			iVar0 = 385;
			break;
		
		case -477451680:
			iVar0 = 386;
			break;
		
		case 743616295:
			iVar0 = 387;
			break;
		
		case 712215816:
			iVar0 = 388;
			break;
		
		case 1475570942:
			iVar0 = 389;
			break;
		
		case -1768978416:
			iVar0 = 390;
			break;
		
		case -2139711822:
			iVar0 = 391;
			break;
		
		case -1509236263:
			iVar0 = 392;
			break;
		
		case -1143383459:
			iVar0 = 393;
			break;
		
		case -1690206781:
			iVar0 = 394;
			break;
		
		case 1947095236:
			iVar0 = 395;
			break;
		
		case 300333876:
			iVar0 = 396;
			break;
		
		case 37732721:
			iVar0 = 397;
			break;
		
		case 959183706:
			iVar0 = 398;
			break;
		
		case -1542393224:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 874488242:
			iVar0 = 400;
			break;
		
		case 1389335000:
			iVar0 = 401;
			break;
		
		case -366075547:
			iVar0 = 402;
			break;
		
		case -1125431584:
			iVar0 = 403;
			break;
		
		case -2000068963:
			iVar0 = 404;
			break;
		
		case 1497445248:
			iVar0 = 405;
			break;
		
		case 1989766704:
			iVar0 = 406;
			break;
		
		case -2086401979:
			iVar0 = 407;
			break;
		
		case -1846467361:
			iVar0 = 408;
			break;
		
		case -1325458477:
			iVar0 = 409;
			break;
		
		case -566725051:
			iVar0 = 410;
			break;
		
		case -787850263:
			iVar0 = 411;
			break;
		
		case -1885021085:
			iVar0 = 412;
			break;
		
		case 979307144:
			iVar0 = 413;
			break;
		
		case -473732439:
			iVar0 = 414;
			break;
		
		case 2062186390:
			iVar0 = 415;
			break;
		
		case -60867780:
			iVar0 = 416;
			break;
		
		case 926967912:
			iVar0 = 417;
			break;
		
		case -1886278590:
			iVar0 = 418;
			break;
		
		case -1314959708:
			iVar0 = 419;
			break;
		
		case -1696774529:
			iVar0 = 420;
			break;
		
		case -356446484:
			iVar0 = 421;
			break;
		
		case 857810380:
			iVar0 = 422;
			break;
		
		case -629676646:
			iVar0 = 423;
			break;
		
		case -1879530481:
			iVar0 = 424;
			break;
		
		case -1265847311:
			iVar0 = 425;
			break;
		
		case 32094424:
			iVar0 = 426;
			break;
		
		case 1969286744:
			iVar0 = 427;
			break;
		
		case 560620683:
			iVar0 = 428;
			break;
		
		case -148312642:
			iVar0 = 429;
			break;
		
		case -578277428:
			iVar0 = 430;
			break;
		
		case -718909970:
			iVar0 = 431;
			break;
		
		case -859026859:
			iVar0 = 432;
			break;
		
		case -839897805:
			iVar0 = 433;
			break;
		
		case 1676439910:
			iVar0 = 434;
			break;
		
		case -294157184:
			iVar0 = 435;
			break;
		
		case -1222200221:
			iVar0 = 436;
			break;
		
		case 874532672:
			iVar0 = 437;
			break;
		
		case -135929055:
			iVar0 = 438;
			break;
		
		case 1654917353:
			iVar0 = 439;
			break;
		
		case -13131391:
			iVar0 = 440;
			break;
		
		case 154845196:
			iVar0 = 441;
			break;
		
		case -1147884322:
			iVar0 = 442;
			break;
		
		case 291693311:
			iVar0 = 443;
			break;
		
		case -1401933531:
			iVar0 = 444;
			break;
		
		case 1820267020:
			iVar0 = 445;
			break;
		
		case 2134488961:
			iVar0 = 446;
			break;
		
		case -1861952745:
			iVar0 = 447;
			break;
		
		case 994458405:
			iVar0 = 448;
			break;
		
		case -1931715008:
			iVar0 = 449;
			break;
		
		case 1308745884:
			iVar0 = 450;
			break;
		
		case -1322955084:
			iVar0 = 451;
			break;
		
		case -816658183:
			iVar0 = 452;
			break;
		
		case -988307698:
			iVar0 = 453;
			break;
		
		case -1341411308:
			iVar0 = 454;
			break;
		
		case 1865570599:
			iVar0 = 455;
			break;
		
		case -549458010:
			iVar0 = 456;
			break;
		
		case -1328545177:
			iVar0 = 457;
			break;
		
		case -1361353619:
			iVar0 = 458;
			break;
		
		case 1103253806:
			iVar0 = 459;
			break;
		
		case -24183456:
			iVar0 = 460;
			break;
		
		case 436214104:
			iVar0 = 461;
			break;
		
		case 2072615278:
			iVar0 = 462;
			break;
		
		case -1131891426:
			iVar0 = 463;
			break;
		
		case 1392085456:
			iVar0 = 464;
			break;
		
		case 2035895234:
			iVar0 = 465;
			break;
		
		case 368784798:
			iVar0 = 466;
			break;
		
		case 1398938833:
			iVar0 = 467;
			break;
		
		case 1250040566:
			iVar0 = 468;
			break;
		
		case 2133228190:
			iVar0 = 469;
			break;
		
		case 675551540:
			iVar0 = 470;
			break;
		
		case -1826137848:
			iVar0 = 471;
			break;
		
		case -144105601:
			iVar0 = 472;
			break;
		
		case -748983650:
			iVar0 = 473;
			break;
		
		case 630291027:
			iVar0 = 474;
			break;
		
		case 293950434:
			iVar0 = 475;
			break;
		
		case 1857352111:
			iVar0 = 476;
			break;
		
		case -777671131:
			iVar0 = 477;
			break;
		
		case 221602924:
			iVar0 = 478;
			break;
		
		case 2039295216:
			iVar0 = 479;
			break;
		
		case 1800147054:
			iVar0 = 480;
			break;
		
		case -2019505897:
			iVar0 = 481;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = 129 + iVar0;
		return true;
	}
	return false;
}

bool func_171(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case -1917324065:
			iVar0 = 0;
			break;
		
		case 1056297333:
			iVar0 = 1;
			break;
		
		case 494620709:
			iVar0 = 2;
			break;
		
		case 800453786:
			iVar0 = 3;
			break;
		
		case -1082736975:
			iVar0 = 4;
			break;
		
		case -754981437:
			iVar0 = 5;
			break;
		
		case -1801855538:
			iVar0 = 6;
			break;
		
		case 459313194:
			iVar0 = 7;
			break;
		
		case 2007087579:
			iVar0 = 8;
			break;
		
		case 1987172386:
			iVar0 = 9;
			break;
		
		case 1801787829:
			iVar0 = 10;
			break;
		
		case -221624488:
			iVar0 = 11;
			break;
		
		case 25158851:
			iVar0 = 12;
			break;
		
		case 472458130:
			iVar0 = 13;
			break;
		
		case 164352862:
			iVar0 = 14;
			break;
		
		case -904148779:
			iVar0 = 15;
			break;
		
		case -694439771:
			iVar0 = 16;
			break;
		
		case -1469590466:
			iVar0 = 17;
			break;
		
		case -1511207100:
			iVar0 = 18;
			break;
		
		case -1352670678:
			iVar0 = 19;
			break;
		
		case -1960273476:
			iVar0 = 20;
			break;
		
		case -1657389609:
			iVar0 = 21;
			break;
		
		case 1826839858:
			iVar0 = 22;
			break;
		
		case 1989701788:
			iVar0 = 23;
			break;
		
		case 1213109257:
			iVar0 = 24;
			break;
		
		case 607407061:
			iVar0 = 25;
			break;
		
		case 875031480:
			iVar0 = 26;
			break;
		
		case 1487418552:
			iVar0 = 27;
			break;
		
		case 264053475:
			iVar0 = 28;
			break;
		
		case 99094329:
			iVar0 = 29;
			break;
		
		case -244193715:
			iVar0 = 30;
			break;
		
		case -540785934:
			iVar0 = 31;
			break;
		
		case -694833003:
			iVar0 = 32;
			break;
		
		case -852058665:
			iVar0 = 33;
			break;
		
		case -1512648940:
			iVar0 = 34;
			break;
		
		case -761354077:
			iVar0 = 35;
			break;
		
		case 1560551467:
			iVar0 = 36;
			break;
		
		case 827974775:
			iVar0 = 37;
			break;
		
		case 1595162603:
			iVar0 = 38;
			break;
		
		case 709663738:
			iVar0 = 39;
			break;
		
		case 990002533:
			iVar0 = 40;
			break;
		
		case 1860213958:
			iVar0 = 41;
			break;
		
		case 2119318441:
			iVar0 = 42;
			break;
		
		case -1953737187:
			iVar0 = 43;
			break;
		
		case 193320466:
			iVar0 = 44;
			break;
		
		case 1936646403:
			iVar0 = 45;
			break;
		
		case -1126042648:
			iVar0 = 46;
			break;
		
		case -1125022512:
			iVar0 = 47;
			break;
		
		case -1304369017:
			iVar0 = 48;
			break;
		
		case -2018143375:
			iVar0 = 49;
			break;
		
		case 224730392:
			iVar0 = 50;
			break;
		
		case 439629494:
			iVar0 = 51;
			break;
		
		case 736778786:
			iVar0 = 52;
			break;
		
		case 1048444745:
			iVar0 = 53;
			break;
		
		case 1988816738:
			iVar0 = 54;
			break;
		
		case 2140603469:
			iVar0 = 55;
			break;
		
		case 214245031:
			iVar0 = 56;
			break;
		
		case 1006238992:
			iVar0 = 57;
			break;
		
		case 689952604:
			iVar0 = 58;
			break;
		
		case -681528353:
			iVar0 = 59;
			break;
		
		case 1157448359:
			iVar0 = 60;
			break;
		
		case 43105745:
			iVar0 = 61;
			break;
		
		case -270395278:
			iVar0 = 62;
			break;
		
		case 505181414:
			iVar0 = 63;
			break;
		
		case 254662409:
			iVar0 = 64;
			break;
		
		case -982924414:
			iVar0 = 65;
			break;
		
		case -1156010272:
			iVar0 = 66;
			break;
		
		case 1885313391:
			iVar0 = 67;
			break;
		
		case -694786597:
			iVar0 = 68;
			break;
		
		case -1950199756:
			iVar0 = 69;
			break;
		
		case 384168721:
			iVar0 = 70;
			break;
		
		case -369452741:
			iVar0 = 71;
			break;
		
		case -89113946:
			iVar0 = 72;
			break;
		
		case 1836261422:
			iVar0 = 73;
			break;
		
		case -1004417654:
			iVar0 = 74;
			break;
		
		case -754095263:
			iVar0 = 75;
			break;
		
		case -1210698509:
			iVar0 = 76;
			break;
		
		case 1332405298:
			iVar0 = 77;
			break;
		
		case 552929095:
			iVar0 = 78;
			break;
		
		case 861154309:
			iVar0 = 79;
			break;
		
		case -1653801207:
			iVar0 = 80;
			break;
		
		case -87213624:
			iVar0 = 81;
			break;
		
		case 1285643631:
			iVar0 = 82;
			break;
		
		case 523240077:
			iVar0 = 83;
			break;
		
		case 823174734:
			iVar0 = 84;
			break;
		
		case -1248612522:
			iVar0 = 85;
			break;
		
		case 123359970:
			iVar0 = 86;
			break;
		
		case 369684543:
			iVar0 = 87;
			break;
		
		case -337142787:
			iVar0 = 88;
			break;
		
		case 1395583642:
			iVar0 = 89;
			break;
		
		case 1782520810:
			iVar0 = 90;
			break;
		
		case -660506451:
			iVar0 = 91;
			break;
		
		case -1092860637:
			iVar0 = 92;
			break;
		
		case 524387820:
			iVar0 = 93;
			break;
		
		case -1829180023:
			iVar0 = 94;
			break;
		
		case 2091368679:
			iVar0 = 95;
			break;
		
		case 1851597906:
			iVar0 = 96;
			break;
		
		case -434629734:
			iVar0 = 97;
			break;
		
		case 1415278623:
			iVar0 = 98;
			break;
		
		case 1252285617:
			iVar0 = 99;
			break;
	}
	switch (iParam0)
	{
		case 893595891:
			iVar0 = 100;
			break;
		
		case 423819507:
			iVar0 = 101;
			break;
		
		case -1433887872:
			iVar0 = 102;
			break;
		
		case -464613621:
			iVar0 = 103;
			break;
		
		case -301227387:
			iVar0 = 104;
			break;
		
		case -701762906:
			iVar0 = 105;
			break;
		
		case -890282963:
			iVar0 = 106;
			break;
		
		case -1188251480:
			iVar0 = 107;
			break;
		
		case 258827560:
			iVar0 = 108;
			break;
		
		case 965649655:
			iVar0 = 109;
			break;
		
		case 718800778:
			iVar0 = 110;
			break;
		
		case 1959959422:
			iVar0 = 111;
			break;
		
		case 1200177388:
			iVar0 = 112;
			break;
		
		case -1874439579:
			iVar0 = 113;
			break;
		
		case -1679505893:
			iVar0 = 114;
			break;
		
		case -1976229188:
			iVar0 = 115;
			break;
		
		case 2037875009:
			iVar0 = 116;
			break;
		
		case -235146664:
			iVar0 = 117;
			break;
		
		case -441853516:
			iVar0 = 118;
			break;
		
		case -664221443:
			iVar0 = 119;
			break;
		
		case -371627042:
			iVar0 = 120;
			break;
		
		case -1266220742:
			iVar0 = 121;
			break;
		
		case -968055611:
			iVar0 = 122;
			break;
		
		case 248100286:
			iVar0 = 123;
			break;
		
		case 551606764:
			iVar0 = 124;
			break;
		
		case 1805971315:
			iVar0 = 125;
			break;
		
		case -43642121:
			iVar0 = 126;
			break;
		
		case 1172251624:
			iVar0 = 127;
			break;
		
		case 1471989667:
			iVar0 = 128;
			break;
		
		case -2124702788:
			iVar0 = 129;
			break;
		
		case -1826734271:
			iVar0 = 130;
			break;
		
		case -900452940:
			iVar0 = 131;
			break;
		
		case -292194762:
			iVar0 = 132;
			break;
		
		case 637166847:
			iVar0 = 133;
			break;
		
		case -1204844181:
			iVar0 = 134;
			break;
		
		case 324779970:
			iVar0 = 135;
			break;
		
		case 329039940:
			iVar0 = 136;
			break;
		
		case 1854928425:
			iVar0 = 137;
			break;
		
		case 13179549:
			iVar0 = 138;
			break;
		
		case 1899823455:
			iVar0 = 139;
			break;
		
		case -2090490448:
			iVar0 = 140;
			break;
		
		case -1801467868:
			iVar0 = 141;
			break;
		
		case 953986562:
			iVar0 = 142;
			break;
		
		case 585335312:
			iVar0 = 143;
			break;
		
		case 489617063:
			iVar0 = 144;
			break;
		
		case 210195800:
			iVar0 = 145;
			break;
		
		case 1843402776:
			iVar0 = 146;
			break;
		
		case -1600520821:
			iVar0 = 147;
			break;
		
		case 1399087889:
			iVar0 = 148;
			break;
		
		case 1169344430:
			iVar0 = 149;
			break;
		
		case -2028647818:
			iVar0 = 150;
			break;
		
		case -1335845620:
			iVar0 = 151;
			break;
		
		case -1450406320:
			iVar0 = 152;
			break;
		
		case -1209849091:
			iVar0 = 153;
			break;
		
		case 2065609077:
			iVar0 = 154;
			break;
		
		case -664245241:
			iVar0 = 155;
			break;
		
		case 1676130538:
			iVar0 = 156;
			break;
		
		case -1730534702:
			iVar0 = 157;
			break;
		
		case -1767432596:
			iVar0 = 158;
			break;
		
		case -2016105604:
			iVar0 = 159;
			break;
		
		case 1971947238:
			iVar0 = 160;
			break;
		
		case -362811247:
			iVar0 = 161;
			break;
		
		case -668087251:
			iVar0 = 162;
			break;
		
		case -821282326:
			iVar0 = 163;
			break;
		
		case -1083467095:
			iVar0 = 164;
			break;
		
		case 550067555:
			iVar0 = 165;
			break;
		
		case 1439221609:
			iVar0 = 166;
			break;
		
		case 67412954:
			iVar0 = 167;
			break;
		
		case -1999360357:
			iVar0 = 168;
			break;
		
		case 1461537582:
			iVar0 = 169;
			break;
		
		case -1828273408:
			iVar0 = 170;
			break;
		
		case -1319239762:
			iVar0 = 171;
			break;
		
		case -1234400821:
			iVar0 = 172;
			break;
		
		case -992303449:
			iVar0 = 173;
			break;
		
		case -638398249:
			iVar0 = 174;
			break;
		
		case -41543683:
			iVar0 = 175;
			break;
		
		case -1934903018:
			iVar0 = 176;
			break;
		
		case 2132090345:
			iVar0 = 177;
			break;
		
		case 1751052413:
			iVar0 = 178;
			break;
		
		case 1519604966:
			iVar0 = 179;
			break;
		
		case -1964624525:
			iVar0 = 180;
			break;
		
		case 2006191823:
			iVar0 = 181;
			break;
		
		case 1633280603:
			iVar0 = 182;
			break;
		
		case 632918673:
			iVar0 = 183;
			break;
		
		case -190040148:
			iVar0 = 184;
			break;
		
		case 42936837:
			iVar0 = 185;
			break;
		
		case -1458541976:
			iVar0 = 186;
			break;
		
		case -606014753:
			iVar0 = 187;
			break;
		
		case -613376371:
			iVar0 = 188;
			break;
		
		case -446291501:
			iVar0 = 189;
			break;
		
		case 739308497:
			iVar0 = 190;
			break;
		
		case 495343292:
			iVar0 = 191;
			break;
		
		case -1686711653:
			iVar0 = 192;
			break;
		
		case 1187457341:
			iVar0 = 193;
			break;
		
		case 956403122:
			iVar0 = 194;
			break;
		
		case 1647042566:
			iVar0 = 195;
			break;
		
		case -461478743:
			iVar0 = 196;
			break;
		
		case -1883325653:
			iVar0 = 197;
			break;
		
		case -2114248796:
			iVar0 = 198;
			break;
		
		case 314228205:
			iVar0 = 199;
			break;
	}
	switch (iParam0)
	{
		case 1503775674:
			iVar0 = 200;
			break;
		
		case 1862399610:
			iVar0 = 201;
			break;
		
		case 708472048:
			iVar0 = 202;
			break;
		
		case -1207367545:
			iVar0 = 203;
			break;
		
		case 111650251:
			iVar0 = 204;
			break;
		
		case -28941494:
			iVar0 = 205;
			break;
		
		case -1827173138:
			iVar0 = 206;
			break;
		
		case -520681423:
			iVar0 = 207;
			break;
		
		case -209343154:
			iVar0 = 208;
			break;
		
		case -293579471:
			iVar0 = 209;
			break;
		
		case 20871853:
			iVar0 = 210;
			break;
		
		case -89823344:
			iVar0 = 211;
			break;
		
		case -1820191335:
			iVar0 = 212;
			break;
		
		case -1588547274:
			iVar0 = 213;
			break;
		
		case -1224287070:
			iVar0 = 214;
			break;
		
		case -994150383:
			iVar0 = 215;
			break;
		
		case -869824793:
			iVar0 = 216;
			break;
		
		case -633330920:
			iVar0 = 217;
			break;
		
		case -308131364:
			iVar0 = 218;
			break;
		
		case -38278649:
			iVar0 = 219;
			break;
		
		case 555692245:
			iVar0 = 220;
			break;
		
		case 929455459:
			iVar0 = 221;
			break;
		
		case -2092436411:
			iVar0 = 222;
			break;
		
		case 1904300216:
			iVar0 = 223;
			break;
		
		case -1599361268:
			iVar0 = 224;
			break;
		
		case -1897002095:
			iVar0 = 225;
			break;
		
		case -1011813098:
			iVar0 = 226;
			break;
		
		case -1316794181:
			iVar0 = 227;
			break;
		
		case -416105443:
			iVar0 = 228;
			break;
		
		case -47978497:
			iVar0 = 229;
			break;
		
		case -358202620:
			iVar0 = 230;
			break;
		
		case 547139312:
			iVar0 = 231;
			break;
		
		case 1124688073:
			iVar0 = 232;
			break;
		
		case 888521890:
			iVar0 = 233;
			break;
		
		case 665823766:
			iVar0 = 234;
			break;
		
		case 427888057:
			iVar0 = 235;
			break;
		
		case 1121411181:
			iVar0 = 236;
			break;
		
		case 890225886:
			iVar0 = 237;
			break;
		
		case 651012186:
			iVar0 = 238;
			break;
		
		case 422776101:
			iVar0 = 239;
			break;
		
		case 1630543134:
			iVar0 = 240;
			break;
		
		case -1945668916:
			iVar0 = 241;
			break;
		
		case -627999265:
			iVar0 = 242;
			break;
		
		case 1682346315:
			iVar0 = 243;
			break;
		
		case 1021952654:
			iVar0 = 244;
			break;
		
		case 1319396867:
			iVar0 = 245;
			break;
		
		case 560794517:
			iVar0 = 246;
			break;
		
		case 858697496:
			iVar0 = 247;
			break;
		
		case -30981230:
			iVar0 = 248;
			break;
		
		case -328032215:
			iVar0 = 249;
			break;
		
		case -1451681225:
			iVar0 = 250;
			break;
		
		case 267904819:
			iVar0 = 251;
			break;
		
		case 1570178485:
			iVar0 = 252;
			break;
		
		case -1619850916:
			iVar0 = 253;
			break;
		
		case -713067148:
			iVar0 = 254;
			break;
		
		case 946477614:
			iVar0 = 255;
			break;
		
		case -1423343701:
			iVar0 = 256;
			break;
		
		case 445931457:
			iVar0 = 257;
			break;
		
		case 678558588:
			iVar0 = 258;
			break;
		
		case -854631987:
			iVar0 = 259;
			break;
		
		case -1707871209:
			iVar0 = 260;
			break;
		
		case -863391184:
			iVar0 = 261;
			break;
		
		case 671171671:
			iVar0 = 262;
			break;
		
		case 904519720:
			iVar0 = 263;
			break;
		
		case 670952414:
			iVar0 = 264;
			break;
		
		case -282875325:
			iVar0 = 265;
			break;
		
		case 2079623104:
			iVar0 = 266;
			break;
		
		case 1088443427:
			iVar0 = 267;
			break;
		
		case 200001600:
			iVar0 = 268;
			break;
		
		case 1620729159:
			iVar0 = 269;
			break;
		
		case -1713274238:
			iVar0 = 270;
			break;
		
		case -1571590969:
			iVar0 = 271;
			break;
		
		case -457639374:
			iVar0 = 272;
			break;
		
		case 64160805:
			iVar0 = 273;
			break;
		
		case 1015325203:
			iVar0 = 274;
			break;
		
		case -1951778967:
			iVar0 = 275;
			break;
		
		case 1836042304:
			iVar0 = 276;
			break;
		
		case -421094621:
			iVar0 = 277;
			break;
		
		case 641062099:
			iVar0 = 278;
			break;
		
		case 597454468:
			iVar0 = 279;
			break;
		
		case 713758205:
			iVar0 = 280;
			break;
		
		case 1042267708:
			iVar0 = 281;
			break;
		
		case -637951661:
			iVar0 = 282;
			break;
		
		case 195911857:
			iVar0 = 283;
			break;
		
		case 903988957:
			iVar0 = 284;
			break;
		
		case 1068170761:
			iVar0 = 285;
			break;
		
		case -619065384:
			iVar0 = 286;
			break;
		
		case -497085955:
			iVar0 = 287;
			break;
		
		case 1138369002:
			iVar0 = 288;
			break;
		
		case -1957731308:
			iVar0 = 289;
			break;
		
		case -2063712125:
			iVar0 = 290;
			break;
		
		case 1773674262:
			iVar0 = 291;
			break;
		
		case 1027059614:
			iVar0 = 292;
			break;
		
		case 1366782677:
			iVar0 = 293;
			break;
		
		case 216134256:
			iVar0 = 294;
			break;
		
		case 810154442:
			iVar0 = 295;
			break;
		
		case 77285961:
			iVar0 = 296;
			break;
		
		case 1617489838:
			iVar0 = 297;
			break;
		
		case 1697138602:
			iVar0 = 298;
			break;
		
		case 711811694:
			iVar0 = 299;
			break;
	}
	switch (iParam0)
	{
		case -895106351:
			iVar0 = 300;
			break;
		
		case 875367934:
			iVar0 = 301;
			break;
		
		case -979867160:
			iVar0 = 302;
			break;
		
		case -1233816942:
			iVar0 = 303;
			break;
		
		case -866958715:
			iVar0 = 304;
			break;
		
		case -1303573005:
			iVar0 = 305;
			break;
		
		case 2085207152:
			iVar0 = 306;
			break;
		
		case 857137150:
			iVar0 = 307;
			break;
		
		case 535952639:
			iVar0 = 308;
			break;
		
		case -1974657401:
			iVar0 = 309;
			break;
		
		case 129909013:
			iVar0 = 310;
			break;
		
		case -1499060170:
			iVar0 = 311;
			break;
		
		case 412032123:
			iVar0 = 312;
			break;
		
		case 915049044:
			iVar0 = 313;
			break;
		
		case 456478679:
			iVar0 = 314;
			break;
		
		case 907364848:
			iVar0 = 315;
			break;
		
		case -1783721060:
			iVar0 = 316;
			break;
		
		case -1008363280:
			iVar0 = 317;
			break;
		
		case 1429817922:
			iVar0 = 318;
			break;
		
		case -938326281:
			iVar0 = 319;
			break;
		
		case -1073925235:
			iVar0 = 320;
			break;
		
		case 1498524677:
			iVar0 = 321;
			break;
		
		case 1525596308:
			iVar0 = 322;
			break;
		
		case 1232639216:
			iVar0 = 323;
			break;
		
		case 956061600:
			iVar0 = 324;
			break;
		
		case 816551665:
			iVar0 = 325;
			break;
		
		case 2049704410:
			iVar0 = 326;
			break;
		
		case -796818724:
			iVar0 = 327;
			break;
		
		case 1775476370:
			iVar0 = 328;
			break;
		
		case 266230635:
			iVar0 = 329;
			break;
		
		case -588549683:
			iVar0 = 330;
			break;
		
		case 464027076:
			iVar0 = 331;
			break;
		
		case 2122049260:
			iVar0 = 332;
			break;
		
		case 1049130700:
			iVar0 = 333;
			break;
		
		case -116952560:
			iVar0 = 334;
			break;
		
		case 1424723115:
			iVar0 = 335;
			break;
		
		case -1007272003:
			iVar0 = 336;
			break;
		
		case -644829701:
			iVar0 = 337;
			break;
		
		case -2103222497:
			iVar0 = 338;
			break;
		
		case -1589795073:
			iVar0 = 339;
			break;
		
		case -1689668067:
			iVar0 = 340;
			break;
		
		case -189814108:
			iVar0 = 341;
			break;
		
		case -1595292141:
			iVar0 = 342;
			break;
		
		case -1540940714:
			iVar0 = 343;
			break;
		
		case -2136471172:
			iVar0 = 344;
			break;
		
		case -666892434:
			iVar0 = 345;
			break;
		
		case -1001125323:
			iVar0 = 346;
			break;
		
		case 904104464:
			iVar0 = 347;
			break;
		
		case 690016265:
			iVar0 = 348;
			break;
		
		case 38190590:
			iVar0 = 349;
			break;
		
		case 2119761078:
			iVar0 = 350;
			break;
		
		case -1213131712:
			iVar0 = 351;
			break;
		
		case 990079224:
			iVar0 = 352;
			break;
		
		case -905045993:
			iVar0 = 353;
			break;
		
		case 2104378143:
			iVar0 = 354;
			break;
		
		case -666631800:
			iVar0 = 355;
			break;
		
		case 549954933:
			iVar0 = 356;
			break;
		
		case 1830069972:
			iVar0 = 357;
			break;
		
		case 859320876:
			iVar0 = 358;
			break;
		
		case -552358316:
			iVar0 = 359;
			break;
		
		case 1522216340:
			iVar0 = 360;
			break;
		
		case -1783296601:
			iVar0 = 361;
			break;
		
		case 283995288:
			iVar0 = 362;
			break;
		
		case -975534410:
			iVar0 = 363;
			break;
		
		case -2088194624:
			iVar0 = 364;
			break;
		
		case 1744801848:
			iVar0 = 365;
			break;
		
		case -481389646:
			iVar0 = 366;
			break;
		
		case -1781363036:
			iVar0 = 367;
			break;
		
		case 496009839:
			iVar0 = 368;
			break;
		
		case -667608820:
			iVar0 = 369;
			break;
		
		case 460475899:
			iVar0 = 370;
			break;
		
		case 1491168919:
			iVar0 = 371;
			break;
		
		case -1611478806:
			iVar0 = 372;
			break;
		
		case 523495612:
			iVar0 = 373;
			break;
		
		case -78008273:
			iVar0 = 374;
			break;
		
		case -762375847:
			iVar0 = 375;
			break;
		
		case 331482129:
			iVar0 = 376;
			break;
		
		case -2083628050:
			iVar0 = 377;
			break;
		
		case -468800117:
			iVar0 = 378;
			break;
		
		case 724819757:
			iVar0 = 379;
			break;
		
		case -1058761348:
			iVar0 = 380;
			break;
		
		case -546178212:
			iVar0 = 381;
			break;
		
		case -118052734:
			iVar0 = 382;
			break;
		
		case 1654466691:
			iVar0 = 383;
			break;
		
		case -1077553649:
			iVar0 = 384;
			break;
		
		case -886092159:
			iVar0 = 385;
			break;
		
		case -1406331536:
			iVar0 = 386;
			break;
		
		case -1968934850:
			iVar0 = 387;
			break;
		
		case 3741245:
			iVar0 = 388;
			break;
		
		case 1387838298:
			iVar0 = 389;
			break;
		
		case -1941058219:
			iVar0 = 390;
			break;
		
		case 955033120:
			iVar0 = 391;
			break;
		
		case 677119231:
			iVar0 = 392;
			break;
		
		case -1616214916:
			iVar0 = 393;
			break;
		
		case -841195297:
			iVar0 = 394;
			break;
		
		case -909289279:
			iVar0 = 395;
			break;
		
		case -239567341:
			iVar0 = 396;
			break;
		
		case -613592707:
			iVar0 = 397;
			break;
		
		case -988568374:
			iVar0 = 398;
			break;
		
		case -1090807654:
			iVar0 = 399;
			break;
	}
	switch (iParam0)
	{
		case 534771589:
			iVar0 = 400;
			break;
		
		case -1340139519:
			iVar0 = 401;
			break;
		
		case -849980761:
			iVar0 = 402;
			break;
		
		case -551553478:
			iVar0 = 403;
			break;
		
		case 386581472:
			iVar0 = 404;
			break;
		
		case 1466454525:
			iVar0 = 405;
			break;
		
		case 283190173:
			iVar0 = 406;
			break;
		
		case 1528527015:
			iVar0 = 407;
			break;
		
		case -1690029966:
			iVar0 = 408;
			break;
		
		case -1685994466:
			iVar0 = 409;
			break;
		
		case 255166927:
			iVar0 = 410;
			break;
		
		case -271257487:
			iVar0 = 411;
			break;
		
		case 1885215284:
			iVar0 = 412;
			break;
		
		case -1935156988:
			iVar0 = 413;
			break;
		
		case 1061465906:
			iVar0 = 414;
			break;
		
		case -871031729:
			iVar0 = 415;
			break;
		
		case -101171485:
			iVar0 = 416;
			break;
		
		case -1590298770:
			iVar0 = 417;
			break;
		
		case 303441856:
			iVar0 = 418;
			break;
		
		case -2049689650:
			iVar0 = 419;
			break;
		
		case 788520303:
			iVar0 = 420;
			break;
		
		case -859861445:
			iVar0 = 421;
			break;
		
		case 1045897298:
			iVar0 = 422;
			break;
		
		case 116964921:
			iVar0 = 423;
			break;
		
		case -1502257606:
			iVar0 = 424;
			break;
		
		case -546150284:
			iVar0 = 425;
			break;
		
		case -357466888:
			iVar0 = 426;
			break;
		
		case 718674880:
			iVar0 = 427;
			break;
		
		case -1529401172:
			iVar0 = 428;
			break;
		
		case 2088037441:
			iVar0 = 429;
			break;
		
		case 2048866271:
			iVar0 = 430;
			break;
		
		case -1565431690:
			iVar0 = 431;
			break;
		
		case -1528465573:
			iVar0 = 432;
			break;
		
		case 401532197:
			iVar0 = 433;
			break;
		
		case 826974918:
			iVar0 = 434;
			break;
		
		case -676067408:
			iVar0 = 435;
			break;
		
		case 1877289089:
			iVar0 = 436;
			break;
		
		case 859380017:
			iVar0 = 437;
			break;
		
		case 233098354:
			iVar0 = 438;
			break;
		
		case 566101858:
			iVar0 = 439;
			break;
		
		case 529460830:
			iVar0 = 440;
			break;
		
		case -1833118141:
			iVar0 = 441;
			break;
		
		case 422823598:
			iVar0 = 442;
			break;
		
		case 1450358661:
			iVar0 = 443;
			break;
		
		case 741089893:
			iVar0 = 444;
			break;
		
		case 1289848370:
			iVar0 = 445;
			break;
		
		case 616166430:
			iVar0 = 446;
			break;
		
		case 1489225316:
			iVar0 = 447;
			break;
		
		case 753969632:
			iVar0 = 448;
			break;
		
		case -1182831168:
			iVar0 = 449;
			break;
		
		case 1545103753:
			iVar0 = 450;
			break;
		
		case 2090080808:
			iVar0 = 451;
			break;
		
		case 903606896:
			iVar0 = 452;
			break;
		
		case 26759391:
			iVar0 = 453;
			break;
		
		case 1651885364:
			iVar0 = 454;
			break;
		
		case 729529407:
			iVar0 = 455;
			break;
		
		case 528802126:
			iVar0 = 456;
			break;
		
		case -1468003071:
			iVar0 = 457;
			break;
		
		case 1683696787:
			iVar0 = 458;
			break;
		
		case -726859160:
			iVar0 = 459;
			break;
		
		case 1209899578:
			iVar0 = 460;
			break;
		
		case 930604285:
			iVar0 = 461;
			break;
		
		case -308584186:
			iVar0 = 462;
			break;
		
		case -64129874:
			iVar0 = 463;
			break;
		
		case -1431204514:
			iVar0 = 464;
			break;
		
		case -1133334304:
			iVar0 = 465;
			break;
		
		case -1809784771:
			iVar0 = 466;
			break;
		
		case -1576934998:
			iVar0 = 467;
			break;
		
		case -1570929684:
			iVar0 = 468;
			break;
		
		case 1976578151:
			iVar0 = 469;
			break;
	}
	if (iVar0 != -1)
	{
		*uParam1 = 129 + iVar0;
		return true;
	}
	return false;
}

int func_172(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_174(iParam0) == 3949)
	{
		return false;
	}
	iVar0 = func_173(iParam0, iParam1);
	iVar1 = iParam0;
	return is_bit_set(iVar0, func_157(iVar1));
}

var func_173(var uParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_258(func_174(uParam0), iParam1, 0);
	return uVar0;
}

int func_174(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_162(iVar0);
	if ((func_161() == 0 || func_160() == 0) || (func_161() == 999 && func_160() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1031;
				break;
			
			case 1:
				return 1032;
				break;
			
			case 2:
				return 1033;
				break;
			
			case 3:
				return 1034;
				break;
			
			case 4:
				return 1035;
				break;
			
			case 5:
				return 1495;
				break;
			
			case 6:
				return 1748;
				break;
			
			case 7:
				return 1942;
				break;
			
			case 8:
				return 1943;
				break;
			
			case 9:
				return 1944;
				break;
			
			case 10:
				return 1945;
				break;
			
			case 11:
				return 1946;
				break;
			
			case 12:
				return 1947;
				break;
			
			case 13:
				return 2400;
				break;
			
			case 14:
				return 2420;
				break;
			
			case 15:
				return 2423;
				break;
			
			case 16:
				return 2426;
				break;
			
			case 17:
				return 2589;
				break;
			
			case 18:
				return 2592;
				break;
			
			case 19:
				return 2595;
				break;
			}
	}
	return 3949;
}

int func_175(int iParam0)
{
	switch (get_entity_model(iParam0))
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		case joaat("mp_m_freemode_01"):
			return 3;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 4;
			break;
	}
	return 0;
}

int func_176(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 0)
		{
			return 123;
			return -1;
		}
		else if (iParam1 == 1)
		{
			return 93;
		}
		else if (iParam1 == 2)
		{
			return 93;
		}
		else if (iParam1 == 3)
		{
			return 93;
		}
		else if (iParam1 == 4)
		{
			return 93;
		}
		else if (iParam1 == 5)
		{
			return 93;
		}
		else if (iParam1 == 6)
		{
			return 93;
		}
		else if (iParam1 == 7)
		{
			return 94;
		}
		else if (iParam1 == 8)
		{
			return 94;
		}
		else if (iParam1 == 9)
		{
			return 94;
		}
		else if (iParam1 == 10)
		{
			return 94;
		}
		else if (iParam1 == 11)
		{
			return 94;
		}
		else if (iParam1 == 12)
		{
			return 94;
		}
		else if (iParam1 == 13)
		{
			return 95;
		}
		else if (iParam1 == 14)
		{
			return 95;
		}
		else if (iParam1 == 15)
		{
			return 95;
		}
		else if (iParam1 == 16)
		{
			return 95;
		}
		else if (iParam1 == 17)
		{
			return 95;
		}
		else if (iParam1 == 18)
		{
			return 95;
		}
		else if (iParam1 == 19)
		{
			return 96;
		}
		else if (iParam1 == 20)
		{
			return 96;
		}
		else if (iParam1 == 21)
		{
			return 96;
		}
		else if (iParam1 == 22)
		{
			return 96;
		}
		else if (iParam1 == 23)
		{
			return 96;
		}
		else if (iParam1 == 24)
		{
			return 96;
		}
		else if (iParam1 == 25)
		{
			return 96;
		}
		else if (iParam1 == 26)
		{
			return 97;
		}
		else if (iParam1 == 27)
		{
			return 97;
		}
		else if (iParam1 == 28)
		{
			return 97;
		}
		else if (iParam1 == 29)
		{
			return 97;
		}
		else if (iParam1 == 30)
		{
			return 97;
		}
		else if (iParam1 == 31)
		{
			return 97;
		}
		else if (iParam1 == 32)
		{
			return 98;
		}
		else if (iParam1 == 33)
		{
			return 98;
		}
		else if (iParam1 == 34)
		{
			return 98;
		}
		else if (iParam1 == 35)
		{
			return 98;
		}
		else if (iParam1 == 36)
		{
			return 98;
		}
		else if (iParam1 == 37)
		{
			return 98;
		}
		else if (iParam1 == 38)
		{
			return 99;
		}
		else if (iParam1 == 39)
		{
			return 99;
		}
		else if (iParam1 == 40)
		{
			return 99;
		}
		else if (iParam1 == 41)
		{
			return 99;
		}
		else if (iParam1 == 42)
		{
			return 99;
		}
		else if (iParam1 == 43)
		{
			return 99;
		}
		else if (iParam1 == 44)
		{
			return 99;
		}
		else if (iParam1 == 45)
		{
			return 100;
		}
		else if (iParam1 == 46)
		{
			return 100;
		}
		else if (iParam1 == 47)
		{
			return 100;
		}
		else if (iParam1 == 48)
		{
			return 100;
		}
		else if (iParam1 == 49)
		{
			return 100;
		}
		else if (iParam1 == 50)
		{
			return 101;
		}
		else if (iParam1 == 51)
		{
			return 101;
		}
		else if (iParam1 == 52)
		{
			return 101;
		}
		else if (iParam1 == 53)
		{
			return 101;
		}
		else if (iParam1 == 54)
		{
			return 101;
		}
		else if (iParam1 == 55)
		{
			return 101;
		}
		else if (iParam1 == 56)
		{
			return 101;
		}
		else if (iParam1 == 57)
		{
			return 102;
		}
		else if (iParam1 == 58)
		{
			return 102;
		}
		else if (iParam1 == 59)
		{
			return 102;
		}
		else if (iParam1 == 60)
		{
			return 102;
		}
		else if (iParam1 == 61)
		{
			return 102;
		}
		else if (iParam1 == 62)
		{
			return 102;
		}
		else if (iParam1 == 63)
		{
			return 103;
		}
		else if (iParam1 == 64)
		{
			return 103;
		}
		else if (iParam1 == 65)
		{
			return 103;
		}
		else if (iParam1 == 66)
		{
			return 103;
		}
		else if (iParam1 == 67)
		{
			return 103;
		}
		else if (iParam1 == 68)
		{
			return 103;
		}
		else if (iParam1 == 69)
		{
			return 104;
		}
		else if (iParam1 == 70)
		{
			return 104;
		}
		else if (iParam1 == 71)
		{
			return 104;
		}
		else if (iParam1 == 72)
		{
			return 104;
		}
		else if (iParam1 == 73)
		{
			return 104;
		}
		else if (iParam1 == 74)
		{
			return 105;
		}
		else if (iParam1 == 75)
		{
			return 105;
		}
		else if (iParam1 == 76)
		{
			return 105;
		}
		else if (iParam1 == 77)
		{
			return 105;
		}
		else if (iParam1 == 78)
		{
			return 105;
		}
		else if (iParam1 == 79)
		{
			return 105;
		}
		else if (iParam1 == 80)
		{
			return 106;
		}
		else if (iParam1 == 81)
		{
			return 106;
		}
		else if (iParam1 == 82)
		{
			return 106;
		}
		else if (iParam1 == 83)
		{
			return 106;
		}
		else if (iParam1 == 84)
		{
			return 106;
		}
		else if (iParam1 == 85)
		{
			return 107;
		}
		else if (iParam1 == 86)
		{
			return 107;
		}
		else if (iParam1 == 87)
		{
			return 107;
		}
		else if (iParam1 == 88)
		{
			return 107;
		}
		else if (iParam1 == 89)
		{
			return 107;
		}
		else if (iParam1 == 90)
		{
			return 107;
		}
		else if (iParam1 >= 91)
		{
			iVar0 = func_188(iParam0, iParam1, 2, 3);
			if (iVar0 != -1)
			{
				switch (iVar0)
				{
					case -1983429828:
					case 228608740:
					case 600995656:
					case 850728205:
					case 1093513726:
						return 108;
						break;
					
					case -457639650:
					case -94952354:
					case 144031963:
					case 533262145:
					case -1545668757:
						return 109;
						break;
					
					case -1625493211:
					case -1112723899:
					case -1432451032:
					case -647502406:
					case -925481833:
						return 110;
						break;
					
					case -1168328595:
					case -1421993424:
					case -576454917:
					case -438399124:
					case 271967258:
						return 111;
						break;
					
					case -1903246936:
					case 1155542604:
					case 2048071857:
					case -1605475033:
					case 100085859:
						return 112;
						break;
					
					case 745771948:
					case -1619297862:
					case -1878926649:
					case -485850917:
					case 558628189:
						return 113;
						break;
					
					case 1577121865:
					case 884057515:
					case 2055188806:
					case 1362452146:
					case -1761842625:
						return 114;
						break;
				}
				iVar1 = _get_num_forced_components(iVar0);
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					get_forced_component(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
					if (iVar5 == 10)
					{
						if (iVar3 != 0 && iVar3 != 1849449579)
						{
							return func_169(iVar3, 3);
						}
						else
						{
							return uVar4;
						}
					}
					iVar2++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 0)
		{
			return 123;
			return -1;
		}
		else if (iParam1 == 1)
		{
			return 93;
		}
		else if (iParam1 == 2)
		{
			return 93;
		}
		else if (iParam1 == 3)
		{
			return 93;
		}
		else if (iParam1 == 4)
		{
			return 93;
		}
		else if (iParam1 == 5)
		{
			return 93;
		}
		else if (iParam1 == 6)
		{
			return 93;
		}
		else if (iParam1 == 7)
		{
			return 94;
		}
		else if (iParam1 == 8)
		{
			return 94;
		}
		else if (iParam1 == 9)
		{
			return 94;
		}
		else if (iParam1 == 10)
		{
			return 94;
		}
		else if (iParam1 == 11)
		{
			return 94;
		}
		else if (iParam1 == 12)
		{
			return 94;
		}
		else if (iParam1 == 13)
		{
			return 95;
		}
		else if (iParam1 == 14)
		{
			return 95;
		}
		else if (iParam1 == 15)
		{
			return 95;
		}
		else if (iParam1 == 16)
		{
			return 95;
		}
		else if (iParam1 == 17)
		{
			return 95;
		}
		else if (iParam1 == 18)
		{
			return 96;
		}
		else if (iParam1 == 19)
		{
			return 96;
		}
		else if (iParam1 == 20)
		{
			return 96;
		}
		else if (iParam1 == 21)
		{
			return 96;
		}
		else if (iParam1 == 22)
		{
			return 96;
		}
		else if (iParam1 == 23)
		{
			return 96;
		}
		else if (iParam1 == 24)
		{
			return 97;
		}
		else if (iParam1 == 25)
		{
			return 97;
		}
		else if (iParam1 == 26)
		{
			return 97;
		}
		else if (iParam1 == 27)
		{
			return 97;
		}
		else if (iParam1 == 28)
		{
			return 97;
		}
		else if (iParam1 == 29)
		{
			return 97;
		}
		else if (iParam1 == 30)
		{
			return 98;
		}
		else if (iParam1 == 31)
		{
			return 98;
		}
		else if (iParam1 == 32)
		{
			return 98;
		}
		else if (iParam1 == 33)
		{
			return 98;
		}
		else if (iParam1 == 34)
		{
			return 98;
		}
		else if (iParam1 == 35)
		{
			return 99;
		}
		else if (iParam1 == 36)
		{
			return 99;
		}
		else if (iParam1 == 37)
		{
			return 99;
		}
		else if (iParam1 == 38)
		{
			return 99;
		}
		else if (iParam1 == 39)
		{
			return 99;
		}
		else if (iParam1 == 40)
		{
			return 99;
		}
		else if (iParam1 == 41)
		{
			return 100;
		}
		else if (iParam1 == 42)
		{
			return 100;
		}
		else if (iParam1 == 43)
		{
			return 100;
		}
		else if (iParam1 == 44)
		{
			return 100;
		}
		else if (iParam1 == 45)
		{
			return 100;
		}
		else if (iParam1 == 46)
		{
			return 100;
		}
		else if (iParam1 == 47)
		{
			return 101;
		}
		else if (iParam1 == 48)
		{
			return 101;
		}
		else if (iParam1 == 49)
		{
			return 101;
		}
		else if (iParam1 == 50)
		{
			return 101;
		}
		else if (iParam1 == 51)
		{
			return 101;
		}
		else if (iParam1 == 52)
		{
			return 101;
		}
		else if (iParam1 == 53)
		{
			return 102;
		}
		else if (iParam1 == 54)
		{
			return 102;
		}
		else if (iParam1 == 55)
		{
			return 102;
		}
		else if (iParam1 == 56)
		{
			return 102;
		}
		else if (iParam1 == 57)
		{
			return 102;
		}
		else if (iParam1 == 58)
		{
			return 102;
		}
		else if (iParam1 == 59)
		{
			return 102;
		}
		else if (iParam1 == 60)
		{
			return 103;
		}
		else if (iParam1 == 61)
		{
			return 103;
		}
		else if (iParam1 == 62)
		{
			return 103;
		}
		else if (iParam1 == 63)
		{
			return 103;
		}
		else if (iParam1 == 64)
		{
			return 103;
		}
		else if (iParam1 == 65)
		{
			return 103;
		}
		else if (iParam1 == 66)
		{
			return 103;
		}
		else if (iParam1 == 67)
		{
			return 104;
		}
		else if (iParam1 == 68)
		{
			return 104;
		}
		else if (iParam1 == 69)
		{
			return 104;
		}
		else if (iParam1 == 70)
		{
			return 104;
		}
		else if (iParam1 == 71)
		{
			return 104;
		}
		else if (iParam1 == 72)
		{
			return 104;
		}
		else if (iParam1 == 73)
		{
			return 105;
		}
		else if (iParam1 == 74)
		{
			return 105;
		}
		else if (iParam1 == 75)
		{
			return 105;
		}
		else if (iParam1 == 76)
		{
			return 105;
		}
		else if (iParam1 == 77)
		{
			return 105;
		}
		else if (iParam1 == 78)
		{
			return 105;
		}
		else if (iParam1 == 79)
		{
			return func_169(-1261720761, 4);
		}
		else if (iParam1 == 80)
		{
			return func_169(-1261720761, 4);
		}
		else if (iParam1 == 81)
		{
			return func_169(-1261720761, 4);
		}
		else if (iParam1 == 82)
		{
			return func_169(-1261720761, 4);
		}
		else if (iParam1 == 83)
		{
			return func_169(-1261720761, 4);
		}
		else if (iParam1 == 84)
		{
			return func_169(-1261720761, 4);
		}
		else if (iParam1 == 85)
		{
			return 107;
		}
		else if (iParam1 == 86)
		{
			return 107;
		}
		else if (iParam1 == 87)
		{
			return 107;
		}
		else if (iParam1 == 88)
		{
			return 107;
		}
		else if (iParam1 == 89)
		{
			return 107;
		}
		else if (iParam1 == 90)
		{
			return 107;
		}
		else if (iParam1 == 91)
		{
			return 107;
		}
		else if (iParam1 >= 92)
		{
			iVar6 = func_188(iParam0, iParam1, 2, 4);
			if (iVar6 != -1)
			{
				switch (iVar6)
				{
					case -1238992735:
					case -1947261901:
					case -771018642:
					case -1486169302:
					case 1159796376:
						return 108;
						break;
					
					case 1389867525:
					case 1622396349:
					case 1851615504:
					case -2052614252:
					case -1818610823:
						return 109;
						break;
					
					case 1855226196:
					case 271139943:
					case -1099030254:
					case -307724442:
					case -637872117:
						return 110;
						break;
					
					case -663797501:
					case 2088667427:
					case 1779786837:
					case -1609936838:
					case -1880477702:
						return 111;
						break;
					
					case 1052499595:
					case 142438919:
					case 458495932:
					case -701723290:
					case -119221546:
						return 112;
						break;
					
					case 1245050198:
					case 1481937299:
					case 1754870300:
					case -2033029490:
					case 62318681:
						return 112;
						break;
					
					case 665775322:
					case 618391324:
					case 497473714:
					case 123808807:
					case -231538229:
						return 114;
						break;
				}
				iVar7 = _get_num_forced_components(iVar6);
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					get_forced_component(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
					if (iVar11 == 10)
					{
						if (iVar9 != 0 && iVar9 != 1849449579)
						{
							return func_169(iVar9, 4);
						}
						else
						{
							return uVar10;
						}
					}
					iVar8++;
				}
			}
		}
	}
	return -1;
}

void func_177(int iParam0, int iParam1)
{
	struct<12> Var0;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<7> Var16;
	int iVar31;
	int iVar32;
	struct<7> Var33;
	int iVar48;
	int iVar49;
	struct<7> Var50;
	int iVar65;
	int iVar66;
	struct<7> Var67;
	int iVar82;
	
	if (!is_ped_injured(iParam1))
	{
		iVar13 = func_175(iParam1);
		if (iParam0 != 0)
		{
			if (iVar13 == 3 || iVar13 == 4)
			{
				if (iParam0 == 1019352240)
				{
					func_196(13, 0, Global_69309);
					func_196(14, 0, Global_69309);
					func_196(15, 0, Global_69309);
					func_196(16, 0, Global_69309);
					func_196(71, 0, Global_69309);
					func_196(72, 0, Global_69309);
					return;
				}
				else if (iParam0 == 277073536)
				{
					if (iVar13 == 3)
					{
						func_196(73, 0, Global_69309);
						func_196(74, 0, Global_69309);
						func_196(75, 0, Global_69309);
						func_196(76, 0, Global_69309);
						func_196(77, 0, Global_69309);
						func_196(78, 0, Global_69309);
						func_196(79, 0, Global_69309);
						func_196(80, 0, Global_69309);
						func_196(81, 0, Global_69309);
						func_196(82, 0, Global_69309);
						func_196(83, 0, Global_69309);
						func_196(84, 0, Global_69309);
						func_196(85, 0, Global_69309);
						func_196(86, 0, Global_69309);
						func_196(90, 0, Global_69309);
						func_196(91, 0, Global_69309);
						func_196(124, 0, Global_69309);
						func_196(125, 0, Global_69309);
						func_196(87, 0, Global_69309);
						func_196(88, 0, Global_69309);
						func_196(89, 0, Global_69309);
						iVar15 = _0x278F76C3B0A8F109(3);
						iVar14 = 0;
						while (iVar14 < iVar15)
						{
							if (_0xFF56381874F82086(3, iVar14, &Var16))
							{
								if (Var16.f_6 == 277073536)
								{
									func_196(129 + iVar14, 0, Global_69309);
								}
							}
							iVar14++;
						}
					}
					else
					{
						func_196(73, 0, Global_69309);
						func_196(74, 0, Global_69309);
						func_196(75, 0, Global_69309);
						func_196(76, 0, Global_69309);
						func_196(77, 0, Global_69309);
						func_196(78, 0, Global_69309);
						func_196(79, 0, Global_69309);
						func_196(80, 0, Global_69309);
						func_196(81, 0, Global_69309);
						func_196(82, 0, Global_69309);
						func_196(83, 0, Global_69309);
						func_196(84, 0, Global_69309);
						func_196(85, 0, Global_69309);
						func_196(92, 0, Global_69309);
						func_196(87, 0, Global_69309);
						func_196(88, 0, Global_69309);
						func_196(89, 0, Global_69309);
						iVar32 = _0x278F76C3B0A8F109(4);
						iVar31 = 0;
						while (iVar31 < iVar32)
						{
							if (_0xFF56381874F82086(4, iVar31, &Var33))
							{
								if (Var33.f_6 == 277073536)
								{
									func_196(129 + iVar31, 0, Global_69309);
								}
							}
							iVar31++;
						}
					}
				}
				else if (iParam0 == 2140335355)
				{
					if (iVar13 == 3)
					{
						func_196(93, 0, Global_69309);
						func_196(94, 0, Global_69309);
						func_196(95, 0, Global_69309);
						func_196(96, 0, Global_69309);
						func_196(97, 0, Global_69309);
						func_196(98, 0, Global_69309);
						func_196(99, 0, Global_69309);
						func_196(100, 0, Global_69309);
						func_196(101, 0, Global_69309);
						func_196(102, 0, Global_69309);
						func_196(103, 0, Global_69309);
						func_196(104, 0, Global_69309);
						func_196(105, 0, Global_69309);
						func_196(106, 0, Global_69309);
						func_196(107, 0, Global_69309);
						func_196(108, 0, Global_69309);
						func_196(109, 0, Global_69309);
						func_196(110, 0, Global_69309);
						func_196(111, 0, Global_69309);
						func_196(112, 0, Global_69309);
						func_196(113, 0, Global_69309);
						func_196(114, 0, Global_69309);
						func_196(115, 0, Global_69309);
						func_196(116, 0, Global_69309);
						func_196(117, 0, Global_69309);
						func_196(123, 0, Global_69309);
						iVar49 = _0x278F76C3B0A8F109(3);
						iVar48 = 0;
						while (iVar48 < iVar49)
						{
							if (_0xFF56381874F82086(3, iVar48, &Var50))
							{
								if (Var50.f_6 == 2140335355)
								{
									func_196(129 + iVar48, 0, Global_69309);
								}
							}
							iVar48++;
						}
					}
					else
					{
						func_196(93, 0, Global_69309);
						func_196(94, 0, Global_69309);
						func_196(95, 0, Global_69309);
						func_196(96, 0, Global_69309);
						func_196(97, 0, Global_69309);
						func_196(98, 0, Global_69309);
						func_196(99, 0, Global_69309);
						func_196(100, 0, Global_69309);
						func_196(101, 0, Global_69309);
						func_196(102, 0, Global_69309);
						func_196(103, 0, Global_69309);
						func_196(104, 0, Global_69309);
						func_196(105, 0, Global_69309);
						func_196(106, 0, Global_69309);
						func_196(107, 0, Global_69309);
						func_196(108, 0, Global_69309);
						func_196(109, 0, Global_69309);
						func_196(110, 0, Global_69309);
						func_196(111, 0, Global_69309);
						func_196(112, 0, Global_69309);
						func_196(113, 0, Global_69309);
						func_196(114, 0, Global_69309);
						func_196(115, 0, Global_69309);
						func_196(116, 0, Global_69309);
						func_196(117, 0, Global_69309);
						func_196(118, 0, Global_69309);
						func_196(119, 0, Global_69309);
						func_196(120, 0, Global_69309);
						func_196(121, 0, Global_69309);
						func_196(122, 0, Global_69309);
						func_196(123, 0, Global_69309);
						iVar66 = _0x278F76C3B0A8F109(4);
						iVar65 = 0;
						while (iVar65 < iVar66)
						{
							if (_0xFF56381874F82086(4, iVar65, &Var67))
							{
								if (Var67.f_6 == 2140335355)
								{
									func_196(129 + iVar65, 0, Global_69309);
								}
							}
							iVar65++;
						}
					}
					return;
				}
			}
			iVar82 = 0;
			while (iVar82 < 127)
			{
				if (func_148(&Var0, iVar82, iVar13, iParam1, -1))
				{
					if (Var0.f_8 == iParam0)
					{
						func_196(Var0.f_11, 0, Global_69309);
					}
				}
				iVar82++;
			}
		}
	}
}

void func_178(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_198();
	if (iVar0 != -1)
	{
		if (!func_179(iParam0, iParam1, iVar0))
		{
			func_196(iVar0, 0, Global_69309);
		}
	}
}

bool func_179(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_183(iParam0, iParam1))
	{
		if (iParam0 == joaat("mp_m_freemode_01"))
		{
			iVar0 = -1;
			iVar1 = -1;
			if (iParam1 >= 237)
			{
				iVar1 = func_188(iParam0, iParam1, 11, 3);
				iVar0 = func_181(iVar1);
			}
			if (iVar1 != -1 && func_111(iVar1, 0) != -1)
			{
				return false;
			}
			if ((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 124 && iParam1 <= 139)) || iVar0 == 0) || iVar0 == 1) || iVar0 == 8)
			{
				if (iParam2 == 15)
				{
					return true;
				}
				else if (iParam2 == 13 || iParam2 == 14)
				{
					if (func_168(iParam0, 11, iParam1, 0) == -1)
					{
						return true;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar0 == 5)
			{
				if ((iParam2 == 16 || iParam2 == 71) || iParam2 == 72)
				{
					return true;
				}
			}
			else if ((iParam1 >= 140 && iParam1 <= 155) || iVar0 == 9)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					return true;
				}
			}
		}
		else if (iParam0 == joaat("mp_f_freemode_01"))
		{
			iVar2 = -1;
			iVar3 = -1;
			if (iParam1 >= 256)
			{
				iVar3 = func_188(iParam0, iParam1, 11, 4);
				iVar2 = func_181(iVar3);
			}
			if (iVar3 != -1 && func_111(iVar3, 0) != -1)
			{
				return false;
			}
			if ((iParam1 >= 0 && iParam1 <= 15) || iVar2 == 0)
			{
				if (iParam2 == 13 || iParam2 == 15)
				{
					if (func_168(iParam0, 11, iParam1, 0) == -1)
					{
						return true;
					}
				}
			}
			else if ((iParam1 >= 32 && iParam1 <= 47) || iVar2 == 2)
			{
				if (iParam2 == 13 || iParam2 == 16)
				{
					if (func_168(iParam0, 11, iParam1, 0) == -1)
					{
						return true;
					}
				}
			}
			else if ((iParam1 >= 64 && iParam1 <= 79) || iVar2 == 4)
			{
				if (iParam2 == 13)
				{
					return true;
				}
				if (iParam2 == 15)
				{
					if (iVar2 != 4 || !_0x341DE7ED1D2A1BFD(iVar3, 1113995558, 0))
					{
						return true;
					}
				}
			}
			else if ((iParam1 >= 80 && iParam1 <= 95) || iVar2 == 5)
			{
				if (iParam2 == 13)
				{
					return true;
				}
			}
			else if ((iParam1 >= 144 && iParam1 <= 159) || iVar2 == 9)
			{
				if (iParam2 == 14)
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_180(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar0 = -1;
		iVar1 = -1;
		if (iParam1 >= 256)
		{
			iVar0 = func_188(iParam0, iParam1, 4, 3);
			iVar1 = func_181(iVar0);
		}
		iVar2 = -1;
		iVar3 = -1;
		if (iParam2 >= 237)
		{
			iVar2 = func_188(iParam0, iParam2, 11, 3);
			iVar3 = func_181(iVar2);
		}
		if (iVar2 != -1)
		{
			if (_0x341DE7ED1D2A1BFD(iVar2, -826135203, 0))
			{
				if (iVar0 != -1 && _0x341DE7ED1D2A1BFD(iVar0, -826135203, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar0, -826135203, 0))
			{
				if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -826135203, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
			{
				if (iVar0 != -1 && _0x341DE7ED1D2A1BFD(iVar0, 320460654, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0))
			{
				if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar2, -2017999390, 0))
			{
				if (iVar0 != -1 && _0x341DE7ED1D2A1BFD(iVar0, -2017999390, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar0, -2017999390, 0))
			{
				if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -2017999390, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0))
			{
				if (iVar0 != -1 && _0x341DE7ED1D2A1BFD(iVar0, 648481062, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar0, 648481062, 0))
			{
				return true;
			}
		}
		else if (iVar0 != -1)
		{
			if (_0x341DE7ED1D2A1BFD(iVar0, 648481062, 0))
			{
				return true;
			}
			if (_0x341DE7ED1D2A1BFD(iVar0, -826135203, 0))
			{
				if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -826135203, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0))
			{
				if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar0, -2017999390, 0))
			{
				if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -2017999390, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
		}
		if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0))
		{
			if (((((((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 112 && iParam1 <= 127)) || (iParam1 >= 128 && iParam1 <= 143)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 224 && iParam1 <= 239)) || iVar1 == 0) || iVar1 == 3) || iVar1 == 4) || iVar1 == 7) || iVar1 == 8) || iVar1 == 11) || iVar1 == 14) || _0x341DE7ED1D2A1BFD(iVar0, 1627756587, 0))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		switch (iVar0)
		{
			case 312004063:
			case 6695290:
			case 1724446270:
			case -448105673:
			case -611098679:
			case -1111088081:
			case -1406369540:
			case -1912159043:
			case 2076516410:
			case 1919618438:
			case 45227112:
			case -2129094253:
			case -421370587:
			case -675363106:
				if ((iParam2 >= 204 && iParam2 <= 219) || iVar3 == 13)
				{
					return false;
				}
				break;
		}
		if (_0x341DE7ED1D2A1BFD(iVar2, 1021189127, 0))
		{
			if (_0x341DE7ED1D2A1BFD(iVar0, 2044466679, 0))
			{
				return false;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar4 = -1;
		iVar5 = -1;
		if (iParam1 >= 256)
		{
			iVar4 = func_188(iParam0, iParam1, 4, 4);
			iVar5 = func_181(iVar4);
		}
		iVar6 = -1;
		if (iParam2 >= 256)
		{
			iVar6 = func_188(iParam0, iParam2, 11, 4);
		}
		if (iVar6 != -1)
		{
			if (_0x341DE7ED1D2A1BFD(iVar6, -826135203, 0))
			{
				if (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, -826135203, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar4, -826135203, 0))
			{
				if (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, -826135203, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar6, 320460654, 0))
			{
				if (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, 320460654, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0))
			{
				if (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, 320460654, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar6, -2017999390, 0))
			{
				if (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, -2017999390, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar4, -2017999390, 0))
			{
				if (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, -2017999390, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar6, -530089825, 0))
			{
				if ((iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, -530089825, 0)) || (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, -1223513441, 0)))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar4, -530089825, 0))
			{
				if ((iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, -530089825, 0)) || (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, -1223513441, 0)))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (((((((((((_0x341DE7ED1D2A1BFD(iVar6, -1200513218, 0) || _0x341DE7ED1D2A1BFD(iVar6, 1965569012, 0)) || _0x341DE7ED1D2A1BFD(iVar6, -779835469, 0)) || _0x341DE7ED1D2A1BFD(iVar6, -1086258388, 0)) || _0x341DE7ED1D2A1BFD(iVar6, -1119232689, 0)) || _0x341DE7ED1D2A1BFD(iVar6, -1488441032, 0)) || _0x341DE7ED1D2A1BFD(iVar6, -868698159, 0)) || _0x341DE7ED1D2A1BFD(iVar6, 2044466679, 0)) || _0x341DE7ED1D2A1BFD(iVar6, -2020757158, 0)) || _0x341DE7ED1D2A1BFD(iVar6, -2088146832, 0)) || _0x341DE7ED1D2A1BFD(iVar6, -1446333198, 0)) || _0x341DE7ED1D2A1BFD(iVar6, -1351486939, 0))
			{
				if ((((((((((((((((((((((((((((((((iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, -1223513441, 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == 1667217362) || iVar4 == 1956239942) || iVar4 == -210905108) || iVar4 == 79690384) || iVar4 == 134611232) || iVar4 == 441755069) || iVar4 == -1685936105) || iVar4 == -1379382110) || iVar4 == -788622578) || iVar4 == -481740893) || iVar4 == -266743188) || iVar4 == 573421207) || iVar4 == -739668639) || iVar4 == -1126047902) || iVar4 == -954797108) || iVar4 == -1858238438) || iVar4 == -1551291215) || iVar4 == -989872783) || iVar4 == 2073733812) || iVar4 == -1596197578) || iVar4 == -942357733) || iVar4 == -40948081) || iVar4 == -1262871322) || iVar4 == -495388573) || iVar4 == 1091483025) || iVar4 == 785649948) || iVar4 == -313291240) || iVar4 == 495041640) || iVar4 == 749492925)
				{
					return false;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar6, 821147517, 0))
			{
				if ((((((((((((((((((((((((((((((((iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, -1223513441, 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == 1667217362) || iVar4 == 1956239942) || iVar4 == -210905108) || iVar4 == 79690384) || iVar4 == 134611232) || iVar4 == 441755069) || iVar4 == -1685936105) || iVar4 == -1379382110) || iVar4 == -788622578) || iVar4 == -481740893) || iVar4 == -266743188) || iVar4 == 573421207) || iVar4 == -739668639) || iVar4 == -1126047902) || iVar4 == -954797108) || iVar4 == -1858238438) || iVar4 == -1551291215) || iVar4 == -989872783) || iVar4 == 2073733812) || iVar4 == -1596197578) || iVar4 == -942357733) || iVar4 == -40948081) || iVar4 == -1262871322) || iVar4 == -495388573) || iVar4 == 1091483025) || iVar4 == 785649948) || iVar4 == -313291240) || iVar4 == 495041640) || iVar4 == 749492925)
				{
					return false;
				}
			}
		}
		if (iVar4 != -1)
		{
			if (_0x341DE7ED1D2A1BFD(iVar4, -826135203, 0))
			{
				if (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, -826135203, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar4, 320460654, 0))
			{
				if (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, 320460654, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar4, -2017999390, 0))
			{
				if (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, -2017999390, 0))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar4, -530089825, 0))
			{
				if ((iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, -530089825, 0)) || (iVar6 != -1 && _0x341DE7ED1D2A1BFD(iVar6, -1223513441, 0)))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
		}
		if (_0x341DE7ED1D2A1BFD(iVar4, -33031567, 0))
		{
			if (_0x341DE7ED1D2A1BFD(iVar6, -2102859770, 0) || _0x341DE7ED1D2A1BFD(iVar6, -747583185, 0))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		if (_0x341DE7ED1D2A1BFD(iVar6, -747583185, 0))
		{
			if (_0x341DE7ED1D2A1BFD(iVar4, -33031567, 0))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		if ((iParam1 >= 32 && iParam1 <= 47) || iVar5 == 2)
		{
			if (_0x341DE7ED1D2A1BFD(iVar6, 2026620439, 0))
			{
				return false;
			}
		}
		if (_0x341DE7ED1D2A1BFD(iVar6, -2119756144, 0))
		{
			if (((((((((iParam1 >= 32 && iParam1 <= 47) || iVar5 == 2) || _0x341DE7ED1D2A1BFD(iVar4, 264959411, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 140732128, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 1863955539, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -849839091, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -2088146832, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 1055526375, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1882920022, 0))
			{
				return false;
			}
		}
		if (_0x341DE7ED1D2A1BFD(iVar6, 947651647, 0))
		{
			if ((((((((((((((((((((((((((((((((iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, -1223513441, 0)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar5 == 15) || iVar4 == 1667217362) || iVar4 == 1956239942) || iVar4 == -210905108) || iVar4 == 79690384) || iVar4 == 134611232) || iVar4 == 441755069) || iVar4 == -1685936105) || iVar4 == -1379382110) || iVar4 == -788622578) || iVar4 == -481740893) || iVar4 == -266743188) || iVar4 == 573421207) || iVar4 == -739668639) || iVar4 == -1126047902) || iVar4 == -954797108) || iVar4 == -1858238438) || iVar4 == -1551291215) || iVar4 == -989872783) || iVar4 == 2073733812) || iVar4 == -1596197578) || iVar4 == -942357733) || iVar4 == -40948081) || iVar4 == -1262871322) || iVar4 == -495388573) || iVar4 == 1091483025) || iVar4 == 785649948) || iVar4 == -313291240) || iVar4 == 495041640) || iVar4 == 749492925)
			{
				return false;
			}
		}
	}
	return true;
}

int func_181(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (_0x341DE7ED1D2A1BFD(iParam0, 821147517, 0))
	{
		iVar0 = 0;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 2055293595, 0))
	{
		iVar0 = 1;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1992562672, 0))
	{
		iVar0 = 2;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1458930564, 0))
	{
		iVar0 = 3;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1046587084, 0))
	{
		iVar0 = 4;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 1943944625, 0))
	{
		iVar0 = 5;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1999870067, 0))
	{
		iVar0 = 6;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 2048281121, 0))
	{
		iVar0 = 7;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -109983526, 0))
	{
		iVar0 = 8;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1394888785, 0))
	{
		iVar0 = 9;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -144826511, 0))
	{
		iVar0 = 10;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 19149565, 0))
	{
		iVar0 = 11;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 310957510, 0))
	{
		iVar0 = 12;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, 742787396, 0))
	{
		iVar0 = 13;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1604914832, 0))
	{
		iVar0 = 14;
	}
	else if (_0x341DE7ED1D2A1BFD(iParam0, -1092211054, 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_182(int iParam0, int iParam1, int iParam2)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = -99;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = 124;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = 140;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 207)
		{
			iVar0 = 188;
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 204;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 240)
		{
			iVar0 = 236;
		}
		else if (iParam1 >= 241)
		{
			iVar1 = func_188(iParam0, iParam1, 8, 3);
			if (iVar1 != -1)
			{
				iVar2 = _0xC17AD0E5752BECDA(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					get_variant_component(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 11)
					{
						if (iVar4 != 0 && iVar4 != 1849449579)
						{
							iVar0 = func_95(iParam0, iVar4, 11, 3);
							return iVar0;
						}
						else
						{
							iVar0 = iVar5;
							return iVar0;
						}
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 32)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 33)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 49)
		{
			iVar0 = 64;
		}
		else if (iParam1 <= 65)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 66)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 67)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 68)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 69)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 70)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 86)
		{
			iVar0 = 176;
		}
		else if (iParam1 <= 102)
		{
			iVar0 = 192;
		}
		else if (iParam1 <= 118)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 119)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 135)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 136)
		{
			iVar7 = func_188(iParam0, iParam1, 8, 4);
			if (iVar7 != -1)
			{
				iVar8 = _0xC17AD0E5752BECDA(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					get_variant_component(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 11)
					{
						if (iVar10 != 0 && iVar10 != 1849449579)
						{
							iVar0 = func_95(iParam0, iVar10, 11, 4);
							return iVar0;
						}
						else
						{
							iVar0 = iVar11;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != -99)
	{
		iVar0 += iParam2;
	}
	return iVar0;
}

bool func_183(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if ((((((iParam1 >= 48 && iParam1 < 64) || (iParam1 >= 64 && iParam1 < 80)) || (iParam1 >= 96 && iParam1 < 108)) || (iParam1 >= 108 && iParam1 < 124)) || (iParam1 >= 156 && iParam1 < 172)) || (iParam1 >= 237 && _0x341DE7ED1D2A1BFD(func_188(iParam0, iParam1, 11, 3), -1393156190, 0)))
			{
				return true;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if ((((((iParam1 >= 16 && iParam1 < 32) || (iParam1 >= 96 && iParam1 < 112)) || (iParam1 >= 112 && iParam1 < 128)) || (iParam1 >= 128 && iParam1 < 144)) || (iParam1 >= 160 && iParam1 < 176)) || (iParam1 >= 256 && _0x341DE7ED1D2A1BFD(func_188(iParam0, iParam1, 11, 4), -1393156190, 0)))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_184(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<10> Var13;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	struct<10> Var48;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	
	iVar0 = -99;
	iVar1 = 1;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar2 = -1;
		iVar3 = -1;
		if (iParam2 >= 237)
		{
			iVar2 = func_188(iParam0, iParam2, 11, 3);
			iVar3 = func_181(iVar2);
		}
		iVar4 = -1;
		iVar5 = -1;
		if (iParam1 >= 237)
		{
			iVar4 = func_188(iParam0, iParam1, 11, 3);
			iVar5 = func_181(iVar4);
		}
		if (iVar2 != -1)
		{
			if (_0x341DE7ED1D2A1BFD(iVar2, -491588875, 0))
			{
				return -99;
			}
		}
		if (iVar2 != -1)
		{
			if (((_0x341DE7ED1D2A1BFD(iVar2, -1347486026, 0) || _0x341DE7ED1D2A1BFD(iVar2, -1274099003, 0)) || _0x341DE7ED1D2A1BFD(iVar2, 1723403459, 0)) || _0x341DE7ED1D2A1BFD(iVar2, 1538937264, 0))
			{
				if ((((((iParam1 >= 124 && iParam1 <= 139) || (iParam1 >= 188 && iParam1 <= 235)) || iVar5 == 8) || iVar5 == 12) || iVar5 == 13) || iVar5 == 14)
				{
					return -99;
				}
			}
			if ((_0x341DE7ED1D2A1BFD(iVar2, -1655154167, 0) || _0x341DE7ED1D2A1BFD(iVar2, -1719167561, 0)) || _0x341DE7ED1D2A1BFD(iVar2, 1431529976, 0))
			{
				return -99;
			}
			if (_0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0))
			{
				if ((((((((((iParam1 >= 80 && iParam1 <= 95) || (iParam1 >= 124 && iParam1 <= 139)) || (iParam1 >= 140 && iParam1 <= 155)) || (iParam1 >= 188 && iParam1 <= 235)) || iVar5 == 5) || iVar5 == 8) || iVar5 == 9) || iVar5 == 12) || iVar5 == 13) || iVar5 == 14)
				{
					return -99;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar2, 264959411, 0))
			{
				if ((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0) || iVar5 == 1) || iVar5 == 5) || iVar5 == 15)
				{
				}
				else
				{
					return -99;
				}
			}
			if (_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0) && !_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0))
			{
				return -99;
			}
			if (_0x341DE7ED1D2A1BFD(iVar2, -1719338724, 0))
			{
				if ((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 16 && iParam1 <= 31)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 124 && iParam1 <= 139)) || (iParam1 >= 236 && iParam1 <= 236)) || iVar5 == 0) || iVar5 == 1) || iVar5 == 5) || iVar5 == 8) || iVar5 == 15)
				{
				}
				else
				{
					return -99;
				}
			}
		}
		iVar6 = 0;
		iVar7 = false;
		if (_0x341DE7ED1D2A1BFD(iVar4, -641612092, 0))
		{
			iVar7 = true;
			if (((_0x341DE7ED1D2A1BFD(iVar2, 470686834, 0) && _0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0)) || _0x341DE7ED1D2A1BFD(iVar2, -416620954, 0)) || _0x341DE7ED1D2A1BFD(iVar2, -1507532917, 0))
			{
				iVar6 = 1;
			}
			else if ((_0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0) || _0x341DE7ED1D2A1BFD(iVar2, -1410897066, 0)) || _0x341DE7ED1D2A1BFD(iVar2, -1351486939, 0))
			{
				iVar6 = 0;
			}
			else
			{
				iVar6 = -1;
			}
		}
		if (iVar7)
		{
			if (iVar6 != -1)
			{
				iVar8 = _0xC17AD0E5752BECDA(iVar4);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					get_variant_component(iVar4, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8)
					{
						if ((((iVar6 == 3 && _0x341DE7ED1D2A1BFD(iVar10, 1318819110, 0)) || (iVar6 == 2 && _0x341DE7ED1D2A1BFD(iVar10, -1138757583, 0))) || (iVar6 == 1 && _0x341DE7ED1D2A1BFD(iVar10, 647976134, 0))) || (((iVar6 == 0 && !_0x341DE7ED1D2A1BFD(iVar10, 647976134, 0)) && !_0x341DE7ED1D2A1BFD(iVar10, -1138757583, 0)) && !_0x341DE7ED1D2A1BFD(iVar10, 1318819110, 0)))
						{
							if (iVar10 != 0 && iVar10 != 1849449579)
							{
								iVar0 = func_95(iParam0, iVar10, 8, 3);
							}
							else
							{
								iVar0 = iVar11;
							}
							iVar9 = iVar8 + 1;
							iVar1 = 0;
							return iVar0;
						}
					}
					iVar9++;
				}
			}
			return -99;
		}
		if ((iParam2 >= 96 && iParam2 <= 107) || iVar3 == 6)
		{
			if (iParam1 <= 15)
			{
				iVar0 = 32;
			}
			else if (iParam1 <= 31)
			{
				iVar0 = 224;
			}
			else if (iParam1 == 236)
			{
				iVar0 = 240;
			}
			else if ((iParam1 >= 220 && iParam1 <= 235) && func_185())
			{
				iVar0 = 34;
				iVar1 = 0;
				init_shop_ped_component(&Var13);
				if (Global_2560784[1] != 0)
				{
					_get_num_props_from_outfit(3, 6, -1, 0, -1, 8);
					get_shop_ped_query_component(Global_2560781[1], &Var13);
					if (Var13.f_1 != Global_2560784[1])
					{
						Global_2560784[1] = 0;
						Global_2560781[1] = 0;
					}
				}
				if (Global_2560784[1] == 0)
				{
					iVar31 = 0;
					iVar32 = _get_num_props_from_outfit(3, 6, -1, 0, -1, 8);
					iVar30 = 0;
					while (iVar30 < iVar32)
					{
						get_shop_ped_query_component(iVar30, &Var13);
						if (!_is_dlc_data_empty(Var13))
						{
							if (get_hash_key(&(Var13.f_9)) == -1665616807 && _0x341DE7ED1D2A1BFD(Var13.f_1, 647976134, 0))
							{
								Global_2560784[1] = Var13.f_1;
								Global_2560781[1] = iVar31;
								iVar30 = iVar32 + 1;
							}
							iVar31++;
						}
						iVar30++;
					}
				}
				if (Global_2560784[1] != 0)
				{
					iVar0 = func_96(iParam0, func_204(8)) + Global_2560781[1];
					iVar1 = 1;
				}
			}
			else
			{
				iVar0 = 34;
				iVar1 = 0;
				if (iParam1 >= 237)
				{
					iVar33 = func_188(iParam0, iParam1, 11, 3);
					if ((iVar33 != -1 && !_0x341DE7ED1D2A1BFD(iVar33, 310957510, 0)) && !_0x341DE7ED1D2A1BFD(iVar33, -109983526, 0))
					{
						iVar34 = _0xC17AD0E5752BECDA(iVar33);
						iVar35 = 0;
						while (iVar35 < iVar34)
						{
							get_variant_component(iVar33, iVar35, &iVar36, &iVar37, &iVar38);
							if (iVar38 == 8)
							{
								if (iVar36 != 0 && iVar36 != 1849449579)
								{
									iVar0 = func_95(iParam0, iVar36, 8, 3);
								}
								else
								{
									iVar0 = iVar37;
								}
							}
							iVar35++;
						}
					}
				}
			}
		}
		else if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 107)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 123)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 139)
		{
			iVar0 = 128;
		}
		else if (iParam1 <= 155)
		{
			iVar0 = 144;
		}
		else if (iParam1 <= 171)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 187)
		{
			iVar0 = 2;
			iVar1 = 0;
		}
		else if (iParam1 <= 203 || iVar5 == 12)
		{
			if (((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 108 && iParam2 <= 123)) || iVar3 == 3) || iVar3 == 7) || _0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0))
			{
				iVar0 = 2;
				iVar1 = 0;
			}
			else
			{
				iVar39 = 0;
				if (iParam2 >= 236 && _0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0))
				{
					iVar39 = 1;
				}
				iVar40 = func_188(iParam0, iParam1, 11, 3);
				if (iVar40 != -1)
				{
					iVar41 = _0xC17AD0E5752BECDA(iVar40);
					iVar42 = 0;
					while (iVar42 < iVar41)
					{
						get_variant_component(iVar40, iVar42, &iVar43, &iVar44, &iVar45);
						if (iVar45 == 8 && iVar39 == _0x341DE7ED1D2A1BFD(iVar43, 1680519719, 0))
						{
							if (iVar43 != 0 && iVar43 != 1849449579)
							{
								iVar0 = func_95(iParam0, iVar43, 8, 3);
							}
							else
							{
								iVar0 = iVar44;
							}
							iVar42 = iVar41 + 1;
							iVar1 = 0;
						}
						iVar42++;
					}
				}
				else
				{
					iVar0 = func_95(iParam0, -1739646902, 8, 3);
					iVar1 = 1;
				}
			}
		}
		else if (iParam1 <= 219)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 235)
		{
			iVar0 = 2;
			iVar1 = 0;
			if (func_185())
			{
				iVar46 = 0;
				iVar47 = 0;
				if ((iParam2 >= 96 && iParam2 <= 107) || (iParam2 >= 236 && _0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0)))
				{
					iVar46 = 1;
					iVar47 = 1;
				}
				init_shop_ped_component(&Var48);
				if (Global_2560784[iVar47] != 0)
				{
					_get_num_props_from_outfit(3, 6, -1, 0, -1, 8);
					get_shop_ped_query_component(Global_2560781[iVar47], &Var48);
					if (Var48.f_1 != Global_2560784[iVar47])
					{
						Global_2560784[iVar47] = 0;
						Global_2560781[iVar47] = 0;
					}
				}
				if (Global_2560784[iVar47] == 0)
				{
					iVar66 = 0;
					iVar67 = _get_num_props_from_outfit(3, 6, -1, 0, -1, 8);
					iVar65 = 0;
					while (iVar65 < iVar67)
					{
						get_shop_ped_query_component(iVar65, &Var48);
						if (!_is_dlc_data_empty(Var48))
						{
							if (get_hash_key(&(Var48.f_9)) == -1665616807 && iVar46 == _0x341DE7ED1D2A1BFD(Var48.f_1, 647976134, 0))
							{
								Global_2560784[iVar47] = Var48.f_1;
								Global_2560781[iVar47] = iVar66;
								iVar65 = iVar67 + 1;
							}
							iVar66++;
						}
						iVar65++;
					}
				}
				if (Global_2560784[iVar47] != 0)
				{
					iVar0 = func_96(iParam0, func_204(8)) + Global_2560781[iVar47];
					iVar1 = 1;
				}
			}
			if ((((iParam2 >= 237 && _0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0)) || (iParam2 >= 108 && iParam2 <= 123)) || iVar3 == 7) || _0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0))
			{
				iVar0 = -99;
			}
		}
		else if (iParam1 <= 236)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 237)
		{
			iVar0 = 2;
			iVar1 = 0;
			iVar68 = func_188(iParam0, iParam1, 11, 3);
			if (iVar68 != -1)
			{
				iVar69 = _0xC17AD0E5752BECDA(iVar68);
				iVar70 = 0;
				while (iVar70 < iVar69)
				{
					get_variant_component(iVar68, iVar70, &iVar71, &iVar72, &iVar73);
					if (iVar73 == 8)
					{
						if (iVar71 != 0 && iVar71 != 1849449579)
						{
							iVar0 = func_95(iParam0, iVar71, 8, 3);
						}
						else
						{
							iVar0 = iVar72;
						}
						iVar70 = iVar69 + 1;
						iVar1 = 0;
					}
					iVar70++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		iVar74 = -1;
		iVar75 = -1;
		if (iParam2 >= 256)
		{
			iVar74 = func_188(iParam0, iParam2, 11, 4);
			iVar75 = func_181(iVar74);
		}
		iVar76 = -1;
		iVar77 = -1;
		if (iParam1 >= 256)
		{
			iVar76 = func_188(iParam0, iParam1, 11, 4);
			iVar77 = func_181(iVar76);
		}
		if (iVar74 != -1)
		{
			if (_0x341DE7ED1D2A1BFD(iVar74, -491588875, 0))
			{
				return -99;
			}
		}
		if (_0x341DE7ED1D2A1BFD(iVar74, -1719338724, 0))
		{
			if (((((((((((((((((((((((((iParam1 >= 0 && iParam1 <= 15) || (iParam1 >= 32 && iParam1 <= 47)) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 80 && iParam1 <= 95)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 208 && iParam1 <= 223)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar77 == 0) || iVar77 == 2) || iVar77 == 4) || iVar77 == 5) || iVar77 == 11) || iVar77 == 12) || iVar77 == 13) || iVar77 == 15) || iVar76 == -221826679) || iVar76 == 1172264892) || iVar76 == 1474853838) || iVar76 == 278369420) || iVar76 == -310817200) || iVar76 == -138976564) || iVar76 == -905541781) || iVar76 == 998321559) || iVar76 == 64401473)
			{
			}
			else
			{
				return -99;
			}
		}
		iVar78 = 0;
		iVar79 = false;
		if ((((((_0x341DE7ED1D2A1BFD(iVar76, -761463976, 0) || _0x341DE7ED1D2A1BFD(iVar76, -1347486026, 0)) || _0x341DE7ED1D2A1BFD(iVar76, -1119232689, 0)) || _0x341DE7ED1D2A1BFD(iVar76, 1784133476, 0)) || _0x341DE7ED1D2A1BFD(iVar76, 2044466679, 0)) || _0x341DE7ED1D2A1BFD(iVar76, -2020757158, 0)) || _0x341DE7ED1D2A1BFD(iVar76, -2020757158, 0))
		{
			iVar79 = true;
			if ((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || iVar75 == 1) || iVar75 == 8)
			{
				iVar78 = 2;
			}
			else if ((_0x341DE7ED1D2A1BFD(iVar74, 1769225721, 0) || _0x341DE7ED1D2A1BFD(iVar74, -1834446747, 0)) || _0x341DE7ED1D2A1BFD(iVar74, -868698159, 0))
			{
				iVar78 = 0;
			}
			else if ((((((((((((((iParam2 >= 160 && iParam2 <= 175) || iVar75 == 10) || _0x341DE7ED1D2A1BFD(iVar74, 684992453, 0)) || _0x341DE7ED1D2A1BFD(iVar74, 916636514, 0)) || _0x341DE7ED1D2A1BFD(iVar74, -1939378450, 0)) || _0x341DE7ED1D2A1BFD(iVar74, -820724897, 0)) || _0x341DE7ED1D2A1BFD(iVar74, 153792394, 0)) || _0x341DE7ED1D2A1BFD(iVar74, -872449705, 0)) || _0x341DE7ED1D2A1BFD(iVar74, 700658917, 0)) || _0x341DE7ED1D2A1BFD(iVar74, 1714969731, 0)) || _0x341DE7ED1D2A1BFD(iVar74, 745826556, 0)) || _0x341DE7ED1D2A1BFD(iVar74, 1055526375, 0)) || _0x341DE7ED1D2A1BFD(iVar74, 144417099, 0)) || _0x341DE7ED1D2A1BFD(iVar74, 947651647, 0))
			{
				if (_0x341DE7ED1D2A1BFD(iVar76, 1784133476, 0))
				{
					iVar78 = 1;
				}
				else if (_0x341DE7ED1D2A1BFD(iVar76, -1119232689, 0) || _0x341DE7ED1D2A1BFD(iVar76, 2044466679, 0))
				{
					iVar78 = 1;
				}
				else
				{
					iVar78 = -1;
				}
			}
			else
			{
				iVar78 = 1;
			}
		}
		if (_0x341DE7ED1D2A1BFD(iVar76, -1351486939, 0))
		{
			iVar79 = true;
			if ((((((((iParam2 >= 112 && iParam2 <= 127) || iVar75 == 7) || _0x341DE7ED1D2A1BFD(iVar74, 684992453, 0)) || _0x341DE7ED1D2A1BFD(iVar74, 916636514, 0)) || _0x341DE7ED1D2A1BFD(iVar74, -820724897, 0)) || _0x341DE7ED1D2A1BFD(iVar74, -872449705, 0)) || _0x341DE7ED1D2A1BFD(iVar74, -416620954, 0)) || _0x341DE7ED1D2A1BFD(iVar74, 947651647, 0))
			{
				if (_0x341DE7ED1D2A1BFD(iVar74, 1769225721, 0) || _0x341DE7ED1D2A1BFD(iVar74, -1834446747, 0))
				{
					iVar78 = 0;
				}
				else
				{
					iVar78 = 1;
				}
			}
			else if ((((((_0x341DE7ED1D2A1BFD(iVar74, 153792394, 0) || _0x341DE7ED1D2A1BFD(iVar74, 1322269404, 0)) || _0x341DE7ED1D2A1BFD(iVar74, 548036233, 0)) || _0x341DE7ED1D2A1BFD(iVar74, 700658917, 0)) || _0x341DE7ED1D2A1BFD(iVar74, -1014753511, 0)) || _0x341DE7ED1D2A1BFD(iVar74, -1410897066, 0)) || _0x341DE7ED1D2A1BFD(iVar74, -2119756144, 0))
			{
				iVar78 = 0;
			}
			else
			{
				iVar78 = -1;
			}
		}
		switch (iVar76)
		{
			case -221826679:
			case 1172264892:
			case 1474853838:
			case 278369420:
			case -310817200:
			case -138976564:
			case -905541781:
			case 998321559:
			case 64401473:
				iVar79 = true;
				if (_0x341DE7ED1D2A1BFD(iVar74, 1769225721, 0) || _0x341DE7ED1D2A1BFD(iVar74, -868698159, 0))
				{
					iVar78 = 1;
				}
				else if (_0x341DE7ED1D2A1BFD(iVar74, -1834446747, 0))
				{
					iVar78 = 2;
				}
				else if (((_0x341DE7ED1D2A1BFD(iVar74, -870074461, 0) || _0x341DE7ED1D2A1BFD(iVar74, -1719338724, 0)) || _0x341DE7ED1D2A1BFD(iVar74, -416620954, 0)) || _0x341DE7ED1D2A1BFD(iVar74, 947651647, 0))
				{
					iVar78 = 3;
				}
				else if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || (iParam2 >= 112 && iParam2 <= 127)) || iVar75 == 1) || iVar75 == 7) || iVar75 == 8)
				{
					iVar78 = 0;
				}
				else
				{
					iVar78 = -1;
				}
				break;
			
			case 619380843:
				iVar79 = true;
				if ((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 128 && iParam2 <= 143)) || iVar75 == 1) || iVar75 == 8)
				{
					iVar78 = 0;
				}
				else
				{
					iVar78 = -1;
				}
				break;
		}
		if (iVar79)
		{
			if (iVar78 != -1)
			{
				iVar80 = _0xC17AD0E5752BECDA(iVar76);
				iVar81 = 0;
				while (iVar81 < iVar80)
				{
					get_variant_component(iVar76, iVar81, &iVar82, &iVar83, &iVar84);
					if (iVar84 == 8)
					{
						if ((((iVar78 == 3 && _0x341DE7ED1D2A1BFD(iVar82, 1318819110, 0)) || (iVar78 == 2 && _0x341DE7ED1D2A1BFD(iVar82, -1138757583, 0))) || (iVar78 == 1 && _0x341DE7ED1D2A1BFD(iVar82, 647976134, 0))) || (((iVar78 == 0 && !_0x341DE7ED1D2A1BFD(iVar82, 647976134, 0)) && !_0x341DE7ED1D2A1BFD(iVar82, -1138757583, 0)) && !_0x341DE7ED1D2A1BFD(iVar82, 1318819110, 0)))
						{
							if (iVar82 != 0 && iVar82 != 1849449579)
							{
								iVar0 = func_95(iParam0, iVar82, 8, 4);
							}
							else
							{
								iVar0 = iVar83;
							}
							iVar81 = iVar80 + 1;
							iVar1 = 0;
							return iVar0;
						}
					}
					iVar81++;
				}
			}
			return -99;
		}
		if ((((((iParam1 >= 192 && iParam1 <= 207) || iVar77 == 12) && ((((iParam2 >= 96 && iParam2 <= 111) || (iParam2 >= 112 && iParam2 <= 127)) || iVar75 == 6) || iVar75 == 7)) && func_185()) && !_0x341DE7ED1D2A1BFD(iVar74, -416620954, 0)) && !_0x341DE7ED1D2A1BFD(iVar74, 947651647, 0))
		{
			iVar85 = iVar76;
			if (iParam1 == 199)
			{
				iVar0 = func_95(iParam0, 331193219, 8, 4);
			}
			else if (iParam1 == 200)
			{
				iVar0 = func_95(iParam0, 1115060468, 8, 4);
			}
			else if (iParam1 == 201)
			{
				iVar0 = func_95(iParam0, 779636984, 8, 4);
			}
			else if (iVar85 == 948380380)
			{
				iVar0 = func_95(iParam0, -570249206, 8, 4);
			}
			else if (iVar85 == 708412993)
			{
				iVar0 = func_95(iParam0, -876115052, 8, 4);
			}
			else if (iVar85 == 1974869305)
			{
				iVar0 = func_95(iParam0, -108599534, 8, 4);
			}
			else if (iVar85 == 1197916315)
			{
				iVar0 = func_95(iParam0, 200575961, 8, 4);
			}
			else if (iVar85 == 587593690)
			{
				iVar0 = func_95(iParam0, 961930907, 8, 4);
			}
			else if (iVar85 == 323213398)
			{
				iVar0 = func_95(iParam0, -257698508, 8, 4);
			}
			else if (iVar85 == 1050193651)
			{
				iVar0 = func_95(iParam0, 516534659, 8, 4);
			}
			else if (iVar85 == 811438717)
			{
				iVar0 = func_95(iParam0, -1174312584, 8, 4);
			}
			else if (iVar85 == -877868759)
			{
				iVar0 = func_95(iParam0, -1192794304, 8, 4);
			}
			else if (iVar85 == -1108464212)
			{
				iVar0 = func_95(iParam0, -2027256889, 8, 4);
			}
			else if (iVar85 == -467866094)
			{
				iVar0 = func_95(iParam0, -1670074789, 8, 4);
			}
			else if (iVar85 == -673000034)
			{
				iVar0 = func_95(iParam0, -326349175, 8, 4);
			}
			else if (iVar85 == -1984939718)
			{
				iVar0 = func_95(iParam0, -796060021, 8, 4);
			}
			iVar1 = 0;
		}
		else if (iParam1 <= 15)
		{
			if (((iParam2 >= 160 && iParam2 <= 175) || _0x341DE7ED1D2A1BFD(iVar74, 1769225721, 0)) || _0x341DE7ED1D2A1BFD(iVar74, -868698159, 0))
			{
				iVar0 = 16;
			}
			else
			{
				iVar0 = 0;
			}
		}
		else if (iParam1 <= 31)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 34;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 50;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = 71;
		}
		else if (iParam1 <= 207)
		{
			iVar1 = 0;
			switch (iParam1)
			{
				case 199:
					iVar0 = 94;
					break;
				
				case 200:
					iVar0 = 95;
					break;
				
				case 201:
					iVar0 = 96;
					break;
			}
			if ((iParam2 >= 160 && iParam2 <= 175) || iVar75 == 10)
			{
				return -99;
			}
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 103;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = 48;
			iVar1 = 0;
		}
		else if (iParam1 <= 255)
		{
			iVar0 = 120;
		}
		else if (iParam1 >= 256)
		{
			iVar0 = 48;
			iVar1 = 0;
			if (iVar76 != -1)
			{
				iVar86 = true;
				if (_0x341DE7ED1D2A1BFD(iVar76, 1965569012, 0))
				{
					iVar86 = false;
					if (iParam2 >= 256 && _0x341DE7ED1D2A1BFD(iVar74, -1200513218, 0))
					{
						iVar86 = true;
					}
				}
				if (iVar86)
				{
					iVar87 = 0;
					if (iParam2 >= 156 && iParam2 <= 171)
					{
						if (iVar77 == 12)
						{
							iVar87 = 1;
						}
					}
					iVar88 = _0xC17AD0E5752BECDA(iVar76);
					iVar89 = 0;
					while (iVar89 < iVar88)
					{
						get_variant_component(iVar76, iVar89, &iVar90, &iVar91, &iVar92);
						if (iVar92 == 8 && ((iVar90 == 0 || iVar90 == 1849449579) || iVar87 == _0x341DE7ED1D2A1BFD(iVar90, 647976134, 0)))
						{
							if (iVar90 != 0 && iVar90 != 1849449579)
							{
								iVar0 = func_95(iParam0, iVar90, 8, 4);
							}
							else
							{
								iVar0 = iVar91;
							}
							iVar89 = iVar88 + 1;
							iVar1 = 0;
						}
						iVar89++;
					}
				}
			}
		}
	}
	if (iVar1 && iVar0 != -99)
	{
		iVar0 += iParam3;
	}
	return iVar0;
}

int func_185()
{
	return is_dlc_present(42019760);
}

int func_186(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 2131039487;
							break;
						
						case 3:
							return 717379468;
							break;
						
						case 4:
							return -331193181;
							break;
						
						case 5:
							return 73557144;
							break;
						
						case 6:
							return -887980266;
							break;
						
						case 7:
							return -306315670;
							break;
						
						case 8:
							return -1154048938;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1301636615;
							break;
						
						case 3:
							return 1153996761;
							break;
						
						case 4:
							return -1315084792;
							break;
						
						case 5:
							return 1655884038;
							break;
						
						case 6:
							return 1489229833;
							break;
						
						case 7:
							return -1929503325;
							break;
						
						case 8:
							return -1189128367;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 538171135;
							break;
						
						case 3:
							return -244985062;
							break;
						
						case 4:
							return 442977103;
							break;
						
						case 5:
							return -1385727891;
							break;
						
						case 6:
							return 1309989623;
							break;
						
						case 7:
							return 1191418696;
							break;
						
						case 8:
							return 189293242;
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return -1438684756;
							break;
						
						case 1:
							return 194146035;
							break;
						
						case 2:
							return -420901598;
							break;
						
						case 3:
							return 2107411814;
							break;
						
						case 4:
							return 1242686602;
							break;
						
						case 5:
							return -596540583;
							break;
						
						case 6:
							return -653786071;
							break;
						
						case 7:
							return 1460048630;
							break;
						
						case 8:
							return -2079589815;
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1947098483;
							break;
						
						case 3:
							return 569295621;
							break;
						
						case 4:
							return -208098559;
							break;
						
						case 5:
							return 1256246195;
							break;
						
						case 6:
							return 1605755939;
							break;
						
						case 7:
							return 874748698;
							break;
						
						case 8:
							return -137095372;
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1950801119;
							break;
						
						case 3:
							return -1158564771;
							break;
						
						case 4:
							return -69929428;
							break;
						
						case 5:
							return 1957730707;
							break;
						
						case 6:
							return 374587029;
							break;
						
						case 7:
							return -210146735;
							break;
						
						case 8:
							return 336100633;
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1148238879;
							break;
						
						case 3:
							return -958872024;
							break;
						
						case 4:
							return 1353141306;
							break;
						
						case 5:
							return 394070886;
							break;
						
						case 6:
							return 255958050;
							break;
						
						case 7:
							return -521728710;
							break;
						
						case 8:
							return 1843470374;
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 670760190;
							break;
						
						case 3:
							return 799655540;
							break;
						
						case 4:
							return -99079306;
							break;
						
						case 5:
							return 1989760633;
							break;
						
						case 6:
							return 1157052274;
							break;
						
						case 7:
							return -1196262225;
							break;
						
						case 8:
							return -664356399;
							break;
					}
					break;
				
				case 8:
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1875496913;
							break;
						
						case 3:
							return -1978886808;
							break;
						
						case 4:
							return -1279403197;
							break;
						
						case 5:
							return -1459998821;
							break;
						
						case 6:
							return 1786467932;
							break;
						
						case 7:
							return -795005246;
							break;
						
						case 8:
							return -1147008986;
							break;
					}
					break;
				
				case 10:
					break;
				
				case 11:
				case 16:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1925009287;
							break;
						
						case 3:
							return -268733734;
							break;
						
						case 4:
							return -2124412821;
							break;
						
						case 5:
							return -360036697;
							break;
						
						case 6:
							return -926433555;
							break;
						
						case 7:
							return 985839403;
							break;
						
						case 8:
							return -234436397;
							break;
						
						case 9:
							return 1165919867;
							break;
						
						case 10:
							return 1606204151;
							break;
						
						case 11:
							return 1774276352;
							break;
						
						case 12:
							return 1934254610;
							break;
						
						case 13:
							return 980775017;
							break;
						
						case 14:
							return 399321881;
							break;
					}
					break;
				
				case 12:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 493536654;
							break;
						
						case 3:
							return -1759053005;
							break;
						
						case 4:
							return 630158551;
							break;
						
						case 5:
							return -707909514;
							break;
						
						case 6:
							return 1254885089;
							break;
						
						case 7:
							return 596977742;
							break;
						
						case 8:
							return 1861540342;
							break;
					}
					break;
				
				case 13:
					break;
				
				case 14:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -840276017;
							break;
						
						case 3:
							return 756400133;
							break;
						
						case 4:
							return 1148630611;
							break;
						
						case 5:
							return -893909282;
							break;
						
						case 6:
							return 1485630477;
							break;
						
						case 7:
							return -934174767;
							break;
						
						case 8:
							return -1866981918;
							break;
					}
					break;
				
				case 15:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -591418577;
							break;
						
						case 3:
							return -2029591494;
							break;
						
						case 4:
							return 1293565798;
							break;
						
						case 5:
							return 1230599348;
							break;
						
						case 6:
							return 80125466;
							break;
						
						case 7:
							return 768104686;
							break;
						
						case 8:
							return -1559755280;
							break;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -414534788;
							break;
						
						case 3:
							return 185531215;
							break;
						
						case 4:
							return -775417853;
							break;
						
						case 5:
							return 1619085169;
							break;
						
						case 6:
							return 888176083;
							break;
						
						case 7:
							return -868636293;
							break;
						
						case 8:
							return -481241218;
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 982904848;
							break;
						
						case 3:
							return 1053086051;
							break;
						
						case 4:
							return 1565990968;
							break;
						
						case 5:
							return 869354244;
							break;
						
						case 6:
							return -1137668925;
							break;
						
						case 7:
							return -245327436;
							break;
						
						case 8:
							return -2092735770;
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1286693086;
							break;
						
						case 3:
							return 443095479;
							break;
						
						case 4:
							return -2039335276;
							break;
						
						case 5:
							return 2083407994;
							break;
						
						case 6:
							return 533001127;
							break;
						
						case 7:
							return 1728875992;
							break;
						
						case 8:
							return -1665814217;
							break;
					}
					break;
				
				case 3:
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 1402439971;
							break;
						
						case 1:
							return -77210386;
							break;
						
						case 2:
							return 206640931;
							break;
						
						case 3:
							return 1434974169;
							break;
						
						case 4:
							return -2076303403;
							break;
						
						case 5:
							return 2073263245;
							break;
						
						case 6:
							return 229693395;
							break;
						
						case 7:
							return -981246739;
							break;
						
						case 8:
							return 2107613618;
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1954830049;
							break;
						
						case 3:
							return 1793062342;
							break;
						
						case 4:
							return -2118725149;
							break;
						
						case 5:
							return -849747283;
							break;
						
						case 6:
							return 1582789248;
							break;
						
						case 7:
							return -1675687168;
							break;
						
						case 8:
							return -381889304;
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1942207698;
							break;
						
						case 3:
							return -743369876;
							break;
						
						case 4:
							return 582693633;
							break;
						
						case 5:
							return -1280288284;
							break;
						
						case 6:
							return -1000105499;
							break;
						
						case 7:
							return -2147200029;
							break;
						
						case 8:
							return -1838714866;
							break;
					}
					break;
				
				case 7:
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1187050736;
							break;
						
						case 3:
							return -1420954963;
							break;
						
						case 4:
							return 232453794;
							break;
						
						case 5:
							return 406178867;
							break;
						
						case 6:
							return 739288468;
							break;
						
						case 7:
							return -252997160;
							break;
						
						case 8:
							return -2044888090;
							break;
					}
					break;
				
				case 9:
					break;
				
				case 10:
					break;
				
				case 11:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 1703311969;
							break;
						
						case 3:
							return 1875667738;
							break;
						
						case 4:
							return 1291347593;
							break;
						
						case 5:
							return -713453992;
							break;
						
						case 6:
							return 1417339152;
							break;
						
						case 7:
							return 587281350;
							break;
						
						case 8:
							return -86904022;
							break;
					}
					break;
				
				case 12:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -1858518769;
							break;
						
						case 3:
							return 44044890;
							break;
						
						case 4:
							return -1131137757;
							break;
						
						case 5:
							return 213313570;
							break;
						
						case 6:
							return -233124949;
							break;
						
						case 7:
							return 171345846;
							break;
						
						case 8:
							return 1452902248;
							break;
					}
					break;
				
				case 13:
					break;
				
				case 14:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return 747852506;
							break;
						
						case 3:
							return 216238268;
							break;
						
						case 4:
							return 404894315;
							break;
						
						case 5:
							return 950341895;
							break;
						
						case 6:
							return 1159773017;
							break;
						
						case 7:
							return -957185436;
							break;
						
						case 8:
							return -240960885;
							break;
					}
					break;
				
				case 15:
					switch (iParam2)
					{
						case 0:
							break;
						
						case 1:
							break;
						
						case 2:
							return -259688953;
							break;
						
						case 3:
							return -736534114;
							break;
						
						case 4:
							return -1673886961;
							break;
						
						case 5:
							return 976562040;
							break;
						
						case 6:
							return -1794803798;
							break;
						
						case 7:
							return -81887956;
							break;
						
						case 8:
							return 1689176064;
							break;
					}
					break;
			}
			break;
	}
	return -1;
}

int func_187(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = -99;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam2 >= 237)
			{
				iVar2 = func_188(iParam0, iParam2, 11, 3);
				iVar1 = func_181(iVar2);
			}
			if (iParam1 >= 241)
			{
				iVar4 = func_188(iParam0, iParam1, 8, 3);
				iVar3 = func_181(iVar4);
			}
			if ((iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -416620954, 0)) || (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -1507532917, 0)))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 4;
				}
			}
			else if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -1719338724, 0))
			{
				if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -1939378450, 0))
			{
				if ((iParam1 >= 192 && iParam1 <= 207) || iVar3 == 12)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 11;
				}
			}
			else if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, 264959411, 0))
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 16 && iParam1 <= 31) || iVar3 == 1)
				{
					iVar0 = 1;
				}
			}
			else if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, 1625463492, 0))
			{
				iVar0 = 12;
			}
			else if ((((((((((iParam2 >= 48 && iParam2 <= 63) || (iParam2 >= 64 && iParam2 <= 79)) || (iParam2 >= 96 && iParam2 <= 107)) || (iParam2 >= 108 && iParam2 <= 123)) || (iParam2 >= 156 && iParam2 <= 171)) || iVar1 == 3) || iVar1 == 4) || iVar1 == 6) || iVar1 == 7) || iVar1 == 10)
			{
				if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if (iParam1 == 240 || iVar3 == 15)
				{
					iVar0 = 14;
				}
				else if ((iParam1 >= 160 && iParam1 <= 175) || iVar3 == 10)
				{
					iVar0 = 4;
				}
				else if ((iParam1 >= 176 && iParam1 <= 191) || iVar3 == 11)
				{
					iVar0 = 12;
				}
				else if ((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 224 && iParam1 <= 239)) || iVar3 == 1) || iVar3 == 14)
				{
					iVar0 = 1;
				}
				else if ((iParam1 >= 80 && iParam1 <= 95) || iVar3 == 5)
				{
					iVar0 = 6;
				}
				else if ((iParam1 >= 32 && iParam1 <= 47) || iVar3 == 2)
				{
					iVar0 = 4;
				}
				else if (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, 1847239679, 0))
				{
					if (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, -1914383230, 0))
					{
						iVar0 = 4;
					}
					else
					{
						iVar0 = 1;
					}
				}
				else if ((iParam1 >= 144 && iParam1 <= 159) || iVar3 == 9)
				{
					iVar0 = 1;
				}
				else if (iParam1 >= 241)
				{
					if (iVar4 != -1)
					{
						iVar5 = _get_num_forced_components(iVar4);
						iVar6 = 0;
						while (iVar6 < iVar5)
						{
							get_forced_component(iVar4, iVar6, &iVar7, &iVar8, &iVar9);
							if (iVar9 == 3)
							{
								if (iVar7 != 0 && iVar7 != 1849449579)
								{
									iVar0 = func_95(iParam0, iVar7, 3, 3);
								}
								else
								{
									iVar0 = iVar8;
								}
								iVar6 = iVar5 + 1;
							}
							iVar6++;
						}
					}
				}
			}
			else if ((iParam2 >= 172 && iParam2 <= 187) || iVar1 == 11)
			{
				if (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, -7109286, 0))
				{
					iVar0 = 6;
				}
				else if ((((iParam1 >= 48 && iParam1 <= 63) || (iParam1 >= 112 && iParam1 <= 127)) || iVar3 == 3) || iVar3 == 7)
				{
					iVar0 = 11;
				}
				else if (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, 1147939952, 0))
				{
					iVar0 = 12;
				}
				else if (iParam1 == 240)
				{
					iVar0 = 15;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam2 >= 256)
			{
				iVar2 = func_188(iParam0, iParam2, 11, 4);
				iVar1 = func_181(iVar2);
			}
			if (iParam1 >= 136)
			{
				iVar4 = func_188(iParam0, iParam1, 8, 4);
				iVar3 = func_181(iVar4);
				switch (iVar4)
				{
					case 327496660:
					case -63928837:
					case 695885966:
					case 525421628:
					case 1426634666:
					case 1160648693:
					case 1928065904:
					case 1748557322:
					case -1777223233:
					case -1991794649:
					case 917309067:
					case -1629661498:
						iVar3 = 15;
						break;
					
					case 587358117:
					case 742748715:
					case 490263574:
					case 682683142:
					case -1172927021:
					case -174365543:
					case -1450128251:
					case -1811439245:
					case 1578218888:
					case -1193481443:
					case 1549742623:
					case 1309119856:
					case 2143418596:
					case 1905745039:
					case 428026984:
					case 1547729071:
					case -1848319017:
						iVar3 = 13;
						break;
					}
			}
			if (_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
			{
				iVar0 = 0;
			}
			else if (((iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, 1965569012, 0)) && !func_183(iParam0, iParam2)) && !_0x341DE7ED1D2A1BFD(iVar2, 320460654, 0))
			{
				if (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, 1147939952, 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 0;
				}
			}
			else if (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, 1353777856, 0))
			{
				iVar0 = 7;
			}
			else if ((iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, -849839091, 0)) || (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, -2088146832, 0)))
			{
				iVar0 = 3;
			}
			else if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -2102859770, 0))
			{
				if (_0x341DE7ED1D2A1BFD(func_188(iParam0, iParam3, 4, 4), -33031567, 0))
				{
					iVar0 = 11;
				}
				else
				{
					iVar0 = 15;
				}
			}
			else if (((((iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, -1119232689, 0)) || (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, 1976716889, 0))) || (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, -1488441032, 0))) || (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, 2044466679, 0))) || (iVar4 != -1 && _0x341DE7ED1D2A1BFD(iVar4, -1419806467, 0)))
			{
				if ((((((iParam2 >= 16 && iParam2 <= 31) || (iParam2 >= 96 && iParam2 <= 111)) || (iParam2 >= 128 && iParam2 <= 143)) || iVar1 == 1) || iVar1 == 6) || iVar1 == 8)
				{
					iVar0 = 1;
				}
				else if ((((((((((((((((iParam2 >= 112 && iParam2 <= 127) || (iParam2 >= 160 && iParam2 <= 175)) || iVar1 == 7) || iVar1 == 10) || _0x341DE7ED1D2A1BFD(iVar2, 2026620439, 0)) || _0x341DE7ED1D2A1BFD(iVar2, 916636514, 0)) || _0x341DE7ED1D2A1BFD(iVar2, 1322269404, 0)) || _0x341DE7ED1D2A1BFD(iVar2, 548036233, 0)) || _0x341DE7ED1D2A1BFD(iVar2, -870074461, 0)) || _0x341DE7ED1D2A1BFD(iVar2, -1174924468, 0)) || _0x341DE7ED1D2A1BFD(iVar2, -868698159, 0)) || _0x341DE7ED1D2A1BFD(iVar2, 1769225721, 0)) || _0x341DE7ED1D2A1BFD(iVar2, -1834446747, 0)) || _0x341DE7ED1D2A1BFD(iVar2, -1719338724, 0)) || _0x341DE7ED1D2A1BFD(iVar2, -416620954, 0)) || _0x341DE7ED1D2A1BFD(iVar2, 947651647, 0))
				{
					iVar0 = 3;
				}
				else if (_0x341DE7ED1D2A1BFD(iVar2, -1939378450, 0))
				{
					iVar0 = 9;
				}
			}
			else if (iVar2 != -1 && _0x341DE7ED1D2A1BFD(iVar2, -870074461, 0))
			{
				if ((((_0x341DE7ED1D2A1BFD(iVar4, 684992453, 0) || _0x341DE7ED1D2A1BFD(iVar4, 916636514, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1939378450, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 441715397, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 264959411, 0))
				{
					iVar0 = 1;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else if ((iParam2 >= 16 && iParam2 <= 31) || iVar1 == 1)
			{
				if ((((iParam1 >= 50 && iParam1 <= 65) || (iParam1 >= 120 && iParam1 <= 135)) || iVar3 == 5) || iVar3 == 15)
				{
					iVar0 = 5;
				}
				else if (iParam1 >= 136)
				{
					if (iVar4 != -1)
					{
						iVar10 = _get_num_forced_components(iVar4);
						iVar11 = 0;
						while (iVar11 < iVar10)
						{
							get_forced_component(iVar4, iVar11, &iVar12, &iVar13, &iVar14);
							if (iVar14 == 3)
							{
								if (iVar12 != 0 && iVar12 != 1849449579)
								{
									iVar0 = func_95(iParam0, iVar12, 3, 4);
								}
								else
								{
									iVar0 = iVar13;
								}
								iVar11 = iVar10 + 1;
							}
							iVar11++;
						}
					}
				}
			}
			else if (((iParam2 >= 112 && iParam2 <= 127) || iVar1 == 7) || _0x341DE7ED1D2A1BFD(iVar2, -1719338724, 0))
			{
				if ((((_0x341DE7ED1D2A1BFD(iVar4, 684992453, 0) || _0x341DE7ED1D2A1BFD(iVar4, 916636514, 0)) || _0x341DE7ED1D2A1BFD(iVar4, -1939378450, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 441715397, 0)) || _0x341DE7ED1D2A1BFD(iVar4, 264959411, 0))
				{
					iVar0 = 3;
				}
				else
				{
					iVar0 = 6;
				}
			}
			break;
	}
	return iVar0;
}

int func_188(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		init_shop_ped_prop(&Var0);
		iVar18 = 0;
		iVar19 = iParam1 - func_97(iParam0);
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = _get_num_props_from_outfit(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			get_shop_ped_query_prop(iVar17, &Var0);
			if (!_is_dlc_data_empty(Var0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		init_shop_ped_component(&Var21);
		iVar39 = 0;
		iVar40 = iParam1 - func_96(iParam0, func_204(iParam2));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_69432.f_26[iParam2] && iParam1 == Global_69432[iParam2]) && Global_69432.f_13[iParam2] != 0)
		{
			return Global_69432.f_13[iParam2];
		}
		iVar41 = _get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_204(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			get_shop_ped_query_component(iVar38, &Var21);
			if (!_is_dlc_data_empty(Var21))
			{
				if (iVar39 == iVar40)
				{
					Global_69432.f_13[iParam2] = Var21.f_1;
					Global_69432[iParam2] = iParam1;
					Global_69432.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_189(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == 14)
	{
		iVar0 = iParam2;
		return func_123(iVar0);
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_101154.f_1826.f_539[0 /*65*/].f_59;
					break;
				
				case 3:
					if (Global_101154.f_7775.f_99.f_58[120])
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case 4:
					if (Global_101154.f_7775.f_99.f_58[120])
					{
						return 1;
					}
					else
					{
						return 0;
					}
					break;
				
				case 6:
					return 6;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_101154.f_1826.f_539[1 /*65*/].f_59;
					break;
				
				case 3:
					return 73;
					break;
				
				case 4:
					return 24;
					break;
				
				case 6:
					return 17;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 26;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 2:
					return Global_101154.f_1826.f_539[2 /*65*/].f_59;
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 91;
					break;
				
				case 6:
					return 8;
					break;
				
				case 5:
					return 0;
					break;
				
				case 8:
					return 15;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 0;
					break;
				
				case 12:
					break;
				
				case 13:
					return 31;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 2:
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 80;
					break;
				
				case 6:
					return 10;
					break;
				
				case 5:
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 2;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					break;
				
				case 2:
					break;
				
				case 3:
					return 0;
					break;
				
				case 4:
					return 233;
					break;
				
				case 6:
					return 16;
					break;
				
				case 5:
					break;
				
				case 8:
					return 0;
					break;
				
				case 9:
					return 0;
					break;
				
				case 10:
					return 0;
					break;
				
				case 1:
					return 0;
					break;
				
				case 7:
					return 0;
					break;
				
				case 11:
					return 78;
					break;
			}
			break;
		
		default:
			break;
	}
	return -99;
}

int func_190(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || is_ped_injured(iParam0))
	{
		return -99;
	}
	iVar0 = func_204(iParam1);
	iVar1 = get_ped_drawable_variation(iParam0, iVar0);
	iVar2 = get_ped_texture_variation(iParam0, iVar0);
	return func_191(iParam0, iVar1, iVar2, iParam1);
}

int func_191(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_204(iParam3);
	iVar1 = get_number_of_ped_drawable_variations(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= iVar1 - 1)
	{
		iVar5 = get_number_of_ped_texture_variations(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 += iVar5;
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= iVar5 - 1)
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

int func_192(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
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
	int iVar140;
	int iVar141;
	int iVar142;
	int iVar143;
	int iVar144;
	int iVar145;
	int iVar146;
	int iVar147;
	int iVar148;
	
	iVar0 = -99;
	if (iParam4 == 2)
	{
		func_193(iParam0, iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 8;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 187)
				{
					iVar2 = func_190(iParam0, 8);
					iVar3 = func_188(iParam1, iVar2, 8, 3);
					iVar4 = func_181(iVar3);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar4 == 6)) || (iVar2 >= 241 && iVar4 == 7)) || (iVar2 >= 241 && _0x341DE7ED1D2A1BFD(iVar3, 1965569012, 0)))
					{
						iVar0 = -99;
					}
					else
					{
						iVar0 = 11;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 4;
				}
				else if (iParam3 == 236)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 237)
				{
					iVar5 = func_188(iParam1, iParam3, 11, 3);
					if (iVar5 != -1)
					{
						iVar6 = true;
						if (_0x341DE7ED1D2A1BFD(iVar5, 19149565, 0))
						{
							iVar2 = func_190(iParam0, 8);
							iVar7 = func_188(iParam1, iVar2, 8, 3);
							iVar8 = func_181(iVar7);
							if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar8 == 6)) || (iVar2 >= 241 && iVar8 == 7)) || (iVar2 >= 241 && _0x341DE7ED1D2A1BFD(iVar7, 1965569012, 0)))
							{
								iVar6 = false;
							}
						}
						if (iVar6)
						{
							iVar9 = _get_num_forced_components(iVar5);
							iVar10 = 0;
							while (iVar10 < iVar9)
							{
								get_forced_component(iVar5, iVar10, &iVar11, &iVar12, &iVar13);
								if (iVar13 == 3)
								{
									if (iVar11 != 0 && iVar11 != 1849449579)
									{
										iVar0 = func_95(iParam1, iVar11, 3, 3);
									}
									else
									{
										iVar0 = iVar12;
									}
									iVar10 = iVar9 + 1;
								}
								iVar10++;
							}
						}
					}
				}
			}
			else if (iParam2 == 8)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = -99;
				}
				else if (iParam3 == 240)
				{
					iVar0 = 14;
				}
				else if (iParam3 >= 241)
				{
					iVar14 = func_188(iParam1, iParam3, 8, 3);
					if (iVar14 != -1)
					{
						iVar15 = _get_num_forced_components(iVar14);
						iVar16 = 0;
						while (iVar16 < iVar15)
						{
							get_forced_component(iVar14, iVar16, &iVar17, &iVar18, &iVar19);
							if (iVar19 == 3)
							{
								if (iVar17 != 0 && iVar17 != 1849449579)
								{
									iVar0 = func_95(iParam1, iVar17, 3, 3);
								}
								else
								{
									iVar0 = iVar18;
									iVar16 = iVar15 + 1;
								}
							}
							iVar16++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				iVar20 = -1;
				if (iParam3 >= 237)
				{
					iVar20 = func_181(func_188(iParam1, iParam3, 11, 3));
				}
				if (iParam3 <= 15)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 187 || iVar20 == 11)
				{
					iVar2 = func_190(iParam0, 8);
					iVar21 = func_188(iParam1, iVar2, 8, 3);
					iVar22 = func_181(iVar21);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar22 == 6)) || (iVar2 >= 241 && iVar22 == 7)) || (iVar2 >= 241 && _0x341DE7ED1D2A1BFD(iVar21, 1965569012, 0)))
					{
					}
					else
					{
						iVar0 = 112;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 236)
				{
					iVar0 = 240;
				}
				else if (iParam3 >= 237)
				{
					iVar23 = func_188(iParam1, iParam3, 11, 3);
					if (iVar23 != -1)
					{
						iVar24 = _get_num_forced_components(iVar23);
						iVar25 = 0;
						while (iVar25 < iVar24)
						{
							get_forced_component(iVar23, iVar25, &iVar26, &iVar27, &iVar28);
							if (iVar28 == 8)
							{
								if (iVar26 != 0 && iVar26 != 1849449579)
								{
									iVar0 = func_95(iParam1, iVar26, 8, 3);
								}
								else
								{
									iVar0 = iVar27;
									iVar25 = iVar24 + 1;
								}
							}
							iVar25++;
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar29 = -1;
				iVar30 = -1;
				if (iParam3 >= 92)
				{
					iVar30 = func_188(iParam1, iParam3, 7, 3);
					iVar29 = func_181(iVar30);
				}
				if (((((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar29 == 10) || iVar29 == 11) || iVar29 == 12) || (iParam3 >= 92 && _0x341DE7ED1D2A1BFD(iVar30, -1950939707, 0))) || (iParam3 >= 92 && _0x341DE7ED1D2A1BFD(iVar30, -1371423804, 0))) || (iParam3 >= 92 && _0x341DE7ED1D2A1BFD(iVar30, -920534092, 0)))
				{
					iVar2 = func_190(iParam0, 8);
					if (iVar2 >= 48 && iVar2 <= 63)
					{
						iVar1 = iVar2 - 48;
						iVar0 = 64 + iVar1;
					}
					else if (iVar2 >= 112 && iVar2 <= 127)
					{
						iVar1 = iVar2 - 112;
						iVar0 = 96 + iVar1;
					}
					else if (iVar2 >= 176 && iVar2 <= 191)
					{
						iVar1 = iVar2 - 176;
						iVar0 = 160 + iVar1;
					}
					else if (iVar2 >= 241)
					{
						iVar31 = func_188(iParam1, iVar2, 8, 3);
						iVar32 = func_181(iVar31);
						iVar33 = _0x341DE7ED1D2A1BFD(iVar31, 651155766, 0);
						if (((iVar32 == 3 || iVar32 == 7) || iVar32 == 11) || _0x341DE7ED1D2A1BFD(iVar31, 1553766533, 0))
						{
							if (iVar31 != -1)
							{
								iVar34 = _0xC17AD0E5752BECDA(iVar31);
								iVar35 = 0;
								while (iVar35 < iVar34)
								{
									get_variant_component(iVar31, iVar35, &iVar36, &iVar37, &iVar38);
									if ((iVar38 == 8 && !iVar33) || (iVar38 == 10 && iVar33))
									{
										if (iVar36 != 0 && iVar36 != 1849449579)
										{
											iVar0 = func_95(iParam1, iVar36, 8, 3);
										}
										else
										{
											iVar0 = iVar37;
										}
										iVar35 = iVar34 + 1;
									}
									iVar35++;
								}
							}
						}
					}
				}
				else if (((iParam3 >= 92 && _0x341DE7ED1D2A1BFD(iVar30, -378906828, 0)) || (iParam3 >= 92 && _0x341DE7ED1D2A1BFD(iVar30, -695703461, 0))) || (iParam3 >= 92 && _0x341DE7ED1D2A1BFD(iVar30, -108328099, 0)))
				{
					iVar39 = func_188(iParam1, iVar2, 8, 3);
					iVar40 = func_181(iVar39);
					iVar41 = _0x341DE7ED1D2A1BFD(iVar39, 651155766, 0);
					if (((iVar40 == 3 || iVar40 == 7) || iVar40 == 11) || _0x341DE7ED1D2A1BFD(iVar39, 1553766533, 0))
					{
						if (iVar39 != -1)
						{
							iVar42 = _0xC17AD0E5752BECDA(iVar39);
							iVar43 = 0;
							while (iVar43 < iVar42)
							{
								get_variant_component(iVar39, iVar43, &iVar44, &iVar45, &iVar46);
								if ((iVar46 == 8 && !iVar41) || (iVar46 == 10 && iVar41))
								{
									if (iVar44 != 0 && iVar44 != 1849449579)
									{
										iVar0 = func_95(iParam1, iVar44, 8, 3);
									}
									else
									{
										iVar0 = iVar45;
									}
									iVar43 = iVar42 + 1;
								}
								iVar43++;
							}
						}
					}
				}
				else if (iParam3 >= 92)
				{
					iVar47 = func_188(iParam1, iParam3, 7, 3);
					if (iVar47 != -1)
					{
						iVar48 = _get_num_forced_components(iVar47);
						iVar49 = 0;
						while (iVar49 < iVar48)
						{
							get_forced_component(iVar47, iVar49, &iVar50, &iVar51, &iVar52);
							if (iVar52 == 8)
							{
								if (iVar50 != 0 && iVar50 != 1849449579)
								{
									iVar0 = func_95(iParam1, iVar50, 8, 3);
								}
								else
								{
									iVar0 = iVar51;
									iVar49 = iVar48 + 1;
								}
							}
							iVar49++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 7)
			{
				iVar53 = -1;
				iVar54 = -1;
				if (iParam3 >= 92)
				{
					iVar54 = func_188(iParam1, iParam3, 7, 3);
					iVar53 = func_181(iVar54);
				}
				if (((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar53 == 10) || iVar53 == 11) || iVar53 == 12) || _0x341DE7ED1D2A1BFD(iVar54, -920534092, 0))
				{
					iVar55 = func_190(iParam0, 11);
					if (iVar55 >= 237)
					{
						iVar56 = func_188(iParam1, iVar55, 11, 3);
						if (_0x341DE7ED1D2A1BFD(iVar56, 1847239679, 0) && _0x341DE7ED1D2A1BFD(iVar56, 1553766533, 0))
						{
							if (iVar56 != -1)
							{
								iVar57 = _0xC17AD0E5752BECDA(iVar56);
								iVar58 = 0;
								while (iVar58 < iVar57)
								{
									get_variant_component(iVar56, iVar58, &iVar59, &iVar60, &iVar61);
									if (iVar61 == 11)
									{
										if (iVar59 != 0 && iVar59 != 1849449579)
										{
											iVar0 = func_95(iParam1, iVar59, 11, 3);
										}
										else
										{
											iVar0 = iVar60;
										}
										iVar58 = iVar57 + 1;
									}
									iVar58++;
								}
							}
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 11)
			{
				iVar62 = func_190(iParam0, 11);
				if (iVar62 >= 237)
				{
					iVar63 = func_188(iParam1, iVar62, 11, 3);
					if (_0x341DE7ED1D2A1BFD(iVar63, 1847239679, 0) && _0x341DE7ED1D2A1BFD(iVar63, 1553766533, 0))
					{
						iVar63 = func_188(iParam1, iParam3, 11, 3);
						if (iVar63 != -1)
						{
							iVar64 = _get_num_forced_components(iVar63);
							iVar65 = 0;
							while (iVar65 < iVar64)
							{
								get_forced_component(iVar63, iVar65, &iVar66, &iVar67, &iVar68);
								if (iVar68 == 7)
								{
									if (iVar66 != 0 && iVar66 != 1849449579)
									{
										iVar0 = func_95(iParam1, iVar66, 7, 3);
									}
									else
									{
										iVar0 = iVar67;
										iVar65 = iVar64 + 1;
									}
								}
								iVar65++;
							}
						}
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar69 = func_188(iParam1, iParam3, 14, 3);
					if (iVar69 != -1)
					{
						iVar70 = _get_num_forced_components(iVar69);
						iVar71 = 0;
						while (iVar71 < iVar70)
						{
							get_forced_component(iVar69, iVar71, &iVar72, &iVar73, &iVar74);
							if (iVar74 == 7)
							{
								if (iVar72 != 0 && iVar72 != 1849449579)
								{
									iVar0 = func_95(iParam1, iVar72, 7, 3);
								}
								else
								{
									iVar0 = iVar73;
									iVar71 = iVar70 + 1;
								}
							}
							iVar71++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar75 = func_188(iParam1, iParam3, 11, 3);
					if (iVar75 != -1)
					{
						iVar76 = _get_num_forced_components(iVar75);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							get_forced_component(iVar75, iVar77, &iVar78, &iVar79, &iVar80);
							if (iVar80 == 4)
							{
								if (iVar78 != 0 && iVar78 != 1849449579)
								{
									iVar0 = func_95(iParam1, iVar78, 4, 3);
								}
								else
								{
									iVar0 = iVar79;
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar81 = func_188(iParam1, iParam3, 4, 3);
					if (iVar81 != -1)
					{
						iVar82 = _get_num_forced_components(iVar81);
						iVar83 = 0;
						while (iVar83 < iVar82)
						{
							get_forced_component(iVar81, iVar83, &iVar84, &iVar85, &iVar86);
							if (iVar86 == 6)
							{
								if (iVar84 != 0 && iVar84 != 1849449579)
								{
									iVar0 = func_95(iParam1, iVar84, 6, 3);
								}
								else
								{
									iVar0 = iVar85;
									iVar83 = iVar82 + 1;
								}
							}
							iVar83++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 237)
				{
					iVar87 = func_188(iParam1, iParam3, 11, 3);
					if (iVar87 != -1)
					{
						iVar88 = _get_num_forced_components(iVar87);
						iVar89 = 0;
						while (iVar89 < iVar88)
						{
							get_forced_component(iVar87, iVar89, &iVar90, &iVar91, &iVar92);
							if (iVar92 == 6)
							{
								if (iVar90 != 0 && iVar90 != 1849449579)
								{
									iVar0 = func_95(iParam1, iVar90, 6, 3);
								}
								else
								{
									iVar0 = iVar91;
									iVar89 = iVar88 + 1;
								}
							}
							iVar89++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar93 = func_188(iParam1, iParam3, 1, 3);
					if (iVar93 != -1)
					{
						iVar94 = _0x017568A8182D98A6(iVar93);
						iVar95 = 0;
						while (iVar95 < iVar94)
						{
							_0xE1CA84EBF72E691D(iVar93, iVar95, &iVar96, &iVar97, &iVar98);
							if (iVar98 == iParam5)
							{
								if (iVar96 != 0 && iVar96 != 1849449579)
								{
									iVar0 = func_95(iParam1, iVar96, 14, 3);
									iVar95 = iVar94 + 1;
								}
								else
								{
									iVar0 = iVar97;
									iVar95 = iVar94 + 1;
								}
							}
							iVar95++;
						}
					}
				}
			}
		}
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 3;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 9;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 7;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 14;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 256)
				{
					iVar99 = func_188(iParam1, iParam3, 11, 4);
					if (iVar99 != -1)
					{
						iVar100 = _get_num_forced_components(iVar99);
						iVar101 = 0;
						while (iVar101 < iVar100)
						{
							get_forced_component(iVar99, iVar101, &iVar102, &iVar103, &iVar104);
							if (iVar104 == 3)
							{
								if (iVar102 != 0 && iVar102 != 1849449579)
								{
									iVar0 = func_95(iParam1, iVar102, 3, 4);
								}
								else
								{
									iVar0 = iVar103;
									iVar101 = iVar100 + 1;
								}
							}
							iVar101++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 223)
				{
					iVar1 = iParam3 - 208;
					iVar0 = 103 + iVar1;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 33;
				}
				else if (iParam3 >= 256)
				{
					iVar105 = func_188(iParam1, iParam3, 11, 4);
					if (iVar105 != -1)
					{
						iVar106 = _get_num_forced_components(iVar105);
						iVar107 = 0;
						while (iVar107 < iVar106)
						{
							get_forced_component(iVar105, iVar107, &iVar108, &iVar109, &iVar110);
							if (iVar110 == 8)
							{
								if (iVar108 != 0 && iVar108 != 1849449579)
								{
									iVar0 = func_95(iParam1, iVar108, 8, 4);
								}
								else
								{
									iVar0 = iVar109;
									iVar107 = iVar106 + 1;
								}
							}
							iVar107++;
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar111 = -1;
				if (iParam3 >= 55)
				{
					iVar111 = func_188(iParam1, iParam3, 7, 4);
				}
				if ((iVar111 != -1 && _0x341DE7ED1D2A1BFD(iVar111, -920534092, 0)) || (iVar111 != -1 && _0x341DE7ED1D2A1BFD(iVar111, 1537081084, 0)))
				{
					iVar112 = get_hash_name_for_component(iParam0, 8, get_ped_drawable_variation(iParam0, 8), get_ped_texture_variation(iParam0, 8));
					iVar113 = false;
					if (_0x341DE7ED1D2A1BFD(iVar111, -378906828, 0) || _0x341DE7ED1D2A1BFD(iVar111, -108328099, 0))
					{
						if (_0x341DE7ED1D2A1BFD(iVar112, -1914383230, 0))
						{
							iVar113 = true;
						}
					}
					else if (_0x341DE7ED1D2A1BFD(iVar112, 1553766533, 0))
					{
						iVar113 = true;
					}
					if (iVar113)
					{
						iVar114 = _0xC17AD0E5752BECDA(iVar112);
						iVar115 = 0;
						while (iVar115 < iVar114)
						{
							get_variant_component(iVar112, iVar115, &iVar116, &iVar117, &iVar118);
							if (iVar118 == 8)
							{
								if (iVar116 != 0 && iVar116 != 1849449579)
								{
									iVar0 = func_95(iParam1, iVar116, 8, 4);
								}
								else
								{
									iVar0 = iVar117;
								}
								iVar115 = iVar114 + 1;
							}
							iVar115++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar119 = func_188(iParam1, iParam3, 4, 4);
					if (iVar119 != -1)
					{
						iVar120 = _get_num_forced_components(iVar119);
						iVar121 = 0;
						while (iVar121 < iVar120)
						{
							get_forced_component(iVar119, iVar121, &iVar122, &iVar123, &iVar124);
							if (iVar124 == 6)
							{
								if (iVar122 != 0 && iVar122 != 1849449579)
								{
									iVar0 = func_95(iParam1, iVar122, 6, 4);
								}
								else
								{
									iVar0 = iVar123;
									iVar121 = iVar120 + 1;
								}
							}
							iVar121++;
						}
					}
				}
			}
			else if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar125 = func_188(iParam1, iParam3, 11, 4);
					if (iVar125 != -1)
					{
						iVar126 = _get_num_forced_components(iVar125);
						iVar127 = 0;
						while (iVar127 < iVar126)
						{
							get_forced_component(iVar125, iVar127, &iVar128, &iVar129, &iVar130);
							if (iVar130 == 6)
							{
								if (iVar128 != 0 && iVar128 != 1849449579)
								{
									iVar0 = func_95(iParam1, iVar128, 6, 4);
								}
								else
								{
									iVar0 = iVar129;
									iVar127 = iVar126 + 1;
								}
							}
							iVar127++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar131 = func_188(iParam1, iParam3, 11, 4);
					if (iVar131 != -1)
					{
						iVar132 = _get_num_forced_components(iVar131);
						iVar133 = 0;
						while (iVar133 < iVar132)
						{
							get_forced_component(iVar131, iVar133, &iVar134, &iVar135, &iVar136);
							if (iVar136 == 4)
							{
								if (iVar134 != 0 && iVar134 != 1849449579)
								{
									iVar0 = func_95(iParam1, iVar134, 4, 4);
								}
								else
								{
									iVar0 = iVar135;
									iVar133 = iVar132 + 1;
								}
							}
							iVar133++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar137 = func_188(iParam1, iParam3, 14, 4);
					if (iVar137 != -1)
					{
						iVar138 = _get_num_forced_components(iVar137);
						iVar139 = 0;
						while (iVar139 < iVar138)
						{
							get_forced_component(iVar137, iVar139, &iVar140, &iVar141, &iVar142);
							if (iVar142 == 7)
							{
								if (iVar140 != 0 && iVar140 != 1849449579)
								{
									iVar0 = func_95(iParam1, iVar140, 7, 4);
								}
								else
								{
									iVar0 = iVar141;
									iVar139 = iVar138 + 1;
								}
							}
							iVar139++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar143 = func_188(iParam1, iParam3, 1, 4);
					if (iVar143 != -1)
					{
						iVar144 = _0x017568A8182D98A6(iVar143);
						iVar145 = 0;
						while (iVar145 < iVar144)
						{
							_0xE1CA84EBF72E691D(iVar143, iVar145, &iVar146, &iVar147, &iVar148);
							if (iVar148 == iParam5)
							{
								if (iVar146 != 0 && iVar146 != 1849449579)
								{
									iVar0 = func_95(iParam1, iVar146, 14, 4);
									iVar145 = iVar144 + 1;
								}
								else
								{
									iVar0 = iVar147;
									iVar145 = iVar144 + 1;
								}
							}
							iVar145++;
						}
					}
				}
			}
		}
	}
	return iVar0;
}

bool func_193(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	int iVar13;
	
	*iParam4 = -99;
	switch (iParam1)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= func_96(iParam1, 1))
					{
						func_216(iParam1, 1, iParam3);
						if (Global_2621445 == -1751726434)
						{
							*iParam4 = 0;
						}
					}
					iVar0 = func_190(iParam0, 1);
					if (iVar0 >= 26)
					{
						iVar1 = func_188(iParam1, iVar0, 1, 3);
						if (_0x341DE7ED1D2A1BFD(iVar1, -1188154325, 0))
						{
							iVar1 = func_188(iParam1, iParam3, 1, 3);
							if (iVar1 != -1)
							{
								iVar2 = _get_num_forced_components(iVar1);
								iVar3 = 0;
								while (iVar3 < iVar2)
								{
									get_forced_component(iVar1, iVar3, &iVar4, &uVar5, &iVar6);
									if (iVar6 == 2)
									{
										if (iVar4 != 0 && iVar4 != 1849449579)
										{
											*iParam4 = func_95(iParam1, iVar4, 2, 3);
										}
										else
										{
											*iParam4 = uVar5;
											iVar3 = iVar2 + 1;
										}
									}
									iVar3++;
								}
							}
						}
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= func_96(iParam1, 1))
					{
						func_216(iParam1, 1, iParam3);
						if (Global_2621445 == -1751726434)
						{
							*iParam4 = 0;
						}
					}
					iVar7 = func_190(iParam0, 1);
					if (iVar7 >= 26)
					{
						iVar8 = func_188(iParam1, iVar7, 1, 4);
						if (_0x341DE7ED1D2A1BFD(iVar8, -1188154325, 0))
						{
							iVar8 = func_188(iParam1, iParam3, 1, 4);
							if (iVar8 != -1)
							{
								iVar9 = _get_num_forced_components(iVar8);
								iVar10 = 0;
								while (iVar10 < iVar9)
								{
									get_forced_component(iVar8, iVar10, &iVar11, &uVar12, &iVar13);
									if (iVar13 == 2)
									{
										if (iVar11 != 0 && iVar11 != 1849449579)
										{
											*iParam4 = func_95(iParam1, iVar11, 2, 4);
										}
										else
										{
											*iParam4 = uVar12;
											iVar10 = iVar9 + 1;
										}
									}
									iVar10++;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (*iParam4 != -99)
	{
		func_85(746, iParam3, Global_69309, 1);
		func_85(747, iParam2, Global_69309, 1);
		return true;
	}
	return false;
}

void func_194(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!is_ped_injured(iParam0))
	{
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = get_entity_model(iParam0);
			if (iParam1 == 11)
			{
				if (func_183(iVar0, iParam2))
				{
					iParam1 = 8;
					iParam2 = func_190(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = func_190(iParam0, 11);
				if (!func_183(iVar0, iVar1))
				{
					return;
				}
			}
			func_177(get_hash_key("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!func_179(iVar0, iParam2, 13) && !func_179(iVar0, iParam2, 14)) && !func_179(iVar0, iParam2, 15)) && !func_179(iVar0, iParam2, 16)) && !func_179(iVar0, iParam2, 71)) && !func_179(iVar0, iParam2, 72))
				{
					func_177(get_hash_key("crewLogo"), iParam0);
				}
			}
			iVar2 = func_168(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					func_195(iParam0, iVar2);
				}
				else
				{
					func_196(iVar2, 1, Global_69309);
				}
			}
		}
	}
}

void func_195(int iParam0, int iParam1)
{
	int iVar0;
	struct<6> Var1;
	
	if (!is_ped_injured(iParam0))
	{
		if (iParam1 != -1)
		{
			iVar0 = func_175(iParam0);
			if (!func_156(iParam1, -1))
			{
				if (func_148(&Var1, iParam1, iVar0, iParam0, -1))
				{
					_set_ped_decoration(iParam0, Var1.f_4, Var1.f_5);
					func_146(iParam0, Var1.f_4, Var1.f_5);
				}
			}
		}
	}
}

void func_196(int iParam0, int iParam1, int iParam2)
{
	if (iParam1)
	{
		if (!func_156(iParam0, iParam2))
		{
			func_197(iParam0, 1, iParam2);
		}
	}
	else if (func_156(iParam0, iParam2))
	{
		func_197(iParam0, 0, iParam2);
	}
}

void func_197(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_158(iParam0, iParam2);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (iParam1)
		{
			set_bit(&iVar0, func_157(iVar1));
		}
		else
		{
			clear_bit(&iVar0, func_157(iVar1));
		}
		func_85(func_159(iParam0), iVar0, iParam2, 1);
	}
}

int func_198()
{
	int iVar0;
	
	iVar0 = Global_69309;
	if (func_156(13, iVar0))
	{
		return 13;
	}
	if (func_156(14, iVar0))
	{
		return 14;
	}
	if (func_156(15, iVar0))
	{
		return 15;
	}
	if (func_156(16, iVar0))
	{
		return 16;
	}
	if (func_156(71, iVar0))
	{
		return 71;
	}
	if (func_156(72, iVar0))
	{
		return 72;
	}
	return -1;
}

int func_199(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_ped_injured(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_112(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_112(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_120(iParam0, iParam2);
			}
		}
		else
		{
			return func_190(iParam0, iParam1);
		}
	}
	return -99;
}

void func_200(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		clear_ped_prop(iParam0, iParam1);
	}
	else
	{
		set_ped_prop_index(iParam0, iParam1, iParam2, iParam3, network_is_game_in_progress());
	}
}

struct<10> func_201(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_203(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_203(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_203(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_203(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_203(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_203(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_203(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_203(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_203(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_203(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_203(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_202(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_203(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_203(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_203(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_203(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_203(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_203(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_203(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_203(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_203(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_203(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_202(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_203(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_203(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_203(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_203(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_203(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_203(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_203(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_203(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_203(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_203(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_202(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_203(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_203(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_203(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_203(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_203(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_203(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_203(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_203(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_203(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_203(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_203(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_203(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_203(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_203(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_203(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_203(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_203(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_203(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_203(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_203(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_203(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_203(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_203(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_203(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_203(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_203(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_202(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_203(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_203(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_203(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_203(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_203(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_203(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_203(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_203(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_203(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_203(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_203(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_203(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_203(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_203(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_203(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_203(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_203(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_203(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_203(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_203(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_203(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_203(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_203(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_203(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_203(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_202(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_202(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar16;
	int iVar19;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		*iParam0[0] = 0;
		*iParam0[1] = 1;
		*iParam0[2] = 2;
		*iParam0[3] = 3;
		*iParam0[4] = 4;
		*iParam0[5] = 5;
		*iParam0[6] = 6;
		*iParam0[7] = 7;
		*iParam0[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		get_shop_ped_outfit(iParam2, &Var1);
		if (!_is_dlc_data_empty(Var1))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (_0xA9F9C2E0FDE11CBB(Var1.f_1, iVar19, &vVar16) && vVar16.z != -1)
				{
					if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
					{
						*iParam0[vVar16.z] = func_95(iParam1, vVar16.x, 14, iVar0);
					}
					else if (vVar16.y != -1)
					{
						*iParam0[vVar16.z] = vVar16.y;
					}
				}
				iVar19++;
			}
		}
	}
}

void func_203(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	*iParam0[0] = iParam1;
	*iParam0[1] = iParam2;
	*iParam0[2] = iParam3;
	*iParam0[3] = iParam4;
	*iParam0[4] = iParam5;
	*iParam0[5] = iParam6;
	*iParam0[6] = iParam7;
	*iParam0[7] = iParam8;
	*iParam0[8] = iParam9;
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

struct<16> func_205(int iParam0, int iParam1)
{
	int iVar0;
	struct<16> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_101154.f_7775.f_99.f_58[120])
					{
						func_208(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_208(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_208(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_208(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_208(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_208(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_208(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[0], Global_101154.f_1826.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_208(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_208(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_208(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_208(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_208(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_208(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_208(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_208(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_208(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_208(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_208(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_208(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_208(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_208(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_208(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_208(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_208(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_208(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_208(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_208(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_208(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_208(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_208(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_208(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_208(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_208(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_208(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_208(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_208(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_208(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_208(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_208(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_208(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_208(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_208(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_208(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_208(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_208(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_208(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_208(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_208(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_208(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_208(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_208(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_208(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_208(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_208(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_206(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_208(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_208(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_208(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[1], Global_101154.f_1826.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_208(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_208(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_208(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_208(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_208(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_208(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_208(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_208(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_208(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_208(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_208(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_208(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_208(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_208(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_208(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_208(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_208(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_208(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_208(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_208(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_208(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_208(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_208(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_208(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_208(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_208(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_208(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_208(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_208(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_208(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_208(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_208(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_208(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_208(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_208(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_208(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_208(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_208(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_208(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_208(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_208(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_208(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_208(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_208(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_206(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_208(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_208(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_208(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_208(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_208(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[2], Global_101154.f_1826.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_208(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_208(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_208(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_208(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_208(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_208(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_208(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_208(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_208(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_208(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_208(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_208(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_208(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_208(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_208(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_208(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_208(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_208(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_208(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_208(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_208(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_208(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_208(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_208(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_208(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_208(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_208(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_208(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_208(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_208(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_208(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_208(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_208(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_208(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_208(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_208(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_208(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_208(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_208(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_208(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_208(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_208(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_208(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_206(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_208(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_208(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_208(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_208(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_208(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_208(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_208(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_208(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_208(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_208(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_208(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_208(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_208(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_208(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_208(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_208(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_208(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_208(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_208(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_208(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_208(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_208(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_208(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_208(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_208(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_208(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_206(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_208(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_208(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_208(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_208(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_208(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_208(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_208(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_208(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_208(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_208(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_208(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_208(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_208(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_208(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_208(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_208(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_208(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_208(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_208(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_208(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_208(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_208(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_208(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_208(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_208(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_208(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_208(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_208(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_206(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_206(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar16;
	int iVar19;
	
	*iParam0[0] = 0;
	*iParam0[2] = -99;
	*iParam0[3] = 0;
	*iParam0[4] = 0;
	*iParam0[6] = 0;
	*iParam0[5] = 0;
	*iParam0[8] = 0;
	*iParam0[9] = 0;
	*iParam0[10] = 0;
	*iParam0[1] = 0;
	*iParam0[7] = 0;
	*iParam0[11] = 0;
	*iParam0[13] = -99;
	*iParam0[14] = -99;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		*iParam0[13] = 10 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		*iParam0[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		*iParam0[13] = 9 + iParam2 - iParam3;
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	_0xF3FBE2D50A6A8C28(iVar0, 0);
	get_shop_ped_query_outfit(iParam2 - iParam3, &Var1);
	if (!_is_dlc_data_empty(Var1))
	{
		iVar19 = 0;
		while (iVar19 < Var1.f_4)
		{
			if (_get_prop_from_outfit(Var1.f_1, iVar19, &vVar16))
			{
				if ((vVar16.x != 0 && vVar16.x != -1) && vVar16.x != 1849449579)
				{
					if (vVar16.z == 10)
					{
						*iParam0[func_207(vVar16.z)] = vVar16.x;
					}
					else
					{
						*iParam0[func_207(vVar16.z)] = func_95(iParam1, vVar16.x, func_207(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1)
				{
					*iParam0[func_207(vVar16.z)] = vVar16.y;
				}
			}
			iVar19++;
		}
		if (Var1.f_3 == 0)
		{
			*iParam0[13] = -99;
		}
		else
		{
			*iParam0[13] = Var1.f_1;
		}
	}
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_208(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	*iParam0[0] = iParam1;
	*iParam0[2] = iParam2;
	*iParam0[3] = iParam3;
	*iParam0[4] = iParam4;
	*iParam0[6] = iParam5;
	*iParam0[5] = iParam6;
	*iParam0[8] = iParam7;
	*iParam0[9] = iParam8;
	*iParam0[10] = iParam9;
	*iParam0[1] = iParam10;
	*iParam0[7] = iParam11;
	*iParam0[11] = iParam12;
	*iParam0[13] = iParam13;
	*iParam0[14] = -99;
}

void func_209(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int[] iVar9 = new int[2];
	struct<2> Var12;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	struct<2> Var33;
	int iVar50;
	int iVar51;
	int iVar52;
	
	if (network_is_game_in_progress())
	{
		if (Global_69309 != func_87() || iParam2 == -99)
		{
			return;
		}
		Global_69311[2 /*14*/] = {func_216(iParam0, iParam1, iParam2)};
		if (is_bit_set(Global_69311[2 /*14*/].f_6, true) && is_bit_set(Global_69311[2 /*14*/].f_6, 6))
		{
			if (iParam1 == 12)
			{
				func_212(Global_2621444, 2, 1, 1, -1);
			}
			else if (iParam1 == 13)
			{
			}
			else if (iParam1 == 14)
			{
				func_212(Global_2621444, 2, 1, 1, -1);
			}
			else
			{
				func_212(Global_2621444, 2, 1, 1, -1);
			}
			if (iParam3)
			{
				iVar0 = _0xC17AD0E5752BECDA(Global_2621444);
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					if (iVar1 < Global_2560811)
					{
						Global_2560811[iVar1] = -1;
						Global_2560922[iVar1] = -1;
					}
					get_variant_component(Global_2621444, iVar1, &iVar2, &uVar3, &iVar4);
					if (iVar4 != 10)
					{
						if (iParam1 == 4 && _0x341DE7ED1D2A1BFD(Global_2621444, -1223513441, 0))
						{
						}
						else if (iVar2 != 0 && iVar2 != 1849449579)
						{
							func_212(iVar2, 2, 1, 1, -1);
							if (iVar1 < Global_2560811)
							{
								Global_2560811[iVar1] = iVar2;
								Global_2560922[iVar1] = iVar4;
							}
						}
						else
						{
							func_209(iParam0, func_207(iVar4), uVar3, 0);
						}
					}
					iVar1++;
				}
				Global_2560810++;
				if (Global_2560810 < 2)
				{
					iVar1 = 0;
					while (iVar1 < iVar0)
					{
						if (iVar1 < Global_2560811)
						{
							if (Global_2560811[iVar1] != -1)
							{
								if (iParam0 == joaat("mp_m_freemode_01"))
								{
									func_209(iParam0, func_207(Global_2560922[iVar1]), func_95(iParam0, Global_2560811[iVar1], func_207(Global_2560922[iVar1]), 3), 1);
								}
								else
								{
									func_209(iParam0, func_207(Global_2560922[iVar1]), func_95(iParam0, Global_2560811[iVar1], func_207(Global_2560922[iVar1]), 4), 1);
								}
							}
						}
						iVar1++;
					}
				}
				Global_2560810--;
			}
			return;
		}
		if (is_bit_set(Global_69311[2 /*14*/].f_6, true) && !is_bit_set(Global_69311[2 /*14*/].f_6, 6))
		{
			if (func_211(iParam1, Global_69311[1 /*14*/].f_2, &iVar5))
			{
				iVar6 = func_258(iVar5, Global_69309, 0);
				set_bit(&iVar6, Global_69311[2 /*14*/].f_1);
				func_85(iVar5, iVar6, Global_69309, 1);
			}
			if (iParam3 == 1)
			{
				if (iParam0 == joaat("mp_m_freemode_01"))
				{
					if (iParam1 == 14)
					{
						if (iParam2 >= 83 && iParam2 <= 90)
						{
							iVar7 = 75 + Global_69311[2 /*14*/].f_4;
							func_209(iParam0, 14, iVar7, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar7 = 83 + Global_69311[2 /*14*/].f_4;
							func_209(iParam0, 14, iVar7, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar7 = 64 + Global_69311[2 /*14*/].f_4;
							func_209(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar7 = 48 + Global_69311[2 /*14*/].f_4;
							func_209(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar7 = 112 + Global_69311[2 /*14*/].f_4;
							func_209(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar7 = 96 + Global_69311[2 /*14*/].f_4;
							func_209(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar7 = 160 + Global_69311[2 /*14*/].f_4;
							func_209(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar7 = 176 + Global_69311[2 /*14*/].f_4;
							func_209(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar7 = 0 + Global_69311[2 /*14*/].f_4;
							func_209(iParam0, 11, iVar7, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar7 = 16 + Global_69311[2 /*14*/].f_4;
							func_209(iParam0, 11, iVar7, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar7 = 32 + Global_69311[2 /*14*/].f_4;
							func_209(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar7 = 224 + Global_69311[2 /*14*/].f_4;
							func_209(iParam0, 8, iVar7, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									iVar9[0] = 691352495;
									iVar9[1] = 691352495;
									break;
								
								case 221:
									iVar9[0] = 451909412;
									iVar9[1] = 451909412;
									break;
								
								case 222:
									iVar9[0] = -206550874;
									iVar9[1] = -206550874;
									break;
								
								case 223:
									iVar9[0] = -445797343;
									iVar9[1] = -445797343;
									break;
								
								case 224:
									iVar9[0] = -173716332;
									iVar9[1] = -173716332;
									break;
								
								case 225:
									iVar9[0] = -538304226;
									iVar9[1] = -538304226;
									break;
								
								case 226:
									iVar9[0] = -592242000;
									iVar9[1] = -592242000;
									break;
								
								case 227:
									iVar9[0] = -831095241;
									iVar9[1] = -831095241;
									break;
								
								case 228:
									iVar9[0] = -1092100326;
									iVar9[1] = -1092100326;
									break;
								
								case 229:
									iVar9[0] = -1465994616;
									iVar9[1] = -1465994616;
									break;
								
								case 230:
									iVar9[0] = 507503642;
									iVar9[1] = 507503642;
									break;
								
								case 231:
									iVar9[0] = -1392082519;
									iVar9[1] = -1392082519;
									break;
								
								case 232:
									iVar9[0] = -88859389;
									iVar9[1] = -88859389;
									break;
								
								case 233:
									iVar9[0] = 157858412;
									iVar9[1] = 157858412;
									break;
								
								case 234:
									iVar9[0] = -513152401;
									iVar9[1] = -513152401;
									break;
								
								case 235:
									iVar9[0] = 2004948615;
									iVar9[1] = 2004948615;
									break;
							}
							init_shop_ped_component(&Var12);
							iVar31 = _get_num_props_from_outfit(3, 6, -1, 0, -1, 8);
							iVar29 = 0;
							while (iVar29 < iVar31)
							{
								get_shop_ped_query_component(iVar29, &Var12);
								if (!_is_dlc_data_empty(Var12))
								{
									if (Var12.f_1 == iVar9[0] || Var12.f_1 == iVar9[1])
									{
										func_209(iParam0, 8, 241 + iVar30, 0);
										iVar29 = iVar31 + 1;
									}
									iVar30++;
								}
								iVar29++;
							}
						}
					}
					else if (iParam1 == 7)
					{
						if (iParam2 >= 41 && iParam2 <= 56)
						{
							switch (Global_69311[2 /*14*/].f_4)
							{
								case 0:
									func_209(iParam0, 7, func_95(iParam0, -1893758670, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, 221276858, 7, 3), 0);
									break;
								
								case 1:
									func_209(iParam0, 7, func_95(iParam0, -1596052305, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, 576886046, 7, 3), 0);
									break;
								
								case 2:
									func_209(iParam0, 7, func_95(iParam0, 1233059274, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, -392978047, 7, 3), 0);
									break;
								
								case 3:
									func_209(iParam0, 7, func_95(iParam0, 232228476, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, -33764269, 7, 3), 0);
									break;
								
								case 4:
									func_209(iParam0, 7, func_95(iParam0, -454445919, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, 1510704243, 7, 3), 0);
									break;
								
								case 5:
									func_209(iParam0, 7, func_95(iParam0, 925653285, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, 1800939276, 7, 3), 0);
									break;
								
								case 6:
									func_209(iParam0, 7, func_95(iParam0, -2104856604, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, 833565623, 7, 3), 0);
									break;
								
								case 7:
									func_209(iParam0, 7, func_95(iParam0, 1657483366, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, 1201823645, 7, 3), 0);
									break;
								
								case 8:
									func_209(iParam0, 7, func_95(iParam0, 501294735, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, 2132496022, 7, 3), 0);
									break;
								
								case 9:
									func_209(iParam0, 7, func_95(iParam0, 1882573627, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, -1939019463, 7, 3), 0);
									break;
								
								case 10:
									func_209(iParam0, 7, func_95(iParam0, 206035418, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, 1713491273, 7, 3), 0);
									break;
								
								case 11:
									func_209(iParam0, 7, func_95(iParam0, -642943834, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, -156668318, 7, 3), 0);
									break;
								
								case 12:
									func_209(iParam0, 7, func_95(iParam0, -388295935, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, 106696135, 7, 3), 0);
									break;
								
								case 13:
									func_209(iParam0, 7, func_95(iParam0, 927641567, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, -802905767, 7, 3), 0);
									break;
								
								case 14:
									func_209(iParam0, 7, func_95(iParam0, 1147226636, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, -505527092, 7, 3), 0);
									break;
								
								case 15:
									func_209(iParam0, 7, func_95(iParam0, 312665744, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, -1144129332, 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_69311[2 /*14*/].f_4)
							{
								case 0:
									func_209(iParam0, 7, func_95(iParam0, -335266079, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, -925989020, 7, 3), 0);
									break;
								
								case 1:
									func_209(iParam0, 7, func_95(iParam0, -1379548555, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, 244486895, 7, 3), 0);
									break;
								
								case 2:
									func_209(iParam0, 7, func_95(iParam0, -1402159165, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, 1095104597, 7, 3), 0);
									break;
								
								case 3:
									func_209(iParam0, 7, func_95(iParam0, 1357351098, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, 1787874026, 7, 3), 0);
									break;
								
								case 4:
									func_209(iParam0, 7, func_95(iParam0, -1097178082, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, 476163725, 7, 3), 0);
									break;
								
								case 5:
									func_209(iParam0, 7, func_95(iParam0, -179482237, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, 1223952305, 7, 3), 0);
									break;
								
								case 6:
									func_209(iParam0, 7, func_95(iParam0, -750514831, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, 2049796643, 7, 3), 0);
									break;
								
								case 7:
									func_209(iParam0, 7, func_95(iParam0, -1724573356, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, -1013547784, 7, 3), 0);
									break;
								
								case 8:
									func_209(iParam0, 7, func_95(iParam0, 94106144, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, 1456972664, 7, 3), 0);
									break;
								
								case 9:
									func_209(iParam0, 7, func_95(iParam0, 1070524041, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, -1670762848, 7, 3), 0);
									break;
								
								case 10:
									func_209(iParam0, 7, func_95(iParam0, -1644577318, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, 1428867383, 7, 3), 0);
									break;
								
								case 11:
									func_209(iParam0, 7, func_95(iParam0, 1865900118, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, -1664165762, 7, 3), 0);
									break;
								
								case 12:
									func_209(iParam0, 7, func_95(iParam0, 1611776523, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, -1962101510, 7, 3), 0);
									break;
								
								case 13:
									func_209(iParam0, 7, func_95(iParam0, 1381115532, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, -1270511757, 7, 3), 0);
									break;
								
								case 14:
									func_209(iParam0, 7, func_95(iParam0, 1636484345, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, -1571626106, 7, 3), 0);
									break;
								
								case 15:
									func_209(iParam0, 7, func_95(iParam0, 1422633851, 7, 3), 0);
									func_209(iParam0, 7, func_95(iParam0, -698332248, 7, 3), 0);
									break;
								}
							}
					}
				}
				else if (iParam0 == joaat("mp_f_freemode_01"))
				{
					if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar7 = 16 + Global_69311[2 /*14*/].f_4;
							func_209(iParam0, 8, iVar7, 0);
						}
					}
				}
				Global_69311[2 /*14*/] = {func_216(iParam0, iParam1, iParam2)};
				if (iParam1 == 11)
				{
					iVar8 = func_210(iParam0, iParam2, Global_69311[2 /*14*/].f_4);
					if (iVar8 != -99)
					{
						func_209(iParam0, 8, iVar8, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								iVar32 = 331193219;
								break;
							
							case 200:
								iVar32 = 1115060468;
								break;
							
							case 201:
								iVar32 = 779636984;
								break;
						}
						init_shop_ped_component(&Var33);
						iVar52 = _get_num_props_from_outfit(4, 6, -1, 0, -1, 8);
						iVar50 = 0;
						while (iVar50 < iVar52)
						{
							get_shop_ped_query_component(iVar50, &Var33);
							if (!_is_dlc_data_empty(Var33))
							{
								if (Var33.f_1 == iVar32)
								{
									func_209(iParam0, 8, 136 + iVar51, 0);
									iVar50 = iVar52 + 1;
								}
								iVar51++;
							}
							iVar50++;
						}
					}
				}
				else if (iParam1 == 8)
				{
					iVar8 = func_182(iParam0, iParam2, Global_69311[2 /*14*/].f_4);
					if (iVar8 != -99)
					{
						func_209(iParam0, 11, iVar8, 0);
					}
				}
			}
		}
	}
}

int func_210(int iParam0, int iParam1, int iParam2)
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
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = -99;
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = 16;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 80;
		}
		else if (iParam1 <= 107)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 123)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 139)
		{
			iVar0 = 128;
		}
		else if (iParam1 <= 155)
		{
			iVar0 = 144;
		}
		else if (iParam1 <= 171)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 187)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 203)
		{
			iVar0 = 192;
		}
		else if (iParam1 <= 219)
		{
			iVar0 = 208;
		}
		else if (iParam1 <= 235)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 236)
		{
			iVar0 = 240;
		}
		else if (iParam1 >= 237)
		{
			iVar1 = func_188(iParam0, iParam1, 11, 3);
			if (iVar1 != -1)
			{
				iVar2 = _0xC17AD0E5752BECDA(iVar1);
				iVar3 = 0;
				while (iVar3 < iVar2)
				{
					get_variant_component(iVar1, iVar3, &iVar4, &iVar5, &iVar6);
					if (iVar6 == 8)
					{
						if (iVar4 != 0 && iVar4 != 1849449579)
						{
							iVar0 = func_95(iParam0, iVar4, 8, 3);
						}
						else
						{
							iVar0 = iVar5;
						}
						iVar3 = iVar2 + 1;
					}
					iVar3++;
				}
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 <= 15)
		{
			iVar0 = 0;
		}
		else if (iParam1 <= 31)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 47)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 63)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 79)
		{
			iVar0 = 34;
		}
		else if (iParam1 <= 95)
		{
			iVar0 = 50;
		}
		else if (iParam1 <= 111)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 127)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 143)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 159)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 175)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 191)
		{
			iVar0 = 71;
		}
		else if (iParam1 <= 207)
		{
			iVar0 = 87;
		}
		else if (iParam1 <= 223)
		{
			iVar0 = 103;
		}
		else if (iParam1 <= 239)
		{
			iVar0 = -99;
		}
		else if (iParam1 <= 255)
		{
			iVar0 = 120;
		}
		else if (iParam1 >= 256)
		{
			iVar7 = func_188(iParam0, iParam1, 11, 4);
			if (iVar7 != -1)
			{
				iVar8 = _0xC17AD0E5752BECDA(iVar7);
				iVar9 = 0;
				while (iVar9 < iVar8)
				{
					get_variant_component(iVar7, iVar9, &iVar10, &iVar11, &iVar12);
					if (iVar12 == 8)
					{
						if (iVar10 != 0 && iVar10 != 1849449579)
						{
							iVar0 = func_95(iParam0, iVar10, 8, 4);
						}
						else
						{
							iVar0 = iVar11;
						}
						iVar9 = iVar8 + 1;
					}
					iVar9++;
				}
			}
		}
	}
	if (iVar0 != -99)
	{
		iVar0 += iParam2;
	}
	return iVar0;
}

int func_211(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 971;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 972;
					break;
				
				case 3:
					*uParam2 = 1422;
					break;
				
				case 4:
					*uParam2 = 988;
					break;
				
				case 6:
					*uParam2 = 996;
					break;
				
				case 8:
					*uParam2 = 1423;
					break;
				
				case 9:
					*uParam2 = 1431;
					break;
				
				case 10:
					*uParam2 = 1433;
					break;
				
				case 1:
					*uParam2 = 1004;
					break;
				
				case 7:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 980;
					break;
				
				case 14:
					*uParam2 = 1012;
					break;
				
				case 12:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 973;
					break;
				
				case 4:
					*uParam2 = 989;
					break;
				
				case 6:
					*uParam2 = 997;
					break;
				
				case 8:
					*uParam2 = 1424;
					break;
				
				case 9:
					*uParam2 = 1432;
					break;
				
				case 7:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 981;
					break;
				
				case 14:
					*uParam2 = 1013;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 974;
					break;
				
				case 4:
					*uParam2 = 990;
					break;
				
				case 6:
					*uParam2 = 998;
					break;
				
				case 8:
					*uParam2 = 1425;
					break;
				
				case 7:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 982;
					break;
				
				case 14:
					*uParam2 = 1014;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 991;
					break;
				
				case 6:
					*uParam2 = 999;
					break;
				
				case 8:
					*uParam2 = 1426;
					break;
				
				case 11:
					*uParam2 = 983;
					break;
				
				case 14:
					*uParam2 = 1015;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 992;
					break;
				
				case 6:
					*uParam2 = 1000;
					break;
				
				case 8:
					*uParam2 = 1427;
					break;
				
				case 11:
					*uParam2 = 984;
					break;
				
				case 14:
					*uParam2 = 1016;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 993;
					break;
				
				case 6:
					*uParam2 = 1001;
					break;
				
				case 8:
					*uParam2 = 1428;
					break;
				
				case 11:
					*uParam2 = 985;
					break;
				
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 994;
					break;
				
				case 6:
					*uParam2 = 1002;
					break;
				
				case 8:
					*uParam2 = 1429;
					break;
				
				case 11:
					*uParam2 = 986;
					break;
				
				case 14:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
	}
	return *uParam2 != 971;
}

void func_212(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_69309;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_213(iParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3))
	{
		iVar3 = func_258(iVar2, iVar0, 0);
		set_bit(&iVar3, iVar1);
		func_85(iVar2, iVar3, iVar0, 1);
	}
}

int func_213(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	*uParam2 = 3949;
	iVar0 = -1;
	if (iParam4)
	{
		if (Global_2560780)
		{
			iVar0 = _0x1E77FA7A62EE6C4C(uParam0);
		}
		else
		{
			iVar0 = _0xF033419D1B81FAE8(uParam0);
		}
	}
	else if (iParam5)
	{
		iVar0 = _0x1E77FA7A62EE6C4C(uParam0);
	}
	else
	{
		iVar0 = _0xF033419D1B81FAE8(uParam0);
	}
	if (iVar0 == -1)
	{
		return false;
	}
	switch (iParam1)
	{
		case 1:
			switch (floor(to_float(iVar0) / 32f))
			{
				case 0:
					*uParam2 = 1751;
					break;
				
				case 1:
					*uParam2 = 1752;
					break;
				
				case 2:
					*uParam2 = 1753;
					break;
				
				case 3:
					*uParam2 = 1754;
					break;
				
				case 4:
					*uParam2 = 1755;
					break;
				
				case 5:
					*uParam2 = 1756;
					break;
				
				case 6:
					*uParam2 = 1763;
					break;
				
				case 7:
					*uParam2 = 1764;
					break;
				
				case 8:
					*uParam2 = 1765;
					break;
				
				case 9:
					*uParam2 = 1766;
					break;
				
				case 10:
					*uParam2 = 1767;
					break;
				
				case 11:
					*uParam2 = 1768;
					break;
				
				case 12:
					*uParam2 = 1769;
					break;
				
				case 13:
					*uParam2 = 1777;
					break;
				
				case 14:
					*uParam2 = 1778;
					break;
				
				case 15:
					*uParam2 = 1879;
					break;
				
				case 16:
					*uParam2 = 1880;
					break;
				
				case 17:
					*uParam2 = 1911;
					break;
				
				case 18:
					*uParam2 = 1925;
					break;
				
				case 19:
					*uParam2 = 1926;
					break;
				
				case 20:
					*uParam2 = 1927;
					break;
				
				case 21:
					*uParam2 = 1928;
					break;
				
				case 22:
					*uParam2 = 1929;
					break;
				
				case 23:
					*uParam2 = 2033;
					break;
				
				case 24:
					*uParam2 = 2034;
					break;
				
				case 25:
					*uParam2 = 2060;
					break;
				
				case 26:
					*uParam2 = 2061;
					break;
				
				case 27:
					*uParam2 = 2062;
					break;
				
				case 28:
					*uParam2 = 2063;
					break;
				
				case 29:
					*uParam2 = 2064;
					break;
				
				case 30:
					*uParam2 = 2065;
					break;
				
				case 31:
					*uParam2 = 2066;
					break;
				
				case 32:
					*uParam2 = 2067;
					break;
				
				case 33:
					*uParam2 = 2068;
					break;
				
				case 34:
					*uParam2 = 2069;
					break;
				
				case 35:
					*uParam2 = 2316;
					break;
				
				case 36:
					*uParam2 = 2317;
					break;
				
				case 37:
					*uParam2 = 2367;
					break;
				
				case 38:
					*uParam2 = 2368;
					break;
				
				case 39:
					*uParam2 = 2369;
					break;
				
				case 40:
					*uParam2 = 2370;
					break;
				
				case 41:
					*uParam2 = 2429;
					break;
				
				case 42:
					*uParam2 = 2430;
					break;
				
				case 43:
					*uParam2 = 2431;
					break;
				
				case 44:
					*uParam2 = 2432;
					break;
				
				case 45:
					*uParam2 = 2433;
					break;
				
				case 46:
					*uParam2 = 2434;
					break;
				
				case 47:
					*uParam2 = 2435;
					break;
				
				case 48:
					*uParam2 = 2436;
					break;
				
				case 49:
					*uParam2 = 2437;
					break;
				
				case 50:
					*uParam2 = 2438;
					break;
				
				case 51:
					*uParam2 = 2567;
					break;
				
				case 52:
					*uParam2 = 2568;
					break;
				
				case 53:
					*uParam2 = 2569;
					break;
				
				case 54:
					*uParam2 = 2570;
					break;
				
				case 55:
					*uParam2 = 2571;
					break;
				
				case 56:
					*uParam2 = 2572;
					break;
				
				case 57:
					*uParam2 = 2573;
					break;
				
				case 58:
					*uParam2 = 2574;
					break;
				
				case 59:
					*uParam2 = 2575;
					break;
				
				case 60:
					*uParam2 = 2576;
					break;
				
				case 61:
					*uParam2 = 2577;
					break;
				
				case 62:
					*uParam2 = 3174;
					break;
				
				case 63:
					*uParam2 = 3175;
					break;
				
				case 64:
					*uParam2 = 3176;
					break;
				
				case 65:
					*uParam2 = 3177;
					break;
				
				case 66:
					*uParam2 = 3178;
					break;
				
				case 67:
					*uParam2 = 3179;
					break;
				
				case 68:
					*uParam2 = 3249;
					break;
				
				case 69:
					*uParam2 = 3250;
					break;
				
				case 70:
					*uParam2 = 3251;
					break;
				
				case 71:
					*uParam2 = 3252;
					break;
				
				case 72:
					*uParam2 = 3253;
					break;
				
				case 73:
					*uParam2 = 3254;
					break;
				
				case 74:
					*uParam2 = 3255;
					break;
				
				case 75:
					*uParam2 = 3256;
					break;
				
				case 76:
					*uParam2 = 3257;
					break;
				
				case 77:
					*uParam2 = 3258;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (floor(to_float(iVar0) / 32f))
			{
				case 0:
					*uParam2 = 1757;
					break;
				
				case 1:
					*uParam2 = 1758;
					break;
				
				case 2:
					*uParam2 = 1759;
					break;
				
				case 3:
					*uParam2 = 1760;
					break;
				
				case 4:
					*uParam2 = 1761;
					break;
				
				case 5:
					*uParam2 = 1762;
					break;
				
				case 6:
					*uParam2 = 1770;
					break;
				
				case 7:
					*uParam2 = 1771;
					break;
				
				case 8:
					*uParam2 = 1772;
					break;
				
				case 9:
					*uParam2 = 1773;
					break;
				
				case 10:
					*uParam2 = 1774;
					break;
				
				case 11:
					*uParam2 = 1775;
					break;
				
				case 12:
					*uParam2 = 1776;
					break;
				
				case 13:
					*uParam2 = 1779;
					break;
				
				case 14:
					*uParam2 = 1780;
					break;
				
				case 15:
					*uParam2 = 1881;
					break;
				
				case 16:
					*uParam2 = 1882;
					break;
				
				case 17:
					*uParam2 = 1912;
					break;
				
				case 18:
					*uParam2 = 1930;
					break;
				
				case 19:
					*uParam2 = 1931;
					break;
				
				case 20:
					*uParam2 = 1932;
					break;
				
				case 21:
					*uParam2 = 1933;
					break;
				
				case 22:
					*uParam2 = 1934;
					break;
				
				case 23:
					*uParam2 = 2035;
					break;
				
				case 24:
					*uParam2 = 2036;
					break;
				
				case 25:
					*uParam2 = 2070;
					break;
				
				case 26:
					*uParam2 = 2071;
					break;
				
				case 27:
					*uParam2 = 2072;
					break;
				
				case 28:
					*uParam2 = 2073;
					break;
				
				case 29:
					*uParam2 = 2074;
					break;
				
				case 30:
					*uParam2 = 2075;
					break;
				
				case 31:
					*uParam2 = 2076;
					break;
				
				case 32:
					*uParam2 = 2077;
					break;
				
				case 33:
					*uParam2 = 2078;
					break;
				
				case 34:
					*uParam2 = 2079;
					break;
				
				case 35:
					*uParam2 = 2318;
					break;
				
				case 36:
					*uParam2 = 2319;
					break;
				
				case 37:
					*uParam2 = 2371;
					break;
				
				case 38:
					*uParam2 = 2372;
					break;
				
				case 39:
					*uParam2 = 2373;
					break;
				
				case 40:
					*uParam2 = 2374;
					break;
				
				case 41:
					*uParam2 = 2439;
					break;
				
				case 42:
					*uParam2 = 2440;
					break;
				
				case 43:
					*uParam2 = 2441;
					break;
				
				case 44:
					*uParam2 = 2442;
					break;
				
				case 45:
					*uParam2 = 2443;
					break;
				
				case 46:
					*uParam2 = 2444;
					break;
				
				case 47:
					*uParam2 = 2445;
					break;
				
				case 48:
					*uParam2 = 2446;
					break;
				
				case 49:
					*uParam2 = 2447;
					break;
				
				case 50:
					*uParam2 = 2448;
					break;
				
				case 51:
					*uParam2 = 2578;
					break;
				
				case 52:
					*uParam2 = 2579;
					break;
				
				case 53:
					*uParam2 = 2580;
					break;
				
				case 54:
					*uParam2 = 2581;
					break;
				
				case 55:
					*uParam2 = 2582;
					break;
				
				case 56:
					*uParam2 = 2583;
					break;
				
				case 57:
					*uParam2 = 2584;
					break;
				
				case 58:
					*uParam2 = 2585;
					break;
				
				case 59:
					*uParam2 = 2586;
					break;
				
				case 60:
					*uParam2 = 2587;
					break;
				
				case 61:
					*uParam2 = 2588;
					break;
				
				case 62:
					*uParam2 = 3180;
					break;
				
				case 63:
					*uParam2 = 3181;
					break;
				
				case 64:
					*uParam2 = 3182;
					break;
				
				case 65:
					*uParam2 = 3183;
					break;
				
				case 66:
					*uParam2 = 3184;
					break;
				
				case 67:
					*uParam2 = 3185;
					break;
				
				case 68:
					*uParam2 = 3259;
					break;
				
				case 69:
					*uParam2 = 3260;
					break;
				
				case 70:
					*uParam2 = 3261;
					break;
				
				case 71:
					*uParam2 = 3262;
					break;
				
				case 72:
					*uParam2 = 3263;
					break;
				
				case 73:
					*uParam2 = 3264;
					break;
				
				case 74:
					*uParam2 = 3265;
					break;
				
				case 75:
					*uParam2 = 3266;
					break;
				
				case 76:
					*uParam2 = 3267;
					break;
				
				case 77:
					*uParam2 = 3268;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = iVar0 % 32;
	return *uParam2 != 3949;
}

bool func_214(int iParam0)
{
	if (!is_bit_set(Global_69311[1 /*14*/].f_6, false))
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (!is_bit_set(Global_69311[1 /*14*/].f_6, true))
		{
			return false;
		}
		if (!is_bit_set(Global_69311[1 /*14*/].f_6, 2))
		{
			return false;
		}
	}
	return true;
}

void func_215(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = get_entity_model(iParam0);
	if (iParam1 == iParam1)
	{
	}
	if (iParam2 == iParam2)
	{
	}
	switch (iVar0)
	{
		case joaat("mp_m_freemode_01"):
			break;
		
		case joaat("mp_f_freemode_01"):
			break;
	}
}

struct<14> func_216(int iParam0, int iParam1, int iParam2)
{
	func_257();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_241(iParam1, iParam2);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_217(iParam1, iParam2);
	}
	return Global_69311[0 /*14*/];
}

void func_217(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			func_240(iParam1);
			break;
		
		case 11:
			func_239(iParam1);
			break;
		
		case 8:
			func_238(iParam1);
			break;
		
		case 9:
			func_237(iParam1);
			break;
		
		case 3:
			func_236(iParam1);
			break;
		
		case 4:
			func_235(iParam1);
			break;
		
		case 6:
			func_234(iParam1);
			break;
		
		case 1:
			func_233(iParam1);
			break;
		
		case 7:
			func_232(iParam1);
			break;
		
		case 10:
			func_231(iParam1);
			break;
		
		case 14:
			func_230(iParam1);
			break;
		
		case 12:
			func_229(iParam1);
			break;
		
		case 5:
			func_228(iParam1);
			break;
		
		case 0:
			func_226(iParam1);
			break;
		
		case 13:
			func_218(iParam1);
			break;
	}
}

void func_218(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_219(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	*uParam0.f_6 = 0;
	*uParam0 = iParam9;
	*uParam0.f_1 = iParam2 % 32;
	*uParam0.f_2 = iParam2 / 32;
	*uParam0.f_3 = iParam4;
	*uParam0.f_4 = iParam5;
	*uParam0.f_7 = iParam6;
	StringCopy(uParam0.f_8, sParam3, 16);
	*uParam0.f_13 = iParam8;
	*uParam0.f_12 = func_225(iParam8);
	if ((*uParam0.f_2 >= 10 && *uParam0.f_5 >= 0) && *uParam0.f_5 < 3)
	{
		if (!iParam10)
		{
		}
		*uParam0.f_2 = 0;
	}
	if (get_hash_key(sParam3) != get_hash_key("NO_LABEL"))
	{
	}
	if (iParam7)
	{
		set_bit(uParam0.f_6, 3);
	}
	if (iParam10)
	{
		set_bit(uParam0.f_6, false);
		if (*uParam0.f_5 >= 0 && *uParam0.f_5 < 3)
		{
			set_bit(uParam0.f_6, 5);
		}
		set_bit(uParam0.f_6, true);
		set_bit(uParam0.f_6, 2);
		set_bit(uParam0.f_6, 6);
		if (func_224(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (_0x341DE7ED1D2A1BFD(Global_2621444, 1827025211, 0))
			{
				set_bit(uParam0.f_6, 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_223(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_223(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_223(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_223(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
		else
		{
			if (!func_223(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_223(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
	}
	else if (*uParam0.f_5 >= 0 && *uParam0.f_5 < 3)
	{
		set_bit(uParam0.f_6, false);
		set_bit(uParam0.f_6, 5);
		if (func_222(iParam1, *uParam0.f_5, *uParam0.f_2, 0, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, true);
		}
		if (func_222(iParam1, *uParam0.f_5, *uParam0.f_2, 1, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, 2);
		}
		if (!func_222(iParam1, *uParam0.f_5, *uParam0.f_2, 2, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, 4);
		}
	}
	else
	{
		set_bit(uParam0.f_6, false);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_224(14))
			{
				return;
			}
			iVar0 = func_258(func_221(iParam1, *uParam0.f_2), Global_69309, 0);
			if (is_bit_set(iVar0, *uParam0.f_1))
			{
				set_bit(uParam0.f_6, true);
			}
			iVar0 = func_258(func_220(iParam1, *uParam0.f_2), Global_69309, 0);
			if (is_bit_set(iVar0, *uParam0.f_1))
			{
				set_bit(uParam0.f_6, 2);
			}
			if (func_211(iParam1, *uParam0.f_2, &iVar1))
			{
				iVar0 = func_258(iVar1, Global_69309, 0);
				if (!is_bit_set(iVar0, *uParam0.f_1))
				{
					set_bit(uParam0.f_6, 4);
				}
			}
		}
		else
		{
			set_bit(uParam0.f_6, true);
			set_bit(uParam0.f_6, 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			set_bit(uParam0.f_6, true);
			set_bit(uParam0.f_6, 2);
		}
	}
}

int func_220(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 920;
					break;
				
				case 3:
					return 1407;
					break;
				
				case 4:
					return 936;
					break;
				
				case 6:
					return 944;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 9:
					return 1416;
					break;
				
				case 10:
					return 1418;
					break;
				
				case 1:
					return 952;
					break;
				
				case 7:
					return 1419;
					break;
				
				case 11:
					return 928;
					break;
				
				case 14:
					return 960;
					break;
				
				case 12:
					return 971;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 921;
					break;
				
				case 4:
					return 937;
					break;
				
				case 6:
					return 945;
					break;
				
				case 8:
					return 1409;
					break;
				
				case 9:
					return 1417;
					break;
				
				case 7:
					return 1420;
					break;
				
				case 11:
					return 929;
					break;
				
				case 14:
					return 961;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 922;
					break;
				
				case 4:
					return 938;
					break;
				
				case 6:
					return 946;
					break;
				
				case 8:
					return 1410;
					break;
				
				case 7:
					return 1421;
					break;
				
				case 11:
					return 930;
					break;
				
				case 14:
					return 962;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 939;
					break;
				
				case 6:
					return 947;
					break;
				
				case 8:
					return 1411;
					break;
				
				case 11:
					return 931;
					break;
				
				case 14:
					return 963;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 940;
					break;
				
				case 6:
					return 948;
					break;
				
				case 8:
					return 1412;
					break;
				
				case 11:
					return 932;
					break;
				
				case 14:
					return 964;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 941;
					break;
				
				case 6:
					return 949;
					break;
				
				case 8:
					return 1413;
					break;
				
				case 11:
					return 933;
					break;
				
				case 14:
					return 965;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 942;
					break;
				
				case 6:
					return 950;
					break;
				
				case 8:
					return 1414;
					break;
				
				case 11:
					return 934;
					break;
				
				case 14:
					return 966;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 968;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 969;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 970;
					break;
			}
			break;
	}
	return 928;
}

int func_221(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 868;
					break;
				
				case 3:
					return 1392;
					break;
				
				case 4:
					return 884;
					break;
				
				case 6:
					return 892;
					break;
				
				case 8:
					return 1393;
					break;
				
				case 9:
					return 1401;
					break;
				
				case 10:
					return 1403;
					break;
				
				case 1:
					return 900;
					break;
				
				case 7:
					return 1404;
					break;
				
				case 11:
					return 876;
					break;
				
				case 14:
					return 908;
					break;
				
				case 12:
					return 919;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 869;
					break;
				
				case 4:
					return 885;
					break;
				
				case 6:
					return 893;
					break;
				
				case 8:
					return 1394;
					break;
				
				case 9:
					return 1402;
					break;
				
				case 7:
					return 1405;
					break;
				
				case 11:
					return 877;
					break;
				
				case 14:
					return 909;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 870;
					break;
				
				case 4:
					return 886;
					break;
				
				case 6:
					return 894;
					break;
				
				case 8:
					return 1395;
					break;
				
				case 7:
					return 1406;
					break;
				
				case 11:
					return 878;
					break;
				
				case 14:
					return 910;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 887;
					break;
				
				case 6:
					return 895;
					break;
				
				case 8:
					return 1396;
					break;
				
				case 11:
					return 879;
					break;
				
				case 14:
					return 911;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 888;
					break;
				
				case 6:
					return 896;
					break;
				
				case 8:
					return 1397;
					break;
				
				case 11:
					return 880;
					break;
				
				case 14:
					return 912;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 889;
					break;
				
				case 6:
					return 897;
					break;
				
				case 8:
					return 1398;
					break;
				
				case 11:
					return 881;
					break;
				
				case 14:
					return 913;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 890;
					break;
				
				case 6:
					return 898;
					break;
				
				case 8:
					return 1399;
					break;
				
				case 11:
					return 882;
					break;
				
				case 14:
					return 914;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 916;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 917;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 918;
					break;
			}
			break;
	}
	return 876;
}

int func_222(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/][iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				set_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				clear_bit(&(Global_101154.f_1826[uParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return is_bit_set(Global_101154.f_1826[uParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return false;
}

int func_223(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_69309;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_213(uParam0, iParam1, &iVar2, &iVar1, iParam2, iParam3))
	{
		iVar3 = func_258(iVar2, iVar0, 0);
		return is_bit_set(iVar3, iVar1);
	}
	return false;
}

int func_224(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_225(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_226(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	Global_69311[0 /*14*/].f_5 = 4;
	func_227(iVar0, iParam0, 0);
}

void func_227(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;
	
	iVar0 = iParam1 - iParam2;
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_69311[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = _0xF3FBE2D50A6A8C28(iVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			get_shop_ped_query_outfit(iVar17, &Var2);
			if (!_is_dlc_data_empty(Var2))
			{
				if (iVar18 == iParam1 - iParam2)
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_219(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_219(&(Global_69311[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		init_shop_ped_prop(&Var20);
		iVar39 = 0;
		iVar40 = _get_num_props_from_outfit(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			get_shop_ped_query_prop(iVar38, &Var20);
			if (!_is_dlc_data_empty(Var20))
			{
				if (iVar39 == iParam1 - iParam2)
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20;
					func_219(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, _0x341DE7ED1D2A1BFD(Var20.f_1, -2050632586, 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		init_shop_ped_component(&Var41);
		iVar59 = 0;
		iVar60 = _get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_204(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			get_shop_ped_query_component(iVar58, &Var41);
			if (!_is_dlc_data_empty(Var41))
			{
				if (iVar59 == iParam1 - iParam2)
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41;
					func_219(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, _0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_228(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 4;
			func_227(iVar10, iParam0, 9);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_229(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 4;
			func_227(iVar10, iParam0, 28);
			return;
			break;
	}
	func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_230(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 400;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 375;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 325;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 255;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 360;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 3970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1355;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 515;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 545;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 1440;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 50;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 575;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 605;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 285;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 2125;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 295;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 855;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1615;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 1130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 390;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 970;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1125;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 740;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 805;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 6250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 3585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 4075;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 4935;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 5600;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 4790;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 2245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 1205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 2215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 4815;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 4795;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 4965;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 480;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 465;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 2390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 2005;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 570;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 525;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4275;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 3660;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 4165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 3670;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 3620;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 3610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 4140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 1490;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 1105;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 825;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = iParam0 - 10;
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12--;
			}
			iVar1 = round(to_float(iVar1) * Global_262145.f_2041[iVar12] * Global_275816.f_26);
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = iParam0 - 131;
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_2162[iVar13] * Global_275816.f_27);
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = iParam0 - 155;
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_2187[iVar14] * Global_275816.f_56);
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = iParam0 - 319;
		if (iVar15 >= 0 && iVar15 < 10)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_2316[iVar15] * Global_275816.f_28);
		}
	}
	if (iParam0 >= 327)
	{
		Global_69311[0 /*14*/].f_5 = 4;
		func_227(iVar10, iParam0, 327);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			if (_0x341DE7ED1D2A1BFD(Global_2621444, -1757550583, 1))
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_26);
			}
			else if (_0x341DE7ED1D2A1BFD(Global_2621444, 97230661, 1))
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_56);
			}
			else if (_0x341DE7ED1D2A1BFD(Global_2621444, 1147826474, 1))
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_28);
			}
		}
	}
	else
	{
		func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_231(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = false;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 4;
			func_227(iVar10, iParam0, 6);
			return;
			break;
	}
	func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_232(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = false;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			if (Global_262145.f_4134 != -1)
			{
				iVar1 = Global_262145.f_4134;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			if (Global_262145.f_4135 != -1)
			{
				iVar1 = Global_262145.f_4135;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			if (Global_262145.f_4136 != -1)
			{
				iVar1 = Global_262145.f_4136;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			if (Global_262145.f_4137 != -1)
			{
				iVar1 = Global_262145.f_4137;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			if (Global_262145.f_4138 != -1)
			{
				iVar1 = Global_262145.f_4138;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			if (Global_262145.f_4139 != -1)
			{
				iVar1 = Global_262145.f_4139;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			if (Global_262145.f_4140 != -1)
			{
				iVar1 = Global_262145.f_4140;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			if (Global_262145.f_4141 != -1)
			{
				iVar1 = Global_262145.f_4141;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			if (Global_262145.f_4142 != -1)
			{
				iVar1 = Global_262145.f_4142;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			if (Global_262145.f_4143 != -1)
			{
				iVar1 = Global_262145.f_4143;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			if (Global_262145.f_4144 != -1)
			{
				iVar1 = Global_262145.f_4144;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			if (Global_262145.f_4145 != -1)
			{
				iVar1 = Global_262145.f_4145;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4146 != -1)
			{
				iVar1 = Global_262145.f_4146;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4147 != -1)
			{
				iVar1 = Global_262145.f_4147;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4148 != -1)
			{
				iVar1 = Global_262145.f_4148;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			if (Global_262145.f_4149 != -1)
			{
				iVar1 = Global_262145.f_4149;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			if (Global_262145.f_4150 != -1)
			{
				iVar1 = Global_262145.f_4150;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			if (Global_262145.f_4151 != -1)
			{
				iVar1 = Global_262145.f_4151;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4152 != -1)
			{
				iVar1 = Global_262145.f_4152;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			if (Global_262145.f_4153 != -1)
			{
				iVar1 = Global_262145.f_4153;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 4;
			if (Global_262145.f_4154 != -1)
			{
				iVar1 = Global_262145.f_4154;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 5;
			if (Global_262145.f_4155 != -1)
			{
				iVar1 = Global_262145.f_4155;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4156 != -1)
			{
				iVar1 = Global_262145.f_4156;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 0;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 4;
			func_227(iVar10, iParam0, 55);
			if (Global_69311[0 /*14*/].f_7 > 0)
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_58);
			}
			return;
			break;
	}
	iVar1 = round(to_float(iVar1) * Global_275816.f_58);
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_233(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = false;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 4;
			func_227(iVar10, iParam0, 26);
			if (Global_69311[0 /*14*/].f_7 > 0)
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_29);
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0 - 1;
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = round(to_float(iVar1) * Global_262145.f_2014[iVar11] * Global_275816.f_29);
	}
	func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_234(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 1560;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 120;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 365;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2395;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 3675;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 3875;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2050;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 375;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2105;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 345;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 380;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 340;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 385;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4135;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 370;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 375;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 385;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 365;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 325;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 325;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 370;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 365;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 410;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 4125;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 4365;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 5365;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 6225;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 3755;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 405;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 4115;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 3850;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 3110;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1950;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 455;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 405;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 410;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 415;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 4425;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 675;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 340;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 165;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 1040;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 100;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 200;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 100;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 1420;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 435;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 425;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 435;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 425;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 430;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 3215;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 3320;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 440;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 440;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 450;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 1255;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 750;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 460;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 210;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 215;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 220;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 455;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 790;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 175;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = round(to_float(iVar1) * Global_262145.f_1757[iVar11] * Global_275816.f_25);
	}
	if (iParam0 >= 256)
	{
		Global_69311[0 /*14*/].f_5 = 4;
		func_227(iVar10, iParam0, 256);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_25);
		}
	}
	else
	{
		func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_235(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 450;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 4875;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 1760;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 1090;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 2465;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 305;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 290;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 255;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 405;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 5000;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 4480;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 4335;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 375;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 265;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 275;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 280;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 300;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 265;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 255;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 260;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 650;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 345;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 525;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 535;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 520;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 215;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 215;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 630;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 250;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 260;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 200;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 225;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 230;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 725;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 650;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 230;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 280;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 330;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 320;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 315;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 530;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 890;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 440;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 295;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 155;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 150;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 950;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 580;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 200;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 665;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 780;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 615;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 250;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 435;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 380;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 1295;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 1135;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 1425;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1645;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1925;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 2250;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 365;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 360;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 2245;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 2170;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 300;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 510;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 465;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 250;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 110;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 480;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 155;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 395;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 285;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 560;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 595;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 295;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 230;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 215;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 270;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 215;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 290;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 230;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 350;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 335;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	StringCopy(&Var2, "L_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = round(to_float(iVar1) * Global_262145.f_1243[iVar11] * Global_275816.f_23);
	}
	if (iParam0 >= 256)
	{
		Global_69311[0 /*14*/].f_5 = 4;
		func_227(iVar10, iParam0, 256);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_23);
		}
	}
	else
	{
		func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_236(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	if (iParam0 >= 16)
	{
		Global_69311[0 /*14*/].f_5 = 4;
		func_227(iVar10, iParam0, 16);
		return;
	}
	func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_237(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
	}
	if (iParam0 >= 36)
	{
		Global_69311[0 /*14*/].f_5 = 4;
		func_227(iVar10, iParam0, 36);
		return;
	}
	func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_238(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 33:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMF_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMF_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMF_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMF_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMF_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMF_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[77]);
			break;
		
		case 48:
			StringCopy(&Var2, "U_FMF_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[78]);
			break;
		
		case 49:
			StringCopy(&Var2, "U_FMF_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "U_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[80]);
			break;
		
		case 51:
			StringCopy(&Var2, "U_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[81]);
			break;
		
		case 52:
			StringCopy(&Var2, "U_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "U_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "U_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "U_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "U_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "U_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[87]);
			break;
		
		case 58:
			StringCopy(&Var2, "U_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "U_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[89]);
			break;
		
		case 60:
			StringCopy(&Var2, "U_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "U_FMF_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "U_FMF_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "U_FMF_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "U_FMF_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "U_FMF_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		case 66:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 67:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 68:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 69:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 70:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "U_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[176]);
			break;
		
		case 72:
			StringCopy(&Var2, "U_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[177]);
			break;
		
		case 73:
			StringCopy(&Var2, "U_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[178]);
			break;
		
		case 74:
			StringCopy(&Var2, "U_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "U_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "U_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "U_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "U_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "U_FMF_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMF_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMF_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[186]);
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMF_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[187]);
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMF_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMF_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMF_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMF_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[191]);
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[199]);
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMF_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[200]);
			break;
		
		case 96:
			StringCopy(&Var2, "U_FMF_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[201]);
			break;
		
		case 97:
			StringCopy(&Var2, "U_FMF_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "U_FMF_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "U_FMF_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 100:
			StringCopy(&Var2, "U_FMF_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "U_FMF_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "U_FMF_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "U_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[208]);
			break;
		
		case 104:
			StringCopy(&Var2, "U_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[209]);
			break;
		
		case 105:
			StringCopy(&Var2, "U_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[210]);
			break;
		
		case 106:
			StringCopy(&Var2, "U_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[211]);
			break;
		
		case 107:
			StringCopy(&Var2, "U_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[212]);
			break;
		
		case 108:
			StringCopy(&Var2, "U_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[213]);
			break;
		
		case 109:
			StringCopy(&Var2, "U_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[214]);
			break;
		
		case 110:
			StringCopy(&Var2, "U_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[215]);
			break;
		
		case 111:
			StringCopy(&Var2, "U_FMF_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[216]);
			break;
		
		case 112:
			StringCopy(&Var2, "U_FMF_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[217]);
			break;
		
		case 113:
			StringCopy(&Var2, "U_FMF_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[218]);
			break;
		
		case 114:
			StringCopy(&Var2, "U_FMF_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[219]);
			break;
		
		case 115:
			StringCopy(&Var2, "U_FMF_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[220]);
			break;
		
		case 116:
			StringCopy(&Var2, "U_FMF_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[221]);
			break;
		
		case 117:
			StringCopy(&Var2, "U_FMF_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[222]);
			break;
		
		case 118:
			StringCopy(&Var2, "U_FMF_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[223]);
			break;
		
		case 119:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 120:
			StringCopy(&Var2, "U_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[240]);
			break;
		
		case 121:
			StringCopy(&Var2, "U_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 122:
			StringCopy(&Var2, "U_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 123:
			StringCopy(&Var2, "U_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[243]);
			break;
		
		case 124:
			StringCopy(&Var2, "U_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 125:
			StringCopy(&Var2, "U_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 126:
			StringCopy(&Var2, "U_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 127:
			StringCopy(&Var2, "U_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar0 = true;
			break;
		
		case 128:
			StringCopy(&Var2, "U_FMF_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar0 = true;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMF_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMF_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[250]);
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMF_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[251]);
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMF_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMF_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMF_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMF_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 4;
			func_227(iVar10, iParam0, 136);
			if (Global_69311[0 /*14*/].f_7 > 0)
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_24);
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_172(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round(to_float(1250) * Global_262145.f_2975);
		}
		else
		{
			iVar1 = round(to_float(40) * Global_262145.f_1500[4]);
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		if (func_172(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = round(to_float(450) * Global_262145.f_2974);
		}
		else
		{
			iVar1 = round(to_float(45) * Global_262145.f_1500[7]);
		}
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_172(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round(to_float(500) * Global_262145.f_2973);
		}
		else
		{
			iVar1 = round(to_float(40) * Global_262145.f_1500[9]);
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[iVar11]);
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar12 = iParam0 - 16;
		if (iVar12 >= 0 && iVar12 < 256)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[iVar12]);
		}
	}
	iVar1 = round(to_float(iVar1) * Global_275816.f_24);
	func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_239(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 230;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 355;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5000;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2725;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 3625;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 4220;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 310;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 295;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 2250;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 275;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 445;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 470;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 95;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 360;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 460;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1980;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 2110;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 95;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 900;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1000;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1050;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1000;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2975;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 1100;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 1825;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1750;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1075;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 2805;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 2250;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 525;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 130;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 560;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 975;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 160;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 100;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1700;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 380;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 90;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 85;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 385;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 430;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 375;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 375;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 360;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 325;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 340;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 300;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 315;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 415;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 420;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 4)
	{
		if (func_172(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round(to_float(1250) * Global_262145.f_2975 * Global_275816.f_24);
		}
		else
		{
			iVar1 = round(to_float(40) * Global_262145.f_1500[4] * Global_275816.f_24);
		}
	}
	else if (iParam0 == 7)
	{
		if (func_172(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = round(to_float(450) * Global_262145.f_2974 * Global_275816.f_24);
		}
		else
		{
			iVar1 = round(to_float(45) * Global_262145.f_1500[7] * Global_275816.f_24);
		}
	}
	else if (iParam0 == 9)
	{
		if (func_172(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round(to_float(500) * Global_262145.f_2973 * Global_275816.f_24);
		}
		else
		{
			iVar1 = round(to_float(40) * Global_262145.f_1500[9] * Global_275816.f_24);
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_1500[iVar11] * Global_275816.f_24);
		}
	}
	if (iParam0 >= 256)
	{
		Global_69311[0 /*14*/].f_5 = 4;
		func_227(iVar10, iParam0, 256);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_24);
		}
	}
	else
	{
		func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_240(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[0]);
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[1]);
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[2]);
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[3]);
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[4]);
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[5]);
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[6]);
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[7]);
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[8]);
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[9]);
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[10]);
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[11]);
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[12]);
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[13]);
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[14]);
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[15]);
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[16]);
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[17]);
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[18]);
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[19]);
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[20]);
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[21]);
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[22]);
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[23]);
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[24]);
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[25]);
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[26]);
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[27]);
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[28]);
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[29]);
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[30]);
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[31]);
			break;
		
		case 36:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[32]);
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[33]);
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[34]);
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[35]);
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 41:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[36]);
			break;
		
		case 42:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[37]);
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[38]);
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[39]);
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[40]);
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 47:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[41]);
			break;
		
		case 48:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[42]);
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[43]);
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[44]);
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[45]);
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[46]);
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[47]);
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[48]);
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[49]);
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[50]);
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = false;
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[51]);
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[52]);
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[53]);
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[54]);
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[55]);
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = false;
			break;
		
		case 67:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[56]);
			break;
		
		case 68:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[57]);
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[58]);
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[59]);
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[60]);
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 73:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[61]);
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[62]);
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[63]);
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[64]);
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[65]);
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 79:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[66]);
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[67]);
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[68]);
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[69]);
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[70]);
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[71]);
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[72]);
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[73]);
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[74]);
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2451[75]);
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = false;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 4;
			func_227(iVar10, iParam0, 92);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_241(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			func_256(iParam1);
			break;
		
		case 11:
			func_255(iParam1);
			break;
		
		case 8:
			func_254(iParam1);
			break;
		
		case 9:
			func_253(iParam1);
			break;
		
		case 3:
			func_252(iParam1);
			break;
		
		case 4:
			func_251(iParam1);
			break;
		
		case 6:
			func_250(iParam1);
			break;
		
		case 1:
			func_249(iParam1);
			break;
		
		case 7:
			func_248(iParam1);
			break;
		
		case 10:
			func_247(iParam1);
			break;
		
		case 14:
			func_246(iParam1);
			break;
		
		case 12:
			func_245(iParam1);
			break;
		
		case 5:
			func_244(iParam1);
			break;
		
		case 0:
			func_243(iParam1);
			break;
		
		case 13:
			func_242(iParam1);
			break;
	}
}

void func_242(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_243(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	Global_69311[0 /*14*/].f_5 = 3;
	func_227(iVar0, iParam0, 0);
}

void func_244(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 3;
			func_227(iVar10, iParam0, 9);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_245(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S9", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P1", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P2", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P3", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P4", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P5", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P6", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P7", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P8", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B1", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B2", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B3", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B4", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B5", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B6", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B7", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B8", 16);
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 3;
			func_227(iVar10, iParam0, 26);
			return;
			break;
	}
	func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_246(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 320;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 245;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 415;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 315;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 265;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 570;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 560;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 260;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "HT_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 100;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMM_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1715;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 3900;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1550;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 4250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 0;
			iVar11 = 1;
			iVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 4460;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 4970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 290;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 305;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 4170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 335;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 4940;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 275;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 3620;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 350;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 365;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 380;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMM_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMM_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMM_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMM_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMM_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMM_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMM_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMM_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMM_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMM_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMM_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMM_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMM_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMM_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMM_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMM_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMM_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMM_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMM_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMM_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMM_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMM_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMM_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMM_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 163:
			StringCopy(&Var2, "G_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "G_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "G_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 174:
			StringCopy(&Var2, "G_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "G_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "G_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 380;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "CLO_EXM_G_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 950;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "CLO_EXM_G_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "CLO_EXM_G_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 630;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "G_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "G_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "G_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "CLO_EXM_G_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "CLO_EXM_G_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 265;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "CLO_EXM_G_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 330;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "G_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "G_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "G_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "CLO_EXM_G_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "CLO_EXM_G_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "CLO_EXM_G_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 675;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "G_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 4050;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "G_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 4060;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "G_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 215:
			StringCopy(&Var2, "CLO_EXM_G_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 1760;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 216:
			StringCopy(&Var2, "CLO_EXM_G_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 1375;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 217:
			StringCopy(&Var2, "CLO_EXM_G_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 1440;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "G_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "G_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "G_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 1445;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 530;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "CLO_EXM_G_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "CLO_EXM_G_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 785;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "CLO_EXM_G_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 850;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 237:
			StringCopy(&Var2, "G_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 4260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 4310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 4130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "G_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "G_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "G_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "G_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "CLO_EXM_G_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1885;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "CLO_EXM_G_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 1500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "CLO_EXM_G_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 1565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "G_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "G_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "G_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 4290;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 4150;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 4295;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "CLO_EXM_G_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "CLO_EXM_G_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "CLO_EXM_G_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 6240;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 4955;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 5590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "G_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4920;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "G_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 4990;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "G_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 4780;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 4775;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 4800;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "CLO_EXM_G_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "CLO_EXM_G_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "CLO_EXM_G_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 273:
			StringCopy(&Var2, "G_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 274:
			StringCopy(&Var2, "G_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 275:
			StringCopy(&Var2, "G_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 385;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 3655;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 4055;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 3595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 3605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 3645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 286:
			StringCopy(&Var2, "CLO_EXM_G_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 287:
			StringCopy(&Var2, "CLO_EXM_G_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 288:
			StringCopy(&Var2, "CLO_EXM_G_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 2230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 1690;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 297:
			StringCopy(&Var2, "CLO_EXM_G_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 2715;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 298:
			StringCopy(&Var2, "CLO_EXM_G_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2330;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 299:
			StringCopy(&Var2, "CLO_EXM_G_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 2395;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = false;
			iVar8 = 1;
			iVar11 = 3;
			iVar0 = true;
			break;
		
		case 308:
			StringCopy(&Var2, "G_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "G_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "G_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 485;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 316:
			StringCopy(&Var2, "CLO_EXM_G_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 317:
			StringCopy(&Var2, "CLO_EXM_G_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 318:
			StringCopy(&Var2, "CLO_EXM_G_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 695;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = false;
			iVar8 = 6;
			iVar11 = 4;
			iVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = iParam0 - 10;
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12--;
			}
			iVar1 = round(to_float(iVar1) * Global_262145.f_952[iVar12] * Global_275816.f_18);
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = iParam0 - 131;
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_1073[iVar13] * Global_275816.f_19);
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = iParam0 - 155;
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_1098[iVar14] * Global_275816.f_20);
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = iParam0 - 319;
		if (iVar15 >= 0 && iVar15 < 15)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_1227[iVar15] * Global_275816.f_21);
		}
	}
	if (iParam0 >= 327)
	{
		Global_69311[0 /*14*/].f_5 = 3;
		func_227(iVar10, iParam0, 327);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			if (_0x341DE7ED1D2A1BFD(Global_2621444, -1757550583, 1))
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_18);
			}
			else if (_0x341DE7ED1D2A1BFD(Global_2621444, 97230661, 1))
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_20);
			}
			else if (_0x341DE7ED1D2A1BFD(Global_2621444, 1147826474, 1))
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_21);
			}
		}
	}
	else
	{
		func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_247(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = false;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 6:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 3;
			func_227(iVar10, iParam0, 7);
			return;
			break;
	}
	func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_248(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = false;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 4:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 7:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 8:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 14:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 15:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 11;
			iVar0 = true;
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 25:
			iVar6 = 4;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 31:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 37:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 40:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 41:
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 42:
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 43:
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 44:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 45:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 46:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 47:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 48:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 49:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 50:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 51:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 52:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 57:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 58:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 59:
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 725;
			}
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 68:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 69:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 70:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 71:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 72:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 0;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 74:
			iVar6 = 12;
			iVar7 = 1;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 75:
			iVar6 = 12;
			iVar7 = 2;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 76:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 77:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 78:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 79:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 80:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 81:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 82:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 83:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 84:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 85:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 86:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 87:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 88:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 89:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 90:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 3;
			func_227(iVar10, iParam0, 92);
			if (Global_69311[0 /*14*/].f_7 > 0)
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_57);
			}
			return;
			break;
	}
	iVar1 = round(to_float(iVar1) * Global_275816.f_57);
	StringCopy(&Var2, "T_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_249(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = false;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 3;
			func_227(iVar10, iParam0, 26);
			return;
			break;
	}
	StringCopy(&Var2, "M_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0 - 1;
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = round(to_float(iVar1) * Global_262145.f_925[iVar11] * Global_275816.f_22);
	}
	func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_250(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 300;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 285;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 165;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 480;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 350;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 290;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 165;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 165;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 170;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 155;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 165;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 165;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 160;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 560;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 275;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 300;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 360;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 355;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 310;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 350;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 305;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 280;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 320;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 65;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 165;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 185;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 460;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 185;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 190;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 185;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 445;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 185;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 175;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 215;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 230;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 235;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 225;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 215;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 245;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 225;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 135;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 140;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 115;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 115;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 115;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 500;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 440;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 1090;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 1865;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 470;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 1795;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 1830;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 455;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 455;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 2110;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 380;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1655;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 415;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 730;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 445;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 425;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 480;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 485;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 480;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 395;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 495;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 2090;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 450;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 685;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 365;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 465;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 405;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 400;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 385;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 435;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 375;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 390;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 430;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 490;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 615;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 315;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 415;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 435;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 640;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 460;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 465;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 745;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 845;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 1420;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 1000;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 690;
			break;
	}
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = round(to_float(iVar1) * Global_262145.f_668[iVar11] * Global_275816.f_17);
	}
	StringCopy(&Var2, "F_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 >= 256)
	{
		Global_69311[0 /*14*/].f_5 = 3;
		func_227(iVar10, iParam0, 256);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_17);
		}
	}
	else
	{
		func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_251(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 335;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 460;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 470;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 385;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 455;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 2150;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 375;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 2190;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 295;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 465;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 1740;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 1415;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 325;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 355;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 395;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 315;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 265;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 305;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 235;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 245;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 1865;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 415;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 90;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 225;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 205;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 215;
			break;
		
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 490;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 485;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 100;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 80;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 95;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 380;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 80;
			break;
		
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 140;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 345;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 745;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 660;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 150;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 75;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 90;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 255;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1150;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1150;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 1210;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 1125;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 1135;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1145;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 1145;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 845;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 480;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 460;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 475;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 470;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 105;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 285;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 275;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 100;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 95;
			break;
	}
	StringCopy(&Var2, "L_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = round(to_float(iVar1) * Global_262145.f_173[iVar11] * Global_275816.f_15);
	}
	if (iParam0 >= 256)
	{
		Global_69311[0 /*14*/].f_5 = 3;
		func_227(iVar10, iParam0, 256);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_15);
		}
	}
	else
	{
		func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_252(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 3;
			func_227(iVar10, iParam0, 16);
			return;
			break;
	}
	func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_253(int iParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 36:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 37:
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 38:
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 40:
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 41:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 42:
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 43:
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 44:
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 45:
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 3;
			func_227(iVar10, iParam0, 46);
			return;
			break;
	}
	func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_254(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 33:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 49:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 50:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 51:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 58:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			iVar0 = true;
			break;
		
		case 60:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 65:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 66:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 67:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[80]);
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[81]);
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[82]);
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[87]);
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMM_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMM_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMM_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMM_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMM_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMM_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMM_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMM_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 97:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 98:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 99:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 100:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 101:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 102:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 103:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 104:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 105:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 106:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 107:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 108:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 109:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			if (Global_262145.f_4175 != -1)
			{
				iVar1 = Global_262145.f_4175;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 110:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 111:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 112:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 113:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 114:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 115:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 116:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 117:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 118:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 119:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 120:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 121:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 122:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 123:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 124:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 125:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			if (Global_262145.f_4175 != -1)
			{
				iVar1 = Global_262145.f_4175;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 126:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 127:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 435;
			}
			break;
	}
	switch (iParam0)
	{
		case 128:
			StringCopy(&Var2, "U_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar0 = true;
			break;
		
		case 136:
			StringCopy(&Var2, "U_FMM_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar0 = true;
			break;
		
		case 137:
			StringCopy(&Var2, "U_FMM_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 138:
			StringCopy(&Var2, "U_FMM_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 139:
			StringCopy(&Var2, "U_FMM_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar0 = true;
			break;
		
		case 140:
			StringCopy(&Var2, "U_FMM_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 141:
			StringCopy(&Var2, "U_FMM_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 142:
			StringCopy(&Var2, "U_FMM_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 143:
			StringCopy(&Var2, "U_FMM_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		case 144:
			StringCopy(&Var2, "U_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 145:
			StringCopy(&Var2, "U_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 146:
			StringCopy(&Var2, "U_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 147:
			StringCopy(&Var2, "U_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 148:
			StringCopy(&Var2, "U_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 149:
			StringCopy(&Var2, "U_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 150:
			StringCopy(&Var2, "U_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 151:
			StringCopy(&Var2, "U_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 152:
			StringCopy(&Var2, "U_FMM_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar0 = true;
			break;
		
		case 153:
			StringCopy(&Var2, "U_FMM_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 154:
			StringCopy(&Var2, "U_FMM_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 155:
			StringCopy(&Var2, "U_FMM_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 156:
			StringCopy(&Var2, "U_FMM_9_12", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 157:
			StringCopy(&Var2, "U_FMM_9_13", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 158:
			StringCopy(&Var2, "U_FMM_9_14", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 159:
			StringCopy(&Var2, "U_FMM_9_15", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 160:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 161:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 162:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 163:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 164:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 165:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 166:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 167:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 168:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 169:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 170:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 171:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 172:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			if (Global_262145.f_4176 != -1)
			{
				iVar1 = Global_262145.f_4176;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 173:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 174:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 175:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 460;
			}
			break;
		
		case 176:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 177:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 178:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 179:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 180:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 181:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 182:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 183:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 184:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 185:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 186:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 187:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 188:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			if (Global_262145.f_4176 != -1)
			{
				iVar1 = Global_262145.f_4176;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 189:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 190:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 191:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 460;
			}
			break;
	}
	switch (iParam0)
	{
		case 192:
			StringCopy(&Var2, "U_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 193:
			StringCopy(&Var2, "U_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 194:
			StringCopy(&Var2, "U_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 195:
			StringCopy(&Var2, "U_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 196:
			StringCopy(&Var2, "U_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 197:
			StringCopy(&Var2, "U_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 198:
			StringCopy(&Var2, "U_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 199:
			StringCopy(&Var2, "U_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 200:
			StringCopy(&Var2, "U_FMM_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 201:
			StringCopy(&Var2, "U_FMM_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 202:
			StringCopy(&Var2, "U_FMM_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 203:
			StringCopy(&Var2, "U_FMM_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 204:
			StringCopy(&Var2, "U_FMM_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 205:
			StringCopy(&Var2, "U_FMM_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 206:
			StringCopy(&Var2, "U_FMM_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 207:
			StringCopy(&Var2, "U_FMM_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		case 208:
			StringCopy(&Var2, "U_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 209:
			StringCopy(&Var2, "U_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 210:
			StringCopy(&Var2, "U_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 211:
			StringCopy(&Var2, "U_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 212:
			StringCopy(&Var2, "U_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "U_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 214:
			StringCopy(&Var2, "U_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "U_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "U_FMM_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "U_FMM_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "U_FMM_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "U_FMM_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "U_FMM_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "U_FMM_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 222:
			StringCopy(&Var2, "U_FMM_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "U_FMM_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[16]);
			break;
		
		case 225:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[17]);
			break;
		
		case 226:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 40;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[19]);
			break;
		
		case 228:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 315;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[20]);
			break;
		
		case 229:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 215;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[21]);
			break;
		
		case 230:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 265;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[22]);
			break;
		
		case 231:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 45;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[23]);
			break;
		
		case 232:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 205;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[24]);
			break;
		
		case 233:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar0 = true;
			break;
		
		case 234:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar0 = true;
			break;
		
		case 235:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 60;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[27]);
			break;
		
		case 236:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 55;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[28]);
			break;
		
		case 237:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar0 = true;
			break;
		
		case 238:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 170;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[30]);
			break;
		
		case 239:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar0 = true;
			break;
		
		case 240:
			StringCopy(&Var2, "U_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = false;
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[32]);
			break;
	}
	if (iParam0 == 23 || iParam0 == 231)
	{
		if (func_172(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round(to_float(1250) * Global_262145.f_2975);
		}
		else
		{
			iVar1 = round(to_float(45) * Global_262145.f_430[23]);
		}
	}
	else if (iParam0 == 17 || iParam0 == 225)
	{
		if (func_172(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = round(to_float(450) * Global_262145.f_2974);
		}
		else
		{
			iVar1 = round(to_float(60) * Global_262145.f_430[17]);
		}
	}
	else if (iParam0 == 28 || iParam0 == 236)
	{
		if (func_172(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round(to_float(500) * Global_262145.f_2973);
		}
		else
		{
			iVar1 = round(to_float(55) * Global_262145.f_430[28]);
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[iVar11]);
		}
	}
	else if (iParam0 >= 32 && iParam0 < 48)
	{
		iVar12 = iParam0 - 32;
		if (iVar12 >= 0 && iVar12 < 237)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[iVar12]);
		}
	}
	else if (iParam0 >= 128 && iParam0 < 160)
	{
		iVar13 = iParam0 - 160 + 124;
		if (iVar13 >= 0 && iVar13 < 237)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[iVar13]);
		}
	}
	else if (iParam0 >= 192 && iParam0 < 224)
	{
		iVar14 = iParam0 - 160 + 188;
		if (iVar14 >= 0 && iVar14 < 237)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[iVar14]);
		}
	}
	iVar1 = round(to_float(iVar1) * Global_275816.f_16);
	if (iParam0 >= 241)
	{
		Global_69311[0 /*14*/].f_5 = 3;
		func_227(iVar10, iParam0, 241);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_16);
		}
	}
	else
	{
		func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_255(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 160;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 205;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 115;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 150;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 115;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 140;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 115;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 150;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 275;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 460;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 260;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2520;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 350;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 3125;
			break;
		
		case 79:
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2485;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 2945;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 3080;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 2990;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 3750;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 515;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 530;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 2810;
			break;
		
		case 108:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 109:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 110:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 111:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 140;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 140;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 130;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 740;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 790;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 130;
			break;
	}
	switch (iParam0)
	{
		case 124:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 125:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 126:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 127:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 140:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 141:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 142:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 143:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 156:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 505;
			break;
		
		case 157:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 470;
			break;
		
		case 158:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 159:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 172:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 173:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 174:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 175:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 2450;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 188:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 189:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 190:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 191:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 204:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 205:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 206:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 207:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = false;
			iVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = false;
			iVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 220:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 221:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 222:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 440;
			break;
		
		case 223:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 325;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 325;
			break;
		
		case 236:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	StringCopy(&Var2, "U_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 23)
	{
		if (func_172(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = round(to_float(1250) * Global_262145.f_2975 * Global_275816.f_16);
		}
		else
		{
			iVar1 = round(to_float(45) * Global_262145.f_430[23] * Global_275816.f_16);
		}
	}
	else if (iParam0 == 17)
	{
		if (func_172(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = round(to_float(450) * Global_262145.f_2974 * Global_275816.f_16);
		}
		else
		{
			iVar1 = round(to_float(60) * Global_262145.f_430[17] * Global_275816.f_16);
		}
	}
	else if (iParam0 == 28)
	{
		if (func_172(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = round(to_float(500) * Global_262145.f_2973 * Global_275816.f_16);
		}
		else
		{
			iVar1 = round(to_float(55) * Global_262145.f_430[28] * Global_275816.f_16);
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = round(to_float(iVar1) * Global_262145.f_430[iVar11] * Global_275816.f_16);
		}
	}
	if (iParam0 >= 237)
	{
		Global_69311[0 /*14*/].f_5 = 3;
		func_227(iVar10, iParam0, 237);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_16);
		}
	}
	else
	{
		func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_256(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[0]);
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[1]);
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[2]);
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[3]);
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[4]);
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[5]);
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[6]);
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[7]);
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[8]);
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[9]);
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[10]);
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[11]);
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[12]);
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[13]);
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[14]);
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[15]);
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[16]);
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[17]);
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[18]);
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[19]);
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[20]);
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 25:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = false;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[21]);
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[22]);
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[23]);
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[24]);
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[25]);
			break;
		
		case 31:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[26]);
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[27]);
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[28]);
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[29]);
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[30]);
			break;
		
		case 37:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[31]);
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[32]);
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[33]);
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[34]);
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[35]);
			break;
		
		case 43:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 44:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = false;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[36]);
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[37]);
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[38]);
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[39]);
			break;
		
		case 49:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[40]);
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[41]);
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[42]);
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[43]);
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[44]);
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[45]);
			break;
		
		case 55:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 56:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = false;
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[46]);
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[47]);
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[48]);
			break;
		
		case 60:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[49]);
			break;
		
		case 61:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[50]);
			break;
		
		case 62:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[51]);
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[52]);
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[53]);
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[54]);
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[55]);
			break;
		
		case 68:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[56]);
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[57]);
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[58]);
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[59]);
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[60]);
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[61]);
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[62]);
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[63]);
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[64]);
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[65]);
			break;
		
		case 79:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[66]);
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[67]);
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[68]);
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[69]);
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[70]);
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[71]);
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[72]);
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[73]);
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[74]);
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = round(to_float(iVar1) * Global_262145.f_2528[75]);
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = false;
			break;
		
		default:
			Global_69311[0 /*14*/].f_5 = 3;
			func_227(iVar10, iParam0, 91);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_219(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_257()
{
	Global_69311[0 /*14*/].f_1 = -1;
	Global_69311[0 /*14*/].f_2 = -1;
	Global_69311[0 /*14*/].f_5 = -1;
	Global_69311[0 /*14*/].f_3 = -1;
	Global_69311[0 /*14*/].f_4 = -1;
	Global_69311[0 /*14*/].f_7 = 0;
	Global_69311[0 /*14*/].f_6 = 0;
	Global_69311[0 /*14*/].f_13 = -1;
	Global_69311[0 /*14*/].f_12 = 0;
	Global_69311[0 /*14*/] = 0;
	StringCopy(&(Global_69311[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_258(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_86(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_259(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && _0x341DE7ED1D2A1BFD(func_188(iParam0, iParam2, 14, 3), -1033433901, 1)))
					{
						return true;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && _0x341DE7ED1D2A1BFD(func_188(iParam0, iParam2, 14, 4), -1033433901, 1)))
					{
						return true;
					}
					break;
			}
			break;
	}
	return false;
}

bool func_260(int iParam0)
{
	if ((iParam0 == joaat("blazer") || iParam0 == joaat("sanchez")) || iParam0 == joaat("sanchez2"))
	{
		return true;
	}
	if (is_this_model_a_bike(iParam0) || is_this_model_a_bicycle(iParam0))
	{
		return true;
	}
	return false;
}

bool func_261(int iParam0, int iParam1)
{
	int iVar0;
	
	if (is_ped_in_vehicle(iParam0, iParam1, 0))
	{
		return true;
	}
	else
	{
		iVar0 = get_script_task_status(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_262(vector3 vParam0, Vector3 fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_471(player_id()))
	{
	}
	iVar0 = func_489();
	freeze_entity_position(player_ped_id(), false);
	set_entity_collision(player_ped_id(), true, 0);
	set_ped_reset_flag(player_ped_id(), 150, true);
	Global_2404956.f_39.f_171 = 0;
	if (func_469())
	{
		if (func_467())
		{
			if (func_464(&iVar2))
			{
				if (func_463(iVar2))
				{
					func_81(player_ped_id(), get_vehicle_ped_is_in(get_player_ped(iVar2), 0), 0);
					return true;
				}
				else
				{
					return false;
				}
			}
		}
	}
	if (Global_2404956.f_39.f_68)
	{
		if (func_461(iVar0))
		{
			if ((func_659() && get_entity_model(iVar0) == Global_2404956.f_39.f_67) || !func_659())
			{
				if (!func_460(get_entity_coords(iVar0, 1), 30f, 1, 1, 0, 0, 0, 0))
				{
					if (iParam4)
					{
						set_entity_coords(iVar0, func_459(Global_2404956.f_39.f_69.f_66, vParam0), 1, false, 0, 1);
						set_entity_heading(iVar0, fParam3);
					}
					func_480(iVar0);
					return true;
				}
			}
		}
	}
	if (Global_1573837)
	{
		func_488(&iVar0);
	}
	if (func_476())
	{
		func_488(&(Global_2404956.f_39.f_169));
		if (func_458())
		{
			if (func_302(func_459(Global_2404956.f_39.f_69.f_66, vParam0), fParam3, 1, func_457(), 0, 1, 0))
			{
				func_264(net_to_veh(Global_2418472[player_id() /*313*/].f_48));
				return true;
			}
		}
		else if (func_263(&iVar1, Global_2404956.f_39.f_69.f_66, func_459(Global_2404956.f_39.f_69.f_66, vParam0), fParam3, 0, 1, 1, 0, 1, 1))
		{
			if (Global_2404956.f_39.f_172)
			{
				set_vehicle_strong(net_to_veh(iVar1), true);
			}
			if (Global_2404956.f_39.f_173)
			{
				set_vehicle_tyres_can_burst(net_to_veh(iVar1), false);
			}
			if (Global_2404956.f_39.f_174 > -1)
			{
				set_vehicle_colours(net_to_veh(iVar1), Global_2404956.f_39.f_174, Global_2404956.f_39.f_174);
				set_vehicle_extra_colours(net_to_veh(iVar1), Global_2404956.f_39.f_174, Global_2404956.f_39.f_174);
			}
			func_264(net_to_veh(iVar1));
			return true;
		}
	}
	return false;
}

bool func_263(var uParam0, int iParam1, vector3 vParam2, Vector3 fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!can_register_mission_vehicles(1))
	{
		return false;
	}
	if (iParam11)
	{
		clear_area_of_vehicles(vParam2, 1f, 0, 0, 1, 1, true);
	}
	iVar0 = create_vehicle(iParam1, vParam2, fParam5, iParam7, iParam6);
	*uParam0 = veh_to_net(iVar0);
	if (network_does_network_id_exist(*uParam0))
	{
		_0x3910051CCECDB00C(iVar0, iParam10);
		if (_0xC7827959479DCC78(iVar0))
		{
			if (iParam8)
			{
				set_network_id_exists_on_all_machines(*uParam0, 1);
			}
			else
			{
				set_network_id_exists_on_all_machines(*uParam0, 0);
			}
		}
		set_vehicle_is_stolen(iVar0, iParam9);
		return true;
	}
	return false;
}

void func_264(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
	}
	if (!is_entity_a_mission_entity(iParam0))
	{
		if (network_get_entity_is_local(iParam0))
		{
			set_entity_as_mission_entity(iParam0, false, 1);
		}
	}
	set_entity_visible(iParam0, false, 0);
	freeze_entity_position(iParam0, true);
	func_480(iParam0);
	Global_2404956.f_39.f_169 = iParam0;
	if (Global_2404956.f_39.f_168)
	{
		func_283(iParam0, 1);
	}
	else
	{
		func_265(iParam0, func_282(player_id()));
	}
	if (does_entity_exist(iParam0))
	{
	}
	Global_2404956.f_39.f_171 = 1;
}

void func_265(int iParam0, struct<13> Param1)
{
	if (does_entity_exist(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			func_266(iParam0, &(Global_2404956.f_39.f_69));
			Global_2404956.f_39.f_168 = 1;
			Global_2404956.f_39.f_69.f_80 = {Param1};
		}
	}
}

void func_266(int iParam0, var uParam1)
{
	int iVar0;
	
	func_278(iParam0, uParam1);
	clear_bit(uParam1.f_94, false);
	if (is_bit_set(*uParam1.f_77, 11))
	{
		set_bit(uParam1.f_94, false);
	}
	if (func_276(iParam0))
	{
		set_bit(uParam1.f_94, false);
	}
	if (func_274(iParam0))
	{
		set_bit(uParam1.f_94, false);
	}
	if (*uParam1.f_70 == 0)
	{
		*uParam1.f_70 = 1;
	}
	*uParam1.f_78 = get_vehicle_default_horn(iParam0);
	*uParam1.f_79 = _get_vehicle_paint_fade(iParam0);
	unk_0x7D1464D472D32136(iParam0, uParam1.f_96);
	unk_0xB7635E80A5C31BFF(iParam0, uParam1.f_98);
	*uParam1.f_97 = unk_0x60190048C0764A26(iParam0);
	iVar0 = func_268(iParam0, uParam1.f_93, uParam1.f_95);
	clear_bit(uParam1.f_94, 3);
	if (!iVar0 == func_25())
	{
		network_handle_from_player(iVar0, uParam1.f_80, 13);
		set_bit(uParam1.f_94, true);
	}
	else
	{
		clear_bit(uParam1.f_94, true);
	}
	if (iVar0 == player_id())
	{
		set_bit(uParam1.f_94, 2);
		if (*uParam1.f_93 == 1)
		{
			if (func_267(iParam0))
			{
				set_bit(uParam1.f_94, 3);
			}
		}
	}
	else
	{
		clear_bit(uParam1.f_94, 2);
	}
}

bool func_267(int iParam0)
{
	if (Global_2460486.f_275 == iParam0)
	{
		return true;
	}
	return false;
}

int func_268(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (func_273(iParam0))
	{
		*uParam1 = 1;
		if (decor_is_registered_as_type("PV_Slot", 3))
		{
			if (decor_exist_on(iParam0, "PV_Slot"))
			{
				*uParam2 = decor_get_int(iParam0, "PV_Slot");
			}
		}
		return func_272(iParam0);
	}
	else if (func_271(iParam0))
	{
		*uParam1 = 2;
		return func_269(iParam0);
	}
	else if (!is_vehicle_seat_free(iParam0, -1))
	{
		iVar0 = get_ped_in_vehicle_seat(iParam0, -1);
		if (is_ped_a_player(iVar0))
		{
			*uParam1 = 3;
			return _network_get_ped_player(iVar0);
		}
	}
	*uParam1 = 4;
	return player_id();
}

int func_269(int iParam0)
{
	int iVar0;
	
	iVar0 = decor_get_int(iParam0, "Veh_Modded_By_Player");
	return func_270(iVar0, 0);
}

int func_270(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = false;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (func_31(iVar0, 0, 1) || (iParam1 && network_is_player_connected(iVar0)))
		{
			if (iParam0 == get_hash_key(get_player_name(iVar0)) || iParam0 == _0xBC1D768F2F5D6C05(iVar0))
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return func_25();
}

bool func_271(int iParam0)
{
	if (Global_69489)
	{
		if (decor_exist_on(iParam0, "Veh_Modded_By_Player"))
		{
			return true;
		}
	}
	return false;
}

int func_272(int iParam0)
{
	int iVar0;
	
	iVar0 = decor_get_int(iParam0, "Player_Vehicle");
	return func_270(iVar0, 0);
}

bool func_273(int iParam0)
{
	if (Global_69489)
	{
		if (decor_exist_on(iParam0, "Player_Vehicle"))
		{
			return true;
		}
	}
	return false;
}

bool func_274(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (!is_entity_dead(iParam0, 0))
	{
		iVar0 = _0xFE26117A5841B2FF(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (network_is_game_in_progress())
			{
				iVar1 = get_network_time();
			}
			else
			{
				iVar1 = get_game_timer();
			}
			iVar2 = absi(get_time_difference(iVar1, Global_1318770));
			if (iVar2 > 20000)
			{
				unk_0x82ACC484FFA3B05F(iParam0);
				func_275(iParam0);
				return false;
			}
		}
		return true;
	}
	return false;
}

void func_275(int iParam0)
{
	int iVar0;
	
	if (decor_is_registered_as_type("MPBitset", 3))
	{
		if (decor_exist_on(iParam0, "MPBitset"))
		{
			iVar0 = decor_get_int(iParam0, "MPBitset");
		}
	}
	if (!is_bit_set(iVar0, 16))
	{
		set_bit(&iVar0, 16);
		decor_set_int(iParam0, "MPBitset", iVar0);
	}
}

bool func_276(int iParam0)
{
	if (_does_vehicle_have_decal(iParam0, 0) || func_277(iParam0))
	{
		return true;
	}
	return false;
}

int func_277(int iParam0)
{
	int iVar0;
	
	if (decor_is_registered_as_type("MPBitset", 3))
	{
		if (decor_exist_on(iParam0, "MPBitset"))
		{
			iVar0 = decor_get_int(iParam0, "MPBitset");
			return is_bit_set(iVar0, 16);
		}
	}
	return false;
}

void func_278(int iParam0, var uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		func_281(uParam1);
		*uParam1.f_66 = get_entity_model(iParam0);
		StringCopy(uParam1.f_1, get_vehicle_number_plate_text(iParam0), 16);
		*uParam1 = get_vehicle_number_plate_text_index(iParam0);
		get_vehicle_colours(iParam0, uParam1.f_5, uParam1.f_6);
		get_vehicle_extra_colours(iParam0, uParam1.f_7, uParam1.f_8);
		get_vehicle_tyre_smoke_color(iParam0, uParam1.f_62, uParam1.f_63, uParam1.f_64);
		*uParam1.f_65 = get_vehicle_window_tint(iParam0);
		*uParam1.f_67 = get_vehicle_livery(iParam0);
		*uParam1.f_69 = get_vehicle_wheel_type(iParam0);
		*uParam1.f_70 = get_vehicle_door_lock_status(iParam0);
		get_vehicle_custom_secondary_colour(iParam0, uParam1.f_71, uParam1.f_72, uParam1.f_73);
		_get_vehicle_neon_lights_colour(iParam0, uParam1.f_74, uParam1.f_75, uParam1.f_76);
		if (_is_vehicle_neon_light_enabled(iParam0, 2))
		{
			set_bit(uParam1.f_77, 28);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 3))
		{
			set_bit(uParam1.f_77, 29);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 0))
		{
			set_bit(uParam1.f_77, 30);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 1))
		{
			set_bit(uParam1.f_77, 31);
		}
		if (*uParam1.f_65 == -1 && *uParam1.f_66 != joaat("granger"))
		{
			*uParam1.f_65 = 0;
		}
		if (is_vehicle_a_convertible(iParam0, 0))
		{
			*uParam1.f_68 = get_convertible_roof_state(iParam0);
		}
		if (is_this_model_a_plane(*uParam1.f_66))
		{
			if (_0x4198AB0022B15F87(iParam0))
			{
				switch (_get_vehicle_landing_gear(iParam0))
				{
					case 2:
					case 0:
						clear_bit(uParam1.f_77, 23);
						set_bit(uParam1.f_77, 22);
						break;
					
					case 3:
					case 1:
						clear_bit(uParam1.f_77, 23);
						clear_bit(uParam1.f_77, 22);
						break;
					
					case 4:
						set_bit(uParam1.f_77, 23);
						break;
				}
			}
			else
			{
				set_bit(uParam1.f_77, 23);
			}
		}
		if (!get_vehicle_tyres_can_burst(iParam0))
		{
			set_bit(uParam1.f_77, 9);
		}
		if (is_vehicle_stolen(iParam0))
		{
			set_bit(uParam1.f_77, 10);
		}
		if (get_is_vehicle_primary_colour_custom(iParam0))
		{
			set_bit(uParam1.f_77, 13);
			get_vehicle_custom_primary_colour(iParam0, uParam1.f_71, uParam1.f_72, uParam1.f_73);
		}
		if (get_is_vehicle_secondary_colour_custom(iParam0))
		{
			set_bit(uParam1.f_77, 12);
		}
		func_280(&iParam0, uParam1.f_9, uParam1.f_59);
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				set_bit(uParam1.f_77, func_279(iVar0 + 1));
			}
			iVar0++;
		}
		if (_does_vehicle_have_decal(iParam0, 0))
		{
			set_bit(uParam1.f_77, 11);
		}
		else
		{
			clear_bit(uParam1.f_77, 11);
		}
		if (decor_exist_on(iParam0, "IgnoredByQuickSave") && decor_get_bool(iParam0, "IgnoredByQuickSave"))
		{
			set_bit(uParam1.f_77, 27);
		}
		else
		{
			clear_bit(uParam1.f_77, 27);
		}
	}
}

int func_279(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

bool func_280(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_vehicle_driveable(*iParam0, 0))
	{
		return false;
	}
	if (get_num_mod_kits(*iParam0) == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			*uParam1[iVar0] = 0;
			if (is_toggle_mod_on(*iParam0, iVar1))
			{
				*uParam1[iVar0] = 1;
			}
		}
		else
		{
			*uParam1[iVar0] = get_vehicle_mod(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				*uParam2[0] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				*uParam2[1] = get_vehicle_mod_variation(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return true;
}

void func_281(var uParam0)
{
	int iVar0;
	
	*uParam0.f_66 = 0;
	*uParam0.f_77 = 0;
	*uParam0.f_65 = 0;
	*uParam0.f_62 = 0;
	*uParam0.f_63 = 0;
	*uParam0.f_64 = 0;
	*uParam0.f_74 = 0;
	*uParam0.f_75 = 0;
	*uParam0.f_76 = 0;
	*uParam0 = 0;
	StringCopy(uParam0.f_1, "", 16);
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 0;
	*uParam0.f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		*uParam0.f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		*uParam0.f_59[iVar0] = 0;
		iVar0++;
	}
	*uParam0.f_67 = 0;
	*uParam0.f_68 = 0;
	*uParam0.f_69 = 0;
	*uParam0.f_70 = 1;
	*uParam0.f_71 = 0;
	*uParam0.f_72 = 0;
	*uParam0.f_73 = 0;
}

struct<13> func_282(int iParam0)
{
	struct<13> Var0;
	
	network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

void func_283(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		func_284(iParam0, &(Global_2404956.f_39.f_69), iParam1, 1);
	}
}

void func_284(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (*uParam1.f_70 == 0)
	{
		*uParam1.f_70 = 1;
	}
	func_294(iParam0, uParam1, iParam2, iParam3);
	if (!*uParam1.f_78 == -1)
	{
		if (*uParam1.f_9[14] == -1)
		{
			override_veh_horn(iParam0, 1, *uParam1.f_78);
		}
	}
	_set_vehicle_paint_fade(iParam0, *uParam1.f_79);
	unk_0xF40DD601A65F7F19(iParam0, *uParam1.f_96);
	unk_0x6089CDF6A57F326C(iParam0, *uParam1.f_98);
	if (unk_0x5ECB40269053C0D4(iParam0) > 1 && *uParam1.f_97 >= 0)
	{
		unk_0xA6D3A8750DC73270(iParam0, *uParam1.f_97);
	}
	if (is_bit_set(*uParam1.f_94, false))
	{
		func_286(iParam0, uParam1.f_80);
	}
	switch (*uParam1.f_93)
	{
		case 0:
			break;
		
		case 1:
			if (is_bit_set(*uParam1.f_94, true) && is_bit_set(*uParam1.f_94, 2))
			{
				if (is_bit_set(*uParam1.f_94, 3))
				{
				}
			}
			else if (decor_is_registered_as_type("Player_Vehicle", 3))
			{
				decor_set_int(iParam0, "Player_Vehicle", -1);
			}
			break;
		
		case 2:
			if (is_bit_set(*uParam1.f_94, true) && is_bit_set(*uParam1.f_94, 2))
			{
				if (decor_is_registered_as_type("Veh_Modded_By_Player", 3))
				{
					decor_set_int(iParam0, "Veh_Modded_By_Player", get_hash_key(get_player_name(player_id())));
				}
			}
			else if (decor_is_registered_as_type("Veh_Modded_By_Player", 3))
			{
				if (func_285(*uParam1.f_80) && network_is_gamer_in_my_session(uParam1.f_80))
				{
					sVar0 = network_member_id_from_gamer_handle(uParam1.f_80);
					decor_set_int(iParam0, "Veh_Modded_By_Player", get_hash_key(sVar0));
				}
				else
				{
					decor_set_int(iParam0, "Veh_Modded_By_Player", -1);
				}
			}
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}

int func_285(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return network_is_handle_valid(&uParam0, 13);
}

bool func_286(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_290(iParam0, uParam1))
	{
		return true;
	}
	iVar0 = 0;
	if (!is_entity_dead(iParam0, 0))
	{
		iVar0 = _0xFE26117A5841B2FF(iParam0, 0);
	}
	if (iVar0 == 0)
	{
		if (!func_276(iParam0))
		{
			iVar1 = network_get_player_from_gamer_handle(uParam1);
			if (func_287(&iParam0, get_player_ped(iVar1)))
			{
			}
			else
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	else if (iVar0 >= 3)
	{
		return true;
	}
	return false;
}

bool func_287(int iParam0, int iParam1)
{
	func_289();
	if (Global_1312466.f_18 != 0 || unk_0x8533CAFDE1F0F336(*iParam0))
	{
		Global_1728841.f_11 = _get_vehicle_suspension_height(*iParam0);
		if (Global_1728841.f_11 < 0f)
		{
			Global_1728841.f_11 = 0f;
		}
	}
	func_288(*iParam0, &Global_1728841, &(Global_1728841.f_1), &(Global_1728841.f_4), &(Global_1728841.f_7), &(Global_1728841.f_10));
	Global_1728841.f_1.f_2 -= Global_1728841.f_11;
	if (Global_1728841.f_4.f_2 < 0f)
	{
		Global_1728841.f_12 = 1;
	}
	Global_1728841.f_13 = 200;
	if (get_entity_model(*iParam0) == joaat("windsor"))
	{
		Global_1728841.f_13 = 255;
	}
	if (Global_1728841.f_12)
	{
		if (_add_clan_decal_to_vehicle(*iParam0, iParam1, Global_1728841, Global_1728841.f_1, Global_1728841.f_4, Global_1728841.f_7, Global_1728841.f_10, 0, Global_1728841.f_13))
		{
			if (network_is_game_in_progress())
			{
				Global_1318770 = get_network_time();
			}
			else
			{
				Global_1318770 = get_game_timer();
			}
			return true;
		}
	}
	else
	{
		Global_1728841.f_14 = {Global_1728841.f_1};
		Global_1728841.f_14 *= -1f;
		Global_1728841.f_17 = {Global_1728841.f_4};
		Global_1728841.f_17 *= -1f;
		Global_1728841.f_20 = {Global_1728841.f_7};
		Global_1728841.f_20.f_1 *= -1f;
		Global_1728841.f_20.f_2 *= -1f;
		if (!_does_vehicle_have_decal(*iParam0, 0))
		{
			Global_1728841.f_23 = _0xFE26117A5841B2FF(*iParam0, 0);
		}
		else
		{
			Global_1728841.f_23 = 3;
		}
		Global_1728841.f_24 = _0xFE26117A5841B2FF(*iParam0, 1);
		if (!_does_vehicle_have_decal(*iParam0, 1))
		{
			Global_1728841.f_24 = _0xFE26117A5841B2FF(*iParam0, 1);
		}
		else
		{
			Global_1728841.f_24 = 3;
		}
		if (((Global_1728841.f_23 == 0 && _add_clan_decal_to_vehicle(*iParam0, iParam1, Global_1728841, Global_1728841.f_1, Global_1728841.f_4, Global_1728841.f_7, Global_1728841.f_10, 0, Global_1728841.f_13)) || Global_1728841.f_23 != 0) && ((Global_1728841.f_24 == 0 && _add_clan_decal_to_vehicle(*iParam0, iParam1, Global_1728841, Global_1728841.f_14, Global_1728841.f_17, Global_1728841.f_20, Global_1728841.f_10, 1, Global_1728841.f_13)) || Global_1728841.f_24 != 0))
		{
			if (network_is_game_in_progress())
			{
				Global_1318770 = get_network_time();
			}
			else
			{
				Global_1318770 = get_game_timer();
			}
			return true;
		}
	}
	return false;
}

bool func_288(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	*uParam1 = get_entity_bone_index_by_name(iParam0, "chassis_dummy");
	switch (get_entity_model(iParam0))
	{
		case joaat("dominator"):
			*uParam1 = get_entity_bone_index_by_name(iParam0, "chassis_dummy");
			*uParam2 = {0f, 1.4f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("feltzer2"):
			*uParam1 = get_entity_bone_index_by_name(iParam0, "chassis_dummy");
			*uParam2 = {0f, 1.4f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("adder"):
			*uParam2 = {0f, 1.54f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("akuma"):
			*uParam2 = {0f, 0.06f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.18f;
			break;
		
		case joaat("asea"):
			*uParam2 = {0f, 1.5f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("asterope"):
			*uParam2 = {0f, 1.7f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("bagger"):
			*uParam2 = {0f, 0.053f, 1.23f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.15f;
			break;
		
		case joaat("baller"):
			*uParam2 = {0f, 1.4f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller2"):
			*uParam2 = {0f, 1.55f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("banshee"):
			*uParam2 = {0f, 0.94f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.4f;
			break;
		
		case joaat("bati"):
			*uParam2 = {0f, 0.2f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.15f;
			break;
		
		case joaat("bati2"):
			*uParam2 = {0f, 0.2f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.15f;
			break;
		
		case joaat("bfinjection"):
			*uParam2 = {-1f, 0.08f, 0.19f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("bison"):
			*uParam2 = {0f, 1.99f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("bjxl"):
			*uParam2 = {0f, 1.2f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.4f;
			break;
		
		case joaat("blista"):
			*uParam2 = {0f, 1.49f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.29f;
			break;
		
		case joaat("bobcatxl"):
			*uParam2 = {0f, 1.68f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.65f;
			break;
		
		case joaat("bodhi2"):
			*uParam2 = {0f, 1.95f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("buccaneer"):
			*uParam2 = {0f, 2.01f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.37f;
			break;
		
		case joaat("buffalo"):
			*uParam2 = {0f, 1.6f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("buffalo2"):
			*uParam2 = {0f, 2.24f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.2f;
			break;
		
		case joaat("bullet"):
			*uParam2 = {-1.57f, 0.07f, 0.16f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.3f;
			break;
		
		case joaat("carbonrs"):
			*uParam2 = {0f, 0.09f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.18f;
			break;
		
		case joaat("carbonizzare"):
			*uParam2 = {0f, 1.45f, 1f};
			*uParam3 = {0f, -0.11f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("cavalcade"):
			*uParam2 = {0f, 1.51f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.55f;
			break;
		
		case joaat("cavalcade2"):
			*uParam2 = {0f, 1.59f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("cheetah"):
			*uParam2 = {-1.61f, 0.26f, 0.17f};
			*uParam3 = {0.9f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.35f;
			break;
		
		case joaat("cogcabrio"):
			*uParam2 = {0f, 1.42f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("comet2"):
			*uParam2 = {0f, 1.35f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("coquette"):
			*uParam2 = {0f, 0.96f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.22f;
			break;
		
		case joaat("daemon"):
			*uParam2 = {0f, 0.06f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.15f;
			break;
		
		case joaat("dilettante"):
			*uParam2 = {0f, 1.59f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("dloader"):
			*uParam2 = {0f, 1.52f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("double"):
			*uParam2 = {0f, 0.08f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.2f;
			break;
		
		case joaat("dubsta"):
			*uParam2 = {-1.71f, 0.31f, 0.27f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("dubsta2"):
			*uParam2 = {0f, 1.4f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.75f;
			break;
		
		case joaat("elegy2"):
			*uParam2 = {0f, 1.14f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.35f;
			break;
		
		case joaat("emperor"):
			*uParam2 = {0f, 1.31f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("emperor2"):
			*uParam2 = {0f, 1.31f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("entityxf"):
			*uParam2 = {-1.52f, 0.41f, 0.15f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.3f;
			break;
		
		case joaat("exemplar"):
			*uParam2 = {0f, 1.32f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("f620"):
			*uParam2 = {0f, 1.28f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("faggio2"):
			*uParam2 = {-1f, -0.48f, -0.11f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.15f;
			break;
		
		case joaat("felon"):
			*uParam2 = {0f, 1.24f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.35f;
			break;
		
		case joaat("felon2"):
			*uParam2 = {0f, 1.24f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.35f;
			break;
		
		case joaat("fq2"):
			*uParam2 = {0f, 1.4f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("fugitive"):
			*uParam2 = {0f, 1.62f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("fusilade"):
			*uParam2 = {0f, 0.98f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.2f;
			break;
		
		case joaat("futo"):
			*uParam2 = {0f, 1.28f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("gauntlet"):
			*uParam2 = {0f, 1.735f, 1.05f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.33f;
			break;
		
		case joaat("granger"):
			*uParam2 = {0f, 2.07f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("gresley"):
			*uParam2 = {0f, 1.75f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("habanero"):
			*uParam2 = {0f, 1.69f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("hexer"):
			*uParam2 = {0f, -0.46f, 1f};
			*uParam3 = {0f, 1f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.14f;
			break;
		
		case joaat("hotknife"):
			*uParam2 = {-1.43f, -0.14f, 0.18f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("infernus"):
			*uParam2 = {-1f, 0.33f, 0.08f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0.06f};
			*uParam5 = 0.25f;
			break;
		
		case joaat("ingot"):
			*uParam2 = {0f, 1.58f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("intruder"):
			*uParam2 = {0f, 1.623f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("issi2"):
			*uParam2 = {0f, 1.21f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.3f;
			break;
		
		case joaat("jackal"):
			*uParam2 = {0f, 1.36f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.4f;
			break;
		
		case joaat("jb700"):
			*uParam2 = {0f, 1.2f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.37f;
			break;
		
		case joaat("khamelion"):
			*uParam2 = {0f, 1.46f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.475f;
			break;
		
		case joaat("landstalker"):
			*uParam2 = {0f, 1.83f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("manana"):
			*uParam2 = {0f, 0.86f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.37f;
			break;
		
		case joaat("mesa"):
			*uParam2 = {0f, 1.47f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("mesa3"):
			*uParam2 = {0f, 1.47f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("minivan"):
			*uParam2 = {0f, 1.95f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("monroe"):
			*uParam2 = {0f, 1.23f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.43f;
			break;
		
		case joaat("nemesis"):
			*uParam2 = {0f, 0.14f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.1f;
			break;
		
		case joaat("ninef"):
			*uParam2 = {0f, 1.7f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("ninef2"):
			*uParam2 = {0f, 1.7f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("oracle"):
			*uParam2 = {0f, 1.6f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("oracle2"):
			*uParam2 = {0f, 1.7f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("patriot"):
			*uParam2 = {0f, 1.75f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("pcj"):
			*uParam2 = {0f, 0.02f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.15f;
			break;
		
		case joaat("penumbra"):
			*uParam2 = {0f, 1.46f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("peyote"):
			*uParam2 = {-1f, -0.36f, 0.2125f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("phoenix"):
			*uParam2 = {0f, 1.833f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.44f;
			break;
		
		case joaat("picador"):
			*uParam2 = {0f, 1.43f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.515f;
			break;
		
		case joaat("prairie"):
			*uParam2 = {0f, 1.41f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.31f;
			break;
		
		case joaat("premier"):
			*uParam2 = {0f, 1.6f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("primo"):
			*uParam2 = {0f, 1.62f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("radi"):
			*uParam2 = {0f, 1.74f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("rancherxl"):
			*uParam2 = {0f, 1.54f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("rapidgt"):
			*uParam2 = {0f, 1.263f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("rapidgt2"):
			*uParam2 = {0f, 1.263f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("ratloader"):
			*uParam2 = {-1.78f, 0.52f, 0.52f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("rebel"):
			*uParam2 = {-1.22f, 0.6f, 0.44f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("rebel2"):
			*uParam2 = {0f, 1.623f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("regina"):
			*uParam2 = {0f, 1.473f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("rocoto"):
			*uParam2 = {0f, 1.623f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("romero"):
			*uParam2 = {0f, 1.83f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("ruffian"):
			*uParam2 = {0f, -0.02f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.19f;
			break;
		
		case joaat("ruiner"):
			*uParam2 = {0f, 1.34f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("sabregt"):
			*uParam2 = {-1f, 0f, 0.14f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0.015f};
			*uParam5 = 0.35f;
			break;
		
		case joaat("sadler"):
			*uParam2 = {0f, 2.26f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("sandking"):
			*uParam2 = {0f, 2.496f, 1.55f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("sandking2"):
			*uParam2 = {0f, 2.286f, 1.55f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("schafter2"):
			*uParam2 = {0f, 1.56f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.28f;
			break;
		
		case joaat("schwarzer"):
			*uParam2 = {0f, 1.43f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.28f;
			break;
		
		case joaat("seminole"):
			*uParam2 = {0f, 1.45f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("sentinel"):
			*uParam2 = {0f, 1.52f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("sentinel2"):
			*uParam2 = {0f, 1.52f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("serrano"):
			*uParam2 = {0f, 1.68f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.49f;
			break;
		
		case joaat("stanier"):
			*uParam2 = {0f, 1.55f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("stinger"):
			*uParam2 = {0f, 1.3f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("stingergt"):
			*uParam2 = {-1f, -0.17f, 0.12f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.35f;
			break;
		
		case joaat("stratum"):
			*uParam2 = {0f, 1.52f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("sultan"):
			*uParam2 = {0f, 1.77f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.33f;
			break;
		
		case joaat("superd"):
			*uParam2 = {0f, 1.62f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("surano"):
			*uParam2 = {0f, 1.38f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("surfer"):
			*uParam2 = {0f, 2.48f, 0.26f};
			*uParam3 = {0f, -1f, -0.212f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.32f;
			break;
		
		case joaat("surfer2"):
			*uParam2 = {0f, 2.48f, 0.26f};
			*uParam3 = {0f, -1f, -0.212f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.32f;
			break;
		
		case joaat("surge"):
			*uParam2 = {0f, 1.69f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("tailgater"):
			*uParam2 = {0f, 1.783f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.4f;
			break;
		
		case joaat("tornado"):
			*uParam2 = {-1.23f, 0.11f, -0.21f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.4f;
			break;
		
		case joaat("tornado2"):
			*uParam2 = {0f, 1.44f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("tornado3"):
			*uParam2 = {0f, 1.44f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("vacca"):
			*uParam2 = {0f, 1.76f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.35f;
			break;
		
		case joaat("vader"):
			*uParam2 = {0f, 0.08f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.15f;
			break;
		
		case joaat("vigero"):
			*uParam2 = {-1f, 0.11f, -0.15f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("voltic"):
			*uParam2 = {0f, 1.763f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.29f;
			break;
		
		case joaat("voodoo2"):
			*uParam2 = {0f, 1.48f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("washington"):
			*uParam2 = {0f, 1.61f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("youga"):
			*uParam2 = {0f, 2.02f, 1f};
			*uParam3 = {0f, -0.108f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.4f;
			break;
		
		case joaat("zion"):
			*uParam2 = {0f, 1.48f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("zion2"):
			*uParam2 = {0f, 1.48f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("ztype"):
			*uParam2 = {-0.96f, -0.69f, 0.35f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.4f;
			break;
		
		default:
			*uParam2 = {-1f, 0f, 0.295f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, 0f, -1f};
			*uParam5 = 0.5f;
			break;
	}
	switch (get_entity_model(iParam0))
	{
		case joaat("kalahari"):
			*uParam2 = {-1f, 0.18f, 0.1f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("paradise"):
			*uParam2 = {0f, 2.23f, 1f};
			*uParam3 = {0f, -0.22f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("alpha"):
			*uParam2 = {-1f, 0.18f, -0.05f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("huntley"):
			*uParam2 = {0f, 1.52f, 0.99f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.4f;
			break;
		
		case joaat("zentorno"):
			*uParam2 = {-1.24f, 0.42f, -0.14f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0.035f};
			*uParam5 = 0.3f;
			break;
		
		case joaat("jester"):
			*uParam2 = {-1f, 0.17f, 0.22f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0.05f};
			*uParam5 = 0.33f;
			break;
		
		case joaat("massacro"):
			*uParam2 = {0f, 1.37f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.33f;
			break;
		
		case joaat("turismor"):
			*uParam2 = {-1f, 0.3f, 0.27f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.35f;
			break;
		
		case joaat("thrust"):
			*uParam2 = {-1f, 0.405f, 0.4625f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.1625f;
			break;
		
		case joaat("btype"):
			*uParam2 = {0f, 1.143f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.7125f;
			break;
		
		case joaat("rhapsody"):
			*uParam2 = {-1f, -0.47f, -0.25f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.2625f;
			break;
		
		case joaat("glendale"):
			*uParam2 = {0f, 1.683f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.775f;
			break;
		
		case joaat("warrener"):
			*uParam2 = {0f, 1.623f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.775f;
			break;
		
		case joaat("blade"):
			*uParam2 = {-1f, 0.445f, 0.2075f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.325f;
			break;
		
		case joaat("panto"):
			*uParam2 = {-1f, 0f, 0.335f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("dubsta3"):
			*uParam2 = {-1f, 0.34f, 0.2975f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("pigalle"):
			*uParam2 = {0f, 1.623f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("coquette2"):
			*uParam2 = {-1f, -0.1775f, 0.195f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.35f;
			break;
		
		case joaat("innovation"):
			*uParam2 = {0f, 0.15f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.18f;
			break;
		
		case joaat("hakuchou"):
			*uParam2 = {0f, 0.27f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.16f;
			break;
		
		case joaat("furoregt"):
			*uParam2 = {-1f, 0f, 0.2075f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("ratloader2"):
			*uParam2 = {-1.78f, 0.52f, 0.52f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("slamvan"):
			*uParam2 = {-1f, 0.275f, 0.195f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("dukes2"):
			*uParam2 = {-1f, 0f, 0f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.375f;
			break;
		
		case joaat("dukes"):
			*uParam2 = {-1f, 0f, 0.0375f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.3875f;
			break;
		
		case joaat("stalion"):
			*uParam2 = {-1f, 0f, 0.0925f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.4375f;
			break;
		
		case joaat("blista2"):
			*uParam2 = {-1f, 0.5325f, 0.245f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.2875f;
			break;
		
		case joaat("casco"):
			*uParam2 = {0f, 0.94f, 1.03f};
			*uParam3 = {0f, -0.03f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.3f;
			break;
		
		case joaat("enduro"):
			*uParam2 = {0f, -0.17f, 1f};
			*uParam3 = {0f, 0.34f, -0.786f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.15f;
			break;
		
		case joaat("gburrito2"):
			*uParam2 = {0f, 2.32f, 0.94f};
			*uParam3 = {0f, -0.182f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.4f;
			break;
		
		case joaat("guardian"):
			*uParam2 = {-1.94f, 1.07f, 0.38f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.35f;
			break;
		
		case joaat("kuruma"):
		case joaat("kuruma2"):
			*uParam2 = {-1f, 0.2475f, -0.175f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.435f;
			break;
		
		case joaat("lectro"):
			*uParam2 = {0f, 0.3f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.09f;
			break;
		
		case joaat("feltzer3"):
			*uParam1 = get_entity_bone_index_by_name(iParam0, "chassis_dummy");
			*uParam2 = {0f, 1.4f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("osiris"):
			*uParam2 = {-1f, 0.27f, -0.03f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.3f;
			break;
		
		case joaat("virgo"):
			*uParam2 = {-1.05f, 0f, 0.075f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("windsor"):
			*uParam2 = {-1.2f, -0.39f, 0.12f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.55f;
			break;
		
		case joaat("brawler"):
			*uParam2 = {-1f, -0.21f, 0f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("chino"):
			*uParam2 = {-1.05f, 0f, 0.075f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("coquette3"):
			*uParam2 = {-1f, -0.1775f, 0.195f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.35f;
			break;
		
		case joaat("t20"):
			*uParam2 = {-1f, 0.4f, -0.12f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.2f;
			break;
		
		case joaat("vindicator"):
			*uParam2 = {-1f, 0.21f, 0.24f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.3f;
			break;
		
		case joaat("faction"):
			*uParam2 = {-1f, 0f, 0.15f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("faction2"):
			*uParam2 = {-1f, 0f, 0.15f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("buccaneer2"):
			*uParam2 = {0f, 2.01f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.37f;
			break;
		
		case joaat("chino2"):
			*uParam2 = {-1.05f, 0f, 0.075f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("moonbeam"):
			*uParam2 = {0f, 1.713f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("moonbeam2"):
			*uParam2 = {0f, 1.713f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("primo2"):
			*uParam2 = {-1f, 0.42f, 0f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("voodoo"):
			*uParam2 = {-1.12f, 0f, 0f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("faction3"):
			*uParam2 = {-1f, 0f, 0.5f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("sabregt2"):
			*uParam2 = {-1f, 0f, 0.14f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0.015f};
			*uParam5 = 0.35f;
			break;
		
		case joaat("tornado5"):
			*uParam2 = {-1f, 0.15f, -0.09f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("virgo2"):
			*uParam2 = {-1f, 0f, 0.1225f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.375f;
			break;
		
		case joaat("virgo3"):
			*uParam2 = {-1f, 0f, 0.1225f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.375f;
			break;
		
		case joaat("minivan2"):
			*uParam2 = {0f, 1.95f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan3"):
			*uParam2 = {-1f, 0.275f, 0.195f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("btype2"):
			*uParam2 = {-1f, -0.1f, 0.4f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("lurcher"):
			*uParam2 = {-1f, 0f, 0.3f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("baller3"):
			*uParam2 = {0f, 1.4f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller4"):
			*uParam2 = {0f, 1.4f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller5"):
			*uParam2 = {0f, 1.4f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller6"):
			*uParam2 = {0f, 1.4f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("cog55"):
			*uParam2 = {-1f, 0.37f, 0.13f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("cog552"):
			*uParam2 = {-1f, 0.37f, 0.13f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("cognoscenti"):
			*uParam2 = {-1f, 0.37f, 0.13f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("cognoscenti2"):
			*uParam2 = {-1f, 0.37f, 0.13f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("mamba"):
			*uParam2 = {-1f, -0.18f, 0.21f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.35f;
			break;
		
		case joaat("nightshade"):
			*uParam2 = {-1f, -0.2f, 0.17f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("schafter3"):
			*uParam2 = {0f, 1.56f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter4"):
			*uParam2 = {0f, 1.56f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter5"):
			*uParam2 = {0f, 1.56f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter6"):
			*uParam2 = {0f, 1.56f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.28f;
			break;
		
		case joaat("verlierer2"):
			*uParam2 = {-1f, -0.21f, 0.03f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.4f;
			break;
		
		case joaat("tampa"):
			*uParam2 = {-1f, 0f, 0.12f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("banshee2"):
			*uParam2 = {-1f, -0.4f, 0.075f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.4f;
			break;
		
		case joaat("sultanrs"):
			*uParam2 = {0f, 1.77f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.33f;
			break;
		
		case joaat("btype3"):
			*uParam2 = {-1f, -0.1f, 0.4f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("bestiagts"):
			*uParam2 = {-1f, -0.06f, 0.4f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.4f;
			break;
		
		case joaat("seven70"):
			*uParam2 = {-1f, -0.21f, 0.25f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.35f;
			break;
		
		case joaat("fmj"):
			*uParam2 = {-1f, -0.06f, 0.21f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.3f;
			break;
		
		case joaat("pfister811"):
			*uParam2 = {-1f, 0.06f, 0.25f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("prototipo"):
			*uParam2 = {-1f, 0.3f, 0.27f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.35f;
			break;
		
		case joaat("reaper"):
			*uParam2 = {-1f, 0.48f, 0f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.3f;
			break;
		
		case joaat("rumpo3"):
			*uParam2 = {0f, 2.103f, 1f};
			*uParam3 = {0f, 0f, -1f};
			*uParam4 = {-1f, 0f, 0f};
			*uParam5 = 0.5f;
			break;
		
		case joaat("windsor2"):
			*uParam2 = {-1.2f, 0.03f, 0.24f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.55f;
			break;
		
		case joaat("xls"):
			*uParam2 = {-1f, 0.36f, -0.15f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.45f;
			break;
		
		case joaat("xls2"):
			*uParam2 = {-1f, 0.36f, -0.15f};
			*uParam3 = {1f, 0f, 0f};
			*uParam4 = {0f, -1f, 0f};
			*uParam5 = 0.45f;
			break;
	}
	return true;
}

void func_289()
{
	Global_1728841 = 0;
	Global_1728841.f_1 = {0f, 0f, 0f};
	Global_1728841.f_4 = {0f, 0f, 0f};
	Global_1728841.f_7 = {0f, 0f, 0f};
	Global_1728841.f_10 = 0f;
	Global_1728841.f_11 = 0f;
	Global_1728841.f_12 = 0;
	Global_1728841.f_13 = 0;
	Global_1728841.f_14 = {0f, 0f, 0f};
	Global_1728841.f_17 = {0f, 0f, 0f};
	Global_1728841.f_20 = {0f, 0f, 0f};
	Global_1728841.f_23 = 0;
	Global_1728841.f_24 = 0;
}

bool func_290(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (network_is_handle_valid(uParam1, 13) && network_is_gamer_in_my_session(uParam1))
	{
		iVar0 = network_get_player_from_gamer_handle(uParam1);
	}
	else
	{
		iVar0 = func_25();
	}
	iVar1 = false;
	if (iVar0 == player_id())
	{
		if (func_291(15))
		{
			iVar1 = true;
		}
	}
	else
	{
		iVar1 = true;
	}
	if ((((((!(does_entity_exist(iParam0) && !is_entity_dead(iParam0, 0)) || !network_has_control_of_entity(iParam0)) || !_0x595F028698072DD9(0, -1, 1)) || !((network_is_handle_valid(uParam1, 13) && _network_player_is_in_clan()) && network_clan_player_is_active(uParam1))) || iVar0 == func_25()) || !func_31(iVar0, 0, 0)) || !iVar1)
	{
		return false;
	}
	return true;
}

int func_291(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_292(iParam0);
	iVar1 = iParam0;
	return is_bit_set(iVar0, func_157(iVar1));
}

var func_292(var uParam0)
{
	var uVar0;
	
	uVar0 = func_258(func_293(uParam0), -1, 0);
	return uVar0;
}

int func_293(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_162(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1283;
			break;
	}
	return 1283;
}

void func_294(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		if (get_hash_key(uParam1.f_1) != 0)
		{
			set_vehicle_number_plate_text(iParam0, uParam1.f_1);
		}
		if (*uParam1 >= 0 && *uParam1 < get_number_of_vehicle_number_plates())
		{
			set_vehicle_number_plate_text_index(iParam0, *uParam1);
		}
		if (*uParam1.f_66 == joaat("sovereign"))
		{
			*uParam1.f_5 = 111;
			*uParam1.f_6 = 111;
			*uParam1.f_7 = 111;
			*uParam1.f_8 = 156;
		}
		else if (*uParam1.f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (is_bit_set(*uParam1.f_77, func_279(iVar0 + 1)))
			{
			}
			else
			{
				set_bit(uParam1.f_77, func_279(iVar0 + 1));
			}
		}
		else if (*uParam1.f_66 == joaat("sandking") || *uParam1.f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (is_bit_set(*uParam1.f_77, func_279(iVar1 + 1)))
			{
			}
			else
			{
				set_bit(uParam1.f_77, func_279(iVar1 + 1));
			}
		}
		if (is_bit_set(*uParam1.f_77, 13))
		{
			set_vehicle_custom_primary_colour(iParam0, *uParam1.f_71, *uParam1.f_72, *uParam1.f_73);
		}
		else
		{
			clear_vehicle_custom_primary_colour(iParam0);
		}
		if (is_bit_set(*uParam1.f_77, 12))
		{
			set_vehicle_custom_secondary_colour(iParam0, *uParam1.f_71, *uParam1.f_72, *uParam1.f_73);
		}
		else
		{
			clear_vehicle_custom_secondary_colour(iParam0);
		}
		set_vehicle_colours(iParam0, *uParam1.f_5, *uParam1.f_6);
		if (*uParam1.f_7 < 0)
		{
			*uParam1.f_7 = 0;
		}
		if (*uParam1.f_8 < 0)
		{
			*uParam1.f_8 = 0;
		}
		set_vehicle_extra_colours(iParam0, *uParam1.f_7, *uParam1.f_8);
		if (((is_bit_set(*uParam1.f_77, 15) || func_301(iParam0)) || (((*uParam1.f_62 == 0 && *uParam1.f_63 == 0) && *uParam1.f_64 == 0) && *uParam1.f_9[20] > 0)) && func_300())
		{
			*uParam1.f_62 = 0;
			*uParam1.f_63 = 0;
			*uParam1.f_64 = 0;
		}
		else if ((*uParam1.f_62 == 0 && *uParam1.f_63 == 0) && *uParam1.f_64 == 0)
		{
			*uParam1.f_62 = 255;
			*uParam1.f_63 = 255;
			*uParam1.f_64 = 255;
		}
		set_vehicle_tyre_smoke_color(iParam0, *uParam1.f_62, *uParam1.f_63, *uParam1.f_64);
		if (*uParam1.f_65 == -1 && *uParam1.f_66 != joaat("granger"))
		{
			set_vehicle_window_tint(iParam0, 0);
		}
		else
		{
			set_vehicle_window_tint(iParam0, 0);
			set_vehicle_window_tint(iParam0, *uParam1.f_65);
		}
		set_vehicle_tyres_can_burst(iParam0, !is_bit_set(*uParam1.f_77, 9));
		if (iParam2)
		{
			set_vehicle_doors_locked(iParam0, *uParam1.f_70);
		}
		_set_vehicle_neon_lights_colour(iParam0, *uParam1.f_74, *uParam1.f_75, *uParam1.f_76);
		_set_vehicle_neon_light_enabled(iParam0, 2, is_bit_set(*uParam1.f_77, 28));
		_set_vehicle_neon_light_enabled(iParam0, 3, is_bit_set(*uParam1.f_77, 29));
		_set_vehicle_neon_light_enabled(iParam0, 0, is_bit_set(*uParam1.f_77, 30));
		_set_vehicle_neon_light_enabled(iParam0, 1, is_bit_set(*uParam1.f_77, 31));
		set_vehicle_is_stolen(iParam0, is_bit_set(*uParam1.f_77, 10));
		if (get_vehicle_livery_count(iParam0) > 1 && *uParam1.f_67 >= 0)
		{
			set_vehicle_livery(iParam0, *uParam1.f_67);
		}
		if (*uParam1.f_69 > -1 && *uParam1.f_69 < 255)
		{
			if (!is_this_model_a_bicycle(get_entity_model(iParam0)))
			{
				if (is_this_model_a_bike(get_entity_model(iParam0)))
				{
					if (*uParam1.f_69 == 6)
					{
						func_299(iParam0, *uParam1.f_69);
					}
				}
				else
				{
					func_299(iParam0, *uParam1.f_69);
				}
			}
		}
		if (is_vehicle_a_convertible(iParam0, 0))
		{
			if ((*uParam1.f_68 == 0 || *uParam1.f_68 == 3) || *uParam1.f_68 == 5)
			{
				raise_convertible_roof(iParam0, 1);
			}
			else
			{
				lower_convertible_roof(iParam0, 1);
			}
		}
		if (iParam3)
		{
			func_295(&iParam0, uParam1.f_9, uParam1.f_59);
		}
		if (!is_this_model_a_heli(*uParam1.f_66) && !is_this_model_a_boat(*uParam1.f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (is_bit_set(*uParam1.f_77, func_279(iVar2 + 1)))
				{
					if (!is_vehicle_extra_turned_on(iParam0, iVar2 + 1))
					{
						set_vehicle_extra(iParam0, iVar2 + 1, false);
					}
				}
				else if (is_vehicle_extra_turned_on(iParam0, iVar2 + 1))
				{
					set_vehicle_extra(iParam0, iVar2 + 1, true);
				}
				iVar2++;
			}
		}
		if (is_this_model_a_plane(*uParam1.f_66))
		{
			if (!is_bit_set(*uParam1.f_77, 23))
			{
				if (is_bit_set(*uParam1.f_77, 22))
				{
					_set_vehicle_landing_gear(iParam0, 2);
				}
				else
				{
					_set_vehicle_landing_gear(iParam0, 3);
				}
			}
			else
			{
				_set_vehicle_landing_gear(iParam0, 4);
			}
		}
		if (is_bit_set(*uParam1.f_77, 27))
		{
			decor_set_bool(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			decor_set_bool(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

bool func_295(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_vehicle_driveable(*iParam0, 0))
	{
		return false;
	}
	if (get_num_mod_kits(*iParam0) == 0)
	{
		return false;
	}
	set_vehicle_mod_kit(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			toggle_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] > 0);
		}
		else if (get_vehicle_mod(*iParam0, iVar1) != *uParam1[iVar0] - 1)
		{
			remove_vehicle_mod(*iParam0, iVar1);
			if (*uParam1[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					set_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] - 1, *uParam2[0] > 0);
				}
				else if (iVar0 == 24)
				{
					set_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] - 1, *uParam2[1] > 0);
				}
				else
				{
					set_vehicle_mod(*iParam0, iVar1, *uParam1[iVar0] - 1, false);
				}
			}
		}
		iVar0++;
	}
	if (func_298(get_entity_model(*iParam0), 1) && get_vehicle_mod(*iParam0, 24) != func_297(*iParam0, *uParam1[38] - 1))
	{
		set_vehicle_mod(*iParam0, 24, func_297(*iParam0, *uParam1[38] - 1), false);
	}
	if (func_296(*iParam0))
	{
		set_vehicle_strong(*iParam0, true);
		set_vehicle_has_strong_axles(*iParam0, true);
	}
	return true;
}

bool func_296(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[16] cVar3;
	
	if ((does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, 0)) && get_num_mod_kits(iParam0) > 0)
	{
		set_vehicle_mod_kit(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (get_vehicle_mod(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, get_mod_text_label(iParam0, iVar1, get_vehicle_mod(iParam0, iVar1)), 16);
				iVar2 = get_hash_key(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == get_hash_key("MNU_CAGE") || iVar2 == get_hash_key("SABRE_CAG"))
					{
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_297(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		switch (get_entity_model(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = get_num_vehicle_mods(iParam0, 38);
		iVar1 = get_num_vehicle_mods(iParam0, 24);
		fVar2 = to_float(iParam1 + 1) / to_float(iVar0);
		iVar3 = floor(to_float(iVar1) * fVar2) - 1;
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = iVar0 - 1;
		}
		return iVar3;
	}
	return 0;
}

bool func_298(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return true;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_11649)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_11650)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_11648)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_11651)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_11653)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_11652)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return false;
			}
			return true;
			break;
	}
	return false;
}

void func_299(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (get_num_mod_kits(iParam0) > 0)
	{
		set_vehicle_mod_kit(iParam0, 0);
		iVar0 = get_vehicle_mod(iParam0, 24);
		iVar1 = get_vehicle_mod_variation(iParam0, 24);
		set_vehicle_wheel_type(iParam0, iParam1);
		if (iVar0 == -1)
		{
			remove_vehicle_mod(iParam0, 24);
		}
		else
		{
			set_vehicle_mod(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_300()
{
	return is_dlc_present(-1691188696);
}

int func_301(int iParam0)
{
	int iVar0;
	
	if (does_entity_exist(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (decor_is_registered_as_type("MPBitset", 3))
			{
				if (decor_exist_on(iParam0, "MPBitset"))
				{
					iVar0 = decor_get_int(iParam0, "MPBitset");
				}
				return is_bit_set(iVar0, 4);
			}
		}
	}
	return false;
}

bool func_302(vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	struct<24> Var7;
	struct<24> Var31;
	struct<24> Var55;
	int iVar79;
	int iVar80;
	
	if (!func_456(8))
	{
		func_455(0, 0, 0, 0);
		func_454(8);
	}
	if (Global_1321273[iParam5 /*138*/].f_66 == 0)
	{
		return true;
	}
	if (is_bit_set(Global_1321273[iParam5 /*138*/].f_99, 6))
	{
		if (!func_456(16))
		{
			func_454(16);
		}
	}
	func_454(31);
	if (!func_453())
	{
		if (!func_456(0))
		{
			if (!network_does_network_id_exist(Global_2418472[player_id() /*313*/].f_48))
			{
				if (can_register_mission_vehicles(1))
				{
					if (!func_452())
					{
						if (!func_448())
						{
							func_444(iParam5);
							iVar1 = Global_1321273[iParam5 /*138*/].f_66;
							if (!func_443(iVar1) || !func_440(iVar1, 1))
							{
								if (!func_439(iVar1))
								{
								}
								else
								{
									func_436(iParam5, -1);
								}
								return true;
							}
							else if (func_435(iVar1))
							{
								iVar3 = 0;
								if (_get_posix_time() - Global_2428492.f_501.f_28 < 15)
								{
									iVar3 = 1;
								}
								if (func_434())
								{
									iVar3 = 1;
								}
								if (get_time_difference(_0x89023FBBF9200E9F(), Global_2404956.f_22.f_2) < 15000)
								{
									Global_2404956.f_22.f_2 = _0x89023FBBF9200E9F();
									iVar3 = 1;
								}
								if (iParam8)
								{
									iVar3 = 1;
								}
								if (Global_2435528.f_2842.f_147)
								{
									iVar4 = 0;
									iVar3 = 1;
								}
								else
								{
									iVar4 = 1;
								}
								iVar5 = true;
								if (func_433(player_id()) || (is_screen_faded_out() || is_player_switch_in_progress()))
								{
									iVar5 = false;
								}
								if (Global_2435528.f_2842.f_147)
								{
									if (is_bit_set(Global_1321273[iParam5 /*138*/].f_99, 11))
									{
										clear_bit(&(Global_1321273[iParam5 /*138*/].f_99), 11);
									}
								}
								iVar6 = false;
								if (iParam7)
								{
									iVar6 = true;
								}
								else if (is_bit_set(Global_1321273[iParam5 /*138*/].f_99, 11))
								{
									Var7.f_3 = 1125515264;
									Var7.f_4 = 1;
									Var7.f_5 = 1;
									Var7.f_7 = 1082130432;
									Var7.f_8 = 1;
									Var7.f_11 = 1;
									Var7.f_13 = 2;
									Var7.f_20 = 2;
									Var7.f_23 = 1;
									Var7.f_3 = 50f;
									Var7.f_4 = 0;
									Var7.f_5 = 0;
									Var7.f_8 = iVar4;
									Var7.f_9 = iVar3;
									Var7.f_10 = 1;
									Var7.f_11 = iVar5;
									Var7.f_12 = 1;
									Var7.f_23 = 0;
									iVar2 = 0;
									while (iVar2 < 2)
									{
										Var7.f_13[iVar2 /*3*/] = {Global_2428492.f_501.f_31[iVar2 /*3*/]};
										Var7.f_20[iVar2] = Global_2428492.f_501.f_38[iVar2];
										iVar2++;
									}
									if (func_359(-145.7451f, -1167.937f, 24.2819f, 0f, 0f, 0f, iVar1, 1, &vParam0, &fParam3, &Var7))
									{
										iVar6 = true;
									}
									else if (func_359(-234.9622f, -1171.113f, 21.8657f, 0f, 0f, 0f, iVar1, 1, &vParam0, &fParam3, &Var7))
									{
										iVar6 = true;
									}
								}
								else if (is_bit_set(Global_1321273[iParam5 /*138*/].f_99, 6))
								{
									if (func_353(&vParam0, &fParam3))
									{
										iVar6 = true;
									}
								}
								else
								{
									if (iParam6)
									{
										if (is_valid_interior(get_interior_at_coords(vParam0)))
										{
											iParam6 = false;
										}
									}
									if (!iParam6)
									{
										Var31.f_3 = 1125515264;
										Var31.f_4 = 1;
										Var31.f_5 = 1;
										Var31.f_7 = 1082130432;
										Var31.f_8 = 1;
										Var31.f_11 = 1;
										Var31.f_13 = 2;
										Var31.f_20 = 2;
										Var31.f_23 = 1;
										Var31 = 10f;
										Var31.f_8 = iVar4;
										Var31.f_9 = iVar3;
										Var31.f_10 = 1;
										Var31.f_11 = iVar5;
										Var31.f_12 = 1;
										Var31.f_23 = 0;
										iVar2 = 0;
										while (iVar2 < 2)
										{
											Var31.f_13[iVar2 /*3*/] = {Global_2428492.f_501.f_31[iVar2 /*3*/]};
											Var31.f_20[iVar2] = Global_2428492.f_501.f_38[iVar2];
											iVar2++;
										}
										if (func_359(vParam0, 0f, 0f, 0f, iVar1, 1, &vParam0, &fParam3, &Var31))
										{
											iVar6 = true;
										}
									}
									else
									{
										Var55.f_3 = 1125515264;
										Var55.f_4 = 1;
										Var55.f_5 = 1;
										Var55.f_7 = 1082130432;
										Var55.f_8 = 1;
										Var55.f_11 = 1;
										Var55.f_13 = 2;
										Var55.f_20 = 2;
										Var55.f_23 = 1;
										Var55.f_2 = iParam6;
										Var55.f_8 = iVar4;
										Var55.f_9 = iVar3;
										Var55.f_10 = 1;
										Var55.f_11 = iVar5;
										Var55.f_12 = 1;
										Var55.f_23 = 0;
										iVar2 = 0;
										while (iVar2 < 2)
										{
											Var55.f_13[iVar2 /*3*/] = {Global_2428492.f_501.f_31[iVar2 /*3*/]};
											Var55.f_20[iVar2] = Global_2428492.f_501.f_38[iVar2];
											iVar2++;
										}
										if (func_359(vParam0, 0f, 0f, 0f, iVar1, 1, &vParam0, &fParam3, &Var55))
										{
											iVar6 = true;
										}
									}
								}
								if (iVar6)
								{
									clear_area(vParam0, 2f, 1, 0, 0, false);
									func_263(&(Global_2418472[player_id() /*313*/].f_48), iVar1, vParam0, fParam3, 0, 1, 0, 0, 1, 1);
									_0xA8A024587329F36A(Global_2418472[player_id() /*313*/].f_48, player_id(), 1);
									iVar0 = net_to_veh(Global_2418472[player_id() /*313*/].f_48);
									_0x3910051CCECDB00C(iVar0, true);
									set_vehicle_on_ground_properly(iVar0);
									func_340(&iVar0, iParam5);
									func_335(iVar0, iParam5);
									if (!iVar5)
									{
										network_fade_in_entity(iVar0, 1, 1);
									}
									if (is_bit_set(Global_1321273[iParam5 /*138*/].f_99, 11))
									{
										func_454(34);
									}
									else
									{
										func_334(34);
									}
									if (iParam5 >= 0 && iParam5 < 65)
									{
										set_bit(&(Global_1321273[iParam5 /*138*/].f_99), false);
										iVar80 = 0;
										while (iVar80 < 65)
										{
											iVar79 = false;
											if (iVar80 != iParam5)
											{
												if (is_bit_set(Global_1321273[iVar80 /*138*/].f_99, 11))
												{
													clear_bit(&(Global_1321273[iVar80 /*138*/].f_99), 11);
													iVar79 = true;
												}
												if (is_bit_set(Global_1321273[iVar80 /*138*/].f_99, false))
												{
													clear_bit(&(Global_1321273[iVar80 /*138*/].f_99), false);
													iVar79 = true;
												}
												if (is_bit_set(Global_1321273[iVar80 /*138*/].f_99, 6))
												{
													func_316(iVar80);
													iVar79 = true;
												}
												if (iVar79)
												{
													func_305(iVar80, &(Global_1321273[iVar80 /*138*/]), 1, -1, 0, 0);
												}
											}
											iVar80++;
										}
									}
									if (is_vehicle_a_convertible(iVar0, 0))
									{
										if (is_bit_set(Global_2435528.f_5443, 2))
										{
											lower_convertible_roof(iVar0, 1);
										}
									}
									func_305(iParam5, &(Global_1321273[iParam5 /*138*/]), 1, -1, 0, 0);
									func_304(iVar0);
									set_vehicle_doors_locked(iVar0, 1);
									if (iParam4)
									{
										set_model_as_no_longer_needed(iVar1);
									}
									func_454(0);
									func_334(10);
									func_334(1);
									func_334(2);
									func_334(9);
									func_334(12);
									func_334(31);
									func_334(32);
									func_334(33);
									func_334(35);
									func_303();
									Global_2418472[player_id() /*313*/].f_117 = 0;
									return true;
								}
							}
						}
					}
				}
			}
		}
	}
	return false;
}

void func_303()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_2428492.f_501.f_31[iVar0 /*3*/] = {0f, 0f, 0f};
		Global_2428492.f_501.f_38[iVar0] = 0f;
		iVar0++;
	}
}

void func_304(int iParam0)
{
	_0xE851E480B814D4BA(iParam0, 0);
	set_vehicle_can_be_used_by_fleeing_peds(iParam0, 0);
	_0xAB04325045427AAE(iParam0, 0);
	set_vehicle_is_stolen(iParam0, false);
	if (network_does_network_id_exist(Global_2418472[player_id() /*313*/].f_48))
	{
		if (iParam0 == net_to_veh(Global_2418472[player_id() /*313*/].f_48))
		{
			set_network_id_visible_in_cutscene(Global_2418472[player_id() /*313*/].f_48, 0, 1);
		}
	}
}

bool func_305(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam2)
	{
		if (!iParam4)
		{
		}
		Global_2097152[func_315() /*10375*/].f_7704.f_749 = _get_posix_time();
	}
	if (!iParam4)
	{
	}
	iVar1 = func_314(1411, iParam0);
	func_313(iVar1, *uParam1.f_134, iParam3, 1);
	if (!iParam4)
	{
	}
	iVar1 = func_314(1412, iParam0);
	func_313(iVar1, *uParam1.f_135, iParam3, 1);
	if (!iParam4)
	{
	}
	if (func_312(iParam0))
	{
	}
	else
	{
		iVar1 = func_314(1413, iParam0);
		func_313(iVar1, *uParam1, iParam3, 1);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = func_314(1414, iParam0) + iVar0;
				func_313(iVar1, *uParam1.f_9[iVar0], iParam3, 1);
			}
			else
			{
			}
			iVar0++;
		}
		iVar0 = 0;
		{