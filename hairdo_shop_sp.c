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
	int iLocal_18 = 0;
	char* sLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	float fLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0;
	float fLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
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
	var uLocal_56 = 0;
	struct<4> Local_57 = 0;
	var[] uLocal_61 = new var[32];
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	float fLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	struct<495> Local_101 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 12;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 12;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 12;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 9;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 9;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 2;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 2;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	struct<2> Local_795 = 0;
#endregion

void main()
{
	vector3 vVar0;
	var uVar3;
	
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
	iLocal_18 = 3;
	sLocal_19 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	iLocal_94 = 207;
	iLocal_97 = get_sound_id();
	fLocal_98 = -1f;
	iLocal_100 = -99;
	Local_101.f_1 = Local_795.f_1;
	Local_101.f_3 = -1;
	Local_101.f_494 = Local_795;
	if (!Local_101.f_1)
	{
		set_bit(&(Global_91330.f_1300[Local_795]), 16);
	}
	Local_101.f_448 = 551723/*func_942*/;
	Local_101.f_449 = 551562/*func_941*/;
	Local_101.f_450 = 541616/*func_925*/;
	Local_101.f_451 = 541574/*func_924*/;
	Local_101.f_452 = 541532/*func_923*/;
	Local_101.f_453 = 540375/*func_921*/;
	Local_101.f_454 = 540333/*func_920*/;
	Local_101.f_455 = 463462/*func_864*/;
	Local_101.f_456 = 462723/*func_862*/;
	if (has_force_cleanup_occurred(66))
	{
		func_851(&Local_101, 0);
	}
	if (Local_101.f_494 != 0)
	{
		if (func_850(Local_101.f_494, &vVar0, &uVar3))
		{
			func_849(vVar0, 3.5f);
		}
	}
	while (true)
	{
		wait(0);
		func_1(&Local_101);
	}
}

void func_1(var uParam0)
{
	int iVar0;
	
	func_848(uParam0.f_12);
	if (*uParam0.f_7)
	{
		_0x3669F1B198DCAA4F();
	}
	if (func_847(*uParam0.f_494) && !func_838(uParam0, *uParam0.f_494))
	{
		if (func_837(uParam0))
		{
			_0x7F4724035FDCA1DD(2);
			_0x7F4724035FDCA1DD(0);
			if (!*uParam0.f_11 == 2 && !func_836(uParam0))
			{
				iVar0 = 0;
				func_826(uParam0, &iVar0, 0, 0);
			}
			func_817(uParam0, uParam0.f_105);
			if (*uParam0.f_9)
			{
				if (!func_816(*uParam0))
				{
					func_808(uParam0, uParam0.f_105, *uParam0.f_563);
				}
				else
				{
					func_807(uParam0);
					if (!*uParam0.f_11 == 2 && !func_836(uParam0))
					{
						func_806(uParam0);
					}
				}
			}
			func_805(uParam0);
			func_795(uParam0);
			func_786(uParam0);
			switch (*uParam0.f_11)
			{
				case 0:
					func_766(uParam0);
					break;
				
				case 1:
					func_762(0);
					func_761(uParam0);
					func_760(uParam0);
					if (func_759(uParam0))
					{
						if (*uParam0.f_11 == 2)
						{
							*uParam0.f_562 = 1;
							func_732(uParam0);
						}
					}
					else
					{
						func_726(uParam0);
					}
					break;
				
				case 2:
					func_732(uParam0);
					func_721(uParam0, uParam0.f_105);
					break;
				
				case 3:
					func_720(uParam0);
					func_726(uParam0);
					func_706(uParam0);
					func_698(uParam0);
					func_687(uParam0);
					break;
				
				case 4:
					func_22(uParam0);
					func_721(uParam0, uParam0.f_105);
					break;
				
				case 5:
					*uParam0.f_11 = 3;
					break;
				}
		}
	}
	else
	{
		func_851(uParam0, 0);
	}
	if (func_15(uParam0))
	{
		func_9(uParam0);
	}
	func_2(uParam0);
}

void func_2(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0.f_9 && network_is_game_in_progress())
	{
		uLocal_61[player_id()] = Global_91330.f_1300[*uParam0];
		if (network_is_host_of_this_script())
		{
			func_7(*uParam0);
			if (*uParam0.f_681)
			{
				if (is_time_more_than(get_network_time(), *uParam0.f_682))
				{
					iVar0 = true;
					if ((!is_bit_set(Global_91330.f_1300[*uParam0], false) && !is_bit_set(Global_91330.f_1300[*uParam0], 5)) && (!does_entity_exist(*uParam0.f_12) || is_ped_injured(*uParam0.f_12)))
					{
						iVar1 = false;
						while (iVar1 < 32)
						{
							if (func_6(int_to_playerindex(iVar1), 1, 1))
							{
								if (is_bit_set(uLocal_61[iVar1], 5))
								{
									iVar0 = false;
									iVar1 = 33;
								}
							}
							iVar1++;
						}
					}
					else
					{
						iVar0 = false;
					}
					if (Global_2460486.f_4648)
					{
						iVar0 = false;
					}
					func_3(*uParam0, iVar0, 0, 1);
					*uParam0.f_681 = 0;
				}
			}
			else
			{
				*uParam0.f_682 = get_time_offset(get_network_time(), 2000);
				*uParam0.f_681 = 1;
			}
		}
		else
		{
			*uParam0.f_682 = get_network_time();
			*uParam0.f_681 = 1;
		}
	}
}

void func_3(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<6> Var4;
	
	if (!network_is_game_in_progress())
	{
		return;
	}
	if (iParam1)
	{
		iVar0 = 1;
		iVar1 = 0;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 1;
	}
	if (iParam2)
	{
		if (iParam1)
		{
			iVar0 = 4;
			iVar1 = 3;
		}
		else
		{
			iVar0 = 3;
			iVar1 = 4;
		}
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar3 = func_5(iParam0, iVar2);
		if (iVar3 != 226)
		{
			Var4 = {func_4(iVar3)};
			if (!_does_door_exist(Var4.f_5))
			{
				add_door_to_system(Var4.f_5, Var4.f_3, Var4, 0, 1, 0);
			}
			if (_does_door_exist(Var4.f_5))
			{
				if (network_has_control_of_door(Var4.f_5))
				{
					if (_0x160AA1B32F6139B8(Var4.f_5) == iVar1)
					{
						_set_door_acceleration_limit(Var4.f_5, iVar0, iParam3, 1);
					}
				}
				else
				{
					network_request_control_of_door(Var4.f_5);
				}
			}
		}
		iVar2++;
	}
}

struct<7> func_4(int iParam0)
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {133f, -1711f, 29f};
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {-1287.857f, -1115.742f, 7.1401f};
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {1932.952f, 3725.154f, 32.9944f};
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {1207.873f, -470.063f, 66.358f};
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {-29.8692f, -148.1571f, 57.2265f};
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = {-280.7851f, 6232.782f, 31.8455f};
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = {-824f, -187f, 38f};
			Var0 = {-823.2001f, -187.0831f, 37.819f};
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = {-823f, -188f, 38f};
			Var0 = {-822.4442f, -188.3924f, 37.819f};
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {82.3186f, -1392.752f, 29.5261f};
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {82.3186f, -1390.476f, 29.5261f};
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {1686.983f, 4821.741f, 42.2131f};
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {1687.282f, 4819.484f, 42.2131f};
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {418.637f, -806.457f, 29.6396f};
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {418.637f, -808.733f, 29.6396f};
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {-1096.661f, 2705.446f, 19.2578f};
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {-1094.965f, 2706.964f, 19.2578f};
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {1196.825f, 2703.221f, 38.3726f};
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {1199.101f, 2703.221f, 38.3726f};
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {-818.7642f, -1079.544f, 11.4781f};
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {-816.7932f, -1078.406f, 11.4781f};
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = {-0.0564f, 6517.461f, 32.0278f};
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = {-1.7253f, 6515.914f, 32.0278f};
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = {-1201.435f, -776.8566f, 17.9918f};
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = {617.2458f, 2751.022f, 42.7578f};
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = {127.8201f, -211.8274f, 55.2275f};
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = {-3167.75f, 1055.536f, 21.5329f};
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-716.6754f, -155.42f, 37.6749f};
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-715.6154f, -157.2561f, 37.6749f};
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-157.0924f, -306.4413f, 39.994f};
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-156.4022f, -304.4366f, 39.994f};
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-1454.782f, -231.7927f, 50.0565f};
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = {-1456.201f, -233.3682f, 50.0565f};
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = {321.81f, 178.36f, 103.68f};
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = -1212951353;
			Var0 = {1859.89f, 3749.79f, 33.18f};
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = -1212951353;
			Var0 = {-289.1752f, 6199.112f, 31.637f};
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = {-1155.454f, -1424.008f, 5.0461f};
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = {1321.286f, -1650.597f, 52.3663f};
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = {-3167.789f, 1074.767f, 20.9209f};
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = {-817f, 179f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = {-816f, 178f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = {-815f, 186f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = {-797f, 177f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = {-795f, 178f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = {-793f, 181f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = {-794f, 183f, 73f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = {-849f, 179f, 70f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = {-802.7333f, 167.5041f, 77.5824f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = {-14f, -1441f, 31f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = {-15f, -1427f, 31f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = {-25.28f, -1431.06f, 30.84f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = {7.52f, 539.53f, 176.18f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = {1973f, 3815f, 34f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = {1972.787f, 3824.554f, 32.5831f};
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = {-1150f, -1521f, 11f};
			set_bit(&(Var0.f_4), false);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = {-1145.9f, -1991.14f, 14.18f};
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = {723.12f, -1088.83f, 23.28f};
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = {-356.09f, -134.77f, 40.01f};
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = {108.8502f, 6617.876f, 32.673f};
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = {114.3206f, 6623.226f, 32.7161f};
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = {1182.305f, 2645.242f, 38.807f};
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = {1174.654f, 2645.242f, 38.6826f};
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = -427498890;
			Var0 = {-205.7007f, -1310.692f, 30.2957f};
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = {-107.5401f, -9.0258f, 70.6696f};
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = {717f, -975f, 25f};
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = {719f, -975f, 25f};
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = {709.9813f, -963.5311f, 30.5453f};
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = {709.9894f, -960.6675f, 30.5453f};
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = {707.8046f, -962.4564f, 30.5453f};
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = -1212951353;
			Var0 = {1393f, 3599f, 35f};
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = -1212951353;
			Var0 = {1395f, 3600f, 35f};
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = {1387f, 3614f, 39f};
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = {1083.547f, -1975.435f, 31.6222f};
			Var0.f_5 = 792295685;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = {1065.237f, -2006.079f, 32.2329f};
			Var0.f_5 = 563273144;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = {1085.307f, -2018.561f, 41.6289f};
			Var0.f_5 = -726993043;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = {-111f, 6464f, 32f};
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = {-110f, 6462f, 32f};
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = {1274f, -1721f, 55f};
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = {1271.89f, -1707.57f, 53.79f};
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = {1270.77f, -1708.1f, 53.75f};
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = {-127.5f, -1456.18f, 37.94f};
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = {483.56f, -1316.08f, 32.18f};
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = {483f, -1312f, 29f};
			Var0.f_5 = -106474626;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = {128f, -1299f, 29f};
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = {96f, -1285f, 29f};
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = {549f, -1773f, 34f};
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = {974f, -1839f, 36f};
			Var0.f_5 = 1267246609;
			set_bit(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = {977f, -105f, 75f};
			Var0.f_5 = -1900237971;
			set_bit(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = {1391f, 1163f, 114f};
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = {1391f, 1161f, 114f};
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = {1396f, 1143f, 115f};
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = {1396f, 1141f, 115f};
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = {1409f, 1146f, 114f};
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = {1409f, 1148f, 114f};
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = {1408f, 1159f, 114f};
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = {1408f, 1161f, 114f};
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = {-1067f, -1666f, 5f};
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = {-1065f, -1669f, 5f};
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = {-1104.66f, -1638.48f, 4.68f};
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = {-31.72f, -1101.85f, 26.57f};
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = {134.4f, -2204.1f, 7.52f};
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = {3628f, 3747f, 28f};
			Var0.f_5 = 1773088812;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = {3621f, 3752f, 28f};
			Var0.f_5 = -1332101528;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = {-608.73f, -1610.32f, 27.16f};
			Var0.f_5 = -1811763714;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = {-611.32f, -1610.09f, 27.16f};
			Var0.f_5 = 1608500665;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = {-592.94f, -1631.58f, 27.16f};
			Var0.f_5 = -1456048340;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = {-592.71f, -1628.99f, 27.16f};
			Var0.f_5 = 943854909;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = {1991f, 3053f, 47f};
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = 479144380;
			Var0 = {1988.353f, 3054.411f, 47.3204f};
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = {-700.17f, 47.31f, 44.3f};
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = {-697.94f, 48.35f, 44.3f};
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = -1230442770;
			Var0 = {241.3574f, 361.0488f, 105.8963f};
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = {-689.11f, 506.97f, 110.64f};
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = {-1055.96f, -236.43f, 44.17f};
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = {29f, 3661f, 41f};
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = {32f, 3667f, 41f};
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = {87f, -1959f, 21f};
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = {0f, -1823f, 30f};
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = {23.34f, -1897.6f, 23.05f};
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = {524.2f, 3081.14f, 41.16f};
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = {-1910.58f, -576.01f, 19.25f};
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = {-720.39f, 256.86f, 80.29f};
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = {-718.42f, 257.79f, 80.29f};
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = {106.38f, -742.7f, 46.18f};
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = {105.76f, -746.65f, 46.18f};
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = {-2343.53f, 3265.37f, 32.96f};
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = {-2342.23f, 3267.62f, 32.96f};
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = {-1041.933f, -2748.167f, 22.0308f};
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = {-1044.841f, -2746.489f, 22.0308f};
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = {-1045.12f, -232.004f, 39.4379f};
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = {-1046.516f, -229.3581f, 39.4379f};
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = {-1083.62f, -260.4167f, 38.1867f};
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = {-1080.974f, -259.0204f, 38.1867f};
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = {-1042.57f, -240.6f, 38.11f};
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = {1385.258f, -2079.949f, 52.7638f};
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = {1656.57f, 4849.66f, 42.35f};
			Var0.f_5 = 243782214;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = {1656.25f, 4852.24f, 42.35f};
			Var0.f_5 = 714115627;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = -1184516519;
			Var0 = {-1051.402f, -474.6847f, 36.6199f};
			Var0.f_5 = 1668106976;
			set_bit(&(Var0.f_4), true);
			break;
		
		case 136:
			Var0.f_3 = -1184516519;
			Var0 = {-1049.285f, -476.6376f, 36.7584f};
			Var0.f_5 = 1382347031;
			set_bit(&(Var0.f_4), true);
			break;
		
		case 137:
			Var0.f_3 = 1230099731;
			Var0 = {-1210.957f, -580.8765f, 27.2373f};
			Var0.f_5 = -966790948;
			set_bit(&(Var0.f_4), true);
			break;
		
		case 138:
			Var0.f_3 = 1230099731;
			Var0 = {-1212.445f, -578.4401f, 27.2373f};
			Var0.f_5 = -2068750132;
			set_bit(&(Var0.f_4), true);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = {-565.1712f, 276.6259f, 83.2863f};
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = {-561.2863f, 293.5043f, 87.7771f};
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = {-631.96f, -236.33f, 38.21f};
			Var0.f_5 = 1874948872;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = {-630.43f, -238.44f, 38.21f};
			Var0.f_5 = -1965020851;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = -1743257725;
			Var0 = {231.62f, 216.23f, 106.4f};
			Var0.f_5 = 1951546856;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = -1743257725;
			Var0 = {232.72f, 213.88f, 106.4f};
			Var0.f_5 = -431382051;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = 110411286;
			Var0 = {258.32f, 203.84f, 106.43f};
			Var0.f_5 = -293975210;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = 110411286;
			Var0 = {260.76f, 202.95f, 106.43f};
			Var0.f_5 = -785215289;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = -222270721;
			Var0 = {256.31f, 220.66f, 106.43f};
			Var0.f_5 = -366143778;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = {266.36f, 217.57f, 110.43f};
			Var0.f_5 = 440819155;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = {-442.66f, 6015.222f, 31.8663f};
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = {-444.4985f, 6017.06f, 31.8663f};
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = {1855.685f, 3683.93f, 34.5928f};
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = {-1223.35f, -172.41f, 39.98f};
			Var0.f_5 = -320891223;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = {-1220.93f, -173.68f, 39.98f};
			Var0.f_5 = 1511747875;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = {-1211.99f, -190.57f, 39.98f};
			Var0.f_5 = -1517722103;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = {-1213.26f, -192.98f, 39.98f};
			Var0.f_5 = -1093199712;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = {-1217.77f, -201.54f, 39.98f};
			Var0.f_5 = 1902048492;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = {-1219.04f, -203.95f, 39.98f};
			Var0.f_5 = -444768985;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = {2514.32f, -317.34f, 93.32f};
			Var0.f_5 = 404057594;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = {2512.42f, -319.26f, 93.32f};
			Var0.f_5 = -1417472813;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = {2333.23f, 2574.97f, 47.03f};
			Var0.f_5 = -1376084479;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = {2329.65f, 2576.64f, 47.03f};
			Var0.f_5 = 457472151;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {16.1279f, -1114.605f, 29.9469f};
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {18.572f, -1115.495f, 29.9469f};
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {1698.176f, 3751.506f, 34.8553f};
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {1699.937f, 3753.42f, 34.8553f};
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {244.7274f, -44.0791f, 70.91f};
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {243.8379f, -46.5232f, 70.91f};
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {845.3624f, -1024.539f, 28.3448f};
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {842.7684f, -1024.539f, 23.3448f};
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-326.1122f, 6075.27f, 31.6047f};
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-324.273f, 6077.109f, 31.6047f};
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-665.2424f, -944.3256f, 21.9792f};
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-662.6414f, -944.3256f, 21.9792f};
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-1313.826f, -389.1259f, 36.8457f};
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-1314.465f, -391.6472f, 36.8457f};
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-1114.009f, 2689.77f, 18.7041f};
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-1112.071f, 2691.505f, 18.7041f};
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {-3164.845f, 1081.392f, 20.9887f};
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {-3163.812f, 1083.778f, 20.9887f};
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {2570.905f, 303.3556f, 108.8848f};
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {2568.304f, 303.3556f, 108.8848f};
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = {813.1779f, -2148.27f, 29.7689f};
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = {810.5769f, -2148.27f, 29.7689f};
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = {6.8179f, -1098.209f, 29.9469f};
			Var0.f_5 = 1487704245;
			set_bit(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = {827.5342f, -2160.493f, 29.7688f};
			Var0.f_5 = 1529812051;
			set_bit(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = {-1107.01f, 289.38f, 64.76f};
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = {-1101.62f, 290.36f, 64.76f};
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = {-1138.64f, 300.82f, 67.18f};
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = {-1137.05f, 295.59f, 67.18f};
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = {-2053.16f, 3239.49f, 30.5f};
			Var0.f_5 = -621770121;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = {-2054.39f, 3237.23f, 30.5f};
			Var0.f_5 = 1018580481;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = {-108.91f, 6469.11f, 31.91f};
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = {-182.91f, 6168.37f, 32.14f};
			Var0.f_5 = -1331552374;
			set_bit(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = {-59.89f, -1092.95f, 26.88f};
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = {-60.55f, -1094.75f, 26.89f};
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = {-39.13f, -1108.22f, 26.72f};
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = {-37.33f, -1108.87f, 26.72f};
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = {1943.73f, 3803.63f, 32.31f};
			Var0.f_5 = -2018911784;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = {316.39f, -276.49f, 54.52f};
			Var0.f_5 = -93934272;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = {313.96f, -275.6f, 54.52f};
			Var0.f_5 = 667682830;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = {-2965.71f, 484.22f, 16.05f};
			Var0.f_5 = 1876735830;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = {-2965.82f, 481.63f, 16.05f};
			Var0.f_5 = -2112857171;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = {962.1f, -2183.83f, 31.06f};
			Var0.f_5 = 2046930518;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = {961.79f, -2187.08f, 31.06f};
			Var0.f_5 = 1208502884;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = {2508.43f, -336.63f, 115.76f};
			Var0.f_5 = 1986432421;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = {-2255.19f, 322.26f, 184.93f};
			Var0.f_5 = -722798986;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = {-2254.06f, 319.7f, 184.93f};
			Var0.f_5 = 204301578;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = {-2301.13f, 336.91f, 184.93f};
			Var0.f_5 = -320140460;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = {-2298.57f, 338.05f, 184.93f};
			Var0.f_5 = 65222916;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = {-2222.32f, 305.86f, 184.93f};
			Var0.f_5 = -920027322;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = {-2221.19f, 303.3f, 184.93f};
			Var0.f_5 = -58432001;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = {-2280.6f, 265.43f, 184.93f};
			Var0.f_5 = -2007378629;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = {-2278.04f, 266.57f, 184.93f};
			Var0.f_5 = 418772613;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = {778.31f, -1867.49f, 30.66f};
			Var0.f_5 = 1679064921;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = {-721.35f, 91.01f, 56.68f};
			Var0.f_5 = 412198396;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = {-728.84f, 88.64f, 56.68f};
			Var0.f_5 = -1053755588;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = {-2287.62f, 363.9f, 174.93f};
			Var0.f_5 = -53446139;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = {-2289.78f, 362.91f, 174.93f};
			Var0.f_5 = 1333960556;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = {-2289.86f, 362.88f, 174.93f};
			Var0.f_5 = -41786493;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = {-2292.01f, 361.89f, 174.93f};
			Var0.f_5 = 1750120734;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = {1803.94f, 3929.01f, 33.72f};
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = {-348.81f, -47.26f, 49.39f};
			Var0.f_5 = -2116116146;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = {-351.26f, -46.41f, 49.39f};
			Var0.f_5 = -74083138;
			set_bit(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = {962.9084f, -2105.814f, 34.6432f};
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_5(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return 6;
			}
			if (iParam1 == 1)
			{
				return 7;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				return 0;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				return 1;
			}
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				return 2;
			}
			break;
		
		case 4:
			if (iParam1 == 0)
			{
				return 3;
			}
			break;
		
		case 5:
			if (iParam1 == 0)
			{
				return 4;
			}
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				return 5;
			}
			break;
		
		case 7:
			if (iParam1 == 0)
			{
				return 8;
			}
			if (iParam1 == 1)
			{
				return 9;
			}
			break;
		
		case 8:
			if (iParam1 == 0)
			{
				return 10;
			}
			if (iParam1 == 1)
			{
				return 11;
			}
			break;
		
		case 9:
			if (iParam1 == 0)
			{
				return 12;
			}
			if (iParam1 == 1)
			{
				return 13;
			}
			break;
		
		case 10:
			if (iParam1 == 0)
			{
				return 14;
			}
			if (iParam1 == 1)
			{
				return 15;
			}
			break;
		
		case 11:
			if (iParam1 == 0)
			{
				return 16;
			}
			if (iParam1 == 1)
			{
				return 17;
			}
			break;
		
		case 12:
			if (iParam1 == 0)
			{
				return 18;
			}
			if (iParam1 == 1)
			{
				return 19;
			}
			break;
		
		case 13:
			if (iParam1 == 0)
			{
				return 20;
			}
			if (iParam1 == 1)
			{
				return 21;
			}
			break;
		
		case 14:
			if (iParam1 == 0)
			{
				return 22;
			}
			break;
		
		case 15:
			if (iParam1 == 0)
			{
				return 23;
			}
			break;
		
		case 16:
			if (iParam1 == 0)
			{
				return 24;
			}
			break;
		
		case 17:
			if (iParam1 == 0)
			{
				return 25;
			}
			break;
		
		case 18:
			if (iParam1 == 0)
			{
				return 26;
			}
			if (iParam1 == 1)
			{
				return 27;
			}
			break;
		
		case 19:
			if (iParam1 == 0)
			{
				return 28;
			}
			if (iParam1 == 1)
			{
				return 29;
			}
			break;
		
		case 20:
			if (iParam1 == 0)
			{
				return 30;
			}
			if (iParam1 == 1)
			{
				return 31;
			}
			break;
		
		case 22:
			if (iParam1 == 0)
			{
				return 32;
			}
			break;
		
		case 23:
			if (iParam1 == 0)
			{
				return 33;
			}
			break;
		
		case 24:
			if (iParam1 == 0)
			{
				return 34;
			}
			break;
		
		case 25:
			if (iParam1 == 0)
			{
				return 35;
			}
			break;
		
		case 26:
			if (iParam1 == 0)
			{
				return 36;
			}
			break;
		
		case 27:
			if (iParam1 == 0)
			{
				return 37;
			}
			break;
		
		case 39:
			if (iParam1 == 0)
			{
				return 54;
			}
			break;
		
		case 40:
			if (iParam1 == 0)
			{
				return 55;
			}
			break;
		
		case 41:
			if (iParam1 == 0)
			{
				return 56;
			}
			break;
		
		case 42:
			if (iParam1 == 0)
			{
				return 58;
			}
			if (iParam1 == 1)
			{
				return 57;
			}
			break;
		
		case 43:
			if (iParam1 == 0)
			{
				return 60;
			}
			if (iParam1 == 1)
			{
				return 59;
			}
			break;
		
		case 44:
			if (iParam1 == 0)
			{
				return 225;
			}
			break;
		
		case 28:
			if (iParam1 == 0)
			{
				return 162;
			}
			if (iParam1 == 1)
			{
				return 163;
			}
			break;
		
		case 29:
			if (iParam1 == 0)
			{
				return 165;
			}
			if (iParam1 == 1)
			{
				return 166;
			}
			break;
		
		case 30:
			if (iParam1 == 0)
			{
				return 167;
			}
			if (iParam1 == 1)
			{
				return 168;
			}
			break;
		
		case 31:
			if (iParam1 == 0)
			{
				return 169;
			}
			if (iParam1 == 1)
			{
				return 170;
			}
			break;
		
		case 32:
			if (iParam1 == 0)
			{
				return 171;
			}
			if (iParam1 == 1)
			{
				return 172;
			}
			break;
		
		case 33:
			if (iParam1 == 0)
			{
				return 173;
			}
			if (iParam1 == 1)
			{
				return 174;
			}
			break;
		
		case 34:
			if (iParam1 == 0)
			{
				return 175;
			}
			if (iParam1 == 1)
			{
				return 176;
			}
			break;
		
		case 35:
			if (iParam1 == 0)
			{
				return 177;
			}
			if (iParam1 == 1)
			{
				return 178;
			}
			break;
		
		case 36:
			if (iParam1 == 0)
			{
				return 179;
			}
			if (iParam1 == 1)
			{
				return 180;
			}
			break;
		
		case 37:
			if (iParam1 == 0)
			{
				return 181;
			}
			if (iParam1 == 1)
			{
				return 182;
			}
			break;
		
		case 38:
			if (iParam1 == 0)
			{
				return 183;
			}
			if (iParam1 == 1)
			{
				return 184;
			}
			break;
	}
	return 226;
}

bool func_6(int iParam0, int iParam1, int iParam2)
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

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 1;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar1 = func_8(iParam0, iVar2);
		if (iVar1 != 0)
		{
			if (_does_door_exist(iVar1))
			{
				if (!network_has_control_of_door(iVar1))
				{
					network_request_control_of_door(iVar1);
					iVar0 = 0;
				}
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_8(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 183249434;
				}
				else if (iParam1 == 1)
				{
					return 758345384;
				}
			}
			break;
		
		case 1:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 1804701345;
				}
			}
			break;
		
		case 2:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 1403601067;
				}
			}
			break;
		
		case 3:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return -2031139496;
				}
			}
			break;
		
		case 4:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 1796834809;
				}
			}
			break;
		
		case 5:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 96153298;
				}
			}
			break;
		
		case 6:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return -281080954;
				}
			}
			break;
		
		case 7:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return -1069262641;
				}
				else if (iParam1 == 1)
				{
					return 1968521986;
				}
			}
			break;
		
		case 8:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return -2143706301;
				}
				else if (iParam1 == 1)
				{
					return -1403421822;
				}
			}
			break;
		
		case 9:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return -1950137670;
				}
				else if (iParam1 == 1)
				{
					return 1226259807;
				}
			}
			break;
		
		case 10:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 1090833557;
				}
				else if (iParam1 == 1)
				{
					return 897332612;
				}
			}
			break;
		
		case 11:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 1095946640;
				}
				else if (iParam1 == 1)
				{
					return 801975945;
				}
			}
			break;
		
		case 12:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return -167996547;
				}
				else if (iParam1 == 1)
				{
					return -1935818563;
				}
			}
			break;
		
		case 13:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 1891185217;
				}
				else if (iParam1 == 1)
				{
					return 1236591681;
				}
			}
			break;
		
		case 14:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 1980808685;
				}
			}
			break;
		
		case 15:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 1352749757;
				}
			}
			break;
		
		case 16:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return -566554453;
				}
			}
			break;
		
		case 17:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 1284749450;
				}
			}
			break;
		
		case 18:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 261851994;
				}
				else if (iParam1 == 1)
				{
					return 217646625;
				}
			}
			break;
		
		case 19:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 1801139578;
				}
				else if (iParam1 == 1)
				{
					return -2123275866;
				}
			}
			break;
		
		case 20:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 1312689981;
				}
				else if (iParam1 == 1)
				{
					return -595055661;
				}
			}
			break;
		
		case 22:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return -265260897;
				}
			}
			break;
		
		case 23:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return -1284867488;
				}
			}
			break;
		
		case 24:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 302307081;
				}
			}
			break;
		
		case 25:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return -681886015;
				}
			}
			break;
		
		case 26:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return -2086556500;
				}
			}
			break;
		
		case 27:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return -1496386696;
				}
			}
			break;
		
		case 39:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return -1871080926;
				}
			}
			else if (iParam1 == 0)
			{
				return -1871080926;
			}
			break;
		
		case 40:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 1168079979;
				}
			}
			else if (iParam1 == 0)
			{
				return 1168079979;
			}
			break;
		
		case 41:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 1206354175;
				}
			}
			else if (iParam1 == 0)
			{
				return 1206354175;
			}
			break;
		
		case 42:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 1200466273;
				}
				else if (iParam1 == 1)
				{
					return -1038180727;
				}
			}
			else if (iParam1 == 0)
			{
				return 1200466273;
			}
			else if (iParam1 == 1)
			{
				return -1038180727;
			}
			break;
		
		case 43:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return -459199009;
				}
				else if (iParam1 == 1)
				{
					return 1391004277;
				}
			}
			else if (iParam1 == 0)
			{
				return -459199009;
			}
			else if (iParam1 == 1)
			{
				return 1391004277;
			}
			break;
		
		case 44:
			if (network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return -288764223;
				}
			}
			else if (iParam1 == 0)
			{
				return -288764223;
			}
			break;
		
		case 28:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 1071759151;
				}
				else if (iParam1 == 1)
				{
					return -2119023917;
				}
			}
			break;
		
		case 29:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return -1488490473;
				}
				else if (iParam1 == 1)
				{
					return -511187813;
				}
			}
			break;
		
		case 30:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return -248569395;
				}
				else if (iParam1 == 1)
				{
					return 989443413;
				}
			}
			break;
		
		case 31:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 2022251829;
				}
				else if (iParam1 == 1)
				{
					return 649820567;
				}
			}
			break;
		
		case 32:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 537455378;
				}
				else if (iParam1 == 1)
				{
					return 1121431731;
				}
			}
			break;
		
		case 33:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return -1437380438;
				}
				else if (iParam1 == 1)
				{
					return -946336965;
				}
			}
			break;
		
		case 34:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 1893144650;
				}
				else if (iParam1 == 1)
				{
					return 435841678;
				}
			}
			break;
		
		case 35:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return 948508314;
				}
				else if (iParam1 == 1)
				{
					return -1796714665;
				}
			}
			break;
		
		case 36:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return -1155247245;
				}
				else if (iParam1 == 1)
				{
					return 782482084;
				}
			}
			break;
		
		case 37:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return -1194470801;
				}
				else if (iParam1 == 1)
				{
					return -2129698061;
				}
			}
			break;
		
		case 38:
			if (!network_is_game_in_progress())
			{
				if (iParam1 == 0)
				{
					return -675817295;
				}
				else if (iParam1 == 1)
				{
					return 2121442868;
				}
			}
			break;
	}
	return 0;
}

void func_9(var uParam0)
{
	func_851(uParam0, 1);
	func_10(uParam0);
}

void func_10(var uParam0)
{
	func_14(uParam0.f_105);
	func_13(uParam0);
	func_12(uParam0.f_260);
	func_11(uParam0.f_172);
	*uParam0.f_256 = 0;
	*uParam0.f_430.f_1 = 0;
	*uParam0.f_430.f_2 = {0f, 0f, 0f};
	*uParam0.f_430.f_10 = {0f, 0f, 0f};
	*uParam0.f_430.f_5 = 0f;
	*uParam0.f_430.f_13 = 0f;
	*uParam0.f_430.f_14 = 0;
}

void func_11(var uParam0)
{
	*uParam0.f_1 = {0f, 0f, 0f};
	StringCopy(uParam0.f_7, "", 16);
	*uParam0.f_31 = {0f, 0f, 0f};
	*uParam0.f_34 = 0f;
	*uParam0.f_35 = {0f, 0f, 0f};
	*uParam0.f_38 = 0f;
	*uParam0.f_39 = {0f, 0f, 0f};
	*uParam0.f_42 = {0f, 0f, 0f};
	*uParam0.f_45 = {0f, 0f, 0f};
}

void func_12(var uParam0)
{
	*uParam0 = -1;
	*uParam0.f_1 = -1;
	*uParam0.f_2 = 0;
	*uParam0.f_4 = 0;
}

void func_13(var uParam0)
{
	int iVar0;
	
	*uParam0 = -1;
	*uParam0.f_2 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_7 = 0;
	*uParam0.f_8 = 0;
	*uParam0.f_98 = 0;
	*uParam0.f_9 = 0;
	*uParam0.f_11 = 0;
	*uParam0.f_87 = 0;
	*uParam0.f_12.f_1 = 0;
	*uParam0.f_12.f_2 = {0f, 0f, 0f};
	*uParam0.f_12.f_5 = 0f;
	*uParam0.f_12.f_6 = {0f, 0f, 0f};
	*uParam0.f_12.f_9 = 0f;
	*uParam0.f_12.f_10 = {0f, 0f, 0f};
	*uParam0.f_12.f_13 = 0f;
	*uParam0.f_12.f_17 = 0;
	*uParam0.f_12.f_14 = 0;
	*uParam0.f_30.f_2 = {0f, 0f, 0f};
	*uParam0.f_30.f_5 = 0f;
	*uParam0.f_30.f_6 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		*(uParam0.f_38[iVar0 /*12*/]).f_11 = 0;
		*uParam0.f_38[iVar0 /*12*/] = 0;
		iVar0++;
	}
}

void func_14(var uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_8 = 0;
	*uParam0.f_9 = 0;
	*uParam0.f_10 = 0;
	StringCopy(uParam0.f_11, "", 16);
	*uParam0.f_30 = 0;
	*uParam0.f_15 = 0;
	*uParam0.f_16 = 0;
	*uParam0.f_17 = 0;
	*uParam0.f_18 = 0;
	*uParam0.f_19 = 0;
	*uParam0.f_20 = 0;
	*uParam0.f_21 = 0;
	*uParam0.f_22 = 0;
	*uParam0.f_23 = 0;
	*uParam0.f_31 = 0;
}

bool func_15(var uParam0)
{
	if (*uParam0.f_9)
	{
		if (func_16(*uParam0, 10, 1))
		{
			return true;
		}
		if (*uParam0.f_1 == 1)
		{
			if (func_16(*uParam0, 19, 1))
			{
				return true;
			}
		}
		if (!Global_91330.f_15)
		{
			return true;
		}
		if (Global_69489)
		{
			if (Global_1312488.f_4)
			{
				return true;
			}
		}
		else if (*uParam0.f_9 && *uParam0.f_11 != 0)
		{
			if (!is_ped_injured(player_ped_id()))
			{
				if (is_entity_in_angled_area(player_ped_id(), 82.34222f, -1310.278f, 25.77012f, 142.8917f, -1274.154f, 46.51249f, 62f, 0, true, 0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_16(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return is_bit_set(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_21() == 0)
		{
			return is_bit_set(func_17(func_20(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return is_bit_set(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

int func_17(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_18(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_18(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

var func_19()
{
	return Global_1312747;
}

int func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 820;
			break;
		
		case 1:
			return 821;
			break;
		
		case 2:
			return 822;
			break;
		
		case 3:
			return 823;
			break;
		
		case 4:
			return 824;
			break;
		
		case 5:
			return 825;
			break;
		
		case 6:
			return 826;
			break;
		
		case 7:
			return 827;
			break;
		
		case 8:
			return 828;
			break;
		
		case 9:
			return 829;
			break;
		
		case 10:
			return 830;
			break;
		
		case 11:
			return 831;
			break;
		
		case 12:
			return 832;
			break;
		
		case 13:
			return 833;
			break;
		
		case 14:
			return 834;
			break;
		
		case 15:
			return 836;
			break;
		
		case 16:
			return 837;
			break;
		
		case 17:
			return 838;
			break;
		
		case 18:
			return 839;
			break;
		
		case 19:
			return 840;
			break;
		
		case 20:
			return 841;
			break;
		
		case 21:
			return 842;
			break;
		
		case 22:
			return 843;
			break;
		
		case 23:
			return 844;
			break;
		
		case 24:
			return 845;
			break;
		
		case 25:
			return 846;
			break;
		
		case 26:
			return 847;
			break;
		
		case 27:
			return 848;
			break;
		
		case 28:
			return 849;
			break;
		
		case 29:
			return 850;
			break;
		
		case 30:
			return 851;
			break;
		
		case 31:
			return 852;
			break;
		
		case 32:
			return 853;
			break;
		
		case 33:
			return 854;
			break;
		
		case 34:
			return 855;
			break;
		
		case 35:
			return 856;
			break;
		
		case 36:
			return 857;
			break;
		
		case 37:
			return 858;
			break;
		
		case 38:
			return 859;
			break;
		
		case 39:
			return 860;
			break;
		
		case 40:
			return 864;
			break;
		
		case 41:
			return 865;
			break;
		
		case 42:
			return 866;
			break;
		
		case 43:
			return 867;
			break;
		
		case 44:
			return 3852;
			break;
		
		default:
			break;
	}
	return 3949;
}

var func_21()
{
	return Global_25120;
}

void func_22(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;
	struct<10> Var12;
	var uVar24;
	var uVar25;
	struct<11> Var29;
	int iVar41;
	char* sVar42;
	var uVar58;
	float fVar62;
	struct<2> Var63;
	char[16] cVar75;
	float fVar79;
	float fVar80;
	var uVar81;
	int iVar82;
	int iVar83;
	
	func_686(1);
	func_685(1);
	if (func_684(1))
	{
		if (func_6(player_id(), 0, 1))
		{
			func_683();
			func_682();
		}
		else if (!func_681())
		{
			func_682();
		}
		return;
	}
	func_664(uParam0, uParam0.f_105);
	func_661(0, 1, 1);
	func_657();
	fVar3 = 0f;
	if (!is_ped_injured(*uParam0.f_12))
	{
		if (is_entity_playing_anim(*uParam0.f_12, *uParam0.f_457, "keeper_idle_a", 3))
		{
			fVar1 = 0.29f;
			fVar2 = 0.474f;
		}
		else if (is_entity_playing_anim(*uParam0.f_12, *uParam0.f_457, "keeper_idle_b", 3))
		{
			fVar1 = 0.33f;
			fVar2 = 0.59f;
		}
		else
		{
			fVar1 = 0.3f;
			fVar2 = 0.5f;
		}
	}
	switch (*uParam0.f_105.f_31)
	{
		case 0:
			*uParam0.f_474.f_19 = 0;
			*uParam0.f_474.f_18 = 0;
			func_656(player_id(), *uParam0.f_494);
			if (func_655(1))
			{
				if ((((((((func_720(uParam0) && func_654(uParam0)) && func_653("HAR_MNU", *uParam0, 1)) && func_651(uParam0)) && func_650(*uParam0)) && func_649(uParam0, 1)) && func_648(player_id(), *uParam0.f_494, 1)) && func_686(1)) && func_685(1))
				{
					func_646(1);
					if (!Global_69489)
					{
						iVar4 = player_ped_id();
						if (does_entity_exist(*uParam0.f_610.f_2) && !is_ped_injured(*uParam0.f_610.f_2))
						{
							iVar4 = *uParam0.f_610.f_2;
						}
						iVar4 = iVar4;
					}
					if (network_is_game_in_progress() && !is_ped_injured(*uParam0.f_12))
					{
						set_entity_invincible(*uParam0.f_12, true);
						set_ped_can_ragdoll(*uParam0.f_12, 0);
						set_ped_relationship_group_hash(*uParam0.f_12, Global_1574234);
					}
					func_639(uParam0.f_105);
					clear_ped_tasks(player_ped_id());
					*uParam0.f_463 = 0;
					*uParam0.f_464 = 0;
					*uParam0.f_465 = 0;
					*uParam0.f_471 = 0;
					*uParam0.f_559 = 0;
					*uParam0.f_560 = 1;
					*uParam0.f_564 = 0;
					*uParam0.f_565 = 0;
					*uParam0.f_256 = -1;
					*uParam0.f_257 = -1;
					*uParam0.f_581 = -1;
					*uParam0.f_259 = 1f;
					*uParam0.f_105.f_19 = 1;
					*uParam0.f_105.f_18 = 0;
					*uParam0.f_105.f_15 = 0;
					*uParam0.f_105.f_23 = 0;
					*uParam0.f_105.f_22 = 0;
					StringCopy(uParam0.f_105.f_11, "", 16);
					*uParam0.f_105.f_5 = 0;
					*uParam0.f_693 = 0;
					*uParam0.f_496 = 0;
					*uParam0.f_105.f_31 = 1;
					*uParam0.f_470 = 0;
				}
				else if ((network_is_game_in_progress() && absi(get_time_difference(get_network_time(), *uParam0.f_691)) > 8000) || (!network_is_game_in_progress() && get_game_timer() - *uParam0.f_692 > 8000))
				{
					*uParam0.f_105.f_31 = 8;
				}
			}
			break;
		
		case 1:
			func_630(uParam0);
			break;
		
		case 6:
			func_629(uParam0);
			break;
		
		case 5:
			if (!network_is_game_in_progress())
			{
				if (_0x784002A632822099(player_ped_id()) && _0x66680A92700F43DF(player_ped_id()))
				{
					func_628(uParam0);
				}
			}
			else
			{
				func_628(uParam0);
			}
			break;
		
		case 2:
			func_627();
			if (_is_input_disabled(2))
			{
				iLocal_94 = 209;
			}
			else
			{
				iLocal_94 = 207;
			}
			iVar5 = player_ped_id();
			if (does_entity_exist(*uParam0.f_610.f_2) && !is_ped_injured(*uParam0.f_610.f_2))
			{
				iVar5 = *uParam0.f_610.f_2;
			}
			if (!network_is_game_in_progress())
			{
				set_ped_config_flag(iVar5, 240, true);
			}
			if ((func_655(1) && !is_ped_injured(iVar5)) && !is_ped_injured(*uParam0.f_12))
			{
				if (network_is_game_in_progress())
				{
					if (network_player_has_headset(player_id()))
					{
						if (network_is_player_talking(player_id()))
						{
							set_ped_reset_flag(iVar5, 302, true);
						}
					}
				}
				if (!*uParam0.f_105.f_22 && *uParam0.f_105.f_15)
				{
					if ((network_is_game_in_progress() && func_626()) && func_621(uParam0))
					{
					}
					else if (!func_620(uParam0, *uParam0.f_459))
					{
						func_850(*uParam0, &vVar6, &vVar9);
						if (func_619(uParam0))
						{
							*uParam0.f_460 = func_618(uParam0);
						}
						else
						{
							*uParam0.f_460 = "player_base";
						}
						task_play_anim_advanced(iVar5, *uParam0.f_457, *uParam0.f_460, vVar6, vVar9, 8f, -8f, -1, 5641, 0f, 2, 1);
						_0x2208438012482A1A(iVar5, 0, 0);
						*uParam0.f_459 = func_617(uParam0);
						if (network_is_game_in_progress())
						{
							task_play_anim_advanced(*uParam0.f_12, *uParam0.f_457, *uParam0.f_459, vVar6, vVar9, 1000f, -1000f, -1, 5640, 0f, 2, 1);
							_0x2208438012482A1A(*uParam0.f_12, 0, 0);
							play_entity_anim(net_to_ent(Local_57.f_1), func_616(*uParam0.f_459), *uParam0.f_457, 1000f, false, 1, 1, 0f, 0);
							force_entity_ai_and_animation_update(net_to_ent(Local_57.f_1));
							func_615(uParam0);
							func_614(uParam0, 1, 0);
							func_613(uParam0, *uParam0.f_12, *uParam0.f_459, 69, 4f, -998637568);
							func_613(uParam0, player_ped_id(), *uParam0.f_460, 64, 4f, -998637568);
							func_612(uParam0, net_to_ent(Local_57.f_1), func_616(*uParam0.f_459), 64, 1148846080, -998637568);
							func_611(uParam0);
							if (func_685(1))
							{
								if ((((((*uParam0.f_496 == 3 || *uParam0.f_496 == 8) || *uParam0.f_496 == 10) || *uParam0.f_496 == 11) || *uParam0.f_496 == 13) || *uParam0.f_496 == 14) || *uParam0.f_496 == 15)
								{
									set_entity_visible(net_to_ent(Local_57.f_1), false, 0);
								}
								else
								{
									set_entity_visible(net_to_ent(Local_57.f_1), true, 0);
								}
							}
						}
						else
						{
							func_610(uParam0, *uParam0.f_459, 0, 0, 1, -1056964608);
						}
						func_608(uParam0, func_609(uParam0, 3, *uParam0.f_459));
						if (does_cam_exist(*uParam0.f_38[1 /*12*/]))
						{
							set_cam_active(*uParam0.f_38[1 /*12*/], false);
							destroy_cam(*uParam0.f_38[1 /*12*/], 0);
						}
					}
					else
					{
						show_hud_component_this_frame(3);
						show_hud_component_this_frame(4);
						show_hud_component_this_frame(5);
						show_hud_component_this_frame(13);
						if (func_607(uParam0.f_500, uParam0.f_502) == 1f)
						{
							*uParam0.f_105.f_15 = 0;
							*uParam0.f_105.f_23 = 0;
							*uParam0.f_105.f_22 = 0;
							*uParam0.f_459 = "";
							*uParam0.f_560 = 1;
							*uParam0.f_561 = 1;
							if (func_606() || func_605())
							{
								if (*uParam0.f_496 == 1)
								{
									*uParam0.f_496 = 0;
									*uParam0.f_105.f_1 = 0;
								}
								else if (*uParam0.f_496 == 2)
								{
									*uParam0.f_496 = 0;
									*uParam0.f_105.f_1 = 1;
								}
								else if (*uParam0.f_496 == 3)
								{
									*uParam0.f_496 = 3;
									if (func_606())
									{
										*uParam0.f_105.f_1 = 2;
									}
									else
									{
										*uParam0.f_105.f_1 = 1;
									}
								}
								else if (func_604(*uParam0.f_496))
								{
								}
							}
							func_595(uParam0, iVar5);
							if (network_is_game_in_progress())
							{
								func_615(uParam0);
								func_614(uParam0, 0, 1);
								func_613(uParam0, *uParam0.f_12, "keeper_base", 69, 1148846080, -998637568);
								func_612(uParam0, net_to_ent(Local_57.f_1), func_616("keeper_base"), 64, 1148846080, -998637568);
								func_611(uParam0);
							}
							else
							{
								func_610(uParam0, "keeper_base", 0, 1, 0, -1056964608);
							}
							func_586(uParam0, 0);
						}
						else if (func_607(uParam0.f_500, uParam0.f_502) > 0.6f)
						{
							if (!*uParam0.f_105.f_23)
							{
								func_551(uParam0);
							}
						}
						else if (func_607(uParam0.f_500, uParam0.f_502) > fVar2)
						{
							if (*uParam0.f_526 != 0)
							{
								stop_particle_fx_looped(*uParam0.f_526, 0);
								*uParam0.f_526 = 0;
							}
							if (*uParam0.f_470)
							{
								*uParam0.f_460 = func_618(uParam0);
								func_850(*uParam0, &vVar6, &vVar9);
								if (network_is_game_in_progress())
								{
									*uParam0.f_501 = network_create_synchronised_scene(vVar6, vVar9, 2, false, true, 1f, 0f, 1f);
									network_add_ped_to_synchronised_scene(player_ped_id(), *uParam0.f_501, *uParam0.f_457, *uParam0.f_460, 8f, -8f, 0, 0, 1000f, 0);
									network_start_synchronised_scene(*uParam0.f_501);
								}
								else
								{
									open_sequence_task(&iVar0);
									task_play_anim_advanced(false, *uParam0.f_457, *uParam0.f_460, vVar6, vVar9, 8f, -8f, -1, 5640, 0f, 2, 1);
									task_play_anim_advanced(false, *uParam0.f_457, "player_base", vVar6, vVar9, 8f, -8f, -1, 5641, 0f, 2, 1);
									close_sequence_task(iVar0);
									task_perform_sequence(iVar5, iVar0);
									clear_sequence_task(&iVar0);
								}
								stop_sound(*uParam0.f_527);
								stop_sound(*uParam0.f_528);
								stop_sound(*uParam0.f_529);
								*uParam0.f_470 = 0;
							}
						}
						else if (func_607(uParam0.f_500, uParam0.f_502) > 0.4f)
						{
							if (!*uParam0.f_105.f_23)
							{
								func_551(uParam0);
							}
							if (*uParam0.f_496 == 1)
							{
								Stack.Push(player_ped_id());
								Stack.Push(Global_2560058.f_111[*uParam0.f_105.f_1]);
								Stack.Push(Global_2560058[*uParam0.f_105.f_1]);
								Call_Loc(*uParam0.f_448);
								if (!StackVal)
								{
									Stack.Push(player_ped_id());
									Stack.Push(Global_2560058.f_111[*uParam0.f_105.f_1]);
									Stack.Push(Global_2560058[*uParam0.f_105.f_1]);
									Stack.Push(0);
									Stack.Push(-1);
									Stack.Push(0);
									Stack.Push(0);
									Stack.Push(0);
									Stack.Push(-1);
									Stack.Push(-1);
									Stack.Push(-1);
									Stack.Push(0);
									Call_Loc(*uParam0.f_450);
									if (Global_69489)
									{
										func_550(385, Global_2560058[*uParam0.f_105.f_1], -1, 1);
										func_535(8);
										func_534(745, Global_2560058[*uParam0.f_105.f_1], -1, 1);
										func_534(2043, Global_2560058[*uParam0.f_105.f_1], -1, 1);
									}
								}
								if (player_ped_id() != iVar5)
								{
									Stack.Push(iVar5);
									Stack.Push(Global_2560058.f_111[*uParam0.f_105.f_1]);
									Stack.Push(Global_2560058[*uParam0.f_105.f_1]);
									Stack.Push(0);
									Stack.Push(-1);
									Stack.Push(0);
									Stack.Push(0);
									Stack.Push(0);
									Stack.Push(-1);
									Stack.Push(-1);
									Stack.Push(-1);
									Stack.Push(0);
									Call_Loc(*uParam0.f_450);
								}
							}
							else if (*uParam0.f_496 == 2)
							{
								if (network_is_game_in_progress())
								{
									func_531(player_ped_id(), 1, func_532(*uParam0.f_105.f_1) - 1, *uParam0.f_604, 0, 0, *uParam0.f_259, 1);
									if (player_ped_id() != iVar5)
									{
										func_531(iVar5, 1, func_532(*uParam0.f_105.f_1) - 1, *uParam0.f_604, 0, 0, *uParam0.f_259, 1);
									}
									func_535(8);
									func_550(448, func_532(*uParam0.f_105.f_1) - 1, -1, 1);
									func_529(88, 1f, -1, 1);
									*uParam0.f_257 = func_532(*uParam0.f_105.f_1);
									*uParam0.f_259 = 1f;
								}
								else
								{
									Stack.Push(player_ped_id());
									Stack.Push(Global_2560058.f_111[*uParam0.f_105.f_1]);
									Stack.Push(Global_2560058[*uParam0.f_105.f_1]);
									Call_Loc(*uParam0.f_448);
									if (!StackVal)
									{
										Stack.Push(player_ped_id());
										Stack.Push(Global_2560058.f_111[*uParam0.f_105.f_1]);
										Stack.Push(Global_2560058[*uParam0.f_105.f_1]);
										Stack.Push(0);
										Stack.Push(-1);
										Stack.Push(0);
										Stack.Push(0);
										Stack.Push(0);
										Stack.Push(-1);
										Stack.Push(-1);
										Stack.Push(-1);
										Stack.Push(0);
										Call_Loc(*uParam0.f_450);
										*uParam0.f_257 = Global_2560058[*uParam0.f_105.f_1];
									}
									if (player_ped_id() != iVar5)
									{
										Stack.Push(iVar5);
										Stack.Push(Global_2560058.f_111[*uParam0.f_105.f_1]);
										Stack.Push(Global_2560058[*uParam0.f_105.f_1]);
										Stack.Push(0);
										Stack.Push(-1);
										Stack.Push(0);
										Stack.Push(0);
										Stack.Push(0);
										Stack.Push(-1);
										Stack.Push(-1);
										Stack.Push(-1);
										Stack.Push(0);
										Call_Loc(*uParam0.f_450);
									}
								}
							}
							else if (*uParam0.f_496 == 3)
							{
								if (Global_69489)
								{
									*uParam0.f_581 = *uParam0.f_105.f_1;
									func_531(player_ped_id(), 4, *uParam0.f_581 - 1, *uParam0.f_604, 0, 0, 1f, 1);
									func_550(451, *uParam0.f_581 - 1, -1, 1);
									func_529(91, 1f, -1, 1);
									if (*uParam0.f_581 - 1 == -1 || *uParam0.f_581 - 1 > 15)
									{
										func_531(player_ped_id(), 2, func_526(449, func_19(), -1), *uParam0.f_604, 0, 0, 1f, 1);
										func_529(89, 1f, -1, 1);
									}
									else
									{
										func_531(player_ped_id(), 2, func_526(449, func_19(), -1), *uParam0.f_604, 0, 0, 0f, 1);
										func_529(89, 0f, -1, 1);
									}
									func_529(func_525(4), 1f, -1, 1);
									func_535(8);
									if (player_ped_id() != iVar5)
									{
										func_531(iVar5, 4, *uParam0.f_581 - 1, *uParam0.f_604, 0, 0, 1f, 1);
										if (*uParam0.f_581 - 1 == -1 || *uParam0.f_581 - 1 > 15)
										{
											func_531(iVar5, 2, func_526(449, func_19(), -1), *uParam0.f_604, 0, 0, 1f, 1);
										}
										else
										{
											func_531(iVar5, 2, func_526(449, func_19(), -1), *uParam0.f_604, 0, 0, 0f, 1);
										}
									}
								}
							}
							else if (func_604(*uParam0.f_496))
							{
								if (func_521(get_entity_model(player_ped_id()), *uParam0.f_496, *uParam0.f_105.f_1, &Var12))
								{
									if (Var12.f_9 == 0)
									{
										if (!func_520(get_entity_model(player_ped_id()), &Var12, uParam0))
										{
											Stack.Push(player_ped_id());
											Stack.Push(2);
											Stack.Push(Var12.f_8);
											Stack.Push(0);
											Stack.Push(-1);
											Stack.Push(0);
											Stack.Push(0);
											Stack.Push(0);
											Stack.Push(*uParam0.f_604);
											Stack.Push(*uParam0.f_605);
											Stack.Push(-1);
											Stack.Push(0);
											Call_Loc(*uParam0.f_450);
											if (Global_69489)
											{
												func_550(385, Var12.f_8, -1, 1);
												func_535(8);
												func_534(745, Var12.f_8, -1, 1);
												func_534(2043, Var12.f_8, -1, 1);
												func_534(2143, *uParam0.f_604, -1, 1);
												func_534(2150, *uParam0.f_605, -1, 1);
											}
										}
										if (player_ped_id() != iVar5)
										{
											Stack.Push(iVar5);
											Stack.Push(2);
											Stack.Push(Var12.f_8);
											Stack.Push(0);
											Stack.Push(-1);
											Stack.Push(0);
											Stack.Push(0);
											Stack.Push(0);
											Stack.Push(*uParam0.f_604);
											Stack.Push(*uParam0.f_605);
											Stack.Push(-1);
											Stack.Push(0);
											Call_Loc(*uParam0.f_450);
										}
									}
									else if (Var12.f_9 == 1 || Var12.f_9 == 2)
									{
										func_531(player_ped_id(), Var12.f_5, Var12.f_6, *uParam0.f_604, *uParam0.f_605, *uParam0.f_607, *uParam0.f_609, 1);
										if (Global_69489)
										{
											if (Var12.f_5 == 7)
											{
												func_529(157, to_float(Var12.f_6), -1, 1);
												*uParam0.f_604 = -1;
												*uParam0.f_605 = -1;
												*uParam0.f_606 = *uParam0.f_605;
											}
											else
											{
												func_550(func_519(Var12.f_5), Var12.f_6, -1, 1);
												if (*uParam0.f_604 >= 0)
												{
													func_517(Var12.f_5, *uParam0.f_604, *uParam0.f_607, -1, 1);
												}
												if (*uParam0.f_605 >= 0)
												{
													func_534(func_516(Var12.f_5), *uParam0.f_605, -1, 1);
												}
												func_529(func_525(Var12.f_5), *uParam0.f_609, -1, 1);
											}
										}
										if (player_ped_id() != iVar5)
										{
											func_531(iVar5, Var12.f_5, Var12.f_6, *uParam0.f_604, *uParam0.f_605, *uParam0.f_607, *uParam0.f_609, 1);
										}
									}
								}
							}
						}
						else if (func_607(uParam0.f_500, uParam0.f_502) > fVar1)
						{
							if (*uParam0.f_467 && *uParam0.f_526 == 0)
							{
								if (*uParam0.f_496 == 1)
								{
									*uParam0.f_526 = start_particle_fx_looped_on_ped_bone("scr_barbers_haircut", iVar5, 0f, 0f, 0.1f, 0f, 0f, 0f, 31086, 1f, 0, 0, 0);
								}
							}
							if (does_particle_fx_looped_exist(*uParam0.f_526))
							{
								set_particle_fx_looped_colour(*uParam0.f_526, 0f, 0f, 0f, 0);
							}
							if (!*uParam0.f_470)
							{
								if (*uParam0.f_496 == 1 || *uParam0.f_496 == 6)
								{
									if (has_sound_finished(*uParam0.f_527))
									{
										play_sound_from_entity(*uParam0.f_527, "Scissors", iVar5, "Barber_Sounds", 0, 0);
									}
								}
								else if (((*uParam0.f_496 == 2 || *uParam0.f_496 == 7) || *uParam0.f_496 == 9) || *uParam0.f_496 == 8)
								{
									if (has_sound_finished(*uParam0.f_528))
									{
										play_sound_from_entity(*uParam0.f_527, "Scissors", iVar5, "Barber_Sounds", 0, 0);
									}
								}
								else if (*uParam0.f_496 == 10)
								{
								}
								else if (has_sound_finished(*uParam0.f_529))
								{
									play_sound_from_entity(*uParam0.f_529, "Makeup", iVar5, "Barber_Sounds", 0, 0);
								}
								*uParam0.f_470 = 1;
							}
						}
					}
				}
				if (*uParam0.f_560)
				{
					func_511(iVar5);
					func_595(uParam0, iVar5);
				}
				if (!*uParam0.f_105.f_22 && !*uParam0.f_105.f_15)
				{
					if (_0x6CD79468A1E595C6(2))
					{
						uVar24 = *uParam0.f_105.f_1;
						*uParam0.f_560 = 1;
						func_511(iVar5);
						func_595(uParam0, iVar5);
						*uParam0.f_105.f_1 = uVar24;
						func_510(*uParam0.f_105.f_1, 1, 1);
						*uParam0.f_693 = func_509();
					}
					else if ((((!is_pause_menu_active() && !is_system_ui_being_displayed()) && !is_warning_message_active()) && !Global_91330.f_1352) && !_network_is_text_chat_active())
					{
						func_586(uParam0, 1);
						switch (*uParam0.f_496)
						{
							case 0:
								func_508(uParam0, iVar5);
								break;
							
							case 4:
								func_507(uParam0, iVar5);
								break;
							
							case 1:
								func_492(uParam0, iVar5);
								break;
							
							case 2:
								if (network_is_game_in_progress())
								{
									func_453(uParam0, iVar5);
								}
								else
								{
									func_492(uParam0, iVar5);
								}
								break;
							
							case 3:
								func_450(uParam0, iVar5);
								break;
							
							default:
								if (func_604(*uParam0.f_496))
								{
									func_266(uParam0, iVar5);
								}
								break;
							}
						}
				}
				if (*uParam0.f_463)
				{
					if (*uParam0.f_105.f_1 >= 0)
					{
						if (network_is_game_in_progress())
						{
							func_265(&uVar25);
							if (get_hash_key(&uVar25) == 0)
							{
								if (*uParam0.f_496 == 1)
								{
									func_264("HAIR_UNLOCK", 0, 0);
									func_260(func_261(Global_2560058[*uParam0.f_105.f_1]));
								}
								else if (*uParam0.f_496 == 2)
								{
									func_264("HAIR_UNLOCK", 0, 0);
									func_260(func_258(func_259(func_532(*uParam0.f_105.f_1))));
								}
								else if (*uParam0.f_496 == 3)
								{
									func_264("HAIR_UNLOCK", 0, 0);
									func_260(func_258(func_257(*uParam0.f_105.f_1)));
								}
								else if (func_604(*uParam0.f_496))
								{
									if (func_521(get_entity_model(player_ped_id()), *uParam0.f_496, *uParam0.f_105.f_1, &Var29))
									{
										iVar41 = true;
										if ((network_is_game_in_progress() && func_626()) && !is_string_null_or_empty(&(Var29.f_1)))
										{
											func_255(&sVar42, *uParam0.f_496, Var29.f_1, 0);
											if (!_0xBD4D7EAF8A30F637(&sVar42))
											{
												iVar41 = false;
											}
										}
										if (iVar41)
										{
											if (Var29.f_9 == 0)
											{
												if (Var29.f_8 == -99)
												{
													iVar41 = false;
												}
												else if (func_261(Var29.f_8) == 0)
												{
													iVar41 = false;
												}
											}
											else if (Var29.f_9 == 1 || Var29.f_9 == 2)
											{
												if (Var29.f_10 == -1)
												{
													iVar41 = false;
												}
												else if (func_258(Var29.f_10) == 0)
												{
													iVar41 = false;
												}
											}
										}
										if (!iVar41)
										{
											if (Var29.f_9 == 0)
											{
												func_264("HAIR_LCKPC", 0, 0);
											}
											else if (Var29.f_9 == 1 || Var29.f_9 == 2)
											{
												if (Var29.f_5 == 1)
												{
													func_264("HAIR_LCKPC", 0, 0);
												}
												else if (Var29.f_5 == 4)
												{
													func_264("HAIR_LCKPC", 0, 0);
												}
											}
										}
										else if (Var29.f_9 == 0)
										{
											func_264("HAIR_UNLOCK", 0, 0);
											func_260(func_261(Var29.f_8));
										}
										else if (Var29.f_9 == 1 || Var29.f_9 == 2)
										{
											if (Var29.f_5 == 1)
											{
												func_264("HAIR_UNLOCK", 0, 0);
												func_260(func_258(Var29.f_10));
											}
											else if (Var29.f_5 == 4)
											{
												func_264("HAIR_UNLOCK", 0, 0);
												func_260(func_258(Var29.f_10));
											}
										}
									}
								}
							}
						}
					}
				}
				else if (*uParam0.f_496 == 0)
				{
					if (*uParam0.f_105.f_1 >= 0)
					{
						if (network_is_game_in_progress())
						{
							func_265(&uVar25);
							if (get_hash_key(&uVar25) == 0)
							{
								if (*uParam0.f_105.f_1 == 0)
								{
									if (func_207(uParam0, get_entity_model(iVar5), 1))
									{
										func_264("HAIR_UNLOCK_M", 0, 0);
									}
								}
								else if (*uParam0.f_105.f_1 == 1)
								{
									if (func_207(uParam0, get_entity_model(iVar5), 2))
									{
										func_264("HAIR_UNLOCK_M", 0, 0);
									}
								}
								else if (*uParam0.f_105.f_1 == 2)
								{
									if (func_207(uParam0, get_entity_model(iVar5), 3))
									{
										func_264("HAIR_UNLOCK_M", 0, 0);
									}
								}
							}
						}
					}
				}
				else if (*uParam0.f_496 == 5)
				{
				}
				else if (*uParam0.f_496 == 4)
				{
					if (*uParam0.f_684 > -1)
					{
						if (network_is_game_in_progress())
						{
							func_265(&uVar25);
							if (get_hash_key(&uVar25) == 0)
							{
								if (is_bit_set(*uParam0.f_688[*uParam0.f_684 / 32], *uParam0.f_684 % 32))
								{
									func_264("HAIR_UNLOCK_M", 0, 0);
								}
							}
						}
					}
				}
				else if ((*uParam0.f_496 != 0 && *uParam0.f_464) && !*uParam0.f_471)
				{
					if (*uParam0.f_105.f_1 >= 0)
					{
						if (network_is_game_in_progress())
						{
							func_265(&uVar25);
							if (get_hash_key(&uVar25) == 0)
							{
								if (*uParam0.f_465)
								{
									if (func_206(uParam0.f_536))
									{
										func_264("SHOP_UNLOCKDLC", 4000, 0);
										func_204(func_205(uParam0.f_536, 0));
									}
									else if (func_203(uParam0.f_536))
									{
										func_264("SHOP_UNLOCKDLC3", 4000, 0);
										func_204(func_205(uParam0.f_536, 0));
									}
									else if (func_202(uParam0.f_536))
									{
										func_264("SHOP_UNLOCKDLC4", 4000, 0);
										func_204(func_205(uParam0.f_536, 0));
									}
									else if (func_201(uParam0.f_536))
									{
										func_264("SHOP_UNLOCKDLC6", 4000, 0);
										func_204(func_205(uParam0.f_536, 0));
									}
									else if (func_200(uParam0.f_536))
									{
										func_264("SHOP_UNLOCKDLC7", 4000, 0);
									}
									else
									{
										func_264("SHOP_UNLOCKDLC2", 4000, 0);
										func_204(func_205(uParam0.f_536, 1));
									}
								}
								else
								{
									func_264("HAIR_UNLOCK_N", 4000, 0);
								}
								*uParam0.f_471 = 1;
							}
						}
					}
				}
				if (!*uParam0.f_105.f_15 || *uParam0.f_105.f_22)
				{
					if (network_is_game_in_progress() && !iLocal_96)
					{
						_0xC2D15BEF167E27BC();
						set_multiplayer_bank_cash();
						iLocal_96 = 1;
					}
					if ((((*uParam0.f_496 == 1 || *uParam0.f_496 == 2) || *uParam0.f_496 == 3) || *uParam0.f_496 == 6) || *uParam0.f_496 == 11)
					{
						func_265(&uVar58);
						if (get_hash_key(&uVar58) == 0)
						{
							if (*uParam0.f_465 && !is_string_null_or_empty(func_205(uParam0.f_536, 0)))
							{
								if (func_206(uParam0.f_536))
								{
									func_264("SHOP_DLC_PACK", 0, 0);
									func_204(func_205(uParam0.f_536, 0));
								}
								else if (func_203(uParam0.f_536))
								{
									func_264("SHOP_DLC_PACK3", 0, 0);
									func_204(func_205(uParam0.f_536, 0));
								}
								else if (func_202(uParam0.f_536))
								{
									func_264("SHOP_DLC_PACK4", 0, 0);
									func_204(func_205(uParam0.f_536, 0));
								}
								else if (func_201(uParam0.f_536))
								{
									func_264("SHOP_DLC_PACK6", 0, 0);
									func_204(func_205(uParam0.f_536, 0));
								}
								else if (func_200(uParam0.f_536))
								{
									func_264("SHOP_DLC_PACK7", 0, 0);
								}
								else
								{
									func_264("SHOP_DLC_PACK2", 0, 0);
									func_204(func_205(uParam0.f_536, 1));
								}
							}
						}
					}
					show_hud_component_this_frame(3);
					show_hud_component_this_frame(4);
					show_hud_component_this_frame(5);
					show_hud_component_this_frame(13);
					func_178(1, *uParam0, 1, 0, 1, -1082130432, 0, 0);
					fVar3 = 0f;
					if (is_pc_version())
					{
						if (!func_177(uParam0))
						{
							fVar3 = 0.4f;
						}
						if (absf(_get_screen_aspect_ratio(0) - 1.6f) < 0.1f)
						{
							fVar62 = 0.013f;
						}
						else if (absf(_get_screen_aspect_ratio(0) - 1.777778f) < 0.1f)
						{
							fVar62 = 0f;
						}
						else if (absf(_get_screen_aspect_ratio(0) - 1.333333f) < 0.1f)
						{
							fVar62 = 0.038f;
						}
						else
						{
							fVar62 = 0f;
						}
					}
					_set_screen_draw_position(76, 84);
					_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
					draw_scaleform_movie(*uParam0.f_584, 0.113f + fVar62, 0.255f + func_176(), Global_17256, 0.5972f, 255, 255, 255, 255, 0);
					_0xE3A3DB414A373DAB();
					_set_screen_draw_position(76, 84);
					_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
					draw_scaleform_movie(*uParam0.f_594, 0.113f + fVar62 + fVar3, 0.255f + func_176(), Global_17256, 0.5972f, 255, 255, 255, 255, 0);
					_0xE3A3DB414A373DAB();
					if (((*uParam0.f_496 == 1 || *uParam0.f_496 == 2) || *uParam0.f_496 == 6) || *uParam0.f_496 == 11)
					{
						func_265(&uVar58);
						if (get_hash_key(&uVar58) == 0)
						{
							if (*uParam0.f_465 && !is_string_null_or_empty(func_205(uParam0.f_536, 0)))
							{
								if (func_206(uParam0.f_536))
								{
									func_264("SHOP_DLC_PACK", 0, 0);
									func_204(func_205(uParam0.f_536, 0));
								}
								else if (func_203(uParam0.f_536))
								{
									func_264("SHOP_DLC_PACK3", 0, 0);
									func_204(func_205(uParam0.f_536, 0));
								}
								else if (func_202(uParam0.f_536))
								{
									func_264("SHOP_DLC_PACK4", 0, 0);
									func_204(func_205(uParam0.f_536, 0));
								}
								else if (func_201(uParam0.f_536))
								{
									func_264("SHOP_DLC_PACK6", 0, 0);
									func_204(func_205(uParam0.f_536, 0));
								}
								else if (func_200(uParam0.f_536))
								{
									func_264("SHOP_DLC_PACK7", 0, 0);
								}
								else
								{
									func_264("SHOP_DLC_PACK2", 0, 0);
									func_204(func_205(uParam0.f_536, 1));
								}
							}
						}
					}
					if (func_521(get_entity_model(player_ped_id()), *uParam0.f_496, *uParam0.f_105.f_1, &Var63))
					{
						if (func_175(&(Var63.f_1), *uParam0.f_496, Var63))
						{
							StringCopy(&cVar75, "", 16);
							func_174(&cVar75);
							if (get_hash_key(&cVar75) == 0)
							{
								func_173("HAIR_SALE", 0, 0);
							}
						}
					}
					if (network_is_game_in_progress())
					{
						_0xC2D15BEF167E27BC();
						set_multiplayer_bank_cash();
						if (Global_262145.f_2449)
						{
							if (has_streamed_texture_dict_loaded("MPShops"))
							{
								if (func_167(29, 1, 1, &fVar79, &fVar80, 0))
								{
									_set_screen_draw_position(76, 84);
									_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
									draw_sprite("MPShops", "ShopUI_Title_Graphics_SALE", 0.112f, 0.045f, Global_17256, fVar80, 0f, 255, 255, 255, 255, 0);
									_0xE3A3DB414A373DAB();
								}
							}
						}
					}
				}
				else if (network_is_game_in_progress() && iLocal_96)
				{
					_0x95CF81BD06EE1887();
					remove_multiplayer_bank_cash();
					iLocal_96 = 0;
				}
			}
			break;
		
		case 7:
			set_ped_can_arm_ik(player_ped_id(), 1);
			set_ped_config_flag(player_ped_id(), 104, true);
			set_ped_reset_flag(player_ped_id(), 60, true);
			if (*uParam0.f_105.f_19)
			{
				if (network_is_game_in_progress())
				{
					func_114(uParam0);
				}
				else
				{
					_0xF79F9DEF0AADE61A(player_ped_id());
					_0x5AAB586FFEC0FD96(player_ped_id());
				}
				if (!is_ped_injured(*uParam0.f_12))
				{
					clear_ped_tasks(*uParam0.f_12);
					func_109(uParam0, 0);
					set_blocking_of_non_temporary_events(*uParam0.f_12, true);
				}
				if (network_is_game_in_progress())
				{
					func_108();
					func_615(uParam0);
				}
				func_106(1, *uParam0);
				func_104(uParam0);
				func_102(*uParam0);
				func_101(uParam0);
				func_100(1);
				*uParam0.f_474.f_19 = 0;
				if (network_is_game_in_progress())
				{
					if (!is_ped_injured(player_ped_id()))
					{
						if (!func_87(player_ped_id()))
						{
							Stack.Push(player_ped_id());
							Stack.Push(2);
							Stack.Push(-1);
							Call_Loc(*uParam0.f_449);
							uVar81 = StackVal;
							Stack.Push(player_ped_id());
							Stack.Push(2);
							Stack.Push(uVar81);
							Stack.Push(0);
							Stack.Push(-1);
							Stack.Push(0);
							Stack.Push(0);
							Stack.Push(0);
							Stack.Push(-1);
							Stack.Push(-1);
							Stack.Push(-1);
							Stack.Push(0);
							Call_Loc(*uParam0.f_450);
							if (network_is_game_in_progress())
							{
								iVar82 = func_86(2143, -1, 0);
								iVar83 = func_86(2150, -1, 0);
								_set_ped_hair_color(player_ped_id(), iVar82, iVar83);
							}
							func_511(player_ped_id());
						}
					}
				}
				if (network_is_game_in_progress())
				{
					_0x95CF81BD06EE1887();
					remove_multiplayer_bank_cash();
				}
				func_62(uParam0.f_105, 0, 0, 1);
				func_53();
				func_646(0);
				if (network_is_game_in_progress() && !is_ped_injured(player_ped_id()))
				{
					if (func_49(1) && func_47(player_id()))
					{
					}
					else
					{
						func_45(player_ped_id(), -1);
					}
				}
				if (func_648(player_id(), *uParam0.f_494, 1))
				{
					func_44(player_id(), *uParam0.f_494);
				}
				if (!Global_69489)
				{
					func_33(player_ped_id(), 1);
				}
				if (Global_2558643)
				{
					if (Global_69489)
					{
						func_29(32, func_30(1, 1));
					}
				}
				settimerb(0);
				*uParam0.f_105.f_9 = get_game_timer();
				*uParam0.f_105.f_19 = 0;
				*uParam0.f_105.f_18 = 1;
				*uParam0.f_105.f_23 = 0;
				*uParam0.f_105.f_22 = 0;
			}
			else if (*uParam0.f_105.f_18)
			{
				func_27(uParam0.f_220, 300);
				if (((((get_script_task_status(player_ped_id(), 2106541073) == 7 || *uParam0.f_220 < -75) || *uParam0.f_220 > 75) || *uParam0.f_220.f_1 < -75) || *uParam0.f_220.f_1 > 75) || is_position_occupied(get_offset_from_entity_in_world_coords(player_ped_id(), 0f, 1.5f, 0f), 0.2f, 0, 1, 1, 0, 0, player_ped_id(), 0))
				{
					func_53();
					clear_ped_tasks(player_ped_id());
					if ((network_is_game_in_progress() && !is_ped_injured(*uParam0.f_12)) && func_686(0))
					{
						set_entity_invincible(*uParam0.f_12, false);
						set_ped_can_ragdoll(*uParam0.f_12, 1);
						if (*uParam0.f_466)
						{
							set_ped_relationship_group_hash(*uParam0.f_12, *uParam0.f_495);
						}
					}
					if (*uParam0.f_472)
					{
						func_25();
					}
					*uParam0.f_562 = 0;
					*uParam0.f_105.f_17 = 0;
					*uParam0.f_472 = 0;
					*uParam0.f_11 = 5;
				}
			}
			else
			{
				if ((network_is_game_in_progress() && !is_ped_injured(*uParam0.f_12)) && func_686(0))
				{
					set_entity_invincible(*uParam0.f_12, false);
					set_ped_can_ragdoll(*uParam0.f_12, 1);
					if (*uParam0.f_466)
					{
						set_ped_relationship_group_hash(*uParam0.f_12, *uParam0.f_495);
					}
				}
				if (*uParam0.f_472)
				{
					func_25();
				}
				*uParam0.f_562 = 0;
				*uParam0.f_105.f_17 = 0;
				*uParam0.f_472 = 0;
				*uParam0.f_11 = 5;
			}
			break;
		
		case 8:
			if (network_is_game_in_progress())
			{
				_0x95CF81BD06EE1887();
				remove_multiplayer_bank_cash();
			}
			func_24(uParam0.f_38);
			render_script_cams(false, false, 3000, 1, 0, 0);
			func_106(1, *uParam0);
			func_104(uParam0);
			func_102(*uParam0);
			func_101(uParam0);
			*uParam0.f_474.f_19 = 0;
			func_114(uParam0);
			if (!is_ped_injured(player_ped_id()))
			{
				clear_ped_tasks_immediately(player_ped_id());
			}
			func_62(uParam0.f_105, 1, 1, 1);
			func_100(1);
			func_53();
			if (network_is_game_in_progress())
			{
				func_108();
				func_615(uParam0);
				if (network_does_entity_exist_with_network_id(Local_57.f_1))
				{
					set_entity_visible(net_to_ent(Local_57.f_1), false, 0);
					set_entity_collision(net_to_ent(Local_57.f_1), false, 0);
					freeze_entity_position(net_to_ent(Local_57.f_1), true);
				}
			}
			else
			{
				_0xF79F9DEF0AADE61A(player_ped_id());
				_0x5AAB586FFEC0FD96(player_ped_id());
			}
			if (!is_ped_injured(*uParam0.f_12))
			{
				clear_ped_tasks(*uParam0.f_12);
				func_109(uParam0, 0);
				set_blocking_of_non_temporary_events(*uParam0.f_12, true);
			}
			if (Global_2558643)
			{
				if (Global_69489)
				{
					func_29(32, func_30(1, 1));
				}
			}
			func_646(0);
			if (network_is_game_in_progress() && !is_ped_injured(player_ped_id()))
			{
				if (func_49(1) && func_47(player_id()))
				{
				}
				else
				{
					func_45(player_ped_id(), -1);
				}
			}
			if (func_648(player_id(), *uParam0.f_494, 1))
			{
				func_44(player_id(), *uParam0.f_494);
			}
			if (!Global_69489)
			{
				set_ped_config_flag(player_ped_id(), 240, false);
			}
			*uParam0.f_562 = 0;
			*uParam0.f_105.f_17 = 0;
			*uParam0.f_105.f_19 = 0;
			*uParam0.f_11 = 3;
			break;
	}
	if (network_is_game_in_progress())
	{
		if ((does_entity_exist(*uParam0.f_610.f_2) && !is_ped_injured(*uParam0.f_610.f_2)) && is_entity_visible_to_script(*uParam0.f_610.f_2))
		{
			set_local_player_invisible_locally(0);
		}
	}
	func_23(uParam0.f_474, 1);
}

void func_23(var uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[10];
	int iVar12;
	int iVar13;
	
	if (!is_ped_injured(player_ped_id()))
	{
		if (!*uParam0.f_18)
		{
			iVar12 = 0;
			iVar13 = 0;
			iVar12 = get_ped_nearby_peds(player_ped_id(), &uVar1, -1);
			iVar0 = 0;
			while (iVar0 < *uParam0)
			{
				*uParam0[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			iVar13 = 0;
			while (iVar13 < iVar12)
			{
				if (iVar0 < *uParam0)
				{
					if ((does_entity_exist(uVar1[iVar13]) && !is_ped_injured(uVar1[iVar13])) && !is_ped_in_any_vehicle(uVar1[iVar13], 0))
					{
						if (is_ped_group_member(uVar1[iVar13], get_player_group(player_id())))
						{
							*uParam0[iVar0] = uVar1[iVar13];
							*(uParam0.f_5[iVar0 /*3*/]) = {get_entity_coords(uVar1[iVar13], 1)};
							iVar0++;
						}
					}
				}
				iVar13++;
			}
			*uParam0.f_18 = 1;
		}
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if ((does_entity_exist(*uParam0[iVar0]) && !is_ped_injured(*uParam0[iVar0])) && !is_ped_in_any_vehicle(*uParam0[iVar0], 0))
			{
				if (*uParam0.f_19)
				{
					set_entity_visible(*uParam0[iVar0], false, 0);
					if (iParam1)
					{
						set_entity_collision(*uParam0[iVar0], false, 0);
						freeze_entity_position(*uParam0[iVar0], true);
						set_entity_coords_no_offset(*uParam0[iVar0], *(uParam0.f_5[iVar0 /*3*/]), 1, 1, 1);
					}
				}
				else if (!is_entity_visible(*uParam0[iVar0]))
				{
					set_entity_visible(*uParam0[iVar0], true, 0);
					if (iParam1)
					{
						set_entity_collision(*uParam0[iVar0], true, 0);
						freeze_entity_position(*uParam0[iVar0], false);
						set_entity_coords_no_offset(*uParam0[iVar0], *(uParam0.f_5[iVar0 /*3*/]), 1, 1, 1);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_24(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1)
	{
		if (does_cam_exist(*uParam0[iVar0 /*12*/]))
		{
			set_cam_active(*uParam0[iVar0 /*12*/], false);
		}
		iVar0++;
	}
}

void func_25()
{
	var uVar0;
	
	uVar0 = func_26(23);
	Global_2411218[uVar0 /*83*/] = 23;
	StringCopy(&(Global_2411218[uVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_26(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2411218[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2411218[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_27(var uParam0, int iParam1)
{
	float fVar0;
	
	func_28(uParam0, uParam0.f_1, uParam0.f_2, uParam0.f_3, 1);
	fVar0 = 1f;
	if (fVar0 == 1f)
	{
		if ((!*uParam0.f_4 || !*uParam0.f_9) || !*uParam0.f_8)
		{
			if (*uParam0.f_28 <= 0)
			{
				*uParam0.f_28 = get_game_timer();
				if (network_is_game_in_progress())
				{
					*uParam0.f_32 = get_network_time();
				}
			}
			if (*uParam0.f_28 > 0)
			{
				if ((network_is_game_in_progress() && is_time_more_than(get_network_time(), get_time_offset(*uParam0.f_32, iParam1 * 3))) || (!network_is_game_in_progress() && get_game_timer() - *uParam0.f_28 > iParam1 * 3))
				{
					fVar0 = 0.25f;
				}
			}
		}
		else
		{
			*uParam0.f_28 = 0;
		}
	}
	if (fVar0 == 1f)
	{
		if ((!*uParam0.f_5 || !*uParam0.f_10) || !*uParam0.f_11)
		{
			if (*uParam0.f_29 <= 0)
			{
				*uParam0.f_29 = get_game_timer();
				if (network_is_game_in_progress())
				{
					*uParam0.f_33 = get_network_time();
				}
			}
			if (*uParam0.f_29 > 0)
			{
				if ((network_is_game_in_progress() && is_time_more_than(get_network_time(), get_time_offset(*uParam0.f_33, iParam1 * 3))) || (!network_is_game_in_progress() && get_game_timer() - *uParam0.f_29 > iParam1 * 3))
				{
					fVar0 = 0.25f;
				}
			}
		}
		else
		{
			*uParam0.f_29 = 0;
		}
	}
	if (fVar0 == 1f)
	{
		if (!*uParam0.f_6)
		{
			if (*uParam0.f_30 <= 0)
			{
				*uParam0.f_30 = get_game_timer();
				if (network_is_game_in_progress())
				{
					*uParam0.f_34 = get_network_time();
				}
			}
			if (*uParam0.f_30 > 0)
			{
				if ((network_is_game_in_progress() && is_time_more_than(get_network_time(), get_time_offset(*uParam0.f_34, iParam1 * 3))) || (!network_is_game_in_progress() && get_game_timer() - *uParam0.f_30 > iParam1 * 3))
				{
					fVar0 = 0.25f;
				}
			}
		}
		else
		{
			*uParam0.f_30 = 0;
		}
	}
	if (fVar0 == 1f)
	{
		if (!*uParam0.f_7)
		{
			if (*uParam0.f_31 <= 0)
			{
				*uParam0.f_31 = get_game_timer();
				if (network_is_game_in_progress())
				{
					*uParam0.f_35 = get_network_time();
				}
			}
			if (*uParam0.f_31 > 0)
			{
				if ((network_is_game_in_progress() && is_time_more_than(get_network_time(), get_time_offset(*uParam0.f_35, iParam1 * 3))) || (!network_is_game_in_progress() && get_game_timer() - *uParam0.f_31 > iParam1 * 3))
				{
					fVar0 = 0.25f;
				}
			}
		}
		else
		{
			*uParam0.f_31 = 0;
		}
	}
	if (fVar0 == 1f)
	{
		if (((!*uParam0.f_12 || !*uParam0.f_13) || !*uParam0.f_14) || !*uParam0.f_15)
		{
			if (*uParam0.f_18 <= 0)
			{
				*uParam0.f_18 = get_game_timer();
				if (network_is_game_in_progress())
				{
					*uParam0.f_19 = get_network_time();
				}
			}
			if (*uParam0.f_18 > 0)
			{
				if ((network_is_game_in_progress() && is_time_more_than(get_network_time(), get_time_offset(*uParam0.f_19, iParam1 * 3))) || (!network_is_game_in_progress() && get_game_timer() - *uParam0.f_18 > iParam1 * 3))
				{
					fVar0 = 0.25f;
				}
			}
		}
		else
		{
			*uParam0.f_18 = 0;
		}
	}
	iParam1 = floor(to_float(iParam1) * fVar0);
	if (!*uParam0.f_4)
	{
		if (((network_is_game_in_progress() && is_time_more_than(get_network_time(), get_time_offset(*uParam0.f_24, iParam1))) || (!network_is_game_in_progress() && get_game_timer() - *uParam0.f_20 > iParam1)) || (*uParam0.f_1 < 75 && *uParam0.f_1 > -75))
		{
			*uParam0.f_4 = 1;
		}
	}
	if (!*uParam0.f_5)
	{
		if (((network_is_game_in_progress() && is_time_more_than(get_network_time(), get_time_offset(*uParam0.f_25, iParam1))) || (!network_is_game_in_progress() && get_game_timer() - *uParam0.f_21 > iParam1)) || (*uParam0 < 75 && *uParam0 > -75))
		{
			*uParam0.f_5 = 1;
		}
	}
	if (!*uParam0.f_6)
	{
		if (((network_is_game_in_progress() && is_time_more_than(get_network_time(), get_time_offset(*uParam0.f_26, iParam1))) || (!network_is_game_in_progress() && get_game_timer() - *uParam0.f_22 > iParam1)) || (*uParam0.f_3 < 75 && *uParam0.f_3 > -75))
		{
			*uParam0.f_6 = 1;
		}
	}
	if (!*uParam0.f_7)
	{
		if (((network_is_game_in_progress() && is_time_more_than(get_network_time(), get_time_offset(*uParam0.f_27, iParam1))) || (!network_is_game_in_progress() && get_game_timer() - *uParam0.f_23 > iParam1)) || (*uParam0.f_2 < 75 && *uParam0.f_2 > -75))
		{
			*uParam0.f_7 = 1;
		}
	}
	if (!*uParam0.f_8)
	{
		if ((network_is_game_in_progress() && is_time_more_than(get_network_time(), get_time_offset(*uParam0.f_24, iParam1))) || (!network_is_game_in_progress() && get_game_timer() - *uParam0.f_20 > iParam1))
		{
			*uParam0.f_8 = 1;
		}
	}
	if (!*uParam0.f_9)
	{
		if ((network_is_game_in_progress() && is_time_more_than(get_network_time(), get_time_offset(*uParam0.f_24, iParam1))) || (!network_is_game_in_progress() && get_game_timer() - *uParam0.f_20 > iParam1))
		{
			*uParam0.f_9 = 1;
		}
	}
	if (!*uParam0.f_10)
	{
		if ((network_is_game_in_progress() && is_time_more_than(get_network_time(), get_time_offset(*uParam0.f_25, iParam1))) || (!network_is_game_in_progress() && get_game_timer() - *uParam0.f_21 > iParam1))
		{
			*uParam0.f_10 = 1;
		}
	}
	if (!*uParam0.f_11)
	{
		if ((network_is_game_in_progress() && is_time_more_than(get_network_time(), get_time_offset(*uParam0.f_25, iParam1))) || (!network_is_game_in_progress() && get_game_timer() - *uParam0.f_21 > iParam1))
		{
			*uParam0.f_11 = 1;
		}
	}
	if (!*uParam0.f_12)
	{
		if ((network_is_game_in_progress() && is_time_more_than(get_network_time(), get_time_offset(*uParam0.f_17, iParam1))) || (!network_is_game_in_progress() && get_game_timer() - *uParam0.f_16 > iParam1))
		{
			*uParam0.f_12 = 1;
		}
	}
	if (!*uParam0.f_13)
	{
		if ((network_is_game_in_progress() && is_time_more_than(get_network_time(), get_time_offset(*uParam0.f_17, iParam1))) || (!network_is_game_in_progress() && get_game_timer() - *uParam0.f_16 > iParam1))
		{
			*uParam0.f_13 = 1;
		}
	}
	if (!*uParam0.f_14)
	{
		if ((network_is_game_in_progress() && is_time_more_than(get_network_time(), get_time_offset(*uParam0.f_17, iParam1))) || (!network_is_game_in_progress() && get_game_timer() - *uParam0.f_16 > iParam1))
		{
			*uParam0.f_14 = 1;
		}
	}
	if (!*uParam0.f_15)
	{
		if ((network_is_game_in_progress() && is_time_more_than(get_network_time(), get_time_offset(*uParam0.f_17, iParam1))) || (!network_is_game_in_progress() && get_game_timer() - *uParam0.f_16 > iParam1))
		{
			*uParam0.f_15 = 1;
		}
	}
}

void func_28(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	*uParam0 = floor(get_control_normal(2, 218) * 127f);
	*uParam1 = floor(get_control_normal(2, 219) * 127f);
	*uParam2 = floor(get_control_normal(2, 220) * 127f);
	*uParam3 = floor(get_control_normal(2, 221) * 127f);
	if (iParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = floor(get_disabled_control_normal(2, 218) * 127f);
			*uParam1 = floor(get_disabled_control_normal(2, 219) * 127f);
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = floor(get_disabled_control_normal(2, 220) * 127f);
			*uParam3 = floor(get_disabled_control_normal(2, 221) * 127f);
		}
	}
}

void func_29(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = 2;
	vVar0.y = player_id();
	vVar0.z = iParam0;
	if (!iParam1 == 0)
	{
		trigger_script_event(1, &vVar0, 3, iParam1);
	}
}

var func_30(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	while (iVar1 < 32)
	{
		iVar2 = int_to_playerindex(iVar1);
		if (func_6(iVar2, 0, 0))
		{
			if (iVar2 != player_id() || iParam0)
			{
				if (iParam1)
				{
					set_bit(&uVar0, iVar1);
				}
				else if (!func_31(iVar2, 0))
				{
					set_bit(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_32(-1, 0) == 8;
	}
	else
	{
		iVar0 = Global_1587523[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (network_is_player_active(iParam0))
		{
			iVar0 = get_player_team(iParam0) == 8;
		}
	}
	return iVar0;
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
	}
	if (Global_1315891[iVar1] == 1)
	{
		if (iParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312741[iVar1];
		if (iParam1)
		{
		}
	}
	return iVar0;
}

void func_33(int iParam0, int iParam1)
{
	int iVar0;
	struct<27> Var1;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_42(iParam0);
		if (func_41(iVar0))
		{
			Var1 = 12;
			Var1.f_13 = 12;
			Var1.f_26 = 12;
			Var1.f_39 = 9;
			Var1.f_49 = 9;
			func_37(iParam0, &Var1, 1);
			func_550(1306, Var1[0], -1, 1);
			func_550(1307, Var1[1], -1, 1);
			func_550(1308, Var1[2], -1, 1);
			func_550(1318, Var1.f_13[0], -1, 1);
			func_550(1319, Var1.f_13[1], -1, 1);
			func_550(1320, Var1.f_13[2], -1, 1);
			func_550(1330, Var1.f_26[0], -1, 1);
			func_550(1331, Var1.f_26[1], -1, 1);
			func_550(1332, Var1.f_26[2], -1, 1);
			Global_91068[iVar0 /*65*/][0] = Var1[0];
			Global_91068[iVar0 /*65*/][1] = Var1[1];
			Global_91068[iVar0 /*65*/][2] = Var1[2];
			Global_91068[iVar0 /*65*/].f_13[0] = Var1.f_13[0];
			Global_91068[iVar0 /*65*/].f_13[1] = Var1.f_13[1];
			Global_91068[iVar0 /*65*/].f_13[2] = Var1.f_13[2];
			Global_91068[iVar0 /*65*/].f_26[0] = Var1.f_26[0];
			Global_91068[iVar0 /*65*/].f_26[1] = Var1.f_26[1];
			Global_91068[iVar0 /*65*/].f_26[2] = Var1.f_26[2];
			if (!func_34(0) || iParam1)
			{
				Global_101154.f_1826.f_539[iVar0 /*65*/][0] = Var1[0];
				Global_101154.f_1826.f_539[iVar0 /*65*/][1] = Var1[1];
				Global_101154.f_1826.f_539[iVar0 /*65*/][2] = Var1[2];
				Global_101154.f_1826.f_539[iVar0 /*65*/].f_13[0] = Var1.f_13[0];
				Global_101154.f_1826.f_539[iVar0 /*65*/].f_13[1] = Var1.f_13[1];
				Global_101154.f_1826.f_539[iVar0 /*65*/].f_13[2] = Var1.f_13[2];
				Global_101154.f_1826.f_539[iVar0 /*65*/].f_26[0] = Var1.f_26[0];
				Global_101154.f_1826.f_539[iVar0 /*65*/].f_26[1] = Var1.f_26[1];
				Global_101154.f_1826.f_539[iVar0 /*65*/].f_26[2] = Var1.f_26[2];
			}
		}
	}
}

bool func_34(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_35(iParam0))
	{
		return false;
	}
	return true;
}

int func_35(int iParam0)
{
	return func_36(iParam0, Global_35711);
}

bool func_36(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return true;
	}
	if (iParam0 == 15)
	{
		return false;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return false;
					break;
			}
			return true;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return true;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return true;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return true;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return true;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return true;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return true;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return true;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return true;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return true;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return true;
					break;
			}
			break;
	}
	return false;
}

void func_37(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_42(iParam0);
		iVar1 = false;
		while (iVar1 < 12)
		{
			func_40(iParam0, iVar1, uParam1.f_13[iVar1], uParam1[iVar1], uParam1.f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 9)
		{
			func_39(iParam0, iVar1, uParam1.f_39[iVar1], uParam1.f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_41(iVar0))
		{
			*uParam1.f_59 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_59;
			*uParam1.f_60 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_60;
			*uParam1.f_61 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_61;
			*uParam1.f_62 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_62;
			*uParam1.f_63 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_63;
			*uParam1.f_64 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_64;
		}
		else if (network_is_game_in_progress() && get_entity_model(iParam0) == get_entity_model(player_ped_id()))
		{
			if (func_38(161, -1))
			{
				*uParam1.f_59 = func_17(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_17(745, Global_69309, 0);
			}
			*uParam1.f_60 = func_17(746, Global_69309, 0);
			*uParam1.f_61 = func_17(747, Global_69309, 0);
		}
		if (network_is_game_in_progress() && iParam0 == player_ped_id())
		{
			if (func_38(161, -1))
			{
				*uParam1.f_59 = func_17(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_17(745, Global_69309, 0);
			}
		}
	}
}

int func_38(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_18(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_39(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_42(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = get_ped_prop_index(iParam0, iParam1);
		*uParam3 = get_ped_prop_texture_index(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (is_ped_wearing_helmet(iParam0) && _0x451294E859ECC018(iParam0) != -1)
				{
					*uParam2 = _0x451294E859ECC018(iParam0);
					*uParam3 = _0x9D728C1E12BF5518(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_40(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_42(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = get_ped_drawable_variation(iParam0, iParam1);
		*uParam3 = get_ped_texture_variation(iParam0, iParam1);
		*uParam4 = get_ped_palette_variation(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_41(int iParam0)
{
	return iParam0 < 3;
}

int func_42(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_43(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_43(int iParam0)
{
	if (func_41(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_44(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
	}
	if (network_is_game_in_progress())
	{
		if (Global_1587523[iParam0 /*444*/].f_191)
		{
			Global_1587523[iParam0 /*444*/].f_191 = 0;
			Global_1587523[iParam0 /*444*/].f_192 = 0;
		}
	}
}

void func_45(int iParam0, int iParam1)
{
	struct<65> Var0;
	
	if (!is_ped_injured(iParam0))
	{
		Var0 = 12;
		Var0.f_13 = 12;
		Var0.f_26 = 12;
		Var0.f_39 = 9;
		Var0.f_49 = 9;
		func_37(iParam0, &Var0, 1);
		func_46(Var0, iParam1);
	}
}

void func_46(struct<50> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	if (Global_2444229 == 0)
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (Param0.f_13[iVar0] != 0)
			{
				iVar1 = 1;
				iVar0 = 12;
			}
			iVar0++;
		}
		if (iVar1 == 0)
		{
			return;
		}
	}
	func_550(387, Param0[0], iParam65, 1);
	func_550(388, Param0[1], iParam65, 1);
	func_550(389, Param0[2], iParam65, 1);
	func_550(390, Param0[3], iParam65, 1);
	func_550(391, Param0[4], iParam65, 1);
	func_550(392, Param0[5], iParam65, 1);
	func_550(393, Param0[6], iParam65, 1);
	func_550(394, Param0[7], iParam65, 1);
	func_550(395, Param0[8], iParam65, 1);
	func_550(396, Param0[9], iParam65, 1);
	func_550(397, Param0[10], iParam65, 1);
	func_550(398, Param0[11], iParam65, 1);
	func_550(399, Param0.f_13[0], iParam65, 1);
	func_550(400, Param0.f_13[1], iParam65, 1);
	func_550(401, Param0.f_13[2], iParam65, 1);
	func_550(402, Param0.f_13[3], iParam65, 1);
	func_550(403, Param0.f_13[4], iParam65, 1);
	func_550(404, Param0.f_13[5], iParam65, 1);
	func_550(405, Param0.f_13[6], iParam65, 1);
	func_550(406, Param0.f_13[7], iParam65, 1);
	func_550(407, Param0.f_13[8], iParam65, 1);
	func_550(408, Param0.f_13[9], iParam65, 1);
	func_550(409, Param0.f_13[10], iParam65, 1);
	func_550(410, Param0.f_13[11], iParam65, 1);
	func_550(411, Param0.f_26[0], iParam65, 1);
	func_550(412, Param0.f_26[1], iParam65, 1);
	func_550(413, Param0.f_26[2], iParam65, 1);
	func_550(414, Param0.f_26[3], iParam65, 1);
	func_550(415, Param0.f_26[4], iParam65, 1);
	func_550(416, Param0.f_26[5], iParam65, 1);
	func_550(417, Param0.f_26[6], iParam65, 1);
	func_550(418, Param0.f_26[7], iParam65, 1);
	func_550(419, Param0.f_26[8], iParam65, 1);
	func_550(420, Param0.f_26[9], iParam65, 1);
	func_550(421, Param0.f_26[10], iParam65, 1);
	func_550(422, Param0.f_26[11], iParam65, 1);
	func_550(423, Param0.f_39[0], iParam65, 1);
	func_550(424, Param0.f_39[1], iParam65, 1);
	func_550(425, Param0.f_39[2], iParam65, 1);
	func_550(426, Param0.f_39[3], iParam65, 1);
	func_550(427, Param0.f_39[4], iParam65, 1);
	func_550(428, Param0.f_39[5], iParam65, 1);
	func_550(429, Param0.f_39[6], iParam65, 1);
	func_550(430, Param0.f_39[7], iParam65, 1);
	func_550(431, Param0.f_39[8], iParam65, 1);
	func_550(432, Param0.f_49[0], iParam65, 1);
	func_550(433, Param0.f_49[1], iParam65, 1);
	func_550(434, Param0.f_49[2], iParam65, 1);
	func_550(435, Param0.f_49[3], iParam65, 1);
	func_550(436, Param0.f_49[4], iParam65, 1);
	func_550(437, Param0.f_49[5], iParam65, 1);
	func_550(438, Param0.f_49[6], iParam65, 1);
	func_550(439, Param0.f_49[7], iParam65, 1);
	func_550(440, Param0.f_49[8], iParam65, 1);
}

int func_47(int iParam0)
{
	return func_48(iParam0, 10);
}

int func_48(var uParam0, int iParam1)
{
	return is_bit_set(Global_1610316[uParam0 /*174*/].f_10.f_4, iParam1);
}

int func_49(int iParam0)
{
	return func_50(player_id(), iParam0);
}

int func_50(int iParam0, int iParam1)
{
	if (!iParam1)
	{
		if (func_52(iParam0))
		{
			return false;
		}
	}
	return Global_1610316[iParam0 /*174*/].f_10 != func_51();
}

int func_51()
{
	return -1;
}

int func_52(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (Global_1610316[iParam0 /*174*/].f_10 != func_51())
		{
			return Global_1610316[iParam0 /*174*/].f_10 == iParam0;
		}
	}
	return false;
}

void func_53()
{
	set_widescreen_borders(false, -1);
	func_61();
	if (!is_ped_injured(player_ped_id()))
	{
		hide_ped_weapon_for_scripted_cutscene(player_ped_id(), false);
		if (!Global_69489)
		{
			set_everyone_ignore_player(player_id(), 0);
			clear_facial_idle_anim_override(player_ped_id());
		}
	}
	Global_92778 = 0;
	func_54(0, 1, 1, 0);
}

void func_54(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_60(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_59())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_58(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_60(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_58(0, iParam3, iParam2, 0);
		if (network_is_game_in_progress())
		{
			if (((!is_ped_injured(player_ped_id()) && !func_56(player_id())) && !func_31(player_id(), 0)) && !func_55())
			{
				set_entity_invincible(player_ped_id(), false);
			}
		}
		else if (!is_ped_injured(player_ped_id()) && !func_56(player_id()))
		{
			set_entity_invincible(player_ped_id(), false);
		}
		Global_69487 = 0;
	}
}

int func_55()
{
	return is_bit_set(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

bool func_56(int iParam0)
{
	if (func_31(iParam0, 0))
	{
		return true;
	}
	if (func_57())
	{
		if (iParam0 == player_id())
		{
			return true;
		}
	}
	if (is_bit_set(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return true;
	}
	return false;
}

int func_57()
{
	return is_bit_set(Global_2359301, 3);
}

int func_58(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (is_pc_version())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_59()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

void func_60(int iParam0)
{
	if (iParam0 == 1)
	{
		set_bit(&Global_2283, 13);
	}
	else
	{
		clear_bit(&Global_2283, 13);
	}
}

void func_61()
{
	if (Global_91330.f_5 && Global_91330.f_6 == get_hash_key(get_this_script_name()))
	{
		clear_help(1);
		Global_91330.f_5 = 0;
	}
}

void func_62(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (Global_69489)
	{
		func_76();
	}
	if (func_655(1))
	{
		if (*uParam0.f_19)
		{
		}
		if (Global_69489)
		{
			if (iParam3)
			{
				if (!func_74())
				{
				}
				else if ((!func_73() && !func_72()) && !is_new_load_scene_active())
				{
					func_68(player_id(), 1, 0);
				}
				else
				{
					func_68(player_id(), 0, 66048);
				}
			}
		}
		else
		{
			set_player_control(player_id(), true, 0);
		}
		task_clear_look_at(player_ped_id());
		set_entity_visible(player_ped_id(), true, 0);
	}
	if (iParam2)
	{
		render_script_cams(false, false, 3000, 1, 0, 0);
	}
	if (iParam1)
	{
		set_gameplay_cam_relative_heading(0f);
		set_gameplay_cam_relative_pitch(0f, 1f);
	}
	*uParam0.f_30 = 1;
	*uParam0.f_28 = get_game_timer();
	if (network_is_game_in_progress())
	{
		*uParam0.f_29 = get_network_time();
	}
	if (Global_69489)
	{
		func_65();
		func_63();
	}
	if (*uParam0.f_33 != 0 || !is_string_null_or_empty(uParam0.f_34))
	{
		StringCopy(uParam0.f_34, "", 16);
		*uParam0.f_33 = 0;
	}
	if ((network_is_game_in_progress() && network_is_in_tutorial_session()) && *uParam0.f_32 != 0)
	{
		if (!_0x35F0B98A8387274D())
		{
			network_end_tutorial_session();
			*uParam0.f_32 = 0;
		}
	}
}

void func_63()
{
	if (!Global_1312569)
	{
		return;
	}
	func_64();
}

void func_64()
{
	Global_1312569 = 0;
	StringCopy(&(Global_1312569.f_1), "", 24);
	Global_1312569.f_7 = 0;
}

void func_65()
{
	func_67(1);
	func_66(4, 0, -1);
	func_66(6, 0, -1);
	func_66(7, 0, -1);
	func_66(3, 0, -1);
	func_66(1, 0, -1);
	func_66(2, 0, -1);
	func_66(11, 0, -1);
	func_66(13, 0, -1);
	func_66(14, 0, -1);
	func_66(16, 0, -1);
}

void func_66(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1338622.f_137[iParam2] = iParam1;
			}
			break;
		
		default:
			if (iParam1)
			{
				set_bit(&(Global_1338622.f_947), iParam0);
			}
			else
			{
				clear_bit(&(Global_1338622.f_947), iParam0);
			}
			break;
	}
}

void func_67(int iParam0)
{
	Global_2460486.f_4390 = iParam0;
}

void func_68(int iParam0, int iParam1, int iParam2)
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
		if (!func_74())
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
				if (!func_71(iVar25) && !is_entity_attached_to_any_vehicle(iVar25))
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
				func_70();
				func_69();
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
				if (!func_71(iVar25) && !is_entity_attached_to_any_vehicle(iVar25))
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

void func_69()
{
	struct<2> Var0;
	
	Global_2428492.f_724 = 0;
	Global_2428492.f_725 = 0;
	Global_2428492.f_726 = {9999.9f, 9999.9f, 9999.9f};
	Global_2404956.f_1673 = {Var0};
}

void func_70()
{
	Global_2404956.f_626 = 0;
	Global_2404956.f_1714 = 0;
	Global_2404956.f_484 = 0;
	Global_2404956.f_558 = 0;
	Global_2418472[player_id() /*313*/].f_205 = 0;
}

bool func_71(int iParam0)
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

var func_72()
{
	return Global_2434762.f_658.f_5;
}

int func_73()
{
	return is_bit_set(Global_2434762, 2);
}

bool func_74()
{
	if (func_75() == 0)
	{
		return true;
	}
	return false;
}

var func_75()
{
	return Global_1312466.f_18;
}

void func_76()
{
	if (Global_1312416.f_1 == 1)
	{
		func_77(0);
		Global_1312416.f_1 = 0;
		Global_1610316[player_id() /*174*/].f_9 = 0;
	}
}

void func_77(int iParam0)
{
	if (func_85())
	{
		if (iParam0 == 1)
		{
			if (Global_2460486.f_4254 == -1)
			{
				Global_2460486.f_4254 = 60000;
			}
			func_84(&(Global_2460486.f_4252), 0, 0);
			if (Global_2460486.f_4257 == -1)
			{
				Global_2460486.f_4257 = 10000;
			}
			func_84(&(Global_2460486.f_4255), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_83();
		}
		if ((!network_is_activity_session() && !func_82()) && !func_78(player_id()))
		{
			Global_978142 = 0;
		}
		Global_1610316[player_id() /*174*/].f_8 = 0;
	}
}

bool func_78(int iParam0)
{
	if (func_79(iParam0, 1))
	{
		if (Global_1587523[iParam0 /*444*/] != 6)
		{
			return true;
		}
	}
	return false;
}

bool func_79(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (func_80(iParam0))
		{
			return true;
		}
	}
	if (Global_1587523[iParam0 /*444*/] == -1)
	{
		return false;
	}
	return true;
}

int func_80(var uParam0)
{
	return func_81(uParam0);
}

int func_81(var uParam0)
{
	return is_bit_set(Global_1587523[uParam0 /*444*/].f_13.f_1, false);
}

var func_82()
{
	return Global_2434762.f_713;
}

void func_83()
{
	if (network_is_game_in_progress())
	{
		if (!func_85())
		{
			if (func_6(player_id(), 1, 0))
			{
				set_ped_can_be_dragged_out(player_ped_id(), 1);
				set_ped_config_flag(player_ped_id(), 342, false);
				set_ped_config_flag(player_ped_id(), 122, false);
			}
			set_player_vehicle_defense_modifier(player_id(), 1f);
			_0x1B857666604B1A74(0);
			network_set_friendly_fire_option(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				use_player_colour_instead_of_team_colour(0);
			}
		}
		else
		{
			if (func_6(player_id(), 1, 1))
			{
				set_ped_can_be_dragged_out(player_ped_id(), 0);
				set_current_ped_weapon(player_ped_id(), joaat("weapon_unarmed"), true);
				set_ped_config_flag(player_ped_id(), 342, true);
				set_ped_config_flag(player_ped_id(), 122, true);
				set_player_vehicle_defense_modifier(player_id(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					use_player_colour_instead_of_team_colour(1);
				}
			}
			_0x1B857666604B1A74(1);
			network_set_friendly_fire_option(0);
		}
	}
}

void func_84(var uParam0, int iParam1, int iParam2)
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

var func_85()
{
	return Global_1312416;
}

int func_86(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return func_17(iParam0, iParam1, iParam2);
}

bool func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (!network_is_game_in_progress())
	{
		iVar5 = get_entity_model(iParam0);
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			iVar2 = iVar1;
			iVar4 = func_95(iParam0, iVar2);
			if (func_91(iVar5, 14, iVar4))
			{
				return true;
			}
			iVar1++;
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			iVar3 = iVar0;
			if ((iVar3 != 12 && iVar3 != 13) && iVar3 != 14)
			{
				iVar4 = func_88(iParam0, iVar3);
				if (func_91(iVar5, iVar3, iVar4))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar6 = get_ped_drawable_variation(iParam0, true);
		if (iVar6 > 0)
		{
			iVar7 = get_hash_name_for_component(iParam0, true, iVar6, get_ped_texture_variation(iParam0, true));
			if (!_0x341DE7ED1D2A1BFD(iVar7, -1757550583, false))
			{
				return true;
			}
		}
	}
	return false;
}

int func_88(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || is_ped_injured(iParam0))
	{
		return -99;
	}
	iVar0 = func_90(iParam1);
	iVar1 = get_ped_drawable_variation(iParam0, iVar0);
	iVar2 = get_ped_texture_variation(iParam0, iVar0);
	return func_89(iParam0, iVar1, iVar2, iParam1);
}

int func_89(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_90(iParam3);
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

int func_90(int iParam0)
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

bool func_91(int iParam0, int iParam1, int iParam2)
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
					iVar0 = func_92(iParam0, iParam2, 1, 3);
					if (_0x341DE7ED1D2A1BFD(iVar0, -1757550583, false))
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
					iVar1 = func_92(iParam0, iParam2, 1, 4);
					if (_0x341DE7ED1D2A1BFD(iVar1, -1757550583, false))
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

int func_92(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar19 = iParam1 - func_94(iParam0);
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
		iVar40 = iParam1 - func_93(iParam0, func_90(iParam2));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_69432.f_26[iParam2] && iParam1 == Global_69432[iParam2]) && Global_69432.f_13[iParam2] != 0)
		{
			return Global_69432.f_13[iParam2];
		}
		iVar41 = _get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_90(iParam2));
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

int func_93(int iParam0, int iParam1)
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

int func_94(int iParam0)
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

int func_95(int iParam0, int iParam1)
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
		return func_99(iParam1);
	}
	iVar1 = get_ped_prop_texture_index(iParam0, iParam1);
	return func_96(iParam0, iVar0, iVar1, iParam1);
}

int func_96(int iParam0, int iParam1, int iParam2, int iParam3)
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
		return func_99(iParam3);
	}
	iVar0 = get_entity_model(iParam0);
	iVar1 = get_hash_name_for_prop(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_98(get_entity_model(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_98(get_entity_model(iParam0), iVar1, 14, 4);
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
					iVar3 += func_97(iParam0, iParam3);
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
	return func_99(iParam3);
}

int func_97(int iParam0, int iParam1)
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

int func_98(int iParam0, int iParam1, int iParam2, int iParam3)
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
					return func_94(iParam0) + iVar18;
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
		iVar39 = _get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_90(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			get_shop_ped_query_component(iVar37, &Var20);
			if (!_is_dlc_data_empty(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return func_93(iParam0, func_90(iParam2)) + iVar38;
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_99(int iParam0)
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

void func_100(int iParam0)
{
	if (iParam0)
	{
		if (Global_69489)
		{
			if (network_is_in_mp_cutscene())
			{
				network_set_in_mp_cutscene(0, 0);
			}
		}
	}
}

void func_101(var uParam0)
{
	if (*uParam0.f_610)
	{
		set_model_as_no_longer_needed(*uParam0.f_610.f_1);
		*uParam0.f_610 = 0;
	}
	if (does_entity_exist(*uParam0.f_610.f_2))
	{
		delete_ped(uParam0.f_610.f_2);
	}
	if (does_entity_exist(Global_2561288))
	{
		delete_ped(&Global_2561288);
	}
}

void func_102(int iParam0)
{
	char[64] cVar0;
	
	StringCopy(&cVar0, func_103(iParam0), 64);
	if (get_hash_key(&cVar0) != 0)
	{
		set_streamed_texture_dict_as_no_longer_needed(&cVar0);
	}
}

char* func_103(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ShopUI_Title_HighEndSalon";
			break;
		
		case 1:
		case 4:
		case 6:
			return "ShopUI_Title_Barber";
			break;
		
		case 2:
			return "ShopUI_Title_Barber2";
			break;
		
		case 3:
			return "ShopUI_Title_Barber3";
			break;
		
		case 5:
			return "ShopUI_Title_Barber4";
			break;
		
		case 7:
		case 8:
		case 10:
		case 11:
		case 13:
			return "ShopUI_Title_LowEndFashion";
			break;
		
		case 9:
		case 12:
			return "ShopUI_Title_LowEndFashion2";
			break;
		
		case 14:
		case 15:
		case 16:
		case 17:
			return "ShopUI_Title_MidFashion";
			break;
		
		case 18:
		case 19:
		case 20:
			return "ShopUI_Title_HighEndFashion";
			break;
		
		case 21:
			return "ShopUI_Title_Movie_Masks";
			break;
		
		case 22:
			return "ShopUI_Title_Tattoos";
			break;
		
		case 23:
		case 24:
			return "ShopUI_Title_Tattoos2";
			break;
		
		case 25:
			return "ShopUI_Title_Tattoos3";
			break;
		
		case 26:
			return "ShopUI_Title_Tattoos4";
			break;
		
		case 27:
			return "ShopUI_Title_Tattoos5";
			break;
		
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			return "ShopUI_Title_GunClub";
			break;
		
		case 39:
		case 40:
		case 41:
		case 43:
			return "ShopUI_Title_Carmod";
			break;
		
		case 42:
			return "ShopUI_Title_Carmod2";
			break;
		
		case 44:
			return "ShopUI_Title_Supermod";
			break;
	}
	return "";
}

void func_104(var uParam0)
{
	func_105(uParam0.f_584);
	func_105(uParam0.f_594);
}

void func_105(int iParam0)
{
	if (*iParam0.f_9 != 0)
	{
		if (has_scaleform_movie_loaded(*iParam0))
		{
			set_scaleform_movie_as_no_longer_needed(iParam0);
		}
		*iParam0 = 0;
		*iParam0.f_9 = 0;
	}
}

void func_106(int iParam0, int iParam1)
{
	var uVar0;
	
	if (!func_107(&uVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17257.f_7862)
	{
		reset_hud_component_values(15);
		Global_17257.f_7862 = 0;
	}
	_0x55598D21339CB998(0f);
	if (Global_17257.f_5498[uVar0])
	{
		clear_additional_text(9, false);
		Global_17257.f_5498[uVar0] = 0;
	}
	if (Global_17257.f_5484[uVar0])
	{
		set_streamed_texture_dict_as_no_longer_needed("CommonMenu");
		Global_17257.f_5484[uVar0] = 0;
	}
	if (Global_17257.f_5491[uVar0])
	{
		set_streamed_texture_dict_as_no_longer_needed("MPShopSale");
		Global_17257.f_5491[uVar0] = 0;
	}
	if (iParam0)
	{
		func_105(&(Global_17257.f_5530[uVar0 /*10*/]));
		Global_17257.f_5591[uVar0] = 0;
	}
	else
	{
		Global_17257.f_5591[uVar0] = 0;
	}
}

bool func_107(var uParam0, int iParam1, int iParam2)
{
	char[64] cVar0;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (network_is_game_in_progress() && network_get_this_script_is_network_script())
		{
			iParam2 = _0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, get_this_script_name(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = get_hash_key(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17257.f_5591[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return true;
		}
		else if (Global_17257.f_5591[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (iParam1)
	{
		if (iVar18 != -1)
		{
			Global_17257.f_5591[iVar18] = iVar16;
			*uParam0 = iVar18;
			return true;
		}
	}
	return false;
}

void func_108()
{
	if (network_does_entity_exist_with_network_id(Local_57.f_1) && func_685(1))
	{
		set_entity_visible(net_to_ent(Local_57.f_1), false, 0);
		set_entity_collision(net_to_ent(Local_57.f_1), false, 0);
		freeze_entity_position(net_to_ent(Local_57.f_1), true);
	}
}

void func_109(var uParam0, int iParam1)
{
	if (func_686(0) || iParam1)
	{
		if (get_script_task_status(func_113(uParam0, iParam1), 2106541073) != 1)
		{
			task_go_straight_to_coord(func_113(uParam0, iParam1), func_112(uParam0, iParam1), 1f, 20000, func_111(uParam0, iParam1), 0.5f);
		}
		if (iParam1 == 0)
		{
			func_110(uParam0, 0);
		}
	}
}

void func_110(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		if (!does_entity_exist(*uParam0.f_497))
		{
			*uParam0.f_497 = create_object(joaat("p_cs_scissors_s"), *uParam0.f_12.f_2, 0, false, false);
		}
	}
	else if (does_entity_exist(*uParam0.f_497))
	{
		delete_object(uParam0.f_497);
	}
}

var func_111(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		return *uParam0.f_430.f_5;
	}
	return *uParam0.f_12.f_5;
}

Vector3 func_112(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		return *uParam0.f_430.f_2;
	}
	return *uParam0.f_12.f_2;
}

var func_113(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		return *uParam0.f_430;
	}
	return *uParam0.f_12;
}

void func_114(var uParam0)
{
	if (does_entity_exist(player_ped_id()))
	{
		if (!is_ped_injured(player_ped_id()))
		{
			func_115(uParam0);
			if (*uParam0.f_516 != -99)
			{
				Stack.Push(player_ped_id());
				Stack.Push(14);
				Stack.Push(*uParam0.f_516);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(*uParam0.f_450);
			}
			if (*uParam0.f_517 != -99)
			{
				Stack.Push(player_ped_id());
				Stack.Push(8);
				Stack.Push(*uParam0.f_517);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(*uParam0.f_450);
			}
			if (*uParam0.f_518 != -99)
			{
				Stack.Push(player_ped_id());
				Stack.Push(9);
				Stack.Push(*uParam0.f_518);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(*uParam0.f_450);
			}
			if (*uParam0.f_519 != -99)
			{
				Stack.Push(player_ped_id());
				Stack.Push(2);
				Stack.Push(*uParam0.f_519);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(*uParam0.f_450);
			}
			if (network_is_game_in_progress())
			{
				if (*uParam0.f_520 != -99)
				{
					Stack.Push(player_ped_id());
					Stack.Push(1);
					Stack.Push(*uParam0.f_520);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(*uParam0.f_450);
				}
				if (*uParam0.f_521 != -99)
				{
					Stack.Push(player_ped_id());
					Stack.Push(7);
					Stack.Push(*uParam0.f_521);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(-1);
					Stack.Push(0);
					Call_Loc(*uParam0.f_450);
				}
				if (*uParam0.f_522 != -1 && *uParam0.f_523 != -1)
				{
					set_ped_component_variation(player_ped_id(), func_90(5), *uParam0.f_522, *uParam0.f_523, 0);
				}
			}
		}
	}
	*uParam0.f_515 = -99;
	*uParam0.f_516 = -99;
	*uParam0.f_520 = -99;
	*uParam0.f_521 = -99;
	*uParam0.f_522 = -1;
	*uParam0.f_523 = -1;
	*uParam0.f_517 = -99;
	*uParam0.f_518 = -99;
	*uParam0.f_519 = -99;
}

void func_115(var uParam0)
{
	int iVar0;
	
	if (*uParam0.f_515 != -99)
	{
		if (network_is_game_in_progress())
		{
			iVar0 = player_ped_id();
			if (does_entity_exist(*uParam0.f_610.f_2) && !is_ped_injured(*uParam0.f_610.f_2))
			{
				iVar0 = *uParam0.f_610.f_2;
			}
			if (func_116(get_entity_model(player_ped_id()), *uParam0.f_515, func_88(iVar0, 2)))
			{
				Stack.Push(player_ped_id());
				Stack.Push(14);
				Stack.Push(*uParam0.f_515);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(*uParam0.f_450);
			}
			else
			{
				Stack.Push(player_ped_id());
				Stack.Push(14);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(0);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(-1);
				Stack.Push(0);
				Call_Loc(*uParam0.f_450);
			}
		}
		else
		{
			Stack.Push(player_ped_id());
			Stack.Push(14);
			Stack.Push(*uParam0.f_515);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(-1);
			Stack.Push(0);
			Call_Loc(*uParam0.f_450);
		}
	}
}

bool func_116(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if ((iParam2 >= 60 && iParam2 <= 66) || (iParam2 >= 18 && iParam2 <= 23))
		{
			if (((((((((iParam1 >= 19 && iParam1 <= 26) || (iParam1 >= 27 && iParam1 <= 34)) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 50)) || (iParam1 >= 59 && iParam1 <= 66)) || (iParam1 >= 75 && iParam1 <= 82)) || (iParam1 >= 91 && iParam1 <= 98)) || (iParam1 >= 99 && iParam1 <= 106)) || (iParam1 >= 107 && iParam1 <= 114))
			{
				return false;
			}
			if (iParam1 >= func_94(iParam0))
			{
				func_117(iParam0, 14, iParam1);
				if (Global_2621445 == -1751726434)
				{
					return false;
				}
			}
			if (iParam1 >= 327)
			{
				iVar0 = -1;
				iVar0 = func_92(iParam0, iParam1, 14, 3);
				if (_0x341DE7ED1D2A1BFD(iVar0, 1113995558, true))
				{
					return false;
				}
				switch (Global_2621444)
				{
					case 1720281330:
					case 968593239:
					case -479862111:
					case -1254685116:
					case -990861897:
					case 421482003:
					case -1735340808:
						return false;
						break;
					
					case 607828228:
					case 1577266424:
					case 1132328842:
					case -344209529:
					case -575034365:
					case 338532586:
					case -92904068:
						return false;
						break;
					}
			}
		}
		else if ((iParam2 >= 85 && iParam2 <= 91) || (iParam2 >= 30 && iParam2 <= 34))
		{
			if (iParam1 >= 131 && iParam1 <= 154)
			{
				return false;
			}
		}
	}
	return true;
}

struct<14> func_117(int iParam0, int iParam1, int iParam2)
{
	func_166();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_150(iParam1, iParam2);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_118(iParam1, iParam2);
	}
	return Global_69311[0 /*14*/];
}

void func_118(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			func_149(iParam1);
			break;
		
		case 11:
			func_148(iParam1);
			break;
		
		case 8:
			func_141(iParam1);
			break;
		
		case 9:
			func_140(iParam1);
			break;
		
		case 3:
			func_139(iParam1);
			break;
		
		case 4:
			func_138(iParam1);
			break;
		
		case 6:
			func_137(iParam1);
			break;
		
		case 1:
			func_136(iParam1);
			break;
		
		case 7:
			func_135(iParam1);
			break;
		
		case 10:
			func_134(iParam1);
			break;
		
		case 14:
			func_133(iParam1);
			break;
		
		case 12:
			func_132(iParam1);
			break;
		
		case 5:
			func_131(iParam1);
			break;
		
		case 0:
			func_129(iParam1);
			break;
		
		case 13:
			func_119(iParam1);
			break;
	}
}

void func_119(int iParam0)
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
	func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_120(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	*uParam0.f_6 = 0;
	*uParam0 = iParam9;
	*uParam0.f_1 = iParam2 % 32;
	*uParam0.f_2 = iParam2 / 32;
	*uParam0.f_3 = iParam4;
	*uParam0.f_4 = iParam5;
	*uParam0.f_7 = iParam6;
	StringCopy(uParam0.f_8, sParam3, 16);
	*uParam0.f_13 = iParam8;
	*uParam0.f_12 = func_128(iParam8);
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
		if (func_127(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (_0x341DE7ED1D2A1BFD(Global_2621444, 1827025211, false))
			{
				set_bit(uParam0.f_6, 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_125(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_125(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_125(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_125(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
		else
		{
			if (!func_125(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_125(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
	}
	else if (*uParam0.f_5 >= 0 && *uParam0.f_5 < 3)
	{
		set_bit(uParam0.f_6, false);
		set_bit(uParam0.f_6, 5);
		if (func_124(iParam1, *uParam0.f_5, *uParam0.f_2, 0, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, true);
		}
		if (func_124(iParam1, *uParam0.f_5, *uParam0.f_2, 1, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, 2);
		}
		if (!func_124(iParam1, *uParam0.f_5, *uParam0.f_2, 2, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, 4);
		}
	}
	else
	{
		set_bit(uParam0.f_6, false);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_127(14))
			{
				return;
			}
			iVar0 = func_17(func_123(iParam1, *uParam0.f_2), Global_69309, 0);
			if (is_bit_set(iVar0, *uParam0.f_1))
			{
				set_bit(uParam0.f_6, true);
			}
			iVar0 = func_17(func_122(iParam1, *uParam0.f_2), Global_69309, 0);
			if (is_bit_set(iVar0, *uParam0.f_1))
			{
				set_bit(uParam0.f_6, 2);
			}
			if (func_121(iParam1, *uParam0.f_2, &uVar1))
			{
				iVar0 = func_17(uVar1, Global_69309, 0);
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

int func_121(int iParam0, int iParam1, var uParam2)
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

int func_122(int iParam0, int iParam1)
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

int func_123(int iParam0, int iParam1)
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

int func_124(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

int func_125(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	iVar0 = Global_69309;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_126(iParam0, iParam1, &uVar2, &iVar1, iParam2, iParam3))
	{
		iVar3 = func_17(uVar2, iVar0, 0);
		return is_bit_set(iVar3, iVar1);
	}
	return false;
}

int func_126(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
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

int func_127(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_128(int iParam0)
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

void func_129(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	Global_69311[0 /*14*/].f_5 = 4;
	func_130(iVar0, iParam0, 0);
}

void func_130(int iParam0, int iParam1, int iParam2)
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
					func_120(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_120(&(Global_69311[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
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
					func_120(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, _0x341DE7ED1D2A1BFD(Var20.f_1, -2050632586, false), iVar37, 2, Var20.f_1 != 0);
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
		iVar60 = _get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_90(iParam0));
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
					func_120(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, _0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, false), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_131(int iParam0)
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
			func_130(iVar10, iParam0, 9);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_132(int iParam0)
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
			func_130(iVar10, iParam0, 28);
			return;
			break;
	}
	func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_133(int iParam0)
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
		func_130(iVar10, iParam0, 327);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			if (_0x341DE7ED1D2A1BFD(Global_2621444, -1757550583, true))
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_26);
			}
			else if (_0x341DE7ED1D2A1BFD(Global_2621444, 97230661, true))
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_56);
			}
			else if (_0x341DE7ED1D2A1BFD(Global_2621444, 1147826474, true))
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_28);
			}
		}
	}
	else
	{
		func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_134(int iParam0)
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
			func_130(iVar10, iParam0, 6);
			return;
			break;
	}
	func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_135(int iParam0)
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
			func_130(iVar10, iParam0, 55);
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
	func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_136(int iParam0)
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
			func_130(iVar10, iParam0, 26);
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
	func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_137(int iParam0)
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
		func_130(iVar10, iParam0, 256);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_25);
		}
	}
	else
	{
		func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_138(int iParam0)
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
		func_130(iVar10, iParam0, 256);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_23);
		}
	}
	else
	{
		func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_139(int iParam0)
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
		func_130(iVar10, iParam0, 16);
		return;
	}
	func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_140(int iParam0)
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
		func_130(iVar10, iParam0, 36);
		return;
	}
	func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_141(int iParam0)
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
			func_130(iVar10, iParam0, 136);
			if (Global_69311[0 /*14*/].f_7 > 0)
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_24);
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_142(89, -1))
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
		if (func_142(88, -1))
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
		if (func_142(87, -1))
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
	func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

int func_142(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_145(iParam0) == 3949)
	{
		return false;
	}
	iVar0 = func_144(iParam0, iParam1);
	iVar1 = iParam0;
	return is_bit_set(iVar0, func_143(iVar1));
}

int func_143(int iParam0)
{
	return iParam0 % 32;
}

var func_144(var uParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_17(func_145(uParam0), iParam1, 0);
	return uVar0;
}

int func_145(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_147(iVar0);
	if ((func_21() == 0 || func_146() == 0) || (func_21() == 999 && func_146() == 999))
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

var func_146()
{
	return Global_25121;
}

int func_147(int iParam0)
{
	return iParam0 / 32;
}

void func_148(int iParam0)
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
		if (func_142(89, -1))
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
		if (func_142(88, -1))
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
		if (func_142(87, -1))
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
		func_130(iVar10, iParam0, 256);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_24);
		}
	}
	else
	{
		func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_149(int iParam0)
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
			func_130(iVar10, iParam0, 92);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_150(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			func_165(iParam1);
			break;
		
		case 11:
			func_164(iParam1);
			break;
		
		case 8:
			func_163(iParam1);
			break;
		
		case 9:
			func_162(iParam1);
			break;
		
		case 3:
			func_161(iParam1);
			break;
		
		case 4:
			func_160(iParam1);
			break;
		
		case 6:
			func_159(iParam1);
			break;
		
		case 1:
			func_158(iParam1);
			break;
		
		case 7:
			func_157(iParam1);
			break;
		
		case 10:
			func_156(iParam1);
			break;
		
		case 14:
			func_155(iParam1);
			break;
		
		case 12:
			func_154(iParam1);
			break;
		
		case 5:
			func_153(iParam1);
			break;
		
		case 0:
			func_152(iParam1);
			break;
		
		case 13:
			func_151(iParam1);
			break;
	}
}

void func_151(int iParam0)
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
	func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_152(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	Global_69311[0 /*14*/].f_5 = 3;
	func_130(iVar0, iParam0, 0);
}

void func_153(int iParam0)
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
			func_130(iVar10, iParam0, 9);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_154(int iParam0)
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
			func_130(iVar10, iParam0, 26);
			return;
			break;
	}
	func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_155(int iParam0)
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
		func_130(iVar10, iParam0, 327);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			if (_0x341DE7ED1D2A1BFD(Global_2621444, -1757550583, true))
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_18);
			}
			else if (_0x341DE7ED1D2A1BFD(Global_2621444, 97230661, true))
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_20);
			}
			else if (_0x341DE7ED1D2A1BFD(Global_2621444, 1147826474, true))
			{
				Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_21);
			}
		}
	}
	else
	{
		func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_156(int iParam0)
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
			func_130(iVar10, iParam0, 7);
			return;
			break;
	}
	func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_157(int iParam0)
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
			func_130(iVar10, iParam0, 92);
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
	func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_158(int iParam0)
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
			func_130(iVar10, iParam0, 26);
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
	func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_159(int iParam0)
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
		func_130(iVar10, iParam0, 256);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_17);
		}
	}
	else
	{
		func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_160(int iParam0)
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
		func_130(iVar10, iParam0, 256);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_15);
		}
	}
	else
	{
		func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_161(int iParam0)
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
			func_130(iVar10, iParam0, 16);
			return;
			break;
	}
	func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_162(int iParam0)
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
			func_130(iVar10, iParam0, 46);
			return;
			break;
	}
	func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_163(int iParam0)
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
		if (func_142(89, -1))
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
		if (func_142(88, -1))
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
		if (func_142(87, -1))
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
		func_130(iVar10, iParam0, 241);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_16);
		}
	}
	else
	{
		func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_164(int iParam0)
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
		if (func_142(89, -1))
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
		if (func_142(88, -1))
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
		if (func_142(87, -1))
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
		func_130(iVar10, iParam0, 237);
		if (Global_69311[0 /*14*/].f_7 > 0)
		{
			Global_69311[0 /*14*/].f_7 = round(to_float(Global_69311[0 /*14*/].f_7) * Global_275816.f_16);
		}
	}
	else
	{
		func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
	}
}

void func_165(int iParam0)
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
			func_130(iVar10, iParam0, 91);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_120(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_166()
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

bool func_167(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	sVar0 = func_172(iParam0);
	sVar1 = func_170(iParam0, iParam1);
	if (get_hash_key(sVar1) != 0)
	{
		fVar4 = 1f;
		if (iParam5)
		{
			_get_screen_active_resolution(&iVar2, &iVar3);
			fVar5 = _get_screen_aspect_ratio(0);
			if (func_169())
			{
				iVar2 = round(to_float(iVar3) * fVar5);
			}
			fVar6 = to_float(iVar2) / to_float(iVar3);
			fVar4 = fVar6 / fVar5;
			if (func_169())
			{
				fVar4 = 1f;
			}
			if (_get_number_of_instances_of_streamed_script(joaat("director_mode")) > 0)
			{
				get_screen_resolution(&iVar2, &iVar3);
			}
			iVar2 = round(to_float(iVar2) / fVar4);
			iVar3 = round(to_float(iVar3) / fVar4);
		}
		else
		{
			get_screen_resolution(&iVar2, &iVar3);
		}
		vVar7 = {get_texture_resolution(sVar0, sVar1)};
		vVar7.x *= func_168(iParam0) / fVar4;
		vVar7.y *= func_168(iParam0) / fVar4;
		if (!iParam2)
		{
			vVar7.x -= 2f;
			vVar7.y -= 2f;
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		*fParam3 = vVar7.x / IntToFloat(iVar2) * IntToFloat(iVar2 / iVar3);
		*fParam4 = vVar7.y / IntToFloat(iVar3) / vVar7.x / IntToFloat(iVar2) * *fParam3;
		if (!iParam5)
		{
			if (!get_is_widescreen() && iParam0 != 30)
			{
				*fParam3 *= 1.33f;
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17256)
			{
				*fParam4 *= Global_17256 / *fParam3;
				*fParam3 = Global_17256;
			}
		}
		return true;
	}
	return false;
}

float func_168(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

bool func_169()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	_get_screen_active_resolution(&iVar0, &iVar1);
	fVar2 = to_float(iVar0) / to_float(iVar1);
	if (fVar2 > 3.5f)
	{
		return true;
	}
	return false;
}

var func_170(int iParam0, int iParam1)
{
	char*[] sVar0 = new char*[2];
	
	if (!is_string_null_or_empty(&(Global_17257.f_6687[iParam0 /*16*/])))
	{
		return func_171(&(Global_17257.f_6687[iParam0 /*16*/]));
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (iParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_171(var uParam0)
{
	return uParam0;
}

char* func_172(int iParam0)
{
	if (!is_string_null_or_empty(&(Global_17257.f_5886[iParam0 /*16*/])))
	{
		return func_171(&(Global_17257.f_5886[iParam0 /*16*/]));
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_173(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_2562053.f_21), sParam0, 16);
	Global_2562053.f_61 = 0;
	Global_2562053.f_62 = 0;
	Global_2562053.f_63 = 0;
	Global_2562053.f_64 = 0;
	Global_2562053.f_65 = iParam1;
	Global_2562053.f_66 = get_game_timer();
	Global_2562053.f_67 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2562053.f_25[iVar0] = 0;
		iVar0++;
	}
}

void func_174(char[4] cParam0)
{
	*cParam0 = {Global_2562053.f_21};
}

bool func_175(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!network_is_game_in_progress())
	{
		return false;
	}
	if (iParam2 == 0)
	{
		return false;
	}
	switch (iParam1)
	{
		case 6:
			if (Global_262145.f_12209)
			{
				return true;
			}
			break;
		
		case 7:
			if (Global_262145.f_12210)
			{
				return true;
			}
			break;
		
		case 8:
			if (Global_262145.f_12211)
			{
				return true;
			}
			break;
		
		case 9:
			if (Global_262145.f_12212)
			{
				return true;
			}
			break;
		
		case 10:
			if (Global_262145.f_12213)
			{
				return true;
			}
			break;
		
		case 11:
			if (Global_262145.f_12214)
			{
				return true;
			}
			break;
		
		case 13:
			if (Global_262145.f_12215)
			{
				return true;
			}
			if (Global_262145.f_12216)
			{
				return true;
			}
			break;
		
		case 14:
			if (Global_262145.f_12215)
			{
				return true;
			}
			if (Global_262145.f_12217)
			{
				return true;
			}
			break;
		
		case 15:
			if (Global_262145.f_12215)
			{
				return true;
			}
			if (Global_262145.f_12218)
			{
				return true;
			}
			break;
	}
	iVar1 = get_hash_key(sParam0);
	iVar0 = 0;
	while (iVar0 < Global_262145.f_12219)
	{
		if (Global_262145.f_12219[iVar0] != 0)
		{
			if (iVar1 == Global_262145.f_12219[iVar0])
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

var func_176()
{
	return Global_17257.f_5743;
}

bool func_177(var uParam0)
{
	if (*uParam0.f_608 && *uParam0.f_496 == 6)
	{
		return true;
	}
	return false;
}

void func_178(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, int iParam7)
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
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;
	int iVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	int iVar57;
	int iVar58;
	float fVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	int iVar63;
	float fVar64;
	float fVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	
	if (!func_107(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_197(0, iParam6))
	{
		return;
	}
	_set_screen_draw_position(76, 84);
	_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_17257)
	{
		if (func_167(29, 1, 1, &fVar35, &fVar36, iParam7))
		{
			fVar55 = fVar36;
			fVar55 += 0f;
		}
		else
		{
			Global_17257 = 0;
		}
	}
	if (get_hash_key(&(Global_17257.f_1)) == get_hash_key("HIDE"))
	{
		fVar56 = Global_17255;
	}
	else
	{
		fVar56 = Global_17255 + fVar55 + 0.034722f + 0f;
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17256;
	}
	fVar59 = 1f;
	if (iParam7)
	{
		_get_screen_active_resolution(&iVar57, &iVar58);
		fVar60 = _get_screen_aspect_ratio(0);
		if (func_169())
		{
			iVar57 = round(to_float(iVar58) * fVar60);
		}
		fVar61 = to_float(iVar57) / to_float(iVar58);
		fVar59 = fVar61 / fVar60;
		if (func_169())
		{
			fVar59 = 1f;
		}
		iVar57 = round(to_float(iVar57) / fVar59);
		iVar58 = round(to_float(iVar58) / fVar59);
	}
	else
	{
		get_screen_resolution(&iVar57, &iVar58);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17257.f_5598)
		{
			if (get_hash_key(&(Global_17257.f_1)) == get_hash_key("HIDE"))
			{
				fVar49 = Global_17255;
			}
			else
			{
				if (Global_17257)
				{
					draw_sprite(func_172(29), func_170(29, 1), Global_17254 + fParam5 * 0.5f, Global_17255 + fVar55 - 0f * 0.5f, fParam5, fVar55 - 0f, 0f, 255, 255, 255, 255, 0);
				}
				if (Global_17257.f_7832)
				{
					iVar1 = Global_17257.f_7828;
					iVar2 = Global_17257.f_7829;
					iVar3 = Global_17257.f_7830;
					iVar4 = Global_17257.f_7831;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_196(Global_17254, Global_17255 + fVar55, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = Global_17255 + fVar55 + 0.034722f + 0f;
				if (get_hash_key(&(Global_17257.f_1)) != 0)
				{
					func_195();
					_set_text_entry(&(Global_17257.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17257.f_68)
					{
						if (Global_17257.f_5[iVar14] == 2)
						{
							add_text_component_integer(Global_17257.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17257.f_5[iVar14] == 3)
						{
							add_text_component_float(Global_17257.f_14[iVar16], Global_17257.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17257.f_5[iVar14] == 1)
						{
							_add_text_component_item_string(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 8)
						{
							_add_text_component_item_string(&(Global_17257.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17257.f_5[iVar14] == 5)
						{
							add_text_component_substring_player_name(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 6)
						{
							_add_text_component_item_string(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17257.f_5[iVar14] == 7)
						{
							add_text_component_substring_player_name(&(Global_17257.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					_draw_text(Global_17254 + 0.00390625f, Global_17255 + fVar55 + 0.00416664f, 0);
				}
				if (Global_17257.f_5601 > Global_17257.f_5095)
				{
					if (Global_17257.f_5604 != 0)
					{
						func_195();
						func_193(Global_17254 + fParam5 - 0.00390625f - func_194("CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603), Global_17255 + fVar55 + 0.00416664f, "CM_ITEM_COUNT", Global_17257.f_5604, Global_17257.f_5603);
					}
				}
			}
			iVar6 = Global_17257.f_5605;
			iVar9 = 0;
			fVar62 = fVar49;
			if (Global_17257.f_7842)
			{
				iVar1 = Global_17257.f_7838;
				iVar2 = Global_17257.f_7839;
				iVar3 = Global_17257.f_7840;
				iVar4 = Global_17257.f_7841;
			}
			else
			{
				get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17257.f_5095 && iVar6 <= Global_17257.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17257.f_5355[iVar6])
					{
						if (Global_17257.f_5226[iVar6] && iVar6 != Global_17257.f_5605)
						{
							fVar49 += 0.00277776f;
						}
						fVar54 = 0.034722f;
						if (Global_17257.f_5612[iVar6] != 0f)
						{
							fVar54 = Global_17257.f_5612[iVar6];
						}
						fVar49 += fVar54;
						iVar9++;
					}
				}
				iVar6++;
			}
			if (iParam3)
			{
				if (iVar9 <= 1)
				{
					fVar54 = 0.034722f;
					fVar49 += fVar54;
					iVar9++;
					if (Global_17257.f_5088 <= 1)
					{
						Global_17257.f_5088++;
					}
					iVar52 = 1;
				}
			}
			draw_sprite("CommonMenu", "Gradient_Bgd", Global_17254 + fParam5 * 0.5f, fVar62 + fVar49 - fVar62 * 0.5f - 0.00138888f, fParam5, fVar49 - fVar62, 0f, 255, 255, 255, 255, 0);
			if (Global_17257.f_5601 > Global_17257.f_5095)
			{
				if (Global_17257.f_7847)
				{
					iVar1 = Global_17257.f_7843;
					iVar2 = Global_17257.f_7844;
					iVar3 = Global_17257.f_7845;
					iVar4 = Global_17257.f_7846;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_196(Global_17254, fVar49 + 0f, fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar37 = {get_texture_resolution("CommonMenu", "shop_arrows_upANDdown")};
				vVar37.x *= 0.5f / fVar59;
				vVar37.y *= 0.5f / fVar59;
				if (Global_17257.f_7860)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					get_hud_colour(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				draw_sprite("CommonMenu", "shop_arrows_upANDdown", Global_17254 + fParam5 * 0.5f, fVar49 + 0f + 0.034722f * 0.5f, vVar37.x / 1280f * fVar59, vVar37.y / 720f * fVar59, 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 += 0f + 0.034722f;
			}
			if (get_hash_key(&(Global_17257.f_4562)) != 0 && Global_17257.f_4636 != -1)
			{
				fVar49 += 0.00277776f * 2f;
				fVar41 = Global_17254 + 0.0046875f;
				if (Global_17257.f_4638 != 0)
				{
					func_167(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17254 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_192(fVar41);
				_set_text_gxt_entry(&(Global_17257.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4632)
				{
					if (Global_17257.f_4566[iVar14] == 2)
					{
						add_text_component_integer(Global_17257.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4566[iVar14] == 3)
					{
						add_text_component_float(Global_17257.f_4575[iVar16], Global_17257.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4566[iVar14] == 1)
					{
						_add_text_component_item_string(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 5)
					{
						add_text_component_substring_player_name(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 6)
					{
						_add_text_component_item_string(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 7)
					{
						add_text_component_substring_player_name(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = _0x9040DFB09BE75706(fVar41, fVar49 + 0.00277776f);
				get_hud_colour(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_196(Global_17254, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7852)
				{
					iVar1 = Global_17257.f_7848;
					iVar2 = Global_17257.f_7849;
					iVar3 = Global_17257.f_7850;
					iVar4 = Global_17257.f_7851;
				}
				else
				{
					get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				draw_sprite("CommonMenu", "Gradient_Bgd", Global_17254 + fParam5 * 0.5f, fVar49 + _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1) * 0.5f - 0.00138888f, fParam5, _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_192(fVar41);
				_set_text_entry(&(Global_17257.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17257.f_4632)
				{
					if (Global_17257.f_4566[iVar14] == 2)
					{
						add_text_component_integer(Global_17257.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17257.f_4566[iVar14] == 3)
					{
						add_text_component_float(Global_17257.f_4575[iVar16], Global_17257.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17257.f_4566[iVar14] == 1)
					{
						_add_text_component_item_string(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 5)
					{
						add_text_component_substring_player_name(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 6)
					{
						_add_text_component_item_string(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 7)
					{
						add_text_component_substring_player_name(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17257.f_4566[iVar14] == 8)
					{
						_add_text_component_item_string(&(Global_17257.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				_draw_text(fVar41, fVar49 + 0.00277776f, 0);
				if (Global_17257.f_4638 != 0)
				{
					func_167(Global_17257.f_4638, 1, 1, &fVar35, &fVar36, iParam7);
					func_191(Global_17257.f_4638, 1, &iVar46, &iVar47, &iVar48);
					draw_sprite(func_172(Global_17257.f_4638), func_170(Global_17257.f_4638, 1), Global_17254 + fVar35 * 0.5f + 0.00078125f * 2f, fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 += _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_17257.f_4636 > 0)
				{
					if (get_game_timer() - Global_17257.f_4637 > Global_17257.f_4636)
					{
						StringCopy(&(Global_17257.f_4562), "", 16);
						Global_17257.f_4636 = -1;
					}
				}
			}
			if (get_hash_key(&(Global_2562053.f_21)) != 0 && Global_2562053.f_65 != -1)
			{
				fVar49 += 0.00277776f * 2f;
				fVar41 = Global_17254 + 0.0046875f;
				if (Global_2562053.f_67 != 0)
				{
					func_167(Global_2562053.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					fVar41 = Global_17254 + fVar35 + 0.00078125f * 4f - 0.00078125f * 1f;
				}
				func_192(fVar41);
				_set_text_gxt_entry(&(Global_2562053.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2562053.f_61)
				{
					if (Global_2562053.f_25[iVar14] == 2)
					{
						add_text_component_integer(Global_2562053.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2562053.f_25[iVar14] == 3)
					{
						add_text_component_float(Global_2562053.f_34[iVar16], Global_2562053.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2562053.f_25[iVar14] == 1)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 5)
					{
						add_text_component_substring_player_name(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 6)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 7)
					{
						add_text_component_substring_player_name(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 8)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = _0x9040DFB09BE75706(fVar41, fVar49 + 0.00277776f);
				get_hud_colour(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_196(Global_17254, fVar49 - 0.00277776f, fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17257.f_7852)
				{
					iVar1 = Global_17257.f_7848;
					iVar2 = Global_17257.f_7849;
					iVar3 = Global_17257.f_7850;
					iVar4 = Global_17257.f_7851;
				}
				else
				{
					get_hud_colour(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				draw_sprite("CommonMenu", "Gradient_Bgd", Global_17254 + fParam5 * 0.5f, fVar49 + _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1) * 0.5f - 0.00138888f, fParam5, _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_192(fVar41);
				_set_text_entry(&(Global_2562053.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_2562053.f_61)
				{
					if (Global_2562053.f_25[iVar14] == 2)
					{
						add_text_component_integer(Global_2562053.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_2562053.f_25[iVar14] == 3)
					{
						add_text_component_float(Global_2562053.f_34[iVar16], Global_2562053.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_2562053.f_25[iVar14] == 1)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 8)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 5)
					{
						add_text_component_substring_player_name(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 6)
					{
						_add_text_component_item_string(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_2562053.f_25[iVar14] == 7)
					{
						add_text_component_substring_player_name(&(Global_2562053.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				_draw_text(fVar41, fVar49 + 0.00277776f, 0);
				if (Global_2562053.f_67 != 0)
				{
					func_167(Global_2562053.f_67, 1, 1, &fVar35, &fVar36, iParam7);
					func_191(Global_2562053.f_67, 1, &iVar46, &iVar47, &iVar48);
					draw_sprite(func_172(Global_2562053.f_67), func_170(Global_2562053.f_67, 1), Global_17254 + fVar35 * 0.5f + 0.00078125f * 2f, fVar49 + fVar36 * 0.5f - 0.00138888f * 4f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
				}
				fVar49 += _get_text_scale_height(0.35f, 0) * IntToFloat(iVar6) + 0.00138888f * 13f + 0.00138888f * 5f * IntToFloat(iVar6 - 1);
				if (Global_2562053.f_65 > 0)
				{
					if (get_game_timer() - Global_2562053.f_66 > Global_2562053.f_65)
					{
						StringCopy(&(Global_2562053.f_21), "", 16);
						Global_2562053.f_65 = -1;
					}
				}
			}
			func_186(iVar57, iParam1, 0, 0, 0, 0, iParam4, 1, 0);
			_set_screen_draw_position(76, 84);
			_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17257.f_5598)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar63 = Global_17257.f_5088;
			if (Global_17257.f_5599)
			{
				iVar63 = Global_17257.f_5602 - 1;
			}
			fVar64 = 0f;
			fVar65 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar63)
			{
				fVar54 = 0.034722f;
				if (Global_17257.f_5612[iVar6] != 0f)
				{
					fVar54 = Global_17257.f_5612[iVar6];
				}
				if (Global_17257.f_5599)
				{
					iVar6 = Global_17257.f_7488[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				iVar32 = false;
				if (iVar6 >= Global_17257.f_5605 && iVar9 < Global_17257.f_5095)
				{
					iVar32 = true;
					if (Global_17257.f_5606 == iVar6)
					{
						fVar65 = fVar64;
					}
					if (Global_17257.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar34 = fVar56 + fVar64 + 0.00277776f * IntToFloat(iVar12) + 0.00277776f;
				}
				Global_17257.f_5746[iVar6] = fVar34;
				fVar33 = Global_17254 + 0.0046875f;
				iVar40 = false;
				iVar31 = Global_17257.f_5606 == iVar6;
				if ((iVar31 && iVar5 == 1) && iVar32)
				{
					iVar66 = 255;
					iVar67 = 255;
					iVar68 = 255;
					iVar69 = 255;
					if (Global_17257.f_7854)
					{
						get_hud_colour(Global_17257.f_7853, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					else
					{
						get_hud_colour(1, &iVar66, &iVar67, &iVar68, &iVar69);
					}
					draw_sprite("CommonMenu", "Gradient_Nav", Global_17254 + fParam5 * 0.5f, fVar56 + fVar65 + 0.00277776f * IntToFloat(iVar12) + fVar54 * 0.5f, fParam5, fVar54, 0f, iVar66, iVar67, iVar68, iVar69, 0);
					Global_17257.f_5744 = fVar34;
				}
				if (iVar52 && iVar7 == iVar63)
				{
					func_184(iVar31, 1, 0, 0, 0, 0);
					_set_text_entry("DFLT_MNU_OPT");
					_draw_text(fVar33, fVar34, 0);
					iVar40 = true;
				}
				else
				{
					iVar8 = false;
					while (iVar8 < Global_17257.f_5096)
					{
						if (is_bit_set(Global_17257.f_4959[iVar6], iVar8) || Global_17257.f_4926[iVar8] == 5)
						{
							if (Global_17257.f_5599)
							{
								iVar19 = Global_17257.f_7499[iVar9 * Global_17257.f_5096 + iVar8];
								iVar20 = Global_17257.f_7540[iVar9 * Global_17257.f_5096 + iVar8];
								iVar21 = Global_17257.f_7581[iVar9 * Global_17257.f_5096 + iVar8];
								iVar22 = Global_17257.f_7622[iVar9 * Global_17257.f_5096 + iVar8];
								iVar23 = Global_17257.f_7663[iVar9 * Global_17257.f_5096 + iVar8];
							}
							else
							{
								Global_17257.f_7499[iVar9 * Global_17257.f_5096 + iVar8] = iVar19;
								Global_17257.f_7540[iVar9 * Global_17257.f_5096 + iVar8] = iVar20;
								Global_17257.f_7581[iVar9 * Global_17257.f_5096 + iVar8] = iVar21;
								Global_17257.f_7622[iVar9 * Global_17257.f_5096 + iVar8] = iVar22;
								Global_17257.f_7663[iVar9 * Global_17257.f_5096 + iVar8] = iVar23;
							}
							iVar70 = 0;
							iVar53 = false;
							if (Global_17257.f_5878[0] != -1)
							{
								if (iVar6 * 5 + iVar8 == Global_17257.f_5875[0])
								{
									iVar53 = true;
									iVar70 = 0;
								}
							}
							if (Global_17257.f_5878[1] != -1)
							{
								if (iVar6 * 5 + iVar8 == Global_17257.f_5875[1])
								{
									iVar53 = true;
									iVar70 = 1;
								}
							}
							if (Global_17257.f_4932[iVar8] != -1f)
							{
								fVar33 = Global_17254 + 0.0046875f + Global_17257.f_4932[iVar8];
							}
							if ((iVar8 < 4 && Global_17257.f_4932[iVar8 + 1] != -1f) && fVar33 < Global_17257.f_4932[iVar8 + 1])
							{
								fVar45 = Global_17257.f_4932[iVar8 + 1] - fVar33;
							}
							else
							{
								fVar45 = Global_17254 + Global_17256 - 0.0046875f - fVar33;
							}
							if ((Global_17257.f_4945[iVar8] && Global_17257.f_5741) && iVar31)
							{
								iVar51 = true;
							}
							else
							{
								iVar51 = false;
							}
							switch (Global_17257.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && iVar32)
									{
										if (!Global_17257.f_5599)
										{
											fVar42 = 0f;
											fVar43 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												iVar50 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														iVar50 = true;
													}
													iVar14++;
												}
												func_184(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, iVar70, iVar50);
												_set_text_entry_for_width(&(Global_17257.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														_add_text_component_item_string(&(Global_17257.f_73[iVar24 + iVar25 /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														_add_text_component_item_string(&(Global_17257.f_73[iVar24 + iVar25 /*6*/]));
													}
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														add_text_component_substring_player_name(&(Global_2443586[iVar23 + iVar29 /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														_add_text_component_item_string(&(Global_2443586[iVar23 + iVar29 /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														add_text_component_substring_player_name(&(Global_2443586[iVar23 + iVar29 /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														add_text_component_integer(Global_17257.f_3918[iVar20 + iVar26]);
													}
													iVar26++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
													{
														add_text_component_float(Global_17257.f_4175[iVar21 + iVar27], Global_17257.f_4304[iVar21 + iVar27]);
													}
													iVar27++;
												}
												else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
											{
												fVar42 = _get_text_screen_width(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_167(Global_17257.f_4433[iVar22 + iVar14], iVar31, 0, &fVar35, &fVar36, iParam7))
													{
														fVar43 += fVar35;
														if (iVar14 > 0)
														{
															fVar43 -= 0.00078125f * 4f;
														}
														if (Global_17257.f_4433[iVar22 + iVar14] == 2 || Global_17257.f_4433[iVar22 + iVar14] == 48)
														{
															fVar43 -= 0.00078125f * 5f;
														}
													}
													iVar14++;
												}
											}
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 += fVar45 - fVar42 + fVar43 + 0.00078125f * 1f;
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 += fVar45 - fVar33 * 0.5f - fVar42 + fVar43 * 0.5f;
											}
											Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8] = fVar41;
											Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8] = fVar42;
											Global_17257.f_7786[iVar9 * Global_17257.f_5096 + iVar8] = fVar43;
										}
										else
										{
											fVar41 = Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8];
											fVar42 = Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8];
											fVar43 = Global_17257.f_7786[iVar9 * Global_17257.f_5096 + iVar8];
										}
										if (iVar51)
										{
											if (func_167(26, 1, 0, &fVar35, &fVar36, iParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_167(26, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_191(26, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_172(26), func_170(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_167(27, 1, 0, &fVar35, &fVar36, iParam7))
											{
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_167(27, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_191(27, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_172(27), func_170(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar30 = 0;
										if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											iVar50 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar50 = true;
												}
												iVar14++;
											}
											func_184(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, iVar50);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_183(iVar31);
											}
											_set_text_entry(&(Global_17257.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													_add_text_component_item_string(&(Global_17257.f_73[iVar24 + iVar25 /*6*/]));
												}
												iVar30 = 1;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													_add_text_component_item_string(&(Global_17257.f_73[iVar24 + iVar25 /*6*/]));
												}
												iVar30 = 8;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													add_text_component_substring_player_name(&(Global_2443586[iVar23 + iVar29 /*16*/]));
												}
												iVar29++;
												iVar30 = 5;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													_add_text_component_item_string(&(Global_2443586[iVar23 + iVar29 /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													add_text_component_substring_player_name(&(Global_2443586[iVar23 + iVar29 /*16*/]));
												}
												iVar29++;
												iVar30 = 6;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													add_text_component_integer(Global_17257.f_3918[iVar20 + iVar26]);
												}
												iVar26++;
												iVar30 = 2;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
												{
													add_text_component_float(Global_17257.f_4175[iVar21 + iVar27], Global_17257.f_4304[iVar21 + iVar27]);
												}
												iVar27++;
												iVar30 = 3;
											}
											else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17257.f_4433[iVar22 + iVar28] == 2 || Global_17257.f_4433[iVar22 + iVar28] == 48)
												{
													if (func_167(Global_17257.f_4433[iVar22 + iVar28], iVar31, 0, &fVar35, &fVar36, iParam7))
													{
														fVar41 += fVar35 * 0.5f;
														if (func_167(Global_17257.f_4433[iVar22 + iVar28], iVar31, 1, &fVar35, &fVar36, iParam7))
														{
															func_191(Global_17257.f_4433[iVar22 + iVar28], iVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4953[iVar8] == 2)
															{
																draw_sprite(func_172(Global_17257.f_4433[iVar22 + iVar28]), func_170(Global_17257.f_4433[iVar22 + iVar28], iVar31), fVar33 + fVar41 - 0.00078125f * 8f + 0.00078125f * 4f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																draw_sprite(func_172(Global_17257.f_4433[iVar22 + iVar28]), func_170(Global_17257.f_4433[iVar22 + iVar28], iVar31), fVar33 + fVar41 - 0.00078125f * 8f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															fVar41 += 0.00078125f * 3f;
														}
													}
												}
												iVar28++;
												iVar30 = 4;
											}
											iVar14++;
										}
										if (get_hash_key(&(Global_17257.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar30 == 4 && Global_17257.f_4953[iVar8] == 2)
											{
												_draw_text(fVar33 + fVar41 + 0.00078125f * 7f, fVar34, 0);
											}
											else
											{
												_draw_text(fVar33 + fVar41, fVar34, 0);
											}
										}
										if (iVar28 > 0)
										{
											fVar41 += 6f * 0.00078125f;
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17257.f_4433[iVar22 + iVar14] != 2 && Global_17257.f_4433[iVar22 + iVar14] != 48)
												{
													if (func_167(Global_17257.f_4433[iVar22 + iVar14], iVar31, 0, &fVar35, &fVar36, iParam7))
													{
														fVar41 += fVar35 * 0.5f;
														if (func_167(Global_17257.f_4433[iVar22 + iVar14], iVar31, 1, &fVar35, &fVar36, iParam7))
														{
															func_191(Global_17257.f_4433[iVar22 + iVar14], iVar31, &iVar46, &iVar47, &iVar48);
															if (Global_17257.f_4433[iVar22 + iVar14] == 30)
															{
																draw_sprite(func_172(Global_17257.f_4433[iVar22 + iVar14]), func_170(Global_17257.f_4433[iVar22 + iVar14], iVar31), Global_17254 + fVar35 * 0.5f, fVar34 + 0.00277776f + fVar36 * 0.5f - 0.00078125f * 11f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else if (Global_17257.f_4953[iVar8] == 2)
															{
																draw_sprite(func_172(Global_17257.f_4433[iVar22 + iVar14]), func_170(Global_17257.f_4433[iVar22 + iVar14], iVar31), fVar33 + fVar41 + fVar42 - 0.00078125f * 8f + 0.00078125f * 4f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
															else
															{
																draw_sprite(func_172(Global_17257.f_4433[iVar22 + iVar14]), func_170(Global_17257.f_4433[iVar22 + iVar14], iVar31), fVar33 + fVar41 + fVar42 - 0.00078125f * 12f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
															}
														}
														fVar41 += 12f * 0.00078125f;
													}
												}
												iVar14++;
											}
										}
									}
									iVar40 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17257.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && iVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_184(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_183(iVar31);
											}
											_set_text_entry_for_width("NUMBER");
											add_text_component_integer(Global_17257.f_3918[iVar20]);
											fVar42 = _get_text_screen_width(1);
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 += fVar45 - fVar42 + 0.00078125f * 1f;
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 += fVar45 - fVar33 * 0.5f - fVar42 * 0.5f;
											}
											Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8] = fVar41;
											Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8];
											fVar42 = Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8];
										}
										if (iVar51)
										{
											if (func_167(26, 1, 0, &fVar35, &fVar36, iParam7))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_167(26, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_191(26, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_172(26), func_170(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_167(27, 1, 0, &fVar35, &fVar36, iParam7))
											{
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_167(27, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_191(27, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_172(27), func_170(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_184(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
										func_182(fVar33 + fVar41, fVar34, "NUMBER", Global_17257.f_3918[iVar20], 0);
									}
									iVar40 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && iVar32)
									{
										if (!Global_17257.f_5599)
										{
											func_184(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
											if (Global_17257.f_7858 && Global_17257.f_7859 == iVar6)
											{
												func_183(iVar31);
											}
											_set_text_entry_for_width("NUMBER");
											add_text_component_float(Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
											fVar42 = _get_text_screen_width(1);
											fVar41 = 0f;
											if (Global_17257.f_4953[iVar8] == 2)
											{
												fVar41 += fVar45 - fVar42 + 0.00078125f * 1f;
											}
											else if (Global_17257.f_4953[iVar8] == 0)
											{
												fVar41 += fVar45 - fVar33 * 0.5f - fVar42 * 0.5f;
											}
											Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8] = fVar41;
											Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8] = fVar42;
										}
										else
										{
											fVar41 = Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8];
											fVar42 = Global_17257.f_7745[iVar9 * Global_17257.f_5096 + iVar8];
										}
										if (iVar51)
										{
											if (func_167(26, 1, 0, &fVar35, &fVar36, 0))
											{
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 -= fVar35 * 2f;
												}
												fVar44 = fVar35 * 0.5f;
												if (func_167(26, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_191(26, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_172(26), func_170(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
											if (func_167(27, 1, 0, &fVar35, &fVar36, iParam7))
											{
												fVar41 += fVar35;
												fVar44 = fVar35 * 0.5f;
												if (func_167(27, 1, 1, &fVar35, &fVar36, iParam7))
												{
													func_191(27, 1, &iVar46, &iVar47, &iVar48);
													draw_sprite(func_172(27), func_170(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
												}
											}
										}
										func_184(iVar31, Global_17257.f_1610[iVar24], Global_17257.f_1867[iVar24], iVar53, 0, 0);
										func_181(fVar33 + fVar41, fVar34, "NUMBER", Global_17257.f_4175[iVar21], Global_17257.f_4304[iVar21]);
									}
									iVar40 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && iVar32)
									{
										if (func_167(Global_17257.f_4433[iVar22], iVar31, 0, &fVar35, &fVar36, iParam7))
										{
											if (!Global_17257.f_5599)
											{
												fVar43 = fVar35;
												fVar41 = 0f;
												if (Global_17257.f_4953[iVar8] == 2)
												{
													fVar41 += fVar45 - fVar43 + 0.00078125f * 1f;
												}
												else if (Global_17257.f_4953[iVar8] == 0)
												{
													fVar41 += fVar45 - fVar33 * 0.5f - fVar43 * 0.5f;
												}
												Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8] = fVar41;
												Global_17257.f_7786[iVar9 * Global_17257.f_5096 + iVar8] = fVar43;
											}
											else
											{
												fVar41 = Global_17257.f_7704[iVar9 * Global_17257.f_5096 + iVar8];
												fVar43 = Global_17257.f_7786[iVar9 * Global_17257.f_5096 + iVar8];
											}
											if (iVar51)
											{
												if (func_167(26, 1, 0, &fVar35, &fVar36, iParam7))
												{
													if (Global_17257.f_4953[iVar8] == 2)
													{
														fVar41 -= fVar35 * 2f;
													}
													fVar44 = fVar35 * 0.5f;
													if (func_167(26, 1, 1, &fVar35, &fVar36, iParam7))
													{
														func_191(26, 1, &iVar46, &iVar47, &iVar48);
														draw_sprite(func_172(26), func_170(26, 1), fVar33 + fVar41 + fVar44, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
												if (func_167(27, 1, 0, &fVar35, &fVar36, iParam7))
												{
													fVar41 += fVar35;
													fVar44 = fVar35 * 0.5f;
													if (func_167(27, 1, 1, &fVar35, &fVar36, iParam7))
													{
														func_191(27, 1, &iVar46, &iVar47, &iVar48);
														draw_sprite(func_172(27), func_170(27, 1), fVar33 + fVar41 + fVar44 + fVar42 + fVar43, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35, fVar36, 0f, iVar46, iVar47, iVar48, 255, 0);
													}
												}
											}
											if (func_167(Global_17257.f_4433[iVar22], iVar31, 1, &fVar35, &fVar36, iParam7))
											{
												func_191(Global_17257.f_4433[iVar22], iVar31, &iVar46, &iVar47, &iVar48);
												draw_sprite(func_172(Global_17257.f_4433[iVar22]), func_170(Global_17257.f_4433[iVar22], iVar31), fVar33 + fVar41 + fVar35 * 0.5f, fVar34 - 0.00277776f + fVar54 * 0.5f, fVar35 * func_180(Global_17257.f_4433[iVar22]), fVar36 * func_180(Global_17257.f_4433[iVar22]), 0f, iVar46, iVar47, iVar48, 255, 0);
											}
										}
									}
									iVar40 = true;
									iVar22++;
									break;
								
								case 5:
									iVar40 = true;
									break;
							}
							if (Global_17257.f_4926[iVar8] == 5)
							{
								if (Global_17257.f_4938[iVar8] > 0.05f)
								{
									fVar33 += Global_17257.f_4938[iVar8];
								}
								else
								{
									fVar33 += 0.05f;
								}
							}
							else
							{
								fVar33 += Global_17257.f_4938[iVar8];
								if (Global_17257.f_4945[iVar8])
								{
									if (func_167(26, 1, 1, &fVar35, &fVar36, iParam7))
									{
										fVar33 -= fVar35;
									}
								}
							}
						}
						else
						{
							fVar33 += Global_17257.f_4938[iVar8];
						}
						iVar8++;
					}
				}
				if (iVar40)
				{
					if (iVar32)
					{
						Global_17257.f_7488[iVar9] = iVar6;
						Global_17257.f_5607 = iVar6;
						iVar9++;
						if (Global_17257.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17257.f_5612[iVar6] != 0f)
						{
							fVar64 += Global_17257.f_5612[iVar6];
						}
						else
						{
							fVar64 += 0.034722f;
						}
					}
					if (!Global_17257.f_5598)
					{
						Global_17257.f_5355[iVar6] = 1;
						if (Global_17257.f_5097[iVar6])
						{
							if (iVar31)
							{
								Global_17257.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (iVar31)
							{
								Global_17257.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17257.f_5598)
			{
				Global_17257.f_5600 = fVar56 + fVar64 + 0.00277776f * IntToFloat(iVar12);
				Global_17257.f_5603 = iVar11;
				Global_17257.f_5601 = iVar10;
				Global_17257.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17257.f_5599)
	{
		Global_17257.f_5602 = iVar9;
		Global_17257.f_5599 = 1;
	}
	Global_17257.f_5743 = fVar49;
	Global_17257.f_5745 = get_game_timer();
	_0x55598D21339CB998(Global_17257.f_5743);
	if (!Global_17257.f_7827)
	{
		func_657();
	}
	Global_17257.f_7827 = 0;
	if (iParam2)
	{
		hide_hud_component_this_frame(10);
	}
	hide_hud_component_this_frame(6);
	hide_hud_component_this_frame(7);
	hide_hud_component_this_frame(9);
	hide_hud_component_this_frame(8);
	if (iParam0)
	{
		func_179(1);
	}
	_0xE3A3DB414A373DAB();
}

void func_179(int iParam0)
{
	Global_1339940.f_932 = iParam0;
}

float func_180(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_181(float fParam0, float fParam1, char* sParam2, Vector3 fParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_float(fParam3, iParam4);
	_draw_text(fParam0, fParam1, 0);
}

void func_182(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_integer(iParam3);
	_draw_text(fParam0, fParam1, iParam4);
}

void func_183(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (iParam0)
	{
		get_hud_colour(Global_17257.f_7855[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		get_hud_colour(Global_17257.f_7855[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	set_text_colour(iVar0, iVar1, iVar2, 255);
}

void func_184(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2)
	{
		if (iParam3)
		{
			func_185(Global_17257.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (iParam0 == 0)
				{
					get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (iParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			set_text_colour(iVar0, iVar1, iVar2, 255);
		}
		else if (iParam1)
		{
			if (iParam0)
			{
				get_hud_colour(14, &iVar0, &iVar1, &iVar2, &iVar3);
				set_text_colour(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				get_hud_colour(12, &iVar0, &iVar1, &iVar2, &iVar3);
				set_text_colour(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (iParam0)
		{
			set_text_colour(155, 155, 155, 255);
		}
		else
		{
			set_text_colour(155, 155, 155, 255);
		}
	}
	else if (iParam1)
	{
		if (iParam0)
		{
			set_text_colour(0, 0, 0, floor(255f * 0.8f));
		}
		else
		{
			get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
			set_text_colour(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (iParam0)
	{
		set_text_colour(155, 155, 155, 255);
	}
	else
	{
		set_text_colour(155, 155, 155, 255);
	}
	set_text_scale(0f, 0.35f);
	set_text_justification(1);
	if (iParam5)
	{
		set_text_scale(0f, 0.425f);
		set_text_font(4);
	}
	else
	{
		set_text_font(0);
	}
	set_text_wrap(0f, 1f);
	set_text_centre(0);
	set_text_dropshadow(0, 0, 0, 0, 0);
	set_text_edge(0, 0, 0, 0, 0);
}

void func_185(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_186(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (!func_107(&uVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_197(iParam4, iParam8))
	{
		return;
	}
	if (func_189())
	{
		return;
	}
	if (_network_is_text_chat_active())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_31(player_id(), 0))
		{
			return;
		}
	}
	if (is_pc_version())
	{
		if (update_onscreen_keyboard() == 0 || _network_is_text_chat_active())
		{
			return;
		}
	}
	if (Global_17257.f_4639 != 0)
	{
		if (_0x6CD79468A1E595C6(2))
		{
			iVar1 = false;
			while (iVar1 < Global_17257.f_4639)
			{
				if (Global_17257.f_4896[iVar1] != 344)
				{
					StringCopy(&(Global_17257.f_4641[iVar1 /*16*/]), _get_control_action_name(2, Global_17257.f_4896[iVar1], true), 64);
				}
				else if (Global_17257.f_4909[iVar1] != 31)
				{
					StringCopy(&(Global_17257.f_4641[iVar1 /*16*/]), _0x80C2FD58D720C801(2, Global_17257.f_4909[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_17257.f_4640 = 0;
		}
		if (!Global_17257.f_4640)
		{
			_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "CLEAR_ALL");
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "SET_MAX_WIDTH");
			_push_scaleform_movie_function_parameter_float(1f - Global_17257.f_4951 / 100f);
			_pop_scaleform_movie_function_void();
			if (is_pc_version())
			{
				_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				_push_scaleform_movie_function_parameter_bool(true);
				_pop_scaleform_movie_function_void();
			}
			iVar1 = false;
			while (iVar1 < Global_17257.f_4639)
			{
				if (get_hash_key(&(Global_17257.f_4834[iVar1 /*4*/])) != get_hash_key("PREV"))
				{
					_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "SET_DATA_SLOT");
					_push_scaleform_movie_function_parameter_int(iVar1);
					func_188(&(Global_17257.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && get_hash_key(&(Global_17257.f_4834[iVar2 /*4*/])) == get_hash_key("PREV"))
					{
						func_188(&(Global_17257.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17257.f_4883[iVar1] == -1)
					{
						func_187(&(Global_17257.f_4834[iVar1 /*4*/]));
					}
					else
					{
						_begin_text_component(&(Global_17257.f_4834[iVar1 /*4*/]));
						if (iParam5)
						{
							add_text_component_substring_time(iParam2, 70);
						}
						else
						{
							add_text_component_integer(iParam2);
						}
						_end_text_component();
					}
					if (is_pc_version())
					{
						if (Global_17257.f_4896[iVar1] != 344 && is_bit_set(Global_17257.f_4922, iVar1))
						{
							_push_scaleform_movie_function_parameter_bool(true);
							_push_scaleform_movie_function_parameter_int(Global_17257.f_4896[iVar1]);
						}
						else
						{
							_push_scaleform_movie_function_parameter_bool(false);
							_push_scaleform_movie_function_parameter_int(344);
						}
					}
					_pop_scaleform_movie_function_void();
				}
				iVar1++;
			}
			if (get_hash_key(&(Global_2562053.f_16)) != get_hash_key(""))
			{
				_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "SET_DATA_SLOT");
				_push_scaleform_movie_function_parameter_int(Global_17257.f_4639);
				func_188(&Global_2562053);
				if (Global_2562053.f_20 == -1)
				{
					func_187(&(Global_2562053.f_16));
				}
				else
				{
					_begin_text_component(&(Global_2562053.f_16));
					if (iParam5)
					{
						add_text_component_substring_time(iParam2, 70);
					}
					else
					{
						add_text_component_integer(iParam2);
					}
					_end_text_component();
				}
				_pop_scaleform_movie_function_void();
			}
			_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(false);
			_push_scaleform_movie_function_parameter_int(80);
			_pop_scaleform_movie_function_void();
			_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17257.f_4952)
			{
				_push_scaleform_movie_function_parameter_int(true);
			}
			else
			{
				_push_scaleform_movie_function_parameter_int(false);
			}
			_pop_scaleform_movie_function_void();
			Global_17257.f_4640 = 1;
		}
		iVar1 = false;
		while (iVar1 < Global_17257.f_4639)
		{
			if (Global_17257.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					_push_scaleform_movie_function_parameter_int(iVar1);
					_begin_text_component(&(Global_17257.f_4834[iVar1 /*4*/]));
					if (iParam5)
					{
						add_text_component_substring_time(iParam2, 70);
					}
					else
					{
						add_text_component_integer(iParam2);
					}
					_end_text_component();
					_pop_scaleform_movie_function_void();
				}
			}
			iVar1++;
		}
		if (Global_2562053.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				_push_scaleform_movie_function(Global_17257.f_5530[uVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				_push_scaleform_movie_function_parameter_int(iVar1);
				_begin_text_component(&(Global_2562053.f_16));
				if (iParam5)
				{
					add_text_component_substring_time(iParam2, 70);
				}
				else
				{
					add_text_component_integer(iParam2);
				}
				_end_text_component();
				_pop_scaleform_movie_function_void();
			}
		}
		_set_screen_draw_position(76, 66);
		_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
		if (iParam6)
		{
			if (!Global_17257.f_7862)
			{
				set_hud_component_position(15, 0f, -0.0375f);
				Global_17257.f_7862 = 1;
			}
		}
		else if (Global_17257.f_7862)
		{
			reset_hud_component_values(15);
			Global_17257.f_7862 = 0;
		}
		_0xE3A3DB414A373DAB();
		if (Global_17257.f_4925)
		{
			_set_screen_draw_position(82, 66);
			_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
			draw_scaleform_movie(Global_17257.f_5530[uVar0 /*10*/], Global_17257.f_4923, Global_17257.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			_0xE3A3DB414A373DAB();
		}
		else
		{
			draw_scaleform_movie_fullscreen(Global_17257.f_5530[uVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_187(char* sParam0)
{
	_begin_text_component(sParam0);
	_end_text_component();
}

void func_188(char* sParam0)
{
	_0xE83A3E3557A56640(sParam0);
}

bool func_189()
{
	vector3 vVar0;
	
	if (Global_14413.f_1 > 3)
	{
		return true;
	}
	if (func_190())
	{
		vVar0 = {0f, -500f, 0f};
		get_mobile_phone_position(&vVar0);
		if (Global_14358 == 0)
		{
			if (vVar0.y > -119f)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else if (vVar0.y > -101f)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_190()
{
	if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) > 0)
	{
		return true;
	}
	return false;
}

void func_191(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	
	get_hud_colour(1, iParam2, iParam3, iParam4, &uVar0);
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (iParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
	}
}

void func_192(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
	set_text_font(0);
	set_text_scale(0f, 0.35f);
	set_text_leading(2);
	set_text_colour(iVar0, iVar1, iVar2, iVar3);
	set_text_wrap(fParam0, Global_17254 + Global_17256 - 0.0046875f);
	set_text_centre(0);
	set_text_dropshadow(0, 0, 0, 0, 0);
	set_text_edge(0, 0, 0, 0, 0);
}

void func_193(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	_set_text_entry(sParam2);
	add_text_component_integer(iParam3);
	add_text_component_integer(iParam4);
	_draw_text(fParam0, fParam1, 0);
}

float func_194(char* sParam0, int iParam1, int iParam2)
{
	if (!is_string_null(sParam0))
	{
		if (get_hash_key(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_195();
	_set_text_entry_for_width(sParam0);
	add_text_component_integer(iParam1);
	add_text_component_integer(iParam2);
	return _get_text_screen_width(1);
}

void func_195()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	get_hud_colour(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17257.f_7837)
	{
		iVar0 = Global_17257.f_7833;
		iVar1 = Global_17257.f_7834;
		iVar2 = Global_17257.f_7835;
		iVar3 = Global_17257.f_7836;
	}
	set_text_font(0);
	set_text_scale(0f, 0.35f);
	set_text_colour(iVar0, iVar1, iVar2, iVar3);
	set_text_wrap(Global_17254 + 0.0046875f, Global_17254 + Global_17256 - 0.0046875f);
	set_text_centre(0);
	set_text_dropshadow(0, 0, 0, 0, 0);
	set_text_edge(0, 0, 0, 0, 0);
}

void func_196(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	draw_rect(fParam0 + fParam2 * 0.5f, fParam1 + fParam3 * 0.5f, fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

bool func_197(int iParam0, int iParam1)
{
	if (Global_2428492.f_1358.f_688 != 0)
	{
		return true;
	}
	if ((((((((!is_screen_faded_in() || (func_199(8, -1) && func_198() != 64)) || (get_pause_menu_state() != 0 && !iParam1)) || (is_player_switch_in_progress() && !iParam0)) || _0x2EAC52B4019E2782()) || Global_69749) || Global_17257.f_7861) || is_warning_message_active()) || Global_91330.f_1352)
	{
		return false;
	}
	return true;
}

var func_198()
{
	return Global_1315846;
}

int func_199(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return is_bit_set(Global_1338622.f_949, iParam0);
}

bool func_200(char* sParam0)
{
	int iVar0;
	
	if (is_string_null_or_empty(sParam0))
	{
		return true;
	}
	iVar0 = get_hash_key(_get_text_substring(sParam0, 0, 6));
	switch (iVar0)
	{
		case -1647080257:
		case -1635032722:
			return true;
			break;
	}
	iVar0 = get_hash_key(sParam0);
	switch (iVar0)
	{
		case 1174717920:
		case 935831910:
		case 716312379:
		case -1690636213:
		case 484275090:
		case 245552925:
		case 7912137:
		case -228516198:
		case -1323361481:
		case 534607938:
		case 278944200:
		case -152361378:
		case 1387912810:
		case 873636124:
		case 641729911:
		case -1737561645:
		case 395339800:
		case 165072037:
		case 2109485850:
		case 1851888741:
		case -1238981638:
		case -1478883487:
		case -646157659:
		case -885600742:
		case -295955352:
		case 1481173056:
		case 310369455:
		case -37965015:
		case 118605023:
		case 360407474:
			return true;
			break;
	}
	return false;
}

bool func_201(char* sParam0)
{
	int iVar0;
	
	if (is_string_null_or_empty(sParam0))
	{
		return true;
	}
	iVar0 = get_hash_key(_get_text_substring(sParam0, 0, 6));
	switch (iVar0)
	{
		case -2115296325:
		case -1917727053:
			return true;
			break;
		
		case 1310830821:
		case -2080815574:
			return true;
			break;
		
		case 1264005900:
		case -2124002991:
			return true;
			break;
		
		case 1585373207:
			return true;
			break;
		
		case -32105449:
		case -723723000:
			return true;
			break;
		
		case -2100506294:
			return true;
			break;
	}
	return false;
}

bool func_202(char* sParam0)
{
	int iVar0;
	
	if (is_string_null_or_empty(sParam0))
	{
		return true;
	}
	iVar0 = get_hash_key(_get_text_substring(sParam0, 0, 6));
	switch (iVar0)
	{
		case -680965302:
		case 436097115:
		case 927511879:
			return true;
			break;
	}
	return false;
}

bool func_203(char* sParam0)
{
	int iVar0;
	
	if (is_string_null_or_empty(sParam0))
	{
		return true;
	}
	iVar0 = get_hash_key(_get_text_substring(sParam0, 0, 6));
	switch (iVar0)
	{
		case 2070857446:
			return true;
			break;
	}
	if (are_strings_equal(sParam0, "CC_MKUP_33"))
	{
		return true;
	}
	return false;
}

void func_204(char* sParam0)
{
	if (Global_17257.f_4635 >= 3 || Global_17257.f_4632 >= 4)
	{
		return;
	}
	Global_17257.f_4566[Global_17257.f_4632] = 1;
	Global_17257.f_4632++;
	StringCopy(&(Global_17257.f_4583[Global_17257.f_4635 /*16*/]), sParam0, 64);
	Global_17257.f_4635++;
}

char* func_205(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (is_string_null_or_empty(sParam0))
	{
		return "";
	}
	if (get_length_of_literal_string(sParam0) < 6)
	{
		return "";
	}
	iVar0 = get_hash_key(sParam0);
	iVar1 = get_hash_key(_get_text_substring(sParam0, 0, 6));
	switch (iVar1)
	{
		case -272077744:
		case -217636000:
			return "SHOP_CONTENT_1";
			break;
		
		case -291739204:
		case -1724452987:
			return "SHOP_CONTENT_2";
			break;
		
		case -680965302:
		case 436097115:
		case 927511879:
			if (!iParam1)
			{
				return "SHOP_CONTENT_3";
			}
			else
			{
				return "SHOP_CONTENT_3b";
			}
			break;
		
		case -1376583914:
			return "SHOP_CONTENT_4";
			break;
		
		case 753969907:
			return "SHOP_CONTENT_5";
			break;
		
		case -1461214493:
		case 469261390:
		case 1454369070:
			if (!iParam1)
			{
				return "SHOP_CONTENT_6";
			}
			else
			{
				return "SHOP_CONTENT_6b";
			}
			break;
		
		case -1497129317:
			if (!iParam1)
			{
				return "SHOP_CONTENT_7";
			}
			else
			{
				return "SHOP_CONTENT_7b";
			}
			break;
		
		case 2070857446:
			if (!iParam1)
			{
				return "SHOP_CONTENT_8";
			}
			else
			{
				return "SHOP_CONTENT_8b";
			}
			break;
		
		case 790660019:
			return "SHOP_CONTENT_9";
			break;
		
		case -1899372144:
			if (!iParam1)
			{
				return "SHOP_CONTENT_10";
			}
			else
			{
				return "SHOP_CONTENT_10b";
			}
			break;
		
		case 2009248638:
		case -434342601:
			if (((((iVar0 == -1357324997 || iVar0 == 64652989) || iVar0 == 1023408391) || iVar0 == 513852309) || iVar0 == 799565220) || iVar0 == -1823527696)
			{
				return "SHOP_CONTENT_14";
			}
			return "SHOP_CONTENT_12";
			break;
		
		case 1759048931:
			switch (iVar0)
			{
				case -1351684992:
				case -1657386993:
				case -1946409573:
				case -170362538:
				case -726555483:
				case -372257055:
				case -114397794:
				case -1749374280:
					return "";
					break;
			}
			return "SHOP_CONTENT_13";
			break;
		
		case 1974808259:
		case -1053480147:
			return "SHOP_CONTENT_14";
			break;
		
		case -2115296325:
		case -1917727053:
			return "SHOP_CONTENT_15";
			break;
		
		case -1647080257:
		case -1635032722:
			return "SHOP_CONTENT_16";
			break;
		
		case -32105449:
		case -723723000:
			return "SHOP_CONTENT_17";
			break;
		
		case 1310830821:
		case -2080815574:
			return "SHOP_CONTENT_18";
			break;
		
		case 1264005900:
		case -2124002991:
			if (iVar0 == -273286091 || iVar0 == 1363073245)
			{
				return "";
			}
			return "SHOP_CONTENT_19";
			break;
		
		case 1585373207:
			return "SHOP_CONTENT_21";
			break;
		
		case -2100506294:
			return "SHOP_CONTENT_22";
			break;
	}
	if (((are_strings_equal(sParam0, "CC_M_HS_16") || are_strings_equal(sParam0, "CC_M_HS_17")) || are_strings_equal(sParam0, "CC_F_HS_17")) || are_strings_equal(sParam0, "CC_F_HS_16"))
	{
		return "SHOP_CONTENT_1";
	}
	else if (((are_strings_equal(sParam0, "CC_M_HS_18") || are_strings_equal(sParam0, "CC_M_HS_19")) || are_strings_equal(sParam0, "CC_F_HS_18")) || are_strings_equal(sParam0, "CC_F_HS_19"))
	{
		return "SHOP_CONTENT_2";
	}
	else if (are_strings_equal(sParam0, "CC_F_HS_23"))
	{
		return "SHOP_CONTENT_4";
	}
	else if (((are_strings_equal(sParam0, "CC_M_HS_20") || are_strings_equal(sParam0, "CC_M_HS_21")) || are_strings_equal(sParam0, "CC_F_HS_20")) || are_strings_equal(sParam0, "CC_F_HS_21"))
	{
		if (!iParam1)
		{
			return "SHOP_CONTENT_6";
		}
		else
		{
			return "SHOP_CONTENT_6b";
		}
	}
	else if ((are_strings_equal(sParam0, "CC_M_HS_22") || are_strings_equal(sParam0, "CC_F_HS_22")) || are_strings_equal(sParam0, "CC_MKUP_33"))
	{
		if (!iParam1)
		{
			return "SHOP_CONTENT_8";
		}
		else
		{
			return "SHOP_CONTENT_8b";
		}
	}
	iVar1 = get_hash_key(sParam0);
	switch (iVar1)
	{
		case 1174717920:
		case 935831910:
		case 716312379:
		case -1690636213:
		case 484275090:
		case 245552925:
		case 7912137:
		case -228516198:
		case -1323361481:
		case 534607938:
		case 278944200:
		case -152361378:
		case 1387912810:
		case 873636124:
		case 641729911:
		case -1737561645:
		case 395339800:
		case 165072037:
		case 2109485850:
		case 1851888741:
		case -1238981638:
		case -1478883487:
		case -646157659:
		case -885600742:
		case -295955352:
		case 1481173056:
		case 310369455:
		case -37965015:
		case 118605023:
		case 360407474:
			return "SHOP_CONTENT_16";
			break;
	}
	return "";
}

bool func_206(char* sParam0)
{
	int iVar0;
	
	if (is_string_null_or_empty(sParam0))
	{
		return true;
	}
	if (get_length_of_literal_string(sParam0) < 6)
	{
		return true;
	}
	iVar0 = get_hash_key(_get_text_substring(sParam0, 0, 6));
	switch (iVar0)
	{
		case -272077744:
		case -217636000:
			return true;
			break;
		
		case -291739204:
		case -1724452987:
			return false;
			break;
		
		case -680965302:
		case 436097115:
		case 927511879:
			return false;
			break;
		
		case -1376583914:
			return true;
			break;
		
		case 753969907:
			return false;
			break;
		
		case -1461214493:
		case 469261390:
		case 1454369070:
			return false;
			break;
		
		case 2070857446:
			return false;
			break;
		
		case 790660019:
			return false;
			break;
		
		case -1899372144:
			return false;
			break;
		
		case -1497129317:
			return false;
			break;
		
		case 1759048931:
			return false;
			break;
		
		case 2009248638:
		case -434342601:
			return false;
			break;
		
		case 1974808259:
		case -1053480147:
			return false;
			break;
		
		case -1647080257:
		case -1635032722:
			return false;
			break;
		
		case -2115296325:
		case -1917727053:
			return false;
			break;
		
		case 1310830821:
		case -2080815574:
			return false;
			break;
		
		case 1264005900:
		case -2124002991:
			return false;
			break;
		
		case 111238245:
			return true;
			break;
		
		case 1585373207:
			return false;
			break;
		
		case -32105449:
		case -723723000:
			return false;
			break;
		
		case -2100506294:
			return false;
			break;
	}
	if (are_strings_equal(sParam0, "CC_MKUP_33"))
	{
		return false;
	}
	if (((((((((((((((((((((((((((((are_strings_equal(sParam0, "CC_MKUP_42") || are_strings_equal(sParam0, "CC_MKUP_43")) || are_strings_equal(sParam0, "CC_MKUP_44")) || are_strings_equal(sParam0, "CC_MKUP_45")) || are_strings_equal(sParam0, "CC_MKUP_46")) || are_strings_equal(sParam0, "CC_MKUP_47")) || are_strings_equal(sParam0, "CC_MKUP_48")) || are_strings_equal(sParam0, "CC_MKUP_49")) || are_strings_equal(sParam0, "CC_MKUP_50")) || are_strings_equal(sParam0, "CC_MKUP_51")) || are_strings_equal(sParam0, "CC_MKUP_52")) || are_strings_equal(sParam0, "CC_MKUP_53")) || are_strings_equal(sParam0, "CC_MKUP_54")) || are_strings_equal(sParam0, "CC_MKUP_55")) || are_strings_equal(sParam0, "CC_MKUP_56")) || are_strings_equal(sParam0, "CC_MKUP_57")) || are_strings_equal(sParam0, "CC_MKUP_58")) || are_strings_equal(sParam0, "CC_MKUP_59")) || are_strings_equal(sParam0, "CC_MKUP_60")) || are_strings_equal(sParam0, "CC_MKUP_61")) || are_strings_equal(sParam0, "CC_MKUP_62")) || are_strings_equal(sParam0, "CC_MKUP_63")) || are_strings_equal(sParam0, "CC_MKUP_64")) || are_strings_equal(sParam0, "CC_MKUP_65")) || are_strings_equal(sParam0, "CC_MKUP_66")) || are_strings_equal(sParam0, "CC_MKUP_67")) || are_strings_equal(sParam0, "CC_MKUP_68")) || are_strings_equal(sParam0, "CC_MKUP_69")) || are_strings_equal(sParam0, "CC_MKUP_70")) || are_strings_equal(sParam0, "CC_MKUP_71"))
	{
		return false;
	}
	return true;
}

bool func_207(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam2 == 1)
	{
		func_243(uParam0.f_456, &Global_2560058, 1, func_619(uParam0), -1, uParam0.f_685, uParam0.f_688);
		iVar0 = 0;
		while (iVar0 < Global_2560058.f_222)
		{
			Stack.Push(iParam1);
			Stack.Push(Global_2560058.f_111[iVar0]);
			Stack.Push(Global_2560058[iVar0]);
			Call_Loc(*uParam0.f_454);
			Stack.Push(iParam1);
			Stack.Push(Global_2560058.f_111[iVar0]);
			Stack.Push(Global_2560058[iVar0]);
			Call_Loc(*uParam0.f_451);
			if (StackVal && StackVal)
			{
				return true;
			}
			iVar0++;
		}
	}
	else if (iParam2 == 2)
	{
		if (!network_is_game_in_progress())
		{
			func_243(uParam0.f_456, &Global_2560058, 0, func_619(uParam0), -1, uParam0.f_685, uParam0.f_688);
			iVar1 = 0;
			while (iVar1 < Global_2560058.f_222)
			{
				Stack.Push(iParam1);
				Stack.Push(Global_2560058.f_111[iVar1]);
				Stack.Push(Global_2560058[iVar1]);
				Call_Loc(*uParam0.f_454);
				Stack.Push(iParam1);
				Stack.Push(Global_2560058.f_111[iVar1]);
				Stack.Push(Global_2560058[iVar1]);
				Call_Loc(*uParam0.f_451);
				if (StackVal && StackVal)
				{
					return true;
				}
				iVar1++;
			}
		}
		else
		{
			iVar3 = func_242();
			iVar2 = 0;
			while (iVar2 < iVar3)
			{
				if (func_241(iVar2) && !func_240(iVar2))
				{
					return true;
				}
				iVar2++;
			}
		}
	}
	else if (iParam2 == 3)
	{
		iVar4 = 0;
		while (iVar4 < *uParam0.f_582)
		{
			if (func_234(iVar4))
			{
				if (func_233(iVar4) && !func_230(iVar4))
				{
					return true;
				}
			}
			iVar4++;
		}
	}
	else if (func_604(iParam2))
	{
		iVar5 = 0;
		while (iVar5 < func_229(iParam1, iParam2))
		{
			if (func_212(uParam0, iParam1, iParam2, iVar5) && !func_208(uParam0, iParam1, iParam2, iVar5))
			{
				return true;
			}
			iVar5++;
		}
		return false;
	}
	return false;
}

bool func_208(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<12> Var0;
	
	if (func_521(iParam1, iParam2, iParam3, &Var0))
	{
		if (!func_209(Var0.f_11, 2, -1))
		{
			return false;
		}
		return true;
	}
	return true;
}

int func_209(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_69309;
	if (iParam2 != -1)
	{
		iVar0 = iParam2;
	}
	if (func_210(iParam0, iParam1, &iVar2, &iVar1))
	{
		iVar3 = func_17(iVar2, iVar0, 0);
		return is_bit_set(iVar3, iVar1);
	}
	return false;
}

int func_210(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	*uParam2 = 3949;
	iVar0 = func_211(iParam0);
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
					*uParam2 = 2355;
					break;
				
				case 1:
					*uParam2 = 2356;
					break;
				
				case 2:
					*uParam2 = 2357;
					break;
				
				case 3:
					*uParam2 = 2358;
					break;
				
				case 4:
					*uParam2 = 2359;
					break;
				
				case 5:
					*uParam2 = 2360;
					break;
				
				case 6:
					*uParam2 = 2361;
					break;
				
				case 7:
					*uParam2 = 2362;
					break;
				
				case 8:
					*uParam2 = 2363;
					break;
				
				case 9:
					*uParam2 = 2364;
					break;
				
				case 10:
					*uParam2 = 2365;
					break;
				
				case 11:
					*uParam2 = 2366;
					break;
				
				case 12:
					*uParam2 = 2917;
					break;
				
				case 13:
					*uParam2 = 2919;
					break;
				
				default:
					return false;
					break;
			}
			break;
		
		case 2:
			switch (floor(to_float(iVar0) / 32f))
			{
				case 0:
					*uParam2 = 2343;
					break;
				
				case 1:
					*uParam2 = 2344;
					break;
				
				case 2:
					*uParam2 = 2345;
					break;
				
				case 3:
					*uParam2 = 2346;
					break;
				
				case 4:
					*uParam2 = 2347;
					break;
				
				case 5:
					*uParam2 = 2348;
					break;
				
				case 6:
					*uParam2 = 2349;
					break;
				
				case 7:
					*uParam2 = 2350;
					break;
				
				case 8:
					*uParam2 = 2351;
					break;
				
				case 9:
					*uParam2 = 2352;
					break;
				
				case 10:
					*uParam2 = 2353;
					break;
				
				case 11:
					*uParam2 = 2354;
					break;
				
				case 12:
					*uParam2 = 2916;
					break;
				
				case 13:
					*uParam2 = 2918;
					break;
				
				default:
					return false;
					break;
			}
			break;
	}
	*uParam3 = iVar0 % 32;
	return *uParam2 != 3949;
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case 2086722024:
			return 0;
			break;
		
		case -1911587515:
			return 1;
			break;
		
		case -1882357567:
			return 2;
			break;
		
		case -969019995:
			return 3;
			break;
		
		case -411291615:
			return 4;
			break;
		
		case -82979004:
			return 5;
			break;
		
		case 218692410:
			return 6;
			break;
		
		case 511680047:
			return 7;
			break;
		
		case 558867407:
			return 8;
			break;
		
		case 808796570:
			return 9;
			break;
		
		case -1605550121:
			return 10;
			break;
		
		case -1378886948:
			return 11;
			break;
		
		case -1142819072:
			return 12;
			break;
		
		case -899836937:
			return 13;
			break;
		
		case 1454746793:
			return 14;
			break;
		
		case 1677117227:
			return 15;
			break;
		
		case 1931240822:
			return 16;
			break;
		
		case -2125331999:
			return 17;
			break;
		
		case -2146762937:
			return 18;
			break;
		
		case -1919575460:
			return 19;
			break;
		
		case 1867669166:
			return 20;
			break;
		
		case 1562425931:
			return 21;
			break;
		
		case 1271240597:
			return 22;
			break;
		
		case -43115055:
			return 23;
			break;
		
		case -1731373935:
			return 24;
			break;
		
		case -1422100113:
			return 25;
			break;
		
		case -463508556:
			return 26;
			break;
		
		case -963301344:
			return 27;
			break;
		
		case 2063210751:
			return 28;
			break;
		
		case -2003094463:
			return 29;
			break;
		
		case -1888632346:
			return 30;
			break;
		
		case -1384776202:
			return 31;
			break;
		
		case 1107568404:
			return 32;
			break;
		
		case -412069578:
			return 33;
			break;
		
		case 1236833733:
			return 34;
			break;
		
		case 2004250944:
			return 35;
			break;
		
		case 544883529:
			return 36;
			break;
		
		case 1446293181:
			return 37;
			break;
		
		case -1964074960:
			return 38;
			break;
		
		case -1565538382:
			return 39;
			break;
		
		case 1752814407:
			return 40;
			break;
		
		case -1662501853:
			return 41;
			break;
		
		case -1216122527:
			return 42;
			break;
		
		case 1668958248:
			return 43;
			break;
		
		case 813687348:
			return 44;
			break;
		
		case 1121027799:
			return 45;
			break;
		
		case -1437018652:
			return 46;
			break;
		
		case -1133250022:
			return 47;
			break;
		
		case 1974922401:
			return 48;
			break;
		
		case -1751830435:
			return 49;
			break;
		
		case -737105609:
			return 50;
			break;
		
		case -1044282215:
			return 51;
			break;
		
		case 128880754:
			return 52;
			break;
		
		case -1214833480:
			return 53;
			break;
		
		case -853522486:
			return 54;
			break;
		
		case -1811655273:
			return 55;
			break;
		
		case -1040961166:
			return 56;
			break;
		
		case 1888456366:
			return 57;
			break;
		
		case -1639552485:
			return 58;
			break;
		
		case 1348226632:
			return 59;
			break;
		
		case 2125933309:
			return 60;
			break;
		
		case 754026355:
			return 61;
			break;
		
		case 1526948758:
			return 62;
			break;
		
		case -902969915:
			return 63;
			break;
		
		case -69457631:
			return 64;
			break;
		
		case -312701918:
			return 65;
			break;
		
		case 824579000:
			return 66;
			break;
		
		case 585856831:
			return 67;
			break;
		
		case 1226458016:
			return 68;
			break;
		
		case 987998003:
			return 69;
			break;
		
		case 1819413071:
			return 70;
			break;
		
		case 1583246888:
			return 71;
			break;
		
		case -1577847470:
			return 72;
			break;
		
		case -2026650806:
			return 73;
			break;
		
		case -1429665160:
			return 74;
			break;
		
		case -1185994876:
			return 75;
			break;
		
		case -2142554759:
			return 76;
			break;
		
		case -589631845:
			return 77;
			break;
		
		case -1637322333:
			return 78;
			break;
		
		case -1876568802:
			return 79;
			break;
		
		case -851292326:
			return 80;
			break;
		
		case 1859818120:
			return 81;
			break;
		
		case -1515880415:
			return 82;
			break;
		
		case -432930795:
			return 83;
			break;
		
		case 796201630:
			return 84;
			break;
		
		case 1170095920:
			return 85;
			break;
		
		case 1259981287:
			return 86;
			break;
		
		case 1632499279:
			return 87;
			break;
		
		case -1208917743:
			return 88;
			break;
		
		case -1245356871:
			return 89;
			break;
		
		case -567923298:
			return 90;
			break;
		
		case -932249040:
			return 91;
			break;
		
		case -221587773:
			return 92;
			break;
		
		case -845116305:
			return 93;
			break;
		
		case 381918900:
			return 94;
			break;
		
		case 83032851:
			return 95;
			break;
		
		case 705709389:
			return 96;
			break;
		
		case 410559006:
			return 97;
			break;
		
		case -850926612:
			return 98;
			break;
		
		case -1093056753:
			return 99;
			break;
		
		case 1258643301:
			return 100;
			break;
		
		case 865874067:
			return 101;
			break;
		
		case 627151902:
			return 102;
			break;
		
		case -2142352902:
			return 103;
			break;
		
		case -407070503:
			return 104;
			break;
		
		case 1502608510:
			return 105;
			break;
		
		case 827528886:
			return 106;
			break;
		
		case -781461791:
			return 107;
			break;
		
		case -474875027:
			return 108;
			break;
		
		case -1242030086:
			return 109;
			break;
		
		case 137348200:
			return 110;
			break;
		
		case -2121779449:
			return 111;
			break;
		
		case 1876005786:
			return 112;
			break;
		
		case -1641844675:
			return 113;
			break;
		
		case -1939452733:
			return 114;
			break;
		
		case 1595175476:
			return 115;
			break;
		
		case 1888141884:
			return 116;
			break;
		
		case 859096981:
			return 117;
			break;
		
		case 551756530:
			return 118;
			break;
		
		case 1439272126:
			return 119;
			break;
		
		case 1158474565:
			return 120;
			break;
		
		case -109358053:
			return 121;
			break;
		
		case -406605652:
			return 122;
			break;
		
		case 509746672:
			return 123;
			break;
		
		case 244809299:
			return 124;
			break;
		
		case -651750537:
			return 125;
			break;
		
		case 1816410231:
			return 126;
			break;
		
		case -2059015562:
			return 127;
			break;
		
		case 1945094090:
			return 128;
			break;
		
		case -1458261485:
			return 129;
			break;
		
		case -1755738467:
			return 130;
			break;
		
		case -846234872:
			return 131;
			break;
		
		case -1144170620:
			return 132;
			break;
		
		case -251641367:
			return 133;
			break;
		
		case -566158229:
			return 134;
			break;
		
		case -859506285:
			return 135;
			break;
		
		case 1823490339:
			return 136;
			break;
		
		case -2074414980:
			return 137;
			break;
		
		case 748741188:
			return 138;
			break;
		
		case 664000554:
			return 139;
			break;
		
		case 374125980:
			return 140;
			break;
		
		case 1933864846:
			return 141;
			break;
		
		case 1620822589:
			return 142;
			break;
		
		case 1304536201:
			return 143;
			break;
		
		case 1024459558:
			return 144;
			break;
		
		case -1167196704:
			return 145;
			break;
		
		case -1484564469:
			return 146;
			break;
		
		case -1728267522:
			return 147;
			break;
		
		case -2059818253:
			return 148;
			break;
		
		case 1995902574:
			return 149;
			break;
		
		case 1639965688:
			return 150;
			break;
		
		case 1397114629:
			return 151;
			break;
		
		case -1985437042:
			return 152;
			break;
		
		case 2060125395:
			return 153;
			break;
		
		case 1845619521:
			return 154;
			break;
		
		case 1352314995:
			return 155;
			break;
		
		case 1121916156:
			return 156;
			break;
		
		case 890173784:
			return 157;
			break;
		
		case 646995035:
			return 158;
			break;
		
		case 885782742:
			return 159;
			break;
		
		case 645225513:
			return 160;
			break;
		
		case 173548527:
			return 161;
			break;
		
		case -421803070:
			return 162;
			break;
		
		case 1299978497:
			return 163;
			break;
		
		case 1529427035:
			return 164;
			break;
		
		case 342566624:
			return 165;
			break;
		
		case 575062679:
			return 166;
			break;
		
		case -2035840169:
			return 167;
			break;
		
		case -1807833467:
			return 168;
			break;
		
		case 1762447394:
			return 169;
			break;
		
		case 2001923246:
			return 170;
			break;
		
		case 178590600:
			return 171;
			break;
		
		case 1262851572:
			return 172;
			break;
		
		case 537411450:
			return 173;
			break;
		
		case 785046783:
			return 174;
			break;
		
		case -2080536733:
			return 175;
			break;
		
		case -1640317987:
			return 176;
			break;
		
		case 1737477768:
			return 177;
			break;
		
		case 162597385:
			return 178;
			break;
		
		case 223154493:
			return 179;
			break;
		
		case 2140763608:
			return 180;
			break;
		
		case 1886967703:
			return 181;
			break;
		
		case 1237289509:
			return 182;
			break;
		
		case -1236704457:
			return 183;
			break;
		
		case -1467824214:
			return 184;
			break;
		
		case -1595623314:
			return 185;
			break;
		
		case -1829299053:
			return 186;
			break;
		
		case -1581270496:
			return 187;
			break;
		
		case -736238561:
			return 188;
			break;
	}
	switch (iParam0)
	{
		case 1479840145:
			return 189;
			break;
		
		case 356387741:
			return 190;
			break;
		
		case 653766416:
			return 191;
			break;
		
		case -1922761743:
			return 192;
			break;
		
		case -1625383068:
			return 193;
			break;
		
		case 1758409414:
			return 194;
			break;
		
		case 2048251219:
			return 195;
			break;
		
		case -1001100849:
			return 196;
			break;
		
		case -711848886:
			return 197;
			break;
		
		case -1614503760:
			return 198;
			break;
		
		case -1060874703:
			return 199;
			break;
		
		case -1669067343:
			return 200;
			break;
		
		case -1505615571:
			return 201;
			break;
		
		case -136756130:
			return 202;
			break;
		
		case 1503430607:
			return 203;
			break;
		
		case 1909897283:
			return 204;
			break;
		
		case -1005003578:
			return 205;
			break;
		
		case -734266100:
			return 206;
			break;
		
		case 1360852708:
			return 207;
			break;
		
		case 729066388:
			return 208;
			break;
		
		case 914374215:
			return 209;
			break;
		
		case 558502875:
			return 210;
			break;
		
		case -1591241840:
			return 211;
			break;
		
		case -1827014795:
			return 212;
			break;
		
		case -876282585:
			return 213;
			break;
		
		case -1180870440:
			return 214;
			break;
		
		case -1502662020:
			return 215;
			break;
		
		case -1785163569:
			return 216;
			break;
		
		case 80113449:
			return 217;
			break;
		
		case -216740922:
			return 218;
			break;
		
		case -533027310:
			return 219;
			break;
		
		case -829553991:
			return 220;
			break;
		
		case -531257788:
			return 221;
			break;
		
		case -827784469:
			return 222;
			break;
		
		case 744660972:
			return 223;
			break;
		
		case 899625573:
			return 224;
			break;
		
		case 266299110:
			return 225;
			break;
		
		case -1641282671:
			return 226;
			break;
		
		case -195383331:
			return 227;
			break;
		
		case 33245982:
			return 228;
			break;
		
		case -686033552:
			return 229;
			break;
		
		case 1700172263:
			return 230;
			break;
		
		case -1163314037:
			return 231;
			break;
		
		case -939239615:
			return 232;
			break;
		
		case -1579861681:
			return 233;
			break;
		
		case -1237032403:
			return 234;
			break;
		
		case 1942740285:
			return 235;
			break;
		
		case 558544952:
			return 236;
			break;
		
		case 1335891174:
			return 237;
			break;
		
		case 2129064819:
			return 238;
			break;
		
		case -699850186:
			return 239;
			break;
		
		case -864874870:
			return 240;
			break;
		
		case 333978995:
			return 241;
			break;
		
		case 1109522918:
			return 242;
			break;
		
		case -635535959:
			return 243;
			break;
		
		case -966961625:
			return 244;
			break;
		
		case -595983772:
			return 245;
			break;
		
		case 1319397047:
			return 246;
			break;
		
		case 15059771:
			return 247;
			break;
		
		case -679880450:
			return 248;
			break;
		
		case -1968193685:
			return 249;
			break;
		
		case 1656811402:
			return 250;
			break;
		
		case 1409143300:
			return 251;
			break;
		
		case 1047930613:
			return 252;
			break;
		
		case 834145657:
			return 253;
			break;
		
		case 1301103915:
			return 254;
			break;
		
		case 5679807:
			return 255;
			break;
		
		case 1241824794:
			return 256;
			break;
		
		case 1558963176:
			return 257;
			break;
		
		case 1466156191:
			return 258;
			break;
		
		case 1713299989:
			return 259;
			break;
		
		case 1415036551:
			return 260;
			break;
		
		case 1153834856:
			return 261;
			break;
		
		case 1360836629:
			return 262;
			break;
		
		case -1622780825:
			return 263;
			break;
		
		case -1374686726:
			return 264;
			break;
		
		case 2040629534:
			return 265;
			break;
		
		case -1973146973:
			return 266;
			break;
		
		case -657864855:
			return 267;
			break;
		
		case 1377860065:
			return 268;
			break;
		
		case 113042203:
			return 269;
			break;
		
		case -712703828:
			return 270;
			break;
		
		case 200109448:
			return 271;
			break;
		
		case -705035870:
			return 272;
			break;
		
		case -1340787251:
			return 273;
			break;
		
		case -107624231:
			return 274;
			break;
		
		case -784730090:
			return 275;
			break;
		
		case -1628925068:
			return 276;
			break;
		
		case 1496156159:
			return 277;
			break;
		
		case -1247690782:
			return 278;
			break;
		
		case -1569777283:
			return 279;
			break;
		
		case 1939083358:
			return 280;
			break;
		
		case -2050050861:
			return 281;
			break;
		
		case -1086019650:
			return 282;
			break;
		
		case -796734918:
			return 283;
			break;
		
		case -2051001154:
			return 284;
			break;
		
		case -1753327558:
			return 285;
			break;
		
		case -778482577:
			return 286;
			break;
		
		case -487919854:
			return 287;
			break;
		
		case 1063167984:
			return 288;
			break;
		
		case 1352190564:
			return 289;
			break;
		
		case 1918883225:
			return 290;
			break;
		
		case 2140499972:
			return 291;
			break;
		
		case -1622298764:
			return 292;
			break;
		
		case -1384887359:
			return 293;
			break;
		
		case -1451684059:
			return 294;
			break;
		
		case -675288142:
			return 295;
			break;
		
		case -984234274:
			return 296;
			break;
		
		case -258728614:
			return 297;
			break;
		
		case 516356543:
			return 298;
			break;
		
		case 200791073:
			return 299;
			break;
		
		case 976334996:
			return 300;
			break;
		
		case 743642327:
			return 301;
			break;
		
		case 1511583842:
			return 302;
			break;
		
		case 1238290382:
			return 303;
			break;
		
		case -587327163:
			return 304;
			break;
		
		case -1009457421:
			return 305;
			break;
		
		case 1852062739:
			return 306;
			break;
		
		case 1561958782:
			return 307;
			break;
		
		case -1779135693:
			return 308;
			break;
		
		case 2022396001:
			return 309;
			break;
		
		case -1277868344:
			return 310;
			break;
		
		case -1046224283:
			return 311;
			break;
		
		case -1992232544:
			return 312;
			break;
		
		case -1511904542:
			return 313;
			break;
		
		case 338954980:
			return 314;
			break;
		
		case 644853595:
			return 315;
			break;
		
		case 928043293:
			return 316;
			break;
		
		case 1233483142:
			return 317;
			break;
		
		case 455547074:
			return 318;
			break;
		
		case 753187901:
			return 319;
			break;
		
		case -1381379572:
			return 320;
			break;
		
		case -978746865:
			return 321;
			break;
		
		case 946792344:
			return 322;
			break;
		
		case -366195948:
			return 323;
			break;
		
		case -722394978:
			return 324;
			break;
		
		case 216207489:
			return 325;
			break;
		
		case 2124706822:
			return 326;
			break;
		
		case 832559610:
			return 327;
			break;
		
		case -791212145:
			return 328;
			break;
		
		case 1426003941:
			return 329;
			break;
		
		case -2062125037:
			return 330;
			break;
		
		case 2002508958:
			return 331;
			break;
		
		case -1983118982:
			return 332;
			break;
		
		case 825938009:
			return 333;
			break;
		
		case 1670231294:
			return 334;
			break;
		
		case 1439144306:
			return 335;
			break;
		
		case -2008613264:
			return 336;
			break;
		
		case 137657929:
			return 337;
			break;
		
		case 850282205:
			return 338;
			break;
	}
	switch (iParam0)
	{
		case 964358912:
			return 339;
			break;
		
		case -1735315153:
			return 340;
			break;
		
		case -2034102895:
			return 341;
			break;
		
		case 1999400550:
			return 342;
			break;
		
		case 1839705233:
			return 343;
			break;
		
		case 1466269709:
			return 344;
			break;
		
		case -469722811:
			return 345;
			break;
		
		case -692060480:
			return 346;
			break;
		
		case 1034427337:
			return 347;
			break;
		
		case 773946556:
			return 348;
			break;
		
		case 332646433:
			return 349;
			break;
		
		case 101002372:
			return 350;
			break;
		
		case -259915394:
			return 351;
			break;
		
		case -491231765:
			return 352;
			break;
		
		case 1624727807:
			return 353;
			break;
		
		case 1920336964:
			return 354;
			break;
		
		case -1998999285:
			return 355;
			break;
		
		case -1691200068:
			return 356;
			break;
		
		case -1249146258:
			return 357;
			break;
		
		case -942723339:
			return 358;
			break;
		
		case -693318480:
			return 359;
			break;
		
		case -465836082:
			return 360;
			break;
		
		case -214792773:
			return 361;
			break;
		
		case 209893467:
			return 362;
			break;
		
		case -163640692:
			return 363;
			break;
		
		case 2012777989:
			return 364;
			break;
		
		case 1782084221:
			return 365;
			break;
		
		case 1532613824:
			return 366;
			break;
		
		case 1318894406:
			return 367;
			break;
		
		case -818529153:
			return 368;
			break;
		
		case -1578376725:
			return 369;
			break;
		
		case -1832828010:
			return 370;
			break;
		
		case -2072074479:
			return 371;
			break;
		
		case 107719401:
			return 372;
			break;
		
		case 1090494188:
			return 373;
			break;
		
		case -1065738777:
			return 374;
			break;
		
		case -841762662:
			return 375;
			break;
		
		case -1694870808:
			return 376;
			break;
		
		case 689718031:
			return 377;
			break;
		
		case 1188920977:
			return 378;
			break;
		
		case 1425414854:
			return 379;
			break;
		
		case 1680914747:
			return 380;
			break;
		
		case -1397044638:
			return 381;
			break;
		
		case -1202658930:
			return 382;
			break;
		
		case -2077294849:
			return 383;
			break;
		
		case 1871566269:
			return 384;
			break;
		
		case -638735717:
			return 385;
			break;
		
		case -885912284:
			return 386;
			break;
		
		case 911795056:
			return 387;
			break;
		
		case 680937451:
			return 388;
			break;
		
		case -1507671294:
			return 389;
			break;
		
		case -1734596619:
			return 390;
			break;
		
		case -1832969157:
			return 391;
			break;
		
		case -53415839:
			return 392;
			break;
		
		case 646954998:
			return 393;
			break;
		
		case -404995440:
			return 394;
			break;
		
		case -92411949:
			return 395;
			break;
		
		case -894465993:
			return 396;
			break;
		
		case 1287195724:
			return 397;
			break;
		
		case 790876446:
			return 398;
			break;
		
		case 1070035557:
			return 399;
			break;
		
		case 301242048:
			return 400;
			break;
		
		case 1741013601:
			return 401;
			break;
		
		case 2044421772:
			return 402;
			break;
		
		case -1643561644:
			return 403;
			break;
		
		case -2018242390:
			return 404;
			break;
		
		case 561169449:
			return 405;
			break;
		
		case 444970575:
			return 406;
			break;
		
		case 1702284027:
			return 407;
			break;
		
		case -514538827:
			return 408;
			break;
		
		case -807559225:
			return 409;
			break;
		
		case -1056910526:
			return 410;
			break;
		
		case -1286391833:
			return 411;
			break;
		
		case 1010978731:
			return 412;
			break;
	}
	return -1;
}

bool func_212(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<11> Var0;
	struct<14> Var12;
	
	if (func_521(iParam1, iParam2, iParam3, &Var0))
	{
		if (!func_217(iParam1, iParam2, iParam3))
		{
			return false;
		}
		if (Var0.f_9 == 0)
		{
			Stack.Push(iParam1);
			Stack.Push(2);
			Stack.Push(Var0.f_8);
			Call_Loc(*uParam0.f_455);
			Var12 = {StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal};
			if (!is_bit_set(Var12.f_6, true))
			{
				return false;
			}
			return true;
		}
		else if (Var0.f_9 == 1 || Var0.f_9 == 2)
		{
			if (Var0.f_10 == -1)
			{
				return true;
			}
			if (Var0.f_5 == 1)
			{
				if (!func_213(Var0.f_10))
				{
					return false;
				}
				return true;
			}
			else if (Var0.f_5 == 4)
			{
				if (!func_213(Var0.f_10))
				{
					return false;
				}
				return true;
			}
			else
			{
				return true;
			}
		}
	}
	return true;
}

int func_213(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_216())
	{
		return false;
	}
	iVar0 = func_214(uParam0);
	iVar1 = uParam0;
	return is_bit_set(iVar0, func_143(iVar1));
}

var func_214(var uParam0)
{
	var uVar0;
	
	uVar0 = func_17(func_215(uParam0), -1, 0);
	return uVar0;
}

int func_215(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_147(iVar0);
	if ((func_21() == 0 || func_146() == 0) || (func_21() == 999 && func_146() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 733;
				break;
			
			case 1:
				return 734;
				break;
			
			case 2:
				return 735;
				break;
			
			case 3:
				return 736;
				break;
			
			case 4:
				return 737;
				break;
			
			case 5:
				return 738;
				break;
			
			case 6:
				return 739;
				break;
			
			case 7:
				return 740;
				break;
			
			case 8:
				return 741;
				break;
			
			case 9:
				return 742;
				break;
			
			case 10:
				return 743;
				break;
			}
	}
	return 3949;
}

var func_216()
{
	return Global_1315890;
}

bool func_217(int iParam0, int iParam1, int iParam2)
{
	struct<11> Var0;
	struct<11> Var12;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				if (iParam2 == 22)
				{
					if (func_228() && (Global_262145.f_6185 || func_225(3606, -1, -1)))
					{
						return true;
					}
					return false;
				}
				else if (((iParam2 == 23 || iParam2 == 24) || iParam2 == 25) || iParam2 == 26)
				{
					if (func_224())
					{
						return true;
					}
					return false;
				}
				else if ((iParam2 == 27 || iParam2 == 28) || iParam2 == 29)
				{
					if (func_223())
					{
						return true;
					}
					return false;
				}
				break;
			
			case 11:
				if (iParam2 == 13)
				{
					if (func_228() && (Global_262145.f_6185 || func_225(3607, -1, -1)))
					{
						return true;
					}
					return false;
				}
				else if (iParam2 >= 14 && iParam2 <= 43)
				{
					if (func_222())
					{
						if (Global_262145.f_9515)
						{
							return true;
						}
						if (func_521(iParam0, iParam1, iParam2, &Var0) && func_219(Var0.f_10))
						{
							return true;
						}
						if (iParam2 == 14 && func_225(4270, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 15 && func_225(4271, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 16 && func_225(4272, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 17 && func_225(4273, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 18 && func_225(4274, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 19 && func_225(4275, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 20 && func_225(4276, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 21 && func_225(4277, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 22 && func_225(4278, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 23 && func_225(4279, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 24 && func_225(4280, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 25 && func_225(4281, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 26 && func_225(4282, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 27 && func_225(4283, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 28 && func_225(4284, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 29 && func_225(4285, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 30 && func_225(4286, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 31 && func_225(4287, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 32 && func_225(4288, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 33 && func_225(4289, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 34 && func_225(4290, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 35 && func_225(4291, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 36 && func_225(4292, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 37 && func_225(4293, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 38 && func_225(4294, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 39 && func_225(4295, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 40 && func_225(4296, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 41 && func_225(4297, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 42 && func_225(4298, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 43 && func_225(4299, -1, -1))
						{
							return true;
						}
					}
					return false;
				}
				break;
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				if (iParam2 == 20)
				{
					if (func_218() && ((Global_262145.f_5004 || Global_262145.f_9505) || func_225(4246, -1, -1)))
					{
						return true;
					}
					return false;
				}
				else if (iParam2 == 23)
				{
					if (func_228() && (Global_262145.f_6185 || func_225(3606, -1, -1)))
					{
						return true;
					}
					return false;
				}
				else if (((iParam2 == 24 || iParam2 == 25) || iParam2 == 26) || iParam2 == 27)
				{
					if (func_224())
					{
						return true;
					}
					return false;
				}
				else if ((iParam2 == 28 || iParam2 == 29) || iParam2 == 30)
				{
					if (func_223())
					{
						return true;
					}
					return false;
				}
				break;
			
			case 11:
				if (iParam2 == 13)
				{
					if (func_228() && (Global_262145.f_6185 || func_225(3607, -1, -1)))
					{
						return true;
					}
					return false;
				}
				else if (iParam2 >= 14 && iParam2 <= 43)
				{
					if (func_222())
					{
						if (Global_262145.f_9515)
						{
							return true;
						}
						if (func_521(iParam0, iParam1, iParam2, &Var12) && func_219(Var12.f_10))
						{
							return true;
						}
						if (iParam2 == 14 && func_225(4270, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 15 && func_225(4271, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 16 && func_225(4272, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 17 && func_225(4273, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 18 && func_225(4274, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 19 && func_225(4275, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 20 && func_225(4276, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 21 && func_225(4277, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 22 && func_225(4278, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 23 && func_225(4279, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 24 && func_225(4280, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 25 && func_225(4281, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 26 && func_225(4282, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 27 && func_225(4283, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 28 && func_225(4284, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 29 && func_225(4285, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 30 && func_225(4286, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 31 && func_225(4287, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 32 && func_225(4288, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 33 && func_225(4289, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 34 && func_225(4290, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 35 && func_225(4291, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 36 && func_225(4292, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 37 && func_225(4293, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 38 && func_225(4294, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 39 && func_225(4295, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 40 && func_225(4296, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 41 && func_225(4297, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 42 && func_225(4298, -1, -1))
						{
							return true;
						}
						else if (iParam2 == 43 && func_225(4299, -1, -1))
						{
							return true;
						}
					}
					return false;
				}
				break;
			}
	}
	return true;
}

int func_218()
{
	return is_dlc_present(-1357982869);
}

int func_219(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_216())
	{
		return false;
	}
	iVar0 = func_220(uParam0);
	iVar1 = uParam0;
	return is_bit_set(iVar0, func_143(iVar1));
}

var func_220(var uParam0)
{
	var uVar0;
	
	uVar0 = func_17(func_221(uParam0), -1, 0);
	return uVar0;
}

int func_221(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_147(iVar0);
	if ((func_21() == 0 || func_146() == 0) || (func_21() == 999 && func_146() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 2513;
				break;
			
			case 1:
				return 2514;
				break;
			
			case 2:
				return 2515;
				break;
			
			case 3:
				return 2516;
				break;
			
			case 4:
				return 2517;
				break;
			
			case 5:
				return 2518;
				break;
			
			case 6:
				return 2519;
				break;
			
			case 7:
				return 2520;
				break;
			
			case 8:
				return 2521;
				break;
			
			case 9:
				return 2522;
				break;
			
			case 10:
				return 2523;
				break;
			}
	}
	return 3949;
}

int func_222()
{
	return is_dlc_present(524647998);
}

int func_223()
{
	return is_dlc_present(-1894522408);
}

int func_224()
{
	return is_dlc_present(1630677557);
}

int func_225(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar1 = func_227(iParam0, iParam1);
	uVar2 = func_226(iParam0);
	if (0 != iVar1)
	{
		iVar0 = stat_get_bool_masked(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_226(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = iParam0 - 0 - _0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = iParam0 - 192 - _0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = iParam0 - 513 - _0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = iParam0 - 705 - _0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = iParam0 - 2919 - _0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = iParam0 - 3111 - _0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = iParam0 - 4335 - _0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = iParam0 - 4207 - _0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = iParam0 - 6029 - _0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = iParam0 - 7385 - _0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = iParam0 - 7321 - _0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
	}
	return iVar0;
}

int func_227(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = _0x80C75307B1C42837(iParam0 - 0, 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = _0x80C75307B1C42837(iParam0 - 192, 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = _0x80C75307B1C42837(iParam0 - 513, 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = _0x80C75307B1C42837(iParam0 - 705, 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = _0xC4BB08EE7907471E(iParam0 - 2919, 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = _0xC4BB08EE7907471E(iParam0 - 3111, 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 4207, 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 6029, 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = _0xBA52FF538ED2BC71(iParam0 - 7385, 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	return iVar0;
}

int func_228()
{
	return is_dlc_present(-1691188696);
}

int func_229(int iParam0, int iParam1)
{
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				return 30;
				break;
			
			case 7:
				return 30;
				break;
			
			case 8:
				return 35;
				break;
			
			case 9:
				return 18;
				break;
			
			case 10:
				return 32;
				break;
			
			case 11:
				return 44;
				break;
			
			case 14:
				return 26;
				break;
			
			case 15:
				return 11;
				break;
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				return 31;
				break;
			
			case 8:
				return 35;
				break;
			
			case 10:
				return 32;
				break;
			
			case 11:
				return 44;
				break;
			
			case 13:
				return 8;
				break;
			
			case 14:
				return 26;
				break;
			
			case 15:
				return 11;
				break;
			}
	}
	return 0;
}

int func_230(int iParam0)
{
	return func_231(func_257(iParam0));
}

int func_231(int iParam0)
{
	if (iParam0 == -1 || iParam0 == 123)
	{
		return true;
	}
	return is_bit_set(Global_2097152[func_232() /*10375*/].f_7704.f_40[iParam0 / 32], iParam0 % 32);
}

int func_232()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_233(int iParam0)
{
	return func_213(func_257(iParam0));
	return true;
}

bool func_234(int iParam0)
{
	if (func_239(iParam0))
	{
		if (!func_238())
		{
			return false;
		}
	}
	else if (func_237(iParam0))
	{
		if (!func_236())
		{
			return false;
		}
	}
	else if (func_235(iParam0))
	{
		return false;
	}
	return true;
}

bool func_235(int iParam0)
{
	return false;
}

bool func_236()
{
	if (func_228() && (Global_262145.f_6185 || func_225(3607, -1, -1)))
	{
		return true;
	}
	return false;
}

bool func_237(int iParam0)
{
	int iVar0;
	
	iVar0 = func_257(iParam0);
	if (iVar0 == 92)
	{
		return true;
	}
	return false;
}

bool func_238()
{
	return false;
}

bool func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = func_257(iParam0);
	if (((iVar0 == 51 || iVar0 == 52) || iVar0 == 53) || iVar0 == 54)
	{
		return true;
	}
	return false;
}

int func_240(int iParam0)
{
	return func_231(func_259(iParam0));
}

int func_241(int iParam0)
{
	if (iParam0 >= 19 + 1)
	{
		if (iParam0 >= 27 && iParam0 <= 36)
		{
			return 1;
		}
		return 0;
	}
	return func_213(func_259(iParam0));
	return 1;
}

int func_242()
{
	int iVar0;
	
	iVar0 = get_entity_model(player_ped_id());
	if (iVar0 == joaat("mp_m_freemode_01"))
	{
		return 30;
	}
	return 19;
}

void func_243(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6)
{
	struct<361> Var0;
	
	Var0 = 110;
	Var0.f_111 = 110;
	Var0.f_223 = 110;
	Var0.f_334 = 8;
	Var0.f_343 = 8;
	Var0.f_352 = 8;
	if (network_is_game_in_progress())
	{
		func_249(uParam0, &Var0, func_254(get_entity_model(player_ped_id())), 0, iParam4, uParam5, uParam6);
	}
	else if (iParam2 == 1)
	{
		func_246(uParam0, &Var0, func_254(get_entity_model(player_ped_id())), 0, iParam3);
	}
	else
	{
		func_244(uParam0, &Var0, func_254(get_entity_model(player_ped_id())), 0, iParam3);
	}
	*uParam1 = {Var0};
}

void func_244(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (iParam4 == 1)
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_245(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_43(0));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(4);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
	}
	else
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_245(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_43(0));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(4);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
	}
	if (iParam4 == 1)
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_245(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_43(1));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
	else
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_245(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_43(1));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(4);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
	if (iParam4 == 1)
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_245(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_43(2));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(4);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
	}
	else
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_245(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(uParam2);
			Stack.Push(func_43(2));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(4);
			Stack.Push(1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(5);
		Stack.Push(1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
}

bool func_245(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (is_bit_set(Global_101154.f_668.f_780, 2))
		{
			return true;
		}
	}
	if (_0x67A5589628E0CFF6())
	{
		if (!iParam1 || network_is_signed_online())
		{
			if (!is_ps3_version() && !is_orbis_version())
			{
				return true;
			}
		}
	}
	if (iParam1)
	{
		if (_0x1353F87E89946207())
		{
			return false;
		}
	}
	if (_0x67A5589628E0CFF6())
	{
		return true;
	}
	return false;
}

void func_246(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	init_shop_ped_component(&iVar0);
	switch (func_247())
	{
		case 0:
			iVar19 = 6;
			break;
		
		case 1:
			iVar19 = 21;
			break;
		
		case 2:
			iVar19 = 9;
			break;
	}
	iVar18 = _get_num_props_from_outfit(iParam2, 6, -1, 0, 0, 2);
	iVar17 = 0;
	while (iVar17 < iVar18)
	{
		get_shop_ped_query_component(iVar17, &iVar0);
		if (!_is_dlc_data_empty(iVar0))
		{
			iVar20 = iVar19 + iVar17;
			Stack.Push(uParam1);
			Stack.Push(iParam2);
			Stack.Push(get_entity_model(player_ped_id()));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(iVar20);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		iVar17++;
	}
	if (iParam4 == 1)
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_245(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(iParam2);
			Stack.Push(func_43(0));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(4);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
	else
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_245(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(iParam2);
			Stack.Push(func_43(0));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(1);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(0));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
	if (iParam4 == 1)
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(6);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(8);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(9);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(14);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(15);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_245(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(iParam2);
			Stack.Push(func_43(1));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(17);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(19);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
	else
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(4);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(5);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(7);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(10);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(11);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(12);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(13);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(16);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_245(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(iParam2);
			Stack.Push(func_43(1));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(17);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(18);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(1));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(19);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
	if (iParam4 == 1)
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_245(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(iParam2);
			Stack.Push(func_43(2));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(3);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(5);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
	else
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (func_245(1, 1))
		{
			Stack.Push(uParam1);
			Stack.Push(iParam2);
			Stack.Push(func_43(2));
			Stack.Push(iParam3);
			Stack.Push(0);
			Stack.Push(3);
			Stack.Push(2);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Call_Loc(*uParam0);
		}
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(5);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(func_43(2));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(6);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
	}
}

var func_247()
{
	func_248();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_248()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_43(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_42(player_ped_id());
			if (func_41(iVar0) && (!func_127(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_41(Global_101154.f_1826.f_539.f_3549))
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

void func_249(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6)
{
	struct<10> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	
	init_shop_ped_component(&Var0);
	switch (get_entity_model(player_ped_id()))
	{
		case joaat("mp_m_freemode_01"):
			iVar19 = 91;
			break;
		
		case joaat("mp_f_freemode_01"):
			iVar19 = 92;
			break;
	}
	iVar22 = 1;
	iVar23 = 0;
	while (iVar23 < *uParam5)
	{
		*uParam5[iVar23] = 0;
		*uParam6[iVar23] = 0;
		iVar23++;
	}
	Global_2621443 = iParam3;
	Global_2561941 = iParam4 == -1;
	iVar24 = 0;
	iVar18 = _get_num_props_from_outfit(iParam2, 6, -1, 0, 0, 2);
	iVar17 = 0;
	while (iVar17 < iVar18)
	{
		get_shop_ped_query_component(iVar17, &Var0);
		if (!_is_dlc_data_empty(Var0))
		{
			if (!func_252(Var0, Var0.f_1, 0) && !_0x341DE7ED1D2A1BFD(Var0.f_1, -1188154325, false))
			{
				iVar21 = func_251(&(Var0.f_9));
				if (func_250(iParam4, iVar21))
				{
					set_bit(uParam5[iVar21 / 32], iVar21 % 32);
					if (!func_125(Var0.f_1, 2, 1, 1, -1))
					{
						set_bit(uParam6[iVar21 / 32], iVar21 % 32);
					}
					iVar20 = iVar19 + iVar24;
					Stack.Push(uParam1);
					Stack.Push(iParam2);
					Stack.Push(get_entity_model(player_ped_id()));
					Stack.Push(iParam3);
					Stack.Push(0);
					Stack.Push(iVar20);
					Stack.Push(2);
					Stack.Push(0);
					Stack.Push(0);
					Stack.Push(iVar22);
					Stack.Push(0);
					Stack.Push(0);
					Call_Loc(*uParam0);
				}
			}
			iVar24++;
		}
		iVar17++;
	}
	iVar21 = 16;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 17;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(4);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(5);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 18;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(7);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(8);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(9);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(10);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(11);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 19;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(13);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(14);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(15);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(16);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(17);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 20;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(19);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(20);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(21);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(22);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(23);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 21;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(26);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(27);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(28);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(29);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(30);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 22;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(32);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(33);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(34);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(35);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(36);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 23;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(38);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(39);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(40);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(41);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(42);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 24;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(45);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(46);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(47);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(48);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(49);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 25;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(50);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(51);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(52);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(53);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(54);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 26;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(57);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(58);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(59);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(60);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(61);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 27;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(63);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(64);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(65);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(66);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(67);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 28;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(69);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(70);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(71);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(72);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(73);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 29;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(74);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(75);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(76);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(77);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(78);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 30;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(80);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(81);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(82);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(83);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(84);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 31;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(85);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(86);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(87);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(88);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_m_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(89);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 32;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 33;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(1);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(2);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(3);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(4);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(5);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 34;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(7);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(8);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(9);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(10);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(11);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 35;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(13);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(14);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(15);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(16);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(17);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 36;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(18);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(19);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(20);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(21);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(22);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 37;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(24);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(25);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(26);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(27);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(28);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 38;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(30);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(31);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(32);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(33);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(34);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 39;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(35);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(36);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(37);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(38);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(39);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 40;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(41);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(42);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(43);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(44);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(45);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 41;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(47);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(48);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(49);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(50);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(51);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 42;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(53);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(54);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(55);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(56);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(57);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 43;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(60);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(61);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(62);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(63);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(64);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 44;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(67);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(68);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(69);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(70);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(71);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 45;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(73);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(74);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(75);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(76);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(77);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 46;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(79);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(80);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(81);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(82);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(83);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
	iVar21 = 47;
	Global_2560057 = 0;
	Global_2560056 = 0;
	if (func_250(iParam4, iVar21))
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(85);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(86);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(87);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(88);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Stack.Push(joaat("mp_f_freemode_01"));
		Stack.Push(iParam3);
		Stack.Push(0);
		Stack.Push(89);
		Stack.Push(2);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(iVar22);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(*uParam0);
		if (Global_2560056)
		{
			set_bit(uParam5[iVar21 / 32], iVar21 % 32);
			if (Global_2560057)
			{
				set_bit(uParam6[iVar21 / 32], iVar21 % 32);
			}
		}
	}
}

bool func_250(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam1 == iParam0)
	{
		return true;
	}
	return false;
}

int func_251(char* sParam0)
{
	int iVar0;
	
	if (is_string_null_or_empty(sParam0))
	{
		return -2;
	}
	iVar0 = get_hash_key(sParam0);
	switch (iVar0)
	{
		case 498303157:
		case 221407949:
		case -1907191373:
		case -1099774831:
		case -92674281:
		case -898593679:
		case -1236063066:
			return 0;
			break;
		
		case 871228953:
		case 323342359:
		case -87268072:
		case 363772775:
		case -777712524:
		case 505753790:
		case 1021911419:
			return 1;
			break;
		
		case 1577121865:
		case 884057515:
		case 2055188806:
		case 1362452146:
		case -1761842625:
		case 665775322:
		case 618391324:
		case 497473714:
		case 123808807:
		case -231538229:
			return 2;
			break;
		
		case 396231341:
		case 1312059353:
		case 980600918:
		case 2040481470:
		case -1485364627:
			return 3;
			break;
		
		case 785834208:
		case 544621599:
		case 1398581739:
		case 1157565744:
		case 1052836024:
			return 4;
			break;
		
		case 885914480:
		case 1110382134:
		case -2025250711:
		case -1223458819:
		case 1806133542:
			return 5;
			break;
		
		case 119592333:
		case -1585051047:
		case -1278497052:
		case -1109736702:
		case -1316574634:
			return 6;
			break;
		
		case -743251029:
		case -1459843521:
		case -283075962:
		case -997243548:
		case -1711837131:
			return 7;
			break;
		
		case 1346719200:
		case -231468525:
		case 76461768:
		case 382786380:
		case 690257907:
			return 8;
			break;
		
		case -529982912:
		case -425711954:
		case -184040579:
		case 187822033:
		case -1722577898:
			return 9;
			break;
		
		case 5888009:
		case 312966308:
		case -672463060:
		case -231851086:
		case -1527144118:
			return 10;
			break;
		
		case 288802011:
		case 1057005678:
		case 901877232:
		case 1679059605:
		case 1510233717:
		case -2016005616:
			return 11;
			break;
		
		case 239253137:
		case 1536545078:
		case 834633098:
		case -10053415:
		case -782254908:
			return 12;
			break;
		
		case 526112963:
		case -655766568:
		case -431298918:
		case 2082181693:
		case -1982485071:
			return 13;
			break;
		
		case -14781889:
		case -2044526518:
		case -1737906985:
		case 1701920483:
		case -1222188463:
			return 14;
			break;
		
		case -2145651656:
		case 1407032252:
		case 478784789:
		case 1849774211:
		case 992406095:
			return 15;
			break;
	}
	return -2;
}

bool func_252(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1777482008:
			switch (iParam1)
			{
				case -1319501935:
				case -1647377895:
				case -1957209874:
				case -1345298815:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7482, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case 1853848121:
				case -1344821718:
				case -1097973925:
				case -1643463946:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7483, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case 1547523509:
				case 41569134:
				case 544932647:
				case 1718078401:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7484, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case 1106288924:
				case 322170081:
				case 1380509378:
				case 1355587723:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7485, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case 1067687042:
				case -453078921:
				case 1141099064:
				case 1107428086:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7486, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case 666758327:
				case -140429892:
				case 1937156397:
				case 1076363074:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7487, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case 361187402:
				case 1229969688:
				case 1145981517:
				case -1146816966:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7488, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -619654314:
				case 1510963863:
				case 941437419:
				case -1442819343:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7489, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -117698764:
				case 946157383:
				case 768875865:
				case -2027352765:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7490, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -1128556884:
				case 1091651743:
				case 463829244:
				case 1970366932:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7491, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case 166870332:
				case -382607214:
				case -1788930428:
				case -1465902926:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7492, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -1300754875:
				case -598260003:
				case -743632093:
				case 274655298:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7493, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case 491054049:
				case -845338263:
				case -495275842:
				case -1496378076:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7494, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case 1460852604:
				case -1061318742:
				case -331791301:
				case -202789032:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7495, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case 1866513558:
				case -1506017664:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7515, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -2139070699:
				case -1788650289:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7516, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -1951763095:
				case -1482653363:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7517, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -1727459298:
				case -619321289:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7518, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case 440963751:
				case -850965350:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7519, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case 682143591:
				case 6927070:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7520, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case 897992994:
				case -220981325:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7521, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case 1145267868:
				case 4764360:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7522, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -341035665:
				case -235465179:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7523, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -565241163:
				case 618560499:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7524, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -1564610862:
				case 1567753792:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7525, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -1936539012:
				case 1995585856:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7526, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case 1411371415:
				case -2109354009:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7527, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case 1176122764:
				case -1956716007:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(7528, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
			}
			break;
		
		case -1115780512:
			switch (iParam1)
			{
				case -1355237368:
				case -1712641707:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(4247, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -1020665878:
				case -1942647318:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(4248, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -859835626:
				case 2119332380:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(4249, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case 1585747617:
				case 1885853255:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(4250, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -148879406:
				case 204475861:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(4251, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -1596351674:
				case 899113123:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(4252, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -1296810245:
				case 659342350:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(4253, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -1140502115:
				case -508544810:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(4254, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case 940263847:
				case -728064341:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(4255, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case 1234300084:
				case -19139795:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(4256, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
			}
			break;
		
		case -264766549:
			return true;
			break;
		
		case 1995580978:
			return true;
			break;
		
		case -1751726434:
		case -565145480:
		case 1902057639:
			switch (iParam1)
			{
				case -1509584627:
				case 459635659:
				case 160618534:
				case -1927335420:
				case 1994785842:
				case -1564189714:
				case -954358616:
				case -2011951504:
				case -1814354434:
				case 1809339897:
				case 14132998:
				case -1144442271:
				case 1982080792:
				case -956905284:
					if (Global_262145.f_10176)
					{
						return false;
					}
					else
					{
						return true;
					}
					break;
			}
			switch (iParam1)
			{
				case 1743008394:
				case 1084175393:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(110, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -1090232119:
				case 787255484:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(111, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -1133356123:
				case -566366372:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(112, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
			}
			switch (iParam1)
			{
				case -866104415:
				case -105273769:
				case -403504438:
				case 1700527522:
				case 1394759983:
				case -2134002551:
				case 1854607364:
				case -850378710:
				case -2098091154:
				case -1331493168:
				case -564272571:
				case -1735076172:
				case 1178251777:
				case -1551324718:
				case -1862564680:
				case -1295529880:
				case -512809538:
				case -1471270027:
				case -990352183:
				case -46441130:
				case -292603126:
				case -552690679:
				case -245382997:
				case 596681996:
				case -1506301372:
				case -1711042084:
					if (Global_262145.f_10177)
					{
						return false;
					}
					else
					{
						return true;
					}
					break;
			}
			switch (iParam1)
			{
				case 1970268516:
				case 2026483804:
				case 1831101822:
				case 1411612772:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(4333, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
			}
			switch (iParam1)
			{
				case 1875861023:
				case -1385031204:
				case -703154335:
				case 798340921:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(4334, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
			}
			if (Global_262145.f_7251)
			{
				return true;
			}
			break;
		
		case -208667298:
		case -1762507951:
			switch (iParam1)
			{
				case -1208373599:
				case 1656518170:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(4335, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
			}
			switch (iParam1)
			{
				case -970054678:
				case -840010097:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(3750, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
			}
			if (iParam0 != -1762507951)
			{
				if (Global_262145.f_7252)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else if (!Global_262145.f_10175)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		
		case 1498456532:
			if (func_253())
			{
				switch (iParam1)
				{
					case 201952755:
					case -1881959031:
					case -1046152917:
					case 1582116924:
					case 877452376:
					case 1117419763:
					case 732885188:
					case -1037820496:
					case -79097863:
						return true;
						break;
					}
			}
			switch (iParam1)
			{
				case 812276014:
				case -958462439:
				case 220992178:
				case 206222989:
				case -636759544:
				case -1540364719:
				case 932372400:
				case 613995288:
				case 795666624:
				case -1119484812:
				case -177102699:
				case 1194837024:
				case 884055828:
				case -1471866428:
					if (!func_125(iParam1, 1, 1, 1, -1) && !Global_262145.f_9504)
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
			}
			if (((!Global_262145.f_5004 && !func_125(iParam1, 1, 1, 1, -1)) && !_0x341DE7ED1D2A1BFD(iParam1, -1467682989, iParam2)) && !Global_262145.f_9506)
			{
				return true;
			}
			break;
		
		case 742264775:
			if ((!Global_262145.f_5004 && !func_142(iParam1, -1)) && !Global_262145.f_9506)
			{
				return true;
			}
			break;
		
		case -1396810917:
			if ((!Global_262145.f_10846 && !func_125(iParam1, 1, 1, 1, -1)) && !_0x341DE7ED1D2A1BFD(iParam1, -1467682989, iParam2))
			{
				return true;
			}
			break;
		
		case 1320779089:
			switch (iParam1)
			{
				case -1603287920:
				case -211721637:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(3594, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -1372102625:
				case -1027636968:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(3595, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -2062742069:
				case -1880351886:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(3596, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -1832408768:
				case -442186014:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(3597, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -1936122689:
				case -1438134231:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(3598, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case -1697531600:
				case -1066861461:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(3599, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case 845182355:
				case 1056116500:
				case 365608040:
				case 596891642:
				case -343349275:
				case -1175339092:
				case -1473504223:
				case -694880014:
				case -1030041346:
				case 1894264218:
					if (((!Global_262145.f_6185 && !func_125(iParam1, 1, 1, 1, -1)) && !_0x341DE7ED1D2A1BFD(iParam1, -1467682989, iParam2)) && !func_225(3606, -1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				
				case 1024837558:
				case 626202673:
				case -336624833:
				case 563474059:
				case 1992100561:
				case -1506874956:
				case 1998385862:
				case 1222776401:
				case 721974080:
				case -45508669:
				case -2126126426:
				case -1216327910:
				case -1117328457:
				case -888535299:
				case 218097142:
				case -568686548:
				case -1671002283:
				case 1065209269:
				case 1684425644:
				case 1983115079:
				case -1902280196:
				case -115943475:
				case 1062064333:
				case -1062841468:
					if (!Global_262145.f_9528 && !func_125(iParam1, 1, 1, 1, -1))
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
			}
			if ((!Global_262145.f_6185 && !func_125(iParam1, 1, 1, 1, -1)) && !_0x341DE7ED1D2A1BFD(iParam1, -1467682989, iParam2))
			{
				return true;
			}
			break;
		
		case -1163333204:
			if (!Global_262145.f_6185 && !func_142(iParam1, -1))
			{
				return true;
			}
			break;
		
		case 1017292030:
			switch (iParam1)
			{
				case 572541419:
				case -80494897:
					if (!func_125(iParam1, 1, 1, 1, -1) && !func_225(3616, -1, -1))
					{
						return true;
					}
					break;
			}
			break;
		
		case 1510668263:
			if ((!Global_262145.f_9521 && !func_125(iParam1, 1, 1, 1, -1)) && !_0x341DE7ED1D2A1BFD(iParam1, -1467682989, iParam2))
			{
				return true;
			}
			break;
		
		case -506831438:
			if (!Global_262145.f_9514 && !func_125(iParam1, 1, 1, 1, -1))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_253()
{
	return is_dlc_present(-204307980);
}

int func_254(int iParam0)
{
	if (iParam0 == joaat("player_zero"))
	{
		return 0;
	}
	if (iParam0 == joaat("player_one"))
	{
		return 1;
	}
	if (iParam0 == joaat("player_two"))
	{
		return 2;
	}
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		return 3;
	}
	if (iParam0 == joaat("mp_f_freemode_01"))
	{
		return 4;
	}
	return 5;
}

void func_255(char* sParam0, int iParam1, struct<4> Param2, int iParam3)
{
	int iVar0;
	
	iVar0 = 999;
	switch (iParam1)
	{
		case 6:
			iVar0 = 0;
			break;
		
		case 7:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 3;
			break;
		
		case 10:
			iVar0 = 4;
			break;
		
		case 11:
			iVar0 = 5;
			break;
		
		case 13:
			iVar0 = 6;
			break;
		
		case 14:
			iVar0 = 7;
			break;
		
		case 15:
			iVar0 = 8;
			break;
		
		case 5:
		case 12:
			return;
			break;
		
		default:
			break;
	}
	if (iParam6 != 0)
	{
		func_256(sParam0, Param2, iParam6, 0, iVar0, 0, -1, -1);
	}
	else
	{
		func_256(sParam0, Param2, get_entity_model(player_ped_id()), 0, iVar0, 0, -1, -1);
	}
}

void func_256(char* sParam0, struct<4> Param1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	switch (get_hash_key(&Param1))
	{
		case 64715401:
		case -2016195117:
			StringCopy(&Param1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case -1253005183:
			StringCopy(&Param1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case -1119195824:
			StringCopy(&Param1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case -672224483:
			StringCopy(&Param1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case 600999375:
			StringCopy(&Param1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case -859056265:
			StringCopy(&Param1, "GSA_TYPE_B", 16);
			break;
		
		case 1779531303:
		case 82051787:
			StringCopy(&Param1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam6)
	{
		case 0:
			if (iParam5 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &Param1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 1:
			if (iParam5 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam7 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &Param1, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 2:
			if (iParam5 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam5 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &Param1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &Param1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam7, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam8, 64);
			break;
		
		case 4:
			if (iParam5 == Global_68041)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam5 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam10 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam10 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam10 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam10 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam10 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam10 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam10 == 6)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam9 = -1;
				}
				else if (iParam7 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam7 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &Param1, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else if (iParam7 == 22)
			{
				StringCopy(&Param1, get_display_name_from_vehicle_model(iParam5), 16);
				if (is_string_null_or_empty(&Param1) || get_hash_key(&Param1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &Param1, 64);
				switch (iParam5)
				{
					case joaat("dubsta2"):
					case joaat("cavalcade2"):
					case joaat("mesa2"):
					case joaat("rapidgt2"):
					case joaat("emperor2"):
						StringConCat(sParam0, "2", 64);
						break;
					
					case joaat("mesa3"):
					case joaat("emperor3"):
					case joaat("burrito3"):
						StringConCat(sParam0, "3", 64);
						break;
					
					case joaat("tornado4"):
						StringConCat(sParam0, "4", 64);
						break;
				}
			}
			else if (iParam7 == 40)
			{
				StringCopy(&Param1, get_display_name_from_vehicle_model(iParam5), 16);
				if (is_string_null_or_empty(&Param1))
				{
					return;
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &Param1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &Param1, 64);
				switch (iParam5)
				{
					case joaat("dubsta2"):
					case joaat("cavalcade2"):
					case joaat("mesa2"):
					case joaat("rapidgt2"):
					case joaat("emperor2"):
						StringConCat(sParam0, "2", 64);
						break;
					
					case joaat("mesa3"):
					case joaat("emperor3"):
					case joaat("burrito3"):
						StringConCat(sParam0, "3", 64);
						break;
					
					case joaat("tornado4"):
						StringConCat(sParam0, "4", 64);
						break;
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam7, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			break;
	}
}

int func_257(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 29;
		
		case 1:
			return 28;
		
		case 2:
			return 30;
		
		case 3:
			return 31;
		
		case 4:
			return 32;
		
		case 5:
			return 33;
		
		case 6:
			return 34;
		
		case 7:
			return 35;
		
		case 8:
			return 36;
		
		case 9:
			return 37;
		
		case 10:
			return 38;
		
		case 11:
			return 39;
		
		case 12:
			return 40;
		
		case 13:
			return 41;
		
		case 14:
			return 42;
		
		case 15:
			return 43;
		
		case 16:
			return 44;
		
		case 17:
			return 45;
		
		case 18:
			return 46;
		
		case 19:
			return 47;
		
		case 20:
			return 48;
		
		case 21:
			return 49;
		
		case 22:
			return 50;
		
		case 23:
			return 51;
		
		case 24:
			return 52;
		
		case 25:
			return 53;
		
		case 26:
			return 54;
		
		case 27:
			return 55;
		
		case 28:
			return 56;
		
		case 29:
			return 57;
		
		case 30:
			return 58;
		
		case 31:
			return 59;
		
		case 32:
			return 60;
		
		case 33:
			return 91;
		
		case 34:
			return 92;
		
		case 35:
			return 93;
		
		case 36:
			return 94;
		
		case 37:
			return 95;
		
		case 38:
			return 96;
		
		case 39:
			return 97;
		
		case 40:
			return 98;
		
		case 41:
			return 99;
		
		case 42:
			return 100;
		
		case 43:
			return 101;
		
		case 44:
			return 102;
		
		case 45:
			return 103;
		
		case 46:
			return 104;
		
		case 47:
			return 105;
		
		case 48:
			return 106;
		
		case 49:
			return 107;
		
		case 50:
			return 108;
		
		case 51:
			return 109;
		
		case 52:
			return 110;
		
		case 53:
			return 111;
		
		case 54:
			return 112;
		
		case 55:
			return 113;
		
		case 56:
			return 114;
		
		case 57:
			return 115;
		
		case 58:
			return 116;
		
		case 59:
			return 117;
		
		case 60:
			return 118;
		
		case 61:
			return 119;
		
		case 62:
			return 120;
		
		case 63:
			return 121;
		
		case 64:
			return 122;
		
		default:
	}
	return 29;
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 4;
			break;
		
		case 32:
			return 6;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 10;
			break;
		
		case 36:
			return 1;
			break;
		
		case 37:
			return 1;
			break;
		
		case 38:
			return 12;
			break;
		
		case 39:
			return 14;
			break;
		
		case 40:
			return 16;
			break;
		
		case 41:
			return 18;
			break;
		
		case 42:
			return 20;
			break;
		
		case 43:
			return 8;
			break;
		
		case 44:
			return 1;
			break;
		
		case 45:
			return 1;
			break;
		
		case 46:
			return 7;
			break;
		
		case 47:
			return 5;
			break;
		
		case 48:
			return 21;
			break;
		
		case 49:
			return 19;
			break;
		
		case 50:
			return 17;
			break;
		
		case 51:
			return 0;
			break;
		
		case 52:
			return 0;
			break;
		
		case 53:
			return 0;
			break;
		
		case 54:
			return 0;
			break;
		
		case 55:
			return 9;
			break;
		
		case 56:
			return 13;
			break;
		
		case 57:
			return 11;
			break;
		
		case 58:
			return 15;
			break;
		
		case 59:
			return 23;
			break;
		
		case 60:
			return 25;
			break;
		
		case 91:
			return 1;
			break;
		
		case 92:
			return 1;
			break;
		
		case 93:
			return 1;
			break;
		
		case 94:
			return 1;
			break;
		
		case 95:
			return 1;
			break;
		
		case 96:
			return 1;
			break;
		
		case 97:
			return 1;
			break;
		
		case 98:
			return 1;
			break;
		
		case 99:
			return 1;
			break;
		
		case 100:
			return 1;
			break;
		
		case 101:
			return 1;
			break;
		
		case 102:
			return 1;
			break;
		
		case 103:
			return 1;
			break;
		
		case 104:
			return 1;
			break;
		
		case 105:
			return 1;
			break;
		
		case 106:
			return 1;
			break;
		
		case 107:
			return 1;
			break;
		
		case 108:
			return 1;
			break;
		
		case 109:
			return 1;
			break;
		
		case 110:
			return 1;
			break;
		
		case 111:
			return 1;
			break;
		
		case 112:
			return 1;
			break;
		
		case 113:
			return 1;
			break;
		
		case 114:
			return 1;
			break;
		
		case 115:
			return 1;
			break;
		
		case 116:
			return 1;
			break;
		
		case 117:
			return 1;
			break;
		
		case 118:
			return 1;
			break;
		
		case 119:
			return 1;
			break;
		
		case 120:
			return 1;
			break;
		
		case 121:
			return 1;
			break;
		
		case 122:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		case 63:
			return 6;
			break;
		
		case 64:
			return 1;
			break;
		
		case 65:
			return 1;
			break;
		
		case 66:
			return 22;
			break;
		
		case 67:
			return 14;
			break;
		
		case 68:
			return 8;
			break;
		
		case 69:
			return 1;
			break;
		
		case 70:
			return 20;
			break;
		
		case 71:
			return 10;
			break;
		
		case 72:
			return 1;
			break;
		
		case 73:
			return 1;
			break;
		
		case 74:
			return 18;
			break;
		
		case 75:
			return 16;
			break;
		
		case 76:
			return 12;
			break;
		
		case 77:
			return 24;
			break;
		
		case 78:
			return 26;
			break;
		
		case 80:
			return 1;
			break;
		
		case 81:
			return 1;
			break;
		
		case 82:
			return 1;
			break;
		
		case 83:
			return 1;
			break;
		
		case 84:
			return 1;
			break;
		
		case 85:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 87:
			return 1;
			break;
		
		case 88:
			return 1;
			break;
		
		case 89:
			return 1;
			break;
		
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 61;
		
		case 1:
			return 69;
		
		case 2:
			return 63;
		
		case 3:
			return 64;
		
		case 4:
			return 65;
		
		case 5:
			return 66;
		
		case 6:
			return 67;
		
		case 7:
			return 68;
		
		case 8:
			return 69;
		
		case 9:
			return 70;
		
		case 10:
			return 71;
		
		case 11:
			return 72;
		
		case 12:
			return 73;
		
		case 13:
			return 74;
		
		case 14:
			return 75;
		
		case 15:
			return 76;
		
		case 16:
			return 77;
		
		case 17:
			return 78;
		
		case 18:
			return 79;
		
		case 19:
			return 80;
		
		case 20:
			return 80;
		
		case 27:
			return 81;
		
		case 28:
			return 82;
		
		case 29:
			return 83;
		
		case 30:
			return 84;
		
		case 31:
			return 85;
		
		case 32:
			return 86;
		
		case 33:
			return 87;
		
		case 36:
			return 88;
		
		case 34:
			return 89;
		
		case 35:
			return 90;
		
		default:
	}
	return 61;
}

void func_260(var uParam0)
{
	if (Global_17257.f_4633 >= 3 || Global_17257.f_4632 >= 4)
	{
		return;
	}
	Global_17257.f_4566[Global_17257.f_4632] = 2;
	Global_17257.f_4632++;
	Global_17257.f_4571[Global_17257.f_4633] = uParam0;
	Global_17257.f_4633++;
}

int func_261(int iParam0)
{
	if (!func_262())
	{
		switch (iParam0)
		{
			case 0:
				return 1;
			
			case 1:
				return 1;
			
			case 2:
				return 1;
			
			case 3:
				return 1;
			
			case 4:
				return 1;
			
			case 5:
				return 1;
			
			case 7:
				return 1;
			
			case 8:
				return 1;
			
			case 9:
				return 1;
			
			case 10:
				return 1;
			
			case 11:
				return 1;
			
			case 13:
				return 12;
			
			case 14:
				return 12;
			
			case 15:
				return 12;
			
			case 16:
				return 12;
			
			case 17:
				return 12;
			
			case 19:
				return 1;
			
			case 20:
				return 1;
			
			case 21:
				return 1;
			
			case 22:
				return 1;
			
			case 23:
				return 1;
			
			case 26:
				return 8;
			
			case 27:
				return 8;
			
			case 28:
				return 8;
			
			case 29:
				return 8;
			
			case 30:
				return 8;
			
			case 32:
				return 18;
			
			case 33:
				return 18;
			
			case 34:
				return 18;
			
			case 35:
				return 18;
			
			case 36:
				return 18;
			
			case 38:
				return 1;
			
			case 39:
				return 1;
			
			case 40:
				return 1;
			
			case 41:
				return 1;
			
			case 42:
				return 1;
			
			case 45:
				return 1;
			
			case 46:
				return 1;
			
			case 47:
				return 1;
			
			case 48:
				return 1;
			
			case 49:
				return 1;
			
			case 50:
				return 14;
			
			case 51:
				return 14;
			
			case 52:
				return 14;
			
			case 53:
				return 14;
			
			case 54:
				return 14;
			
			case 57:
				return 16;
			
			case 58:
				return 16;
			
			case 59:
				return 16;
			
			case 60:
				return 16;
			
			case 61:
				return 16;
			
			case 63:
				return 24;
			
			case 64:
				return 24;
			
			case 65:
				return 24;
			
			case 66:
				return 24;
			
			case 67:
				return 24;
			
			case 69:
				return 22;
			
			case 70:
				return 22;
			
			case 71:
				return 22;
			
			case 72:
				return 22;
			
			case 73:
				return 22;
			
			case 74:
				return 1;
			
			case 75:
				return 1;
			
			case 76:
				return 1;
			
			case 77:
				return 1;
			
			case 78:
				return 1;
			
			case 80:
				return 20;
			
			case 81:
				return 20;
			
			case 82:
				return 20;
			
			case 83:
				return 20;
			
			case 84:
				return 20;
			
			case 85:
				return 6;
			
			case 86:
				return 6;
			
			case 87:
				return 6;
			
			case 88:
				return 6;
			
			case 89:
				return 6;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 1;
			
			case 3:
				return 1;
			
			case 4:
				return 1;
			
			case 5:
				return 1;
			
			case 7:
				return 1;
			
			case 8:
				return 1;
			
			case 9:
				return 1;
			
			case 10:
				return 1;
			
			case 11:
				return 1;
			
			case 13:
				return 1;
			
			case 14:
				return 1;
			
			case 15:
				return 1;
			
			case 16:
				return 1;
			
			case 17:
				return 1;
			
			case 24:
				return 1;
			
			case 25:
				return 1;
			
			case 26:
				return 1;
			
			case 27:
				return 1;
			
			case 28:
				return 1;
			
			case 35:
				return 1;
			
			case 36:
				return 1;
			
			case 37:
				return 1;
			
			case 38:
				return 1;
			
			case 39:
				return 1;
			
			case 60:
				return 1;
			
			case 61:
				return 1;
			
			case 62:
				return 1;
			
			case 63:
				return 1;
			
			case 64:
				return 1;
			
			case 85:
				return 1;
			
			case 86:
				return 1;
			
			case 87:
				return 1;
			
			case 88:
				return 1;
			
			case 89:
				return 1;
			
			case 41:
				return 6;
			
			case 42:
				return 6;
			
			case 43:
				return 6;
			
			case 44:
				return 6;
			
			case 45:
				return 6;
			
			case 79:
				return 8;
			
			case 80:
				return 8;
			
			case 81:
				return 8;
			
			case 82:
				return 8;
			
			case 83:
				return 8;
			
			case 18:
				return 10;
			
			case 19:
				return 10;
			
			case 20:
				return 10;
			
			case 21:
				return 10;
			
			case 22:
				return 10;
			
			case 67:
				return 12;
			
			case 68:
				return 12;
			
			case 69:
				return 12;
			
			case 70:
				return 12;
			
			case 71:
				return 12;
			
			case 53:
				return 14;
			
			case 54:
				return 14;
			
			case 55:
				return 14;
			
			case 56:
				return 14;
			
			case 57:
				return 14;
			
			case 47:
				return 16;
			
			case 48:
				return 16;
			
			case 49:
				return 16;
			
			case 50:
				return 16;
			
			case 51:
				return 16;
			
			case 30:
				return 18;
			
			case 31:
				return 18;
			
			case 32:
				return 18;
			
			case 33:
				return 18;
			
			case 34:
				return 18;
			
			case 73:
				return 20;
			
			case 74:
				return 20;
			
			case 75:
				return 20;
			
			case 76:
				return 20;
			
			case 77:
				return 20;
			
			case 0:
				return 25;
			}
		
		default:
	}
	return 0;
}

int func_262()
{
	return func_263(player_id());
}

bool func_263(int iParam0)
{
	if (get_entity_model(get_player_ped(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return true;
	}
	return false;
}

void func_264(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_4562), sParam0, 16);
	Global_17257.f_4632 = 0;
	Global_17257.f_4633 = 0;
	Global_17257.f_4634 = 0;
	Global_17257.f_4635 = 0;
	Global_17257.f_4636 = iParam1;
	Global_17257.f_4637 = get_game_timer();
	Global_17257.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4566[iVar0] = 0;
		iVar0++;
	}
}

void func_265(var uParam0)
{
	*uParam0 = {Global_17257.f_4562};
}

void func_266(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	struct<12> Var8;
	struct<2> Var20;
	float fVar32;
	struct<2> Var33;
	struct<2> Var45;
	int iVar57;
	
	if (is_ped_injured(iParam1))
	{
		return;
	}
	if ((is_control_just_pressed(2, 202) || is_disabled_control_just_pressed(2, 202)) || func_449())
	{
		func_448(iParam1, uParam0);
		func_446(uParam0);
		if ((*uParam0.f_496 == 5 || *uParam0.f_496 == 12) || *uParam0.f_496 == 9)
		{
			*uParam0.f_679 = 1;
		}
		else
		{
			*uParam0.f_679 = 0;
		}
		func_347(iParam1, *uParam0.f_496);
		return;
	}
	iVar0 = 0;
	fVar1 = -1f;
	iVar7 = get_entity_model(iParam1);
	func_27(uParam0.f_220, 300);
	switch (*uParam0.f_496)
	{
		case 5:
			*uParam0.f_105.f_15 = 0;
			func_344(0, 0, 0, 1);
			if (func_343())
			{
				if (Global_2562129 == *uParam0.f_105.f_1)
				{
					iVar0 = 1;
				}
				else
				{
					*uParam0.f_105.f_1 = Global_2562129;
					play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_510(*uParam0.f_105.f_1, 1, 1);
				}
			}
			if (((is_control_just_pressed(2, 188) || (*uParam0.f_220.f_1 < -100 && *uParam0.f_220.f_4)) || (is_control_pressed(2, 188) && *uParam0.f_220.f_8)) || func_342(*uParam0.f_220.f_8, 0, 0))
			{
				play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				*uParam0.f_220.f_8 = 0;
				*uParam0.f_220.f_4 = 0;
				*uParam0.f_220.f_20 = get_game_timer();
				if (network_is_game_in_progress())
				{
					*uParam0.f_220.f_24 = get_network_time();
				}
				*uParam0.f_105.f_1--;
				while (*uParam0.f_105.f_1 >= 0 && !func_340(iVar7, func_341(*uParam0.f_105.f_1)))
				{
					*uParam0.f_105.f_1--;
				}
				if (!func_340(iVar7, func_341(*uParam0.f_105.f_1)))
				{
					*uParam0.f_105.f_1 = 6;
				}
				while (*uParam0.f_105.f_1 >= 0 && !func_340(iVar7, func_341(*uParam0.f_105.f_1)))
				{
					*uParam0.f_105.f_1--;
				}
				func_510(*uParam0.f_105.f_1, 1, 1);
			}
			else if (((is_control_just_pressed(2, 187) || (*uParam0.f_220.f_1 > 100 && *uParam0.f_220.f_4)) || (is_control_pressed(2, 187) && *uParam0.f_220.f_9)) || func_339(*uParam0.f_220.f_9, 0, 0))
			{
				play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				*uParam0.f_220.f_9 = 0;
				*uParam0.f_220.f_4 = 0;
				*uParam0.f_220.f_20 = get_game_timer();
				if (network_is_game_in_progress())
				{
					*uParam0.f_220.f_24 = get_network_time();
				}
				*uParam0.f_105.f_1++;
				while (*uParam0.f_105.f_1 <= 6 && !func_340(iVar7, func_341(*uParam0.f_105.f_1)))
				{
					*uParam0.f_105.f_1++;
				}
				if (!func_340(iVar7, func_341(*uParam0.f_105.f_1)))
				{
					*uParam0.f_105.f_1 = 0;
				}
				while (*uParam0.f_105.f_1 <= 6 && !func_340(iVar7, func_341(*uParam0.f_105.f_1)))
				{
					*uParam0.f_105.f_1++;
				}
				func_510(*uParam0.f_105.f_1, 1, 1);
			}
			else if (is_control_just_pressed(2, 201) || iVar0 == 1)
			{
				iVar0 = 0;
				play_sound_frontend(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				*uParam0.f_684 = -1;
				*uParam0.f_496 = func_341(*uParam0.f_105.f_1);
				*uParam0.f_560 = 1;
				*uParam0.f_105.f_1 = 0;
				*uParam0.f_608 = 0;
				if (*uParam0.f_496 == 9)
				{
					func_347(iParam1, *uParam0.f_496);
				}
				if ((*uParam0.f_496 == 5 || *uParam0.f_496 == 12) || *uParam0.f_496 == 9)
				{
					*uParam0.f_679 = 1;
				}
				else
				{
					*uParam0.f_679 = 0;
				}
				if (*uParam0.f_496 == 12)
				{
					while (*uParam0.f_105.f_1 <= 2 && !func_340(iVar7, func_338(*uParam0.f_105.f_1)))
					{
						*uParam0.f_105.f_1++;
					}
				}
			}
			break;
		
		case 12:
			*uParam0.f_105.f_15 = 0;
			func_344(0, 0, 0, 1);
			if (func_343())
			{
				if (Global_2562129 == *uParam0.f_105.f_1)
				{
					iVar0 = 1;
				}
				else
				{
					*uParam0.f_105.f_1 = Global_2562129;
					play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_510(*uParam0.f_105.f_1, 1, 1);
					*uParam0.f_693 = func_509();
				}
			}
			if (((is_control_just_pressed(2, 188) || (*uParam0.f_220.f_1 < -100 && *uParam0.f_220.f_4)) || (is_control_pressed(2, 188) && *uParam0.f_220.f_8)) || func_342(*uParam0.f_220.f_8, 0, 0))
			{
				play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				*uParam0.f_220.f_8 = 0;
				*uParam0.f_220.f_4 = 0;
				*uParam0.f_220.f_20 = get_game_timer();
				if (network_is_game_in_progress())
				{
					*uParam0.f_220.f_24 = get_network_time();
				}
				*uParam0.f_105.f_1--;
				while (*uParam0.f_105.f_1 >= 0 && !func_340(iVar7, func_338(*uParam0.f_105.f_1)))
				{
					*uParam0.f_105.f_1--;
				}
				if (!func_340(iVar7, func_338(*uParam0.f_105.f_1)))
				{
					*uParam0.f_105.f_1 = 2;
				}
				while (*uParam0.f_105.f_1 >= 0 && !func_340(iVar7, func_338(*uParam0.f_105.f_1)))
				{
					*uParam0.f_105.f_1--;
				}
				func_510(*uParam0.f_105.f_1, 1, 1);
				*uParam0.f_693 = func_509();
			}
			else if (((is_control_just_pressed(2, 187) || (*uParam0.f_220.f_1 > 100 && *uParam0.f_220.f_4)) || (is_control_pressed(2, 187) && *uParam0.f_220.f_9)) || func_339(*uParam0.f_220.f_9, 0, 0))
			{
				play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				*uParam0.f_220.f_9 = 0;
				*uParam0.f_220.f_4 = 0;
				*uParam0.f_220.f_20 = get_game_timer();
				if (network_is_game_in_progress())
				{
					*uParam0.f_220.f_24 = get_network_time();
				}
				*uParam0.f_105.f_1++;
				while (*uParam0.f_105.f_1 <= 2 && !func_340(iVar7, func_338(*uParam0.f_105.f_1)))
				{
					*uParam0.f_105.f_1++;
				}
				if (!func_340(iVar7, func_338(*uParam0.f_105.f_1)))
				{
					*uParam0.f_105.f_1 = 0;
				}
				while (*uParam0.f_105.f_1 <= 2 && !func_340(iVar7, func_338(*uParam0.f_105.f_1)))
				{
					*uParam0.f_105.f_1++;
				}
				func_510(*uParam0.f_105.f_1, 1, 1);
				*uParam0.f_693 = func_509();
			}
			else if (is_control_just_pressed(2, 201) || iVar0 == 1)
			{
				iVar0 = 0;
				play_sound_frontend(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				*uParam0.f_496 = func_338(*uParam0.f_105.f_1);
				if ((*uParam0.f_496 == 5 || *uParam0.f_496 == 12) || *uParam0.f_496 == 9)
				{
					*uParam0.f_679 = 1;
				}
				else
				{
					*uParam0.f_679 = 0;
				}
				*uParam0.f_560 = 1;
				*uParam0.f_105.f_1 = 0;
			}
			break;
		
		default:
			if ((*uParam0.f_105.f_1 != -1 && *uParam0.f_464) && !*uParam0.f_463)
			{
				if (func_521(iVar7, *uParam0.f_496, *uParam0.f_105.f_1, &Var8))
				{
					func_337(Var8.f_11, 2, -1);
				}
			}
			*uParam0.f_105.f_15 = 0;
			func_344(0, 0, 0, 1);
			if (func_343())
			{
				if (Global_2562129 == *uParam0.f_105.f_1)
				{
					iVar0 = 1;
				}
				else
				{
					*uParam0.f_105.f_1 = Global_2562129;
					play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (*uParam0.f_464)
					{
						*uParam0.f_560 = 1;
						*uParam0.f_564 = 1;
						*uParam0.f_565 = func_509();
					}
					*uParam0.f_463 = !func_212(uParam0, iVar7, *uParam0.f_496, *uParam0.f_105.f_1);
					*uParam0.f_464 = (!*uParam0.f_463 && !func_208(uParam0, iVar7, *uParam0.f_496, *uParam0.f_105.f_1));
					if (func_521(iVar7, *uParam0.f_496, *uParam0.f_105.f_1, &Var20))
					{
						*uParam0.f_465 = func_336(iVar7, *uParam0.f_496, &Var20);
					}
					else
					{
						*uParam0.f_465 = 0;
					}
					func_334(uParam0, iParam1, *uParam0.f_496, *uParam0.f_105.f_1);
					if (*uParam0.f_560)
					{
						*uParam0.f_678 = 1;
						func_312(uParam0, iParam1, 0, 0);
						*uParam0.f_560 = 0;
					}
					else
					{
						func_302(uParam0, iVar7, 1);
					}
					func_510(*uParam0.f_105.f_1, 1, 1);
					*uParam0.f_693 = func_509();
					if (func_521(iVar7, *uParam0.f_496, *uParam0.f_105.f_1, &Var20))
					{
						*uParam0.f_536 = {Var20.f_1};
					}
					func_300(iVar7, *uParam0.f_496, *uParam0.f_105.f_1);
				}
			}
			if (_is_input_disabled(2))
			{
				if (func_177(uParam0))
				{
					if (_0x632B2940C67F4EA9(*uParam0.f_594, &iVar4, &iVar5, &uVar6))
					{
						if (iVar4 == 5)
						{
							if (iVar5 > -1)
							{
								*uParam0.f_605 = func_299(iVar7, *uParam0.f_496, iVar5);
								*uParam0.f_678 = 1;
								func_334(uParam0, iParam1, *uParam0.f_496, *uParam0.f_105.f_1);
								if (*uParam0.f_678)
								{
									*uParam0.f_678 = 1;
									func_312(uParam0, iParam1, 0, 0);
									*uParam0.f_560 = 0;
								}
							}
							else if (iVar5 == -1)
							{
								_set_control_normal(2, 205, 1f);
							}
							else if (iVar5 == -2)
							{
								_set_control_normal(2, 206, 1f);
							}
						}
					}
				}
				if (func_298(uParam0, iVar7))
				{
					if (_0x632B2940C67F4EA9(*uParam0.f_584, &iVar4, &iVar5, &uVar6))
					{
						if (iVar4 == 5)
						{
							if (iVar5 > -1)
							{
								*uParam0.f_604 = func_299(iVar7, *uParam0.f_496, iVar5);
								*uParam0.f_678 = 1;
								func_334(uParam0, iParam1, *uParam0.f_496, *uParam0.f_105.f_1);
								if (*uParam0.f_678)
								{
									*uParam0.f_678 = 1;
									func_312(uParam0, iParam1, 0, 0);
									*uParam0.f_560 = 0;
								}
							}
							else if (iVar5 == -1)
							{
								_set_control_normal(2, 207, 1f);
							}
							else if (iVar5 == -2)
							{
								_set_control_normal(2, 208, 1f);
							}
						}
					}
				}
				if (func_297(uParam0, iVar7))
				{
					fVar2 = 0.113f - Global_17256 / 2f;
					fVar3 = func_176() + 0.255f - 0.5972f / 2f;
					fVar1 = func_294(4, fVar2, fVar3, Global_17256, 0.15f, 1f);
					if (fVar1 >= 0f && fVar1 != fLocal_98)
					{
						if (*uParam0.f_496 != 6)
						{
							*uParam0.f_609 = fVar1;
							*uParam0.f_678 = 1;
							func_334(uParam0, iParam1, *uParam0.f_496, *uParam0.f_105.f_1);
							func_302(uParam0, iVar7, 1);
						}
						play_sound_frontend(iLocal_97, "CONTINUOUS_SLIDER", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					}
					else
					{
						if (*uParam0.f_678)
						{
							*uParam0.f_678 = 1;
							func_312(uParam0, iParam1, 0, 0);
							*uParam0.f_560 = 0;
						}
						stop_sound(iLocal_97);
					}
					fLocal_98 = fVar1;
				}
			}
			fVar32 = 1f - 0.15f / 20f;
			if (((is_control_just_pressed(2, 188) || (*uParam0.f_220.f_1 < -100 && *uParam0.f_220.f_4)) || (is_control_pressed(2, 188) && *uParam0.f_220.f_8)) || func_342(*uParam0.f_220.f_8, 0, 0))
			{
				play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				*uParam0.f_220.f_8 = 0;
				*uParam0.f_220.f_4 = 0;
				*uParam0.f_220.f_20 = get_game_timer();
				if (network_is_game_in_progress())
				{
					*uParam0.f_220.f_24 = get_network_time();
				}
				*uParam0.f_105.f_1--;
				while (*uParam0.f_105.f_1 >= 0 && !func_217(iVar7, *uParam0.f_496, *uParam0.f_105.f_1))
				{
					*uParam0.f_105.f_1--;
				}
				if (!func_217(iVar7, *uParam0.f_496, *uParam0.f_105.f_1))
				{
					*uParam0.f_105.f_1 = func_229(iVar7, *uParam0.f_496) - 1;
				}
				while (*uParam0.f_105.f_1 >= 0 && !func_217(iVar7, *uParam0.f_496, *uParam0.f_105.f_1))
				{
					*uParam0.f_105.f_1--;
				}
				if (*uParam0.f_105.f_1 < 0)
				{
					*uParam0.f_105.f_1 = func_229(iVar7, *uParam0.f_496) - 1;
				}
				while (*uParam0.f_105.f_1 >= 0 && !func_217(iVar7, *uParam0.f_496, *uParam0.f_105.f_1))
				{
					*uParam0.f_105.f_1--;
				}
				if (*uParam0.f_464)
				{
					*uParam0.f_560 = 1;
					*uParam0.f_564 = 1;
					*uParam0.f_565 = func_509();
				}
				*uParam0.f_463 = !func_212(uParam0, iVar7, *uParam0.f_496, *uParam0.f_105.f_1);
				*uParam0.f_464 = (!*uParam0.f_463 && !func_208(uParam0, iVar7, *uParam0.f_496, *uParam0.f_105.f_1));
				if (func_521(iVar7, *uParam0.f_496, *uParam0.f_105.f_1, &Var33))
				{
					*uParam0.f_465 = func_336(iVar7, *uParam0.f_496, &Var33);
				}
				else
				{
					*uParam0.f_465 = 0;
				}
				func_334(uParam0, iParam1, *uParam0.f_496, *uParam0.f_105.f_1);
				if (*uParam0.f_560)
				{
					*uParam0.f_678 = 1;
					func_312(uParam0, iParam1, 0, 0);
					*uParam0.f_560 = 0;
				}
				else
				{
					func_302(uParam0, iVar7, 1);
				}
				func_510(*uParam0.f_105.f_1, 1, 1);
				*uParam0.f_693 = func_509();
				if (func_521(iVar7, *uParam0.f_496, *uParam0.f_105.f_1, &Var33))
				{
					*uParam0.f_536 = {Var33.f_1};
				}
				func_300(iVar7, *uParam0.f_496, *uParam0.f_105.f_1);
			}
			else if (((is_control_just_pressed(2, 187) || (*uParam0.f_220.f_1 > 100 && *uParam0.f_220.f_4)) || (is_control_pressed(2, 187) && *uParam0.f_220.f_9)) || func_339(*uParam0.f_220.f_9, 0, 0))
			{
				play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				*uParam0.f_220.f_9 = 0;
				*uParam0.f_220.f_4 = 0;
				*uParam0.f_220.f_20 = get_game_timer();
				if (network_is_game_in_progress())
				{
					*uParam0.f_220.f_24 = get_network_time();
				}
				*uParam0.f_105.f_1++;
				while (*uParam0.f_105.f_1 <= func_229(iVar7, *uParam0.f_496) - 1 && !func_217(iVar7, *uParam0.f_496, *uParam0.f_105.f_1))
				{
					*uParam0.f_105.f_1++;
				}
				if (!func_217(iVar7, *uParam0.f_496, *uParam0.f_105.f_1))
				{
					*uParam0.f_105.f_1 = 0;
				}
				while (*uParam0.f_105.f_1 <= func_229(iVar7, *uParam0.f_496) - 1 && !func_217(iVar7, *uParam0.f_496, *uParam0.f_105.f_1))
				{
					*uParam0.f_105.f_1++;
				}
				if (*uParam0.f_105.f_1 >= func_229(iVar7, *uParam0.f_496))
				{
					*uParam0.f_105.f_1 = 0;
				}
				while (*uParam0.f_105.f_1 <= func_229(iVar7, *uParam0.f_496) - 1 && !func_217(iVar7, *uParam0.f_496, *uParam0.f_105.f_1))
				{
					*uParam0.f_105.f_1++;
				}
				if (*uParam0.f_464)
				{
					*uParam0.f_560 = 1;
					*uParam0.f_564 = 1;
					*uParam0.f_565 = func_509();
				}
				*uParam0.f_463 = !func_212(uParam0, iVar7, *uParam0.f_496, *uParam0.f_105.f_1);
				*uParam0.f_464 = (!*uParam0.f_463 && !func_208(uParam0, iVar7, *uParam0.f_496, *uParam0.f_105.f_1));
				if (func_521(iVar7, *uParam0.f_496, *uParam0.f_105.f_1, &Var45))
				{
					*uParam0.f_465 = func_336(iVar7, *uParam0.f_496, &Var45);
				}
				else
				{
					*uParam0.f_465 = 0;
				}
				func_334(uParam0, iParam1, *uParam0.f_496, *uParam0.f_105.f_1);
				if (*uParam0.f_560)
				{
					*uParam0.f_678 = 1;
					func_312(uParam0, iParam1, 0, 0);
					*uParam0.f_560 = 0;
				}
				else
				{
					func_302(uParam0, iVar7, 1);
				}
				func_510(*uParam0.f_105.f_1, 1, 1);
				*uParam0.f_693 = func_509();
				if (func_521(iVar7, *uParam0.f_496, *uParam0.f_105.f_1, &Var45))
				{
					*uParam0.f_536 = {Var45.f_1};
				}
				func_300(iVar7, *uParam0.f_496, *uParam0.f_105.f_1);
			}
			else if ((func_292(uParam0, iVar7) && !(*uParam0.f_496 == 11 || *uParam0.f_496 == 14)) && (is_control_just_pressed(2, 207) || (is_control_pressed(2, 207) && *uParam0.f_220.f_14)))
			{
				play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				*uParam0.f_220.f_14 = 0;
				*uParam0.f_220.f_16 = get_game_timer();
				if (network_is_game_in_progress())
				{
					*uParam0.f_220.f_17 = get_network_time();
				}
				*uParam0.f_604--;
				while (*uParam0.f_604 >= 0 && !func_291(*uParam0.f_496, *uParam0.f_604))
				{
					*uParam0.f_604--;
				}
				if (!func_291(*uParam0.f_496, *uParam0.f_604))
				{
					*uParam0.f_604 = func_290(iVar7, *uParam0.f_496) - 1;
				}
				while (*uParam0.f_604 >= 0 && !func_291(*uParam0.f_496, *uParam0.f_604))
				{
					*uParam0.f_604--;
				}
				if (*uParam0.f_604 < 0)
				{
					*uParam0.f_604 = func_290(iVar7, *uParam0.f_496) - 1;
				}
				while (*uParam0.f_604 >= 0 && !func_291(*uParam0.f_496, *uParam0.f_604))
				{
					*uParam0.f_604--;
				}
				if (!*uParam0.f_608)
				{
					*uParam0.f_605 = _0xAAA6A3698A69E048(*uParam0.f_604);
				}
				else
				{
					*uParam0.f_606 = *uParam0.f_605;
				}
				*uParam0.f_678 = 1;
				func_334(uParam0, iParam1, *uParam0.f_496, *uParam0.f_105.f_1);
				if (*uParam0.f_678)
				{
					*uParam0.f_678 = 1;
					func_312(uParam0, iParam1, 0, 0);
					*uParam0.f_560 = 0;
				}
			}
			else if ((func_292(uParam0, iVar7) && !(*uParam0.f_496 == 11 || *uParam0.f_496 == 14)) && (is_control_just_pressed(2, 208) || (is_control_pressed(2, 208) && *uParam0.f_220.f_15)))
			{
				play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				*uParam0.f_220.f_15 = 0;
				*uParam0.f_220.f_16 = get_game_timer();
				if (network_is_game_in_progress())
				{
					*uParam0.f_220.f_17 = get_network_time();
				}
				*uParam0.f_604++;
				while (*uParam0.f_604 <= func_290(iVar7, *uParam0.f_496) - 1 && !func_291(*uParam0.f_496, *uParam0.f_604))
				{
					*uParam0.f_604++;
				}
				if (!func_291(*uParam0.f_496, *uParam0.f_604))
				{
					*uParam0.f_604 = 0;
				}
				while (*uParam0.f_604 <= func_290(iVar7, *uParam0.f_496) - 1 && !func_291(*uParam0.f_496, *uParam0.f_604))
				{
					*uParam0.f_604++;
				}
				if (*uParam0.f_604 >= func_290(iVar7, *uParam0.f_496))
				{
					*uParam0.f_604 = 0;
				}
				while (*uParam0.f_604 <= func_290(iVar7, *uParam0.f_496) - 1 && !func_291(*uParam0.f_496, *uParam0.f_604))
				{
					*uParam0.f_604++;
				}
				if (!*uParam0.f_608)
				{
					*uParam0.f_605 = _0xAAA6A3698A69E048(*uParam0.f_604);
				}
				else
				{
					*uParam0.f_606 = *uParam0.f_605;
				}
				*uParam0.f_678 = 1;
				func_334(uParam0, iParam1, *uParam0.f_496, *uParam0.f_105.f_1);
				if (*uParam0.f_678)
				{
					*uParam0.f_678 = 1;
					func_312(uParam0, iParam1, 0, 0);
					*uParam0.f_560 = 0;
				}
			}
			else if (func_292(uParam0, iVar7) && (is_control_just_pressed(2, 205) || (is_control_pressed(2, 205) && *uParam0.f_220.f_12)))
			{
				if (*uParam0.f_496 == 6)
				{
					if (*uParam0.f_608)
					{
						play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						*uParam0.f_220.f_12 = 0;
						*uParam0.f_220.f_16 = get_game_timer();
						if (network_is_game_in_progress())
						{
							*uParam0.f_220.f_17 = get_network_time();
						}
						*uParam0.f_605--;
						while (*uParam0.f_605 >= 0 && !func_291(*uParam0.f_496, *uParam0.f_605))
						{
							*uParam0.f_605--;
						}
						if (!func_291(*uParam0.f_496, *uParam0.f_605))
						{
							*uParam0.f_605 = func_290(iVar7, *uParam0.f_496) - 1;
						}
						while (*uParam0.f_605 >= 0 && !func_291(*uParam0.f_496, *uParam0.f_605))
						{
							*uParam0.f_605--;
						}
						if (*uParam0.f_605 < 0)
						{
							*uParam0.f_605 = func_290(iVar7, *uParam0.f_496) - 1;
						}
						while (*uParam0.f_605 >= 0 && !func_291(*uParam0.f_496, *uParam0.f_605))
						{
							*uParam0.f_605--;
						}
						*uParam0.f_678 = 1;
					}
				}
				else
				{
					play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					*uParam0.f_220.f_12 = 0;
					*uParam0.f_220.f_16 = get_game_timer();
					if (network_is_game_in_progress())
					{
						*uParam0.f_220.f_17 = get_network_time();
					}
					*uParam0.f_609 -= fVar32;
					if (*uParam0.f_609 < 0.15f)
					{
						*uParam0.f_609 = 0.15f;
					}
					*uParam0.f_678 = 1;
				}
				func_334(uParam0, iParam1, *uParam0.f_496, *uParam0.f_105.f_1);
				if (*uParam0.f_678)
				{
					*uParam0.f_678 = 1;
					func_312(uParam0, iParam1, 0, 0);
					*uParam0.f_560 = 0;
				}
			}
			else if (func_292(uParam0, iVar7) && (is_control_just_pressed(2, 206) || (is_control_pressed(2, 206) && *uParam0.f_220.f_13)))
			{
				if (*uParam0.f_496 == 6)
				{
					if (*uParam0.f_608)
					{
						play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
						*uParam0.f_220.f_13 = 0;
						*uParam0.f_220.f_16 = get_game_timer();
						if (network_is_game_in_progress())
						{
							*uParam0.f_220.f_17 = get_network_time();
						}
						*uParam0.f_605++;
						while (*uParam0.f_605 <= func_290(iVar7, *uParam0.f_496) - 1 && !func_291(*uParam0.f_496, *uParam0.f_605))
						{
							*uParam0.f_605++;
						}
						if (!func_291(*uParam0.f_496, *uParam0.f_605))
						{
							*uParam0.f_605 = 0;
						}
						while (*uParam0.f_605 <= func_290(iVar7, *uParam0.f_496) - 1 && !func_291(*uParam0.f_496, *uParam0.f_605))
						{
							*uParam0.f_605++;
						}
						if (*uParam0.f_605 >= func_290(iVar7, *uParam0.f_496))
						{
							*uParam0.f_605 = 0;
						}
						while (*uParam0.f_605 <= func_290(iVar7, *uParam0.f_496) - 1 && !func_291(*uParam0.f_496, *uParam0.f_605))
						{
							*uParam0.f_605++;
						}
						*uParam0.f_678 = 1;
					}
				}
				else
				{
					play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					*uParam0.f_220.f_13 = 0;
					*uParam0.f_220.f_16 = get_game_timer();
					if (network_is_game_in_progress())
					{
						*uParam0.f_220.f_17 = get_network_time();
					}
					*uParam0.f_609 += fVar32;
					if (*uParam0.f_609 > 1f)
					{
						*uParam0.f_609 = 1f;
					}
					*uParam0.f_678 = 1;
				}
				func_334(uParam0, iParam1, *uParam0.f_496, *uParam0.f_105.f_1);
				if (*uParam0.f_678)
				{
					*uParam0.f_678 = 1;
					func_312(uParam0, iParam1, 0, 0);
					*uParam0.f_560 = 0;
				}
			}
			else if (is_control_just_pressed(2, 203))
			{
				play_sound_frontend(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				*uParam0.f_608 = !*uParam0.f_608;
				if (*uParam0.f_496 == 6)
				{
					if (!*uParam0.f_608)
					{
						*uParam0.f_606 = *uParam0.f_605;
						*uParam0.f_605 = _0xAAA6A3698A69E048(*uParam0.f_604);
					}
					else
					{
						*uParam0.f_605 = *uParam0.f_606;
					}
				}
				*uParam0.f_678 = 1;
				func_334(uParam0, iParam1, *uParam0.f_496, *uParam0.f_105.f_1);
				if (*uParam0.f_678)
				{
					func_302(uParam0, iVar7, 1);
					*uParam0.f_678 = 0;
				}
			}
			else if (is_control_just_pressed(2, 201) || iVar0 == 1)
			{
				iVar0 = 0;
				play_sound_frontend(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				func_521(iVar7, *uParam0.f_496, *uParam0.f_105.f_1, &iVar57);
				if (network_is_game_in_progress() && func_626())
				{
					if (func_289(0))
					{
						iVar57 = false;
					}
				}
				if (func_520(iVar7, &iVar57, uParam0))
				{
					switch (*uParam0.f_496)
					{
						case 7:
							func_264("HAIR_CUR_1", 4000, 0);
							break;
						
						case 6:
							func_264("HAIR_CUR_2", 4000, 0);
							break;
						
						case 11:
						case 13:
						case 14:
						case 15:
							func_264("HAIR_CUR_3", 4000, 0);
							break;
						
						default:
							func_264("HAIR_CUR_9", 4000, 0);
							break;
					}
					*uParam0.f_258 = func_532(*uParam0.f_105.f_1);
				}
				else if (!func_212(uParam0, iVar7, *uParam0.f_496, *uParam0.f_105.f_1))
				{
					func_264("HAIR_LOCK", 4000, 0);
				}
				else if (!func_287(iVar57))
				{
					switch (*uParam0.f_496)
					{
						case 7:
							func_264("HAIR_AFF_1", 4000, 0);
							break;
						
						case 6:
							func_264("HAIR_AFF_2", 4000, 0);
							break;
						
						case 11:
						case 13:
						case 14:
						case 15:
							func_264("HAIR_AFF_3", 4000, 0);
							break;
						
						default:
							func_264("HAIR_AFF_9", 4000, 0);
							break;
					}
					func_285(get_hash_key(&(Global_91330.f_1292)), Global_91330.f_1296, get_hash_key(func_286(*uParam0)));
					func_281(0, 10, 3);
				}
				else if ((network_is_game_in_progress() && func_626()) && !func_274(78225582, func_280(*uParam0.f_496), func_279(*uParam0.f_496, *uParam0.f_536, 0), 478352891, 1, iVar57, 1, 4, func_278(*uParam0.f_496), 3))
				{
					func_267(func_272());
					func_264("CSHOP_FAIL", 4000, 0);
				}
				else if ((network_is_game_in_progress() && func_289(0)) && !func_274(78225582, func_280(*uParam0.f_496), func_278(*uParam0.f_496), 537254313, 1, 0, 1, 4, -681495675, 3))
				{
					func_267(func_272());
					func_264("CSHOP_FAIL", 4000, 0);
				}
				else
				{
					if (network_is_game_in_progress() && func_626())
					{
						*uParam0.f_105.f_25 = 1;
						*uParam0.f_105.f_26 = 0;
					}
					*uParam0.f_105.f_15 = 1;
					func_448(iParam1, uParam0);
				}
			}
			break;
	}
}

void func_267(int iParam0)
{
	int iVar0;
	
	iVar0 = false;
	if (!func_271())
	{
		iVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_270(iParam0))
		{
			if (!iVar0)
			{
				unk_0xFA336E7F40C0A0D0();
			}
		}
		else if (!iVar0)
		{
			_0xE2A99A9B524BEFFF(Global_2558146[iParam0 /*73*/]);
		}
		func_268(&(Global_2558146[iParam0 /*73*/]));
	}
}

void func_268(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = -1593119440;
	*uParam0.f_4 = -2085313189;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 1227573907;
	*uParam0.f_7 = -1161833819;
	*uParam0.f_8 = 0;
	*uParam0.f_8.f_1 = 0;
	*uParam0.f_8.f_2 = 0;
	func_269(uParam0.f_8.f_3);
	func_269(uParam0.f_8.f_16);
	StringCopy(uParam0.f_8.f_29, "", 32);
	StringCopy(uParam0.f_8.f_37, "", 24);
	StringCopy(uParam0.f_8.f_43, "", 16);
	StringCopy(uParam0.f_8.f_47, "", 16);
	*uParam0.f_8.f_51 = 0;
	*uParam0.f_8.f_52 = 0;
	*uParam0.f_8.f_53 = 0;
	*uParam0.f_8.f_54 = 0;
	*uParam0.f_8.f_55 = 0;
	*uParam0.f_8.f_56 = 0;
	*uParam0.f_66 = 0;
	*uParam0.f_67 = 0;
	*uParam0.f_68 = 0;
	*uParam0.f_69 = 0;
	*uParam0.f_70 = 0;
	*uParam0.f_71 = 0;
	*uParam0.f_72 = 0;
}

void func_269(var uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 0;
	*uParam0.f_8 = 0;
	*uParam0.f_9 = 0;
	*uParam0.f_10 = 0;
	*uParam0.f_11 = 0;
	*uParam0.f_12 = 0;
}

int func_270(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/].f_5 == 1;
	}
	return false;
}

bool func_271()
{
	if (is_pc_version())
	{
		return true;
	}
	return false;
}

int func_272()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_273(iVar0) != 2147483647)
		{
			if (func_270(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_273(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2558146[iParam0 /*73*/];
	}
	return -1;
}

bool func_274(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	
	iVar0 = false;
	if (!func_271())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_19()) || _0x810E8431C0614BF9())
		{
			Global_2558637 = 1;
			return false;
		}
		if (Global_2444207)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_2558638 = 1;
				return false;
			}
		}
	}
	iVar1 = func_272();
	if (iVar1 == -1)
	{
		if (!func_276(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return false;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_275(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_2558146[iVar1 /*73*/].f_70 = Var2;
		Global_2558146[iVar1 /*73*/].f_71 = Var2.f_1;
		if (iVar0 || _0xF30980718C8ED876(&Var2, iParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_275(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
			return true;
			break;
	}
	return false;
}

bool func_276(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = false;
	if (!func_271())
	{
		iVar0 = true;
	}
	if (!iVar0)
	{
		if (!_0xB24F0944DA203D9E(func_19()) || _0x810E8431C0614BF9())
		{
			Global_2558637 = 1;
			return false;
		}
		if (Global_2444207)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_2558638 = 1;
				return false;
			}
		}
	}
	iVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2558146[iVar1 /*73*/].f_2 == 0)
		{
			iVar2 = true;
		}
		else if (Global_2558146[iVar1 /*73*/].f_5 == 1)
		{
			return false;
		}
		iVar1++;
	}
	if (!iVar2)
	{
		return false;
	}
	*iParam0 = 0;
	if (!iVar0)
	{
		if (_0xA65568121DF2EA26())
		{
			unk_0xFA336E7F40C0A0D0();
		}
	}
	if (iVar0 || _network_shop_basket_start(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_277(uVar3, uParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5);
		return true;
	}
	return false;
}

int func_277(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2558146[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_271())
			{
				uParam0 = iVar0 + 900;
			}
			Global_2558146[iVar0 /*73*/].f_2 = 1;
			Global_2558146[iVar0 /*73*/].f_1 = iParam5;
			Global_2558146[iVar0 /*73*/].f_3 = uParam1;
			Global_2558146[iVar0 /*73*/].f_4 = iParam2;
			Global_2558146[iVar0 /*73*/].f_7 = iParam3;
			Global_2558146[iVar0 /*73*/].f_5 = 0;
			Global_2558146[iVar0 /*73*/] = uParam0;
			Global_2558146[iVar0 /*73*/].f_6 = iParam4;
			Global_2558146[iVar0 /*73*/].f_69 = uParam8;
			Global_2558146[iVar0 /*73*/].f_68 = iParam7;
			Global_2558146[iVar0 /*73*/].f_72 = 0;
			Global_2558628 = 0;
			if (iParam6)
			{
				Global_2558146[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return -427320424;
			break;
		
		case 7:
			return -812946581;
			break;
		
		case 8:
			return -1013875689;
			break;
		
		case 9:
			return 2031936565;
			break;
		
		case 10:
			return 521542439;
			break;
		
		case 11:
			return 29169062;
			break;
		
		case 13:
			return -1571138826;
			break;
		
		case 14:
			return 29169062;
			break;
		
		case 15:
			return -702756854;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_279(int iParam0, struct<4> Param1, int iParam2)
{
	char* sVar0;
	
	func_255(&sVar0, iParam0, Param1, iParam5);
	return get_hash_key(&sVar0);
}

int func_280(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return -1796535835;
			break;
		
		case 7:
			return -2052814106;
			break;
		
		case 8:
			return -1928802392;
			break;
		
		case 9:
			return 581564040;
			break;
		
		case 10:
			return 23048035;
			break;
		
		case 11:
			return 2117376854;
			break;
		
		case 13:
			return -1377881127;
			break;
		
		case 14:
			return 1701289268;
			break;
		
		case 15:
			return -504675202;
			break;
		
		default:
			break;
	}
	return -1796535835;
}

void func_281(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!_0x883D79C4071E18B3())
	{
		return;
	}
	if (network_is_game_in_progress() && func_79(player_id(), 1))
	{
		return;
	}
	if (is_control_pressed(2, 199) || is_disabled_control_pressed(2, 199))
	{
		return;
	}
	if (get_pause_menu_state() != 0)
	{
		return;
	}
	if (is_pause_menu_active())
	{
		return;
	}
	if (is_system_ui_being_displayed())
	{
		return;
	}
	if (is_warning_message_active())
	{
		return;
	}
	if (func_284())
	{
		return;
	}
	if (!func_282())
	{
		return;
	}
	if (network_is_game_in_progress() || iParam0)
	{
		if (!Global_91330.f_1352 && !_0x2EAC52B4019E2782())
		{
			iVar0 = 18;
			_set_warning_message_2("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1);
			Global_2444100 = iParam1;
			Global_91330.f_1352 = 1;
			Global_91330.f_1353 = iParam2;
		}
	}
}

bool func_282()
{
	if (func_283())
	{
		return false;
	}
	if (network_is_cloud_available() == 0)
	{
		return false;
	}
	return true;
}

var func_283()
{
	return Global_2443548;
}

var func_284()
{
	return Global_2444207;
}

void func_285(int iParam0, var uParam1, int iParam2)
{
	Global_91330.f_1354 = iParam0;
	Global_91330.f_1355 = uParam1;
	Global_91330.f_1356 = iParam2;
}

char* func_286(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
		
		case 44:
			return "S_MO_09";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

bool func_287(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	if (func_655(1))
	{
		if (Global_69489)
		{
			if (_has_item_been_unlocked(iParam0, false, true, 0, -1))
			{
				return true;
			}
		}
		else if (func_288(func_247()) >= iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_288(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			stat_get_int(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			stat_get_int(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			stat_get_int(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_289(int iParam0)
{
	if (!network_is_game_in_progress())
	{
		return is_bit_set(Global_101154.f_25089.f_471, iParam0);
	}
	return is_bit_set(Global_2097152[func_232() /*10375*/].f_7704.f_10, iParam0);
}

int func_290(int iParam0, int iParam1)
{
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				return _get_num_hair_colors();
				break;
			
			case 7:
				return _get_num_hair_colors();
				break;
			
			case 8:
				return _get_num_hair_colors();
				break;
			
			case 9:
				return _get_num_hair_colors();
				break;
			
			case 10:
				return 0;
				break;
			
			case 11:
				return 0;
				break;
			
			case 14:
				return 0;
				break;
			
			case 15:
				return _get_num_makeup_colors();
				break;
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				return _get_num_hair_colors();
				break;
			
			case 8:
				return _get_num_hair_colors();
				break;
			
			case 10:
				return 0;
				break;
			
			case 11:
				return 0;
				break;
			
			case 13:
				return _get_num_makeup_colors();
				break;
			
			case 14:
				return 0;
				break;
			
			case 15:
				return _get_num_makeup_colors();
				break;
			}
	}
	return 0;
}

bool func_291(int iParam0, int iParam1)
{
	if (((iParam0 == 6 || iParam0 == 7) || iParam0 == 9) || iParam0 == 8)
	{
		if (!_is_a_valid_hair_color(iParam1))
		{
			return false;
		}
	}
	else if (iParam0 == 15)
	{
		if (!_is_a_valid_lipstick_color(iParam1))
		{
			return false;
		}
	}
	else if (iParam0 == 13)
	{
		if (!_is_a_valid_blush_color(iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_292(var uParam0, int iParam1)
{
	switch (*uParam0.f_496)
	{
		case 6:
			switch (func_293(iParam1, *uParam0.f_105.f_1))
			{
				case 0:
					break;
				
				case -1:
					return false;
					break;
				
				default:
					break;
			}
			break;
		
		case 10:
			return false;
			break;
		
		case 14:
		case 11:
			if (*uParam0.f_105.f_1 == 0)
			{
				return false;
			}
			break;
		
		case 13:
		case 15:
		case 7:
		case 8:
		case 9:
			if (*uParam0.f_105.f_1 == 0)
			{
				return false;
			}
			break;
		
		default:
			break;
	}
	return true;
}

int func_293(int iParam0, int iParam1)
{
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		switch (iParam1)
		{
			case 0:
				return -1;
			
			case 1:
				return 0;
			
			case 2:
				return 0;
			
			case 3:
				return 0;
			
			case 4:
				return 0;
			
			case 5:
				return 0;
			
			case 6:
				return 0;
			
			case 7:
				return 0;
			
			case 8:
				return 0;
			
			case 9:
				return 0;
			
			case 10:
				return 0;
			
			case 11:
				return 0;
			
			case 12:
				return 0;
			
			case 13:
				return 0;
			
			case 14:
				return 0;
			
			case 15:
				return 0;
			
			case 16:
				return 0;
			
			case 17:
				return 0;
			
			case 18:
				return 0;
			
			case 19:
				return 0;
			
			case 20:
				return 0;
			
			case 21:
				return 0;
			
			case 22:
				return 0;
			
			case 23:
				return 0;
			
			case 24:
				return 0;
			
			case 25:
				return 0;
			
			case 26:
				return 0;
			
			case 27:
				return 0;
			
			case 28:
				return 0;
			
			case 29:
				return 0;
			
			default:
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		switch (iParam1)
		{
			case 0:
				return -1;
			
			case 1:
				return 0;
			
			case 2:
				return 0;
			
			case 3:
				return 0;
			
			case 4:
				return 0;
			
			case 5:
				return 0;
			
			case 6:
				return 0;
			
			case 7:
				return 0;
			
			case 8:
				return 0;
			
			case 9:
				return 0;
			
			case 10:
				return 0;
			
			case 11:
				return 0;
			
			case 12:
				return 0;
			
			case 13:
				return 0;
			
			case 14:
				return 0;
			
			case 15:
				return 0;
			
			case 16:
				return 0;
			
			case 17:
				return 0;
			
			case 18:
				return 0;
			
			case 19:
				return 0;
			
			case 20:
				return 0;
			
			case 21:
				return 0;
			
			case 22:
				return 0;
			
			case 23:
				return 0;
			
			case 24:
				return 0;
			
			case 25:
				return 0;
			
			case 26:
				return 0;
			
			case 27:
				return 0;
			
			case 28:
				return 0;
			
			case 29:
				return 0;
			
			case 30:
				return 0;
			
			case 31:
				return 0;
			
			case 32:
				return 0;
			
			case 33:
				return 0;
			}
		
		default:
	}
	return -1;
}

float func_294(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	vector3 vVar10;
	
	fVar5 = fParam4;
	fVar6 = fParam5;
	fVar7 = 0f;
	fVar8 = get_control_normal(2, 239);
	fVar9 = get_control_normal(2, 240);
	if (Global_2562129 == -6)
	{
		return -1f;
	}
	switch (iParam0)
	{
		case 0:
			vVar10 = {_0x5BFF36D6ED83E0AE()};
			fParam1 = vVar10.x + func_296(0.005f);
			fParam2 = vVar10.y + 0.518f;
			fParam3 = func_296(0.21f);
			fVar2 = 0.025f;
			fVar5 = fParam4 + func_296(0.05f);
			fVar6 = fParam5 - func_296(0.05f);
			fVar7 = func_296(0.005f);
			break;
		
		case 1:
			vVar10 = {_0x5BFF36D6ED83E0AE()};
			fParam1 = vVar10.x + func_296(0.145f);
			fParam2 = vVar10.y + 0.417f;
			fParam3 = func_296(0.042f);
			fVar2 = 0.025f;
			fVar5 = fParam4;
			fVar6 = fParam5;
			fVar7 = fParam3 / 2f;
			break;
		
		case 2:
			vVar10 = {_0x5BFF36D6ED83E0AE()};
			fParam1 = vVar10.x + func_296(0.145f);
			fParam2 = vVar10.y + 0.457f;
			fParam3 = func_296(0.042f);
			fVar2 = 0.025f;
			fVar5 = fParam4;
			fVar6 = fParam5;
			fVar7 = fParam3 / 2f;
			break;
		
		case 4:
			fParam3 *= 0.95f;
			fParam2 += 0.035f;
			fParam1 += fParam3 * 0.025f;
			_set_screen_draw_position(76, 84);
			_0xF5A2C681787E579D(0f, 0f, 0f, 0f);
			_0x6DD8F5AA635EB4B2(fParam1, fParam2, &fParam1, &fParam2);
			_0xE3A3DB414A373DAB();
			fVar2 = 0.025f;
			fVar5 = fParam4;
			fVar6 = fParam5;
			fVar7 = 0.005f;
			break;
	}
	fVar0 = fParam1 + fParam3;
	fVar1 = fParam2 + fVar2;
	if (fVar9 >= fParam2 && fVar9 <= fVar1)
	{
		if (fVar8 >= fParam1 && fVar8 <= fVar0)
		{
			fVar3 = fVar8 - fParam1 / fParam3;
			fVar4 = fParam4 + fParam5 - fParam4 * fVar3;
			if (is_control_pressed(2, 237))
			{
				fVar4 = func_295(fVar4, fVar5, fVar6);
				return fVar4;
			}
		}
		if (fVar7 > 0f)
		{
			if (fVar8 > fParam1 - fVar7 && fVar8 < fParam1)
			{
				if (is_control_pressed(2, 237))
				{
					return fParam4;
				}
			}
			if (fVar8 < fVar0 + fVar7 && fVar8 > fVar0)
			{
				if (is_control_pressed(2, 237))
				{
					return fParam5;
				}
			}
		}
	}
	return -1f;
}

float func_295(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_296(float fParam0)
{
	fParam0 *= 1.777778f / _get_screen_aspect_ratio(0);
	return fParam0;
}

bool func_297(var uParam0, int iParam1)
{
	if ((((((*uParam0.f_496 == 13 || *uParam0.f_496 == 14) || *uParam0.f_496 == 15) || *uParam0.f_496 == 7) || *uParam0.f_496 == 8) || *uParam0.f_496 == 9) || *uParam0.f_496 == 11)
	{
		if (func_292(uParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_298(var uParam0, int iParam1)
{
	if (!(*uParam0.f_496 == 11 || *uParam0.f_496 == 14))
	{
		if (func_292(uParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_299(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == -1)
	{
		return -1;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < func_290(iParam0, iParam1))
	{
		if (func_291(iParam1, iVar0))
		{
			iVar1++;
			if (iVar1 == iParam2)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_300(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	
	if (func_521(iParam0, iParam1, iParam2, &Var0))
	{
		func_301(Var0.f_1, Var0, 0, 1, 0);
	}
}

void func_301(char[16] cParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	Global_91330.f_1292 = {cParam0};
	Global_91330.f_1296 = uParam4;
	Global_91330.f_1297 = iParam5;
	Global_91330.f_1298 = iParam6;
	Global_91330.f_1299 = iParam7;
}

void func_302(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	Vector3 fVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
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
	
	func_651(uParam0);
	sVar0 = "FACE_OPAC";
	sVar1 = "FACE_COLOUR";
	fVar2 = *uParam0.f_609 - 0.15f * 1f / 1f - 0.15f;
	if (fVar2 >= 1f)
	{
		fVar2 = 1f;
	}
	else if (fVar2 <= 0f)
	{
		fVar2 = 0f;
	}
	fVar2 *= 100f;
	iVar3 = func_311(iParam1, *uParam0.f_496, *uParam0.f_604);
	*uParam0.f_680 = 0;
	iVar4 = 0;
	while (iVar4 < func_290(iParam1, *uParam0.f_496))
	{
		if (func_291(*uParam0.f_496, iVar4))
		{
			*uParam0.f_680++;
		}
		iVar4++;
	}
	sVar5 = "";
	iVar6 = -1;
	switch (*uParam0.f_496)
	{
		case 6:
			sVar0 = "";
			fVar2 = -1f;
			sVar5 = "FACE_COLHILI";
			if (func_292(uParam0, iParam1))
			{
				if (*uParam0.f_604 == -1)
				{
					*uParam0.f_604 = func_86(2143, -1, 0);
				}
				if (*uParam0.f_605 == -1)
				{
					*uParam0.f_605 = func_86(2150, -1, 0);
					*uParam0.f_606 = *uParam0.f_605;
				}
				*uParam0.f_609 = 1f;
				sVar5 = "FACE_COLHILI";
				iVar3 = func_311(iParam1, *uParam0.f_496, *uParam0.f_604);
				iVar6 = func_311(iParam1, *uParam0.f_496, *uParam0.f_605);
			}
			else
			{
				sVar0 = "";
				fVar2 = -1f;
				sVar1 = "";
				iVar3 = -1;
				sVar5 = "";
				iVar6 = -1;
				*uParam0.f_680 = -1;
			}
			break;
		
		case 10:
			sVar0 = "";
			fVar2 = -1f;
			sVar1 = "";
			iVar3 = -1;
			*uParam0.f_680 = -1;
			*uParam0.f_604 = func_299(iParam1, *uParam0.f_496, iVar3);
			*uParam0.f_605 = func_299(iParam1, *uParam0.f_496, iVar6);
			*uParam0.f_606 = *uParam0.f_605;
			*uParam0.f_609 = 1f;
			break;
		
		case 14:
		case 11:
			sVar1 = "";
			iVar3 = -1;
			*uParam0.f_680 = -1;
			if (*uParam0.f_105.f_1 == 0)
			{
				sVar0 = "";
				fVar2 = -1f;
			}
			*uParam0.f_604 = func_299(iParam1, *uParam0.f_496, iVar3);
			*uParam0.f_605 = func_299(iParam1, *uParam0.f_496, iVar6);
			*uParam0.f_606 = *uParam0.f_605;
			break;
		
		case 13:
		case 15:
		case 7:
		case 8:
		case 9:
			if (!func_292(uParam0, iParam1))
			{
				sVar0 = "";
				fVar2 = -1f;
				sVar1 = "";
				iVar3 = -1;
				*uParam0.f_680 = -1;
			}
			else
			{
				*uParam0.f_604 = func_299(iParam1, *uParam0.f_496, iVar3);
				if (*uParam0.f_604 == -1)
				{
					*uParam0.f_604 = func_307(func_310(*uParam0.f_496), uParam0.f_607, -1);
					iVar3 = func_311(iParam1, *uParam0.f_496, *uParam0.f_604);
				}
			}
			break;
		
		default:
			break;
	}
	func_306(uParam0);
	if (is_pc_version())
	{
		_push_scaleform_movie_function(*uParam0.f_584, "SET_IS_PC");
		_push_scaleform_movie_function_parameter_bool(true);
		_pop_scaleform_movie_function_void();
	}
	if (_push_scaleform_movie_function(*uParam0.f_584, "SET_TITLE"))
	{
		func_187(sVar0);
		_begin_text_component(sVar1);
		if (iVar3 != -1 && *uParam0.f_680 != -1)
		{
			add_text_component_integer(iVar3 + 1);
			add_text_component_integer(*uParam0.f_680);
		}
		_end_text_component();
		if (fVar2 != -1f)
		{
			_push_scaleform_movie_function_parameter_float(fVar2);
		}
		_pop_scaleform_movie_function_void();
	}
	if (!is_string_null_or_empty(sVar1))
	{
		iVar7 = false;
		while (iVar7 < *uParam0.f_680)
		{
			iVar11 = func_299(iParam1, *uParam0.f_496, iVar7);
			if (((*uParam0.f_496 == 6 || *uParam0.f_496 == 7) || *uParam0.f_496 == 9) || *uParam0.f_496 == 8)
			{
				_0x4852FC386E2E1BB5(iVar11, &iVar8, &iVar9, &iVar10);
			}
			else if (*uParam0.f_496 == 13 || *uParam0.f_496 == 15)
			{
				_0x013E5CFC38CD5387(iVar11, &iVar8, &iVar9, &iVar10);
			}
			if (_push_scaleform_movie_function(*uParam0.f_584, "SET_DATA_SLOT"))
			{
				_push_scaleform_movie_function_parameter_int(iVar7);
				_push_scaleform_movie_function_parameter_int(iVar8);
				_push_scaleform_movie_function_parameter_int(iVar9);
				_push_scaleform_movie_function_parameter_int(iVar10);
				_pop_scaleform_movie_function_void();
			}
			iVar7++;
		}
		if (_push_scaleform_movie_function(*uParam0.f_584, "DISPLAY_VIEW"))
		{
			_pop_scaleform_movie_function_void();
		}
		if (_push_scaleform_movie_function(*uParam0.f_584, "SET_HIGHLIGHT"))
		{
			_push_scaleform_movie_function_parameter_int(iVar3);
			_pop_scaleform_movie_function_void();
		}
	}
	if (fVar2 == -1f)
	{
		iVar12 = false;
		if (!*uParam0.f_608)
		{
			iVar13 = true;
		}
		else
		{
			iVar13 = false;
		}
	}
	else
	{
		iVar12 = true;
		iVar13 = false;
	}
	if (fVar2 == -1f)
	{
		if (_push_scaleform_movie_function(*uParam0.f_584, "SHOW_OPACITY"))
		{
			_push_scaleform_movie_function_parameter_bool(iVar12);
			_push_scaleform_movie_function_parameter_bool(iVar13);
			_pop_scaleform_movie_function_void();
		}
	}
	if (is_string_null_or_empty(sVar5) || !*uParam0.f_608)
	{
	}
	else
	{
		if (is_pc_version())
		{
			_push_scaleform_movie_function(*uParam0.f_594, "SET_IS_PC");
			_push_scaleform_movie_function_parameter_bool(true);
			_pop_scaleform_movie_function_void();
		}
		if (_push_scaleform_movie_function(*uParam0.f_594, "SET_TITLE"))
		{
			func_187(sVar0);
			_begin_text_component(sVar5);
			if (iVar6 != -1 && *uParam0.f_680 != -1)
			{
				add_text_component_integer(iVar6 + 1);
				add_text_component_integer(*uParam0.f_680);
			}
			_end_text_component();
			if (fVar2 != -1f)
			{
				_push_scaleform_movie_function_parameter_float(fVar2);
			}
			_pop_scaleform_movie_function_void();
		}
		if (_push_scaleform_movie_function(*uParam0.f_594, "SET_DATA_SLOT_EMPTY"))
		{
			_pop_scaleform_movie_function_void();
		}
		if (!is_string_null_or_empty(sVar5))
		{
			iVar14 = false;
			while (iVar14 < *uParam0.f_680)
			{
				iVar18 = func_299(iParam1, *uParam0.f_496, iVar14);
				if (((*uParam0.f_496 == 6 || *uParam0.f_496 == 7) || *uParam0.f_496 == 9) || *uParam0.f_496 == 8)
				{
					_0x4852FC386E2E1BB5(iVar18, &iVar15, &iVar16, &iVar17);
				}
				else if (*uParam0.f_496 == 13 || *uParam0.f_496 == 15)
				{
					_0x013E5CFC38CD5387(iVar18, &iVar15, &iVar16, &iVar17);
				}
				if (_push_scaleform_movie_function(*uParam0.f_594, "SET_DATA_SLOT"))
				{
					_push_scaleform_movie_function_parameter_int(iVar14);
					_push_scaleform_movie_function_parameter_int(iVar15);
					_push_scaleform_movie_function_parameter_int(iVar16);
					_push_scaleform_movie_function_parameter_int(iVar17);
					_pop_scaleform_movie_function_void();
				}
				iVar14++;
			}
			if (_push_scaleform_movie_function(*uParam0.f_594, "DISPLAY_VIEW"))
			{
				_pop_scaleform_movie_function_void();
			}
			if (_push_scaleform_movie_function(*uParam0.f_594, "SET_HIGHLIGHT"))
			{
				_push_scaleform_movie_function_parameter_int(iVar6);
				_pop_scaleform_movie_function_void();
			}
		}
	}
	if (iParam2)
	{
		func_305(-1);
	}
	if (!func_604(*uParam0.f_496))
	{
		func_304(201, "ITEM_SELECT", -1, 0);
	}
	else if (*uParam0.f_496 == 5 || *uParam0.f_496 == 12)
	{
		func_304(201, "ITEM_SELECT", -1, 0);
	}
	else
	{
		func_304(201, "ITEM_BUY", -1, 0);
	}
	if (*uParam0.f_679)
	{
		func_304(202, "ITEM_BACK", -1, 0);
		func_303(21, "ITEM_MOV_CAM", -1);
		if (!func_604(*uParam0.f_496))
		{
			func_304(iLocal_94, "ITEM_ZOOM", -1, 0);
		}
	}
	else
	{
		func_304(202, "ITEM_BACK", -1, 0);
		func_303(21, "ITEM_MOV_CAM", -1);
	}
	if (!is_string_null_or_empty(sVar1))
	{
		if (!is_string_null_or_empty(sVar0) || !is_string_null_or_empty(sVar5))
		{
			if (*uParam0.f_608)
			{
				if (!is_string_null_or_empty(sVar0))
				{
					func_303(14, "ITEM_B_OPACITY", -1);
				}
				else if (!is_string_null_or_empty(sVar5))
				{
					func_304(203, "ITEM_X_TINT", -1, 0);
					func_303(14, "ITEM_B_HILI", -1);
				}
				if (!is_string_null_or_empty(sVar5))
				{
					func_303(15, "ITEM_T_HCOL", -1);
				}
				else
				{
					func_303(15, "ITEM_T_COL", -1);
				}
			}
			else
			{
				if (!is_string_null_or_empty(sVar0))
				{
					func_303(14, "ITEM_B_OPACITY", -1);
				}
				else if (!is_string_null_or_empty(sVar5))
				{
					func_304(203, "ITEM_X_HILI", -1, 0);
				}
				if (!is_string_null_or_empty(sVar5))
				{
					func_303(15, "ITEM_T_HCOL", -1);
				}
				else
				{
					func_303(15, "ITEM_T_COL", -1);
				}
			}
		}
	}
	else
	{
		if (!is_string_null_or_empty(sVar0))
		{
			func_303(14, "ITEM_B_OPACITY", -1);
		}
		else if (!is_string_null_or_empty(sVar5))
		{
		}
		if (!is_string_null_or_empty(sVar5))
		{
		}
	}
}

void func_303(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = _0x80C2FD58D720C801(2, iParam0, true);
	if (Global_17257.f_4639 >= 12)
	{
		StringCopy(&Global_2562053, sVar0, 64);
		StringCopy(&(Global_2562053.f_16), sParam1, 16);
		Global_2562053.f_20 = iParam2;
		return;
		return;
	}
	clear_bit(&(Global_17257.f_4922), Global_17257.f_4639);
	StringCopy(&(Global_17257.f_4641[Global_17257.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17257.f_4834[Global_17257.f_4639 /*4*/]), sParam1, 16);
	Global_17257.f_4883[Global_17257.f_4639] = iParam2;
	Global_17257.f_4896[Global_17257.f_4639] = 344;
	Global_17257.f_4909[Global_17257.f_4639] = iParam0;
	Global_17257.f_4639++;
}

void func_304(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	sVar0 = _get_control_action_name(2, iParam0, true);
	if (Global_17257.f_4639 >= 12)
	{
		StringCopy(&Global_2562053, sVar0, 64);
		StringCopy(&(Global_2562053.f_16), sParam1, 16);
		Global_2562053.f_20 = iParam2;
		return;
		return;
	}
	if (!iParam3)
	{
		set_bit(&(Global_17257.f_4922), Global_17257.f_4639);
	}
	StringCopy(&(Global_17257.f_4641[Global_17257.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17257.f_4834[Global_17257.f_4639 /*4*/]), sParam1, 16);
	Global_17257.f_4883[Global_17257.f_4639] = iParam2;
	Global_17257.f_4896[Global_17257.f_4639] = iParam0;
	Global_17257.f_4909[Global_17257.f_4639] = 31;
	Global_17257.f_4639++;
}

void func_305(int iParam0)
{
	int iVar0;
	var uVar1;
	
	Global_17257.f_4639 = 0;
	Global_17257.f_4640 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17257.f_4834[iVar0 /*4*/]), "", 16);
		Global_17257.f_4883[iVar0] = -1;
		Global_17257.f_4896[iVar0] = 344;
		Global_17257.f_4909[iVar0] = 31;
		iVar0++;
	}
	Global_17257.f_4922 = 0;
	StringCopy(&(Global_2562053.f_16), "", 16);
	Global_2562053.f_20 = -1;
	if (is_pc_version())
	{
		if (!func_107(&uVar1, 0, iParam0))
		{
			return;
		}
		_push_scaleform_movie_function(Global_17257.f_5530[uVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		_push_scaleform_movie_function_parameter_bool(false);
		_pop_scaleform_movie_function_void();
	}
}

void func_306(var uParam0)
{
	if (is_pc_version())
	{
		_push_scaleform_movie_function(*uParam0.f_594, "SET_IS_PC");
		_push_scaleform_movie_function_parameter_bool(true);
		_pop_scaleform_movie_function_void();
	}
	if (_push_scaleform_movie_function(*uParam0.f_584, "SET_DATA_SLOT_EMPTY"))
	{
		_pop_scaleform_movie_function_void();
	}
	if (_push_scaleform_movie_function(*uParam0.f_584, "SET_TITLE"))
	{
		_pop_scaleform_movie_function_void();
	}
	if (is_pc_version())
	{
		_push_scaleform_movie_function(*uParam0.f_594, "SET_IS_PC");
		_push_scaleform_movie_function_parameter_bool(true);
		_pop_scaleform_movie_function_void();
	}
	if (_push_scaleform_movie_function(*uParam0.f_594, "SET_DATA_SLOT_EMPTY"))
	{
		_pop_scaleform_movie_function_void();
	}
	if (_push_scaleform_movie_function(*uParam0.f_594, "SET_TITLE"))
	{
		_pop_scaleform_movie_function_void();
	}
}

int func_307(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = func_309(iParam0);
	if (iVar0 == -1)
	{
		*iParam1 = 0;
		return -1;
	}
	iVar1 = func_17(iVar0, iParam2, 0);
	func_308(iVar1, &uVar2, iParam1);
	return uVar2;
}

void func_308(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	*uParam1 = shift_right(iParam0, 16);
	iVar0 = (iParam0 && 65535);
	*uParam2 = iVar0;
}

int func_309(int iParam0)
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

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 1;
			break;
		
		case 8:
			return 2;
			break;
		
		case 9:
			return 10;
			break;
		
		case 10:
			return 7;
			break;
		
		case 11:
			return 4;
			break;
		
		case 13:
			return 5;
			break;
		
		case 14:
			return 4;
			break;
		
		case 15:
			return 8;
			break;
	}
	return -1;
}

int func_311(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == -1)
	{
		return -1;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < func_290(iParam0, iParam1))
	{
		if (func_291(iParam1, iVar0))
		{
			iVar1++;
			if (iVar0 == iParam2)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_312(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<12> Var1;
	int iVar13;
	struct<10> Var14;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	
	func_332(uParam0, 0);
	func_331(0);
	func_328(*uParam0);
	func_327(1, 1, 0, 0, 0);
	func_326(1, 2, 1, 1, 1);
	func_324(func_325(*uParam0.f_496, 1));
	*uParam0.f_463 = 0;
	*uParam0.f_464 = 0;
	*uParam0.f_471 = 0;
	iVar13 = get_entity_model(iParam1);
	if (*uParam0.f_678 && iParam3)
	{
		if (!(!*uParam0.f_105.f_22 && *uParam0.f_105.f_15))
		{
			if (func_521(iVar13, *uParam0.f_496, *uParam0.f_105.f_1, &Var14))
			{
				if (Var1.f_11 != 0 && func_209(Var1.f_11, 2, -1))
				{
				}
				else if (Var14.f_9 == 0)
				{
					*uParam0.f_604 = func_86(2143, -1, 0);
					*uParam0.f_605 = func_86(2150, -1, 0);
					*uParam0.f_606 = *uParam0.f_605;
					*uParam0.f_609 = 1f;
				}
				else if (Var14.f_9 == 1)
				{
					if (Var14.f_5 == 4)
					{
						*uParam0.f_604 = -1;
						*uParam0.f_607 = 0;
					}
					else
					{
						*uParam0.f_604 = func_307(Var14.f_5, uParam0.f_607, -1);
					}
					iVar26 = func_516(Var14.f_5);
					iVar27 = func_525(Var14.f_5);
					if (iVar26 != -1)
					{
						*uParam0.f_605 = func_86(iVar26, -1, 0);
					}
					else
					{
						*uParam0.f_605 = 0;
					}
					*uParam0.f_606 = *uParam0.f_605;
					if (iVar27 != -1)
					{
						*uParam0.f_609 = func_323(iVar27, -1);
						if (*uParam0.f_105.f_1 == 0 && *uParam0.f_609 == 0f)
						{
							*uParam0.f_609 = Var14.f_7;
						}
					}
					else
					{
						*uParam0.f_609 = Var14.f_7;
					}
				}
				else if (Var14.f_9 == 2)
				{
					*uParam0.f_604 = -1;
					*uParam0.f_607 = 0;
					*uParam0.f_605 = -1;
					*uParam0.f_606 = *uParam0.f_605;
					*uParam0.f_609 = Var14.f_7;
				}
			}
		}
	}
	if (iVar13 == joaat("mp_f_freemode_01") && *uParam0.f_496 == 6)
	{
		if (func_98(iVar13, -375526080, 2, 4) == func_526(385, -1, -1) && !func_225(4246, -1, -1))
		{
			if (func_218())
			{
				func_322(4246, 1, -1, 1);
			}
		}
	}
	iVar28 = false;
	while (func_521(iVar13, *uParam0.f_496, iVar0, &Var1))
	{
		if (func_217(iVar13, *uParam0.f_496, iVar0))
		{
			if (func_212(uParam0, iVar13, *uParam0.f_496, iVar0) && !func_208(uParam0, iVar13, *uParam0.f_496, iVar0))
			{
				func_318(iVar0, &(Var1.f_1), 1, 1, 0, 0);
				func_317(2, 0);
				if (iVar0 == *uParam0.f_105.f_1)
				{
					*uParam0.f_464 = 1;
				}
			}
			else if (func_212(uParam0, iVar13, *uParam0.f_496, iVar0) && func_175(&(Var1.f_1), *uParam0.f_496, Var1))
			{
				func_318(iVar0, &(Var1.f_1), 1, 1, 0, 0);
				func_317(48, 0);
			}
			else
			{
				func_318(iVar0, &(Var1.f_1), 0, 1, 0, 0);
			}
			if (iVar0 == *uParam0.f_105.f_1)
			{
				*uParam0.f_536 = {Var1.f_1};
			}
			if (func_520(iVar13, &Var1, uParam0))
			{
				iVar28 = true;
				if (iParam2)
				{
					if (!(!*uParam0.f_105.f_22 && *uParam0.f_105.f_15))
					{
						*uParam0.f_105.f_1 = iVar0;
					}
				}
				func_318(iVar0, "", 1, 1, 0, 0);
				if (((*uParam0.f_496 == 11 || *uParam0.f_496 == 13) || *uParam0.f_496 == 14) || *uParam0.f_496 == 15)
				{
					func_317(20, 0);
				}
				else
				{
					func_317(14, 0);
				}
			}
			else if (!func_212(uParam0, iVar13, *uParam0.f_496, iVar0))
			{
				func_318(iVar0, "", 1, 1, 0, 0);
				func_317(15, 0);
				if (iVar0 == *uParam0.f_105.f_1)
				{
					*uParam0.f_463 = 1;
				}
			}
			else if (Var1 > 0)
			{
				func_318(iVar0, "ITEM_COST", 1, 1, 0, 0);
				func_314(Var1, 0);
			}
			else
			{
				func_318(iVar0, "ITEM_FREE", 0, 1, 0, 0);
			}
		}
		iVar0++;
	}
	if (iVar0 == 0)
	{
		func_318(0, "HAIR_NONE", 0, 1, 0, 0);
	}
	else if (!iVar28)
	{
		if (iParam2)
		{
			if (!(!*uParam0.f_105.f_22 && *uParam0.f_105.f_15))
			{
				if (*uParam0.f_496 == 11 || *uParam0.f_496 == 14)
				{
					*uParam0.f_609 = 1f;
					*uParam0.f_105.f_1 = 0;
					func_334(uParam0, iParam1, *uParam0.f_496, *uParam0.f_105.f_1);
				}
				else
				{
					*uParam0.f_609 = 1f;
					*uParam0.f_105.f_1 = 0;
					if (func_521(iVar13, *uParam0.f_496, *uParam0.f_105.f_1, &Var1))
					{
						if (Var1.f_9 == 0)
						{
							iVar29 = func_526(385, -1, -1);
							Global_69311[1 /*14*/] = {func_117(iVar13, 2, iVar29)};
							*uParam0.f_105.f_1 = Global_69311[1 /*14*/].f_3;
						}
						else if (Var1.f_9 == 1)
						{
						}
						else if (Var1.f_9 == 2)
						{
						}
					}
				}
			}
		}
	}
	func_313(*uParam0.f_693);
	func_510(*uParam0.f_105.f_1, 1, 1);
	func_300(iVar13, *uParam0.f_496, *uParam0.f_105.f_1);
	if (!func_604(*uParam0.f_496))
	{
		func_304(201, "ITEM_SELECT", -1, 0);
	}
	else if (*uParam0.f_496 == 5 || *uParam0.f_496 == 12)
	{
		func_304(201, "ITEM_SELECT", -1, 0);
	}
	else
	{
		func_304(201, "ITEM_BUY", -1, 0);
	}
	if (*uParam0.f_679)
	{
		func_304(202, "ITEM_BACK", -1, 0);
		func_303(21, "ITEM_MOV_CAM", -1);
		if (!func_604(*uParam0.f_496))
		{
			func_304(iLocal_94, "ITEM_ZOOM", -1, 0);
		}
	}
	else
	{
		func_304(202, "ITEM_BACK", -1, 0);
		func_303(21, "ITEM_MOV_CAM", -1);
	}
	if (*uParam0.f_678)
	{
		func_302(uParam0, iVar13, 1);
		*uParam0.f_678 = 0;
	}
}

void func_313(var uParam0)
{
	Global_17257.f_5605 = uParam0;
}

void func_314(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17257.f_5092 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 >= 4)
	{
		return;
	}
	if (Global_17257.f_5611 != 1)
	{
		return;
	}
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		return;
	}
	Global_17257.f_3918[Global_17257.f_5092] = iParam0;
	Global_17257.f_5092++;
	Global_17257.f_2124[Global_17257.f_5609 /*5*/][Global_17257.f_5610] = 2;
	Global_17257.f_5610++;
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		fVar0 = func_316();
		if (Global_17257.f_4945[Global_17257.f_5089] && Global_17257.f_5610 == Global_17257.f_5608)
		{
			func_167(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 += fVar1 * 2f;
		}
		if (fVar0 > Global_17257.f_4938[Global_17257.f_5089 - 1])
		{
			Global_17257.f_4938[Global_17257.f_5089 - 1] = fVar0;
		}
	}
	if (iParam1)
	{
		if (Global_17257.f_5610 >= Global_17257.f_5608)
		{
			fVar3 = func_315();
			if (fVar3 > Global_17257.f_5612[Global_17257.f_5088])
			{
				Global_17257.f_5612[Global_17257.f_5088] = fVar3;
			}
		}
	}
}

float func_315()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17257.f_5610)
	{
		if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17257.f_4433[Global_17257.f_5094 - iVar1 + iVar0] != 0)
		{
			if (func_167(Global_17257.f_4433[Global_17257.f_5094 - iVar1 + iVar0], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > _get_text_scale_height(0.35f, 0))
	{
		return fVar2;
	}
	return _get_text_scale_height(0.35f, 0);
}

float func_316()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17257.f_5610)
	{
		if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_184(0, 1, 0, 0, 0, iVar6 > 0);
	if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
	{
		_set_text_entry_for_width(&(Global_17257.f_73[Global_17257.f_5609 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17257.f_5610)
	{
		if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				_add_text_component_item_string(&(Global_17257.f_73[Global_17257.f_5609 + iVar8 /*6*/]));
			}
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				_add_text_component_item_string(&(Global_17257.f_73[Global_17257.f_5609 + iVar8 /*6*/]));
			}
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 2)
		{
			if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				add_text_component_integer(Global_17257.f_3918[Global_17257.f_5092 - iVar3 + iVar9]);
			}
			iVar9++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 3)
		{
			if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				add_text_component_float(Global_17257.f_4175[Global_17257.f_5093 - iVar4 + iVar10], Global_17257.f_4304[Global_17257.f_5093 - iVar4 + iVar10]);
			}
			iVar10++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 5)
		{
			if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				add_text_component_substring_player_name(&(Global_2443586[Global_17257.f_5091 - iVar6 + iVar11 /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 6)
		{
			if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				_add_text_component_item_string(&(Global_2443586[Global_17257.f_5091 - iVar6 + iVar11 /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17257.f_2124[Global_17257.f_5609 /*5*/][iVar7] == 7)
		{
			if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
			{
				add_text_component_substring_player_name(&(Global_2443586[Global_17257.f_5091 - iVar6 + iVar11 /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (get_hash_key(&(Global_17257.f_73[Global_17257.f_5609 /*6*/])) != 0)
	{
		fVar0 = _get_text_screen_width(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17257.f_4433[Global_17257.f_5094 - iVar5 + iVar7] != 0)
		{
			func_167(Global_17257.f_4433[Global_17257.f_5094 - iVar5 + iVar7], 1, 0, &fVar1, &uVar2, 0);
			fVar0 += fVar1;
		}
		iVar7++;
	}
	return fVar0;
}

void func_317(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17257.f_5094 >= 128)
	{
		return;
	}
	if (Global_17257.f_5610 >= 4)
	{
		return;
	}
	if (Global_17257.f_5611 != 1)
	{
		return;
	}
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		return;
	}
	Global_17257.f_4433[Global_17257.f_5094] = iParam0;
	Global_17257.f_5094++;
	Global_17257.f_2124[Global_17257.f_5609 /*5*/][Global_17257.f_5610] = 4;
	Global_17257.f_5610++;
	if (Global_17257.f_5610 >= Global_17257.f_5608)
	{
		fVar0 = func_316();
		if (Global_17257.f_4945[Global_17257.f_5089] && Global_17257.f_5610 == Global_17257.f_5608)
		{
			func_167(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 += fVar1 * 2f;
		}
		if (fVar0 > Global_17257.f_4938[Global_17257.f_5089 - 1])
		{
			Global_17257.f_4938[Global_17257.f_5089 - 1] = fVar0;
		}
	}
	if (iParam1)
	{
		if (Global_17257.f_5610 >= Global_17257.f_5608)
		{
			fVar3 = func_315();
			if (fVar3 > Global_17257.f_5612[Global_17257.f_5088])
			{
				Global_17257.f_5612[Global_17257.f_5088] = fVar3;
			}
		}
	}
}

void func_318(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17257.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17257.f_5088 >= 128)
	{
		return;
	}
	if (Global_17257.f_5090 >= 256)
	{
		return;
	}
	if (Global_17257.f_5610 < Global_17257.f_5608)
	{
		return;
	}
	if (Global_17257.f_5088 != iParam0)
	{
		Global_17257.f_5088 = iParam0;
		Global_17257.f_5089 = 0;
	}
	iVar0 = Global_17257.f_4926[Global_17257.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17257.f_5089 < 4 && iVar0 != 1)
		{
			Global_17257.f_5089++;
			iVar0 = Global_17257.f_4926[Global_17257.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]), sParam1, 24);
	if (!is_string_null_or_empty(sParam1) && !does_text_label_exist(sParam1))
	{
	}
	Global_17257.f_1610[Global_17257.f_5090] = iParam3;
	Global_17257.f_1867[Global_17257.f_5090] = iParam4;
	Global_17257.f_5090++;
	if (!iParam3)
	{
		func_321(Global_17257.f_5088, 1);
	}
	else
	{
		func_321(Global_17257.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_320(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
		if (Global_17257.f_4945[Global_17257.f_5089])
		{
			func_167(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 += fVar2 * 2f;
		}
		if (fVar1 > Global_17257.f_4938[Global_17257.f_5089])
		{
			Global_17257.f_4938[Global_17257.f_5089] = fVar1;
		}
	}
	if (iParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_319(&(Global_17257.f_73[Global_17257.f_5090 /*6*/]));
			if (fVar4 > Global_17257.f_5612[iParam0])
			{
				Global_17257.f_5612[iParam0] = fVar4;
			}
		}
	}
	set_bit(&(Global_17257.f_4959[iParam0]), Global_17257.f_5089);
	Global_17257.f_5089++;
	Global_17257.f_5611 = 1;
	Global_17257.f_5609 = Global_17257.f_5090 - 1;
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = iParam2;
}

float func_319(char* sParam0)
{
	if (!does_text_label_exist(sParam0))
	{
	}
	return _get_text_scale_height(0.35f, 0);
}

float func_320(char* sParam0)
{
	if (!is_string_null(sParam0))
	{
		if (get_hash_key(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_184(0, 1, 0, 0, 0, 0);
	_set_text_entry_for_width(sParam0);
	return _get_text_screen_width(1);
}

void func_321(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = floor(to_float(iParam0) / 32f);
	if (iParam1)
	{
		set_bit(&(Global_17257.f_5881[iVar0]), iParam0 - iVar0 * 32);
	}
	else
	{
		clear_bit(&(Global_17257.f_5881[iVar0]), iParam0 - iVar0 * 32);
	}
}

int func_322(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = _0x80C75307B1C42837(iParam0 - 0, 0, 1, iParam2);
		iVar1 = iParam0 - 0 - _0xF4D8E7AC2A27758C(iParam0 - 0) * 64;
		iVar0 = stat_set_bool_masked(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = _0x80C75307B1C42837(iParam0 - 192, 1, 1, iParam2);
		iVar1 = iParam0 - 192 - _0xF4D8E7AC2A27758C(iParam0 - 192) * 64;
		iVar0 = stat_set_bool_masked(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = _0x80C75307B1C42837(iParam0 - 513, 0, 0, 0);
		iVar1 = iParam0 - 513 - _0xF4D8E7AC2A27758C(iParam0 - 513) * 64;
		iVar0 = stat_set_bool_masked(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = _0x80C75307B1C42837(iParam0 - 705, 1, 0, 0);
		iVar1 = iParam0 - 705 - _0xF4D8E7AC2A27758C(iParam0 - 705) * 64;
		iVar0 = stat_set_bool_masked(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = _0xC4BB08EE7907471E(iParam0 - 3111, 0, 1, iParam2);
		iVar1 = iParam0 - 3111 - _0xF4D8E7AC2A27758C(iParam0 - 3111) * 64;
		iVar0 = stat_set_bool_masked(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = _0xC4BB08EE7907471E(iParam0 - 2919, 0, 0, 0);
		iVar1 = iParam0 - 2919 - _0xF4D8E7AC2A27758C(iParam0 - 2919) * 64;
		iVar0 = stat_set_bool_masked(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = _0xBA52FF538ED2BC71(iParam0 - 4207, 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4207 - _0xF4D8E7AC2A27758C(iParam0 - 4207) * 64;
		iVar0 = stat_set_bool_masked(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = _0xBA52FF538ED2BC71(iParam0 - 4335, 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = iParam0 - 4335 - _0xF4D8E7AC2A27758C(iParam0 - 4335) * 64;
		iVar0 = stat_set_bool_masked(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = _0xBA52FF538ED2BC71(iParam0 - 6029, 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = iParam0 - 6029 - _0xF4D8E7AC2A27758C(iParam0 - 6029) * 64;
		iVar0 = stat_set_bool_masked(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = _0xBA52FF538ED2BC71(iParam0 - 7385, 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7385 - _0xF4D8E7AC2A27758C(iParam0 - 7385) * 64;
		iVar0 = stat_set_bool_masked(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = _0xBA52FF538ED2BC71(iParam0 - 7321, 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = iParam0 - 7321 - _0xF4D8E7AC2A27758C(iParam0 - 7321) * 64;
		iVar0 = stat_set_bool_masked(iVar12, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

float func_323(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2489085[iParam0 /*5*/][func_18(iParam1)];
	if (stat_get_float(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

void func_324(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17257.f_1), sParam0, 16);
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
}

char* func_325(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1)
			{
				return "HAIR_NG_T0";
			}
			else
			{
				return "HAIR_NG_O0";
			}
			break;
		
		case 6:
			if (iParam1)
			{
				return "HAIR_NG_T1";
			}
			else
			{
				return "HAIR_NG_O1";
			}
			break;
		
		case 7:
			if (iParam1)
			{
				return "HAIR_NG_T2";
			}
			else
			{
				return "HAIR_NG_O2";
			}
			break;
		
		case 8:
			if (iParam1)
			{
				return "HAIR_NG_T3";
			}
			else
			{
				return "HAIR_NG_O3";
			}
			break;
		
		case 9:
			if (iParam1)
			{
				return "HAIR_NG_T4";
			}
			else
			{
				return "HAIR_NG_O4";
			}
			break;
		
		case 10:
			if (iParam1)
			{
				return "HAIR_NG_T5";
			}
			else
			{
				return "HAIR_NG_O5";
			}
			break;
		
		case 11:
			if (iParam1)
			{
				return "HAIR_NG_T6";
			}
			else
			{
				return "HAIR_NG_O6";
			}
			break;
		
		case 12:
			if (iParam1)
			{
				return "HAIR_NG_T7";
			}
			else
			{
				return "HAIR_NG_O7";
			}
			break;
		
		case 13:
			if (iParam1)
			{
				return "HAIR_NG_T8";
			}
			else
			{
				return "HAIR_NG_O8";
			}
			break;
		
		case 14:
			if (iParam1)
			{
				return "HAIR_NG_T9";
			}
			else
			{
				return "HAIR_NG_O9";
			}
			break;
		
		case 15:
			if (iParam1)
			{
				return "HAIR_NG_T10";
			}
			else
			{
				return "HAIR_NG_O10";
			}
			break;
	}
	return "";
}

void func_326(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4953[0] = iParam0;
	Global_17257.f_4953[1] = iParam1;
	Global_17257.f_4953[2] = iParam2;
	Global_17257.f_4953[3] = iParam3;
	Global_17257.f_4953[4] = iParam4;
}

void func_327(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17257.f_4926[0] = iParam0;
	Global_17257.f_4926[1] = iParam1;
	Global_17257.f_4926[2] = iParam2;
	Global_17257.f_4926[3] = iParam3;
	Global_17257.f_4926[4] = iParam4;
	Global_17257.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17257.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17257.f_5096++;
	}
}

void func_328(int iParam0)
{
	char* sVar0;
	
	sVar0 = func_103(iParam0);
	if (!is_string_null_or_empty(sVar0))
	{
		func_329(1, sVar0, sVar0);
	}
}

void func_329(int iParam0, char* sParam1, char* sParam2)
{
	Global_17257 = iParam0;
	func_330(29, sParam1, sParam2);
}

void func_330(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17257.f_5886[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17257.f_6687[iParam0 /*16*/]), sParam2, 64);
}

void func_331(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17257.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17257.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2443586[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17257.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17257.f_4959[iVar0] = 0;
		Global_17257.f_5097[iVar0] = 0;
		Global_17257.f_5226[iVar0] = 0;
		Global_17257.f_5746[iVar0] = 0f;
		Global_17257.f_5355[iVar0] = 0;
		Global_17257.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17257.f_4926[iVar0] = 0;
		Global_17257.f_4938[iVar0] = 0f;
		Global_17257.f_4932[iVar0] = -1f;
		Global_17257.f_4945[iVar0] = 0;
		Global_17257.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17257.f_4834[iVar0 /*4*/]), "", 16);
		Global_17257.f_4883[iVar0] = -1;
		Global_17257.f_4896[iVar0] = 344;
		Global_17257.f_4909[iVar0] = 31;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_17257.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17257.f_6687[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_2562053.f_16), "", 16);
	Global_2562053.f_20 = -1;
	Global_17257 = 0;
	Global_17257.f_5088 = 0;
	Global_17257.f_5089 = 0;
	Global_17257.f_5090 = 0;
	Global_17257.f_5092 = 0;
	Global_17257.f_5093 = 0;
	Global_17257.f_5094 = 0;
	Global_17257.f_5091 = 0;
	Global_17257.f_5741 = 0;
	Global_17257.f_5606 = 0;
	Global_17257.f_5605 = 0;
	Global_17257.f_5607 = 0;
	StringCopy(&(Global_17257.f_4562), "", 16);
	Global_17257.f_4632 = 0;
	Global_17257.f_4633 = 0;
	Global_17257.f_4634 = 0;
	Global_17257.f_4635 = 0;
	Global_17257.f_4636 = 0;
	Global_17257.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_4638 = 0;
	StringCopy(&(Global_2562053.f_21), "", 16);
	Global_2562053.f_61 = 0;
	Global_2562053.f_62 = 0;
	Global_2562053.f_63 = 0;
	Global_2562053.f_64 = 0;
	Global_2562053.f_65 = 0;
	Global_2562053.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_2562053.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_2562053.f_67 = 0;
	StringCopy(&(Global_17257.f_1), "", 16);
	Global_17257.f_4944 = 0f;
	Global_17257.f_68 = 0;
	Global_17257.f_69 = 0;
	Global_17257.f_70 = 0;
	Global_17257.f_71 = 0;
	Global_17257.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17257.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_5611 = 0;
	Global_17257.f_5610 = 0;
	Global_17257.f_5608 = 0;
	Global_17257.f_5609 = 0;
	Global_17257.f_4639 = 0;
	Global_17257.f_4640 = 0;
	Global_17257.f_5095 = 10;
	Global_17257.f_5096 = 0;
	Global_17257.f_5743 = 0f;
	Global_17257.f_5744 = 0f;
	Global_17257.f_5598 = 0;
	Global_17257.f_5599 = 0;
	Global_17257.f_5600 = 0f;
	Global_17257.f_5601 = 0;
	Global_17257.f_5603 = 0;
	Global_17257.f_5602 = 0;
	Global_17257.f_5604 = 0;
	Global_17257.f_7858 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17257.f_5875[iVar0] = -1;
		Global_17257.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17257.f_4951 = 0f;
	Global_17257.f_4922 = 0;
	Global_17257.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17257.f_5881)
	{
		Global_17257.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17257.f_7837 = 0;
	Global_17257.f_7832 = 0;
	Global_17257.f_7842 = 0;
	Global_17257.f_7847 = 0;
	Global_17257.f_7852 = 0;
	Global_17257.f_7854 = 0;
	Global_17257.f_7860 = 0;
	Global_17254 = 0.05f;
	Global_17255 = 0.05f;
	Global_17256 = 0.225f;
	fVar2 = _get_screen_aspect_ratio(0);
	if (iParam0)
	{
		Global_17256 = 0.225f * 16f / 9f / fVar2;
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17256 = 0.225f * 16f / 9f / fVar2;
	}
	else
	{
		Global_17256 = 0.225f;
	}
}

void func_332(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	
	if (func_655(1))
	{
		iVar2 = player_ped_id();
		if (does_entity_exist(*uParam0.f_610.f_2) && !is_ped_injured(*uParam0.f_610.f_2))
		{
			iVar2 = *uParam0.f_610.f_2;
		}
		iVar0 = get_entity_model(iVar2);
		if (*uParam0.f_496 == 1)
		{
			if (*uParam0.f_256 == -1)
			{
				Stack.Push(iVar2);
				Stack.Push(2);
				Stack.Push(-1);
				Call_Loc(*uParam0.f_449);
				*uParam0.f_256 = StackVal;
			}
		}
		else if (*uParam0.f_496 == 2)
		{
			if (*uParam0.f_257 == -1)
			{
				Stack.Push(iVar2);
				Stack.Push(1);
				Stack.Push(-1);
				Call_Loc(*uParam0.f_449);
				*uParam0.f_257 = StackVal;
			}
		}
		else if (func_604(*uParam0.f_496))
		{
			if (func_521(get_entity_model(iVar2), *uParam0.f_496, *uParam0.f_105.f_1, &Var3))
			{
				if (Var3.f_9 == 0)
				{
					*uParam0.f_256 = func_526(385, -1, -1);
					if (iParam1)
					{
						*uParam0.f_604 = func_86(2143, -1, 0);
						*uParam0.f_605 = func_86(2150, -1, 0);
						*uParam0.f_606 = *uParam0.f_605;
					}
				}
				else if (Var3.f_9 == 1 || Var3.f_9 == 2)
				{
					*uParam0.f_257 = func_526(func_519(Var3.f_5), -1, -1);
					if (iParam1)
					{
						*uParam0.f_604 = func_307(Var3.f_5, uParam0.f_607, -1);
						*uParam0.f_605 = func_333(Var3.f_5, -1);
						*uParam0.f_606 = *uParam0.f_605;
						*uParam0.f_609 = func_323(func_525(Var3.f_5), -1);
					}
				}
			}
			if (iParam1)
			{
			}
		}
		if (iParam1)
		{
			iVar1 = 0;
			while (iVar1 < Global_2560058.f_222)
			{
				Stack.Push(iVar0);
				Stack.Push(Global_2560058.f_111[iVar1]);
				Stack.Push(Global_2560058[iVar1]);
				Call_Loc(*uParam0.f_451);
				if (StackVal)
				{
					*uParam0.f_105.f_1 = iVar1;
					return;
				}
				iVar1++;
			}
			*uParam0.f_105.f_1 = 0;
		}
	}
}

int func_333(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_516(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_17(iVar0, iParam1, 0);
}

void func_334(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<10> Var0;
	
	func_521(get_entity_model(iParam1), iParam2, iParam3, &Var0);
	switch (Var0.f_9)
	{
		case 0:
			Stack.Push(iParam1);
			Stack.Push(2);
			Stack.Push(Var0.f_8);
			Stack.Push(0);
			Stack.Push(-1);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(0);
			Stack.Push(*uParam0.f_604);
			Stack.Push(*uParam0.f_605);
			Stack.Push(-1);
			Stack.Push(0);
			Call_Loc(*uParam0.f_450);
			break;
		
		case 1:
			func_335(Var0.f_5, uParam0.f_607);
			func_531(iParam1, Var0.f_5, Var0.f_6, *uParam0.f_604, *uParam0.f_605, *uParam0.f_607, *uParam0.f_609, 1);
			break;
		
		case 2:
			func_335(Var0.f_5, uParam0.f_607);
			func_531(iParam1, Var0.f_5, Var0.f_6, *uParam0.f_604, *uParam0.f_605, *uParam0.f_607, *uParam0.f_609, 1);
			break;
	}
	func_347(iParam1, iParam2);
}

void func_335(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 10:
			if (*uParam1 != 1)
			{
				*uParam1 = 1;
			}
			break;
		
		case 5:
		case 8:
			if (*uParam1 != 2)
			{
				*uParam1 = 2;
			}
			break;
	}
}

bool func_336(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				if (*iParam2.f_8 >= 91)
				{
					return true;
				}
				break;
			
			case 11:
				if (*iParam2.f_10 == 92)
				{
					return true;
				}
				if (*iParam2.f_10 >= 93 && *iParam2.f_10 <= 122)
				{
					return true;
				}
				break;
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		switch (iParam1)
		{
			case 6:
				if (*iParam2.f_8 >= 92)
				{
					return true;
				}
				break;
			
			case 11:
				if (*iParam2.f_10 == 92)
				{
					return true;
				}
				if (*iParam2.f_10 >= 93 && *iParam2.f_10 <= 122)
				{
					return true;
				}
				break;
			}
	}
	return false;
}

void func_337(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_69309;
	if (iParam2 != -1)
	{
		iVar0 = iParam2;
	}
	if (func_210(iParam0, iParam1, &iVar2, &iVar1))
	{
		iVar3 = func_17(iVar2, iVar0, 0);
		set_bit(&iVar3, iVar1);
		func_534(iVar2, iVar3, iVar0, 1);
	}
}

int func_338(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 13;
			break;
		
		case 1:
			return 14;
			break;
		
		case 2:
			return 15;
			break;
	}
	return -1;
}

bool func_339(var uParam0, int iParam1, int iParam2)
{
	if (_is_input_disabled(2))
	{
		if (Global_2562129 == -3)
		{
			if ((is_control_pressed(2, 237) && uParam0) || is_control_just_pressed(2, 237))
			{
				return true;
			}
		}
		if (iParam2 == 0)
		{
			if (is_control_pressed(2, 242) || (is_disabled_control_pressed(2, 242) && iParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_340(int iParam0, int iParam1)
{
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		switch (iParam1)
		{
			case 5:
				return true;
				break;
			
			case 6:
				return true;
				break;
			
			case 7:
				return true;
				break;
			
			case 8:
				return true;
				break;
			
			case 9:
				return true;
				break;
			
			case 10:
				return true;
				break;
			
			case 11:
				return true;
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
				return true;
				break;
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		switch (iParam1)
		{
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
				return true;
				break;
			
			case 11:
				return true;
				break;
			
			case 12:
				return true;
				break;
			
			case 13:
				return true;
				break;
			
			case 14:
				return true;
				break;
			
			case 15:
				return true;
				break;
			}
	}
	return false;
}

int func_341(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
			break;
		
		case 1:
			return 7;
			break;
		
		case 2:
			return 8;
			break;
		
		case 3:
			return 9;
			break;
		
		case 4:
			return 10;
			break;
		
		case 5:
			return 11;
			break;
		
		case 6:
			return 12;
			break;
	}
	return -1;
}

bool func_342(var uParam0, int iParam1, int iParam2)
{
	if (_is_input_disabled(2))
	{
		if (Global_2562129 == -2)
		{
			if ((is_control_pressed(2, 237) && uParam0) || is_control_just_pressed(2, 237))
			{
				return true;
			}
		}
		if (iParam2 == 0)
		{
			if (is_control_pressed(2, 241) || (is_disabled_control_pressed(2, 241) && iParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_343()
{
	if (_is_input_disabled(2))
	{
		if (Global_2562129 > -1)
		{
			if (is_control_just_pressed(2, 237))
			{
				return true;
			}
		}
	}
	return false;
}

void func_344(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = 0.034722f / 2f;
	iVar13 = -1;
	if (!_is_input_disabled(2))
	{
		Global_2562129 = -1;
		return;
	}
	_0x5B73C77D9EB66E24(1);
	fVar0 = Global_17254;
	fVar2 = fVar0 + Global_17256;
	fVar3 = Global_17257.f_5600;
	fVar1 = Global_17257.f_5600 - IntToFloat(Global_17257.f_5602) * 0.034722f;
	if (iParam2)
	{
		fVar3 += 0.034722f;
		fVar1 += 0.034722f;
	}
	if (Global_17257.f_5602 < 1)
	{
		fVar1 = Global_17257.f_5600 - 0.034722f;
	}
	_set_screen_draw_position(76, 84);
	_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	_0x6DD8F5AA635EB4B2(fVar0, fVar1, &fVar0, &fVar1);
	_0x6DD8F5AA635EB4B2(fVar2, fVar3, &fVar2, &fVar3);
	_0xE3A3DB414A373DAB();
	func_346();
	if (Global_2562129 == -6)
	{
		return;
	}
	Global_2562129 = -1;
	fVar7 = Global_2562123;
	fVar8 = Global_2562124;
	if (Global_17257.f_5603 > Global_17257.f_5602)
	{
		if (((Global_2562123 >= fVar0 && Global_2562123 <= fVar2) && Global_2562124 >= fVar3) && Global_2562124 < fVar3 + fVar6)
		{
			Global_2562129 = -2;
			if (iParam3)
			{
				func_345(0);
			}
			return;
		}
		if (((Global_2562123 >= fVar0 && Global_2562123 <= fVar2) && Global_2562124 >= fVar3 + fVar6) && Global_2562124 < fVar3 + 0.034722f)
		{
			Global_2562129 = -3;
			if (iParam3)
			{
				func_345(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = fVar8 - fVar1;
		iVar13 = floor(fVar9 / 0.034722f);
		if (Global_17257.f_5603 == -1)
		{
			Global_2562129 = 0;
			iVar13 = false;
			return;
		}
		iVar11 = 148;
		iVar12 = iVar11 / Global_17257.f_5602;
		iVar10 = 32 + iVar11 - iVar12 * iVar13;
		if (iParam3)
		{
			if (!iParam1 || iVar13 != 0)
			{
				_set_screen_draw_position(76, 84);
				_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
				func_196(fVar4, fVar5 + IntToFloat(iVar13) * 0.034722f, Global_17256, 0.034722f - 0.0015f, 255, 255, 255, iVar10);
				_0xE3A3DB414A373DAB();
			}
		}
		Global_2562129 = Global_17257.f_7488[iVar13];
		return;
	}
	if (!iParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_2562129 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_2562129 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < fVar3 + 0.25f)
	{
		Global_2562129 = -4;
		return;
	}
	Global_2562129 = -1;
}

void func_345(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 0.034722f / 2f;
	if (iParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17254;
	fVar1 = Global_17257.f_5600;
	_set_screen_draw_position(76, 84);
	_0xF5A2C681787E579D(-0.05f, -0.05f, 0f, 0f);
	if (Global_2562129 == -2)
	{
		func_196(fVar0, fVar1, Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_2562129 == -3)
	{
		func_196(fVar0, fVar1 + fVar2, Global_17256, fVar2, 255, 255, 255, iVar3);
	}
	_0xE3A3DB414A373DAB();
}

void func_346()
{
	Global_2562125 = Global_2562123;
	Global_2562126 = Global_2562124;
	Global_2562123 = get_disabled_control_normal(2, 239);
	Global_2562124 = get_disabled_control_normal(2, 240);
	Global_2562127 = Global_2562123 - Global_2562125;
	Global_2562128 = Global_2562124 - Global_2562126;
}

void func_347(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != player_ped_id())
	{
		iVar0 = false;
		if (get_entity_model(iParam0) == joaat("mp_m_freemode_01"))
		{
			if (iParam1 == 9)
			{
				if (get_ped_drawable_variation(iParam0, 11) != 15)
				{
					iLocal_100 = func_88(iParam0, 11);
					func_392(iParam0, 11, func_445(get_entity_model(iParam0), 11, -1), 0, -1, 0, 0, 0, -1, -1, -1, 0);
					set_ped_component_variation(iParam0, 11, 15, false, 0);
					iVar0 = true;
				}
				if (get_ped_drawable_variation(iParam0, 3) != 15)
				{
					set_ped_component_variation(iParam0, 3, 15, false, 0);
					iVar0 = true;
				}
				if (get_ped_drawable_variation(iParam0, 8) != 15)
				{
					set_ped_component_variation(iParam0, 8, 15, false, 0);
					iVar0 = true;
				}
				if (get_ped_drawable_variation(iParam0, 9) != 0)
				{
					set_ped_component_variation(iParam0, 9, 0, false, 0);
					iVar0 = true;
				}
				if (get_ped_drawable_variation(iParam0, 10) != 0)
				{
					set_ped_component_variation(iParam0, 10, 0, false, 0);
					iVar0 = true;
				}
				if (get_ped_drawable_variation(iParam0, 5) != 0)
				{
					set_ped_component_variation(iParam0, 5, 0, false, 0);
					iVar0 = true;
				}
				if (get_ped_drawable_variation(iParam0, 7) != 0)
				{
					set_ped_component_variation(iParam0, 7, 0, false, 0);
					iVar0 = true;
				}
				if (iVar0)
				{
					func_364(iParam0, 0, 0);
					func_349(get_hash_key("torsoDecal"), iParam0);
				}
			}
			else
			{
				if (get_ped_drawable_variation(iParam0, 11) != get_ped_drawable_variation(player_ped_id(), 11))
				{
					set_ped_component_variation(iParam0, 11, get_ped_drawable_variation(player_ped_id(), 11), get_ped_texture_variation(player_ped_id(), 11), 0);
					iVar0 = true;
				}
				if (get_ped_drawable_variation(iParam0, 3) != get_ped_drawable_variation(player_ped_id(), 3))
				{
					set_ped_component_variation(iParam0, 3, get_ped_drawable_variation(player_ped_id(), 3), get_ped_texture_variation(player_ped_id(), 3), 0);
					iVar0 = true;
				}
				if (get_ped_drawable_variation(iParam0, 8) != get_ped_drawable_variation(player_ped_id(), 8))
				{
					iVar1 = get_ped_drawable_variation(player_ped_id(), 8);
					if (iVar1 == func_348(iParam0, 1))
					{
						set_ped_component_variation(iParam0, 8, func_348(player_ped_id(), 0), get_ped_texture_variation(player_ped_id(), 8), 0);
						iVar0 = true;
					}
					else
					{
						set_ped_component_variation(iParam0, 8, get_ped_drawable_variation(player_ped_id(), 8), get_ped_texture_variation(player_ped_id(), 8), 0);
						iVar0 = true;
					}
				}
				if (get_ped_drawable_variation(iParam0, 9) != get_ped_drawable_variation(player_ped_id(), 9))
				{
					set_ped_component_variation(iParam0, 9, get_ped_drawable_variation(player_ped_id(), 9), get_ped_texture_variation(player_ped_id(), 9), 0);
					iVar0 = true;
				}
				if (get_ped_drawable_variation(iParam0, 10) != get_ped_drawable_variation(player_ped_id(), 10))
				{
					set_ped_component_variation(iParam0, 10, get_ped_drawable_variation(player_ped_id(), 10), get_ped_texture_variation(player_ped_id(), 10), 0);
					iVar0 = true;
				}
				if (get_ped_drawable_variation(iParam0, 5) != get_ped_drawable_variation(player_ped_id(), 5))
				{
					set_ped_component_variation(iParam0, 5, get_ped_drawable_variation(player_ped_id(), 5), get_ped_texture_variation(player_ped_id(), 5), 0);
					iVar0 = true;
				}
				if (get_ped_drawable_variation(iParam0, 7) != get_ped_drawable_variation(player_ped_id(), 7))
				{
					set_ped_component_variation(iParam0, 7, get_ped_drawable_variation(player_ped_id(), 7), get_ped_texture_variation(player_ped_id(), 7), 0);
					iVar0 = true;
				}
				if (iVar0)
				{
					if (iLocal_100 != -99)
					{
						func_392(iParam0, 11, iLocal_100, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iLocal_100 = -99;
					func_364(iParam0, 0, 0);
				}
			}
		}
	}
}

var func_348(int iParam0, int iParam1)
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

void func_349(int iParam0, int iParam1)
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
		iVar13 = func_363(iParam1);
		if (iParam0 != 0)
		{
			if (iVar13 == 3 || iVar13 == 4)
			{
				if (iParam0 == 1019352240)
				{
					func_358(13, 0, Global_69309);
					func_358(14, 0, Global_69309);
					func_358(15, 0, Global_69309);
					func_358(16, 0, Global_69309);
					func_358(71, 0, Global_69309);
					func_358(72, 0, Global_69309);
					return;
				}
				else if (iParam0 == 277073536)
				{
					if (iVar13 == 3)
					{
						func_358(73, 0, Global_69309);
						func_358(74, 0, Global_69309);
						func_358(75, 0, Global_69309);
						func_358(76, 0, Global_69309);
						func_358(77, 0, Global_69309);
						func_358(78, 0, Global_69309);
						func_358(79, 0, Global_69309);
						func_358(80, 0, Global_69309);
						func_358(81, 0, Global_69309);
						func_358(82, 0, Global_69309);
						func_358(83, 0, Global_69309);
						func_358(84, 0, Global_69309);
						func_358(85, 0, Global_69309);
						func_358(86, 0, Global_69309);
						func_358(90, 0, Global_69309);
						func_358(91, 0, Global_69309);
						func_358(124, 0, Global_69309);
						func_358(125, 0, Global_69309);
						func_358(87, 0, Global_69309);
						func_358(88, 0, Global_69309);
						func_358(89, 0, Global_69309);
						iVar15 = _0x278F76C3B0A8F109(3);
						iVar14 = 0;
						while (iVar14 < iVar15)
						{
							if (_0xFF56381874F82086(3, iVar14, &Var16))
							{
								if (Var16.f_6 == 277073536)
								{
									func_358(129 + iVar14, 0, Global_69309);
								}
							}
							iVar14++;
						}
					}
					else
					{
						func_358(73, 0, Global_69309);
						func_358(74, 0, Global_69309);
						func_358(75, 0, Global_69309);
						func_358(76, 0, Global_69309);
						func_358(77, 0, Global_69309);
						func_358(78, 0, Global_69309);
						func_358(79, 0, Global_69309);
						func_358(80, 0, Global_69309);
						func_358(81, 0, Global_69309);
						func_358(82, 0, Global_69309);
						func_358(83, 0, Global_69309);
						func_358(84, 0, Global_69309);
						func_358(85, 0, Global_69309);
						func_358(92, 0, Global_69309);
						func_358(87, 0, Global_69309);
						func_358(88, 0, Global_69309);
						func_358(89, 0, Global_69309);
						iVar32 = _0x278F76C3B0A8F109(4);
						iVar31 = 0;
						while (iVar31 < iVar32)
						{
							if (_0xFF56381874F82086(4, iVar31, &Var33))
							{
								if (Var33.f_6 == 277073536)
								{
									func_358(129 + iVar31, 0, Global_69309);
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
						func_358(93, 0, Global_69309);
						func_358(94, 0, Global_69309);
						func_358(95, 0, Global_69309);
						func_358(96, 0, Global_69309);
						func_358(97, 0, Global_69309);
						func_358(98, 0, Global_69309);
						func_358(99, 0, Global_69309);
						func_358(100, 0, Global_69309);
						func_358(101, 0, Global_69309);
						func_358(102, 0, Global_69309);
						func_358(103, 0, Global_69309);
						func_358(104, 0, Global_69309);
						func_358(105, 0, Global_69309);
						func_358(106, 0, Global_69309);
						func_358(107, 0, Global_69309);
						func_358(108, 0, Global_69309);
						func_358(109, 0, Global_69309);
						func_358(110, 0, Global_69309);
						func_358(111, 0, Global_69309);
						func_358(112, 0, Global_69309);
						func_358(113, 0, Global_69309);
						func_358(114, 0, Global_69309);
						func_358(115, 0, Global_69309);
						func_358(116, 0, Global_69309);
						func_358(117, 0, Global_69309);
						func_358(123, 0, Global_69309);
						iVar49 = _0x278F76C3B0A8F109(3);
						iVar48 = 0;
						while (iVar48 < iVar49)
						{
							if (_0xFF56381874F82086(3, iVar48, &Var50))
							{
								if (Var50.f_6 == 2140335355)
								{
									func_358(129 + iVar48, 0, Global_69309);
								}
							}
							iVar48++;
						}
					}
					else
					{
						func_358(93, 0, Global_69309);
						func_358(94, 0, Global_69309);
						func_358(95, 0, Global_69309);
						func_358(96, 0, Global_69309);
						func_358(97, 0, Global_69309);
						func_358(98, 0, Global_69309);
						func_358(99, 0, Global_69309);
						func_358(100, 0, Global_69309);
						func_358(101, 0, Global_69309);
						func_358(102, 0, Global_69309);
						func_358(103, 0, Global_69309);
						func_358(104, 0, Global_69309);
						func_358(105, 0, Global_69309);
						func_358(106, 0, Global_69309);
						func_358(107, 0, Global_69309);
						func_358(108, 0, Global_69309);
						func_358(109, 0, Global_69309);
						func_358(110, 0, Global_69309);
						func_358(111, 0, Global_69309);
						func_358(112, 0, Global_69309);
						func_358(113, 0, Global_69309);
						func_358(114, 0, Global_69309);
						func_358(115, 0, Global_69309);
						func_358(116, 0, Global_69309);
						func_358(117, 0, Global_69309);
						func_358(118, 0, Global_69309);
						func_358(119, 0, Global_69309);
						func_358(120, 0, Global_69309);
						func_358(121, 0, Global_69309);
						func_358(122, 0, Global_69309);
						func_358(123, 0, Global_69309);
						iVar66 = _0x278F76C3B0A8F109(4);
						iVar65 = 0;
						while (iVar65 < iVar66)
						{
							if (_0xFF56381874F82086(4, iVar65, &Var67))
							{
								if (Var67.f_6 == 2140335355)
								{
									func_358(129 + iVar65, 0, Global_69309);
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
				if (func_350(&Var0, iVar82, iVar13, iParam1, -1))
				{
					if (Var0.f_8 == iParam0)
					{
						func_358(Var0.f_11, 0, Global_69309);
					}
				}
				iVar82++;
			}
		}
	}
}

int func_350(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	func_357(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);
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
					func_357(sParam0, iParam1, iParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
				
				case 1:
					func_357(sParam0, iParam1, iParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
				
				case 2:
					func_357(sParam0, iParam1, iParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
				
				case 3:
					func_357(sParam0, iParam1, iParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
				
				case 4:
					func_357(sParam0, iParam1, iParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
				
				case 5:
					func_357(sParam0, iParam1, iParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
				
				case 6:
					func_357(sParam0, iParam1, iParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
				
				case 7:
					func_357(sParam0, iParam1, iParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
				
				case 8:
					func_357(sParam0, iParam1, iParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
				
				case 9:
					if (func_356() || func_355())
					{
						iVar1 = 400;
						if (func_354() && (func_353() || func_352()))
						{
							iVar1 = 0;
						}
						func_357(sParam0, iParam1, iParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, iVar1, 2);
					}
					break;
				
				case 10:
					func_357(sParam0, iParam1, iParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
				
				case 11:
					func_357(sParam0, iParam1, iParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
				
				case 12:
					func_357(sParam0, iParam1, iParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
				
				case 13:
					func_357(sParam0, iParam1, iParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
				
				case 14:
					func_357(sParam0, iParam1, iParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
				
				case 15:
					func_357(sParam0, iParam1, iParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
				
				case 16:
					func_357(sParam0, iParam1, iParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
				
				case 17:
					func_357(sParam0, iParam1, iParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
				
				case 18:
					func_357(sParam0, iParam1, iParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
				
				case 19:
					func_357(sParam0, iParam1, iParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
				
				case 20:
					func_357(sParam0, iParam1, iParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
				
				default:
					func_351(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_356() || func_355())
					{
						iVar1 = 450;
						if (func_354() && (func_353() || func_352()))
						{
							iVar1 = 0;
						}
						func_357(sParam0, iParam1, iParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, iVar1, 0);
					}
					break;
				
				case 1:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
				
				case 2:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
				
				case 3:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
				
				case 4:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
				
				case 5:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
				
				case 6:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
				
				case 7:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
				
				case 8:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
				
				case 9:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
				
				case 10:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
				
				case 11:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
				
				case 12:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
				
				case 13:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
				
				case 14:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
				
				case 15:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
				
				case 16:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
				
				case 17:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
				
				case 18:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
				
				case 19:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
				
				case 20:
					break;
				
				case 21:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
				
				case 22:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
				
				case 23:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
				
				case 24:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
				
				case 25:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
				
				case 26:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
				
				case 27:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
				
				case 28:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
				
				case 29:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
				
				case 30:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
				
				case 31:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
				
				case 32:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
				
				case 33:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
				
				case 34:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
				
				case 35:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
				
				case 36:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
				
				case 37:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
				
				case 38:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
				
				case 39:
					func_357(sParam0, iParam1, iParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
				
				default:
					func_351(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
				
				case 1:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
				
				case 2:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
				
				case 3:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
				
				case 4:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
				
				case 5:
					if (func_356() || func_355())
					{
						iVar1 = 380;
						if (func_354() && (func_353() || func_352()))
						{
							iVar1 = 0;
						}
						func_357(sParam0, iParam1, iParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, iVar1, 3);
					}
					break;
				
				case 6:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
				
				case 7:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
				
				case 8:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
				
				case 9:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
				
				case 10:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
				
				case 11:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
				
				case 12:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
				
				case 13:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
				
				case 14:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
				
				case 15:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
				
				case 16:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
				
				case 17:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
				
				case 18:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
				
				case 19:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
				
				case 20:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
				
				case 21:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
				
				case 22:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
				
				case 23:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
				
				case 24:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
				
				case 25:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
				
				case 26:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
				
				case 27:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
				
				case 28:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
				
				case 29:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
				
				case 30:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
				
				case 31:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
				
				case 32:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
				
				case 33:
					func_357(sParam0, iParam1, iParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
				
				default:
					func_351(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
		
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, round(to_float(20000) * Global_262145.f_2902), 0);
					break;
				
				case 1:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, round(to_float(1400) * Global_262145.f_2903), 2);
					break;
				
				case 2:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, round(to_float(9750) * Global_262145.f_2904), 3);
					break;
				
				case 3:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, round(to_float(2150) * Global_262145.f_2905), 0);
					break;
				
				case 4:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, round(to_float(10000) * Global_262145.f_2906), 0);
					break;
				
				case 54:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, round(to_float(12400) * Global_262145.f_2907), 1);
					break;
				
				case 5:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, round(to_float(3500) * Global_262145.f_2908), 0);
					break;
				
				case 6:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, round(to_float(4950) * Global_262145.f_2909), 2);
					break;
				
				case 55:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, round(to_float(1350) * Global_262145.f_2910), 1);
					break;
				
				case 7:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, round(to_float(1450) * Global_262145.f_2911), 0);
					break;
				
				case 8:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, round(to_float(2700) * Global_262145.f_2912), 7);
					break;
				
				case 9:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, round(to_float(1200) * Global_262145.f_2913), 0);
					break;
				
				case 10:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, round(to_float(1500) * Global_262145.f_2914), 0);
					break;
				
				case 11:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, round(to_float(2650) * Global_262145.f_2915), 0);
					break;
				
				case 56:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, round(to_float(1900) * Global_262145.f_2916), 1);
					break;
				
				case 12:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, round(to_float(4950) * Global_262145.f_2917), 2);
					break;
				
				case 57:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, round(to_float(2400) * Global_262145.f_2918), 1);
					break;
				
				case 58:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, round(to_float(5100) * Global_262145.f_2919), 1);
					break;
				
				case 59:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, round(to_float(7400) * Global_262145.f_2920), 1);
					break;
				
				case 60:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, round(to_float(10000) * Global_262145.f_2921), 1);
					break;
				
				case 17:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, round(to_float(2400) * Global_262145.f_2926), 2);
					break;
				
				case 18:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, round(to_float(5100) * Global_262145.f_2927), 2);
					break;
				
				case 19:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, round(to_float(3600) * Global_262145.f_2928), 2);
					break;
				
				case 20:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, round(to_float(10000) * Global_262145.f_2929), 3);
					break;
				
				case 21:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, round(to_float(12500) * Global_262145.f_2930), 3);
					break;
				
				case 22:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, round(to_float(10000) * Global_262145.f_2931), 3);
					break;
				
				case 23:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, round(to_float(5000) * Global_262145.f_2932), 3);
					break;
				
				case 24:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, round(to_float(7500) * Global_262145.f_2933), 3);
					break;
				
				case 25:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, round(to_float(3750) * Global_262145.f_2934), 2);
					break;
				
				case 26:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, round(to_float(3750) * Global_262145.f_2935), 3);
					break;
				
				case 27:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, round(to_float(4800) * Global_262145.f_2936), 3);
					break;
				
				case 28:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, round(to_float(3500) * Global_262145.f_2937), 3);
					break;
				
				case 61:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, round(to_float(12350) * Global_262145.f_2938), 1);
					break;
				
				case 62:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, round(to_float(1900) * Global_262145.f_2939), 1);
					break;
				
				case 63:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, round(to_float(4500) * Global_262145.f_2940), 1);
					break;
				
				case 64:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, round(to_float(12250) * Global_262145.f_2941), 1);
					break;
				
				case 65:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, round(to_float(12300) * Global_262145.f_2942), 1);
					break;
				
				case 29:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, round(to_float(2500) * Global_262145.f_2943), 0);
					break;
				
				case 30:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, round(to_float(10000) * Global_262145.f_2944), 0);
					break;
				
				case 31:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, round(to_float(10000) * Global_262145.f_2945), 0);
					break;
				
				case 66:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, round(to_float(7500) * Global_262145.f_2946), 1);
					break;
				
				case 32:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, round(to_float(5000) * Global_262145.f_2947), 2);
					break;
				
				case 33:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, round(to_float(7300) * Global_262145.f_2948), 3);
					break;
				
				case 34:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, round(to_float(7250) * Global_262145.f_2949), 2);
					break;
				
				case 35:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, round(to_float(11900) * Global_262145.f_2950), 0);
					break;
				
				case 36:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, round(to_float(2750) * Global_262145.f_2951), 0);
					break;
				
				case 37:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, round(to_float(1750) * Global_262145.f_2952), 0);
					break;
				
				case 38:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, round(to_float(7300) * Global_262145.f_2953), 3);
					break;
				
				case 39:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, round(to_float(3250) * Global_262145.f_2954), 2);
					break;
				
				case 40:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, round(to_float(1000) * Global_262145.f_2955), 0);
					break;
				
				case 67:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, round(to_float(5000) * Global_262145.f_2956), 1);
					break;
				
				case 41:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, round(to_float(7500) * Global_262145.f_2957), 2);
					break;
				
				case 68:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, round(to_float(5100) * Global_262145.f_2958), 1);
					break;
				
				case 42:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, round(to_float(5050) * Global_262145.f_2959), 0);
					break;
				
				case 43:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, round(to_float(2450) * Global_262145.f_2960), 2);
					break;
				
				case 44:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, round(to_float(4950) * Global_262145.f_2961), 0);
					break;
				
				case 45:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, round(to_float(5100) * Global_262145.f_2962), 0);
					break;
				
				case 46:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, round(to_float(12250) * Global_262145.f_2963), 0);
					break;
				
				case 47:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, round(to_float(1150) * Global_262145.f_2964), 3);
					break;
				
				case 48:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, round(to_float(7500) * Global_262145.f_2965), 3);
					break;
				
				case 49:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, round(to_float(7600) * Global_262145.f_2966), 3);
					break;
				
				case 50:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, round(to_float(2600) * Global_262145.f_2967), 2);
					break;
				
				case 51:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, round(to_float(2500) * Global_262145.f_2968), 3);
					break;
				
				case 52:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, round(to_float(7450) * Global_262145.f_2969), 3);
					break;
				
				case 53:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, round(to_float(7500) * Global_262145.f_2970), 0);
					break;
				
				case 69:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, round(to_float(10000) * Global_262145.f_2971), 1);
					break;
				
				case 70:
					func_357(sParam0, iParam1, iParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, round(to_float(2500) * Global_262145.f_2972), 2);
					break;
			}
			if (iVar0 == joaat("mp_m_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 86:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 90:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 91:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 124:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 125:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, round(to_float(100) * Global_262145.f_2973), 0);
						break;
					
					case 88:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, round(to_float(100) * Global_262145.f_2974), 0);
						break;
					
					case 89:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, round(to_float(100) * Global_262145.f_2975), 0);
						break;
					
					case 93:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_357(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round(to_float(5000) * Global_262145.f_2922), 0);
						break;
					
					case 14:
						func_357(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round(to_float(10000) * Global_262145.f_2923), 0);
						break;
					
					case 15:
						func_357(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round(to_float(10000) * Global_262145.f_2924), 2);
						break;
					
					case 16:
						func_357(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round(to_float(5000) * Global_262145.f_2925), 0);
						break;
					
					case 71:
						func_357(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_E", "crewLogo", iParam2, round(to_float(10000) * Global_262145.f_2925), 0);
						break;
					
					case 72:
						func_357(sParam0, iParam1, iParam3, "TAT_FMM_CLB", "multiplayer_overlays", "000_F", "crewLogo", iParam2, round(to_float(10000) * Global_262145.f_2925), 0);
						break;
				}
			}
			else if (iVar0 == joaat("mp_f_freemode_01"))
			{
				switch (iParam1)
				{
					case 73:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 74:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 75:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 76:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 77:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 78:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 79:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 80:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 81:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 82:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 83:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 84:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 85:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 92:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
					
					case 87:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, round(to_float(100) * Global_262145.f_2973), 0);
						break;
					
					case 88:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, round(to_float(100) * Global_262145.f_2974), 0);
						break;
					
					case 89:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, round(to_float(100) * Global_262145.f_2975), 0);
						break;
					
					case 93:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 94:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 95:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 96:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 97:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 98:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 99:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 100:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 101:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 102:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 103:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 104:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 105:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 106:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 107:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 108:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 109:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 110:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 111:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 112:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 113:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 114:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 115:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 116:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 117:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 118:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 119:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 120:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 121:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 122:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 123:
						func_357(sParam0, iParam1, iParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
					
					case 13:
						func_357(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_A", "crewLogo", iParam2, round(to_float(5000) * Global_262145.f_2922), 0);
						break;
					
					case 14:
						func_357(sParam0, iParam1, iParam3, "TAT_FM_100", "multiplayer_overlays", "000_B", "crewLogo", iParam2, round(to_float(5000) * Global_262145.f_2923), 0);
						break;
					
					case 15:
						func_357(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_C", "crewLogo", iParam2, round(to_float(10000) * Global_262145.f_2924), 2);
						break;
					
					case 16:
						func_357(sParam0, iParam1, iParam3, "TAT_FM_101", "multiplayer_overlays", "000_D", "crewLogo", iParam2, round(to_float(10000) * Global_262145.f_2925), 0);
						break;
					}
			}
			break;
	}
	if ((iParam2 == 3 || iParam2 == 4) && iParam1 >= 129)
	{
		func_351(sParam0, iParam2, iParam1, 129);
	}
	if (iParam4 == 22)
	{
		*sParam0.f_7 *= 2;
	}
	return *sParam0.f_11 != -1;
}

void func_351(char* sParam0, int iParam1, int iParam2, int iParam3)
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

bool func_352()
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

bool func_353()
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

bool func_354()
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

bool func_355()
{
	return true;
}

bool func_356()
{
	return true;
}

void func_357(char* sParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9)
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

void func_358(int iParam0, int iParam1, int iParam2)
{
	if (iParam1)
	{
		if (!func_362(iParam0, iParam2))
		{
			func_359(iParam0, 1, iParam2);
		}
	}
	else if (func_362(iParam0, iParam2))
	{
		func_359(iParam0, 0, iParam2);
	}
}

void func_359(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_361(iParam0, iParam2);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (iParam1)
		{
			set_bit(&iVar0, func_143(iVar1));
		}
		else
		{
			clear_bit(&iVar0, func_143(iVar1));
		}
		func_534(func_360(iParam0), iVar0, iParam2, 1);
	}
}

int func_360(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = func_147(iVar0);
	if ((func_21() == 0 || func_146() == 0) || (func_21() == 999 && func_146() == 999))
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

var func_361(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_17(func_360(iParam0), iParam1, 0);
	return uVar0;
}

int func_362(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_361(iParam0, iParam1);
	iVar1 = func_143(iParam0);
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return false;
	}
	return is_bit_set(iVar0, iVar1);
}

int func_363(int iParam0)
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

void func_364(int iParam0, int iParam1, int iParam2)
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
		iVar14 = func_363(iParam0);
		iVar15 = func_386(iParam0);
		iVar16 = func_384(iParam0);
		iVar17 = func_367(iParam0);
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
			if (func_362(iVar18, iVar0))
			{
				if (func_350(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (func_366(&Var1, Var1.f_4, Var1.f_8, iVar15, iVar16, iParam1, iVar17))
					{
						_set_ped_decoration(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (func_362(123, iVar0))
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
					if (func_362(iVar36, iVar0))
					{
						if (func_366(&(Var21.f_7), Var21.f_2, Var21.f_6, iVar15, iVar16, iParam1, iVar17))
						{
							_set_ped_decoration(iParam0, Var21.f_2, Var21.f_3);
							func_365(iParam0, Var21.f_2, Var21.f_3);
						}
					}
				}
			}
			iVar19++;
		}
	}
}

void func_365(int iParam0, int iParam1, int iParam2)
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

bool func_366(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
							if (func_362(13, -1))
							{
								return false;
							}
							else if (func_362(14, -1))
							{
								return false;
							}
							else if (func_362(15, -1))
							{
								return false;
							}
							else if (func_362(16, -1))
							{
							}
							else if (func_362(71, -1))
							{
								return false;
							}
							else if (func_362(72, -1))
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
							if (func_362(13, -1))
							{
								return false;
							}
							else if (func_362(14, -1))
							{
								return false;
							}
							else if (func_362(15, -1))
							{
								return false;
							}
							else if (func_362(16, -1))
							{
								return false;
							}
							else if (func_362(71, -1))
							{
								return false;
							}
							else if (func_362(72, -1))
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
							if (func_362(13, -1))
							{
							}
							else if (func_362(14, -1))
							{
								return false;
							}
							else if (func_362(15, -1))
							{
								return false;
							}
							else if (func_362(16, -1))
							{
							}
							else if (func_362(71, -1))
							{
								return false;
							}
							else if (func_362(72, -1))
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
						if (func_362(13, -1))
						{
							return false;
						}
						else if (func_362(14, -1))
						{
							return false;
						}
						else if (func_362(15, -1))
						{
							return false;
						}
						else if (func_362(16, -1))
						{
						}
						else if (func_362(71, -1))
						{
						}
						else if (func_362(72, -1))
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
							if (func_362(13, -1))
							{
							}
							else if (func_362(14, -1))
							{
							}
							else if (func_362(15, -1))
							{
							}
							else if (func_362(16, -1))
							{
							}
							else if (func_362(71, -1))
							{
							}
							else if (func_362(72, -1))
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

bool func_367(int iParam0)
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
			iVar2 = func_17(1749, -1, 0);
			if (iVar0 > 15)
			{
				iVar3 = func_368(iParam0, 11, -1);
				if (iVar3 >= 256)
				{
					iVar4 = func_92(joaat("mp_f_freemode_01"), iVar3, 11, 4);
					if ((_0x341DE7ED1D2A1BFD(iVar4, 1113995558, false) || _0x341DE7ED1D2A1BFD(iVar4, -1467682989, false)) || _0x341DE7ED1D2A1BFD(iVar4, 362493804, false))
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
			iVar2 = func_17(1749, -1, 0);
			if (iVar0 == 3)
			{
				if (iVar1 == 14)
				{
					return true;
				}
			}
			else if (iVar0 > 15)
			{
				iVar5 = func_368(iParam0, 11, -1);
				if (iVar5 >= 256)
				{
					iVar6 = func_92(joaat("mp_f_freemode_01"), iVar5, 11, 4);
					if ((_0x341DE7ED1D2A1BFD(iVar6, 1113995558, false) || _0x341DE7ED1D2A1BFD(iVar6, -1467682989, false)) || _0x341DE7ED1D2A1BFD(iVar6, 362493804, false))
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

int func_368(int iParam0, int iParam1, int iParam2)
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
				if (func_369(iParam0, iParam1, iVar0))
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
				if (func_369(iParam0, iParam1, iVar1))
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
				return func_95(iParam0, iParam2);
			}
		}
		else
		{
			return func_88(iParam0, iParam1);
		}
	}
	return -99;
}

int func_369(int iParam0, int iParam1, int iParam2)
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
	Global_69311[1 /*14*/] = {func_117(iVar0, iParam1, iParam2)};
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!is_bit_set(Global_69311[1 /*14*/].f_6, false))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = {func_380(iVar0, iParam2)};
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
				if (!func_369(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar24 = {func_377(iVar0, uVar8[iVar4])};
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_369(iParam0, 14, uVar24[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_69311[2 /*14*/] = {func_117(iVar0, 14, iVar6)};
									if (Global_69311[2 /*14*/].f_12 == iVar5)
									{
										if (func_369(iParam0, 14, iVar6))
										{
											if (!func_373(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_69311[2 /*14*/])))
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
						iVar1 = func_88(iParam0, iVar4);
						Global_69311[2 /*14*/] = {func_117(iVar0, iVar4, iVar1)};
						if (!func_373(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_69311[2 /*14*/])))
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
			if (func_17(1749, Global_69309, 0) != uVar8[10])
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
		uVar35 = {func_377(iVar0, iParam2)};
		iVar34 = 0;
		while (iVar34 <= 8)
		{
			if (!func_369(iParam0, 14, uVar35[iVar34]))
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
		if (Global_69311[1 /*14*/].f_3 == get_ped_drawable_variation(iParam0, func_90(iParam1)) && Global_69311[1 /*14*/].f_4 == get_ped_texture_variation(iParam0, func_90(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			if (func_372(iVar0, 11, func_88(iParam0, 11)))
			{
				if (func_371(iVar0, 4, iParam2, &uVar45))
				{
					return func_369(iParam0, 4, uVar45);
				}
			}
			else if (func_370(iVar0, 4, iParam2, &uVar45))
			{
				return func_369(iParam0, 4, uVar45);
			}
		}
	}
	return 0;
}

bool func_370(int iParam0, int iParam1, int iParam2, var uParam3)
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
						iVar0 = func_92(iParam0, iParam2, iParam1, 4);
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
										if (!_0x341DE7ED1D2A1BFD(iVar3, -1100807313, false))
										{
											*uParam3 = func_98(iParam0, iVar3, iParam1, 4);
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

bool func_371(int iParam0, int iParam1, int iParam2, var uParam3)
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
						iVar0 = func_92(iParam0, iParam2, iParam1, 4);
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
										if (_0x341DE7ED1D2A1BFD(iVar3, -1100807313, false))
										{
											*uParam3 = func_98(iParam0, iVar3, iParam1, 4);
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

int func_372(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						return _0x341DE7ED1D2A1BFD(func_92(iParam0, iParam2, 11, 4), -530089825, false);
					}
					break;
			}
			break;
	}
	return false;
}

bool func_373(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
		uVar0 = {func_377(iParam0, *uParam4[13])};
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
	if (func_376(iParam0, iParam2, iParam3))
	{
		return true;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_375(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return false;
			}
			return true;
		}
		else if (func_91(iParam0, iParam2, iParam3))
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
		else if (func_374(iParam0, iParam2, iParam3))
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
		if (func_375(iParam0, iParam2, iParam3))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return false;
			}
			return true;
		}
		else if (func_91(iParam0, iParam2, iParam3))
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
		else if (func_374(iParam0, iParam2, iParam3))
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
		if (func_375(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return false;
			}
			return true;
		}
		else if (func_91(iParam0, iParam2, iParam3))
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
		else if (func_374(iParam0, iParam2, iParam3))
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

int func_374(int iParam0, int iParam1, int iParam2)
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
						return (_0x341DE7ED1D2A1BFD(func_92(iParam0, iParam2, 14, 3), -1757550583, true) || _0x341DE7ED1D2A1BFD(func_92(iParam0, iParam2, 14, 3), -1842686353, true));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (_0x341DE7ED1D2A1BFD(func_92(iParam0, iParam2, 1, 3), -1757550583, false) || _0x341DE7ED1D2A1BFD(func_92(iParam0, iParam2, 1, 3), -1842686353, false));
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
						return (_0x341DE7ED1D2A1BFD(func_92(iParam0, iParam2, 14, 4), -1757550583, true) || _0x341DE7ED1D2A1BFD(func_92(iParam0, iParam2, 14, 4), -1842686353, true));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (_0x341DE7ED1D2A1BFD(func_92(iParam0, iParam2, 1, 4), -1757550583, false) || _0x341DE7ED1D2A1BFD(func_92(iParam0, iParam2, 1, 4), -1842686353, false));
					}
					break;
			}
			break;
	}
	return false;
}

int func_375(int iParam0, int iParam1, int iParam2)
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
					return _0x341DE7ED1D2A1BFD(func_92(iParam0, iParam2, 14, 3), 97230661, true);
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
					return _0x341DE7ED1D2A1BFD(func_92(iParam0, iParam2, 14, 4), 97230661, true);
				}
			}
			break;
	}
	return false;
}

bool func_376(int iParam0, int iParam1, int iParam2)
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

struct<10> func_377(int iParam0, int iParam1)
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
					func_379(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_379(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_379(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_379(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_379(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_379(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_379(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_379(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_379(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_379(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_379(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_378(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_379(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_379(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_379(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_379(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_379(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_379(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_379(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_379(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_379(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_379(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_378(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_379(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_379(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_379(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_379(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_379(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_379(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_379(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_379(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_379(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_379(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_378(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_379(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_379(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_379(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_379(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_379(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_379(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_379(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_379(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_379(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_379(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_379(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_379(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_379(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_379(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_379(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_379(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_379(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_379(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_379(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_379(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_379(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_379(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_379(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_379(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_379(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_379(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_378(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_379(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_379(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_379(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_379(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_379(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_379(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_379(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_379(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_379(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_379(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_379(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_379(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_379(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_379(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_379(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_379(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_379(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_379(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_379(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_379(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_379(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_379(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_379(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_379(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_379(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_378(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_378(int iParam0, int iParam1, int iParam2, int iParam3)
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
						*iParam0[vVar16.z] = func_98(iParam1, vVar16.x, 14, iVar0);
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

void func_379(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

struct<16> func_380(int iParam0, int iParam1)
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
						func_383(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_383(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_383(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_383(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_383(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_383(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_383(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[0], Global_101154.f_1826.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_383(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_383(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_383(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_383(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_383(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_383(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_383(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_383(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_383(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_383(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_383(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_383(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_383(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_383(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_383(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_383(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_383(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_383(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_383(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_383(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_383(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_383(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_383(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_383(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_383(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_383(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_383(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_383(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_383(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_383(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_383(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_383(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_383(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_383(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_383(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_383(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_383(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_383(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_383(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_383(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_383(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_383(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_383(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_383(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_383(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_383(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_383(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_381(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_383(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_383(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_383(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[1], Global_101154.f_1826.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_383(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_383(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_383(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_383(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_383(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_383(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_383(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_383(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_383(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_383(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_383(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_383(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_383(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_383(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_383(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_383(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_383(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_383(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_383(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_383(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_383(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_383(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_383(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_383(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_383(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_383(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_383(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_383(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_383(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_383(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_383(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_383(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_383(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_383(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_383(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_383(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_383(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_383(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_383(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_383(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_383(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_383(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_383(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_383(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_381(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_383(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_383(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_383(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_383(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_383(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[2], Global_101154.f_1826.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_383(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_383(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_383(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_383(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_383(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_383(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_383(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_383(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_383(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_383(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_383(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_383(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_383(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_383(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_383(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_383(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_383(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_383(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_383(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_383(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_383(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_383(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_383(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_383(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_383(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_383(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_383(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_383(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_383(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_383(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_383(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_383(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_383(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_383(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_383(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_383(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_383(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_383(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_383(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_383(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_383(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_383(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_383(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_381(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_383(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_383(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_383(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_383(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_383(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_383(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_383(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_383(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_383(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_383(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_383(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_383(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_383(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_383(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_383(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_383(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_383(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_383(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_383(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_383(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_383(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_383(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_383(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_383(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_383(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_383(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_381(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_383(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_383(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_383(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_383(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_383(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_383(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_383(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_383(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_383(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_383(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_383(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_383(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_383(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_383(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_383(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_383(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_383(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_383(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_383(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_383(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_383(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_383(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_383(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_383(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_383(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_383(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_383(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_383(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_381(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_381(int iParam0, int iParam1, int iParam2, int iParam3)
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
						*iParam0[func_382(vVar16.z)] = vVar16.x;
					}
					else
					{
						*iParam0[func_382(vVar16.z)] = func_98(iParam1, vVar16.x, func_382(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1)
				{
					*iParam0[func_382(vVar16.z)] = vVar16.y;
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

int func_382(int iParam0)
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

void func_383(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

bool func_384(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1587523[player_id() /*444*/].f_88.f_28;
	if (iVar0 != -1 && iVar0 < 4)
	{
		if (func_385(iVar0) != -1 && func_385(iVar0) != 0)
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

int func_385(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return -1;
	}
	return Global_2435528.f_5734[iParam0];
}

bool func_386(int iParam0)
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
							iVar2 = func_388(joaat("mp_f_freemode_01"), 11, func_368(iParam0, 11, -1), 0);
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
						iVar3 = func_368(iParam0, 11, -1);
						if (iVar3 >= 237)
						{
							iVar4 = func_92(joaat("mp_m_freemode_01"), iVar3, 11, 3);
							if ((_0x341DE7ED1D2A1BFD(iVar4, 1113995558, false) || _0x341DE7ED1D2A1BFD(iVar4, -1467682989, false)) || _0x341DE7ED1D2A1BFD(iVar4, 362493804, false))
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
						iVar5 = func_368(iParam0, 8, -1);
						if (iVar5 >= 241)
						{
							iVar6 = func_92(joaat("mp_m_freemode_01"), iVar5, 8, 3);
							if ((_0x341DE7ED1D2A1BFD(iVar6, 1113995558, false) || _0x341DE7ED1D2A1BFD(iVar6, -1467682989, false)) || _0x341DE7ED1D2A1BFD(iVar6, 362493804, false))
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
							iVar7 = func_388(joaat("mp_f_freemode_01"), 11, func_368(iParam0, 11, -1), 0);
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
						iVar8 = func_368(iParam0, 11, -1);
						if (iVar8 >= 256)
						{
							iVar9 = func_92(joaat("mp_f_freemode_01"), iVar8, 11, 4);
							if ((_0x341DE7ED1D2A1BFD(iVar9, 1113995558, false) || _0x341DE7ED1D2A1BFD(iVar9, -1467682989, false)) || _0x341DE7ED1D2A1BFD(iVar9, 362493804, false))
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
							iVar10 = func_388(joaat("mp_f_freemode_01"), 11, func_368(iParam0, 11, -1), 0);
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
							iVar11 = func_388(joaat("mp_f_freemode_01"), 11, func_368(iParam0, 11, -1), 0);
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
						iVar12 = func_368(iParam0, 8, -1);
						if (iVar12 >= 136)
						{
							iVar13 = func_92(joaat("mp_f_freemode_01"), iVar12, 8, 4);
							if ((_0x341DE7ED1D2A1BFD(iVar13, 1113995558, false) || _0x341DE7ED1D2A1BFD(iVar13, -1467682989, false)) || _0x341DE7ED1D2A1BFD(iVar13, 362493804, false))
							{
		}