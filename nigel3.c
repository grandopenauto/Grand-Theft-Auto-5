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
	char* sLocal_20 = 0;
	float fLocal_21 = 0;
	Vector3 vLocal_22 = 0;
	float fLocal_25 = 0;
	float fLocal_26 = 0;
	auto uLocal_27 = 0;
	auto uLocal_28 = 0;
	auto uLocal_29 = 0;
	float fLocal_30 = 0;
	float fLocal_31 = 0;
	float fLocal_32 = 0;
	auto uLocal_33 = 0;
	auto uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	struct<4>[] Local_37 = new struct<4>[10];
	int iLocal_78 = 0;
	auto uLocal_79 = 0;
	auto uLocal_80 = 0;
	auto uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	auto uLocal_84 = 0;
	auto uLocal_85 = 0;
	auto uLocal_86 = 0;
	auto uLocal_87 = 0;
	auto uLocal_88 = 0;
	auto uLocal_89 = 0;
	auto uLocal_90 = 0;
	auto uLocal_91 = 0;
	auto uLocal_92 = 0;
	auto uLocal_93 = 0;
	auto uLocal_94 = 0;
	auto uLocal_95 = 0;
	struct<61> Local_96 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	struct<6> Local_165 = 0;
	auto uLocal_171 = 0;
	auto uLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	char* sLocal_179 = 0;
	char* sLocal_180 = 0;
	int iLocal_181 = 0;
	char* sLocal_182 = 0;
	int iLocal_183 = 0;
	Vector3 vLocal_184 = 0;
	Vector3 vLocal_187 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	Vector3 vLocal_195 = 0;
	int[] iLocal_198 = new int[3];
	struct<7>[] Local_202 = new struct<7>[3];
	Vector3 vLocal_224 = 0;
	float fLocal_227 = 0;
	float fLocal_228 = 0;
	int[] iLocal_229 = new int[2];
	Vector3[] vLocal_232 = new Vector3[4];
	Vector3[] vLocal_245 = new Vector3[4];
	var[] uLocal_258 = new var[2];
	struct<7>[] Local_261 = new struct<7>[2];
	var[] uLocal_276 = new var[2];
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	char* sLocal_283 = 0;
	Vector3 vLocal_284 = 0;
	Vector3 vLocal_287 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	Vector3 vLocal_295 = 0;
	struct<8> Local_298 = 2;
	struct<8> Local_306 = 2;
	int iLocal_314 = 0;
	struct<8>[] Local_315 = new struct<8>[4];
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	auto uLocal_350 = 16;
	auto uLocal_351 = 0;
	auto uLocal_352 = 0;
	auto uLocal_353 = 0;
	auto uLocal_354 = 0;
	auto uLocal_355 = 0;
	auto uLocal_356 = 0;
	auto uLocal_357 = 0;
	auto uLocal_358 = 0;
	auto uLocal_359 = 0;
	auto uLocal_360 = 0;
	auto uLocal_361 = 0;
	auto uLocal_362 = 0;
	auto uLocal_363 = 0;
	auto uLocal_364 = 0;
	auto uLocal_365 = 0;
	auto uLocal_366 = 0;
	auto uLocal_367 = 0;
	auto uLocal_368 = 0;
	auto uLocal_369 = 0;
	auto uLocal_370 = 0;
	auto uLocal_371 = 0;
	auto uLocal_372 = 0;
	auto uLocal_373 = 0;
	auto uLocal_374 = 0;
	auto uLocal_375 = 0;
	auto uLocal_376 = 0;
	auto uLocal_377 = 0;
	auto uLocal_378 = 0;
	auto uLocal_379 = 0;
	auto uLocal_380 = 0;
	auto uLocal_381 = 0;
	auto uLocal_382 = 0;
	auto uLocal_383 = 0;
	auto uLocal_384 = 0;
	auto uLocal_385 = 0;
	auto uLocal_386 = 0;
	auto uLocal_387 = 0;
	auto uLocal_388 = 0;
	auto uLocal_389 = 0;
	auto uLocal_390 = 0;
	auto uLocal_391 = 0;
	auto uLocal_392 = 0;
	auto uLocal_393 = 0;
	auto uLocal_394 = 0;
	auto uLocal_395 = 0;
	auto uLocal_396 = 0;
	auto uLocal_397 = 0;
	auto uLocal_398 = 0;
	auto uLocal_399 = 0;
	auto uLocal_400 = 0;
	auto uLocal_401 = 0;
	auto uLocal_402 = 0;
	auto uLocal_403 = 0;
	auto uLocal_404 = 0;
	auto uLocal_405 = 0;
	auto uLocal_406 = 0;
	auto uLocal_407 = 0;
	auto uLocal_408 = 0;
	auto uLocal_409 = 0;
	auto uLocal_410 = 0;
	auto uLocal_411 = 0;
	auto uLocal_412 = 0;
	auto uLocal_413 = 0;
	auto uLocal_414 = 0;
	auto uLocal_415 = 0;
	auto uLocal_416 = 0;
	auto uLocal_417 = 0;
	auto uLocal_418 = 0;
	auto uLocal_419 = 0;
	auto uLocal_420 = 0;
	auto uLocal_421 = 0;
	auto uLocal_422 = 0;
	auto uLocal_423 = 0;
	auto uLocal_424 = 0;
	auto uLocal_425 = 0;
	auto uLocal_426 = 0;
	auto uLocal_427 = 0;
	auto uLocal_428 = 0;
	auto uLocal_429 = 0;
	auto uLocal_430 = 0;
	auto uLocal_431 = 0;
	auto uLocal_432 = 0;
	auto uLocal_433 = 0;
	auto uLocal_434 = 0;
	auto uLocal_435 = 0;
	auto uLocal_436 = 0;
	auto uLocal_437 = 0;
	auto uLocal_438 = 0;
	auto uLocal_439 = 0;
	auto uLocal_440 = 0;
	auto uLocal_441 = 0;
	auto uLocal_442 = 0;
	auto uLocal_443 = 0;
	auto uLocal_444 = 0;
	auto uLocal_445 = 0;
	auto uLocal_446 = 0;
	auto uLocal_447 = 0;
	auto uLocal_448 = 0;
	auto uLocal_449 = 0;
	auto uLocal_450 = 0;
	auto uLocal_451 = 0;
	auto uLocal_452 = 0;
	auto uLocal_453 = 0;
	auto uLocal_454 = 0;
	auto uLocal_455 = 0;
	auto uLocal_456 = 0;
	auto uLocal_457 = 0;
	auto uLocal_458 = 0;
	auto uLocal_459 = 0;
	auto uLocal_460 = 0;
	auto uLocal_461 = 0;
	auto uLocal_462 = 0;
	auto uLocal_463 = 0;
	auto uLocal_464 = 0;
	auto uLocal_465 = 0;
	auto uLocal_466 = 0;
	auto uLocal_467 = 0;
	auto uLocal_468 = 0;
	auto uLocal_469 = 0;
	auto uLocal_470 = 0;
	auto uLocal_471 = 0;
	auto uLocal_472 = 0;
	auto uLocal_473 = 0;
	auto uLocal_474 = 0;
	auto uLocal_475 = 0;
	auto uLocal_476 = 0;
	auto uLocal_477 = 0;
	auto uLocal_478 = 0;
	auto uLocal_479 = 0;
	auto uLocal_480 = 0;
	auto uLocal_481 = 0;
	auto uLocal_482 = 0;
	auto uLocal_483 = 0;
	auto uLocal_484 = 0;
	auto uLocal_485 = 0;
	auto uLocal_486 = 0;
	auto uLocal_487 = 0;
	auto uLocal_488 = 0;
	auto uLocal_489 = 0;
	auto uLocal_490 = 0;
	auto uLocal_491 = 0;
	auto uLocal_492 = 0;
	auto uLocal_493 = 0;
	auto uLocal_494 = 0;
	auto uLocal_495 = 0;
	auto uLocal_496 = 0;
	auto uLocal_497 = 0;
	auto uLocal_498 = 0;
	auto uLocal_499 = 0;
	auto uLocal_500 = 0;
	auto uLocal_501 = 0;
	auto uLocal_502 = 0;
	auto uLocal_503 = 0;
	auto uLocal_504 = 0;
	auto uLocal_505 = 0;
	auto uLocal_506 = 0;
	auto uLocal_507 = 0;
	auto uLocal_508 = 0;
	auto uLocal_509 = 0;
	auto uLocal_510 = 0;
	auto uLocal_511 = 0;
	auto uLocal_512 = 0;
	auto uLocal_513 = 0;
	auto uLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	int iLocal_522 = 0;
	int iLocal_523 = 0;
	float fLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	int iLocal_527 = 0;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	int iLocal_536 = 0;
	int iLocal_537 = 0;
	int iLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	int iLocal_542 = 0;
	Vector3 vLocal_543 = 0;
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	int[] iLocal_548 = new int[4];
	int[] iLocal_553 = new int[2];
	float fLocal_556 = 0;
	struct<8> Local_557 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	struct<8>[] Local_569 = new struct<8>[3];
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	char*[] sLocal_596 = new char*[6];
	int iLocal_603 = 0;
	auto uLocal_604 = 0;
	char* sLocal_605 = 0;
	auto uLocal_606 = 0;
	auto uLocal_607 = 0;
	auto uLocal_608 = 0;
	auto uLocal_609 = 0;
	auto uLocal_610 = 0;
	char* sLocal_611 = 0;
	auto uLocal_612 = 0;
	auto uLocal_613 = 0;
	auto uLocal_614 = 0;
	auto uLocal_615 = 0;
	auto uLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	float fLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	var[] uLocal_633 = new var[2];
	var[] uLocal_636 = new var[2];
	var[] uLocal_639 = new var[2];
	int[] iLocal_642 = new int[2];
	int iLocal_645 = 0;
	int iLocal_646 = 0;
	int iLocal_647 = 0;
	int iLocal_648 = 0;
	auto uLocal_649 = 0;
	auto uLocal_650 = 0;
	auto uLocal_651 = -1;
	auto uLocal_652 = 0;
	auto uLocal_653 = 0;
	auto uLocal_654 = 0;
	auto uLocal_655 = 0;
	auto uLocal_656 = 0;
	auto uLocal_657 = 0;
	auto uLocal_658 = 1000;
	auto uLocal_659 = 1000;
	auto uLocal_660 = 0;
	int iLocal_661 = 0;
	int iLocal_662 = 0;
	struct<8>[] Local_663 = new struct<8>[4];
	int iLocal_696 = 0;
	int iLocal_697 = 0;
	char* sLocal_698 = 0;
	struct<61> Local_699 = 0;
#endregion

void main()
{
	int iVar0;
	
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	uLocal_80 = func_563(64);
	uLocal_81 = func_563(63);
	iLocal_82 = joaat("u_m_m_aldinapoli");
	iLocal_83 = joaat("premier");
	iLocal_160 = 1;
	sLocal_179 = "rcmnigel3_idles";
	sLocal_180 = "base_nig";
	sLocal_182 = "base_mst";
	vLocal_184 = {0.198f, 0.074f, 0.358f};
	vLocal_187 = {12.24f, -173.52f, 130.32f};
	vLocal_195 = {-44.75f, -1288.675f, 28.2104f};
	vLocal_224 = {0f, -2.2f, 0.5f};
	fLocal_227 = 8f;
	fLocal_228 = 9f;
	sLocal_283 = "rcmnigel3_trunk";
	iLocal_292 = joaat("p_banknote_s");
	vLocal_295 = {2611.021f, 1655.5f, 26.6356f};
	iLocal_314 = true;
	iLocal_568 = 1;
	fLocal_628 = 300f;
	iLocal_630 = 500;
	Local_96 = {Local_699};
	func_561(&Local_96);
	set_mission_flag(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_560("Force cleanup [TERMINATING]");
		func_544(1);
		if (iLocal_157 == 9)
		{
			func_543(1, 1, 1, 0);
		}
		func_541();
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_96.f_28[0]))
	{
		func_540(&iLocal_176, &(Local_96.f_28[0]));
	}
	func_539(&(Local_96.f_28[1]));
	func_527();
	if (func_526())
	{
		iVar0 = func_525();
		if (Global_85788)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				func_520(1);
				break;
			
			case 1:
				func_518(1);
				break;
			
			case 2:
				func_510(1);
				break;
			
			default:
				break;
			}
	}
	while (true)
	{
		_0x208784099002BC30("SF_VSTLA", 0);
		func_494(Local_96.f_9, 0, 0, 0, 0, 0);
		if (iLocal_157 == 13)
		{
			func_489();
		}
		else if (!func_487())
		{
			func_462();
			func_461();
			switch (iLocal_157)
			{
				case 0:
					func_459();
					break;
				
				case 1:
					func_453();
					break;
				
				case 2:
					func_391();
					break;
				
				case 3:
					func_390();
					break;
				
				case 4:
					func_385();
					break;
				
				case 11:
					func_384();
					break;
				
				case 5:
					func_368();
					break;
				
				case 6:
					func_273();
					break;
				
				case 7:
					func_272();
					break;
				
				case 8:
					func_242();
					break;
				
				case 9:
					func_222();
					break;
				
				case 10:
					func_204();
					break;
				
				case 12:
					func_1();
					break;
				}
		}
		wait(0);
	}
}

void func_1()
{
	iLocal_532 = 0;
	if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_17264.f_382, 5))
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_17264.f_382), 5);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_176))
	{
		if (!is_entity_on_screen(iLocal_176) || is_entity_occluded(iLocal_176))
		{
			func_539(&iLocal_176);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_177))
	{
		if (!is_entity_on_screen(iLocal_177) || is_entity_occluded(iLocal_177))
		{
			func_203(&iLocal_178);
			func_539(&iLocal_177);
		}
	}
	func_2();
}

void func_2()
{
	if (!iLocal_532)
	{
		func_539(&iLocal_175);
		func_202(101, 1);
		stat_set_bool(joaat("sp_killed_al"), true, 1);
	}
	if (!iLocal_314)
	{
		set_random_trains(1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_557))
	{
		func_201(&(Local_557.f_6), 1, 0, 1);
		set_mission_train_as_no_longer_needed(&Local_557, 0);
	}
	func_3(101, 1);
	func_541();
}

void func_3(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_199();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_100241[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_100241[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_100241[iVar0 /*10*/].f_6)
	{
		return;
	}
	func_170(iVar0, 0);
	GAMEPLAY::GAMEPLAY::SET_BIT(&Global_69737, true);
	if (Global_100241[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		func_169(&(Global_100241[iVar0 /*10*/].f_9));
	}
	if (iParam1)
	{
		if (is_player_playing(player_id()))
		{
			set_player_wanted_level(player_id(), false, 0);
			set_player_wanted_level_now(player_id(), 0);
			start_firing_amnesty(5000);
		}
	}
	func_157(iVar0, 1, 0, 0);
	func_156(0, 0);
	MemCopy(&sVar1, {func_154(iVar0)}, 4);
	func_151(&sVar1, func_152());
	func_31();
	if (GAMEPLAY::IS_BIT_SET(Global_101154.f_8706.f_25, 3))
	{
		func_30();
	}
	func_12();
	if (iParam0 == 210 || iParam0 == 211)
	{
		func_6(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		func_6(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		func_6(iParam0, 0, 0);
	}
	func_4();
}

bool func_4()
{
	if (func_5(0))
	{
		return false;
	}
	if (Global_91317.f_8)
	{
		if (Global_91317.f_10 > 0)
		{
			return false;
		}
	}
	else if (Global_91317.f_10 > 1)
	{
		return false;
	}
	Global_91317.f_10++;
	return true;
}

int func_5(int iParam0)
{
	if (!iParam0 && _get_number_of_instances_of_streamed_script(joaat("benchmark")) > 0)
	{
		return true;
	}
	return GAMEPLAY::IS_BIT_SET(Global_69737, false);
}

void func_6(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_10(891 + iParam0, 1, -1, 1);
	}
	iVar0 = true;
	if (Global_101154.f_8884[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101154.f_8884[iParam0 /*12*/].f_6 == 11 || Global_101154.f_8884[iParam0 /*12*/].f_6 == 12)
		{
			iVar0 = false;
		}
	}
	else
	{
		Global_101154.f_8884[iParam0 /*12*/].f_5 = 1;
		Global_101154.f_8884[iParam0 /*12*/].f_10 = iParam1;
		Global_101154.f_8884[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (iVar0)
	{
		func_7();
	}
}

void func_7()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	Vector3 fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_100890 = 0;
	Global_100891 = 0;
	Global_100892 = 0;
	Global_100893 = 0;
	Global_100894 = 0;
	Global_100895 = 0;
	Global_100896 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101154.f_8884.f_3853;
	Global_101154.f_8884.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101154.f_8884[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101154.f_8884[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_100890++;
					fVar1 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 3:
					Global_100891++;
					fVar2 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 5:
					Global_100892++;
					fVar3 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 7:
					Global_100893++;
					fVar4 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 9:
					Global_100894++;
					fVar5 += Global_101154.f_8884[iVar0 /*12*/].f_4 * 4f;
					break;
				
				case 11:
					Global_100895++;
					fVar6 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				case 13:
					Global_100896++;
					fVar7 += Global_101154.f_8884[iVar0 /*12*/].f_4;
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_100873 > 0)
	{
		if (Global_100890 == Global_100873)
		{
			fVar1 = 55f;
		}
	}
	if (Global_100874 > 0)
	{
		if (Global_100891 == Global_100874)
		{
			fVar2 = 10f;
		}
	}
	if (Global_100875 > 0)
	{
		if (Global_100892 == Global_100875)
		{
			fVar3 = 0f;
		}
	}
	if (Global_100876 > 0)
	{
		if (Global_100893 == Global_100876)
		{
			fVar4 = 10f;
		}
	}
	if (Global_100877 > 0)
	{
		if (((Global_100894 == Global_100877 || Global_100877 * 10 / Global_100894 < 41) || Global_100894 > Global_100880) || Global_100894 == Global_100880)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_8884.f_3856, 14))
			{
				if (Global_100894 == Global_100877)
				{
					_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_100877, 0);
					GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_8884.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_100878 > 0)
	{
		if (Global_100895 == Global_100878)
		{
			fVar6 = 15f;
		}
	}
	if (Global_100879 > 0)
	{
		if (Global_100896 == Global_100879)
		{
			fVar7 = 5f;
		}
	}
	Global_101154.f_8884.f_3853 = fVar1 + fVar2 + fVar3 + fVar4 + fVar5 + fVar6 + fVar7;
	if (Global_100894 > Global_100880 || Global_100894 == Global_100880)
	{
		iVar9 = Global_100880;
	}
	else
	{
		iVar9 = Global_100894;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_100890, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_100873, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_100891, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_100874, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_100892, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_100875, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_100893, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_100876, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_100880, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), Global_100896 + Global_100895, 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), Global_100879 + Global_100878, 1);
	Global_100897 = Global_100890 * 100 / Global_100873;
	Global_100899 = Global_100892 + Global_100891 * 100 / Global_100875 + Global_100874;
	Global_100898 = Global_100893 + iVar9 * 100 / Global_100876 + Global_100880;
	Global_100900 = Global_100895 + Global_100896 * 100 / Global_100878 + Global_100879;
	stat_set_float(joaat("total_progress_made"), Global_101154.f_8884.f_3853, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_100897, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_100898, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_100899, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_101154.f_8884.f_3853))
	{
		func_9(13, floor(Global_101154.f_8884.f_3853));
	}
	if (!_0xBEDB96A7584AA8CF())
	{
		if (!Global_69489)
		{
			if (func_8() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (network_is_cloud_available())
				{
					Global_100888 = 0;
				}
				if (!Global_55749)
				{
					func_4();
				}
			}
		}
	}
}

auto func_8()
{
	return Global_25120;
}

int func_9(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = _0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return _0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

int func_10(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_11();
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

auto func_11()
{
	return Global_1312747;
}

void func_12()
{
	func_29();
	func_21();
	func_17();
	func_16();
	func_15();
	func_14();
	Global_91315 = 0;
	Global_85786 = -1;
	GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 17);
	Global_91313 = 0;
	_disable_automatic_respawn(0);
	ignore_next_restart(0);
	set_fade_in_after_death_arrest(1);
	set_fade_out_after_arrest(1);
	set_fade_out_after_death(1);
	func_13(0);
}

void func_13(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_91278.f_20), 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 13);
	}
}

void func_14()
{
	Global_69729 = {0f, 0f, 0f};
	Global_69732 = 0f;
	Global_91278.f_21 = 145;
}

void func_15()
{
	StringCopy(&Global_69721, "", 16);
	StringCopy(&Global_69725, "", 16);
}

void func_16()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Global_91278.f_22[iVar0] = 0;
		iVar0++;
	}
}

void func_17()
{
	Global_91278 = 13;
	Global_91278.f_1 = -1;
	Global_91278.f_2 = 0;
	Global_91278.f_30 = 0f;
	GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 25);
	Global_91312 = 0;
	func_20(0);
	func_19();
	func_18();
	Global_91278.f_18 = -1;
	Global_91278.f_19 = -1;
}

void func_18()
{
	GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 22);
	GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 8);
}

void func_19()
{
	if (Global_91278.f_16 != 0)
	{
		set_scaleform_movie_as_no_longer_needed(&(Global_91278.f_16));
		Global_91278.f_16 = 0;
	}
	if (Global_91278.f_17 != 0)
	{
		set_scaleform_movie_as_no_longer_needed(&(Global_91278.f_17));
		Global_91278.f_17 = 0;
	}
}

void func_20(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_36260 = 1;
	}
	else
	{
		Global_36260 = 0;
	}
}

void func_21()
{
	func_22(&Global_95496);
}

void func_22(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = 145;
	func_28(uParam0.f_1);
	*uParam0.f_6 = -1;
	*uParam0.f_7 = -1;
	*uParam0.f_8 = 0f;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 145;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		*uParam0.f_9[iVar1] = -1;
		*uParam0.f_13[iVar1] = 0;
		*uParam0.f_17[iVar1] = 0;
		*uParam0.f_21[iVar1] = 0;
		func_27(uParam0.f_25[0 /*295*/][iVar1 /*98*/]);
		func_27(uParam0.f_25[1 /*295*/][iVar1 /*98*/]);
		iVar0 = 0;
		while (iVar0 < 12)
		{
			*(uParam0.f_616[iVar1 /*65*/])[iVar0] = -1;
			*(uParam0.f_616[iVar1 /*65*/].f_13)[iVar0] = -1;
			*(uParam0.f_616[iVar1 /*65*/].f_26)[iVar0] = -1;
			iVar0++;
		}
		*(uParam0.f_616[iVar1 /*65*/]).f_59 = 0;
		*(uParam0.f_616[iVar1 /*65*/]).f_60 = -99;
		*(uParam0.f_616[iVar1 /*65*/]).f_61 = 2;
		*(uParam0.f_616[iVar1 /*65*/]).f_62 = 0;
		*(uParam0.f_616[iVar1 /*65*/]).f_63 = -99;
		*(uParam0.f_616[iVar1 /*65*/]).f_64 = 1;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			*(uParam0.f_616[iVar1 /*65*/].f_39)[iVar0] = -1;
			*(uParam0.f_616[iVar1 /*65*/].f_49)[iVar0] = -1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			*(uParam0.f_812[iVar1 /*284*/][iVar0 /*3*/]).f_1 = 0;
			*(uParam0.f_812[iVar1 /*284*/][iVar0 /*3*/]).f_2 = 0;
			*(uParam0.f_812[iVar1 /*284*/])[iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			*(uParam0.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/]).f_1 = 0;
			*(uParam0.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/]).f_2 = 0;
			*(uParam0.f_812[iVar1 /*284*/].f_133)[iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			*(uParam0.f_1665[iVar1 /*32*/])[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			*(uParam0.f_1665[iVar1 /*32*/].f_5)[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			*(uParam0.f_1665[iVar1 /*32*/].f_16)[iVar0] = 0;
			iVar0++;
		}
		*uParam0.f_1762[iVar1] = 0;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			*(uParam0.f_2259[iVar1 /*15*/])[iVar0] = 0;
			*(uParam0.f_2259[iVar1 /*15*/].f_5)[iVar0] = 0;
			*(uParam0.f_2259[iVar1 /*15*/].f_10)[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			*(uParam0.f_1766[iVar1 /*164*/])[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_4)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_8)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_12)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_16)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_20)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_24)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_28)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_32)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_36)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_40)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_44)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_48)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_52)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_56)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_60)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_64)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_68)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_72)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_76)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_80)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_84)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_88)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_92)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_96)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_100)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_104)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_108)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_112)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_116)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_120)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_124)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_128)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_132)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_136)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_140)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_144)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_148)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_152)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_156)[iVar0] = 0;
			*(uParam0.f_1766[iVar1 /*164*/].f_160)[iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	func_26(uParam0.f_2305);
	func_24(uParam0.f_2311);
	func_23(uParam0.f_2401);
}

void func_23(auto uParam0)
{
	*uParam0 = -1;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
}

void func_24(auto uParam0)
{
	func_25(uParam0.f_12);
	*uParam0 = {0f, 0f, 0f};
	*uParam0.f_3 = {0f, 0f, 0f};
	*uParam0.f_6 = 0f;
	*uParam0.f_8 = 0;
	*uParam0.f_9 = 0;
}

void func_25(auto uParam0)
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

void func_26(auto uParam0)
{
	*uParam0 = {0f, 0f, 0f};
	*uParam0.f_3 = 0f;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = -1;
}

void func_27(auto uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0f;
	*uParam0.f_3 = 0;
	*uParam0.f_4 = 0;
	*uParam0.f_5 = 0;
	*uParam0.f_6 = 0;
	*uParam0.f_7 = 0;
	*uParam0.f_8 = 0;
	*uParam0.f_9 = 0;
	*uParam0.f_10 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		*uParam0.f_11[iVar0] = 0;
		iVar0++;
	}
	*uParam0.f_24 = 0;
	*uParam0.f_25 = 0;
	StringCopy(uParam0.f_27, "", 16);
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		*uParam0.f_31[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		*uParam0.f_81[iVar0] = 0;
		iVar0++;
	}
	*uParam0.f_84 = 0;
	*uParam0.f_85 = 0;
	*uParam0.f_86 = 0;
	*uParam0.f_87 = 0;
	*uParam0.f_88 = 0;
	*uParam0.f_89 = 0;
	*uParam0.f_90 = 0;
	*uParam0.f_91 = 0;
	*uParam0.f_93 = 0;
	*uParam0.f_94 = 0;
	*uParam0.f_95 = 0;
	*uParam0.f_92 = 0;
}

void func_28(auto uParam0)
{
	*uParam0 = -15;
}

void func_29()
{
	StringCopy(&Global_93083, "", 32);
	func_22(&Global_93091);
}

void func_30()
{
	if (Global_3088[0 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_3088[0 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_3088[1 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_3088[1 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_3088[2 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_3088[2 /*2811*/][0 /*281*/].f_259 = 2;
	}
	GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 25);
	GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2284, 11);
}

void func_31()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_88980[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = func_148(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				
				case 1:
					iVar2 = 158;
					break;
				
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (func_147(iVar1, 14, iVar2))
				{
					func_32(iVar1, 14, iVar2);
				}
				if (Global_101154.f_1826.f_539[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_101154.f_1826.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_32(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	int iVar18;
	int iVar19;
	auto uVar20;
	auto uVar30;
	int iVar46;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_69311[1 /*14*/] = {func_82(iVar0, iParam1, iParam2)};
	if (!GAMEPLAY::IS_BIT_SET(Global_69311[1 /*14*/].f_6, false))
	{
		return 0;
	}
	if (!func_147(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = {func_78(iVar0, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_32(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar20 = {func_75(iVar0, iParam2)};
		iVar18 = 0;
		while (iVar18 <= 8)
		{
			if (!func_32(iParam0, 14, uVar20[iVar18]))
			{
				iVar19 = 0;
			}
			iVar18++;
		}
		return iVar19;
	}
	else if (iParam1 == 14)
	{
		clear_ped_prop(iParam0, Global_69311[1 /*14*/].f_12);
	}
	else
	{
		uVar30 = {func_78(iVar0, 0)};
		Global_69311[1 /*14*/] = {func_82(iVar0, iParam1, uVar30[iParam1])};
		if (get_number_of_ped_drawable_variations(iParam0, func_74(iParam1)) > 0 && get_number_of_ped_texture_variations(iParam0, func_74(iParam1), Global_69311[1 /*14*/].f_3) > 0)
		{
			set_ped_component_variation(iParam0, func_74(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, 0);
		}
	}
	if (func_73(iParam0, iVar0, &iVar46, 0))
	{
		func_35(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (func_33(iParam0, iVar0, &iVar46))
	{
		func_35(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}

bool func_33(int iParam0, int iParam1, int iParam2)
{
	auto uVar0;
	
	uVar0 = func_34(iParam1);
	if (Global_101154.f_1826.f_539[uVar0 /*65*/].f_63 != -99)
	{
		if (!func_147(iParam0, Global_101154.f_1826.f_539[uVar0 /*65*/].f_64, Global_101154.f_1826.f_539[uVar0 /*65*/].f_63))
		{
			*iParam2 = Global_101154.f_1826.f_539[uVar0 /*65*/].f_62;
			Global_101154.f_1826.f_539[uVar0 /*65*/].f_63 = -99;
			Global_101154.f_1826.f_539[uVar0 /*65*/].f_64 = 1;
			return true;
		}
	}
	return false;
}

int func_34(int iParam0)
{
	switch (iParam0)
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
		
		default:
			break;
	}
	return 145;
}

bool func_35(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	auto uVar11;
	auto uVar27;
	auto uVar37;
	struct<14> Var53;
	auto uVar67;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return false;
	}
	Global_69310++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam5 == 0)
	{
		Global_69311[1 /*14*/] = {func_82(iVar10, iParam1, iParam2)};
		if (!func_72(iParam3))
		{
			Global_69310--;
			return false;
		}
		func_65(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_63(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_63(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = func_58(iParam0, 1);
			if (!func_57(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = func_58(iParam0, 0);
			if (!func_56(iVar10, 14, iVar8) && !func_52(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_58(iParam0, 2);
			}
		}
		clear_all_ped_props(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = {Global_69354};
		}
		else
		{
			uVar11 = {func_78(iVar10, iParam2)};
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_69311[1 /*14*/] = {func_82(iVar10, iVar0, uVar11[iVar0])};
				if (GAMEPLAY::IS_BIT_SET(Global_69311[1 /*14*/].f_6, false))
				{
					if (iVar0 == 13)
					{
						uVar27 = 9;
						if (iParam5 == 1)
						{
							uVar27 = {Global_69370};
						}
						else
						{
							uVar27 = {func_75(iVar10, uVar11[iVar0])};
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_69311[1 /*14*/] = {func_82(iVar10, 14, uVar27[iVar1])};
							func_51(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
							func_65(14);
							if (Global_69310 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_43(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_42(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							set_ped_component_variation(iParam0, func_74(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_74(iVar0)));
						}
						else
						{
							set_ped_component_variation(iParam0, func_74(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
						}
						func_65(iVar0);
						if (Global_69310 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_43(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_69311[1 /*14*/] = {func_82(iVar10, iVar0, func_41(iParam0, iVar0, -1))};
				if (GAMEPLAY::IS_BIT_SET(Global_69311[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_73(iParam0, iVar10, &iVar4, 1))
							{
								func_35(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = {func_78(iVar10, 0)};
						func_35(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = {func_82(iVar10, 8, iVar5)};
			if (iVar5 != -99)
			{
				if (func_39(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_35(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = {func_82(iVar10, 9, iVar6)};
			if (iVar6 != -99)
			{
				if (func_39(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_35(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = {func_82(iVar10, 14, iVar7)};
			if (iVar7 != -99)
			{
				if (func_39(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_35(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = {func_82(iVar10, 14, iVar8)};
			if (iVar8 != -99)
			{
				if (func_39(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_35(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = {func_82(iVar10, 14, iVar9)};
			if (iVar9 != -99)
			{
				if (func_39(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_35(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar67 = {func_75(iVar10, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_69311[1 /*14*/] = {func_82(iVar10, 14, uVar67[iVar1])};
			func_51(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
			func_65(14);
			if (Global_69310 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_43(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_51(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
		func_65(iParam1);
		if (Global_69310 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_43(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			set_ped_component_variation(iParam0, func_74(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_74(iParam1)));
		}
		else
		{
			set_ped_component_variation(iParam0, func_74(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
		}
		if (Global_69310 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_43(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_35(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_36(iVar10, iParam1, iParam2);
		}
	}
	if (Global_69310 == 1)
	{
		if (func_73(iParam0, iVar10, &iVar4, 0))
		{
			func_35(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_33(iParam0, iVar10, &iVar4))
		{
			func_35(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_69310--;
	return true;
}

void func_36(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 4;
	}
	if (func_38(iParam0, 12, iVar0))
	{
		if (func_37(iParam0, iParam1, iParam2))
		{
			uVar1 = func_34(iParam0);
			if (iParam1 == 3)
			{
				Global_101154.f_1826.f_539.f_196[uVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_101154.f_1826.f_539.f_200[uVar1] = iParam2;
			}
		}
	}
}

bool func_37(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return true;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return true;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 54 && iParam2 <= 69)
			{
				return true;
			}
		}
	}
	return false;
}

int func_38(int iParam0, int iParam1, int iParam2)
{
	Global_69311[1 /*14*/] = {func_82(iParam0, iParam1, iParam2)};
	return GAMEPLAY::IS_BIT_SET(Global_69311[1 /*14*/].f_6, 2);
}

bool func_39(int iParam0, int iParam1, int iParam2, int iParam3, auto uParam4, auto uParam5)
{
	auto uVar0;
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
		uVar0 = {func_75(iParam0, *uParam4[13])};
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
	if (func_40(iParam0, iParam2, iParam3))
	{
		return true;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_57(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return false;
			}
			return true;
		}
		else if (func_56(iParam0, iParam2, iParam3))
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
		else if (func_52(iParam0, iParam2, iParam3))
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
		if (func_57(iParam0, iParam2, iParam3))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return false;
			}
			return true;
		}
		else if (func_56(iParam0, iParam2, iParam3))
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
		else if (func_52(iParam0, iParam2, iParam3))
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
		if (func_57(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return false;
			}
			return true;
		}
		else if (func_56(iParam0, iParam2, iParam3))
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
		else if (func_52(iParam0, iParam2, iParam3))
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

bool func_40(int iParam0, int iParam1, int iParam2)
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

int func_41(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_147(iParam0, iParam1, iVar0))
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
				if (func_147(iParam0, iParam1, iVar1))
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
				return func_58(iParam0, iParam2);
			}
		}
		else
		{
			return func_63(iParam0, iParam1);
		}
	}
	return -99;
}

bool func_42(int iParam0, int iParam1, int iParam2, int iParam3)
{
	auto uVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		uVar0 = func_34(iParam0);
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_60 = iParam2;
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_61 = iParam1;
		return true;
	}
	return false;
}

int func_43(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_63(iParam0, 1);
				iVar0 = func_50(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_63(iParam0, 2);
				iVar0 = func_50(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_42(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_49(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_48(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_47(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_47(iParam0, 3, 135, 150))
									{
										iVar0 = func_46(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case 79:
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_47(iParam0, 3, 209, 222))
									{
										iVar0 = func_46(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_47(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_46(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_46(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_46(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_46(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_47(iParam0, 3, 176, 191) && !func_47(iParam0, 3, 227, 242))
									{
										iVar0 = func_46(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = func_63(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_63(iParam0, 11);
								iVar5 = func_45(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_63(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_44(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = func_63(iParam0, 8);
								iVar8 = func_63(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_45(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_45(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = func_63(iParam0, 11);
								iVar0 = func_45(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

bool func_44(int iParam0, int iParam1, int iParam2, int iParam3, auto uParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != -99)
				{
					if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = iParam1 - 27;
								*uParam4 = 59 + iVar0;
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = iParam1 - 27;
								*uParam4 = 43 + iVar0;
							}
						}
						return false;
					}
				}
				if (iParam3 != -99)
				{
					if (((iParam3 >= 227 && iParam3 <= 242) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 243 && iParam3 <= 258))
					{
					}
					else
					{
						return false;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = iParam1 - 43;
							*uParam4 = 27 + iVar0;
						}
						return false;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = iParam1 - 43;
								*uParam4 = 59 + iVar0;
							}
						}
						return false;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = iParam1 - 59;
							*uParam4 = 27 + iVar0;
						}
						return false;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = iParam1 - 59;
								*uParam4 = 43 + iVar0;
							}
						}
						else if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = iParam1 - 59;
							*uParam4 = 27 + iVar0;
						}
						return false;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 12)
			{
				if (iParam3 != 241)
				{
					return false;
				}
			}
			break;
	}
	return true;
}

int func_45(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = iParam2 - 9;
				iParam2 = 25 + iVar0;
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = iParam2 - 25;
				iParam2 = 9 + iVar0;
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_46(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_46(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = iParam2 - 1;
			iParam2 = 5 + iVar0;
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = iParam2 - 5;
			iParam2 = 1 + iVar0;
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = iParam2 - 9;
			iParam2 = 25 + iVar0;
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = iParam2 - 25;
			iParam2 = 9 + iVar0;
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_46(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= iParam3 - 1)
	{
		iVar1 = iVar0;
		if (func_38(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

bool func_47(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_63(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return true;
	}
	return false;
}

bool func_48(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return true;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return true;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 90)) || (iParam1 >= 94 && iParam1 <= 103))
			{
				*iParam2 = 8;
				return true;
			}
			break;
	}
	return false;
}

bool func_49(int iParam0, int iParam1, int iParam2, int iParam3)
{
	auto uVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		uVar0 = func_34(iParam0);
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_63 = iParam2;
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_64 = iParam1;
		return true;
	}
	return false;
}

int func_50(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

void func_51(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -1)
	{
		clear_ped_prop(iParam0, iParam1);
	}
	else
	{
		set_ped_prop_index(iParam0, iParam1, iParam2, iParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS());
	}
}

int func_52(int iParam0, int iParam1, int iParam2)
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
						return (_0x341DE7ED1D2A1BFD(func_53(iParam0, iParam2, 14, 3), -1757550583, true) || _0x341DE7ED1D2A1BFD(func_53(iParam0, iParam2, 14, 3), -1842686353, true));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (_0x341DE7ED1D2A1BFD(func_53(iParam0, iParam2, 1, 3), -1757550583, false) || _0x341DE7ED1D2A1BFD(func_53(iParam0, iParam2, 1, 3), -1842686353, false));
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
						return (_0x341DE7ED1D2A1BFD(func_53(iParam0, iParam2, 14, 4), -1757550583, true) || _0x341DE7ED1D2A1BFD(func_53(iParam0, iParam2, 14, 4), -1842686353, true));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (_0x341DE7ED1D2A1BFD(func_53(iParam0, iParam2, 1, 4), -1757550583, false) || _0x341DE7ED1D2A1BFD(func_53(iParam0, iParam2, 1, 4), -1842686353, false));
					}
					break;
			}
			break;
	}
	return false;
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar19 = iParam1 - func_55(iParam0);
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
		iVar40 = iParam1 - func_54(iParam0, func_74(iParam2));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_69432.f_26[iParam2] && iParam1 == Global_69432[iParam2]) && Global_69432.f_13[iParam2] != 0)
		{
			return Global_69432.f_13[iParam2];
		}
		iVar41 = _get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_74(iParam2));
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

int func_54(int iParam0, int iParam1)
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

int func_55(int iParam0)
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

bool func_56(int iParam0, int iParam1, int iParam2)
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
					iVar0 = func_53(iParam0, iParam2, 1, 3);
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
					iVar1 = func_53(iParam0, iParam2, 1, 4);
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

int func_57(int iParam0, int iParam1, int iParam2)
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
					return _0x341DE7ED1D2A1BFD(func_53(iParam0, iParam2, 14, 3), 97230661, true);
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
					return _0x341DE7ED1D2A1BFD(func_53(iParam0, iParam2, 14, 4), 97230661, true);
				}
			}
			break;
	}
	return false;
}

int func_58(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = get_ped_prop_index(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_62(iParam1);
	}
	iVar1 = get_ped_prop_texture_index(iParam0, iParam1);
	return func_59(iParam0, iVar0, iVar1, iParam1);
}

int func_59(int iParam0, int iParam1, int iParam2, int iParam3)
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
		return func_62(iParam3);
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = get_hash_name_for_prop(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_61(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_61(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
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
					iVar3 += func_60(iParam0, iParam3);
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
	return func_62(iParam3);
}

int func_60(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
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

int func_61(int iParam0, int iParam1, int iParam2, int iParam3)
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
					return func_55(iParam0) + iVar18;
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
		iVar39 = _get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_74(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			get_shop_ped_query_component(iVar37, &Var20);
			if (!_is_dlc_data_empty(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return func_54(iParam0, func_74(iParam2)) + iVar38;
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_62(int iParam0)
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

int func_63(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return -99;
	}
	iVar0 = func_74(iParam1);
	iVar1 = get_ped_drawable_variation(iParam0, iVar0);
	iVar2 = get_ped_texture_variation(iParam0, iVar0);
	return func_64(iParam0, iVar1, iVar2, iParam1);
}

int func_64(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_74(iParam3);
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

void func_65(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_69311[1 /*14*/].f_6, true) && !GAMEPLAY::IS_BIT_SET(Global_69311[1 /*14*/].f_6, 6))
	{
		func_71(iParam0, Global_69311[1 /*14*/].f_5, Global_69311[1 /*14*/].f_2, 2, Global_69311[1 /*14*/].f_1, 1, 0);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_69311[1 /*14*/].f_6, true) && GAMEPLAY::IS_BIT_SET(Global_69311[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_66(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_66(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_66(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_66(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	int iVar3;
	
	iVar0 = Global_69309;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_70(uParam0, iParam1, &uVar2, &iVar1, iParam2, iParam3))
	{
		iVar3 = func_69(uVar2, iVar0, 0);
		GAMEPLAY::GAMEPLAY::SET_BIT(&iVar3, iVar1);
		func_67(uVar2, iVar3, iVar0, 1);
	}
}

void func_67(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[uParam0 /*5*/][func_68(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_68(auto uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_11();
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

int func_69(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	auto uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_68(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_70(auto uParam0, int iParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
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

int func_71(int iParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/][iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_101154.f_1826[uParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_101154.f_1826[uParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return false;
}

bool func_72(int iParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(Global_69311[1 /*14*/].f_6, false))
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_69311[1 /*14*/].f_6, true))
		{
			return false;
		}
		if (!GAMEPLAY::IS_BIT_SET(Global_69311[1 /*14*/].f_6, 2))
		{
			return false;
		}
	}
	return true;
}

bool func_73(int iParam0, int iParam1, int iParam2, int iParam3)
{
	auto uVar0;
	
	uVar0 = func_34(iParam1);
	if (Global_101154.f_1826.f_539[uVar0 /*65*/].f_60 != -99)
	{
		if (!func_147(iParam0, Global_101154.f_1826.f_539[uVar0 /*65*/].f_61, Global_101154.f_1826.f_539[uVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_101154.f_1826.f_539[uVar0 /*65*/].f_59;
			Global_101154.f_1826.f_539[uVar0 /*65*/].f_60 = -99;
			Global_101154.f_1826.f_539[uVar0 /*65*/].f_61 = 2;
			return true;
		}
	}
	return false;
}

int func_74(int iParam0)
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

struct<10> func_75(int iParam0, int iParam1)
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
					func_77(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_77(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_77(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_77(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_77(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_77(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_77(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_77(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_77(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_77(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_77(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_76(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_77(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_77(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_77(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_77(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_77(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_77(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_77(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_77(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_77(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_77(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_76(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_77(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_77(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_77(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_77(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_77(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_77(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_77(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_77(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_77(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_77(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_76(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_77(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_77(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_77(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_77(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_77(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_77(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_77(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_77(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_77(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_77(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_77(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_77(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_77(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_77(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_77(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_77(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_77(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_77(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_77(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_77(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_77(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_77(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_77(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_77(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_77(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_77(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_76(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_77(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_77(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_77(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_77(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_77(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_77(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_77(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_77(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_77(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_77(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_77(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_77(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_77(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_77(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_77(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_77(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_77(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_77(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_77(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_77(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_77(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_77(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_77(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_77(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_77(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_76(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_76(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	Vector3 vVar16;
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
						*iParam0[vVar16.z] = func_61(iParam1, vVar16.x, 14, iVar0);
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

void func_77(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

struct<16> func_78(int iParam0, int iParam1)
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
						func_81(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_81(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_81(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_81(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_81(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_81(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_81(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[0], Global_101154.f_1826.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_81(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_81(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_81(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_81(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_81(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_81(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_81(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_81(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_81(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_81(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_81(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_81(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_81(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_81(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_81(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_81(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_81(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_81(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_81(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_81(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_81(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_81(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_81(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_81(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_81(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_81(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_81(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_81(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_81(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_81(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_81(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_81(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_81(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_81(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_81(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_81(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_81(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_81(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_81(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_81(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_81(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_81(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_81(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_81(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_81(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_81(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_81(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_79(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_81(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_81(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_81(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[1], Global_101154.f_1826.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_81(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_81(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_81(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_81(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_81(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_81(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_81(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_81(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_81(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_81(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_81(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_81(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_81(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_81(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_81(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_81(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_81(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_81(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_81(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_81(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_81(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_81(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_81(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_81(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_81(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_81(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_81(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_81(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_81(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_81(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_81(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_81(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_81(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_81(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_81(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_81(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_81(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_81(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_81(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_81(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_81(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_81(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_81(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_81(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_79(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_81(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_81(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_81(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_81(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_81(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[2], Global_101154.f_1826.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_81(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_81(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_81(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_81(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_81(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_81(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_81(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_81(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_81(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_81(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_81(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_81(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_81(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_81(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_81(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_81(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_81(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_81(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_81(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_81(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_81(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_81(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_81(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_81(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_81(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_81(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_81(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_81(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_81(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_81(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_81(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_81(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_81(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_81(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_81(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_81(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_81(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_81(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_81(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_81(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_81(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_81(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_81(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_79(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_81(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_81(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_81(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_81(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_81(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_81(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_81(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_81(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_81(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_81(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_81(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_81(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_81(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_81(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_81(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_81(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_81(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_81(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_81(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_81(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_81(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_81(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_81(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_81(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_81(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_81(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_79(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_81(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_81(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_81(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_81(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_81(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_81(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_81(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_81(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_81(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_81(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_81(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_81(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_81(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_81(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_81(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_81(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_81(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_81(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_81(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_81(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_81(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_81(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_81(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_81(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_81(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_81(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_81(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_81(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_79(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_79(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	Vector3 vVar16;
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
						*iParam0[func_80(vVar16.z)] = vVar16.x;
					}
					else
					{
						*iParam0[func_80(vVar16.z)] = func_61(iParam1, vVar16.x, func_80(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1)
				{
					*iParam0[func_80(vVar16.z)] = vVar16.y;
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

int func_80(int iParam0)
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

void func_81(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

struct<14> func_82(int iParam0, int iParam1, int iParam2)
{
	func_146();
	if (iParam0 == joaat("player_zero"))
	{
		func_128(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_109(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_83(iParam1, iParam2);
	}
	return Global_69311[0 /*14*/];
}

void func_83(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_108(iParam1);
			break;
		
		case 2:
			func_107(iParam1);
			break;
		
		case 3:
			func_104(iParam1);
			break;
		
		case 4:
			func_103(iParam1);
			break;
		
		case 6:
			func_102(iParam1);
			break;
		
		case 5:
			func_101(iParam1);
			break;
		
		case 8:
			func_100(iParam1);
			break;
		
		case 9:
			func_99(iParam1);
			break;
		
		case 10:
			func_98(iParam1);
			break;
		
		case 1:
			func_97(iParam1);
			break;
		
		case 7:
			func_96(iParam1);
			break;
		
		case 11:
			func_95(iParam1);
			break;
		
		case 12:
			func_94(iParam1);
			break;
		
		case 13:
			func_93(iParam1);
			break;
		
		case 14:
			func_84(iParam1);
			break;
	}
}

void func_84(int iParam0)
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
	iVar10 = 14;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 49;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 63;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar6 = 26;
			iVar7 = 10;
			iVar1 = 18;
			iVar8 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar6 = 26;
			iVar7 = 11;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar6 = 26;
			iVar7 = 12;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar6 = 26;
			iVar7 = 13;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar6 = 26;
			iVar7 = 14;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar6 = 26;
			iVar7 = 15;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_92(iVar10, iParam0, 155);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_85(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	auto uVar1;
	
	*uParam0.f_6 = 0;
	*uParam0 = iParam9;
	*uParam0.f_1 = iParam2 % 32;
	*uParam0.f_2 = iParam2 / 32;
	*uParam0.f_3 = iParam4;
	*uParam0.f_4 = iParam5;
	*uParam0.f_7 = iParam6;
	StringCopy(uParam0.f_8, sParam3, 16);
	*uParam0.f_13 = iParam8;
	*uParam0.f_12 = func_91(iParam8);
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
		GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, 3);
	}
	if (iParam10)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, false);
		if (*uParam0.f_5 >= 0 && *uParam0.f_5 < 3)
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, 5);
		}
		GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, true);
		GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, 2);
		GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, 6);
		if (func_90(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (_0x341DE7ED1D2A1BFD(Global_2621444, 1827025211, false))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_89(Global_2621444, 1, 1, 1, -1))
			{
				GAMEPLAY::CLEAR_BIT(uParam0.f_6, 2);
			}
			if (!func_89(Global_2621444, 2, 1, 1, -1))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_89(Global_2621444, 1, 1, 1, -1))
			{
				GAMEPLAY::CLEAR_BIT(uParam0.f_6, 2);
			}
			if (!func_89(Global_2621444, 2, 1, 1, -1))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, 4);
			}
		}
		else
		{
			if (!func_89(Global_2621444, 1, 1, 1, -1))
			{
				GAMEPLAY::CLEAR_BIT(uParam0.f_6, 2);
			}
			if (!func_89(Global_2621444, 2, 1, 1, -1))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, 4);
			}
		}
	}
	else if (*uParam0.f_5 >= 0 && *uParam0.f_5 < 3)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, false);
		GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, 5);
		if (func_71(iParam1, *uParam0.f_5, *uParam0.f_2, 0, *uParam0.f_1, 0, 0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, true);
		}
		if (func_71(iParam1, *uParam0.f_5, *uParam0.f_2, 1, *uParam0.f_1, 0, 0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, 2);
		}
		if (!func_71(iParam1, *uParam0.f_5, *uParam0.f_2, 2, *uParam0.f_1, 0, 0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, 4);
		}
	}
	else
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, false);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_90(14))
			{
				return;
			}
			iVar0 = func_69(func_88(iParam1, *uParam0.f_2), Global_69309, 0);
			if (GAMEPLAY::IS_BIT_SET(iVar0, *uParam0.f_1))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, true);
			}
			iVar0 = func_69(func_87(iParam1, *uParam0.f_2), Global_69309, 0);
			if (GAMEPLAY::IS_BIT_SET(iVar0, *uParam0.f_1))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, 2);
			}
			if (func_86(iParam1, *uParam0.f_2, &uVar1))
			{
				iVar0 = func_69(uVar1, Global_69309, 0);
				if (!GAMEPLAY::IS_BIT_SET(iVar0, *uParam0.f_1))
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, 4);
				}
			}
		}
		else
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, true);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, true);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_6, 2);
		}
	}
}

int func_86(int iParam0, int iParam1, auto uParam2)
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

int func_87(int iParam0, int iParam1)
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

int func_88(int iParam0, int iParam1)
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

int func_89(auto uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	int iVar3;
	
	iVar0 = Global_69309;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_70(uParam0, iParam1, &uVar2, &iVar1, iParam2, iParam3))
	{
		iVar3 = func_69(uVar2, iVar0, 0);
		return GAMEPLAY::IS_BIT_SET(iVar3, iVar1);
	}
	return false;
}

int func_90(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_91(int iParam0)
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

void func_92(int iParam0, int iParam1, int iParam2)
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
					func_85(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_85(&(Global_69311[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
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
					func_85(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, _0x341DE7ED1D2A1BFD(Var20.f_1, -2050632586, false), iVar37, 2, Var20.f_1 != 0);
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
		iVar60 = _get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_74(iParam0));
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
					func_85(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, _0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, false), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_93(int iParam0)
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
	iVar10 = 13;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_92(iVar10, iParam0, 9);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_94(int iParam0)
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
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_92(iVar10, iParam0, 48);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_95(int iParam0)
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
	iVar10 = 11;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_92(iVar10, iParam0, 1);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_96(int iParam0)
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
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_92(iVar10, iParam0, 1);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_97(int iParam0)
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
	iVar10 = 1;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_92(iVar10, iParam0, 6);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_98(int iParam0)
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
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		default:
			func_92(iVar10, iParam0, 33);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_99(int iParam0)
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
	iVar10 = 9;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_92(iVar10, iParam0, 17);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_100(int iParam0)
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
	iVar10 = 8;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_92(iVar10, iParam0, 18);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_101(int iParam0)
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
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_92(iVar10, iParam0, 7);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_102(int iParam0)
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
	iVar10 = 6;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_92(iVar10, iParam0, 84);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_103(int iParam0)
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
	iVar10 = 4;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		default:
			func_92(iVar10, iParam0, 104);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_104(int iParam0)
{
	if (iParam0 < 136)
	{
		func_106(iParam0);
	}
	else
	{
		func_105(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_92(3, iParam0, 242);
	}
}

void func_105(int iParam0)
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
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar6 = 25;
			iVar7 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar6 = 25;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar6 = 25;
			iVar7 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar6 = 25;
			iVar7 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar6 = 27;
			iVar7 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_106(int iParam0)
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
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_107(int iParam0)
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
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		default:
			func_92(iVar10, iParam0, 9);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_108(int iParam0)
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
	iVar10 = 0;
	Global_69311[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_92(iVar10, iParam0, 7);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_109(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_127(iParam1);
			break;
		
		case 2:
			func_126(iParam1);
			break;
		
		case 3:
			func_122(iParam1);
			break;
		
		case 4:
			func_121(iParam1);
			break;
		
		case 6:
			func_120(iParam1);
			break;
		
		case 5:
			func_119(iParam1);
			break;
		
		case 8:
			func_118(iParam1);
			break;
		
		case 9:
			func_117(iParam1);
			break;
		
		case 10:
			func_116(iParam1);
			break;
		
		case 1:
			func_115(iParam1);
			break;
		
		case 7:
			func_114(iParam1);
			break;
		
		case 11:
			func_113(iParam1);
			break;
		
		case 12:
			func_112(iParam1);
			break;
		
		case 13:
			func_111(iParam1);
			break;
		
		case 14:
			func_110(iParam1);
			break;
	}
}

void func_110(int iParam0)
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
	iVar10 = 14;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 4590;
			iVar8 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 4100;
			iVar8 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 3850;
			iVar8 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 1850;
			iVar8 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5250;
			iVar8 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 5050;
			iVar8 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 2500;
			iVar8 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 1950;
			iVar8 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 3900;
			iVar8 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 3550;
			iVar8 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 4500;
			iVar8 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2950;
			iVar8 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 130;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 112;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 118;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 125;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 139;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 198;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 200;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 208;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 160;
			iVar8 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 32;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 38;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 45;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 48;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_92(iVar10, iParam0, 175);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_111(int iParam0)
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
	iVar10 = 13;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_92(iVar10, iParam0, 9);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_112(int iParam0)
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
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_92(iVar10, iParam0, 47);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_113(int iParam0)
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
	iVar10 = 11;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_92(iVar10, iParam0, 63);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_114(int iParam0)
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
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_92(iVar10, iParam0, 1);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_115(int iParam0)
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
	iVar10 = 1;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_92(iVar10, iParam0, 5);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_116(int iParam0)
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
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		default:
			func_92(iVar10, iParam0, 53);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_117(int iParam0)
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
	iVar10 = 9;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_92(iVar10, iParam0, 12);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_118(int iParam0)
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
	iVar10 = 8;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		default:
			func_92(iVar10, iParam0, 77);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_119(int iParam0)
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
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_92(iVar10, iParam0, 7);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_120(int iParam0)
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
	iVar10 = 6;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_92(iVar10, iParam0, 134);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_121(int iParam0)
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
	iVar10 = 4;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar6 = 22;
			iVar7 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar6 = 22;
			iVar7 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_92(iVar10, iParam0, 117);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_122(int iParam0)
{
	if (iParam0 < 107)
	{
		func_125(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_124(iParam0);
	}
	else
	{
		func_123(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_92(3, iParam0, 318);
	}
}

void func_123(int iParam0)
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
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar9 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar6 = 29;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar6 = 29;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar6 = 29;
			iVar7 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar6 = 30;
			iVar7 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar6 = 30;
			iVar7 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar6 = 30;
			iVar7 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar6 = 30;
			iVar7 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar6 = 30;
			iVar7 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar6 = 31;
			iVar7 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar6 = 31;
			iVar7 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar6 = 31;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar6 = 31;
			iVar7 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar6 = 31;
			iVar7 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_124(int iParam0)
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
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 3100;
			iVar9 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 2800;
			iVar9 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 2500;
			iVar9 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3000;
			iVar9 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_125(int iParam0)
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
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 23;
			iVar9 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 26;
			iVar9 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 24;
			iVar9 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			iVar9 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_126(int iParam0)
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
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_92(iVar10, iParam0, 21);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_127(int iParam0)
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
	iVar10 = 0;
	Global_69311[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		default:
			func_92(iVar10, iParam0, 10);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_128(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_145(iParam1);
			break;
		
		case 2:
			func_144(iParam1);
			break;
		
		case 3:
			func_141(iParam1);
			break;
		
		case 4:
			func_140(iParam1);
			break;
		
		case 6:
			func_139(iParam1);
			break;
		
		case 5:
			func_138(iParam1);
			break;
		
		case 8:
			func_137(iParam1);
			break;
		
		case 9:
			func_136(iParam1);
			break;
		
		case 10:
			func_135(iParam1);
			break;
		
		case 1:
			func_134(iParam1);
			break;
		
		case 7:
			func_133(iParam1);
			break;
		
		case 11:
			func_132(iParam1);
			break;
		
		case 12:
			func_131(iParam1);
			break;
		
		case 13:
			func_130(iParam1);
			break;
		
		case 14:
			func_129(iParam1);
			break;
	}
}

void func_129(int iParam0)
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
	iVar10 = 14;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 56;
			iVar8 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 70;
			iVar8 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 74;
			iVar8 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 78;
			iVar8 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 82;
			iVar8 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar8 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 235;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 250;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 275;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 280;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 295;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 179;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 225;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			iVar8 = 2;
			break;
		
		default:
			func_92(iVar10, iParam0, 113);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_130(int iParam0)
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
	iVar10 = 13;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_92(iVar10, iParam0, 10);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
	iVar10 = 12;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_92(iVar10, iParam0, 53);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
	iVar10 = 11;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_92(iVar10, iParam0, 45);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_92(iVar10, iParam0, 1);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
	iVar10 = 1;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_92(iVar10, iParam0, 5);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
	iVar10 = 10;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			break;
		
		default:
			func_92(iVar10, iParam0, 48);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_92(iVar10, iParam0, 20);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_92(iVar10, iParam0, 24);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
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
	
	iVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		default:
			func_92(iVar10, iParam0, 14);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_139(int iParam0)
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
	iVar10 = 6;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_92(iVar10, iParam0, 99);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_140(int iParam0)
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
	iVar10 = 4;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 29;
			iVar7 = 0;
			break;
		
		default:
			func_92(iVar10, iParam0, 113);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_141(int iParam0)
{
	if (iParam0 < 60)
	{
		func_143(iParam0);
	}
	else
	{
		func_142(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_92(3, iParam0, 181);
	}
}

void func_142(int iParam0)
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
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar6 = 21;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar6 = 21;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_143(int iParam0)
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
	iVar10 = 3;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_144(int iParam0)
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
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_92(iVar10, iParam0, 6);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_145(int iParam0)
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
	iVar10 = 0;
	Global_69311[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_92(iVar10, iParam0, 7);
			return;
			break;
	}
	func_85(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_146()
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

bool func_147(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	auto uVar5;
	auto uVar21;
	int iVar31;
	auto uVar32;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_69311[1 /*14*/] = {func_82(iVar0, iParam1, iParam2)};
	if (!GAMEPLAY::IS_BIT_SET(Global_69311[1 /*14*/].f_6, false))
	{
		return false;
	}
	if (iParam1 == 12)
	{
		uVar5 = {func_78(iVar0, iParam2)};
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_147(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = {func_75(iVar0, uVar5[iVar2])};
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_147(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_69311[2 /*14*/] = {func_82(iVar0, 14, iVar4)};
									if (Global_69311[2 /*14*/].f_12 == iVar3)
									{
										if (func_147(iParam0, 14, iVar4))
										{
											if (!func_39(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_69311[2 /*14*/])))
											{
												return false;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_63(iParam0, iVar2);
						Global_69311[2 /*14*/] = {func_82(iVar0, iVar2, iVar1)};
						if (!func_39(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_69311[2 /*14*/])))
						{
							return false;
						}
					}
				}
			}
			iVar2++;
		}
		return true;
	}
	else if (iParam1 == 13)
	{
		uVar32 = {func_75(iVar0, iParam2)};
		iVar31 = 0;
		while (iVar31 <= 8)
		{
			if (!func_147(iParam0, 14, uVar32[iVar31]))
			{
				return false;
			}
			iVar31++;
		}
		return true;
	}
	else if (iParam1 == 14)
	{
		if (get_ped_prop_index(iParam0, Global_69311[1 /*14*/].f_12) == Global_69311[1 /*14*/].f_3 && (get_ped_prop_texture_index(iParam0, Global_69311[1 /*14*/].f_12) == Global_69311[1 /*14*/].f_4 || Global_69311[1 /*14*/].f_3 == -1))
		{
			return true;
		}
	}
	else if (Global_69311[1 /*14*/].f_3 == get_ped_drawable_variation(iParam0, func_74(iParam1)) && Global_69311[1 /*14*/].f_4 == get_ped_texture_variation(iParam0, func_74(iParam1)))
	{
		return true;
	}
	return false;
}

int func_148(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_149(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_149(int iParam0)
{
	if (func_150(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_150(int iParam0)
{
	return iParam0 < 3;
}

void func_151(char* sParam0, int iParam1)
{
	stat_set_gxt_label(joaat("sp_last_mission_name"), sParam0, 1);
	if (GAMEPLAY::IS_BIT_SET(iParam1, false))
	{
		stat_set_gxt_label(joaat("sp0_last_mission_name"), sParam0, 1);
	}
	if (GAMEPLAY::IS_BIT_SET(iParam1, true))
	{
		stat_set_gxt_label(joaat("sp1_last_mission_name"), sParam0, 1);
	}
	if (GAMEPLAY::IS_BIT_SET(iParam1, 2))
	{
		stat_set_gxt_label(joaat("sp2_last_mission_name"), sParam0, 1);
	}
}

int func_152()
{
	func_153();
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

void func_153()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_149(Global_101154.f_1826.f_539.f_3549) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_148(PLAYER::PLAYER_PED_ID());
			if (func_150(iVar0) && (!func_90(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_150(Global_101154.f_1826.f_539.f_3549))
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

struct<2> func_154(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_155(iParam0)};
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

struct<2> func_155(int iParam0)
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

void func_156(int iParam0, int iParam1)
{
	Global_69757 = iParam1;
	if (Global_55743)
	{
		return;
	}
	if (Global_55770)
	{
		Global_55770 = 0;
		return;
	}
	if (_get_number_of_instances_of_streamed_script(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_55743)
		{
		}
		Global_55769 = iParam0;
		Global_55743 = 1;
		Global_55754 = 1;
	}
}

void func_157(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, true);
	}
	set_player_control(player_id(), true, 0);
	set_wanted_level_multiplier(1f);
	set_max_wanted_level(5);
	set_all_random_peds_flee(player_id(), 0);
	set_player_weapon_damage_modifier(player_id(), 1f);
	set_player_weapon_defense_modifier(player_id(), 1f);
	display_hud(true);
	display_radar(true);
	set_widescreen_borders(false, 0);
	set_time_scale(1f);
	func_168();
	func_167(1, 1);
	func_166();
	func_164();
	func_163(30000);
	if (iParam1 == 1)
	{
		func_158(iParam0, iParam2, iParam3);
	}
	set_mission_name(0, 0);
}

void func_158(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	char* sVar32;
	
	if (iParam0 != -1)
	{
		func_160(iParam0, &Var0);
		MemCopy(&sVar32, {func_155(iParam0)}, 4);
		playstats_mission_checkpoint(&sVar32, 0, Global_91315, 0);
		func_159(&sVar32, Var0.f_3, Global_91315, iParam1, iParam2);
	}
}

void func_159(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (is_string_null_or_empty(&Global_88681))
	{
		return;
	}
	if (compare_strings(sParam0, &Global_88681, 0, -1) != 0)
	{
		return;
	}
	playstats_mission_over(sParam0, iParam1, iParam2, iParam3, iParam4, Global_85788);
	StringCopy(&Global_88681, "", 64);
}

void func_160(int iParam0, auto uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_161(uParam1, "Abigail1", func_154(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 1:
			func_161(uParam1, "Abigail2", func_154(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 2:
			func_161(uParam1, "Barry1", func_154(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 3:
			func_161(uParam1, "Barry2", func_154(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_162(iParam0), 1, 1);
			break;
		
		case 4:
			func_161(uParam1, "Barry3", func_154(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 5:
			func_161(uParam1, "Barry3A", func_154(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 6:
			func_161(uParam1, "Barry3C", func_154(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 7:
			func_161(uParam1, "Barry4", func_154(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_162(iParam0), 0, 0);
			break;
		
		case 8:
			func_161(uParam1, "Dreyfuss1", func_154(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 9:
			func_161(uParam1, "Epsilon1", func_154(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 10:
			func_161(uParam1, "Epsilon2", func_154(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 11:
			func_161(uParam1, "Epsilon3", func_154(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 12:
			func_161(uParam1, "Epsilon4", func_154(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 13:
			func_161(uParam1, "Epsilon5", func_154(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 14:
			func_161(uParam1, "Epsilon6", func_154(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 15:
			func_161(uParam1, "Epsilon7", func_154(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 16:
			func_161(uParam1, "Epsilon8", func_154(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 17:
			func_161(uParam1, "Extreme1", func_154(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 18:
			func_161(uParam1, "Extreme2", func_154(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 19:
			func_161(uParam1, "Extreme3", func_154(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 20:
			func_161(uParam1, "Extreme4", func_154(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 21:
			func_161(uParam1, "Fanatic1", func_154(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_162(iParam0), 1, 0);
			break;
		
		case 22:
			func_161(uParam1, "Fanatic2", func_154(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_162(iParam0), 1, 0);
			break;
		
		case 23:
			func_161(uParam1, "Fanatic3", func_154(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_162(iParam0), 0, 1);
			break;
		
		case 24:
			func_161(uParam1, "Hao1", func_154(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_162(iParam0), 0, 1);
			break;
		
		case 25:
			func_161(uParam1, "Hunting1", func_154(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 26:
			func_161(uParam1, "Hunting2", func_154(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 27:
			func_161(uParam1, "Josh1", func_154(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 28:
			func_161(uParam1, "Josh2", func_154(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_162(iParam0), 1, 1);
			break;
		
		case 29:
			func_161(uParam1, "Josh3", func_154(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_162(iParam0), 1, 1);
			break;
		
		case 30:
			func_161(uParam1, "Josh4", func_154(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 31:
			func_161(uParam1, "Maude1", func_154(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 32:
			func_161(uParam1, "Minute1", func_154(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 33:
			func_161(uParam1, "Minute2", func_154(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 34:
			func_161(uParam1, "Minute3", func_154(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 35:
			func_161(uParam1, "MrsPhilips1", func_154(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 36:
			func_161(uParam1, "MrsPhilips2", func_154(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 37:
			func_161(uParam1, "Nigel1", func_154(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 38:
			func_161(uParam1, "Nigel1A", func_154(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_162(iParam0), 1, 1);
			break;
		
		case 39:
			func_161(uParam1, "Nigel1B", func_154(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_162(iParam0), 1, 1);
			break;
		
		case 40:
			func_161(uParam1, "Nigel1C", func_154(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_162(iParam0), 1, 1);
			break;
		
		case 41:
			func_161(uParam1, "Nigel1D", func_154(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_162(iParam0), 1, 1);
			break;
		
		case 42:
			func_161(uParam1, "Nigel2", func_154(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_162(iParam0), 1, 1);
			break;
		
		case 43:
			func_161(uParam1, "Nigel3", func_154(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_162(iParam0), 1, 1);
			break;
		
		case 44:
			func_161(uParam1, "Omega1", func_154(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 45:
			func_161(uParam1, "Omega2", func_154(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 46:
			func_161(uParam1, "Paparazzo1", func_154(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 47:
			func_161(uParam1, "Paparazzo2", func_154(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 48:
			func_161(uParam1, "Paparazzo3", func_154(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 49:
			func_161(uParam1, "Paparazzo3A", func_154(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 50:
			func_161(uParam1, "Paparazzo3B", func_154(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 51:
			func_161(uParam1, "Paparazzo4", func_154(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 52:
			func_161(uParam1, "Rampage1", func_154(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 54:
			func_161(uParam1, "Rampage3", func_154(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 55:
			func_161(uParam1, "Rampage4", func_154(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 56:
			func_161(uParam1, "Rampage5", func_154(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_162(iParam0), 0, 0);
			break;
		
		case 53:
			func_161(uParam1, "Rampage2", func_154(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_162(iParam0), 1, 0);
			break;
		
		case 57:
			func_161(uParam1, "TheLastOne", func_154(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 58:
			func_161(uParam1, "Tonya1", func_154(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 59:
			func_161(uParam1, "Tonya2", func_154(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 60:
			func_161(uParam1, "Tonya3", func_154(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 61:
			func_161(uParam1, "Tonya4", func_154(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		case 62:
			func_161(uParam1, "Tonya5", func_154(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_162(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_161(auto uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, auto uParam19, int iParam20, int iParam21)
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

bool func_162(int iParam0)
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

void func_163(int iParam0)
{
	Global_36262 = GAMEPLAY::GET_GAME_TIMER() + iParam0;
}

void func_164()
{
	if (Global_88923)
	{
		func_153();
		_0xBF59707B3E5ED531(func_165(Global_101154.f_1826.f_539.f_3549));
	}
	else
	{
		_0xBF59707B3E5ED531("");
	}
}

char* func_165(auto uParam0)
{
	uParam0 = uParam0;
	return "";
}

void func_166()
{
	char[24] cVar0;
	
	if (is_xbox360_version() || is_durango_version())
	{
		network_set_rich_presence(StackVal, 0, 0, 0);
	}
	else if (is_ps3_version() || is_orbis_version())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		_0x3E200C2BCF4164EB(0, &cVar0);
	}
}

void func_167(int iParam0, int iParam1)
{
	Global_88918 = iParam0;
	Global_88919 = iParam1;
}

void func_168()
{
	if (Global_69743 != 6)
	{
	}
	if (Global_69748)
	{
		reset_hud_component_values(15);
		Global_69748 = 0;
		Global_17257.f_7862 = 0;
	}
	Global_69743 = 6;
	Global_69745 = -1;
	Global_69744 = -1;
}

void func_169(auto uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35673)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35672 = 0;
	Global_35674 = 0;
	Global_35711 = 15;
	Global_55746 = 0;
	Global_55747 = 0;
}

void func_170(int iParam0, int iParam1)
{
	struct<26> Var0;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<6> Var35;
	int iVar67;
	int iVar68;
	struct<6> Var69;
	int iVar101;
	int iVar102;
	
	func_160(iParam0, &Var0);
	if (!are_strings_equal(&(Var0.f_16), ""))
	{
		while (!func_198(&(Var0.f_16)))
		{
			wait(0);
		}
	}
	if (Var0.f_22 != 0)
	{
		func_197(Var0.f_22, 0);
	}
	func_188(iParam0, Global_69758);
	if (!iParam1)
	{
		iVar32 = func_187(iParam0);
		if (iVar32 != 0)
		{
			if (!get_number_of_passenger_voice_variations(iVar32))
			{
				unlock_mission_news_story(iVar32);
			}
		}
	}
	if (Var0.f_24 != -1)
	{
		iVar33 = true;
		if (Var0.f_5 != 4)
		{
			iVar34 = 0;
			while (iVar34 < 63)
			{
				iVar67 = iVar34;
				if (iVar67 != iParam0)
				{
					func_160(iVar67, &Var35);
					if (Var35.f_5 == Var0.f_5)
					{
						if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar67 /*6*/], 3))
						{
							iVar33 = false;
						}
						if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iVar67 /*6*/], false))
						{
							func_175(iVar67);
						}
					}
				}
				iVar34++;
			}
		}
		if (iVar33)
		{
			func_175(Var0.f_24);
		}
	}
	else if (Var0.f_25 != 4)
	{
		iVar68 = 0;
		while (iVar68 < 63)
		{
			iVar101 = iVar68;
			if (iVar101 != iParam0)
			{
				func_160(iVar101, &Var69);
				if (Var69.f_5 == Var0.f_25)
				{
					func_175(iVar101);
				}
			}
			iVar68++;
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_101154.f_17264[iParam0 /*6*/], 3))
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_17264[iParam0 /*6*/]), 3);
		Global_100241[iParam0 /*10*/].f_5 = 1;
		func_172(iParam0);
		iVar102 = func_171(iParam0);
		if (iVar102 != 322)
		{
			func_6(iVar102, 0, 0);
		}
	}
}

int func_171(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 109;
			break;
		
		case 1:
			return 322;
			break;
		
		case 2:
			return 69;
			break;
		
		case 3:
			return 70;
			break;
		
		case 4:
			return 322;
			break;
		
		case 5:
			return 71;
			break;
		
		case 6:
			return 71;
			break;
		
		case 7:
			return 72;
			break;
		
		case 8:
			return 68;
			break;
		
		case 9:
			return 73;
			break;
		
		case 10:
			return 74;
			break;
		
		case 11:
			return 75;
			break;
		
		case 12:
			return 76;
			break;
		
		case 13:
			return 77;
			break;
		
		case 14:
			return 78;
			break;
		
		case 15:
			return 79;
			break;
		
		case 16:
			return 80;
			break;
		
		case 17:
			return 81;
			break;
		
		case 18:
			return 82;
			break;
		
		case 19:
			return 83;
			break;
		
		case 20:
			return 84;
			break;
		
		case 21:
			return 85;
			break;
		
		case 22:
			return 86;
			break;
		
		case 23:
			return 87;
			break;
		
		case 24:
			return 106;
			break;
		
		case 25:
			return 178;
			break;
		
		case 26:
			return 179;
			break;
		
		case 27:
			return 88;
			break;
		
		case 28:
			return 89;
			break;
		
		case 29:
			return 90;
			break;
		
		case 30:
			return 91;
			break;
		
		case 31:
			return 107;
			break;
		
		case 32:
			return 92;
			break;
		
		case 33:
			return 93;
			break;
		
		case 34:
			return 94;
			break;
		
		case 35:
			return 110;
			break;
		
		case 36:
			return 111;
			break;
		
		case 37:
			return 95;
			break;
		
		case 38:
			return 96;
			break;
		
		case 39:
			return 97;
			break;
		
		case 40:
			return 98;
			break;
		
		case 41:
			return 99;
			break;
		
		case 42:
			return 100;
			break;
		
		case 43:
			return 101;
			break;
		
		case 44:
			return 66;
			break;
		
		case 45:
			return 67;
			break;
		
		case 46:
			return 102;
			break;
		
		case 47:
			return 103;
			break;
		
		case 48:
			return 322;
			break;
		
		case 49:
			return 104;
			break;
		
		case 50:
			return 104;
			break;
		
		case 51:
			return 105;
			break;
		
		case 52:
			return 194;
			break;
		
		case 53:
			return 195;
			break;
		
		case 54:
			return 196;
			break;
		
		case 55:
			return 197;
			break;
		
		case 56:
			return 198;
			break;
		
		case 57:
			return 108;
			break;
		
		case 58:
			return 208;
			break;
		
		case 59:
			return 209;
			break;
		
		case 60:
			return 210;
			break;
		
		case 61:
			return 211;
			break;
		
		case 62:
			return 212;
			break;
	}
	return 322;
}

void func_172(int iParam0)
{
	func_174(iParam0, 1);
	Global_101154.f_17264[iParam0 /*6*/].f_3 = func_173();
	Global_101154.f_17264.f_380++;
}

int func_173()
{
	return Global_101154.f_8706.f_21 + Global_101154.f_17264.f_380;
}

void func_174(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 55;
	if (iParam1)
	{
		iVar1 = uParam0;
		if (iVar1 == 46)
		{
			iVar0 = 35;
		}
		else if (iVar1 == 49)
		{
			iVar0 = 36;
		}
		else if (iVar1 == 50)
		{
			iVar0 = 37;
		}
		else if (iVar1 == 8)
		{
			iVar0 = 38;
		}
		else if (iVar1 == 16)
		{
			iVar0 = 39;
		}
		else if (iVar1 == 38)
		{
			iVar0 = 40;
		}
		else if (iVar1 == 39)
		{
			iVar0 = 41;
		}
		else if (iVar1 == 40)
		{
			iVar0 = 42;
		}
		else if (iVar1 == 41)
		{
			iVar0 = 43;
		}
		else if (iVar1 == 42)
		{
			iVar0 = 44;
		}
		else if (iVar1 == 43)
		{
			iVar0 = 45;
		}
		else if (iVar1 == 20)
		{
			iVar0 = 46;
		}
	}
	else
	{
		iVar2 = uParam0;
		if (iVar2 == 53)
		{
			iVar0 = 0;
		}
		else if (iVar2 == 1)
		{
			iVar0 = 1;
		}
		else if (iVar2 == 2)
		{
			iVar0 = 2;
		}
		else if (iVar2 == 17)
		{
			iVar0 = 3;
		}
		else if (iVar2 == 19)
		{
			iVar0 = 4;
		}
		else if (iVar2 == 43)
		{
			iVar0 = 5;
		}
		else if (iVar2 == 44)
		{
			iVar0 = 6;
		}
		else if (iVar2 == 63)
		{
			iVar0 = 8;
		}
		else if (iVar2 == 12)
		{
			iVar0 = 9;
		}
		else if (iVar2 == 13)
		{
			iVar0 = 10;
		}
		else if (iVar2 == 64)
		{
			iVar0 = 11;
		}
		else if (iVar2 == 20)
		{
			iVar0 = 12;
		}
		else if (iVar2 == 30)
		{
			iVar0 = 13;
		}
		else if (iVar2 == 31)
		{
			iVar0 = 14;
		}
		else if (iVar2 == 41)
		{
			iVar0 = 15;
		}
		else if (iVar2 == 38)
		{
			iVar0 = 16;
		}
		else if (iVar2 == 9)
		{
			iVar0 = 18;
		}
		else if (iVar2 == 59)
		{
			iVar0 = 19;
		}
		else if (iVar2 == 45)
		{
			iVar0 = 20;
		}
		else if (iVar2 == 10)
		{
			iVar0 = 21;
		}
		else if (iVar2 == 14)
		{
			iVar0 = 22;
		}
		else if (iVar2 == 16)
		{
			iVar0 = 24;
		}
		else if (iVar2 == 39)
		{
			iVar0 = 25;
		}
		else if (iVar2 == 46)
		{
			iVar0 = 26;
		}
		else if (iVar2 == 60)
		{
			iVar0 = 27;
		}
		else if (iVar2 == 22)
		{
			iVar0 = 28;
		}
		else if (iVar2 == 48)
		{
			iVar0 = 30;
		}
		else if (iVar2 == 61)
		{
			iVar0 = 31;
		}
		else if (iVar2 == 49)
		{
			iVar0 = 32;
		}
		else if (iVar2 == 27)
		{
			iVar0 = 34;
		}
		else if (iVar2 == 3)
		{
			iVar0 = 47;
		}
		else if (iVar2 == 4)
		{
			iVar0 = 48;
		}
		else if (iVar2 == 5)
		{
			iVar0 = 49;
		}
		else if (iVar2 == 6)
		{
			iVar0 = 50;
		}
		else if (iVar2 == 7)
		{
			iVar0 = 51;
		}
		else if (iVar2 == 58)
		{
			iVar0 = 53;
		}
		else if (iVar2 == 90)
		{
			iVar0 = 7;
		}
		else if (iVar2 == 74 || iVar2 == 75)
		{
			iVar0 = 17;
		}
		else if (iVar2 == 93)
		{
			iVar0 = 23;
		}
		else if (iVar2 == 69 || iVar2 == 70)
		{
			iVar0 = 29;
		}
		else if (iVar2 == 84 || iVar2 == 85)
		{
			iVar0 = 33;
		}
	}
	if (iVar0 != 55)
	{
		Global_101154.f_25089.f_472 = iVar0;
	}
}

void func_175(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return;
	}
	func_176(iParam0);
	GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_17264[iParam0 /*6*/]), false);
}

void func_176(int iParam0)
{
	switch (iParam0)
	{
		case 30:
			func_180(22, 1, 0, 1, 0);
			break;
		
		case 15:
			func_177(37, 0);
			break;
		
		default:
			break;
	}
}

void func_177(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1)
	{
		if (!func_179(iParam0, 0))
		{
			func_178(iParam0, 1, 0);
			func_178(iParam0, 2, 0);
			func_178(iParam0, 3, 0);
			func_178(iParam0, 4, 0);
			func_178(iParam0, 0, 1);
			Global_68319[iParam0] = 1;
		}
	}
	else
	{
		func_178(iParam0, 0, 0);
	}
}

void func_178(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam2)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_18807[iParam0]), iParam1);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_18807[iParam0]), iParam1);
	}
}

int func_179(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_18807[iParam0], iParam1);
}

void func_180(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_69489)
		{
			Global_2428492.f_74.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_101154.f_5951.f_227[iParam0] = iParam1;
		}
		Global_32679[iParam0] = iParam2;
		Global_32878[iParam0] = 1;
		func_183(iParam0, iParam3, iParam4, 0);
		func_181(iParam0, iParam1);
	}
}

void func_181(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				set_ambient_zone_state_persistent("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				set_ambient_zone_state_persistent("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				set_ambient_zone_list_state_persistent("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				set_ambient_zone_list_state_persistent("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_182(0, 0);
			}
			else
			{
				func_182(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				set_ambient_zone_state_persistent("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				set_ambient_zone_state_persistent("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				_0xB4BBFD9CD8B3922B("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				set_static_emitter_enabled("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_182(int iParam0, int iParam1)
{
	if (iParam1)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_99794, iParam0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_99794, iParam0);
	}
	Global_99793 = 1;
}

int func_183(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	struct<5> Var3;
	auto uVar98;
	int iVar99;
	int iVar100;
	
	iVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_186(&Var3, iParam0);
	if (func_184())
	{
		iVar1 = Global_101154.f_5951.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2428492.f_74.f_227[iParam0];
	}
	uVar2 = Global_33077[iParam0];
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !iParam3)
	{
	}
	else
	{
		iVar99 = true;
		if (get_hash_key(get_this_script_name()) != get_hash_key("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_32679[iParam0] && get_distance_between_coords(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), Var3, 1) < 200f)
				{
					iVar99 = false;
				}
				if (!is_player_playing(player_id()) || is_ped_being_arrested(PLAYER::PLAYER_PED_ID()))
				{
					if (!is_screen_faded_out())
					{
						iVar99 = false;
					}
				}
			}
		}
		if (is_new_load_scene_active() && (!is_player_switch_in_progress() || get_player_switch_state() != 5))
		{
			iVar99 = false;
		}
		if (iVar99)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							remove_model_hide(Var3, 10f, Var3.f_4[iVar1], false);
						}
						if (Var3.f_4[uVar2] != 0)
						{
							create_model_hide(Var3, 10f, Var3.f_4[uVar2], 1);
						}
						Global_34273[iParam0] = 1;
					}
					iVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[1 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[1 /*8*/]));
							}
						}
						if ((get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES")) && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[2 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(""))
						{
							if (!is_ipl_active(&(Var3.f_8[0 /*8*/])))
							{
								request_ipl(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (get_hash_key(&(Var3.f_34)) != get_hash_key(""))
						{
							if (!is_ipl_active(&(Var3.f_34)))
							{
								request_ipl(&(Var3.f_34));
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (get_hash_key(&(Var3.f_34)) != get_hash_key(""))
						{
							if (is_ipl_active(&(Var3.f_34)))
							{
								remove_ipl(&(Var3.f_34));
							}
						}
						if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[0 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES")) && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[2 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(""))
						{
							if (!is_ipl_active(&(Var3.f_8[1 /*8*/])))
							{
								request_ipl(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (get_hash_key(&(Var3.f_34)) != get_hash_key(""))
						{
							if (is_ipl_active(&(Var3.f_34)))
							{
								remove_ipl(&(Var3.f_34));
							}
						}
						if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[0 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (is_ipl_active(&(Var3.f_8[1 /*8*/])))
							{
								remove_ipl(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES"))
						{
							if (!is_ipl_active(&(Var3.f_8[2 /*8*/])))
							{
								request_ipl(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_34074[iParam0] = 1;
					Global_34273[iParam0] = 1;
					iVar0 = true;
					break;
				
				case 2:
					iVar100 = get_interior_at_coords_with_type(Var3, &(Var3.f_42));
					if (iVar100 != 0)
					{
						if (get_hash_key(&(Var3.f_50)) != get_hash_key(""))
						{
							if (_is_interior_prop_enabled(iVar100, &(Var3.f_50)))
							{
								_disable_interior_prop(iVar100, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(""))
							{
								if (_is_interior_prop_enabled(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES")) && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (_is_interior_prop_enabled(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(""))
							{
								if (!_is_interior_prop_enabled(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									_enable_interior_prop(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(""))
							{
								if (_is_interior_prop_enabled(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES")) && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (_is_interior_prop_enabled(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(""))
							{
								if (!_is_interior_prop_enabled(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									_enable_interior_prop(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (get_hash_key(&(Var3.f_8[0 /*8*/])) != get_hash_key(""))
							{
								if (_is_interior_prop_enabled(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (get_hash_key(&(Var3.f_8[1 /*8*/])) != get_hash_key(""))
							{
								if (_is_interior_prop_enabled(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									_disable_interior_prop(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("") && get_hash_key(&(Var3.f_8[2 /*8*/])) != get_hash_key("REMOVE_ALL_STATES"))
							{
								if (!_is_interior_prop_enabled(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									_enable_interior_prop(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (iParam1)
						{
							refresh_interior(iVar100);
						}
					}
					Global_34273[iParam0] = 1;
					Global_34074[iParam0] = 1;
					iVar0 = true;
					break;
				
				case 3:
					if (get_distance_between_coords(Var3, get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 1) < 250f)
					{
						uVar98 = _0xB48FCED898292E52(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (_0x52AF537A0C5B8AAD(uVar98))
						{
							if (iVar1 == 0)
							{
								_0x5C29F698D404C5E1(uVar98, 3);
								Global_34273[iParam0] = 1;
								iVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((_0x899BA936634A322E(uVar98) != 6 && _0x899BA936634A322E(uVar98) != 7) && _0x899BA936634A322E(uVar98) != 8)
								{
									_0x5C29F698D404C5E1(uVar98, 10);
									Global_34273[iParam0] = 1;
									iVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								iVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						remove_model_swap(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						GAMEPLAY::CLEAR_BIT(&(Global_32425[iParam0 / 32]), iParam0 % 32);
					}
					else if (iVar1 == 1)
					{
						create_model_swap(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_32425[iParam0 / 32]), iParam0 % 32);
					}
					iVar0 = true;
					break;
			}
			if (iVar0)
			{
				Global_32878[iParam0] = 0;
				Global_33077[iParam0] = iVar1;
				if (!func_184())
				{
					if (!Global_33674[iParam0])
					{
						Global_33674[iParam0] = 1;
						Global_33873++;
					}
				}
			}
		}
	}
	return iVar0;
}

bool func_184()
{
	if ((func_8() == -1 || func_8() == 999) && !func_185() == 0)
	{
		return true;
	}
	return false;
}

auto func_185()
{
	return Global_25121;
}

bool func_186(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		*uParam0.f_4[iVar0] = 0;
		StringCopy(uParam0.f_8[iVar0 /*8*/], "", 32);
		*uParam0.f_64[iVar0] = 0;
		*uParam0.f_75[iVar0] = 0;
		*uParam0.f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = {0f, 0f, 0f};
	*uParam0.f_3 = 0;
	*uParam0.f_33 = 0;
	StringCopy(uParam0.f_34, "", 32);
	StringCopy(uParam0.f_42, "", 32);
	StringCopy(uParam0.f_50, "", 32);
	*uParam0.f_58 = {0f, 0f, 0f};
	*uParam0.f_61 = {0f, 0f, 0f};
	*uParam0.f_68 = {0f, 0f, 0f};
	*uParam0.f_71 = {0f, 0f, 0f};
	*uParam0.f_74 = 0f;
	*uParam0.f_79 = {0f, 0f, 0f};
	*uParam0.f_82 = {0f, 0f, 0f};
	*uParam0.f_85 = {0f, 0f, 0f};
	*uParam0.f_88 = {0f, 0f, 0f};
	switch (iParam1)
	{
		case 3:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "TRV1_Trail_start", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "TRV1_Trail_end", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "TRV1_Trail_Finish", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {-24.685f, 3032.92f, 40.331f};
			break;
		
		case 4:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "CS3_05_water_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS3_05_water_grp2", 32);
			*uParam0 = {-24.685f, 3032.92f, 40.331f};
			break;
		
		case 0:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "gasstation_ipl_group1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "gasstation_ipl_group2", 32);
			*uParam0 = {-93.4f, 6410.9f, 36.8f};
			break;
		
		case 1:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DES_Smash2_startimap", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DES_Smash2_endimap", 32);
			*uParam0 = {890.3647f, -2367.289f, 28.10582f};
			break;
		
		case 2:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DES_StiltHouse_imapstart", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DES_StiltHouse_imapend", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "des_stilthouse_rebuild", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-1020.5f, 663.41f, 154.75f};
			*uParam0.f_58 = {-1018.913f, 603.2904f, 105.6611f};
			*uParam0.f_61 = {-1038.913f, 639.2904f, 135.6611f};
			*uParam0.f_64[0] = 1;
			*uParam0.f_64[1] = 0;
			break;
		
		case 5:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "bnkheist_apt_norm", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "bnkheist_apt_dest_vfx", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			*uParam0.f_33 = 1;
			break;
		
		case 6:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "crashed_cargoplane", 32);
			break;
		
		case 7:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "prop_jb700_covered", 32);
			*uParam0 = {490.8999f, -1334.068f, 28.3298f};
			break;
		
		case 8:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "prop_entityXF_covered", 32);
			*uParam0 = {490.8999f, -1334.068f, 28.3298f};
			break;
		
		case 9:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "prop_cheetah_covered", 32);
			*uParam0 = {490.8999f, -1334.068f, 28.3298f};
			break;
		
		case 10:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "prop_ztype_covered", 32);
			*uParam0 = {490.8999f, -1334.068f, 28.3298f};
			break;
		
		case 11:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "cargoship", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "sunkcargoship", 32);
			*uParam0.f_68 = {-162.8918f, -2365.769f, 0f};
			*uParam0.f_71 = {190.75f, 31.25f, 21f};
			*uParam0.f_74 = 0f;
			*uParam0.f_75[0] = 0;
			*uParam0.f_75[1] = 1;
			break;
		
		case 13:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "ship_occ_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "ship_occ_grp2", 32);
			break;
		
		case 14:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "smboat", 32);
			break;
		
		case 15:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "gasparticle_grp2", 32);
			*uParam0 = {-95.2f, 6411.3f, 31.5f};
			break;
		
		case 16:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "CS1_02_cf_offmission", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS1_02_cf_onmission1", 32);
			*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
			break;
		
		case 17:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS1_02_cf_onmission2", 32);
			*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
			break;
		
		case 18:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS1_02_cf_onmission3", 32);
			*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
			break;
		
		case 19:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS1_02_cf_onmission4", 32);
			*uParam0 = {-146.3837f, 6161.5f, 30.2062f};
			break;
		
		case 20:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "jetstealtunnel", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {801.7f, -1810.8f, 23.3f};
			break;
		
		case 21:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "Jetsteal_ipl_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "Jetsteal_ipl_grp2", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {787.3967f, -1808.858f, 29.8532f};
			*uParam0.f_58 = {814f, -1750f, 20f};
			*uParam0.f_61 = {790f, -1899f, 35f};
			*uParam0.f_64[0] = 1;
			*uParam0.f_64[1] = 0;
			*uParam0.f_64[2] = 0;
			break;
		
		case 22:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "triathlon2_VBprops", 32);
			break;
		
		case 26:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DT1_05_REQUEST", 32);
			*uParam0 = {163.4f, -745.7f, 251f};
			break;
		
		case 27:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "FBI_colPLUG", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {74.29f, -736.05f, 46.76f};
			break;
		
		case 28:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "FBI_repair", 32);
			*uParam0 = {74.29f, -736.05f, 46.76f};
			break;
		
		case 29:
			*uParam0.f_3 = 4;
			*uParam0.f_4[0] = joaat("dt1_05_build1_h");
			*uParam0.f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = {136.004f, -749.287f, 153.302f};
			break;
		
		case 30:
			*uParam0.f_3 = 4;
			*uParam0.f_4[0] = -112041596;
			*uParam0.f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = {136.004f, -749.287f, 153.302f};
			break;
		
		case 31:
			*uParam0.f_3 = 4;
			*uParam0.f_4[0] = -186270611;
			*uParam0.f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = {178.534f, -668.835f, 37.2113f};
			break;
		
		case 32:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "FIB_heist_lights", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {136.004f, -749.287f, 153.302f};
			break;
		
		case 33:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "FIB_heist_dmg", 32);
			*uParam0 = {136.004f, -749.287f, 153.302f};
			break;
		
		case 34:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DT1_05_rubble", 32);
			*uParam0 = {74.29f, -736.05f, 46.76f};
			break;
		
		case 35:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "FIBlobbyfake", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "FIBlobby", 32);
			*uParam0 = {105.4557f, -745.4835f, 44.7548f};
			break;
		
		case 36:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DT1_05_HC_REMOVE", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DT1_05_HC_REQ", 32);
			*uParam0 = {169f, -670.3f, 41.9f};
			break;
		
		case 37:
			*uParam0.f_3 = 1;
			*uParam0 = {50.2f, 3743.9f, 40.9f};
			*uParam0.f_79 = {16.9757f, 3614.307f, 30.0677f};
			*uParam0.f_82 = {145.2451f, 3748.912f, 49.6958f};
			*uParam0.f_85 = {16.9757f, 3614.307f, 30.0677f};
			*uParam0.f_88 = {145.2451f, 3748.912f, 49.6958f};
			*uParam0.f_91[0] = 0;
			*uParam0.f_91[1] = 1;
			break;
		
		case 38:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "trailerparkA_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "trailerparkA_grp2", 32);
			*uParam0 = {50.2f, 3743.9f, 40.9f};
			break;
		
		case 39:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "occl_trailerA_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {50.2f, 3743.9f, 40.9f};
			break;
		
		case 40:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "trailerparkB_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "trailerparkB_grp2", 32);
			*uParam0 = {106.7f, 3732.1f, 40.8f};
			break;
		
		case 41:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "occl_trailerB_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {106.7f, 3732.1f, 40.8f};
			break;
		
		case 42:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "trailerparkC_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "trailerparkC_grp2", 32);
			*uParam0 = {72.7f, 3695.4f, 42f};
			break;
		
		case 43:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "occl_trailerC_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {72.7f, 3695.4f, 42f};
			break;
		
		case 44:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "trailerparkD_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "trailerparkD_grp2", 32);
			*uParam0 = {43.8f, 3699.7f, 41.3f};
			break;
		
		case 45:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "occl_trailerD_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {43.8f, 3699.7f, 41.3f};
			break;
		
		case 46:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "trailerparkE_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "trailerparkE_grp2", 32);
			*uParam0 = {28.5f, 3668f, 40.4f};
			break;
		
		case 47:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "occl_trailerE_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {28.5f, 3668f, 40.4f};
			break;
		
		case 48:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_34, "des_methtrailer", 32);
			StringCopy(uParam0.f_8[0 /*8*/], "methtrailer_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "methtrailer_grp2", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "methtrailer_grp3", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {29.4838f, 3735.593f, 38.688f};
			*uParam0.f_68 = {31.134f, 3738.783f, 39.062f};
			*uParam0.f_71 = {13.6f, 20f, 8.9f};
			*uParam0.f_74 = 48f;
			*uParam0.f_75[0] = 0;
			*uParam0.f_75[1] = 1;
			*uParam0.f_75[2] = 1;
			break;
		
		case 49:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "occl_meth_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {29.4838f, 3735.593f, 38.688f};
			break;
		
		case 50:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "des_farmhs_startimap", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "des_farmhs_endimap", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {2450.595f, 4959.929f, 44.2575f};
			*uParam0.f_79 = {2383.756f, 4929.988f, 39.52461f};
			*uParam0.f_82 = {2505.756f, 5023.988f, 67.52461f};
			break;
		
		case 55:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "des_farmhs_start_occl", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "des_farmhs_end_occl", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0 = {2450.595f, 4959.929f, 44.2575f};
			break;
		
		case 51:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "farm", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "farm", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "farm_burnt", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {2444.8f, 4976.4f, 50.5f};
			break;
		
		case 52:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "farm_props", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "farm_burnt_props", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {2447.9f, 4973.4f, 47.7f};
			break;
		
		case 53:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "des_farmhouse", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "des_farmhouse", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {2447.9f, 4973.4f, 47.7f};
			break;
		
		case 54:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "farmint_cap", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "farmint", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0 = {2447.9f, 4973.4f, 47.7f};
			break;
		
		case 56:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "tankerexp_grp0", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "tankerexp_grp3", 32);
			*uParam0 = {1676.415f, -1626.37f, 111.4848f};
			break;
		
		case 57:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "tankerexp_grp1", 32);
			*uParam0 = {1676.415f, -1626.37f, 111.4848f};
			break;
		
		case 58:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "tankerexp_grp2", 32);
			*uParam0 = {1676.415f, -1626.37f, 111.4848f};
			break;
		
		case 59:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DES_tankerexp", 32);
			*uParam0 = {1676.415f, -1626.37f, 111.4848f};
			break;
		
		case 60:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "dockcrane1", 32);
			*uParam0 = {889.3f, -2910.9f, 40f};
			break;
		
		case 61:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "CanyonRvrShallow", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CanyonRvrDeep", 32);
			*uParam0 = {-1600.619f, 4443.457f, 0.725f};
			break;
		
		case 62:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "Garage_door_locked", 32);
			*uParam0 = {966.1f, -114.8f, 75.2f};
			break;
		
		case 63:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "ch1_02_closed", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "ch1_02_open", 32);
			*uParam0 = {-3086.428f, 339.2523f, 6.3717f};
			break;
		
		case 64:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "ferris_finale_Anim", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {-1675.178f, -1143.605f, 12.0175f};
			break;
		
		case 65:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "railing_start", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "railing_end", 32);
			*uParam0 = {-532.1309f, 4526.187f, 88.7955f};
			break;
		
		case 66:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "canyonriver01", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "canyonriver01_traincrash", 32);
			*uParam0 = {-532.1309f, 4526.187f, 88.7955f};
			break;
		
		case 67:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DT1_05_WOFFM", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DT1_05_FIB2_Mission", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "DT1_05_WOFFM", 32);
			*uParam0 = {131.29f, -631.22f, 261.85f};
			break;
		
		case 68:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "coronertrash", 32);
			*uParam0 = {233.9f, -1355f, 30.3f};
			break;
		
		case 69:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "Coroner_Int_off", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "Coroner_Int_on", 32);
			*uParam0 = {234.4f, -1355.6f, 40.5f};
			break;
		
		case 70:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "id2_14_pre_no_int", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {716.84f, -962.05f, 31.59f};
			break;
		
		case 71:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "id2_14_during1", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "id2_14_during2", 32);
			*uParam0 = {716.84f, -962.05f, 31.59f};
			break;
		
		case 72:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "id2_14_on_fire", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "id2_14_post_no_int", 32);
			*uParam0 = {716.84f, -962.05f, 31.59f};
			break;
		
		case 73:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "id2_14_during_door", 32);
			*uParam0 = {716.84f, -962.05f, 31.59f};
			break;
		
		case 74:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "burnt_switch_off", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {716.84f, -962.05f, 31.59f};
			break;
		
		case 75:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "RC12B_Default", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "RC12B_Destroyed", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "RC12B_Fixed", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {330.4596f, -584.8196f, 42.3174f};
			break;
		
		case 76:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "RC12B_HospitalInterior", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {330.4596f, -584.8196f, 42.3174f};
			break;
		
		case 105:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "SM_15_BldGRAF1", 32);
			*uParam0 = {330.4596f, -584.8196f, 42.3174f};
			break;
		
		case 106:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = {1861.28f, 2402.11f, 58.53f};
			break;
		
		case 107:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "FruitBB", 32);
			*uParam0 = {-1327.46f, -274.82f, 54.25f};
			break;
		
		case 108:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = {2697.32f, 3162.18f, 58.1f};
			break;
		
		case 109:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = {2119.12f, 3058.21f, 53.25f};
			break;
		
		case 110:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "ap1_03_bbrd_dcl", 32);
			*uParam0 = {-804.25f, -2276.88f, 23.59f};
			break;
		
		case 111:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "HW1_02_OldBill", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "HW1_02_NewBill", 32);
			*uParam0 = {296.5f, 173.3f, 100.4f};
			break;
		
		case 112:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "HW1_Emissive_OldBill", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "HW1_Emissive_NewBill", 32);
			*uParam0 = {296.5f, 173.3f, 100.4f};
			break;
		
		case 77:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {480.9554f, -1321.21f, 28.2037f};
			*uParam0.f_85 = {508.3f, -1299.3f, 39.4f};
			*uParam0.f_88 = {459.9f, -1363.2f, 21.4f};
			*uParam0.f_91[0] = 0;
			*uParam0.f_91[1] = 1;
			*uParam0.f_91[2] = 0;
			break;
		
		case 78:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "TrevorsTrailer", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "TrevorsTrailerTrash", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "TrevorsTrailerTidy", 32);
			*uParam0 = {1973f, 3815f, 34f};
			*uParam0.f_33 = 0;
			break;
		
		case 79:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "scafstartimap", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "scafendimap", 32);
			*uParam0 = {-1088.6f, -1650.6f, 6.4f};
			break;
		
		case 80:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "chop_props", 32);
			*uParam0 = {-13.83f, -1455.45f, 31.81f};
			break;
		
		case 113:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "AP1_04_TriAf01", 32);
			*uParam0 = {-1277.629f, -2030.913f, 1.2823f};
			break;
		
		case 114:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS2_06_TriAf02", 32);
			*uParam0 = {2384.969f, 4277.583f, 30.379f};
			break;
		
		case 115:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS4_04_TriAf03", 32);
			*uParam0 = {1577.881f, 3836.107f, 30.7717f};
			break;
		
		case 87:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DT1_21_prop_lift_on", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {-180.5771f, -1016.928f, 28.2893f};
			break;
		
		case 88:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "jewel2fake", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "post_hiest_unload", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "bh1_16_refurb", 32);
			*uParam0 = {-630.4205f, -236.7843f, 37.057f};
			*uParam0.f_79 = {-623.6868f - 11f, -231.935f - 11f, 40.30703f - 3.25f};
			*uParam0.f_82 = {-623.6868f + 11f, -231.935f + 11f, 40.30703f + 3.25f};
			break;
		
		case 89:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "bh1_16_doors_shut", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "refit_unload", 32);
			*uParam0 = {-583.1606f, -282.3967f, 35.394f};
			break;
		
		case 90:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "v_tunnel_hole_swap", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "v_tunnel_hole", 32);
			*uParam0 = {-14.651f, -604.3639f, 25.1823f};
			break;
		
		case 91:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "cs5_4_trains", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {2773.61f, 2835.327f, 35.1903f};
			break;
		
		case 94:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "airfield", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {1743.682f, 3286.251f, 40.0875f};
			break;
		
		case 95:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {1222.9f, 1877.9f, 79.9f};
			*uParam0.f_58 = {1206.8f, 1803f, 43.9f};
			*uParam0.f_61 = {1329f, 2060.4f, 143.9f};
			*uParam0.f_64[0] = 0;
			*uParam0.f_64[1] = 1;
			*uParam0.f_64[2] = 0;
			break;
		
		case 104:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "SC1_01_OldBill", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "SC1_01_NewBill", 32);
			*uParam0 = {-351f, -1324f, 44.02f};
			break;
		
		case 103:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DT1_17_OldBill", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "DT1_17_NewBill", 32);
			*uParam0 = {391.81f, -962.71f, 41.97f};
			break;
		
		case 102:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "SC1_14_OldBill", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "SC1_14_NewBill", 32);
			*uParam0 = {424.2f, -1944.31f, 33.09f};
			break;
		
		case 92:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "ld_rail_01_track", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {2626.374f, 2949.869f, 39.1409f};
			break;
		
		case 93:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "ld_rail_02_track", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {2626.374f, 2949.869f, 39.1409f};
			break;
		
		case 118:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "V_Michael_M_items", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_M_moved", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-811.2679f, 179.3344f, 75.7408f};
			break;
		
		case 116:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "V_Michael_D_items", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_D_Moved", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-802.0311f, 172.9131f, 75.7408f};
			break;
		
		case 117:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "V_Michael_S_items", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_S_items_swap", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-808.033f, 172.1309f, 75.7406f};
			break;
		
		case 119:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "V_Michael_L_Items", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_L_Moved", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-808.033f, 172.1309f, 75.7406f};
			break;
		
		case 120:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_M_items_swap", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-808.033f, 172.1309f, 75.7406f};
			break;
		
		case 122:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_FameShame", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-802.0311f, 172.9131f, 75.7408f};
			break;
		
		case 121:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_JewelHeist", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-813.3f, 177.5f, 75.76f};
			break;
		
		case 123:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "Michael_premier", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-813.3f, 177.5f, 75.76f};
			break;
		
		case 124:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_plane_ticket", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-813.3f, 177.5f, 75.76f};
			break;
		
		case 170:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "burgershot_yoga", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-813.3f, 177.5f, 75.76f};
			break;
		
		case 171:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_Scuba", 32);
			StringCopy(uParam0.f_42, "V_Michael_Garage", 32);
			*uParam0 = {-810.5301f, 187.7868f, 71.4786f};
			break;
		
		case 125:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "V_Michael_bed_tidy", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_Michael_bed_Messy", 32);
			StringCopy(uParam0.f_42, "V_Michael", 32);
			*uParam0 = {-811.2679f, 179.3344f, 75.7408f};
			break;
		
		case 164:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "Jewel_Gasmasks", 32);
			StringCopy(uParam0.f_42, "V_Sweat", 32);
			*uParam0 = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 165:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_53_Agency _Overalls", 32);
			StringCopy(uParam0.f_42, "V_Sweat", 32);
			*uParam0 = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 166:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_53_Agency_Blueprint", 32);
			StringCopy(uParam0.f_42, "V_Sweat", 32);
			*uParam0 = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 167:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_35_KitBag", 32);
			StringCopy(uParam0.f_42, "V_Sweat", 32);
			*uParam0 = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 168:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_35_Body_Armour", 32);
			StringCopy(uParam0.f_42, "V_Sweat", 32);
			*uParam0 = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 169:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_35_Fireman", 32);
			StringCopy(uParam0.f_42, "V_Sweat", 32);
			*uParam0 = {707.2563f, -965.147f, 29.4179f};
			break;
		
		case 126:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_26_Trevor_Helmet1", 32);
			StringCopy(uParam0.f_42, "V_Trailer", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 127:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_26_Trevor_Helmet3", 32);
			StringCopy(uParam0.f_42, "V_TrailerTRASH", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 128:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_26_Trevor_Helmet2", 32);
			StringCopy(uParam0.f_42, "V_TrailerTidy", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 129:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_24_Trevor_Briefcase1", 32);
			StringCopy(uParam0.f_42, "V_Trailer", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 130:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_24_Trevor_Briefcase3", 32);
			StringCopy(uParam0.f_42, "V_TrailerTRASH", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 131:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_24_Trevor_Briefcase2", 32);
			StringCopy(uParam0.f_42, "V_TrailerTidy", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 132:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_26_Michael_Stay1", 32);
			StringCopy(uParam0.f_42, "V_Trailer", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 133:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_26_Michael_Stay3", 32);
			StringCopy(uParam0.f_42, "V_TrailerTRASH", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 134:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_26_Michael_Stay2", 32);
			StringCopy(uParam0.f_42, "V_TrailerTidy", 32);
			*uParam0 = {1973.805f, 3818.555f, 32.4363f};
			break;
		
		case 179:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "shutter_open", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "shutter_closed", 32);
			StringCopy(uParam0.f_42, "v_carshowroom", 32);
			*uParam0 = {-30.8793f, -1088.336f, 25.4221f};
			*uParam0.f_68 = {-29.3f, -1086.35f, 25.57f};
			*uParam0.f_71 = {5.5f, 3f, 2f};
			*uParam0.f_74 = -10f;
			*uParam0.f_75[0] = 0;
			*uParam0.f_75[1] = 1;
			break;
		
		case 174:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "csr_beforeMission", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "csr_afterMissionA", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "csr_afterMissionB", 32);
			StringCopy(uParam0.f_50, "csr_inMission", 32);
			*uParam0.f_33 = 0;
			StringCopy(uParam0.f_42, "v_carshowroom", 32);
			*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
			break;
		
		case 175:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_carshowroom", 32);
			*uParam0 = {-49.21f, -1090.28f, 25.42f};
			*uParam0.f_68 = {-49.21f, -1090.28f, 25.42f};
			*uParam0.f_71 = {2.5f, 3f, 3f};
			*uParam0.f_74 = 0f;
			*uParam0.f_75[0] = 0;
			*uParam0.f_75[1] = 1;
			*uParam0.f_75[2] = 0;
			break;
		
		case 176:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_carshowroom", 32);
			*uParam0 = {-49.28f, -1092.66f, 25.42f};
			*uParam0.f_68 = {-49.28f, -1092.66f, 25.42f};
			*uParam0.f_71 = {3f, 1f, 3f};
			*uParam0.f_74 = 0f;
			*uParam0.f_75[0] = 0;
			*uParam0.f_75[1] = 1;
			*uParam0.f_75[2] = 0;
			break;
		
		case 177:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_carshowroom", 32);
			*uParam0 = {-53.07f, -1096.73f, 25.5f};
			*uParam0.f_68 = {-53.07f, -1096.73f, 25.5f};
			*uParam0.f_71 = {1f, 3f, 2f};
			*uParam0.f_74 = -45f;
			*uParam0.f_75[0] = 0;
			*uParam0.f_75[1] = 1;
			*uParam0.f_75[2] = 0;
			break;
		
		case 178:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "carshowroom_broken", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "carshowroom_boarded", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
			break;
		
		case 173:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "shr_int", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "fakeint", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-59.7936f, -1098.784f, 27.2612f};
			break;
		
		case 180:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DT1_03_Shutter", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "", 32);
			*uParam0 = {23.9346f, -669.7552f, 30.8853f};
			break;
		
		case 181:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "Hospitaldoorsanim", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "Hospitaldoorsfixed", 32);
			StringCopy(uParam0.f_42, "v_hospital", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {300.9423f, -586.1784f, 42.2919f};
			break;
		
		case 135:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "swap_clean_apt", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "layer_mess_A", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 136:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "layer_mess_B", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 137:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "layer_mess_C", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 138:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "layer_sextoys_a", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 139:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "layer_wade_shit", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 140:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "swap_wade_sofa_A", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 141:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "layer_debra_pic", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 142:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "layer_torture", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 143:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "swap_sofa_A", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "swap_sofa_B", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 144:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "layer_whiskey", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 145:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "swap_mrJam_A", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "swap_mrJam_B", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 146:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "swap_mrJam_C", 32);
			StringCopy(uParam0.f_42, "v_trevors", 32);
			*uParam0 = {-1157.129f, -1523.028f, 9.6327f};
			break;
		
		case 147:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "vb_30_emissive", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "vb_30_murder", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-1150.039f, -1521.761f, 9.6331f};
			break;
		
		case 148:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "vb_30_crimetape", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-1150.039f, -1521.761f, 9.6331f};
			break;
		
		case 149:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "sheriff_cap", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {1856.029f, 3682.998f, 33.2675f};
			break;
		
		case 150:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "CS1_16_Sheriff_Cap", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-440.5073f, 6018.766f, 30.49f};
			break;
		
		case 151:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "ufo", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {487.31f, 5588.386f, 793.0532f};
			break;
		
		case 152:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "ufo_eye", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {487.31f, 5588.386f, 793.0532f};
			break;
		
		case 153:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "V_57_FranklinStuff", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_57_Franklin_LEFT", 32);
			StringCopy(uParam0.f_42, "v_franklins", 32);
			*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
			break;
		
		case 154:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_57_GangBandana", 32);
			StringCopy(uParam0.f_42, "v_franklins", 32);
			*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
			break;
		
		case 155:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_57_Safari", 32);
			StringCopy(uParam0.f_42, "v_franklins", 32);
			*uParam0 = {-13.9623f, -1440.614f, 30.1015f};
			break;
		
		case 172:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "V_19_Trevor_Mess", 32);
			StringCopy(uParam0.f_42, "v_strip3", 32);
			*uParam0 = {96.4811f, -1291.294f, 28.2688f};
			break;
		
		case 182:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {139.5795f, -3092.962f, 8.64631f};
			*uParam0.f_79 = {Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f)};
			*uParam0.f_82 = {Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f)};
			*uParam0.f_85 = {Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f)};
			*uParam0.f_88 = {Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f)};
			*uParam0.f_91[0] = 0;
			*uParam0.f_91[1] = 1;
			*uParam0.f_91[2] = 1;
			break;
		
		case 183:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {203.7784f, -3131.767f, 7.041344f};
			*uParam0.f_79 = {Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f)};
			*uParam0.f_82 = {Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f)};
			break;
		
		case 184:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {144.7706f, -2982.659f, 7.952507f};
			*uParam0.f_79 = {Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f)};
			*uParam0.f_82 = {Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f)};
			break;
		
		case 185:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {-1154.965f, -1520.983f, 9.132731f};
			*uParam0.f_79 = {-1154.965f, -1520.983f, 9.132731f};
			*uParam0.f_82 = {-1158.965f, -1524.983f, 11.63273f};
			break;
		
		case 187:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {-1052.204f, 371.9537f, 67.914f};
			*uParam0.f_79 = {-1052.204f, 371.9537f, 67.914f};
			*uParam0.f_82 = {-1048.064f, 368.0221f, 70.9128f};
			break;
		
		case 186:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {1954.984f, 3792.991f, 30.3086f};
			*uParam0.f_79 = {1954.984f, 3792.991f, 30.3086f};
			*uParam0.f_82 = {1983.45f, 3830.78f, 36.2726f};
			break;
		
		case 188:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 1;
			*uParam0 = {-1122.202f, 48.5724f, 51.4652f};
			*uParam0.f_79 = {-1122.202f, 48.5724f, 51.4652f};
			*uParam0.f_82 = {-1076.233f, 92.1041f, 60.0617f};
			break;
		
		case 81:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "KorizTempWalls", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-2199.138f, 223.4648f, 181.1118f};
			break;
		
		case 82:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "mic3_chopper_debris", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {-2242.785f, 263.4779f, 173.6154f};
			break;
		
		case 83:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "chemgrill_grp1", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {3832.9f, 3665.5f, -23.4f};
			break;
		
		case 84:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "Plane_crash_trench", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {2814.7f, 4758.5f, 47.9f};
			break;
		
		case 85:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "golfflags", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {-1096.505f, 4.5754f, 49.8103f};
			break;
		
		case 86:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "yogagame", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {-781.6566f, 186.8937f, 71.8352f};
			break;
		
		case 189:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "Carwash_with_spinners", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "Carwash_without_spinners", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {55.7f, -1391.3f, 30.5f};
			break;
		
		case 190:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "KT_CarWash", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "KT_CarWash_NoBrush", 32);
			*uParam0.f_33 = 0;
			*uParam0 = {700.091f, -933.641f, 20.308f};
			break;
		
		case 191:
			*uParam0.f_3 = 1;
			*uParam0 = {-1096.381f, -836.17f, 36.6755f};
			*uParam0.f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
			*uParam0.f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
			*uParam0.f_91[0] = 1;
			*uParam0.f_91[1] = 0;
			break;
		
		case 192:
			*uParam0.f_3 = 1;
			*uParam0 = {449.6558f, -980.1375f, 42.6918f};
			*uParam0.f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
			*uParam0.f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
			*uParam0.f_91[0] = 1;
			*uParam0.f_91[1] = 0;
			break;
		
		case 193:
			*uParam0.f_3 = 1;
			*uParam0 = {363.0175f, -1598.079f, 35.9502f};
			*uParam0.f_85 = {*uParam0 - Vector(25f, 25f, 15f)};
			*uParam0.f_88 = {*uParam0 + Vector(25f, 25f, 15f)};
			*uParam0.f_91[0] = 1;
			*uParam0.f_91[1] = 0;
			break;
		
		case 194:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "CS3_07_MPGates", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "", 32);
			*uParam0 = {-1601.424f, 2808.213f, 16.2598f};
			break;
		
		case 97:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "DT1_03_Gr_Closed", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "", 32);
			*uParam0 = {23.7318f, -647.2123f, 37.9549f};
			break;
		
		case 98:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "FINBANK", 32);
			*uParam0 = {12.9689f, -648.4698f, 9.7693f};
			break;
		
		case 99:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "PAPER1_RCM_ALT", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "PAPER1_RCM", 32);
			*uParam0 = {-1459.127f, 486.1281f, 115.2016f};
			break;
		
		case 100:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "SP1_10_fake_interior", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "SP1_10_real_interior", 32);
			*uParam0 = {-248.4916f, -2010.509f, 34.5743f};
			break;
		
		case 101:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "facelobbyfake", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "facelobby", 32);
			*uParam0 = {-1081.347f, -263.1502f, 38.7152f};
			break;
		
		case 195:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "atriumglstatic", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "atriumglmission", 32);
			StringCopy(uParam0.f_8[2 /*8*/], "atriumglcut", 32);
			*uParam0 = {136.1795f, -750.701f, 262.0516f};
			break;
		
		case 197:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "racetrack01", 32);
			*uParam0 = {2096f, 3168.7f, 42.9f};
			break;
	}
	switch (iParam1)
	{
		case 156:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "showhome_only", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 157:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "franklin_unpacking", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 158:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "franklin_settled", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 163:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "progress_tshirt", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 159:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "bong_and_wine", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 161:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "progress_flyer", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 162:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "progress_tux", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 160:
			*uParam0.f_3 = 2;
			StringCopy(uParam0.f_8[0 /*8*/], "locked", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "unlocked", 32);
			StringCopy(uParam0.f_42, "v_franklinshouse", 32);
			*uParam0 = {7.0256f, 537.3075f, 175.0281f};
			break;
		
		case 96:
			*uParam0.f_3 = 1;
			StringCopy(uParam0.f_8[0 /*8*/], "", 32);
			StringCopy(uParam0.f_8[1 /*8*/], "chophillskennel", 32);
			*uParam0 = {19.0568f, 536.4818f, 169.6277f};
			break;
	}
	return true;
}

int func_187(int iParam0)
{
	switch (iParam0)
	{
		case 46:
			return 42;
			break;
		
		case 47:
			return 43;
			break;
		
		case 49:
			return 44;
			break;
		
		case 50:
			return 45;
			break;
		
		case 8:
			if (GAMEPLAY::IS_BIT_SET(Global_101154.f_17264.f_382, false))
			{
				return 46;
			}
			break;
		
		case 16:
			return 47;
			break;
		
		case 38:
			return 48;
			break;
		
		case 39:
			return 49;
			break;
		
		case 40:
			return 50;
			break;
		
		case 41:
			return 51;
			break;
		
		case 42:
			return 52;
			break;
		
		case 43:
			if (Global_101154.f_7775.f_99.f_58[101])
			{
				return 53;
			}
			else
			{
				return 54;
			}
			break;
		
		case 20:
			return 55;
			break;
	}
	return 0;
}

void func_188(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 46:
			func_189(4, iParam1);
			break;
		
		case 16:
			func_189(6, iParam1);
			break;
		
		case 37:
			func_189(17, iParam1);
			break;
		
		case 31:
			func_189(16, iParam1);
			break;
	}
}

void func_189(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_196(iParam0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_30959), iVar0);
			if (!iParam1)
			{
				func_194(func_195(iParam0));
				if (!func_193(68))
				{
					func_190("DI_HLP_STRY", 2, 0, 20000, 10000, 7, 0, 208, 0);
				}
			}
		}
	}
}

void func_190(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_191(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_191(char* sParam0, char* sParam1, auto uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, auto uParam9)
{
	int iVar0;
	
	if (are_strings_equal(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (are_strings_equal(&(Global_101154.f_24935[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101154.f_24935.f_145 < 9)
	{
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_4), sParam1, 16);
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_8 = GAMEPLAY::GET_GAME_TIMER() + iParam3;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_9 = iParam5;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_11 = iParam6;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_12 = uParam2;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_13 = iParam7;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_14 = iParam8;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = GAMEPLAY::GET_GAME_TIMER() + iParam3 + iParam4;
		}
		else
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = -1;
		}
		Global_101154.f_24935.f_145++;
		func_192();
	}
}

void func_192()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101154.f_24935.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_24935[iVar0 /*16*/].f_11, false))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[0])
			{
				Global_101154.f_24935.f_146[0] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_24935[iVar0 /*16*/].f_11, true))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[1])
			{
				Global_101154.f_24935.f_146[1] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_24935[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[2])
			{
				Global_101154.f_24935.f_146[2] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_193(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 -= 32;
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_24935.f_150[iVar1], iVar0);
	}
	return false;
}

void func_194(char* sParam0)
{
	_set_notification_text_entry("");
	_0xC6F580E4C94926AC("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

char* func_195(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CM_STOMIC";
			break;
		
		case 1:
			return "CM_STOFRA";
			break;
		
		case 2:
			return "CM_STOTRE";
			break;
		
		case 3:
			return "CM_STOAMA";
			break;
		
		case 4:
			return "CM_STOBEV";
			break;
		
		case 5:
			return "CM_STOBRA";
			break;
		
		case 6:
			return "CM_STOCHR";
			break;
		
		case 7:
			return "CM_STODAV";
			break;
		
		case 8:
			return "CM_STODEV";
			break;
		
		case 9:
			return "CM_STODRF";
			break;
		
		case 10:
			return "CM_STOFAB";
			break;
		
		case 11:
			return "CM_STOFLO";
			break;
		
		case 12:
			return "CM_STOJIM";
			break;
		
		case 13:
			return "CM_STOLAM";
			break;
		
		case 14:
			return "CM_STOLAZ";
			break;
		
		case 15:
			return "CM_STOLES";
			break;
		
		case 16:
			return "CM_STOMAU";
			break;
		
		case 17:
			return "CM_STOTHO";
			break;
		
		case 18:
			return "CM_STONER";
			break;
		
		case 19:
			return "CM_STOPAT";
			break;
		
		case 20:
			return "CM_STOSIM";
			break;
		
		case 21:
			return "CM_STOSOL";
			break;
		
		case 22:
			return "CM_STOSTE";
			break;
		
		case 23:
			return "CM_STOSTR";
			break;
		
		case 24:
			return "CM_STOTAN";
			break;
		
		case 25:
			return "CM_STOTAO";
			break;
		
		case 26:
			return "CM_STOTRA";
			break;
		
		case 27:
			return "CM_STOWAD";
			break;
	}
	return "ERROR!";
}

int func_196(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 28)
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_30959, iParam0);
	}
	return false;
}

void func_197(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_101154.f_7303[iParam0] = 1;
	Global_101154.f_7303.f_236[iParam0] = GAMEPLAY::GET_GAME_TIMER() + iParam1;
}

bool func_198(char* sParam0)
{
	int iVar0;
	
	iVar0 = 1424;
	if (!does_script_exist(sParam0))
	{
		return true;
	}
	if (are_strings_equal(sParam0, "controller_Races"))
	{
		if (_get_number_of_instances_of_streamed_script(joaat("controller_races")) > 0)
		{
			return true;
		}
		iVar0 = 128;
	}
	SCRIPT::REQUEST_SCRIPT(sParam0);
	if (SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::START_NEW_SCRIPT(sParam0, iVar0);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
		return true;
	}
	return false;
}

int func_199()
{
	return func_200(get_this_script_name(), 0);
}

int func_200(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = get_hash_key(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_160(iVar0, &sVar1);
		if (get_hash_key(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_201(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			set_entity_load_collision_flag(*iParam0, false);
			if (iParam3 == 0)
			{
				clear_ped_secondary_task(*iParam0);
			}
			set_ped_keep_task(*iParam0, iParam1);
			if (iParam2 == 1)
			{
				set_blocking_of_non_temporary_events(*iParam0, false);
			}
		}
		set_ped_as_no_longer_needed(iParam0);
	}
}

void func_202(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_101154.f_7775.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_101154.f_7775.f_99.f_58[iParam0] = iParam1;
}

void func_203(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (is_entity_attached_to_any_ped(*iParam0))
		{
			detach_entity(*iParam0, 1, true);
		}
		delete_object(iParam0);
	}
}

void func_204()
{
	if (!iLocal_696)
	{
		func_221(&uLocal_350, 4, 0, "NIGEL", 0, 1);
		iLocal_696 = 1;
	}
	switch (iLocal_158)
	{
		case 0:
			if (((!is_ped_ragdoll(PLAYER::PLAYER_PED_ID()) && !is_ped_getting_up(PLAYER::PLAYER_PED_ID())) && !is_entity_on_fire(PLAYER::PLAYER_PED_ID())) && !is_entity_in_air(PLAYER::PLAYER_PED_ID()))
			{
				if (func_209(&uLocal_350, 64, "NIGE3AU", "NIGEL3_ZA", 7, 1, 0, 0, 0))
				{
					iLocal_697 = -1;
					iLocal_158 = 1;
				}
				set_cinematic_button_active(true);
			}
			break;
		
		case 1:
			if (func_208())
			{
				if (get_current_scripted_conversation_line() > iLocal_697)
				{
					iLocal_697 = get_current_scripted_conversation_line();
				}
			}
			else if (func_207())
			{
				if (func_206())
				{
					if (iLocal_697 >= 0)
					{
						iLocal_158 = 2;
					}
					else
					{
						iLocal_158 = 0;
					}
				}
				else
				{
					iLocal_158 = 2;
				}
			}
			break;
		
		case 2:
			if (((!is_ped_ragdoll(PLAYER::PLAYER_PED_ID()) && !is_ped_getting_up(PLAYER::PLAYER_PED_ID())) && !is_entity_on_fire(PLAYER::PLAYER_PED_ID())) && !is_entity_in_air(PLAYER::PLAYER_PED_ID()))
			{
				func_205(&Local_165);
				iLocal_532 = 0;
				func_2();
			}
			break;
	}
}

void func_205(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		is_entity_dead(*iParam0, 0);
		if (is_entity_a_mission_entity(*iParam0) && does_entity_belong_to_this_script(*iParam0, 1))
		{
			set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

bool func_206()
{
	if (Global_14398)
	{
		return true;
	}
	return false;
}

bool func_207()
{
	if (Global_15712 == 0)
	{
		return true;
	}
	return false;
}

bool func_208()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

int func_209(auto uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_220(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15760 = 0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	if (iParam5 == 1)
	{
		Global_15724 = 1;
	}
	else
	{
		Global_15724 = 0;
	}
	Global_2621441 = 0;
	return func_210(sParam3, iParam4, iParam8);
}

bool func_210(char* sParam0, int iParam1, int iParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					stop_scripted_conversation(false);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_219();
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		if (is_scripted_conversation_ongoing())
		{
			return false;
		}
		if (func_218(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_217();
		Global_15001 = {Global_15166};
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = {Global_15743};
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = {Global_16716};
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			GAMEPLAY::CLEAR_BIT(&Global_2283, 20);
			GAMEPLAY::CLEAR_BIT(&Global_2284, 17);
			GAMEPLAY::CLEAR_BIT(&Global_2285, false);
			if (iParam2)
			{
				func_215();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return false;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return false;
				}
			}
			if (Global_14379 == 1)
			{
				return false;
			}
			if (is_player_playing(player_id()))
			{
				if (is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (func_214())
				{
					return false;
				}
				if (is_ped_sprinting(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (is_ped_ragdoll(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (is_ped_in_parachute_free_fall(PLAYER::PLAYER_PED_ID()))
				{
					return false;
				}
				if (get_is_ped_gadget_equipped(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return false;
				}
				if (!Global_69489)
				{
					if (is_entity_in_water(PLAYER::PLAYER_PED_ID()))
					{
						return false;
					}
					if (is_player_climbing(player_id()))
					{
						return false;
					}
					if (is_ped_planting_bomb(PLAYER::PLAYER_PED_ID()))
					{
						return false;
					}
					if (is_special_ability_active(player_id()))
					{
						return false;
					}
				}
			}
			if (func_213())
			{
				return false;
			}
			else
			{
				switch (Global_14413.f_1)
				{
					case 7:
						return false;
						break;
					
					case 8:
						return false;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (GAMEPLAY::IS_BIT_SET(Global_2283, 9))
				{
					return false;
				}
			}
			func_212();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_211();
		return true;
	}
	if (Global_15712 == 5)
	{
		return false;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return false;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_219();
	}
	return false;
}

void func_211()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	stop_scripted_conversation(false);
	Global_15712 = 1;
}

void func_212()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = {Global_15794};
	Global_15812 = {Global_15800};
	Global_15767 = Global_15766;
	Global_15836 = {Global_15818};
	Global_15842 = {Global_15824};
	Global_15848 = {Global_15830};
	Global_15854 = {Global_15860};
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = {Global_15743};
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	GAMEPLAY::CLEAR_BIT(&Global_2284, 16);
}

bool func_213()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_214()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (is_player_playing(player_id()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (is_aim_cam_active() && iVar0 == 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (is_player_playing(player_id()))
	{
		if (get_ped_config_flag(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_215()
{
	if (func_90(14))
	{
		if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_101154.f_32575[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_216();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69489)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

auto func_216()
{
	func_153();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_217()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = {0f, 0f, 0f};
}

int func_218(int iParam0, int iParam1)
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
	return GAMEPLAY::IS_BIT_SET(Global_1338622.f_949, iParam0);
}

void func_219()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if ((is_mobile_phone_call_ongoing() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(true);
		Global_15712 = 6;
		return;
	}
}

void func_220(auto uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = {*uParam0};
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

void func_221(auto uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
	}
	*uParam0[iParam1 /*10*/] = iParam2;
	StringCopy(uParam0[iParam1 /*10*/].f_1, sParam3, 24);
	*(uParam0[iParam1 /*10*/]).f_7 = 1;
	*(uParam0[iParam1 /*10*/]).f_8 = iParam4;
	*(uParam0[iParam1 /*10*/]).f_9 = iParam5;
	if (!Global_69489)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (*(uParam0[iParam1 /*10*/]).f_8 == 0)
			{
				set_ped_can_play_ambient_anims(iParam2, 0);
			}
			else
			{
				set_ped_can_play_ambient_anims(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if (*(uParam0[iParam1 /*10*/]).f_9 == 0)
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, 0);
			}
			else
			{
				set_ped_can_use_auto_conversation_lookat(iParam2, 1);
			}
		}
	}
}

void func_222()
{
	Vector3 vVar0;
	Vector3 vVar3;
	auto uVar6;
	Vector3 vVar7;
	float fVar10;
	
	switch (iLocal_158)
	{
		case 0:
			func_241(&iLocal_294);
			func_229(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			if (func_228(Local_557))
			{
				vVar0 = {get_offset_from_entity_in_world_coords(Local_557, 0f, 8f, -4f)};
				vVar3 = {get_offset_from_entity_in_world_coords(Local_557, 0f, 60f, 10f)};
				if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), vVar0, vVar3, 3f, 0, true, 0))
				{
					set_player_control(player_id(), false, 512);
				}
				iLocal_548[0] = create_camera(26379945, 1);
				set_cam_fov(iLocal_548[0], 25.3209f);
				attach_cam_to_entity(iLocal_548[0], Local_557, -3.4384f, 42.1476f, 0.1772f, 1);
				point_cam_at_entity(iLocal_548[0], Local_557, -2.9318f, 39.1938f, 0.3114f, 1);
				shake_cam(iLocal_548[0], "HAND_SHAKE", 0.166f);
				iLocal_548[1] = create_camera(26379945, 1);
				set_cam_fov(iLocal_548[1], 25.3209f);
				attach_cam_to_entity(iLocal_548[1], Local_557, -3.6622f, 13.9852f, -0.5222f, 1);
				point_cam_at_entity(iLocal_548[1], Local_557, -2.2737f, 11.3714f, -0.0324f, 1);
				shake_cam(iLocal_548[1], "HAND_SHAKE", 0.166f);
			}
			iLocal_553[0] = 4000;
			iLocal_553[1] = 3000;
			fLocal_556 = 0f;
			_0xDC0F817884CDD856(3, false);
			if (func_228(Local_165))
			{
				if (get_vehicle_petrol_tank_health(Local_165) > -100f)
				{
					set_vehicle_petrol_tank_health(Local_165, -100f);
					vLocal_543 = {get_entity_coords(Local_165, 1)};
				}
			}
			if (func_228(Local_557.f_6))
			{
				set_entity_invincible(Local_557.f_6, true);
			}
			set_cam_active_with_interp(iLocal_548[1], iLocal_548[0], iLocal_553[0], 0, 0);
			render_script_cams(true, false, 3000, 1, 0, 0);
			_0x48621C9FCA3EBD28(1);
			iLocal_538 = true;
			iLocal_539 = false;
			iLocal_540 = 0;
			iLocal_541 = 0;
			if (func_227())
			{
				iLocal_542 = 1;
			}
			else
			{
				iLocal_542 = 0;
			}
			iLocal_158 = 1;
			break;
		
		case 1:
			func_226();
			if (fLocal_556 >= 7f)
			{
				iLocal_538 = false;
			}
			else if (!iLocal_540 && fLocal_556 >= 4f)
			{
				if (func_228(Local_557))
				{
					iLocal_548[2] = create_camera(26379945, 1);
					set_cam_fov(iLocal_548[2], 38.4841f);
					set_cam_coord(iLocal_548[2], get_offset_from_entity_in_world_coords(Local_557, -0.1473f, -9.8601f, 5.1181f));
					point_cam_at_coord(iLocal_548[2], get_offset_from_entity_in_world_coords(Local_557, -0.1893f, -6.9636f, 4.3379f));
					iLocal_548[3] = create_camera(26379945, 1);
					set_cam_fov(iLocal_548[3], 38.4841f);
					set_cam_coord(iLocal_548[3], get_offset_from_entity_in_world_coords(Local_557, -0.1892f, -9.8601f, 6.0113f));
					point_cam_at_coord(iLocal_548[3], get_offset_from_entity_in_world_coords(Local_557, -0.2225f, -7.1434f, 5.779f));
					set_cam_active_with_interp(iLocal_548[3], iLocal_548[2], iLocal_553[1], 3, 3);
					iLocal_540 = 1;
					if (func_228(Local_557) && !is_entity_on_fire(PLAYER::PLAYER_PED_ID()))
					{
						if ((is_ped_ragdoll(PLAYER::PLAYER_PED_ID()) || is_ped_getting_up(PLAYER::PLAYER_PED_ID())) || is_entity_in_air(PLAYER::PLAYER_PED_ID()))
						{
							vVar7 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
							vVar7.z++;
							if (get_ground_z_for_3d_coord(vVar7, &uVar6, 0))
							{
								vVar7.z = uVar6;
								set_entity_coords(PLAYER::PLAYER_PED_ID(), vVar7, 1, false, 0, 1);
								func_225(PLAYER::PLAYER_PED_ID(), get_entity_coords(Local_557, 1));
								_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
						}
						else
						{
							func_225(PLAYER::PLAYER_PED_ID(), get_entity_coords(Local_557, 1));
							_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
					}
				}
			}
			else if (!iLocal_541 && fLocal_556 >= 0.25f)
			{
				if (func_228(Local_165))
				{
					shake_cam(iLocal_548[0], "MEDIUM_EXPLOSION_SHAKE", 0.1666f);
					explode_vehicle_in_cutscene(Local_165, 1);
					play_sound_from_entity(iLocal_647, "CRASH", Local_165, "NIGEL_03_SOUNDSET", 0, 0);
					iLocal_541 = 1;
				}
			}
			if ((iLocal_538 && iLocal_542) && fLocal_556 >= 6.7f)
			{
				_start_screen_effect("CamPushInNeutral", false, 0);
				play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				iLocal_542 = 0;
			}
			if (func_223(1000) && iLocal_538)
			{
				iLocal_538 = false;
				iLocal_539 = true;
			}
			if (!iLocal_538)
			{
				set_time_scale(1f);
				iLocal_158 = 2;
			}
			break;
		
		case 2:
			_0x81CBAE94390F9F89();
			if (iLocal_539)
			{
				if (func_228(Local_165))
				{
					explode_vehicle_in_cutscene(Local_165, 1);
				}
			}
			_0x1C9D7949FA533490(1);
			render_script_cams(false, false, 3000, 1, 0, 0);
			func_543(1, 1, 1, 1);
			set_gameplay_cam_relative_heading(0);
			iLocal_164 = 0;
			while (iLocal_164 <= 3)
			{
				destroy_cam(iLocal_548[iLocal_164], 0);
				iLocal_164++;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_165))
			{
				if (get_distance_between_coords(get_entity_coords(Local_165, 0), vLocal_543, 1) > 25f)
				{
					stop_fire_in_range(vLocal_543, 20f);
				}
			}
			if (is_audio_scene_active("NIGEL_03_MIX_SETTINGS"))
			{
				stop_audio_scene("NIGEL_03_MIX_SETTINGS");
			}
			fVar10 = to_float(iLocal_553[0] + iLocal_553[1]) / 1000f;
			if (iLocal_632)
			{
				_0x293220DA1B46CEBC(fVar10 + 2.5f, 2f, 0);
			}
			else
			{
				_0x293220DA1B46CEBC(fVar10, 2f, 0);
			}
			iLocal_158 = 0;
			iLocal_157 = 10;
			break;
	}
}

bool func_223(int iParam0)
{
	if (is_screen_faded_in())
	{
		if (GAMEPLAY::GET_GAME_TIMER() - Global_28 > iParam0)
		{
			Global_27 = GAMEPLAY::GET_GAME_TIMER();
		}
		Global_28 = GAMEPLAY::GET_GAME_TIMER();
		if (GAMEPLAY::GET_GAME_TIMER() - Global_27 > iParam0)
		{
			if (func_224())
			{
				Global_27 = GAMEPLAY::GET_GAME_TIMER();
				return true;
			}
		}
	}
	return false;
}

bool func_224()
{
	if (is_pause_menu_active())
	{
		return false;
	}
	if (is_control_just_pressed(0, 18) || is_control_just_pressed(2, 18))
	{
		return true;
	}
	return false;
}

void func_225(int iParam0, struct<2> Param1, Vector3 fParam2)
{
	Vector3 vVar0;
	Vector3 fVar3;
	Vector3 fVar4;
	Vector3 fVar5;
	
	vVar0 = {get_entity_coords(iParam0, 1)};
	fVar4 = Param1 - vVar0.x;
	fVar5 = Param1.f_1 - vVar0.y;
	if (fVar5 != 0f)
	{
		fVar3 = atan2(fVar4, fVar5);
	}
	else if (fVar4 < 0f)
	{
		fVar3 = -90f;
	}
	else
	{
		fVar3 = 90f;
	}
	fVar3 *= -1f;
	set_entity_heading(iParam0, fVar3);
}

void func_226()
{
	float fVar0;
	
	fVar0 = 1f;
	if (fLocal_556 < 0.225f)
	{
		fVar0 = 1f;
	}
	else if (fLocal_556 < 0.75f)
	{
		fVar0 = 1f - 0.8f * fLocal_556 - 0.225f / 0.75f - 0.225f;
	}
	else if (fLocal_556 < 3f)
	{
		fVar0 = 0.2f;
	}
	else if (fLocal_556 < 4f)
	{
		fVar0 = 0.2f + 0.8f * fLocal_556 - 3f / 4f - 3f;
	}
	fLocal_556 += 1f / fVar0 * timestep();
	set_time_scale(fVar0);
}

bool func_227()
{
	if (_0xEE778F8C7E1142E2(_0x19CAFA3C87F7C2FF()) == 4)
	{
		return true;
	}
	return false;
}

bool func_228(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!is_entity_dead(iParam0, 0))
		{
			return true;
		}
	}
	return false;
}

void func_229(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = get_player_index();
	if (is_player_playing(iVar0))
	{
		func_232(0);
		if (iParam9)
		{
			remove_player_helmet(get_player_index(), 1);
		}
		if (iParam8)
		{
			switch (func_216())
			{
				case 0:
					if (func_147(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (func_147(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (func_147(PLAYER::PLAYER_PED_ID(), 8, 1) || func_147(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (func_147(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_35(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			clear_area_of_peds(func_231(get_player_index()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			clear_area_of_objects(vParam0, 30f, 0);
		}
		if (iParam10)
		{
			stop_fire_in_range(vParam0, 30f);
		}
		clear_area_of_projectiles(vParam0, 30f, 0);
		set_player_wanted_level(iVar0, false, 0);
		set_player_wanted_level_now(iVar0, 0);
		set_everyone_ignore_player(iVar0, 1);
		if (iParam12)
		{
			display_radar(false);
			display_hud(false);
		}
		clear_prints();
		if (iParam11 == 1)
		{
			clear_help(1);
		}
		if (iParam3 == 1)
		{
			set_widescreen_borders(true, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_36 = 0;
			if (func_228(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_36 = get_selected_ped_weapon(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
			}
		}
		if (iParam5 == 1)
		{
			func_230(500, 0);
		}
	}
}

void func_230(int iParam0, int iParam1)
{
	if (is_screen_faded_out() || is_screen_fading_out())
	{
		if (!is_screen_fading_in())
		{
			do_screen_fade_in(iParam0);
		}
	}
	if (iParam1)
	{
		while (!is_screen_faded_in())
		{
			wait(0);
		}
	}
}

Vector3 func_231(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), 0);
}

void func_232(int iParam0)
{
	int iVar0;
	
	iVar0 = get_player_index();
	if (!is_player_dead(iVar0))
	{
		if (iParam0)
		{
		}
		set_player_control(iVar0, iParam0, 16);
		set_player_control(iVar0, iParam0, 32);
	}
	func_233(1, 1, 0, 0);
}

void func_233(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0)
	{
		special_ability_deactivate_fast(player_id());
		set_all_random_peds_flee(player_id(), 1);
		set_police_ignore_player(player_id(), 1);
		func_240(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14413.f_1 > 3)
		{
			if (is_mobile_phone_call_ongoing())
			{
				stop_scripted_conversation(false);
			}
			if (!func_213())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_239(1, iParam3, iParam2, 0);
		Global_55755 = 1;
		Global_68061 = 1;
		Global_69487 = 1;
	}
	else
	{
		func_240(0);
		_0xE1CD1E48E025E661();
		Global_55755 = 0;
		if (iParam1)
		{
			_0x03FC694AE06C5A20();
		}
		set_all_random_peds_flee(player_id(), 0);
		set_police_ignore_player(player_id(), 0);
		func_239(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_237(player_id())) && !func_235(player_id(), 0)) && !func_234())
			{
				set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_237(player_id()))
		{
			set_entity_invincible(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_69487 = 0;
	}
}

int func_234()
{
	return GAMEPLAY::IS_BIT_SET(Global_1587523[player_id() /*444*/].f_39.f_18, 14);
}

int func_235(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == player_id())
	{
		iVar0 = func_236(-1, 0) == 8;
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

int func_236(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_11();
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

bool func_237(int iParam0)
{
	if (func_235(iParam0, 0))
	{
		return true;
	}
	if (func_238())
	{
		if (iParam0 == player_id())
		{
			return true;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2418472[iParam0 /*313*/].f_194, 2))
	{
		return true;
	}
	return false;
}

int func_238()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359301, 3);
}

int func_239(int iParam0, int iParam1, auto uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_240(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 13);
	}
}

void func_241(int iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		set_blip_route(*iParam0, false);
		remove_blip(iParam0);
	}
}

void func_242()
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	float fVar7;
	float fVar8;
	
	switch (iLocal_158)
	{
		case 0:
			request_anim_dict(sLocal_283);
			if (_get_raycast_result(iLocal_229[0], &(uLocal_258[0]), &(Local_261[0 /*7*/][0 /*3*/]), &(Local_261[0 /*7*/][1 /*3*/]), &(uLocal_276[0])) != 1 && _get_raycast_result(iLocal_229[1], &(uLocal_258[1]), &(Local_261[1 /*7*/][0 /*3*/]), &(Local_261[1 /*7*/][1 /*3*/]), &(uLocal_276[0])) != 1)
			{
				if (uLocal_258[0] == 1 || uLocal_258[1] == 1)
				{
					iLocal_547 = true;
				}
				else
				{
					iLocal_547 = false;
				}
			}
			else
			{
				iLocal_547 = true;
			}
			if ((has_anim_dict_loaded(sLocal_283) && STREAMING::HAS_MODEL_LOADED(iLocal_292)) && func_228(Local_165))
			{
				func_229(get_entity_coords(Local_165, 1), 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				iLocal_546 = GAMEPLAY::GET_GAME_TIMER();
				if (func_228(PLAYER::PLAYER_PED_ID()) && func_228(iLocal_175))
				{
					_set_unk_map_flag(0);
					func_270();
					_0xBE5C1255A1830FF5(Local_165, 1);
					detach_entity(iLocal_175, 0, true);
					set_entity_visible(iLocal_175, true, 0);
					freeze_entity_position(Local_165, true);
					vLocal_284 = {get_entity_coords(Local_165, 1)};
					vLocal_287 = {get_entity_rotation(Local_165, 2)};
					iLocal_290 = create_synchronized_scene(vLocal_284, vLocal_287, 2);
					iLocal_291 = create_cam("DEFAULT_ANIMATED_CAMERA", false);
					if (iLocal_547)
					{
						play_synchronized_cam_anim(iLocal_291, iLocal_290, "out_trunk_cam_alt", sLocal_283);
					}
					else
					{
						play_synchronized_cam_anim(iLocal_291, iLocal_290, "out_trunk_cam", sLocal_283);
					}
					set_cam_active(iLocal_291, true);
					render_script_cams(true, false, 3000, 1, 0, 0);
					iLocal_293 = create_object(iLocal_292, vLocal_284, 1, true, false);
					task_synchronized_scene(PLAYER::PLAYER_PED_ID(), iLocal_290, sLocal_283, "out_trunk_trevor", 1000f, -2f, 2, 0, 1000f, 0);
					task_synchronized_scene(iLocal_175, iLocal_290, sLocal_283, "out_trunk_al", 1000f, -2f, 0, 0, 1000f, 0);
					play_synchronized_entity_anim(Local_165, iLocal_290, "out_trunk_car", sLocal_283, 1000f, 8f, 0, 1000f);
					play_synchronized_entity_anim(iLocal_293, iLocal_290, "out_trunk_cash", sLocal_283, 1000f, 8f, 0, 1000f);
					_0x394B9CD12435C981(iLocal_290, false);
					clear_area_of_vehicles(get_offset_from_entity_in_world_coords(Local_165, 0f, -3f, -0.47f), 10f, 1, 0, 0, 0, false);
					clear_area_of_vehicles(get_entity_coords(Local_165, 1), 10f, 1, 0, 0, 0, false);
					if (iLocal_314)
					{
						set_random_trains(0);
						delete_all_trains();
						iLocal_314 = false;
					}
					_0x48621C9FCA3EBD28(1);
					iLocal_281 = false;
					iLocal_282 = 0;
					iLocal_158 = 1;
				}
			}
			break;
		
		case 1:
			if (func_228(Local_165))
			{
				_0xBE5C1255A1830FF5(Local_165, 1);
			}
			if (func_223(1000))
			{
				iLocal_281 = true;
				if (func_208())
				{
					func_270();
				}
			}
			if ((!iLocal_280 && GAMEPLAY::GET_GAME_TIMER() - iLocal_546 > 500) && !iLocal_281)
			{
				if (func_228(PLAYER::PLAYER_PED_ID()) && func_228(Local_165))
				{
					if (func_269(&uLocal_350, "NIGE3AU", "NIGEL3_R1", 7, 0, 0, 0))
					{
						iLocal_280 = 1;
					}
				}
			}
			if (get_synchronized_scene_phase(iLocal_290) >= 0.852f && !iLocal_282)
			{
				iVar0 = true;
				vVar1 = {get_anim_initial_offset_position(sLocal_283, "out_trunk_trevor", vLocal_284, vLocal_287, 0.852f, 2)};
				vVar4 = {get_anim_initial_offset_position(sLocal_283, "out_trunk_trevor", vLocal_284, vLocal_287, 1f, 2)};
				if (get_ground_z_for_3d_coord(vVar1, &fVar7, 0) && get_ground_z_for_3d_coord(vVar4, &fVar8, 0))
				{
					if (fVar7 - fVar8 > 0.25f)
					{
						clear_ped_tasks(PLAYER::PLAYER_PED_ID());
						iLocal_281 = false;
						iLocal_158 = 2;
						iVar0 = false;
					}
					vVar1.z = fVar7;
				}
				iLocal_282 = 1;
				if (iVar0)
				{
					vVar4 = {get_anim_initial_offset_rotation(sLocal_283, "out_trunk_trevor", vLocal_284, vLocal_287, get_synchronized_scene_phase(iLocal_290), 2)};
					stop_synchronized_entity_anim(PLAYER::PLAYER_PED_ID(), -1000f, 1);
					set_entity_heading(PLAYER::PLAYER_PED_ID(), vVar4.z);
					set_entity_coords(PLAYER::PLAYER_PED_ID(), vVar1, 0, false, 0, 1);
					task_play_anim(PLAYER::PLAYER_PED_ID(), sLocal_283, "out_trunk_trevor", 1000f, -2f, -1, 0, get_synchronized_scene_phase(iLocal_290), 0, 0, 0);
					_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				func_203(&iLocal_293);
			}
			else if (get_synchronized_scene_phase(iLocal_290) > 0.99f || iLocal_281)
			{
				iLocal_158 = 2;
			}
			break;
		
		case 2:
			if ((func_228(PLAYER::PLAYER_PED_ID()) && func_228(iLocal_175)) && func_228(Local_165))
			{
				if (iLocal_281)
				{
					func_270();
					if (get_synchronized_scene_phase(iLocal_290) < 0.99f)
					{
						set_synchronized_scene_phase(iLocal_290, 0.99f);
					}
				}
				stop_synchronized_entity_anim(Local_165, -1000f, 1);
				force_ped_motion_state(PLAYER::PLAYER_PED_ID(), -1871534317, true, 0, 1);
				set_vehicle_door_shut(Local_165, 5, 1);
				clear_ped_tasks(iLocal_175);
				task_smart_flee_ped(iLocal_175, PLAYER::PLAYER_PED_ID(), 3000f, -1, 0, 0);
				set_ped_keep_task(iLocal_175, true);
				set_blocking_of_non_temporary_events(iLocal_175, true);
				if (does_cam_exist(iLocal_291))
				{
					render_script_cams(false, false, 3000, 1, 0, 0);
					set_cam_active(iLocal_291, false);
					destroy_cam(iLocal_291, 0);
				}
				if (iLocal_281)
				{
					set_gameplay_cam_relative_heading(0);
				}
				else
				{
					_0xC819F3CBB62BF692(0, 0f, 3, 0);
				}
				clear_ped_tasks(PLAYER::PLAYER_PED_ID());
				func_203(&iLocal_293);
				if (iLocal_547)
				{
					func_539(&iLocal_175);
				}
				func_543(1, 1, 1, 1);
				if (iLocal_349 == 0)
				{
					iLocal_349 = 1;
				}
				func_243(func_216(), 1, Local_315[iLocal_349 - 1 /*8*/].f_7, 0, 0);
				_0x81CBAE94390F9F89();
				iLocal_532 = 1;
				func_2();
			}
			break;
	}
}

void func_243(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_101154.f_32575[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_244(Global_101154.f_32575[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (iParam3)
	{
		iVar0 = false;
		if (iParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 += iParam2;
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

bool func_244(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_268();
	if (iParam3 < 1)
	{
		return false;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_267(99, 1);
					func_266(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_266(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_266(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_252(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_251(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_266(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_266(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_266(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_251(1))
					{
						fVar0 = 0f;
						iVar1 = true;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_266(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_266(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_266(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_266(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_266(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_266(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_266(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_266(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_266(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (_get_this_script_hash())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_266(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_266(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_266(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_266(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_266(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_266(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_251(0))
							{
								fVar0 = 0f;
								iVar1 = false;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_266(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_266(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_266(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_266(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_266(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_266(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_250(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_267(95, iParam3);
					break;
				
				case 1:
					func_267(97, iParam3);
					break;
				
				case 2:
					func_267(96, iParam3);
					break;
			}
			func_267(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor(fVar0 * to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_247(iVar1);
		return true;
	}
	else if (fVar0 != 1f)
	{
		func_247(iVar1);
	}
	iVar5 = Global_52923[iVar2] + iParam3;
	switch (iParam1)
	{
		case 1:
			if (Global_52923[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52923[iVar2] = 2147483647;
				}
				else
				{
					Global_52923[iVar2] += iParam3;
				}
			}
			switch (iParam0)
			{
				case 0:
					func_266(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_266(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_266(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!iParam4)
			{
				if (Global_52923[iVar2] - iParam3 < 0)
				{
					return false;
				}
			}
			iVar3 = Global_52923[iVar2];
			Global_52923[iVar2] -= iParam3;
			if (iParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_2[Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_101154.f_25089.f_233[iVar2 /*69*/]++;
		Global_101154.f_25089.f_233[iVar2 /*69*/].f_1++;
		if (Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_101154.f_25089.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_246(iParam0);
	if (Global_35711 == 15)
	{
		func_245(0);
	}
	return true;
}

void func_245(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_101154.f_25089.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52931[iVar0 /*3*/][0] = Global_101154.f_25089[iVar0];
		Global_52931.f_31[iVar0 /*3*/][0] = Global_101154.f_25089.f_11[iVar0];
		Global_52931.f_62[iVar0 /*3*/][0] = Global_101154.f_25089.f_22[iVar0];
		Global_52931.f_93[iVar0 /*3*/][0] = Global_101154.f_25089.f_33[iVar0];
		Global_52931.f_124[iVar0 /*3*/][0] = Global_101154.f_25089.f_44[iVar0];
		Global_52931.f_155[iVar0 /*3*/][0] = Global_101154.f_25089.f_55[iVar0];
		Global_52931.f_186[iVar0 /*3*/][0] = Global_101154.f_25089.f_66[iVar0];
		Global_52931.f_217[iVar0 /*3*/][0] = Global_101154.f_25089.f_77[iVar0];
		Global_52931.f_248[iVar0 /*3*/][0] = Global_101154.f_25089.f_88[iVar0];
		if (!iParam0)
		{
			Global_52931[iVar0 /*3*/][1] = Global_101154.f_25089[iVar0];
			Global_52931.f_31[iVar0 /*3*/][1] = Global_101154.f_25089.f_11[iVar0];
			Global_52931.f_62[iVar0 /*3*/][1] = Global_101154.f_25089.f_22[iVar0];
			Global_52931.f_93[iVar0 /*3*/][1] = Global_101154.f_25089.f_33[iVar0];
			Global_52931.f_124[iVar0 /*3*/][1] = Global_101154.f_25089.f_44[iVar0];
			Global_52931.f_155[iVar0 /*3*/][1] = Global_101154.f_25089.f_55[iVar0];
			Global_52931.f_186[iVar0 /*3*/][1] = Global_101154.f_25089.f_66[iVar0];
			Global_52931.f_217[iVar0 /*3*/][1] = Global_101154.f_25089.f_77[iVar0];
			Global_52931.f_248[iVar0 /*3*/][1] = Global_101154.f_25089.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_246(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52923[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_247(int iParam0)
{
	int iVar0;
	char[64] cVar1;
	
	iVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0))
		{
			iVar0 = true;
			GAMEPLAY::CLEAR_BIT(&(Global_101154.f_25089.f_471), iParam0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0) || GAMEPLAY::IS_BIT_SET(Global_2097152[func_249() /*10375*/].f_7704.f_10, iParam0))
	{
		iVar0 = true;
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_25089.f_471), iParam0);
		GAMEPLAY::CLEAR_BIT(&(Global_2097152[func_249() /*10375*/].f_7704.f_10), iParam0);
	}
	if (iVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_set_notification_text_entry("COUP_RED");
		_add_text_component_item_string(func_248(iParam0));
		_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_248(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_249()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_250(int iParam0)
{
	func_267(93, iParam0);
	func_267(29, iParam0);
	func_267(30, iParam0);
}

int func_251(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_25089.f_471, iParam0);
	}
	return GAMEPLAY::IS_BIT_SET(Global_2097152[func_249() /*10375*/].f_7704.f_10, iParam0);
}

bool func_252(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = false;
	if (has_achievement_been_passed(27))
	{
		return false;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 += iVar0;
	}
	if (iParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && iVar2 / 2000000 != iVar1 / 2000000)
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_9(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return false;
	}
	func_253(27, 1);
	return true;
}

int func_253(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_254(iParam0, iParam1);
}

bool func_254(int iParam0, int iParam1)
{
	if (func_90(14) && !func_265(iParam0))
	{
		return false;
	}
	if (has_achievement_been_passed(iParam0) && iParam1 == 1)
	{
		return false;
	}
	if (Global_25366 != 0 && !Global_69489)
	{
		return false;
	}
	if (func_264(&Global_2563627))
	{
		if (func_262(&Global_2563627, iParam0))
		{
			return false;
		}
		if (func_255(&Global_2563627, iParam0))
		{
			return true;
		}
	}
	else
	{
		if (!give_achievement_to_player(iParam0))
		{
			return false;
		}
		if (has_achievement_been_passed(iParam0))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_255(auto uParam0, int iParam1)
{
	int iVar0;
	var[] uVar1 = new var[70];
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_90(14) && !func_265(iParam1))
	{
		return false;
	}
	if (func_262(uParam0, iParam1))
	{
		return false;
	}
	if (func_261(uParam0) < 0f)
	{
		func_260(uParam0, 0);
	}
	func_258(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1)
	{
		uVar1[iVar0 + 1] = *uParam0[iVar0];
		iVar0++;
	}
	func_256(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		*uParam0[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

bool func_256(auto uParam0, int iParam1)
{
	int iVar0;
	
	if (has_achievement_been_passed(iParam1))
	{
		return false;
	}
	if (func_90(14) && !func_265(iParam1))
	{
		return false;
	}
	if (func_262(uParam0, iParam1))
	{
		return false;
	}
	if (func_261(uParam0) < 0f)
	{
		func_260(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_257(uParam0, iVar0))
		{
			*uParam0[iVar0] = iParam1;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_257(auto uParam0, int iParam1)
{
	return *uParam0[iParam1] == 70;
}

void func_258(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_259(uParam0, iVar0);
		iVar0++;
	}
	func_260(uParam0, Global_2563626 - 0.5f);
}

void func_259(auto uParam0, int iParam1)
{
	*uParam0[iParam1] = 70;
}

void func_260(auto uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		*uParam0.f_72 = 0f;
	}
	else
	{
		*uParam0.f_72 = fParam1;
	}
}

auto func_261(auto uParam0)
{
	return *uParam0.f_72;
}

int func_262(auto uParam0, int iParam1)
{
	return func_263(uParam0, iParam1) != -1;
}

int func_263(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (*uParam0[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_264(auto uParam0)
{
	return *uParam0.f_71 == 1;
}

bool func_265(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return true;
		
		default:
	}
	return false;
}

void func_266(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_267(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_51491[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 += iParam1;
		STATS::STAT_SET_INT(Global_51491[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_268()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52923[0] == iVar0)
		{
			Global_52923[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52923[1] == iVar0)
		{
			Global_52923[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52923[2] == iVar0)
		{
			Global_52923[2] = iVar0;
		}
	}
}

int func_269(auto uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_220(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_210(sParam2, iParam3, 0);
}

void func_270()
{
	Global_14578 = 0;
	func_271();
}

void func_271()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

void func_272()
{
	switch (iLocal_158)
	{
		case 0:
			if (is_audio_scene_active("NIGEL_03_MIX_SETTINGS"))
			{
				stop_audio_scene("NIGEL_03_MIX_SETTINGS");
			}
			if (iLocal_645)
			{
				if (!func_228(Local_165))
				{
					if (func_208())
					{
						func_270();
					}
					iLocal_158 = 0;
					iLocal_157 = 10;
				}
				else if (iLocal_646)
				{
					if (func_269(&uLocal_350, "NIGE3AU", "NIGEL3_X1", 7, 0, 0, 0))
					{
						iLocal_158 = 1;
					}
				}
				else if (func_269(&uLocal_350, "NIGE3AU", "NIGEL3_X2", 7, 0, 0, 0))
				{
					iLocal_158 = 1;
				}
			}
			else if (func_269(&uLocal_350, "NIGE3AU", "NIGEL3_X3", 7, 0, 0, 0))
			{
				iLocal_158 = 1;
			}
			break;
		
		case 1:
			if (!func_208())
			{
				iLocal_158 = 2;
			}
			break;
		
		case 2:
			sLocal_698 = "N3FMISST";
			iLocal_157 = 13;
			iLocal_158 = 0;
			break;
	}
}

void func_273()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	
	switch (iLocal_158)
	{
		case 0:
			if (!iLocal_618)
			{
				if (func_208())
				{
					func_366();
				}
				iLocal_618 = true;
				iLocal_617 = 0;
				iLocal_619 = 0;
				iLocal_622 = 0;
				func_305(1, "Train section", 1, 0, 0, 1);
			}
			if (iLocal_617)
			{
				if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 0))
				{
					clear_prints();
					func_241(&iLocal_294);
					iLocal_617 = 0;
				}
			}
			else if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 0))
			{
				clear_prints();
				func_241(&iLocal_294);
				iLocal_294 = func_304(Local_165, 1, 5);
				if (!iLocal_162)
				{
					func_303("N3RTCAR", 7500, 1);
					iLocal_162 = 1;
				}
				iLocal_617 = 1;
			}
			if (func_269(&uLocal_350, "NIGE3AU", "NIGEL3_CX", 7, 1, 0, 0))
			{
				func_241(&iLocal_294);
				iLocal_619 = 1;
				iLocal_620 = 0;
			}
			if (!iLocal_622 && func_302())
			{
				iLocal_622 = 1;
			}
			if (iLocal_619 && iLocal_622)
			{
				if (iLocal_617 == 0)
				{
					func_303("N3RAM", 7500, 1);
					iLocal_626 = 1;
					func_241(&iLocal_294);
					iLocal_158 = 1;
				}
				_0x293220DA1B46CEBC(10f, 6f, 1);
				iLocal_645 = false;
				iLocal_631 = 0;
				iLocal_661 = 0;
				iLocal_158 = 1;
			}
			break;
		
		case 1:
			if (iLocal_617)
			{
				if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 1))
				{
					clear_prints();
					func_241(&iLocal_294);
					if (!iLocal_626)
					{
						func_303("N3RAM", 7500, 1);
						iLocal_626 = 1;
					}
					iLocal_617 = 0;
				}
				else if (!func_301(PLAYER::PLAYER_PED_ID(), Local_165, 200f, 1))
				{
					iLocal_157 = 13;
					iLocal_158 = 0;
					sLocal_698 = "N3FLEFT";
					break;
				}
			}
			else if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 0))
			{
				if (func_300("N3RAM", 0, 0))
				{
					clear_prints();
				}
				iLocal_617 = 1;
			}
			if (func_228(Local_557))
			{
				if (is_audio_scene_active("NIGEL_03_JOURNEY_MIX"))
				{
					stop_audio_scene("NIGEL_03_JOURNEY_MIX");
				}
				if (!is_audio_scene_active("NIGEL_03_MIX_SETTINGS"))
				{
					_0x153973AB99FE8980(Local_557, "NIGEL_03_MIX_GROUP", 0f);
					start_audio_scene("NIGEL_03_MIX_SETTINGS");
					start_vehicle_horn(Local_557, 30000, get_hash_key("HELDDOWN"), 0);
					play_sound_from_entity(iLocal_648, "TRAIN_COMING", Local_557, "NIGEL_03_SOUNDSET", 0, 0);
				}
				func_286(0);
			}
			if (is_entity_in_angled_area(Local_165, Local_298[0 /*3*/], Local_298[1 /*3*/], Local_298.f_7, 0, true, 0))
			{
				if ((func_285(Local_165, Local_557, 1) < 120f && !iLocal_627) && is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 0))
				{
					if (get_entity_speed(Local_165) > 0.25f)
					{
						func_303("N3BAIL", 7500, 1);
					}
					else
					{
						func_303("N3EXIT", 7500, 1);
					}
					iLocal_627 = true;
				}
			}
			else if (iLocal_627)
			{
				clear_this_print("N3BAIL");
				clear_this_print("N3EXIT");
			}
			if (iLocal_627 && is_ped_on_foot(PLAYER::PLAYER_PED_ID()))
			{
				clear_this_print("N3BAIL");
				clear_this_print("N3EXIT");
			}
			vVar0 = {get_entity_speed_vector(Local_557, 0)};
			vVar3 = {get_entity_speed_vector(Local_165, 0)};
			if (is_entity_touching_entity(Local_165, Local_557))
			{
				if (uLocal_633[0] + uLocal_636[0] > 14f)
				{
					if (uLocal_639[1])
					{
						if (func_283())
						{
							if (get_player_invincible(player_id()))
							{
							}
							else
							{
								func_282(797);
								if (iLocal_631)
								{
									iLocal_629 = GAMEPLAY::GET_GAME_TIMER() - iLocal_629;
									if (iLocal_629 < iLocal_630)
									{
										iLocal_632 = true;
										func_282(796);
									}
								}
							}
							clear_prints();
							func_241(&iLocal_294);
							func_286(1);
							set_vehicle_undriveable(Local_165, true);
							iLocal_158 = 0;
							iLocal_157 = 9;
							break;
						}
						else
						{
							func_539(&iLocal_175);
							if (is_special_ability_active(player_id()))
							{
								special_ability_deactivate(player_id());
							}
							explode_vehicle(Local_165, 1, 0);
							explode_ped_head(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"));
						}
					}
					else
					{
						clear_prints();
						clear_help(1);
						func_286(1);
						func_241(&iLocal_294);
						iLocal_157 = 7;
						iLocal_158 = 0;
						iLocal_645 = true;
						if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 1))
						{
							iLocal_646 = true;
						}
						else
						{
							iLocal_646 = false;
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_557))
						{
							set_mission_train_as_no_longer_needed(&Local_557, 0);
						}
					}
				}
			}
			else
			{
				func_281();
			}
			func_279(-vVar0.y, vVar3.y);
			if (ENTITY::DOES_ENTITY_EXIST(Local_557))
			{
				vVar6 = {get_entity_coords(Local_165, 1)};
				vVar9 = {get_entity_coords(Local_557, 0)};
				if (vVar6.y > vVar9.y)
				{
					clear_prints();
					func_241(&iLocal_294);
					iLocal_157 = 7;
					iLocal_158 = 0;
				}
				else
				{
					func_278();
				}
			}
			func_274();
			break;
		
		case 2:
			break;
	}
}

void func_274()
{
	func_276();
	switch (iLocal_620)
	{
		case 0:
			if (iLocal_619 && !func_208())
			{
				iLocal_621 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_620 = 1;
			}
			break;
		
		case 1:
			if (func_228(iLocal_175) && GAMEPLAY::GET_GAME_TIMER() > iLocal_621)
			{
				if (func_300("N3BAIL", 0, 0))
				{
					if (func_269(&uLocal_350, "NIGE3AU", "NIGEL3_PNC", 7, 1, 0, 0))
					{
						func_275();
						iLocal_620 = 2;
					}
				}
				else if (func_269(&uLocal_350, "NIGE3AU", "NIGEL3_PNC", 7, 0, 0, 0))
				{
					func_275();
					iLocal_620 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_208())
			{
				iLocal_621 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(1000, 2500);
				iLocal_620 = 1;
			}
			break;
	}
}

void func_275()
{
	if (func_228(iLocal_175))
	{
		play_sound_from_entity(iLocal_516, "TRUNK_THUMPS", iLocal_175, 0, 0, 0);
		iLocal_518 = 0;
	}
}

void func_276()
{
	if (func_228(Local_165))
	{
		switch (iLocal_518)
		{
			case 0:
				if (get_entity_speed(Local_165) < 0.5f)
				{
					func_277();
					apply_force_to_entity(Local_165, 1, 0f, 0f, IntToFloat(iLocal_523), fLocal_524, -1.5f, 0f, 0, 1, 1, 0, 1, 1);
				}
				iLocal_519 = get_random_int_in_range(3, 7);
				iLocal_520 = 1;
				iLocal_521 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_522 = get_random_int_in_range(100, 250);
				iLocal_518 = 1;
				break;
			
			case 1:
				if (iLocal_520 < iLocal_519)
				{
					if (GAMEPLAY::GET_GAME_TIMER() - iLocal_521 > iLocal_522)
					{
						if (get_entity_speed(Local_165) < 0.5f)
						{
							func_277();
							apply_force_to_entity(Local_165, 1, 0f, 0f, IntToFloat(iLocal_523), fLocal_524, -1.5f, 0f, 0, 1, 1, 0, 1, 1);
						}
						iLocal_521 = GAMEPLAY::GET_GAME_TIMER();
						iLocal_522 = get_random_int_in_range(100, 250);
						iLocal_520++;
					}
				}
				else
				{
					iLocal_518 = 2;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_277()
{
	iLocal_523 = get_random_int_in_range(-220, -120);
	fLocal_524 = 0.5f * to_float(get_random_int_in_range(-2, 3));
}

void func_278()
{
	Vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;
	
	if (iLocal_618)
	{
		if (func_228(Local_557))
		{
			vVar0 = {get_entity_coords(Local_557, 1)};
			if (!iLocal_624)
			{
				if (vVar0.y < 1824.36f)
				{
					iLocal_625 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_624 = true;
				}
				else if (ENTITY::DOES_ENTITY_EXIST(Local_557.f_6) && is_entity_dead(Local_557.f_6, 0))
				{
					iLocal_625 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_624 = true;
				}
			}
			if (iLocal_624)
			{
				fVar3 = 75f - 25f;
				iVar5 = GAMEPLAY::GET_GAME_TIMER() - iLocal_625;
				if (iVar5 < 11000)
				{
					fVar4 = to_float(iVar5) / to_float(11000);
				}
				else
				{
					fVar4 = 1f;
				}
				set_train_speed(Local_557, 25f + fVar3 * fVar4);
			}
			else
			{
				set_train_speed(Local_557, 25f);
			}
		}
	}
}

void func_279(float fParam0, auto uParam1)
{
	uLocal_633[0] = uLocal_633[1];
	uLocal_633[1] = fParam0;
	uLocal_636[0] = uLocal_636[1];
	uLocal_636[1] = uParam1;
	uLocal_639[0] = uLocal_639[1];
	uLocal_639[1] = func_280();
	iLocal_642[0] = iLocal_642[1];
	iLocal_642[1] = is_entity_touching_entity(PLAYER::PLAYER_PED_ID(), Local_165);
}

bool func_280()
{
	Vector3[] vVar0 = new Vector3[2];
	float fVar7;
	float fVar8;
	Vector3[] vVar9 = new Vector3[4];
	
	if (func_228(Local_165) && func_228(Local_557))
	{
		if (is_entity_in_angled_area(Local_165, Local_306[0 /*3*/], Local_306[1 /*3*/], Local_306.f_7, 0, true, 0))
		{
			return true;
		}
		vVar0[0 /*3*/] = {get_offset_from_entity_in_world_coords(Local_557, 0f, 8f, -4f)};
		vVar0[1 /*3*/] = {get_offset_from_entity_in_world_coords(Local_557, 0f, 16f, 8f)};
		if (is_entity_in_angled_area(Local_165, vVar0[0 /*3*/], vVar0[1 /*3*/], Local_306.f_7, 0, true, 0))
		{
			return true;
		}
		fVar7 = 1.6f;
		fVar8 = 4.2f;
		vVar9[0 /*3*/] = {get_offset_from_entity_in_world_coords(Local_165, -fVar7 / 2f, fVar8 / 2f, 0f)};
		vVar9[1 /*3*/] = {get_offset_from_entity_in_world_coords(Local_165, fVar7 / 2f, fVar8 / 2f, 0f)};
		vVar9[2 /*3*/] = {get_offset_from_entity_in_world_coords(Local_165, -fVar7 / 2f, -fVar8 / 2f, 0f)};
		vVar9[3 /*3*/] = {get_offset_from_entity_in_world_coords(Local_165, fVar7 / 2f, -fVar8 / 2f, 0f)};
		iLocal_164 = 0;
		while (iLocal_164 <= 3)
		{
			if (is_point_in_angled_area(vVar9[iLocal_164 /*3*/], vVar0[0 /*3*/], vVar0[1 /*3*/], Local_306.f_7, 0, true))
			{
				return true;
			}
			iLocal_164++;
		}
	}
	return false;
}

void func_281()
{
	float fVar0;
	
	if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 0))
	{
		if (get_entity_speed(Local_165) > 2f && func_280())
		{
			fVar0 = func_285(Local_165, Local_557, 1);
			if (fVar0 < fLocal_628)
			{
				fLocal_628 = fVar0;
			}
		}
	}
	else if (!iLocal_631)
	{
		if (get_entity_speed(Local_165) > 2f && func_280())
		{
			iLocal_629 = GAMEPLAY::GET_GAME_TIMER();
			iLocal_631 = 1;
		}
	}
}

void func_282(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_55750 = 0;
	if (!Global_55974[iParam0 /*13*/] == 3)
	{
		return;
	}
	iVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67844)
	{
		if (Global_67845[iVar1 /*9*/] == iParam0)
		{
			iVar0 = true;
			Global_67845[iVar1 /*9*/].f_1 = 1;
			Global_67845[iVar1 /*9*/].f_2 = 0f;
			if (Global_67845[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!iVar0)
	{
	}
}

bool func_283()
{
	if (get_player_invincible(player_id()))
	{
		return true;
	}
	if (func_284())
	{
		return false;
	}
	if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 1) && !(iLocal_617 && iLocal_642[1]))
	{
		return true;
	}
	return false;
}

bool func_284()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 fVar6;
	
	vVar0 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
	vVar3 = {get_entity_coords(Local_165, 1)};
	fVar6 = get_distance_between_coords(vVar3, vVar0, 1);
	if (is_entity_touching_entity(Local_165, PLAYER::PLAYER_PED_ID()) && vVar0.z - vVar3.z > 0.5f)
	{
		return true;
	}
	if (fVar6 < 3f && vVar0.z - vVar3.z > 0.5f)
	{
		return true;
	}
	return false;
}

auto func_285(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	if (!is_entity_dead(iParam0, 0))
	{
		vVar0 = {get_entity_coords(iParam0, 1)};
	}
	else
	{
		vVar0 = {get_entity_coords(iParam0, 0)};
	}
	if (!is_entity_dead(iParam1, 0))
	{
		vVar3 = {get_entity_coords(iParam1, 1)};
	}
	else
	{
		vVar3 = {get_entity_coords(iParam1, 0)};
	}
	return get_distance_between_coords(vVar0, vVar3, iParam2);
}

void func_286(int iParam0)
{
	if (iParam0)
	{
		func_299();
		clear_help(1);
	}
	else if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 0))
	{
		if (iLocal_661 && is_help_message_being_displayed())
		{
			clear_help(1);
		}
		func_299();
	}
	else if (func_301(Local_165, Local_557, 350f, 1))
	{
		if (((is_entity_in_angled_area(Local_165, Local_663[0 /*8*/][0 /*3*/], Local_663[0 /*8*/][1 /*3*/], Local_663[0 /*8*/].f_7, 0, true, 0) || is_entity_in_angled_area(Local_165, Local_663[1 /*8*/][0 /*3*/], Local_663[1 /*8*/][1 /*3*/], Local_663[1 /*8*/].f_7, 0, true, 0)) || is_entity_in_angled_area(Local_165, Local_663[2 /*8*/][0 /*3*/], Local_663[2 /*8*/][1 /*3*/], Local_663[2 /*8*/].f_7, 0, true, 0)) || is_entity_in_angled_area(Local_165, Local_663[3 /*8*/][0 /*3*/], Local_663[3 /*8*/][1 /*3*/], Local_663[3 /*8*/].f_7, 0, true, 0))
		{
			if (!iLocal_661)
			{
				func_298("N3TRAINCAM", -1);
				iLocal_661 = 1;
			}
			if (func_288(&uLocal_649, 1, 1, 0))
			{
				func_287();
				if (does_cam_exist(iLocal_662))
				{
					point_cam_at_entity(iLocal_662, Local_165, 0f, 0f, 2f, 1);
				}
			}
			else
			{
				func_299();
			}
		}
	}
	else
	{
		func_299();
	}
}

void func_287()
{
	if (!does_cam_exist(iLocal_662))
	{
		iLocal_662 = create_cam("DEFAULT_SCRIPTED_CAMERA", false);
		set_cam_fov(iLocal_662, 40.68f);
		shake_cam(iLocal_662, "HAND_SHAKE", 1f);
		attach_cam_to_entity(iLocal_662, Local_557, 3.32f, -6.08f, 4.28f, 1);
		set_cam_active(iLocal_662, true);
		render_script_cams(true, false, 3000, 1, 0, 0);
	}
}

bool func_288(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	if (*uParam0.f_1)
	{
		if (GAMEPLAY::GET_GAME_TIMER() >= *uParam0.f_8 + *uParam0.f_9)
		{
			*uParam0.f_1 = 0;
		}
	}
	switch (*uParam0.f_5)
	{
		case 0:
			*uParam0.f_7 = 0;
			if (*uParam0.f_6 == 0)
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_297(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 1;
						*uParam0.f_7 = 1;
					}
				}
				else if (func_296(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (func_296(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			else if (*uParam0.f_6 == 2)
			{
				if (func_297(iParam1, iParam2, iParam3))
				{
					*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
					*uParam0.f_5 = 1;
					*uParam0.f_7 = 1;
				}
			}
			if (func_295(uParam0))
			{
				*uParam0.f_7 = 1;
				*uParam0.f_5 = 4;
			}
			break;
		
		case 1:
			if (GAMEPLAY::GET_GAME_TIMER() - *uParam0.f_4 <= 500)
			{
				if (*uParam0.f_6 == 0)
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_297(iParam1, iParam2, iParam3))
						{
							*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
							*uParam0.f_5 = 3;
						}
					}
					else if (!func_296(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (!func_296(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 3;
					}
				}
				else if (*uParam0.f_6 == 2)
				{
					if (!func_297(iParam1, iParam2, iParam3))
					{
						*uParam0.f_4 = GAMEPLAY::GET_GAME_TIMER();
						*uParam0.f_5 = 3;
					}
				}
			}
			else
			{
				*uParam0.f_5 = 2;
			}
			break;
		
		case 2:
			if (*uParam0.f_6 == 0)
			{
				if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_297(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (!func_296(iParam1, iParam2, iParam3))
				{
					*uParam0.f_5 = 0;
				}
			}
			else if (*uParam0.f_6 == 1)
			{
				if (!func_296(iParam1, iParam2, iParam3) || is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
				{
					*uParam0.f_5 = 0;
				}
			}
			else if (*uParam0.f_6 == 2)
			{
				if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) || get_is_task_active(PLAYER::PLAYER_PED_ID(), 2))
				{
					*uParam0.f_5 = 0;
				}
				else if (!func_297(iParam1, iParam2, iParam3))
				{
					*uParam0.f_5 = 0;
				}
			}
			break;
		
		case 3:
			if (GAMEPLAY::GET_GAME_TIMER() - *uParam0.f_4 > 500)
			{
				if (*uParam0.f_6 == 0)
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_294(iParam1, iParam2, iParam3))
						{
							*uParam0.f_5 = 0;
						}
					}
					else if (func_293(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (*uParam0.f_6 == 1)
				{
					if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) || func_293(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
				else if (*uParam0.f_6 == 2)
				{
					if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1) || get_is_task_active(PLAYER::PLAYER_PED_ID(), 2))
					{
						*uParam0.f_5 = 0;
					}
					else if (func_294(iParam1, iParam2, iParam3))
					{
						*uParam0.f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_295(uParam0))
			{
				*uParam0.f_5 = 0;
			}
			break;
	}
	if (!func_290(iParam1, iParam2, iParam3))
	{
		*uParam0.f_5 = 0;
		*uParam0.f_7 = 0;
	}
	if (*uParam0.f_7)
	{
		func_289();
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

void func_289()
{
	GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2284, 4);
}

bool func_290(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		if (!is_player_control_on(player_id()))
		{
			return false;
		}
	}
	if (iParam2)
	{
		return true;
	}
	if (is_player_switch_in_progress())
	{
		return false;
	}
	if (func_292(0))
	{
		return false;
	}
	if (func_291())
	{
		return false;
	}
	if (_network_is_text_chat_active())
	{
		return false;
	}
	if (Global_68058)
	{
		return false;
	}
	if (_get_number_of_instances_of_streamed_script(joaat("appinternet")) > 0)
	{
		return false;
	}
	if (Global_52930)
	{
		return false;
	}
	if (iParam1)
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (is_ped_in_any_boat(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(3) == 3 || _0xEE778F8C7E1142E2(3) == 4)
				{
					return false;
				}
			}
			else if (is_ped_in_any_heli(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(6) == 3 || _0xEE778F8C7E1142E2(6) == 4)
				{
					return false;
				}
			}
			else if (is_ped_in_any_plane(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(4) == 3 || _0xEE778F8C7E1142E2(4) == 4)
				{
					return false;
				}
			}
			else if (is_ped_in_any_sub(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(5) == 3 || _0xEE778F8C7E1142E2(5) == 4)
				{
					return false;
				}
			}
			else if (is_ped_on_any_bike(PLAYER::PLAYER_PED_ID()))
			{
				if (_0xEE778F8C7E1142E2(2) == 3 || _0xEE778F8C7E1142E2(2) == 4)
				{
					return false;
				}
			}
			else if (get_follow_vehicle_cam_view_mode() == 3 || get_follow_vehicle_cam_view_mode() == 4)
			{
				return false;
			}
			if (is_gameplay_cam_looking_behind())
			{
				return false;
			}
		}
	}
	return true;
}

int func_291()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17257.f_5745 + 100;
}

bool func_292(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2283, 14))
			{
				return true;
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
	if (_get_number_of_instances_of_streamed_script(joaat("cellphone_flashhand")) > 0)
	{
		return true;
	}
	if (Global_14413.f_1 > 3)
	{
		return true;
	}
	return false;
}

bool func_293(int iParam0, int iParam1, int iParam2)
{
	if (!func_290(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!is_player_targetting_anything(player_id()))
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (is_disabled_control_just_released(0, 80))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_294(int iParam0, int iParam1, int iParam2)
{
	if (!func_290(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (is_follow_vehicle_cam_active())
		{
			if (is_disabled_control_just_released(0, 80))
			{
				set_cinematic_button_active(false);
				return true;
			}
		}
	}
	return false;
}

bool func_295(auto uParam0)
{
	int iVar0;
	
	if (*uParam0.f_2 > 0)
	{
		iVar0 = *uParam0.f_10 / 2;
		if (*uParam0.f_2 + iVar0 > GAMEPLAY::GET_GAME_TIMER())
		{
			return true;
		}
	}
	return false;
}

bool func_296(int iParam0, int iParam1, int iParam2)
{
	if (!func_290(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (!is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!is_player_targetting_anything(player_id()))
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (is_disabled_control_pressed(0, 80) && GAMEPLAY::GET_GAME_TIMER() > Global_116)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_297(int iParam0, int iParam1, int iParam2)
{
	if (!func_290(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (is_follow_vehicle_cam_active())
		{
			if (is_disabled_control_pressed(0, 80) && GAMEPLAY::GET_GAME_TIMER() > Global_116)
			{
				set_cinematic_button_active(false);
				return true;
			}
		}
	}
	return false;
}

void func_298(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

void func_299()
{
	if (does_cam_exist(iLocal_662))
	{
		if (is_cam_active(iLocal_662))
		{
			set_cam_active(iLocal_662, false);
			render_script_cams(false, false, 3000, 1, 0, 0);
		}
		destroy_cam(iLocal_662, 0);
	}
}

auto func_300(char* sParam0, int iParam1, char* sParam2)
{
	_0x853648FD1063A213(sParam0);
	if (iParam1 == 1)
	{
		_add_text_component_item_string(sParam2);
	}
	return _0x8A9BA1AB3E237613();
}

int func_301(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return vdist2(get_entity_coords(iParam0, iParam3), get_entity_coords(iParam1, iParam3)) <= fParam2 * fParam2;
}

bool func_302()
{
	if (!iLocal_623)
	{
		STREAMING::REQUEST_MODEL(Local_557.f_1);
		STREAMING::REQUEST_MODEL(joaat("freight"));
		STREAMING::REQUEST_MODEL(joaat("freightcar"));
		STREAMING::REQUEST_MODEL(joaat("freightcont1"));
		STREAMING::REQUEST_MODEL(joaat("freightcont2"));
		STREAMING::REQUEST_MODEL(Local_557.f_7);
		iLocal_623 = 1;
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_557))
	{
		if ((((STREAMING::HAS_MODEL_LOADED(Local_557.f_1) && STREAMING::HAS_MODEL_LOADED(joaat("freight"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightcar"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightcont1"))) && STREAMING::HAS_MODEL_LOADED(joaat("freightcont2")))
		{
			Local_557 = create_mission_train(10, Local_557.f_2, 1);
			set_entity_invincible(Local_557, true);
			set_train_speed(Local_557, 25f);
			set_model_as_no_longer_needed(Local_557.f_1);
			set_model_as_no_longer_needed(joaat("freight"));
			set_model_as_no_longer_needed(joaat("freightcar"));
			set_model_as_no_longer_needed(joaat("freightcont1"));
			set_model_as_no_longer_needed(joaat("freightcont2"));
		}
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_557.f_6))
	{
		if (STREAMING::HAS_MODEL_LOADED(Local_557.f_7) && func_228(Local_557))
		{
			Local_557.f_6 = PED::CREATE_PED_inside_vehicle(Local_557, 26, Local_557.f_7, -1, 1, true);
			set_ped_component_variation(Local_557.f_6, 3, true, false, 0);
			set_ped_component_variation(Local_557.f_6, 4, false, false, 0);
			set_ped_component_variation(Local_557.f_6, 10, false, false, 0);
			set_blocking_of_non_temporary_events(Local_557.f_6, true);
			set_model_as_no_longer_needed(joaat("s_m_m_trucker_01"));
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_303(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	_set_text_entry_2(sParam0);
	_draw_subtitle_timed(iParam1, 1);
}

int func_304(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_228(iParam0))
	{
		iVar0 = add_blip_for_entity(iParam0);
		set_blip_as_friendly(iVar0, iParam1);
		set_blip_priority(iVar0, iParam2);
		set_blip_scale(iVar0, 1f);
	}
	return iVar0;
}

void func_305(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[8] cVar3;
	int iVar5;
	auto uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!are_strings_equal("FinaleC2", get_this_script_name()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_91315)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_91315)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_245(1);
		if (iParam0 <= Global_91315)
		{
		}
		iVar1 = func_364(get_this_script_name(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_101154.f_7775.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_362(iVar1);
			cVar3 = {Global_82399[iVar1 /*34*/].f_8};
			if (iVar1 == 90)
			{
				switch (Global_101154.f_7775.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			playstats_mission_checkpoint(&cVar3, iVar2, Global_91315, iParam0);
		}
		else
		{
			iVar5 = func_200(get_this_script_name(), 1);
			if (iVar5 != -1)
			{
				Global_101154.f_17264[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_155(iVar5)}, 4);
				playstats_mission_checkpoint(&uVar6, 0, Global_91315, iParam0);
			}
			else
			{
				iVar10 = func_361(&(Global_91278.f_3));
				if (iVar10 > -1)
				{
					Global_101154.f_29511.f_4[iVar10] = 0;
				}
			}
		}
		Global_85789 = iParam2;
		Global_91315 = iParam0;
		func_306(iParam0, sParam1, iParam4, iParam5);
		if (are_strings_equal(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_91315)
	{
	}
}

void func_306(int iParam0, auto uParam1, int iParam2, int iParam3)
{
	func_307(&Global_95496, get_this_script_name(), iParam0, uParam1, iParam3, iParam2);
}

void func_307(auto uParam0, char* sParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_216();
	*uParam0.f_1 = func_350();
	_get_weather_type_transition(uParam0.f_6, uParam0.f_7, uParam0.f_8);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_336(uParam0.f_2305, 0);
		func_335(PLAYER::PLAYER_PED_ID());
		func_329(PLAYER::PLAYER_PED_ID(), 0);
		get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), uParam0.f_2, 1);
		if (*uParam0.f_2 == 0 || *uParam0.f_2 == joaat("object"))
		{
			*uParam0.f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		*uParam0.f_17[iVar1] = Global_101154.f_1826.f_539.f_294[iVar1];
		if (iVar1 == func_328())
		{
			func_324(PLAYER::PLAYER_PED_ID(), uParam0.f_616[iVar1 /*65*/], 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				*(uParam0.f_616[iVar1 /*65*/])[iVar0] = Global_91068[iVar1 /*65*/][iVar0];
				*(uParam0.f_616[iVar1 /*65*/].f_13)[iVar0] = Global_91068[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			*(uParam0.f_616[iVar1 /*65*/]).f_59 = Global_91068[iVar1 /*65*/].f_59;
			*(uParam0.f_616[iVar1 /*65*/]).f_60 = Global_91068[iVar1 /*65*/].f_60;
			*(uParam0.f_616[iVar1 /*65*/]).f_61 = Global_91068[iVar1 /*65*/].f_61;
			*(uParam0.f_616[iVar1 /*65*/]).f_62 = Global_91068[iVar1 /*65*/].f_62;
			*(uParam0.f_616[iVar1 /*65*/]).f_63 = Global_91068[iVar1 /*65*/].f_63;
			*(uParam0.f_616[iVar1 /*65*/]).f_64 = Global_91068[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				*(uParam0.f_616[iVar1 /*65*/].f_39)[iVar0] = Global_91068[iVar1 /*65*/].f_39[iVar0];
				*(uParam0.f_616[iVar1 /*65*/].f_49)[iVar0] = Global_91068[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			*(uParam0.f_812[iVar1 /*284*/][iVar0 /*3*/]) = {Global_101154.f_1826.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/]};
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			*(uParam0.f_812[iVar1 /*284*/].f_133[iVar0 /*3*/]) = {Global_101154.f_1826.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/]};
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
				break;
		}
		*uParam0.f_9[iVar1] = Global_101154.f_25089.f_233[iVar1 /*69*/].f_1;
		*uParam0.f_13[iVar1] = Global_52923[iVar1];
		*(uParam0.f_25[0 /*295*/][iVar1 /*98*/]) = {Global_101154.f_1826.f_539.f_1635[0 /*295*/][iVar1 /*98*/]};
		*(uParam0.f_25[1 /*295*/][iVar1 /*98*/]) = {Global_101154.f_1826.f_539.f_1635[1 /*295*/][iVar1 /*98*/]};
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			*(uParam0.f_2259[iVar1 /*15*/])[iVar0] = Global_101154.f_1826.f_493[iVar1 /*15*/][iVar0];
			*(uParam0.f_2259[iVar1 /*15*/].f_5)[iVar0] = Global_101154.f_1826.f_493[iVar1 /*15*/].f_5[iVar0];
			*(uParam0.f_2259[iVar1 /*15*/].f_10)[iVar0] = Global_101154.f_1826.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			*(uParam0.f_1766[iVar1 /*164*/])[iVar0] = Global_101154.f_1826[iVar1 /*164*/][iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_4)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_4[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_8)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_8[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_12)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_12[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_16)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_16[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_20)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_20[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_24)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_24[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_28)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_28[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_32)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_32[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_36)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_36[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_40)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_40[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_44)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_44[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_48)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_48[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_52)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_52[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_56)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_56[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_60)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_60[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_64)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_64[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_68)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_68[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_72)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_72[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_76)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_76[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_80)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_80[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_84)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_84[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_88)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_88[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_92)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_92[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_96)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_96[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_100)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_100[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_104)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_104[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_108)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_108[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_112)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_112[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_116)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_116[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_120)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_120[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_124)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_124[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_128)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_128[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_132)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_132[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_136)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_136[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_140)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_140[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_144)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_144[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_148)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_148[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_152)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_152[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_156)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_156[iVar0];
			*(uParam0.f_1766[iVar1 /*164*/].f_160)[iVar0] = Global_101154.f_1826[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("sp0_special_ability"), uParam0.f_1762[0], -1);
	STATS::STAT_GET_INT(joaat("sp1_special_ability"), uParam0.f_1762[1], -1);
	STATS::STAT_GET_INT(joaat("sp2_special_ability"), uParam0.f_1762[2], -1);
	*uParam0.f_5 = 145;
	if (iParam4 == 1)
	{
		func_309(uParam0.f_2311, uParam0, iParam5, 1, 1, 0);
	}
	func_308(uParam0.f_2401);
	uParam3 = uParam3;
	uParam2 = uParam2;
}

bool func_308(auto uParam0)
{
	*uParam0 = Global_87460;
	*uParam0.f_1 = Global_87461;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	return true;
}

void func_309(auto uParam0, auto uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		*uParam1.f_5 = func_148(iParam2);
	}
	if (func_321(iParam2, &iVar0, iParam3, iParam5))
	{
		func_310(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!is_entity_dead(iVar0, 0))
		{
			if (is_vehicle_model(iVar0, joaat("skylift")) && is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iVar0, 0))
			{
				func_310(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

bool func_310(auto uParam0, auto uParam1, int iParam2, int iParam3)
{
	if (is_vehicle_driveable(iParam2, 0))
	{
		func_312(uParam0, iParam2, iParam3);
		*uParam1.f_4 = iParam2;
		if (func_311(iParam2))
		{
			*uParam1.f_3 = 1;
		}
		else
		{
			*uParam1.f_3 = 0;
		}
		return true;
	}
	return false;
}

bool func_311(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_91278.f_22[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_312(auto uParam0, int iParam1, int iParam2)
{
	func_318(iParam1, uParam0.f_12);
	*uParam0.f_7 = func_315(iParam1, 145, 0);
	*uParam0.f_11 = func_314(iParam1);
	if (!*uParam0.f_7)
	{
		if (!*uParam0.f_10)
		{
			*uParam0.f_10 = func_313(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = {get_entity_coords(iParam1, 1)};
		*uParam0.f_6 = get_entity_heading(iParam1);
		*uParam0.f_3 = {get_entity_velocity(iParam1)};
		if (is_entity_in_angled_area(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			*uParam0.f_6 = 305.6424f;
		}
		if (Global_69224 == iParam1)
		{
			*uParam0.f_9 = 1;
		}
	}
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		*uParam0.f_8 = 1;
	}
	else
	{
		*uParam0.f_8 = 0;
	}
}

bool func_313(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[iVar0]))
		{
			if (iParam0 == Global_68319.f_484[iVar0])
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_314(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!is_vehicle_driveable(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				return Global_88952[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_315(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_88952[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == func_316(iParam1, iParam2))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_316(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_150(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_317(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_317(int iParam0, auto uParam1, int iParam2)
{
	int iVar0;
	
	*uParam1.f_88 = 1;
	*uParam1.f_84 = 255;
	*uParam1.f_85 = 255;
	*uParam1.f_86 = 255;
	*uParam1.f_97 = 1;
	*uParam1.f_3 = 1000;
	*uParam1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_101154.f_7775.f_99.f_58[128] && !Global_101154.f_7775.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 3f;
					*uParam1.f_4 = 0;
					*uParam1.f_9 = 1;
					*uParam1.f_11[0] = 1;
					StringCopy(uParam1.f_27, "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 14.9f;
					*uParam1.f_5 = 43;
					*uParam1.f_6 = 43;
					*uParam1.f_7 = 0;
					*uParam1.f_8 = 156;
					*uParam1.f_9 = 0;
					StringCopy(uParam1.f_27, "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 14f;
					*uParam1.f_5 = 32;
					*uParam1.f_6 = 0;
					*uParam1.f_7 = 0;
					*uParam1.f_8 = 156;
					StringCopy(uParam1.f_27, "BETTY 32", 16);
					if (Global_101154.f_7775.f_99.f_58[119])
					{
						*uParam1.f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_101154.f_7775.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 6f;
					*uParam1.f_5 = 53;
					*uParam1.f_6 = 0;
					*uParam1.f_7 = 59;
					*uParam1.f_8 = 156;
					StringCopy(uParam1.f_27, "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					*uParam1.f_2 = 0f;
					*uParam1.f_5 = 111;
					*uParam1.f_6 = 111;
					*uParam1.f_7 = 0;
					*uParam1.f_8 = 156;
					*uParam1.f_10 = 1;
					StringCopy(uParam1.f_27, "FC1988", 16);
					*uParam1.f_11[0] = 1;
					*uParam1.f_11[1] = 1;
					*uParam1.f_11[2] = 1;
					*uParam1.f_11[3] = 1;
					*uParam1.f_11[4] = 1;
					*uParam1.f_11[5] = 1;
					*uParam1.f_11[6] = 1;
					*uParam1.f_11[7] = 1;
					*uParam1.f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_318(int iParam0, auto uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		func_25(uParam1);
		*uParam1.f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
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
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 28);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 3))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 29);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 30);
		}
		if (_is_vehicle_neon_light_enabled(iParam0, 1))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 31);
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
						GAMEPLAY::CLEAR_BIT(uParam1.f_77, 23);
						GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 22);
						break;
					
					case 3:
					case 1:
						GAMEPLAY::CLEAR_BIT(uParam1.f_77, 23);
						GAMEPLAY::CLEAR_BIT(uParam1.f_77, 22);
						break;
					
					case 4:
						GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 23);
						break;
				}
			}
			else
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 23);
			}
		}
		if (!get_vehicle_tyres_can_burst(iParam0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 9);
		}
		if (is_vehicle_stolen(iParam0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 10);
		}
		if (get_is_vehicle_primary_colour_custom(iParam0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 13);
			get_vehicle_custom_primary_colour(iParam0, uParam1.f_71, uParam1.f_72, uParam1.f_73);
		}
		if (get_is_vehicle_secondary_colour_custom(iParam0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 12);
		}
		func_320(&iParam0, uParam1.f_9, uParam1.f_59);
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, func_319(iVar0 + 1));
			}
			iVar0++;
		}
		if (_does_vehicle_have_decal(iParam0, 0))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 11);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(uParam1.f_77, 11);
		}
		if (decor_exist_on(iParam0, "IgnoredByQuickSave") && decor_get_bool(iParam0, "IgnoredByQuickSave"))
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam1.f_77, 27);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(uParam1.f_77, 27);
		}
	}
}

int func_319(int iParam0)
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

bool func_320(int iParam0, auto uParam1, auto uParam2)
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

bool func_321(int iParam0, auto uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = get_players_last_vehicle();
			}
			else
			{
				*uParam1 = get_vehicle_ped_is_in(iParam0, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (is_vehicle_driveable(*uParam1, 0))
				{
					if (iParam2 == 0 || get_distance_between_coords(get_entity_coords(*uParam1, 1), get_entity_coords(iParam0, 1), 1) < 100f)
					{
						if (is_vehicle_model(*uParam1, joaat("taxi")))
						{
							if (get_ped_in_vehicle_seat(*uParam1, -1) != iParam0 && get_ped_in_vehicle_seat(*uParam1, -1) != 0)
							{
								return false;
							}
						}
						if (func_322(*uParam1, func_216(), 1))
						{
							sVar0 = get_this_script_name();
							if (!are_strings_equal(sVar0, "save_anywhere"))
							{
								return false;
							}
							else if (!is_ped_in_any_vehicle(iParam0, 1))
							{
								return false;
							}
						}
						if (iParam3 == 1)
						{
							if (decor_exist_on(*uParam1, "IgnoredByQuickSave"))
							{
								if (decor_get_bool(*uParam1, "IgnoredByQuickSave"))
								{
									return false;
								}
							}
						}
						else if (is_vehicle_model(*uParam1, joaat("blimp")))
						{
							return false;
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_322(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	auto uVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_323(iParam1, iVar0, &sVar1, &uVar9))
	{
		if (!iParam2 || GAMEPLAY::IS_BIT_SET(Global_101154.f_5919[uVar9], false))
		{
			if (is_vehicle_in_garage_area(&sVar1, iParam0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_323(int iParam0, int iParam1, char* sParam2, auto uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}
	return false;
}

void func_324(int iParam0, auto uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_148(iParam0);
		iVar1 = false;
		while (iVar1 < 12)
		{
			func_327(iParam0, iVar1, uParam1.f_13[iVar1], uParam1[iVar1], uParam1.f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 9)
		{
			func_326(iParam0, iVar1, uParam1.f_39[iVar1], uParam1.f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_150(iVar0))
		{
			*uParam1.f_59 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_59;
			*uParam1.f_60 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_60;
			*uParam1.f_61 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_61;
			*uParam1.f_62 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_62;
			*uParam1.f_63 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_63;
			*uParam1.f_64 = Global_101154.f_1826.f_539[iVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_325(161, -1))
			{
				*uParam1.f_59 = func_69(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_69(745, Global_69309, 0);
			}
			*uParam1.f_60 = func_69(746, Global_69309, 0);
			*uParam1.f_61 = func_69(747, Global_69309, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_325(161, -1))
			{
				*uParam1.f_59 = func_69(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_69(745, Global_69309, 0);
			}
		}
	}
}

int func_325(int iParam0, int iParam1)
{
	int iVar0;
	auto uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_68(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_326(int iParam0, int iParam1, auto uParam2, auto uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_148(iParam0);
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

void func_327(int iParam0, int iParam1, auto uParam2, auto uParam3, auto uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_148(iParam0);
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

auto func_328()
{
	func_153();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_329(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_148(iParam0);
	if (func_150(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_330(iParam0, &(Global_101154.f_1826.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= 8 - 1)
			{
				Global_101154.f_1826.f_539.f_1151[iVar2 /*4*/][iVar0] = _0xA13E93403F26C812(iVar2);
				if (iParam1)
				{
					iVar1 = _0xA48931185F0536FE();
					if (Global_101154.f_1826.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_101154.f_1826.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			get_player_parachute_pack_tint_index(player_id(), &iVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_330(int iParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	Vector3 vVar4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 44 - 1)
		{
			*(uParam1[iVar0 /*3*/]).f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 44 - 1)
		{
			iVar3 = func_334(iVar0);
			if (iVar3 != 0)
			{
				vVar4.x = get_ped_weapontype_in_slot(iParam0, func_334(iVar0));
				vVar4.y = 0;
				vVar4.z = 0;
				if (vVar4.x != 0 && vVar4.x != joaat("weapon_unarmed"))
				{
					vVar4.y = get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (vVar4.x == joaat("gadget_parachute"))
					{
						vVar4.y = 1;
					}
					GAMEPLAY::GAMEPLAY::SET_BIT(&(vVar4.f_2), 20 + get_ped_weapon_tint_index(iParam0, vVar4.x));
					if (vVar4.y == -1)
					{
						if (!get_max_ammo(iParam0, vVar4.x, &(vVar4.f_1)))
						{
							vVar4.y = 0;
						}
					}
					*(uParam1[iVar0 /*3*/]).f_1 = vVar4.y;
					iVar1 = false;
					iVar2 = func_332(vVar4.x, iVar1);
					while (iVar2 != 0)
					{
						if (has_ped_got_weapon_component(iParam0, vVar4.x, iVar2))
						{
							GAMEPLAY::GAMEPLAY::SET_BIT(&(vVar4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_332(vVar4.x, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = {vVar4};
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50 - 1)
		{
			*(uParam1.f_133[iVar0 /*3*/]).f_1 = 0;
			iVar0++;
		}
		iVar8 = get_num_dlc_weapons();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((get_dlc_weapon_data(iVar7, &Var9) && !func_331(Var9.f_1)) && iVar70 < 50)
			{
				if (!_is_dlc_data_empty(Var9))
				{
					vVar4.x = Var9.f_1;
					vVar4.y = 0;
					vVar4.z = 0;
					vVar4.y = get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (has_ped_got_weapon(iParam0, vVar4.x, 0))
					{
						GAMEPLAY::GAMEPLAY::SET_BIT(&(vVar4.f_2), 20 + get_ped_weapon_tint_index(iParam0, vVar4.x));
					}
					else
					{
						GAMEPLAY::GAMEPLAY::SET_BIT(&(vVar4.f_2), 20);
					}
					if (vVar4.y == -1)
					{
						if (!get_max_ammo(iParam0, vVar4.x, &(vVar4.f_1)))
						{
							vVar4.y = 0;
						}
					}
					*(uParam1.f_133[iVar70 /*3*/]).f_1 = vVar4.y;
					iVar1 = false;
					while (iVar1 < get_num_dlc_weapon_components(iVar7))
					{
						if (get_dlc_weapon_component_data(iVar7, iVar1, &Var48))
						{
							if (has_ped_got_weapon_component(iParam0, vVar4.x, Var48.f_3))
							{
								GAMEPLAY::GAMEPLAY::SET_BIT(&(vVar4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (vVar4.x != 0)
				{
					if (!has_ped_got_weapon(iParam0, vVar4.x, 0))
					{
						vVar4.x = false;
						vVar4.y = 0;
					}
				}
				*(uParam1.f_133[iVar70 /*3*/]) = {vVar4};
				iVar70++;
			}
			iVar7++;
		}
	}
}

bool func_331(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return false;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return false;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return false;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return false;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return false;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return false;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return false;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return false;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return false;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
				return true;
				break;
			}
	}
	return false;
}

int func_332(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	auto uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 7:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 8:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_333(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < get_num_dlc_weapon_components(iVar1))
					{
						if (get_dlc_weapon_component_data(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_333(int iParam0, auto uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = get_num_dlc_weapons();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (get_dlc_weapon_data(iVar0, uParam1))
		{
			if (*uParam1.f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_334(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_335(int iParam0)
{
	int iVar0;
	
	iVar0 = func_148(iParam0);
	if (func_150(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_101154.f_1826.f_539.f_294[iVar0] = get_ped_armour(iParam0);
	}
}

void func_336(auto uParam0, int iParam1)
{
	int iVar0;
	Vector3 vVar1;
	auto uVar4;
	int iVar5;
	
	*uParam0 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1)};
	*uParam0.f_3 = get_entity_heading(PLAYER::PLAYER_PED_ID());
	*uParam0.f_5 = get_ped_parachute_state(PLAYER::PLAYER_PED_ID());
	if (is_player_playing(player_id()))
	{
		*uParam0.f_4 = get_player_wanted_level(player_id());
	}
	if (vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = {301.2162f, 202.1357f, 103.3797f};
		*uParam0.f_3 = 156.5144f;
	}
	else if (vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = {394.2567f, -713.5439f, 28.2853f};
		*uParam0.f_3 = 276.6273f;
	}
	else if (vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = {-1423.472f, -214.2539f, 45.5004f};
		*uParam0.f_3 = 353.8757f;
	}
	else if (_get_number_of_instances_of_streamed_script(joaat("finale_choice")) > 0)
	{
		*uParam0 = {4.2587f, 525.0214f, 173.6281f};
		*uParam0.f_3 = 203.6746f;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_69737, 4))
	{
		*uParam0 = {452.0255f, 5571.85f, 780.1859f};
		*uParam0.f_3 = 78.9858f;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_69737, 5))
	{
		*uParam0 = {-745.4462f, 5595.146f, 40.6594f};
		*uParam0.f_3 = 261.747f;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_69737, 6))
	{
		*uParam0 = {-1675.521f, -1125.59f, 12.091f};
		*uParam0.f_3 = 271.8208f;
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_69737, 7))
	{
		*uParam0 = {-1631.219f, -1112.805f, 12.0212f};
		*uParam0.f_3 = 316.8879f;
	}
	else if (get_interior_from_entity(PLAYER::PLAYER_PED_ID()) == get_interior_at_coords_with_type(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = {1276.956f, -1725.189f, 53.6551f};
		*uParam0.f_3 = 204.1703f;
	}
	else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
	{
		*uParam0 = {-601.59f, 2099.197f, 128.8928f};
		*uParam0.f_3 = 204.7498f;
	}
	else if (vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = {-1018.376f, -483.9436f, 36.0964f};
		*uParam0.f_3 = 114.7664f;
	}
	else if (vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = {497.7238f, -1310.932f, 28.2372f};
		*uParam0.f_3 = 289.3663f;
	}
	else if (vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = {2316.93f, 2594.153f, 45.7199f};
		*uParam0.f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_340(&iVar0))
		{
			if (func_338(iVar0, &vVar1, &uVar4))
			{
				vVar1.z++;
				*uParam0 = {vVar1};
				*uParam0.f_3 = uVar4;
			}
		}
		else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar5 = func_216();
			if (iVar5 == 0)
			{
				*uParam0 = {-65.1234f, 81.2517f, 70.5644f};
				*uParam0.f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = {-68.5531f, -1824.377f, 25.9424f};
				*uParam0.f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = {-220.8189f, -1162.302f, 22.0242f};
				*uParam0.f_3 = 70.2711f;
			}
		}
		else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = {495.4108f, -1306.08f, 29.2883f};
			*uParam0.f_3 = 213.6273f;
		}
		else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			*uParam0.f_3 = 305.6424f;
		}
		else if (is_entity_in_angled_area(PLAYER::PLAYER_PED_ID(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = {431.8853f, -1013.133f, 28.7907f};
			*uParam0.f_3 = 186.6814f;
		}
		else if (func_337(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = {279.4137f, -585.8815f, 43.2502f};
			*uParam0.f_3 = 48.8028f;
		}
	}
}

bool func_337(Vector3 vParam0, char* sParam1, Vector3 vParam2)
{
	int iVar0;
	int iVar1;
	
	if (!_are_coords_colliding_with_exterior(vParam0))
	{
		iVar0 = get_interior_at_coords_with_type(vParam4, sParam3);
		if (!is_valid_interior(iVar0))
		{
			return false;
		}
		iVar1 = get_interior_from_collision(vParam0);
		if (iVar1 == iVar0)
		{
			return true;
		}
	}
	return false;
}

int func_338(int iParam0, auto uParam1, auto uParam2)
{
	*uParam1 = {0f, 0f, 0f};
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = {-829.842f, -191.7454f, 36.4386f};
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = {129.8484f, -1716.528f, 28.0702f};
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = {-1296.913f, -1120.999f, 5.3951f};
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = {1938.028f, 3718.736f, 31.3154f};
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = {1197.866f, -469.3809f, 65.0885f};
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = {-32.2161f, -135.8212f, 56.0532f};
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = {-287.7696f, 6238.081f, 30.2902f};
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = {99.2876f, -1395.16f, 28.2759f};
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = {1679.445f, 4819.056f, 41.0035f};
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = {411.3063f, -809.1863f, 28.1554f};
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = {-1088.054f, 2699.167f, 19.2748f};
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = {1194.163f, 2695.644f, 36.9225f};
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = {-821.2829f, -1088.027f, 10.0499f};
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = {-3.3416f, 6521.303f, 30.2961f};
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = {-1208.417f, -785.9635f, 16.0139f};
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = {623.1845f, 2739.191f, 40.9588f};
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = {130.9555f, -198.2084f, 53.41f};
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = {-3164.065f, 1067.317f, 19.6778f};
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = {-713.2797f, -174.2767f, 35.8962f};
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = {-147.0616f, -306.4322f, 37.7912f};
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = {-1461.355f, -230.6092f, 48.3064f};
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = {-1347.739f, -1278.573f, 3.8952f};
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = {325.6833f, 164.3263f, 102.4425f};
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = {1858.774f, 3742.393f, 32.0779f};
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = {-286.3272f, 6202.802f, 30.3323f};
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = {-1161.596f, -1417.7f, 3.712f};
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = {1308.952f, -1660.611f, 50.2362f};
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = {-3161.585f, 1074.214f, 19.6847f};
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = {28.423f, -1110.814f, 28.2848f};
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = {1704.966f, 3749.709f, 33.0188f};
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = {223.949f, -38.7894f, 68.6483f};
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = {837.7854f, -1017.963f, 26.3045f};
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = {-313.1914f, 6093.351f, 30.4625f};
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = {-663.4631f, -952.8069f, 20.3143f};
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = {-1323.06f, -392.8577f, 35.4596f};
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = {-1106.102f, 2684.35f, 18.0953f};
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = {-3157.932f, 1081.309f, 19.6953f};
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = {2562.882f, 312.8641f, 107.4612f};
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = {822.48f, -2142.875f, 27.8496f};
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = {-1137.053f, -1993.916f, 12.1677f};
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = {717.8107f, -1084.081f, 21.3094f};
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = {-387.6789f, -128.2568f, 37.6796f};
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = {117.8835f, 6599.415f, 31.0134f};
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = {1201.709f, 2664.813f, 36.8102f};
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = {-200.1521f, -1297.502f, 30.296f};
			*uParam2 = 269.0687f;
			break;
	}
	return !func_339(*uParam1, 0f, 0f, 0f, 0);
}

int func_339(Vector3 vParam0, Vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_340(auto uParam0)
{
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_349())
		{
			*uParam0 = func_345(get_entity_coords(PLAYER::PLAYER_PED_ID(), 0), 5, -1, 0, 1, -1);
			if (func_344(*uParam0) && !func_341(*uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_341(int iParam0)
{
	return func_342(iParam0, 0, 1);
}

int func_342(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_8() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_69(func_343(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

int func_343(int iParam0)
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

int func_344(int iParam0)
{
	return func_342(iParam0, 5, 1);
}

int func_345(Vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	Vector3 fVar1;
	Vector3 fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		if (iParam3 == 5 || iParam3 == func_348(iVar0))
		{
			if (!iParam5 || func_347(iVar0))
			{
				fVar1 = get_distance_between_coords(vParam0, func_346(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_346(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (iParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_347(int iParam0)
{
	return func_342(iParam0, 0, 0);
}

int func_348(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
	}
	return 5;
}

int func_349()
{
	return Global_91330.f_296 > 0;
}

auto func_350()
{
	auto uVar0;
	
	func_360(&uVar0, get_clock_seconds());
	func_359(&uVar0, get_clock_minutes());
	func_358(&uVar0, get_clock_hours());
	func_353(&uVar0, get_clock_day_of_month());
	func_352(&uVar0, get_clock_month());
	func_351(&uVar0, get_clock_year());
	return uVar0;
}

void func_351(auto uParam0, int iParam1)
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

void func_352(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_353(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_357(*uParam0);
	iVar1 = func_355(*uParam0);
	if (iParam1 < 1 || iParam1 > func_354(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_354(int iParam0, int iParam1)
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

auto func_355(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_356(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1) + 2011;
}

int func_356(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_357(auto uParam0)
{
	return uParam0 & 15;
}

void func_358(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_359(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_360(auto uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_361(char* sParam0)
{
	if (are_strings_equal("BailBond1", sParam0))
	{
		return 0;
	}
	else if (are_strings_equal("BailBond2", sParam0))
	{
		return 1;
	}
	else if (are_strings_equal("BailBond3", sParam0))
	{
		return 2;
	}
	else if (are_strings_equal("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

int func_362(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_363(Global_101154.f_7775.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_363(Global_101154.f_7775.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_363(Global_101154.f_7775.f_99.f_205[11]);
			break;
		
		case 90:
			return func_363(Global_101154.f_7775.f_99.f_205[7]);
			break;
		
		case 93:
			return func_363(Global_101154.f_7775.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_363(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_364(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_hash_key(sParam0);
	iVar1 = func_365(iVar0, 1);
	if (iVar1 == -1 && !iParam1)
	{
	}
	return iVar1;
}

int func_365(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_82399[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!iParam1)
	{
	}
	return -1;
}

void func_366()
{
	Global_14578 = 0;
	func_367();
}

void func_367()
{
	if (is_scripted_conversation_ongoing())
	{
		restart_scripted_conversation();
		Global_16723 = 0;
		stop_scripted_conversation(true);
		Global_15712 = 6;
		return;
	}
}

void func_368()
{
	switch (iLocal_158)
	{
		case 0:
			request_anim_dict(sLocal_283);
			STREAMING::REQUEST_MODEL(iLocal_292);
			if (get_entity_speed(Local_165) >= 0.025f)
			{
				iLocal_279 = 4;
				iLocal_158 = 1;
			}
			else
			{
				if (iLocal_530)
				{
					if (!iLocal_162)
					{
						iLocal_163 = GAMEPLAY::GET_GAME_TIMER();
					}
				}
				if (!does_blip_exist(iLocal_294))
				{
					iLocal_294 = func_304(Local_165, 1, 5);
				}
				if (!iLocal_529)
				{
					iLocal_279 = 0;
					iLocal_158 = 1;
				}
				else if (iLocal_618)
				{
					iLocal_279 = 6;
					iLocal_158 = 1;
				}
				else if (func_383())
				{
					func_298("N3NRCOP", -1);
					iLocal_279 = 1;
					iLocal_158 = 1;
				}
				else if (_get_raycast_result(iLocal_229[0], &(uLocal_258[0]), &(Local_261[0 /*7*/][0 /*3*/]), &(Local_261[0 /*7*/][1 /*3*/]), &(uLocal_276[0])) != 1 && _get_raycast_result(iLocal_229[1], &(uLocal_258[1]), &(Local_261[1 /*7*/][0 /*3*/]), &(Local_261[1 /*7*/][1 /*3*/]), &(uLocal_276[0])) != 1)
				{
					if (uLocal_258[0] == 1 || uLocal_258[1] == 1)
					{
						func_298("N3TRUNK", -1);
						iLocal_279 = 2;
						iLocal_158 = 1;
					}
					else if (func_381())
					{
						func_298("N3WONKY", -1);
						iLocal_279 = 3;
						iLocal_158 = 1;
					}
					else
					{
						if (!iLocal_531)
						{
							func_298("N3FTRUNK", -1);
							iLocal_531 = 1;
						}
						iLocal_279 = 5;
						iLocal_158 = 1;
					}
				}
			}
			func_276();
			iLocal_525 = 0;
			break;
		
		case 1:
			func_380();
			if (iLocal_160 == 4)
			{
				func_373();
			}
			func_372();
			func_276();
			if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 0))
			{
				iLocal_158 = 2;
				iLocal_159 = 0;
			}
			else if (!func_301(PLAYER::PLAYER_PED_ID(), Local_165, 250f, 1))
			{
				iLocal_158 = 2;
				iLocal_159 = 2;
			}
			else if (!func_301(PLAYER::PLAYER_PED_ID(), Local_165, 50f, 1) && !iLocal_528)
			{
				func_303("N3LEAVECAR", 7500, 1);
				iLocal_528 = 1;
			}
			else
			{
				switch (iLocal_279)
				{
					case 0:
						if (!iLocal_162)
						{
							func_303("N3RTCAR", 7500, 1);
							iLocal_162 = 1;
						}
						if (iLocal_529)
						{
							func_371();
							iLocal_158 = 0;
						}
						break;
					
					case 1:
					case 2:
					case 3:
					case 6:
						break;
					
					case 5:
						if (!iLocal_162 && GAMEPLAY::GET_GAME_TIMER() - iLocal_163 > 5000)
						{
							func_303("N3RTCAR", 7500, 1);
							func_370(&uLocal_604);
							iLocal_162 = 1;
						}
						if ((func_369(PLAYER::PLAYER_PED_ID(), get_offset_from_entity_in_world_coords(Local_165, vLocal_224), 0.8f) && is_ped_on_foot(PLAYER::PLAYER_PED_ID())) && !((is_ped_ragdoll(PLAYER::PLAYER_PED_ID()) || is_ped_falling(PLAYER::PLAYER_PED_ID())) || is_ped_getting_up(PLAYER::PLAYER_PED_ID())))
						{
							iLocal_158 = 2;
							iLocal_159 = 1;
							iLocal_518 = 2;
						}
						_0xBE5C1255A1830FF5(Local_165, 1);
						break;
					
					case 4:
						if (get_entity_speed(Local_165) < 0.025f)
						{
							func_371();
							iLocal_158 = 0;
						}
						break;
					}
			}
			break;
		
		case 2:
			clear_prints();
			clear_help(1);
			func_241(&iLocal_294);
			switch (iLocal_159)
			{
				case 0:
					if (iLocal_618)
					{
						iLocal_157 = 6;
					}
					else if (get_player_wanted_level(player_id()) > 0)
					{
						iLocal_157 = 11;
					}
					else
					{
						iLocal_157 = 4;
					}
					break;
				
				case 1:
					iLocal_229[0] = _0xFE466162C4401D18(get_offset_from_entity_in_world_coords(Local_165, vLocal_232[2 /*3*/]), vLocal_245[2 /*3*/], get_entity_rotation(Local_165, 2), 2, 19, false, 4);
					iLocal_229[1] = _0xFE466162C4401D18(get_offset_from_entity_in_world_coords(Local_165, vLocal_232[3 /*3*/]), vLocal_245[3 /*3*/], get_entity_rotation(Local_165, 2), 2, 19, false, 4);
					iLocal_157 = 8;
					break;
				
				case 2:
					sLocal_698 = "N3FLEFT";
					iLocal_157 = 13;
					break;
			}
			iLocal_158 = 0;
			break;
	}
}

int func_369(int iParam0, Vector3 vParam1, float fParam2)
{
	return vdist2(get_entity_coords(iParam0, 1), vParam1) <= fParam4 * fParam4;
}

void func_370(auto uParam0)
{
	if ((get_profile_setting(203) != 0 && *uParam0 != 1) && is_scripted_conversation_ongoing())
	{
		*uParam0 = 1;
	}
}

void func_371()
{
	if (func_228(Local_165))
	{
		iLocal_229[0] = _0xFE466162C4401D18(get_offset_from_entity_in_world_coords(Local_165, vLocal_232[0 /*3*/]), vLocal_245[0 /*3*/], get_entity_rotation(Local_165, 2), 2, 19, false, 4);
		iLocal_229[1] = _0xFE466162C4401D18(get_offset_from_entity_in_world_coords(Local_165, vLocal_232[1 /*3*/]), vLocal_245[1 /*3*/], get_entity_rotation(Local_165, 2), 2, 19, false, 4);
	}
}

void func_372()
{
	if (func_228(iLocal_175))
	{
		if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 0))
		{
			switch (iLocal_525)
			{
				case 0:
					iLocal_526 = GAMEPLAY::GET_GAME_TIMER() + get_random_int_in_range(6000, 12000);
					iLocal_525 = 1;
					break;
				
				case 1:
					if (GAMEPLAY::GET_GAME_TIMER() > iLocal_526 && !func_208())
					{
						func_275();
						iLocal_525 = 2;
					}
					break;
				
				case 2:
					if (iLocal_518 == 2)
					{
						iLocal_525 = 0;
					}
					break;
				}
			}
	}
}

void func_373()
{
	func_276();
	switch (iLocal_160)
	{
		case 0:
			if (func_228(Local_165))
			{
				if (!func_369(Local_165, vLocal_195, Local_315[iLocal_349 /*8*/].f_2) && !iLocal_534)
				{
					iLocal_160 = 3;
					if (iLocal_349 < 3)
					{
						func_275();
						iLocal_515 = false;
					}
					else
					{
						iLocal_515 = true;
					}
				}
				else
				{
					func_379();
				}
			}
			break;
		
		case 3:
			if (iLocal_515 == 0)
			{
				iLocal_515 = has_sound_finished(iLocal_516);
			}
			if (iLocal_349 < 4 && iLocal_515)
			{
				if (!iLocal_534)
				{
					if (iLocal_349 == 3)
					{
						if (!func_369(PLAYER::PLAYER_PED_ID(), vLocal_295, 150f))
						{
							if (func_269(&uLocal_350, Local_315[iLocal_349 /*8*/], Local_315[iLocal_349 /*8*/].f_1, 7, 0, 0, 0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_175))
								{
									add_ped_to_conversation(5, iLocal_175, "DINAPOLI");
								}
								if (iLocal_349 == 0)
								{
									_0x293220DA1B46CEBC(2f, 5f, 0);
								}
								iLocal_160 = 4;
							}
						}
					}
					else if (func_269(&uLocal_350, Local_315[iLocal_349 /*8*/], Local_315[iLocal_349 /*8*/].f_1, 7, 0, 0, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_175))
						{
							add_ped_to_conversation(5, iLocal_175, "DINAPOLI");
						}
						func_275();
						iLocal_160 = 4;
					}
				}
				else
				{
					func_379();
				}
			}
			else if (iLocal_349 >= 4)
			{
				iLocal_160 = 6;
			}
			break;
		
		case 4:
			if (func_228(Local_165))
			{
				if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 0))
				{
					if (!func_301(PLAYER::PLAYER_PED_ID(), Local_165, 15f, 1))
					{
						func_270();
					}
				}
				if (!func_208())
				{
					iLocal_529 = true;
					if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 0))
					{
						iLocal_517 = GAMEPLAY::GET_GAME_TIMER();
						iLocal_160 = 5;
						iLocal_349++;
					}
				}
			}
			func_374(&uLocal_604, &uLocal_350, "NIGE3AU", &sLocal_605, &sLocal_611);
			break;
		
		case 5:
			if (GAMEPLAY::GET_GAME_TIMER() - iLocal_517 < 7500)
			{
				if (!iLocal_530)
				{
					func_298("N3REL1", -1);
					iLocal_530 = true;
				}
			}
			else if (GAMEPLAY::GET_GAME_TIMER() - iLocal_517 > 10000)
			{
				if (iLocal_349 < 4)
				{
					iLocal_160 = 0;
				}
				else
				{
					iLocal_160 = 6;
				}
			}
			else
			{
				func_379();
			}
			break;
		
		case 6:
			func_379();
			break;
	}
}

void func_374(auto uParam0, auto uParam1, char* sParam2, char* sParam3, char* sParam4)
{
	switch (*uParam0)
	{
		case 0:
			break;
		
		case 1:
			if (is_scripted_conversation_ongoing())
			{
				*sParam3 = {func_378()};
				*sParam4 = {func_377()};
				if (are_strings_equal(sParam4, "") || are_strings_equal(sParam4, "NULL"))
				{
					*uParam0 = 0;
				}
				else
				{
					func_376();
					*uParam0 = 2;
				}
			}
			break;
		
		case 2:
			if (!is_scripted_conversation_ongoing())
			{
				if (is_message_being_displayed())
				{
					if (func_375(uParam1, sParam2, sParam3, sParam4, 8, 1, 0))
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 4;
				}
			}
			break;
		
		case 3:
			if (!is_message_being_displayed() && is_scripted_conversation_ongoing())
			{
				*sParam3 = {func_378()};
				*sParam4 = {func_377()};
				if (are_strings_equal(sParam4, "") || are_strings_equal(sParam4, "NULL"))
				{
				}
				else
				{
					func_376();
					*uParam0 = 4;
				}
			}
			break;
		
		case 4:
			if (!is_scripted_conversation_ongoing() && func_375(uParam1, sParam2, sParam3, sParam4, 8, 0, 0))
			{
				*uParam0 = 0;
			}
			break;
	}
}

int func_375(auto uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_220(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 1;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_210(sParam2, iParam4, 0);
}

void func_376()
{
	Global_14578 = 0;
	func_219();
}

struct<6> func_377()
{
	char[24] cVar0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = get_current_scripted_conversation_line();
		iVar6 += Global_16722;
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (does_text_label_exist(&(Global_14580[iVar7 /*6*/])))
			{
				return Global_14580[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (does_text_label_exist(&(Global_14580[iVar8 /*6*/])))
					{
						return Global_14580[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return cVar0;
			}
			return Global_14580[iVar6 /*6*/];
		}
		else
		{
			return cVar0;
		}
	}
	return cVar0;
}

struct<6> func_378()
{
	char[24] cVar0;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return cVar0;
}

void func_379()
{
	if (func_228(Local_165))
	{
		if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 0))
		{
			switch (iLocal_533)
			{
				case 0:
					if ((has_entity_collided_with_anything(Local_165) && !func_300("N3NORTH", 0, 0)) && !func_300("N3RAM", 0, 0))
					{
						iLocal_533 = 1;
					}
					break;
				
				case 1:
					if (func_269(&uLocal_350, "NIGE3AU", "NIGEL3_FRND", 7, 0, 0, 0))
					{
						func_275();
						iLocal_534 = true;
						iLocal_533 = 2;
					}
					break;
				
				case 2:
					if (!is_scripted_conversation_ongoing())
					{
						iLocal_534 = false;
						iLocal_535 = GAMEPLAY::GET_GAME_TIMER();
						iLocal_533 = 3;
					}
					break;
				
				case 3:
					if (GAMEPLAY::GET_GAME_TIMER() - iLocal_535 > 8000)
					{
						iLocal_533 = 0;
					}
					break;
				}
			}
	}
}

void func_380()
{
	if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 0))
	{
		switch (iLocal_536)
		{
			case 0:
				if (has_entity_been_damaged_by_entity(Local_165, PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_301(Local_165, PLAYER::PLAYER_PED_ID(), 20f, 1))
					{
						iLocal_536 = 1;
						iLocal_525 = 0;
					}
					clear_entity_last_damage_entity(Local_165);
				}
				break;
			
			case 1:
				if (func_269(&uLocal_350, "NIGE3AU", "NIGEL3_SCRND", 7, 0, 0, 0))
				{
					iLocal_525 = 0;
					func_275();
					iLocal_536 = 2;
				}
				break;
			
			case 2:
				if (!func_208())
				{
					iLocal_537 = GAMEPLAY::GET_GAME_TIMER() + 3000;
					iLocal_525 = 0;
					iLocal_536 = 3;
				}
				break;
			
			case 3:
				if (GAMEPLAY::GET_GAME_TIMER() > iLocal_537)
				{
					iLocal_536 = 0;
					clear_entity_last_damage_entity(Local_165);
				}
				break;
			}
	}
}

bool func_381()
{
	float fVar0;
	float fVar1;
	
	if (func_228(Local_165))
	{
		fVar0 = func_382(get_entity_roll(Local_165), 0f, 360f);
		fVar1 = func_382(get_entity_pitch(Local_165), 0f, 360f);
		if ((fVar0 > fLocal_227 && fVar0 < 360f - fLocal_227) || (fVar1 > fLocal_228 && fVar1 < 360f - fLocal_228))
		{
			return true;
		}
	}
	return false;
}

float func_382(float fParam0, float fParam1, float fParam2)
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

bool func_383()
{
	if (is_cop_ped_in_area_3d(get_entity_coords(PLAYER::PLAYER_PED_ID(), 1) - Vector(40f, 40f, 40f), get_entity_coords(PLAYER::PLAYER_PED_ID(), 1) + Vector(40f, 40f, 40f)) || get_player_wanted_level(player_id()) > 0)
	{
		return true;
	}
	return false;
}

void func_384()
{
	switch (iLocal_158)
	{
		case 0:
			if (get_player_wanted_level(player_id()) > 0)
			{
				func_303("N3LOSEWANT", 7500, 1);
				func_370(&uLocal_604);
				iLocal_158 = 1;
			}
			else
			{
				iLocal_158 = 2;
			}
			break;
		
		case 1:
			if (get_player_wanted_level(player_id()) < 1)
			{
				iLocal_158 = 2;
			}
			else if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 0))
			{
				iLocal_158 = 2;
			}
			func_379();
			if (iLocal_160 == 4)
			{
				func_373();
			}
			break;
		
		case 2:
			clear_prints();
			func_241(&iLocal_294);
			if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 0))
			{
				iLocal_157 = 4;
			}
			else
			{
				func_371();
				iLocal_157 = 5;
			}
			iLocal_158 = 0;
			break;
	}
}

void func_385()
{
	switch (iLocal_158)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_175))
			{
				func_389();
			}
			else if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 0))
			{
				func_241(&iLocal_294);
				if (get_player_wanted_level(player_id()) < 1)
				{
					iLocal_294 = func_388(vLocal_295, 5, 1);
				}
				iLocal_158 = 1;
			}
			break;
		
		case 1:
			if (iLocal_161 < 1)
			{
				func_303("N3DRIVE", 7500, 1);
				func_370(&uLocal_604);
				iLocal_161++;
			}
			func_373();
			if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 0))
			{
				if (get_player_wanted_level(player_id()) > 0)
				{
					iLocal_158 = 2;
				}
				else if (is_entity_at_coord(Local_165, vLocal_295, 6f, 6f, 2f, true, true, 0))
				{
					iLocal_158 = 2;
				}
				else if (iLocal_314)
				{
					if (func_369(Local_165, vLocal_295, 300f))
					{
						set_random_trains(0);
						iLocal_314 = false;
					}
				}
			}
			else
			{
				iLocal_158 = 2;
			}
			break;
		
		case 2:
			clear_prints();
			func_241(&iLocal_294);
			if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 0))
			{
				iLocal_157 = 5;
				func_386();
				func_371();
				if (has_entity_been_damaged_by_entity(Local_165, PLAYER::PLAYER_PED_ID(), 1))
				{
					clear_entity_last_damage_entity(Local_165);
				}
			}
			else if (get_player_wanted_level(player_id()) > 0)
			{
				iLocal_157 = 11;
			}
			else if (is_entity_at_coord(Local_165, vLocal_295, 6f, 6f, 2f, false, true, 0))
			{
				iLocal_157 = 6;
				STREAMING::REQUEST_MODEL(joaat("freightcar"));
				STREAMING::REQUEST_MODEL(joaat("freightcont1"));
				STREAMING::REQUEST_MODEL(joaat("freightcont2"));
				STREAMING::REQUEST_MODEL(joaat("s_m_m_trucker_01"));
				set_entity_visible(iLocal_175, false, 0);
			}
			iLocal_158 = 0;
			break;
	}
}

void func_386()
{
	switch (iLocal_160)
	{
		case 0:
			break;
		
		case 3:
			if (is_scripted_conversation_ongoing() && iLocal_348)
			{
				func_387(&uLocal_604);
				func_366();
			}
			break;
		
		case 4:
			if (is_scripted_conversation_ongoing() && iLocal_348)
			{
				func_387(&uLocal_604);
				func_366();
			}
			break;
		
		case 5:
			break;
		
		case 6:
			break;
	}
}

void func_387(auto uParam0)
{
	if (*uParam0 != 0)
	{
		*uParam0 = 0;
	}
}

int func_388(Vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_priority(iVar0, iParam3);
	set_blip_scale(iVar0, 1f);
	set_blip_route(iVar0, iParam4);
	return iVar0;
}

void func_389()
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	
	if (STREAMING::HAS_MODEL_LOADED(joaat("u_m_m_aldinapoli")))
	{
		if (func_228(Local_165))
		{
			iLocal_175 = PED::CREATE_PED(26, joaat("u_m_m_aldinapoli"), -59.7094f, -1330.129f, 32.1963f, 0, 1, true);
			set_ped_name_debug(iLocal_175, "NIGEL3_CELEB");
			set_ped_component_variation(iLocal_175, 4, true, false, 0);
			set_blocking_of_non_temporary_events(iLocal_175, true);
			vVar0 = {get_offset_from_entity_in_world_coords(Local_165, -0.2f, -1.8f, -1f)};
			fVar6 = -90f + get_entity_heading(Local_165);
			vVar3 = {0f, 0f, fVar6};
			set_entity_coords_no_offset(iLocal_175, vVar0, 0, 0, 1);
			set_entity_rotation(iLocal_175, vVar3, 2, 1);
			attach_entity_to_entity(iLocal_175, Local_165, 0, 0.2f, -1.8f, 0f, 0f, 0f, 90f, 0, 0, 0, 0, 2, 1);
			set_entity_visible(iLocal_175, false, 0);
			func_221(&uLocal_350, 5, iLocal_175, "DINAPOLI", 0, 1);
			iLocal_518 = 2;
		}
	}
}

void func_390()
{
	switch (iLocal_158)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_175))
			{
				func_389();
			}
			if (has_additional_text_loaded(false))
			{
				if (!iLocal_527)
				{
					_0x293220DA1B46CEBC(0f, 10f, 1);
					func_303("N3GETCAR", 7500, 1);
					iLocal_527 = 1;
				}
				func_241(&iLocal_294);
				if (func_228(Local_165))
				{
					iLocal_294 = func_304(Local_165, 1, 5);
				}
				iLocal_525 = 0;
				iLocal_158 = 1;
			}
			break;
		
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_175))
			{
				func_389();
			}
			else
			{
				func_372();
				func_276();
			}
			if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 0))
			{
				iLocal_158 = 2;
			}
			else if (!func_301(PLAYER::PLAYER_PED_ID(), Local_165, 200f, 1))
			{
				iLocal_158 = 2;
			}
			else if (!func_301(PLAYER::PLAYER_PED_ID(), Local_165, 50f, 1))
			{
				if (!iLocal_528)
				{
					func_303("N3LEAVECAR", 7500, 1);
					iLocal_528 = 1;
				}
			}
			break;
		
		case 2:
			clear_prints();
			func_241(&iLocal_294);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_175))
			{
				func_389();
			}
			if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), Local_165, 0))
			{
				_set_unk_map_flag(2);
				if (get_player_wanted_level(player_id()) > 0)
				{
					iLocal_157 = 11;
				}
				else
				{
					iLocal_157 = 4;
				}
			}
			else if (!func_301(PLAYER::PLAYER_PED_ID(), Local_165, 200f, 1))
			{
				iLocal_157 = 13;
				sLocal_698 = "N3FLEFT";
			}
			iLocal_158 = 0;
			break;
	}
}

void func_391()
{
	switch (iLocal_158)
	{
		case 0:
			func_452("NMT_3_RCM", 0);
			if (func_446(1, 1093140480, 0))
			{
				func_445(1);
				if (func_5(0))
				{
					func_444(1, 1, 1);
				}
				if (func_228(iLocal_176))
				{
					register_entity_for_cutscene(iLocal_176, "Nigel", 0, false, 0);
				}
				else
				{
					register_entity_for_cutscene(iLocal_176, "Nigel", 2, joaat("ig_nigel"), 0);
				}
				if (func_228(iLocal_177))
				{
					register_entity_for_cutscene(iLocal_177, "MRS_Thornhill", 0, joaat("ig_mrs_thornhill"), 0);
				}
				else
				{
					register_entity_for_cutscene(iLocal_177, "MRS_Thornhill", 2, joaat("ig_mrs_thornhill"), 0);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_194))
				{
					iLocal_194 = get_closest_object_of_type(-45.93f, -1290.67f, 29.67f, 10f, joaat("v_ilev_gc_door01"), 1, 0, 1);
				}
				func_443();
				_0x48621C9FCA3EBD28(1);
				start_cutscene(0);
				wait(0);
				func_409();
				func_229(-44.75f, -1288.67f, 28.21f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				clear_area_of_vehicles(20.6534f, -1302.867f, 28.0513f, 15f, 0, 0, 0, 0, false);
				if (ENTITY::DOES_ENTITY_EXIST(Local_96.f_35[0]))
				{
					func_407(&(Local_96.f_35[0]));
					stop_fire_in_range(Local_165.f_2, 10f);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_165))
				{
					func_403(Local_165.f_2, Local_165.f_5, 1);
				}
				_0xE12ABE5E3A389A6C(Local_165, 0);
				if (func_228(iLocal_194))
				{
					set_entity_visible(iLocal_194, false, 0);
				}
				func_396(&Local_96, 0, 0, 0);
				iLocal_158 = 1;
			}
			break;
		
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_177))
			{
				if (ENTITY::DOES_ENTITY_EXIST(get_entity_index_of_registered_entity("MRS_Thornhill", false)))
				{
					iLocal_177 = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("MRS_Thornhill", false));
				}
			}
			else if (iLocal_183 && has_anim_dict_loaded(sLocal_179))
			{
				if (can_set_exit_state_for_registered_entity("MRS_Thornhill", joaat("ig_mrs_thornhill")))
				{
					func_395();
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_176))
			{
				if (ENTITY::DOES_ENTITY_EXIST(get_entity_index_of_registered_entity("Nigel", false)))
				{
					iLocal_176 = get_ped_index_from_entity_index(get_entity_index_of_registered_entity("Nigel", false));
				}
			}
			else if (iLocal_181 && has_anim_dict_loaded(sLocal_179))
			{
				if (can_set_exit_state_for_registered_entity("Nigel", joaat("ig_nigel")))
				{
					func_394();
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (can_set_exit_state_for_registered_entity("Trevor", joaat("player_two")))
				{
					set_entity_coords(PLAYER::PLAYER_PED_ID(), -43.6328f, -1289.294f, 28.0752f, 0, false, 0, 1);
				}
			}
			if (can_set_exit_state_for_camera(0))
			{
				_0x81CBAE94390F9F89();
				set_gameplay_cam_relative_pitch(0f, 1f);
				set_gameplay_cam_relative_heading(0f);
			}
			if (has_cutscene_finished())
			{
				if (func_228(iLocal_194))
				{
					set_entity_visible(iLocal_194, true, 0);
					func_393(&iLocal_194, 0);
				}
				func_543(1, 1, 1, 1);
				func_392(&Local_96, 0, 1);
				iLocal_158 = 2;
			}
			else if (func_228(iLocal_194) && get_cutscene_time() > 45000)
			{
				set_entity_visible(iLocal_194, true, 0);
				func_393(&iLocal_194, 0);
			}
			break;
		
		case 2:
			if (func_228(Local_165))
			{
				set_vehicle_doors_locked(Local_165, 1);
				add_vehicle_upsidedown_check(Local_165);
			}
			set_model_as_no_longer_needed(joaat("ig_nigel"));
			set_model_as_no_longer_needed(joaat("ig_mrs_thornhill"));
			iLocal_160 = 0;
			iLocal_158 = 0;
			iLocal_157 = 3;
			func_445(0);
			break;
	}
}

void func_392(auto uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_228(*uParam0.f_28[iVar0]))
		{
			set_entity_proofs(*uParam0.f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, false, 0, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_228(*uParam0.f_35[iVar0]))
		{
			set_entity_proofs(*uParam0.f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, false, 0, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_228(*uParam0.f_41[iVar0]))
		{
			set_entity_proofs(*uParam0.f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, false, 0, false);
		}
		iVar0++;
	}
	if (!is_entity_dead(PLAYER::PLAYER_PED_ID(), 0))
	{
		set_entity_proofs(PLAYER::PLAYER_PED_ID(), iParam1, iParam1, iParam1, iParam1, iParam1, false, 0, false);
		set_entity_invincible(PLAYER::PLAYER_PED_ID(), iParam1);
		if (iParam2)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
		}
	}
}

void func_393(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (is_entity_attached_to_any_ped(*iParam0))
		{
			detach_entity(*iParam0, 1, true);
		}
		if (!iParam1)
		{
			set_object_as_no_longer_needed(iParam0);
		}
		else
		{
			_mark_object_for_deletion(*iParam0);
		}
	}
}

void func_394()
{
	if (func_228(iLocal_176))
	{
		set_entity_coords_no_offset(iLocal_176, -44.83f, -1289.11f, 29.17f, 0, 0, 1);
		task_play_anim(iLocal_176, sLocal_179, sLocal_180, 1000f, -16f, -1, 1, 0, 0, 0, 0);
		_0x2208438012482A1A(iLocal_176, 1, 0);
		task_look_at_entity(iLocal_176, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		set_ped_keep_task(iLocal_176, true);
		iLocal_181 = 0;
	}
}

void func_395()
{
	if (func_228(iLocal_177))
	{
		set_entity_coords_no_offset(iLocal_177, -45f, -1289.83f, 29.177f, 0, 0, 1);
		task_play_anim(iLocal_177, sLocal_179, sLocal_182, 1000f, -16f, -1, 1, 0, 0, 0, 0);
		_0x2208438012482A1A(iLocal_177, 1, 0);
		task_look_at_entity(iLocal_177, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		set_ped_keep_task(iLocal_177, true);
		iLocal_178 = create_object(joaat("prop_ld_handbag_s"), -45f, -1289.83f, 49.177f, 1, true, false);
		attach_entity_to_entity(iLocal_178, iLocal_177, get_ped_bone_index(iLocal_177, 64729), vLocal_184, vLocal_187, 0, 0, 0, 0, 2, 1);
		iLocal_183 = 0;
	}
}

void func_396(auto uParam0, int iParam1, int iParam2, int iParam3)
{
	func_401(uParam0, iParam1);
	func_399(uParam0, iParam2);
	func_397(uParam0, iParam3);
}

void func_397(auto uParam0, int iParam1)
{
	func_398(uParam0.f_41, iParam1);
}

void func_398(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1)
	{
		if (iParam1)
		{
			func_203(uParam0[iVar0]);
		}
		else
		{
			func_393(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_399(auto uParam0, int iParam1)
{
	func_400(uParam0.f_35, iParam1);
}

void func_400(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1)
	{
		if (iParam1)
		{
			func_407(uParam0[iVar0]);
		}
		else
		{
			func_205(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_401(auto uParam0, int iParam1)
{
	func_402(uParam0.f_28, iParam1);
}

void func_402(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1)
	{
		if (iParam1 == 1)
		{
			func_539(uParam0[iVar0]);
		}
		else
		{
			func_201(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_403(Vector3 vParam0, Vector3 fParam1, int iParam2)
{
	if (STREAMING::HAS_MODEL_LOADED(Local_165.f_1))
	{
		func_405(&Local_165, vParam0, fParam3, iParam4, 0);
		set_vehicle_on_ground_properly(Local_165);
		set_vehicle_model_is_suppressed(Local_165.f_1, true);
		_0x51BB2D88D31A914B(Local_165, false);
		_0x192547247864DFDD(Local_165, false);
		set_vehicle_has_strong_axles(Local_165, true);
		_0xE12ABE5E3A389A6C(Local_165, 0);
		func_404(Local_165, 0);
	}
}

void func_404(int iParam0, int iParam1)
{
	Global_91278.f_22[iParam1] = iParam0;
}

bool func_405(int iParam0, Vector3 vParam1, Vector3 fParam2, int iParam3, int iParam4)
{
	STREAMING::REQUEST_MODEL(iLocal_83);
	if (iParam6 == 1)
	{
		while (!STREAMING::HAS_MODEL_LOADED(iLocal_83))
		{
			wait(0);
		}
	}
	else if (!STREAMING::HAS_MODEL_LOADED(iLocal_83))
	{
		return false;
	}
	func_406(iParam0, iLocal_83, vParam1, fParam4);
	if (func_228(*iParam0))
	{
		set_vehicle_colours(*iParam0, 65, false);
		_set_vehicle_door_breakable(*iParam0, 5, false);
		set_vehicle_number_plate_text(*iParam0, "28BNT310");
		set_vehicle_number_plate_text_index(*iParam0, false);
		if (iParam5 == 1)
		{
			set_vehicle_doors_locked(*iParam0, 10);
		}
	}
	set_model_as_no_longer_needed(iLocal_83);
	return true;
}

void func_406(int iParam0, int iParam1, Vector3 vParam2, Vector3 fParam3)
{
	func_407(iParam0);
	*iParam0 = create_vehicle(iParam1, vParam2, fParam5, 1, true);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		set_vehicle_on_ground_properly(*iParam0);
		set_entity_health(*iParam0, 1000);
	}
}

void func_407(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!is_entity_a_mission_entity(*iParam0))
		{
			set_entity_as_mission_entity(*iParam0, true, 0);
		}
		if (func_408(*iParam0))
		{
			if (is_entity_a_mission_entity(*iParam0) && does_entity_belong_to_this_script(*iParam0, 1))
			{
				if (func_228(PLAYER::PLAYER_PED_ID()))
				{
					if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), *iParam0, 0))
					{
						set_vehicle_as_no_longer_needed(iParam0);
						return;
					}
				}
				delete_vehicle(iParam0);
			}
		}
		else
		{
			if (func_228(PLAYER::PLAYER_PED_ID()))
			{
				if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), *iParam0, 0))
				{
					set_vehicle_as_no_longer_needed(iParam0);
					return;
				}
			}
			delete_vehicle(iParam0);
		}
	}
}

bool func_408(int iParam0)
{
	if (func_228(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (!is_entity_on_fire(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_409()
{
	func_436(-40.74942f, -1294.584f, 27.25115f, -40.96418f, -1284.257f, 35.23348f, 9.5f, -49.09f, -1260.03f, 29.26f, -87.89f, 5f, 14f, 5f, 1, 1, 1, 0, 0);
	func_436(-40.74942f, -1294.584f, 27.25115f, -40.68179f, -1302.86f, 35.00979f, 9.5f, -42.69f, -1314.36f, 28.06f, 0.9f, 5f, 14f, 5f, 1, 1, 1, 0, 0);
	func_410(0f, 0f, 0f, 0f, 1, 2);
	clear_area_of_peds(-39.5317f, -1257.184f, 28.2361f, 8f, 0);
}

void func_410(Vector3 vParam0, Vector3 fParam1, int iParam2, int iParam3)
{
	Vector3 vVar0;
	auto uVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_93091.f_4))
	{
		if (is_vehicle_driveable(Global_93091.f_4, 0))
		{
			if (func_435(24) != Global_93091.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_432(get_entity_coords(Global_93091.f_4, 1), iParam5, &vVar0, &uVar3))
					{
						vParam0 = {vVar0};
						fParam3 = uVar3;
					}
				}
				func_411(Global_93091.f_4, vParam0, fParam3, 24, 0);
			}
		}
	}
}

void func_411(int iParam0, Vector3 vParam1, Vector3 fParam2, int iParam3, int iParam4)
{
	struct<60> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[25]) && is_vehicle_driveable(Global_68319.f_484[25], 0))
			{
				if (Global_68319.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!iParam6)
		{
			if ((is_big_vehicle(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_431(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_318(iParam0, &Var0);
		if (func_339(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = {get_entity_coords(iParam0, 1)};
			fParam4 = get_entity_heading(iParam0);
		}
		if (iParam5 == 24)
		{
			if (get_hash_key(get_this_script_name()) != joaat("vehicle_gen_controller"))
			{
				Global_69307 = get_hash_key(get_this_script_name());
			}
		}
		func_428(iParam5, &Var0, vParam1, fParam4, func_314(iParam0));
		func_412(iParam5, iParam0, 0);
	}
}

void func_412(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_427(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_68319.f_555[0 /*21*/].f_9, 12) && !GAMEPLAY::IS_BIT_SET(Global_68319.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68319.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_69226 != -1 && Global_69226 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (is_vehicle_driveable(iParam1, 0))
		{
			if (!is_entity_a_mission_entity(iParam1))
			{
				set_entity_as_mission_entity(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_101154.f_18807.f_4801 = func_350();
			}
			if (iParam1 != Global_68319.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_435(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && is_vehicle_driveable(iVar0, 0)) && iParam1 != iVar0)
					{
						func_413(iVar0, 145);
					}
				}
				Global_69225 = iParam1;
				Global_69226 = iParam0;
				Global_69227 = iParam2;
			}
		}
	}
}

void func_413(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_414(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = get_ped_in_vehicle_seat(iParam0, -1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = get_last_ped_in_vehicle_seat(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101154.f_1826.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!is_string_null_or_empty(&(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (are_strings_equal(get_vehicle_number_plate_text(iParam0), &(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101154.f_18807.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66)
		{
			if (!is_string_null_or_empty(&(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
			{
				if (are_strings_equal(get_vehicle_number_plate_text(iParam0), &(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101154.f_18807.f_5590 = iParam1;
	Global_69224 = iParam0;
	Global_101154.f_18807.f_5588 = 1;
	func_318(iParam0, &(Global_101154.f_18807.f_5510));
}

bool func_414(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !is_vehicle_driveable(iParam0, 0)) || func_322(iParam0, 0, 0)) || func_322(iParam0, 1, 0)) || func_322(iParam0, 2, 0)) || func_314(iParam0) != 145) || func_426(iParam0)) || func_425(iParam0)) || func_424(iParam0)) || func_423(iParam0)) || !func_415(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_425(iParam0))
		{
		}
		if (func_425(iParam0))
		{
		}
		if (func_322(iParam0, 0, 0))
		{
		}
		if (func_322(iParam0, 1, 0))
		{
		}
		if (func_322(iParam0, 2, 0))
		{
		}
		if (func_314(iParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_415(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!func_416(iParam0, 0))
	{
		return false;
	}
	if (((is_this_model_a_boat(iParam0) || is_this_model_a_plane(iParam0)) || is_this_model_a_heli(iParam0)) || is_this_model_a_train(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return false;
			break;
	}
	return true;
}

bool func_416(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return false;
	}
	if (!is_model_a_vehicle(iParam0))
	{
		return false;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_422())
		{
			return false;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < get_num_dlc_vehicles())
		{
			if (get_dlc_vehicle_data(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (_is_dlc_data_empty(Var1))
					{
						return false;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_421() && !func_420()) && !func_419()) && !func_418()) && !func_422())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((is_durango_version() || GAMEPLAY::IS_PC_VERSION()) || is_orbis_version())
		{
		}
		else if (!func_419())
		{
			return false;
		}
	}
	if (iParam1)
	{
		if (!func_417(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_417(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2459480)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = _get_posix_time();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5004 && !Global_262145.f_10847) && iVar1 < Global_262145.f_10848)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11652 && iVar1 < Global_262145.f_11664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11648 && iVar1 < Global_262145.f_11660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11649 && iVar1 < Global_262145.f_11661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11650 && iVar1 < Global_262145.f_11662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11651 && iVar1 < Global_262145.f_11663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11653 && iVar1 < Global_262145.f_11665)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_11654 && iVar1 < Global_262145.f_11657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_11655 && iVar1 < Global_262145.f_11658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_11656 && iVar1 < Global_262145.f_11659)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_418()
{
	return false;
}

bool func_419()
{
	return true;
}

bool func_420()
{
	return true;
}

bool func_421()
{
	if (is_dlc_present(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_422()
{
	int iVar0;
	
	if (network_is_signed_in())
	{
		if (_network_are_ros_available())
		{
			if (_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, 2);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, 4);
				GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, 6);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::GAMEPLAY::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					iVar0 = get_profile_setting(866);
					GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, false);
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
		if (GAMEPLAY::IS_BIT_SET(get_profile_setting(866), false))
		{
			return true;
		}
	}
	return false;
}

bool func_423(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && are_strings_equal(sVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_416(iVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_424(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_88972[iVar0]))
		{
			if (Global_88972[iVar0] == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_425(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_88942[iVar0]) && is_vehicle_driveable(Global_88942[iVar0], 0))
			{
				if (Global_88942[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_88942[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_426(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[24]))
	{
		if (iParam0 == Global_68319.f_484[24])
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68319.f_484[iVar0])
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_427(auto uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = {0f, 0f, 0f};
	*uParam0.f_3 = 0f;
	*uParam0.f_4 = 0;
	StringCopy(uParam0.f_5, "", 16);
	*uParam0.f_9 = 0;
	*uParam0.f_10 = 0;
	*uParam0.f_11 = 0;
	*uParam0.f_12 = 145;
	*uParam0.f_13 = -1;
	*uParam0.f_14 = 0;
	*uParam0.f_15 = {0f, 0f, 0f};
	*uParam0.f_18 = {0f, 0f, 0f};
	switch (iParam1)
	{
		case 0:
			*uParam0 = {-831.8538f, 172.1154f, 69.9058f};
			*uParam0.f_3 = 157.5705f;
			*uParam0.f_4 = func_316(0, 1);
			*uParam0.f_12 = 0;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = {1970.943f, 3801.684f, 31.1396f};
			*uParam0.f_3 = 301.3964f;
			*uParam0.f_4 = func_316(0, 1);
			*uParam0.f_12 = 0;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = {-22.6297f, -1439.137f, 29.6549f};
			*uParam0.f_3 = 180.0808f;
			*uParam0.f_4 = func_316(1, 1);
			*uParam0.f_12 = 1;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = {-22.5229f, -1434.699f, 29.6552f};
			*uParam0.f_3 = 141.6114f;
			*uParam0.f_4 = func_316(1, 2);
			*uParam0.f_12 = 1;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 19);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = {10.9281f, 545.669f, 174.7951f};
			*uParam0.f_3 = 61.392f;
			*uParam0.f_4 = func_316(1, 1);
			*uParam0.f_12 = 1;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = {6.1093f, 544.9742f, 174.2835f};
			*uParam0.f_3 = 92.1548f;
			*uParam0.f_4 = func_316(1, 2);
			*uParam0.f_12 = 1;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 19);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = {1981.416f, 3808.131f, 31.1384f};
			*uParam0.f_3 = 117.2557f;
			*uParam0.f_4 = func_316(2, 1);
			*uParam0.f_12 = 2;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = {-1158.488f, -1529.367f, 3.8995f};
			*uParam0.f_3 = 35.7505f;
			*uParam0.f_4 = func_316(2, 1);
			*uParam0.f_12 = 2;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = {148.2868f, -1270.569f, 28.2252f};
			*uParam0.f_3 = 208.4685f;
			*uParam0.f_4 = func_316(2, 1);
			*uParam0.f_12 = 2;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 20);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = {1459.509f, -1380.45f, 78.3259f};
			*uParam0.f_3 = 99.6211f;
			*uParam0.f_4 = joaat("scorcher");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = {-1518.947f, -1387.865f, -0.5134f};
			*uParam0.f_3 = 98.3867f;
			*uParam0.f_4 = joaat("seashark");
			iVar0 = 1;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			break;
		
		case 11:
			*uParam0 = {353.0926f, 3577.593f, 32.351f};
			*uParam0.f_3 = 16.6205f;
			*uParam0.f_4 = joaat("duster");
			iVar0 = 1;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			break;
		
		case 12:
			*uParam0.f_14 = 0;
			*uParam0 = {-1652.004f, -3142.348f, 12.9921f};
			*uParam0.f_3 = 329.1082f;
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 359;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 13:
			*uParam0.f_14 = 1;
			*uParam0 = {-1271.649f, -3380.685f, 12.9451f};
			*uParam0.f_3 = 329.5137f;
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 359;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 14:
			*uParam0.f_14 = 2;
			*uParam0 = {1735.586f, 3294.531f, 40.1651f};
			*uParam0.f_3 = 194.9525f;
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 359;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 15:
			*uParam0.f_14 = 3;
			*uParam0 = {-846.27f, -1363.19f, 0.22f};
			*uParam0.f_3 = 108.78f;
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 356;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 22);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 16:
			*uParam0.f_14 = 4;
			*uParam0 = {-849.47f, -1354.99f, 0.24f};
			*uParam0.f_3 = 109.84f;
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 356;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 22);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 17:
			*uParam0.f_14 = 5;
			*uParam0 = {-852.47f, -1346.2f, 0.21f};
			*uParam0.f_3 = 108.76f;
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 356;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 22);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 18:
			*uParam0.f_14 = 6;
			*uParam0 = {-745.857f, -1433.904f, 4.0005f};
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 360;
			*uParam0.f_15 = {-756.2952f, -1441.609f, 2.9184f};
			*uParam0.f_18 = {-738.0606f, -1423.068f, 8.2835f};
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 19:
			*uParam0.f_14 = 7;
			*uParam0 = {-761.8486f, -1453.829f, 4.0005f};
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 360;
			*uParam0.f_15 = {-772.8158f, -1459.957f, 3.2894f};
			*uParam0.f_18 = {-754.3353f, -1440.836f, 8.3334f};
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 20:
			*uParam0.f_14 = 8;
			*uParam0 = {1769.3f, 3244f, 41.1f};
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 360;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			iVar0 = 1;
			break;
		
		case 21:
			*uParam0.f_14 = 9;
			*uParam0 = {192.7897f, -1020.539f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0;
			*uParam0.f_13 = 357;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 22:
			*uParam0.f_14 = 10;
			*uParam0 = {192.7897f, -1020.539f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 1;
			*uParam0.f_13 = 357;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 23:
			*uParam0.f_14 = 11;
			*uParam0 = {192.7897f, -1020.539f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 2;
			*uParam0.f_13 = 357;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 14);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 28);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = iParam1 - 26;
			*uParam0.f_14 = 12 + iVar1;
			*uParam0 = {196.2794f, -1020.479f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0 + iVar1;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 27);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = iParam1 - 29;
			*uParam0.f_14 = 15 + iVar1;
			*uParam0 = {199.8872f, -1020.048f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0 + iVar1;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 27);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = iParam1 - 32;
			*uParam0.f_14 = 18 + iVar1;
			*uParam0 = {203.6006f, -1019.776f, -99.98f};
			*uParam0.f_3 = 180f;
			*uParam0.f_4 = 0;
			*uParam0.f_12 = 0 + iVar1;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 7);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 27);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 24);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 29);
			iVar0 = 1;
			break;
		
		case 24:
			*uParam0.f_14 = 21;
			*uParam0 = {0f, 0f, 0f};
			*uParam0.f_3 = 0f;
			*uParam0.f_4 = 0;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 11);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			iVar0 = 1;
			break;
		
		case 25:
			*uParam0.f_14 = 22;
			*uParam0 = {723.2515f, -632.0496f, 27.1484f};
			*uParam0.f_3 = 12.9316f;
			*uParam0.f_4 = joaat("tailgater");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 10);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 11);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = {-51.23f, 3111.9f, 24.95f};
			*uParam0.f_3 = 46.78f;
			*uParam0.f_4 = joaat("proptrailer");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = {-55.7984f, -1096.586f, 25.4223f};
			*uParam0.f_3 = 308.0596f;
			*uParam0.f_4 = joaat("bjxl");
			*uParam0.f_10 = 126;
			*uParam0.f_11 = 126;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 9);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = {-2892.93f, 3192.37f, 11.66f};
			*uParam0.f_3 = -132.35f;
			*uParam0.f_4 = joaat("velum");
			*uParam0.f_10 = 157;
			*uParam0.f_11 = 157;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 9);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = {1744.308f, 3270.673f, 40.2076f};
			*uParam0.f_3 = 125f;
			*uParam0.f_4 = joaat("cargobob3");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = {1751.44f, 3322.643f, 42.1855f};
			*uParam0.f_3 = 268.134f;
			*uParam0.f_4 = joaat("submersible");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = {1377.104f, -2076.2f, 52f};
			*uParam0.f_3 = 37.5f;
			*uParam0.f_4 = joaat("towtruck");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = {1380.42f, -2072.77f, 51.7607f};
			*uParam0.f_3 = 37.5f;
			*uParam0.f_4 = joaat("trash");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = {1359.389f, 3618.441f, 33.8907f};
			*uParam0.f_3 = 108.2337f;
			*uParam0.f_4 = joaat("barracks");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = {693.1154f, -1018.155f, 21.6387f};
			*uParam0.f_3 = 177.6454f;
			*uParam0.f_4 = 1938952078;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = {-73.6963f, 495.124f, 143.5226f};
			*uParam0.f_3 = 155.5994f;
			*uParam0.f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = {-67.6314f, 891.8266f, 234.5348f};
			*uParam0.f_3 = 294.993f;
			*uParam0.f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = {533.9048f, -169.2469f, 53.7005f};
			*uParam0.f_3 = 1.2998f;
			*uParam0.f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = {-726.8914f, -408.6952f, 34.0416f};
			*uParam0.f_3 = 267.7392f;
			*uParam0.f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = {-1321.519f, 261.3993f, 61.5709f};
			*uParam0.f_3 = 350.7697f;
			*uParam0.f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = {-1267.999f, 451.6463f, 93.7071f};
			*uParam0.f_3 = 48.9311f;
			*uParam0.f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = {-1062.076f, -226.7637f, 37.157f};
			*uParam0.f_3 = 234.2767f;
			*uParam0.f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = {68.16914f, -1558.958f, 29.46904f};
			*uParam0.f_3 = 49.90575f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = {589.4399f, 2736.708f, 42.03316f};
			*uParam0.f_3 = -175.7105f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = {-488.774f, -344.5721f, 34.36356f};
			*uParam0.f_3 = 82.4042f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = {288.8808f, -585.4728f, 43.15428f};
			*uParam0.f_3 = -20.80707f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = {304.8294f, -1383.674f, 31.67744f};
			*uParam0.f_3 = -41.11603f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = {1126.194f, -1481.486f, 34.7016f};
			*uParam0.f_3 = -91.43369f;
			*uParam0.f_4 = joaat("rumpo2");
			*uParam0.f_12 = 2;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = {-1598.36f, 5252.84f, 0f};
			*uParam0.f_3 = 28.14f;
			*uParam0.f_4 = joaat("submersible");
			*uParam0.f_13 = 308;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 2);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 30);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = {-1602.62f, 5260.37f, 0.86f};
			*uParam0.f_3 = 25.32f;
			*uParam0.f_4 = joaat("dinghy");
			*uParam0.f_13 = 404;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 2);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 22);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = {2116.571f, 4763.279f, 40.1596f};
			*uParam0.f_3 = 198.723f;
			*uParam0.f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = {1133.21f, 120.2f, 80.9f};
			*uParam0.f_3 = 134.4f;
			if (func_422())
			{
				*uParam0.f_4 = joaat("blimp2");
			}
			else
			{
				*uParam0.f_4 = joaat("blimp");
			}
			*uParam0.f_13 = 401;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 2);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, true);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = {-806.31f, -2679.65f, 13.9f};
			*uParam0.f_3 = 150.54f;
			if (func_422())
			{
				*uParam0.f_4 = joaat("blimp2");
			}
			else
			{
				*uParam0.f_4 = joaat("blimp");
			}
			*uParam0.f_13 = 401;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 13);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 2);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, true);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = {1985.85f, 3828.96f, 31.98f};
			*uParam0.f_3 = -16.58f;
			*uParam0.f_4 = joaat("blazer3");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = {3870.75f, 4464.67f, 0f};
			*uParam0.f_3 = 0f;
			*uParam0.f_4 = joaat("submersible2");
			*uParam0.f_13 = 308;
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, false);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 21);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = {1257.729f, -2564.474f, 41.717f};
			*uParam0.f_3 = 284.5561f;
			*uParam0.f_4 = joaat("dukes2");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = {643.2823f, 3014.152f, 42.2733f};
			*uParam0.f_3 = 128.0554f;
			*uParam0.f_4 = joaat("dukes2");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = {38.9368f, 850.8677f, 196.3f};
			*uParam0.f_3 = 311.6813f;
			*uParam0.f_4 = joaat("dodo");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 30);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = {1333.875f, 4262.226f, 30.78f};
			*uParam0.f_3 = 262.5293f;
			*uParam0.f_4 = joaat("dodo");
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 30);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 23);
			GAMEPLAY::GAMEPLAY::SET_BIT(uParam0.f_9, 6);
			iVar0 = 1;
			break;
	}
	if (GAMEPLAY::IS_BIT_SET(*uParam0.f_9, 10))
	{
		*uParam0.f_4 = Global_101154.f_18807.f_69[*uParam0.f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((*uParam0.f_4 == joaat("miljet") || *uParam0.f_4 == joaat("besra")) || *uParam0.f_4 == joaat("luxor")) || *uParam0.f_4 == joaat("shamal")) || *uParam0.f_4 == joaat("titan")) || *uParam0.f_4 == joaat("luxor2"))
			{
				*uParam0 = {1678.8f, 3229.6f, 41.8f};
				*uParam0.f_3 = 106.0906f;
			}
		}
		if (!func_339(Global_101154.f_18807.f_1864[*uParam0.f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_18807.f_1864[*uParam0.f_14 /*3*/]};
		}
		if (Global_101154.f_18807.f_1934[*uParam0.f_14] != -1f)
		{
			*uParam0.f_3 = Global_101154.f_18807.f_1934[*uParam0.f_14];
		}
	}
	if (GAMEPLAY::IS_BIT_SET(*uParam0.f_9, 19))
	{
		if (!func_339(Global_101154.f_1826.f_539.f_2816[1 /*10*/][*uParam0.f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_1826.f_539.f_2816[1 /*10*/][*uParam0.f_12 /*3*/]};
			*uParam0.f_3 = Global_101154.f_1826.f_539.f_2837[1 /*4*/][*uParam0.f_12];
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(*uParam0.f_9, 20))
	{
		if (!func_339(Global_101154.f_1826.f_539.f_2816[0 /*10*/][*uParam0.f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = {Global_101154.f_1826.f_539.f_2816[0 /*10*/][*uParam0.f_12 /*3*/]};
			*uParam0.f_3 = Global_101154.f_1826.f_539.f_2837[0 /*4*/][*uParam0.f_12];
		}
	}
	return iVar0;
}

void func_428(int iParam0, auto uParam1, Vector3 vParam2, Vector3 fParam3, int iParam4)
{
	if (func_427(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_68319.f_555[0 /*21*/].f_9, 10))
		{
			func_430(iParam0);
			func_429(uParam1, &(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]));
			if (GAMEPLAY::IS_BIT_SET(Global_68319.f_555[0 /*21*/].f_9, 11))
			{
				Global_101154.f_18807.f_1864[Global_68319.f_555[0 /*21*/].f_14 /*3*/] = {vParam2};
				Global_101154.f_18807.f_1934[Global_68319.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_101154.f_18807.f_1864[Global_68319.f_555[0 /*21*/].f_14 /*3*/] = {0f, 0f, 0f};
				Global_101154.f_18807.f_1934[Global_68319.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_177(iParam0, 1);
		}
	}
}

void func_429(auto uParam0, auto uParam1)
{
	*uParam1.f_66 = *uParam0.f_66;
	*uParam1 = *uParam0;
	*uParam1.f_1 = {*uParam0.f_1};
	*uParam1.f_5 = *uParam0.f_5;
	*uParam1.f_6 = *uParam0.f_6;
	*uParam1.f_7 = *uParam0.f_7;
	*uParam1.f_8 = *uParam0.f_8;
	*uParam1.f_9 = {*uParam0.f_9};
	*uParam1.f_59 = {*uParam0.f_59};
	*uParam1.f_62 = *uParam0.f_62;
	*uParam1.f_63 = *uParam0.f_63;
	*uParam1.f_64 = *uParam0.f_64;
	*uParam1.f_65 = *uParam0.f_65;
	*uParam1.f_77 = *uParam0.f_77;
	*uParam1.f_67 = *uParam0.f_67;
	*uParam1.f_69 = *uParam0.f_69;
	*uParam1.f_68 = *uParam0.f_68;
	*uParam1.f_71 = *uParam0.f_71;
	*uParam1.f_72 = *uParam0.f_72;
	*uParam1.f_73 = *uParam0.f_73;
	*uParam1.f_74 = *uParam0.f_74;
	*uParam1.f_75 = *uParam0.f_75;
	*uParam1.f_76 = *uParam0.f_76;
}

void func_430(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_427(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_68319.f_139[iParam0]))
		{
			set_entity_as_mission_entity(Global_68319.f_139[iParam0], true, 1);
			set_vehicle_as_no_longer_needed(&(Global_68319.f_139[iParam0]));
			Global_68319.f_139[iParam0] = 0;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_68319.f_555[0 /*21*/].f_9, 13))
		{
			func_177(iParam0, 0);
		}
	}
}

void func_431(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_430(iParam0);
	func_177(iParam0, 0);
}

bool func_432(Vector3 vParam0, int iParam1, auto uParam2, auto uParam3)
{
	int iVar0;
	
	iVar0 = func_433(vParam0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = {-827.351f, 157.785f, 68.2143f};
			*uParam5 = 85.1509f;
			return true;
			break;
		
		case 1:
		case 2:
			*uParam4 = {1992.523f, 3813.916f, 31.1008f};
			*uParam5 = 122.1498f;
			return true;
			break;
		
		case 3:
			*uParam4 = {-1184.258f, -1496.556f, 3.3895f};
			*uParam5 = 303.2098f;
			return true;
			break;
		
		case 4:
			*uParam4 = {118.1067f, -1325.906f, 28.3706f};
			*uParam5 = 123.5016f;
			return true;
			break;
		
		case 5:
			*uParam4 = {-18.118f, -1455.126f, 29.5004f};
			*uParam5 = 273.2822f;
			return true;
			break;
		
		case 6:
			*uParam4 = {1.5947f, 543.4017f, 173.4644f};
			*uParam5 = 310.7556f;
			return true;
			break;
		
		default:
			break;
	}
	return false;
}

int func_433(Vector3 vParam0, int iParam1, int iParam2)
{
	int iVar0;
	Vector3 fVar1;
	Vector3 fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= 10 - 1)
	{
		if (Global_86649[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86649[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_434(iVar0) || iParam4 == 0)
				{
					fVar1 = get_distance_between_coords(vParam0, Global_86649[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_434(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_101154.f_5919[iParam0], false);
}

int func_435(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68319.f_139[iParam0];
}

void func_436(Vector3 vParam0, Vector3 vParam1, Vector3 fParam2, Vector3 vParam3, Vector3 fParam4, Vector3 vParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	func_437(vParam0, vParam3, fParam6, vParam7, fParam10, vParam11, iParam14, iParam15, iParam16, iParam17, iParam18);
}

void func_437(Vector3 vParam0, Vector3 vParam1, Vector3 fParam2, Vector3 vParam3, Vector3 fParam4, Vector3 vParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	Vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (iParam15)
	{
		iParam15 = false;
	}
	iVar2 = true;
	iVar3 = 0;
	iVar0 = get_players_last_vehicle();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!is_entity_a_mission_entity(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, 0);
			iVar3 = 1;
		}
		if (is_vehicle_driveable(iVar0, 0))
		{
			if (iParam18)
			{
				func_442(iVar0);
			}
			if (is_entity_in_angled_area(iVar0, vParam0, vParam3, fParam6, 0, true, 0))
			{
				iVar1 = true;
			}
			else
			{
				vVar10 = {get_entity_coords(iVar0, 1)};
				if ((vVar10.z > vParam0.z && vVar10.z < vParam3.z) || (vVar10.z > vParam3.z && vVar10.z < vParam0.z))
				{
					if (func_439(iVar0, vParam0, vParam3, fParam6))
					{
						iVar1 = true;
					}
				}
			}
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (is_vehicle_model(iVar0, joaat("taxi")))
				{
					if (get_ped_in_vehicle_seat(iVar0, -1) != PLAYER::PLAYER_PED_ID() && get_ped_in_vehicle_seat(iVar0, -1) != 0)
					{
						if (get_distance_between_coords(vParam0 + vParam3 / Vector(2f, 2f, 2f), get_entity_coords(iVar0, 1), 1) < 20f)
						{
							iVar1 = true;
							iVar2 = false;
						}
					}
				}
			}
			if (iParam16)
			{
				if (func_322(iVar0, func_216(), 1))
				{
					iVar1 = false;
				}
			}
			if (iVar1)
			{
				if (!func_438(vParam11))
				{
					if (is_vehicle_driveable(iVar0, 0))
					{
						iVar13 = ENTITY::GET_ENTITY_MODEL(iVar0);
						_0xDF7E3EEB29642C38(iVar0, &vVar4, &vVar7);
						if (is_this_model_a_heli(iVar13))
						{
							vParam11.x += 3f;
							vParam11.y += 3f;
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							vParam11 = {vParam11 * Vector(1.1f, 1.1f, 1.1f)};
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							vParam11 = {vParam11 * Vector(1.2f, 1.2f, 1.2f)};
						}
						if (vVar7.x - vVar4.x > vParam11.x)
						{
							iVar2 = false;
						}
						else if (vVar7.y - vVar4.y > vParam11.y)
						{
							iVar2 = false;
						}
						else if (vVar7.z - vVar4.z > vParam11.z)
						{
							iVar2 = false;
						}
					}
				}
				if (is_vehicle_driveable(iVar0, 0))
				{
					if (iVar2)
					{
						clear_area_of_vehicles(vParam7, 5f, 0, 0, 0, 0, false);
						set_entity_heading(iVar0, fParam10);
						set_entity_coords(iVar0, vParam7, 1, false, 0, 1);
						set_vehicle_on_ground_properly(iVar0);
						if (iParam17)
						{
							set_vehicle_engine_on(iVar0, false, 1, 0);
							set_vehicle_doors_shut(iVar0, 1);
						}
					}
					else
					{
						if (!is_entity_a_mission_entity(iVar0) || !does_entity_belong_to_this_script(iVar0, 1))
						{
							set_entity_as_mission_entity(iVar0, true, 1);
						}
						if (is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iVar0, 0))
						{
							set_entity_coords(PLAYER::PLAYER_PED_ID(), get_entity_coords(iVar0, 1), 1, false, 0, 1);
						}
						delete_vehicle(&iVar0);
					}
				}
			}
			if (iParam14)
			{
				clear_angled_area_of_vehicles(vParam0, vParam3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (is_entity_a_mission_entity(iVar0))
					{
						set_vehicle_as_no_longer_needed(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!is_entity_a_mission_entity(iVar0))
			{
				set_entity_as_mission_entity(iVar0, true, 0);
			}
			iVar14 = get_ped_in_vehicle_seat(iVar0, -1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
			{
				set_entity_coords(iVar14, get_entity_coords(iVar14, 1), 1, false, 0, 1);
			}
			iVar15 = _get_vehicle_model_max_number_of_passengers(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = get_ped_in_vehicle_seat(iVar0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					set_entity_coords(iVar14, get_entity_coords(iVar14, 1), 1, false, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = get_ped_in_vehicle_seat(iVar0, true);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					set_entity_coords(iVar14, get_entity_coords(iVar14, 1), 1, false, 0, 1);
				}
				iVar14 = get_ped_in_vehicle_seat(iVar0, 2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar14) && !PED::IS_PED_INJURED(iVar14))
				{
					set_entity_coords(iVar14, get_entity_coords(iVar14, 1), 1, false, 0, 1);
				}
			}
			delete_vehicle(&iVar0);
		}
	}
}

bool func_438(Vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_439(int iParam0, Vector3 vParam1, Vector3 vParam2, Vector3 fParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	Vector3 vVar12;
	Vector3 vVar15;
	Vector3[] vVar18 = new Vector3[4];
	struct<2> Var31;
	struct<2> Var34;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		vParam1.z = vParam4.z;
		vVar0 = {func_441(vParam1 - vParam4)};
		vVar3 = {vVar0};
		vVar0.x = -vVar3.y;
		vVar0.y = vVar3.x;
		vVar0.z = 0f;
		vVar6 = {vParam1 - vVar0 * Vector(fParam7 / 2f, fParam7 / 2f, fParam7 / 2f)};
		vVar9 = {vParam1 + vVar0 * Vector(fParam7 / 2f, fParam7 / 2f, fParam7 / 2f)};
		vVar12 = {vParam4 - vVar0 * Vector(fParam7 / 2f, fParam7 / 2f, fParam7 / 2f)};
		vVar15 = {vParam4 + vVar0 * Vector(fParam7 / 2f, fParam7 / 2f, fParam7 / 2f)};
		get_model_dimensions(ENTITY::GET_ENTITY_MODEL(iParam0), &Var31, &Var34);
		vVar18[0 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var31, Var31.f_1, 0f)};
		vVar18[1 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var31, Var34.f_1, 0f)};
		vVar18[2 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var34, Var31.f_1, 0f)};
		vVar18[3 /*3*/] = {get_offset_from_entity_in_world_coords(iParam0, Var34, Var34.f_1, 0f)};
		if (((((((((((((((func_440(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar9) || func_440(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar9, vVar15)) || func_440(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar12, vVar15)) || func_440(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar12)) || func_440(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar9)) || func_440(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar9, vVar15)) || func_440(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar12, vVar15)) || func_440(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar12)) || func_440(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar9)) || func_440(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar9, vVar15)) || func_440(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar12, vVar15)) || func_440(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar12)) || func_440(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar9)) || func_440(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar9, vVar15)) || func_440(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar12, vVar15)) || func_440(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar12))
		{
			return true;
		}
	}
	return false;
}

bool func_440(struct<2> Param0, auto uParam1, struct<2> Param2, auto uParam3, struct<2> Param4, auto uParam5, struct<2> Param6, auto uParam7)
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
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param3;
	fVar3 = Param3.f_1;
	fVar4 = Param6;
	fVar5 = Param6.f_1;
	fVar6 = Param9;
	fVar7 = Param9.f_1;
	fVar8 = fVar2 - fVar0;
	fVar9 = fVar3 - fVar1;
	fVar10 = fVar6 - fVar4;
	fVar11 = fVar7 - fVar5;
	fVar12 = -fVar9 * fVar0 - fVar4 + fVar8 * fVar1 - fVar5 / -fVar10 * fVar9 + fVar8 * fVar11;
	fVar13 = fVar10 * fVar1 - fVar5 - fVar11 * fVar0 - fVar4 / -fVar10 * fVar9 + fVar8 * fVar11;
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return true;
	}
	return false;
}

Vector3 func_441(Vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = 1f / fVar0;
		vParam0 = {vParam0 * Vector(fVar1, fVar1, fVar1)};
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

void func_442(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (is_vehicle_driveable(iParam0, 0))
		{
			if (get_vehicle_engine_health(iParam0) <= 200f)
			{
				set_vehicle_engine_health(iParam0, 500f);
			}
			if (get_vehicle_petrol_tank_health(iParam0) <= 700f)
			{
				set_vehicle_engine_health(iParam0, 900f);
			}
			if (get_entity_health(iParam0) < 200)
			{
				set_vehicle_engine_health(iParam0, 500f);
			}
		}
	}
}

void func_443()
{
	int iVar0;
	
	iVar0 = func_199();
	if (iVar0 == -1)
	{
		return;
	}
	Global_100241[iVar0 /*10*/] = 1;
}

void func_444(int iParam0, int iParam1, int iParam2)
{
	func_543(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		set_gameplay_cam_relative_pitch(0f, 1f);
		set_gameplay_cam_relative_heading(0f);
	}
	if (iParam1 == 1)
	{
		func_230(500, 0);
	}
}

void func_445(int iParam0)
{
	Global_69747 = iParam0;
}

bool func_446(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 1;
	if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
	{
		if ((!is_ped_in_any_heli(PLAYER::PLAYER_PED_ID()) && !is_ped_in_any_boat(PLAYER::PLAYER_PED_ID())) && !is_ped_in_any_plane(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_451(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), fParam1, 1, 1056964608, 0, 1, 0))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!func_449(PLAYER::PLAYER_PED_ID(), -828834893))
				{
					task_leave_any_vehicle(PLAYER::PLAYER_PED_ID(), false, 0);
				}
			}
			if (is_entity_in_air(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0)))
			{
				iVar0 = 0;
			}
		}
	}
	func_448();
	if (func_208())
	{
		func_376();
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (!func_447())
		{
			return false;
		}
	}
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
	}
	return true;
}

int func_447()
{
	int iVar0;
	
	iVar0 = has_cutscene_loaded();
	if (!Global_69488)
	{
		if (!iVar0)
		{
			Global_69488 = 1;
		}
	}
	return iVar0;
}

void func_448()
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 21, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 25, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 24, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 257, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 22, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 23, 1);
}

bool func_449(int iParam0, int iParam1)
{
	if (func_450(iParam0))
	{
		if (get_script_task_status(iParam0, iParam1) == 1 || get_script_task_status(iParam0, iParam1) == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_450(int iParam0)
{
	if (func_228(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return true;
		}
	}
	return false;
}

bool func_451(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 71, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 72, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 76, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 73, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 59, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (iParam5)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!iParam6)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 70, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 74, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 86, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 81, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 82, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 138, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 136, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 107, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 110, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 87, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 88, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 113, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 115, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 116, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 117, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 118, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 119, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 131, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 132, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 123, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 126, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 129, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 130, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 133, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 134, 1);
	_0x17FCA7199A530203();
	if (GAMEPLAY::GET_GAME_TIMER() - Global_29 > 500)
	{
		_task_bring_vehicle_to_halt(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = GAMEPLAY::GET_GAME_TIMER();
	if (!is_entity_dead(iParam0, 0))
	{
		if (absf(get_entity_speed(iParam0)) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

void func_452(char* sParam0, int iParam1)
{
	func_232(iParam1);
	request_cutscene(sParam0, 8);
}

void func_453()
{
	float fVar0;
	
	func_454();
	if (func_228(iLocal_176))
	{
		if (is_entity_playing_anim(iLocal_176, "rcmnigel3", "base", 3))
		{
			fVar0 = get_entity_anim_current_time(iLocal_176, "rcmnigel3", "base");
			if (fVar0 > 0.97f || fVar0 < 0.03f)
			{
				iLocal_157 = 2;
				iLocal_158 = 0;
			}
			else if (func_301(PLAYER::PLAYER_PED_ID(), iLocal_176, 2.5f, 1))
			{
				iLocal_157 = 2;
				iLocal_158 = 0;
			}
		}
		else if (func_301(PLAYER::PLAYER_PED_ID(), iLocal_176, 5f, 1))
		{
			iLocal_157 = 2;
			iLocal_158 = 0;
		}
	}
}

void func_454()
{
	func_456();
	func_448();
	func_455();
}

void func_455()
{
	if (is_player_playing(player_id()))
	{
		if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (func_451(get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0), 10.5f, 1, 1056964608, 0, 1, 0))
			{
				if (get_script_task_status(PLAYER::PLAYER_PED_ID(), -828834893) != 1)
				{
					task_leave_any_vehicle(PLAYER::PLAYER_PED_ID(), false, 0);
				}
			}
		}
	}
}

void func_456()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_292(0))
		{
			func_457(0);
		}
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2284, 2);
	}
}

void func_457(int iParam0)
{
	if (Global_14571)
	{
		func_458(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2284, 16);
	}
	if (is_mobile_phone_call_ongoing())
	{
		stop_scripted_conversation(false);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2283, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2283, 30);
	}
	if (!func_213())
	{
		Global_14413.f_1 = 3;
	}
}

void func_458(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_292(0))
		{
			Global_14571 = 1;
			if (iParam1)
			{
				get_mobile_phone_position(&Global_14350);
			}
			Global_14341 = {Global_14359[Global_14358 /*3*/]};
			set_mobile_phone_position(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = {Global_14366[Global_14358 /*3*/]};
		if (iParam1)
		{
			set_mobile_phone_position(Global_14350);
		}
		else
		{
			set_mobile_phone_position(Global_14341);
		}
	}
}

void func_459()
{
	if (is_audio_scene_active("NIGEL_03_MIX_SETTINGS"))
	{
		stop_audio_scene("NIGEL_03_MIX_SETTINGS");
	}
	if (!is_audio_scene_active("NIGEL_03_JOURNEY_MIX"))
	{
		start_audio_scene("NIGEL_03_JOURNEY_MIX");
	}
	func_460();
	request_cutscene("NMT_3_RCM", 8);
	func_454();
	iLocal_157 = 1;
	iLocal_158 = 0;
}

void func_460()
{
	request_anim_dict(sLocal_179);
	iLocal_183 = 1;
	iLocal_181 = 1;
}

void func_461()
{
}

void func_462()
{
	if (iLocal_568 && iLocal_157 != 14)
	{
		switch (iLocal_566)
		{
			case 0:
				if (iLocal_157 != 0 && iLocal_157 != 2)
				{
					if (func_228(iLocal_176) && func_228(iLocal_177))
					{
						func_221(&uLocal_350, 4, iLocal_176, "NIGEL", 0, 1);
						PED::SET_PED_CONFIG_FLAG(iLocal_176, 185, true);
						set_ped_can_ragdoll_from_player_impact(iLocal_176, 0);
						task_look_at_entity(iLocal_176, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						set_ped_keep_task(iLocal_176, true);
						func_221(&uLocal_350, 3, iLocal_177, "MRSTHORNHILL", 0, 1);
						PED::SET_PED_CONFIG_FLAG(iLocal_177, 185, true);
						set_ped_can_ragdoll_from_player_impact(iLocal_177, 0);
						iLocal_595 = GAMEPLAY::GET_GAME_TIMER();
						add_relationship_group("FRIENDLIES", &iLocal_192);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_192, 1862763509);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_192);
						if (is_ped_in_group(iLocal_176))
						{
							remove_ped_from_group(iLocal_176);
						}
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_176, iLocal_192);
						if (is_ped_in_group(iLocal_177))
						{
							remove_ped_from_group(iLocal_177);
						}
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_177, iLocal_192);
						iLocal_193 = 1;
						iLocal_594 = 0;
						iLocal_603 = 0;
						iLocal_566 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_486())
				{
					iLocal_566 = 2;
				}
				else if (!func_301(PLAYER::PLAYER_PED_ID(), iLocal_176, 100f, 1) && !func_301(PLAYER::PLAYER_PED_ID(), iLocal_177, 100f, 1))
				{
					iLocal_567 = 0;
					iLocal_566 = 2;
				}
				else if (!iLocal_190)
				{
					if (func_468(iLocal_176, 1, 1116471296, 1126825984, 0, 0, 0, 0) || func_468(iLocal_177, 1, 1116471296, 1126825984, 0, 0, 0, 0))
					{
						clear_ped_tasks(iLocal_176);
						task_smart_flee_ped(iLocal_176, PLAYER::PLAYER_PED_ID(), 120f, -1, 0, 0);
						set_ped_keep_task(iLocal_176, true);
						task_play_anim(iLocal_177, sLocal_179, "Cower_Enter_MsT", 16f, -16f, -1, 0, 0, 0, 0, 0);
						set_ped_keep_task(iLocal_177, true);
						if (iLocal_565 == 2 && func_208())
						{
							func_270();
						}
						iLocal_567 = 1;
						iLocal_566 = 2;
						iLocal_190 = 1;
						break;
					}
					else if (is_entity_touching_entity(iLocal_176, Local_165))
					{
						if (func_208())
						{
							if (func_466() == 3 || func_466() == 4)
							{
								func_270();
							}
							else
							{
								func_366();
							}
						}
						set_ped_to_ragdoll(iLocal_176, 750, 2000, 1, 1, 1, 0);
						task_smart_flee_ped(iLocal_176, PLAYER::PLAYER_PED_ID(), 120f, -1, 0, 0);
						task_smart_flee_ped(iLocal_177, PLAYER::PLAYER_PED_ID(), 120f, -1, 0, 0);
						iLocal_567 = 1;
						iLocal_566 = 2;
					}
					else if (is_entity_touching_entity(iLocal_177, Local_165))
					{
						if (func_208())
						{
							if (func_466() == 3 || func_466() == 4)
							{
								func_270();
							}
							else
							{
								func_366();
							}
						}
						set_ped_to_ragdoll(iLocal_177, 750, 2000, 1, 1, 1, 0);
						task_smart_flee_ped(iLocal_176, PLAYER::PLAYER_PED_ID(), 120f, -1, 0, 0);
						task_smart_flee_ped(iLocal_177, PLAYER::PLAYER_PED_ID(), 120f, -1, 0, 0);
						iLocal_567 = 1;
						iLocal_566 = 2;
					}
					else
					{
						switch (iLocal_565)
						{
							case 0:
								if (func_228(iLocal_177))
								{
									if (func_269(&uLocal_350, "NIGE3AU", "NIGEL3_N0", 7, 1, 0, 0))
									{
										iLocal_565 = 1;
									}
								}
								break;
							
							case 1:
								if (iLocal_594 < 3)
								{
									if (!func_208() && func_228(PLAYER::PLAYER_PED_ID()))
									{
										if (GAMEPLAY::GET_GAME_TIMER() - iLocal_595 > 20000 && func_369(PLAYER::PLAYER_PED_ID(), vLocal_195, 30f))
										{
											if (func_300("N3DRIVE", 0, 0) || func_300("N3RTCAR", 0, 0))
											{
												if (func_269(&uLocal_350, Local_569[iLocal_594 /*8*/], Local_569[iLocal_594 /*8*/].f_1, 7, 1, 0, 0))
												{
													iLocal_565 = 2;
												}
											}
											else if (func_269(&uLocal_350, Local_569[iLocal_594 /*8*/], Local_569[iLocal_594 /*8*/].f_1, 7, 0, 0, 0))
											{
												iLocal_565 = 2;
											}
										}
									}
								}
								else if (iLocal_603 < 6)
								{
									if (!func_208() && func_228(PLAYER::PLAYER_PED_ID()))
									{
										if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_595 > 20000 && func_369(PLAYER::PLAYER_PED_ID(), vLocal_195, 30f)) && (get_profile_setting(203) == 0 || !func_300("N3DRIVE", 0, 0)))
										{
											if (func_465(&uLocal_350, "NIGE3AU", "NIGEL3_DAWD", sLocal_596[iLocal_603], 7, 0, 0))
											{
												iLocal_603++;
												iLocal_565 = 2;
											}
										}
									}
								}
								else
								{
									iLocal_565 = 5;
								}
								break;
							
							case 2:
								if (!func_369(PLAYER::PLAYER_PED_ID(), vLocal_195, 35f))
								{
									func_387(&uLocal_604);
									func_366();
									iLocal_565 = 4;
								}
								else
								{
									func_374(&uLocal_604, &uLocal_350, "NIGE3AU", &sLocal_605, &sLocal_611);
								}
								if (!func_208())
								{
									iLocal_565 = 4;
								}
								break;
							
							case 4:
								iLocal_595 = GAMEPLAY::GET_GAME_TIMER();
								iLocal_594++;
								iLocal_565 = 1;
								break;
							
							case 5:
								break;
							}
						}
				}
				break;
			
			case 2:
				func_464();
				switch (iLocal_567)
				{
					case 5:
						sLocal_698 = "N3MRSTDEAD";
						iLocal_157 = 13;
						iLocal_158 = 0;
						break;
					
					case 4:
						sLocal_698 = "N3MRSTHURT";
						iLocal_157 = 13;
						iLocal_158 = 0;
						break;
					
					case 3:
						sLocal_698 = "N3NIGEDEAD";
						iLocal_157 = 13;
						iLocal_158 = 0;
						break;
					
					case 2:
						sLocal_698 = "N3NIGEHURT";
						iLocal_157 = 13;
						iLocal_158 = 0;
						break;
					
					case 1:
						sLocal_698 = "N3SCARED";
						iLocal_157 = 13;
						iLocal_158 = 0;
						break;
					
					case 0:
						if (!func_208() && iLocal_568)
						{
							iLocal_568 = 0;
							func_463(&uLocal_350, 4);
							func_463(&uLocal_350, 3);
							if (iLocal_193)
							{
								remove_relationship_group(iLocal_192);
								iLocal_193 = 0;
							}
							func_539(&iLocal_176);
							func_203(&iLocal_178);
							func_539(&iLocal_177);
						}
						break;
				}
				break;
			}
	}
}

void func_463(auto uParam0, int iParam1)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
		*(uParam0[iParam1 /*10*/]).f_7 = 0;
	}
}

void func_464()
{
	remove_anim_dict(sLocal_179);
}

int func_465(auto uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_220(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 1;
	Global_16705 = 0;
	Global_16709 = 0;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_210(sParam2, iParam4, 0);
}

int func_466()
{
	int iVar0;
	char[24] cVar1;
	char* sVar7;
	
	if (Global_15712 == 4)
	{
		iVar0 = get_current_scripted_conversation_line();
		iVar0 += Global_16722;
		if (iVar0 > -1)
		{
			if (does_text_label_exist(&(Global_14580[iVar0 /*6*/])))
			{
				cVar1 = {Global_15331};
				StringConCat(&cVar1, "SL", 24);
				sVar7 = _get_text_substring(_get_label_text(&cVar1), iVar0 * 3, iVar0 * 3 + 1);
				return func_467(sVar7);
			}
			else
			{
				return -1;
			}
		}
		else
		{
			return -2;
		}
	}
	return -3;
}

int func_467(char* sParam0)
{
	if (are_strings_equal(sParam0, "0"))
	{
		return 0;
	}
	if (are_strings_equal(sParam0, "1"))
	{
		return 1;
	}
	if (are_strings_equal(sParam0, "2"))
	{
		return 2;
	}
	if (are_strings_equal(sParam0, "3"))
	{
		return 3;
	}
	if (are_strings_equal(sParam0, "4"))
	{
		return 4;
	}
	if (are_strings_equal(sParam0, "5"))
	{
		return 5;
	}
	if (are_strings_equal(sParam0, "6"))
	{
		return 6;
	}
	if (are_strings_equal(sParam0, "7"))
	{
		return 7;
	}
	if (are_strings_equal(sParam0, "8"))
	{
		return 8;
	}
	if (are_strings_equal(sParam0, "9"))
	{
		return 9;
	}
	if (are_strings_equal(sParam0, "A"))
	{
		return 10;
	}
	if (are_strings_equal(sParam0, "B"))
	{
		return 11;
	}
	if (are_strings_equal(sParam0, "C"))
	{
		return 12;
	}
	if (are_strings_equal(sParam0, "D"))
	{
		return 13;
	}
	if (are_strings_equal(sParam0, "E"))
	{
		return 14;
	}
	if (are_strings_equal(sParam0, "F"))
	{
		return 15;
	}
	if (are_strings_equal(sParam0, "G"))
	{
		return 16;
	}
	if (are_strings_equal(sParam0, "H"))
	{
		return 17;
	}
	if (are_strings_equal(sParam0, "I"))
	{
		return 18;
	}
	if (are_strings_equal(sParam0, "J"))
	{
		return 19;
	}
	if (are_strings_equal(sParam0, "K"))
	{
		return 20;
	}
	if (are_strings_equal(sParam0, "L"))
	{
		return 21;
	}
	if (are_strings_equal(sParam0, "M"))
	{
		return 22;
	}
	if (are_strings_equal(sParam0, "N"))
	{
		return 23;
	}
	if (are_strings_equal(sParam0, "O"))
	{
		return 24;
	}
	if (are_strings_equal(sParam0, "P"))
	{
		return 25;
	}
	if (are_strings_equal(sParam0, "Q"))
	{
		return 26;
	}
	if (are_strings_equal(sParam0, "R"))
	{
		return 27;
	}
	if (are_strings_equal(sParam0, "S"))
	{
		return 28;
	}
	if (are_strings_equal(sParam0, "T"))
	{
		return 29;
	}
	if (are_strings_equal(sParam0, "U"))
	{
		return 30;
	}
	if (are_strings_equal(sParam0, "V"))
	{
		return 31;
	}
	if (are_strings_equal(sParam0, "W"))
	{
		return 32;
	}
	if (are_strings_equal(sParam0, "X"))
	{
		return 33;
	}
	if (are_strings_equal(sParam0, "Y"))
	{
		return 34;
	}
	if (are_strings_equal(sParam0, "Z"))
	{
		return 35;
	}
	if (are_strings_equal(sParam0, "z"))
	{
		return -1;
	}
	return -1;
}

int func_468(int iParam0, int iParam1, Vector3 fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Vector3 vVar0;
	
	if (func_228(PLAYER::PLAYER_PED_ID()) && func_228(iParam0))
	{
		if (has_entity_been_damaged_by_entity(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (func_481(iParam0, iParam1, iParam5, iParam6, iParam7))
		{
			return 1;
		}
		if (!is_ped_armed(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (is_ped_in_melee_combat(PLAYER::PLAYER_PED_ID()))
			{
				vVar0 = {get_entity_coords(PLAYER::PLAYER_PED_ID(), 1) - get_entity_coords(iParam0, 1)};
				if (vVar0.x * vVar0.x + vVar0.y * vVar0.y + vVar0.z * vVar0.z <= 5f)
				{
					return func_480(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (iParam4)
		{
			return 0;
		}
		else if (func_469(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

bool func_469(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_228(PLAYER::PLAYER_PED_ID()) && func_228(iParam0))
	{
		if (func_479(iParam0) || is_player_targetting_entity(player_id(), iParam0))
		{
			if (is_ped_armed(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_470(iParam0, fParam1))
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_470(int iParam0, float fParam1)
{
	return func_471(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

int func_471(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	auto uVar0;
	Vector3 vVar1;
	int iVar4;
	
	iVar4 = func_478(iParam0, iParam1);
	if (!func_228(iParam0) || !func_228(iParam1))
	{
		if (iVar4 != -1)
		{
			func_477(&(Local_37[iVar4 /*4*/]));
		}
		return false;
	}
	if (!func_475(iParam0, iParam1, fParam2, iParam3))
	{
		return false;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_474();
		if (iVar4 == -1)
		{
			return false;
		}
		Local_37[iVar4 /*4*/].f_1 = iParam0;
		Local_37[iVar4 /*4*/].f_2 = iParam1;
	}
	vVar1 = {get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f)};
	uVar0 = func_472(&(Local_37[iVar4 /*4*/]), vVar1, iParam1, &(Local_37[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || GAMEPLAY::GET_GAME_TIMER() - Local_37[iVar4 /*4*/].f_3 < iParam4);
}

bool func_472(auto uParam0, Vector3 vParam1, int iParam2, auto uParam3, int iParam4, int iParam5)
{
	auto uVar0;
	Vector3 vVar1;
	auto uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = false;
	if (!func_228(iParam4))
	{
		*uParam0 = 0;
		return false;
	}
	if (*uParam0 == 0)
	{
		vVar1 = {func_473(iParam4, iParam7)};
		*uParam0 = _0x7EE9F5D83DD4F90E(vParam1, vVar1 + vVar1 - vParam1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return false;
	}
	iVar8 = _get_raycast_result(*uParam0, &uVar0, &vVar1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return false;
	}
	else if (iVar8 == 1)
	{
		return false;
	}
	*uParam0 = 0;
	if (is_entity_a_ped(iVar7))
	{
		func_228(iVar7);
		if (get_ped_index_from_entity_index(iVar7) == iParam4)
		{
			if (iLocal_78)
			{
				draw_debug_line_with_two_colours(vParam1, get_entity_coords(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = GAMEPLAY::GET_GAME_TIMER();
			return true;
		}
		return false;
	}
	if (is_entity_a_vehicle(iVar7))
	{
		func_228(iVar7);
		if (is_ped_in_any_vehicle(iParam4, 0))
		{
			if (get_vehicle_index_from_entity_index(iVar7) == get_vehicle_ped_is_in(iParam4, 0))
			{
				if (iLocal_78)
				{
					draw_debug_line_with_two_colours(vParam1, get_entity_coords(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = GAMEPLAY::GET_GAME_TIMER();
				return true;
			}
		}
		return false;
	}
	return false;
}

Vector3 func_473(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = get_random_int_in_range(false, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return get_entity_coords(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return get_ped_bone_coords(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return get_ped_bone_coords(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return get_ped_bone_coords(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return get_ped_bone_coords(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return get_ped_bone_coords(iParam0, 36864, 0f, 0f, 0f);
	}
	return get_entity_coords(iParam0, 1);
}

int func_474()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if ((Local_37[iVar0 /*4*/] == 0 && Local_37[iVar0 /*4*/].f_1 == 0) && Local_37[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_475(int iParam0, int iParam1, float fParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	
	vVar0 = {func_441(get_entity_coords(iParam1, 1) - get_entity_coords(iParam0, 1))};
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return true;
	}
	if (iParam3 == 0)
	{
		vVar3 = {get_entity_forward_vector(iParam0)};
	}
	else
	{
		vVar3 = {func_441(get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) - get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_476(vVar3, vVar0);
	if (fVar6 <= cos(fParam2 / 2f))
	{
		return false;
	}
	return true;
}

float func_476(Vector3 vParam0, Vector3 vParam1)
{
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

void func_477(auto uParam0)
{
	*uParam0 = 0;
	*uParam0.f_1 = 0;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
}

int func_478(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_37)
	{
		if (Local_37[iVar0 /*4*/].f_1 == iParam0 && Local_37[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_479(int iParam0)
{
	if (is_player_free_aiming_at_entity(player_id(), iParam0) && is_ped_armed(PLAYER::PLAYER_PED_ID(), 6))
	{
		return true;
	}
	return false;
}

int func_480(int iParam0, int iParam1, Vector3 fParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {get_entity_forward_vector(iParam0)};
	vVar3 = {get_entity_coords(iParam1, 1) - get_entity_coords(iParam0, 1)};
	return vVar0.x * vVar3.x + vVar0.y * vVar3.y / vdist(vVar3, 0f, 0f, 0f) > cos(fParam2);
}

bool func_481(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (iParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (iParam2)
	{
		fVar0 = 2f;
	}
	if (func_228(PLAYER::PLAYER_PED_ID()) && func_228(iParam0))
	{
		get_current_ped_weapon(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!iParam2)
		{
			if (func_485(iParam0, iParam1, fVar0, fVar1))
			{
				return true;
			}
			if (func_482(iParam0, fVar1, iParam3, iParam4))
			{
				return true;
			}
		}
		else
		{
			if (is_ped_current_weapon_silenced(PLAYER::PLAYER_PED_ID()))
			{
				if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
				{
					if (is_bullet_in_area(get_entity_coords(iParam0, 1), fVar0, 1))
					{
						return true;
					}
				}
			}
			else
			{
				if (iParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_485(iParam0, iParam1, fVar0, fVar1))
				{
					return true;
				}
			}
			if (func_482(iParam0, fVar1, iParam3, iParam4))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_482(int iParam0, float fParam1, int iParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	
	vVar0 = {get_entity_coords(iParam0, 1)};
	vVar3 = {vVar0};
	vVar0.x -= fParam1;
	vVar0.y -= fParam1;
	vVar0.z -= fParam1;
	vVar3.x += fParam1;
	vVar3.y += fParam1;
	vVar3.z += fParam1;
	if (iParam2)
	{
		if (((_0x34318593248C8FB2(get_entity_coords(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || _0x34318593248C8FB2(get_entity_coords(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || _0x34318593248C8FB2(get_entity_coords(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || _0x34318593248C8FB2(get_entity_coords(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (iParam3)
			{
				if (func_483(iParam0, fParam1))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			return true;
		}
	}
	else
	{
		if (iParam3)
		{
			if (func_483(iParam0, fParam1))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		if (is_projectile_in_area(vVar0, vVar3, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_483(int iParam0, float fParam1)
{
	auto uVar0;
	Vector3 vVar1;
	
	if ((((_0x82FDE6A57EE4EE44(iParam0, joaat("weapon_grenade"), fParam1, &vVar1, &uVar0, 0) || _0x82FDE6A57EE4EE44(iParam0, joaat("weapon_smokegrenade"), fParam1, &vVar1, &uVar0, 0)) || _0x82FDE6A57EE4EE44(iParam0, joaat("weapon_bzgas"), fParam1, &vVar1, &uVar0, 0)) || _0x82FDE6A57EE4EE44(iParam0, joaat("weapon_stickybomb"), fParam1, &vVar1, &uVar0, 0)) || _0x82FDE6A57EE4EE44(iParam0, joaat("weapon_molotov"), fParam1, &vVar1, &uVar0, 0))
	{
		if (func_484(iParam0, vVar1, 90f, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_484(int iParam0, Vector3 vParam1, float fParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	
	vVar0 = {func_441(vParam1 - get_entity_coords(iParam0, 1))};
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return true;
	}
	if (iParam5 == 0)
	{
		vVar3 = {get_entity_forward_vector(iParam0)};
	}
	else
	{
		vVar3 = {func_441(get_ped_bone_coords(iParam0, 31086, 0f, 5f, 0f) - get_ped_bone_coords(iParam0, 31086, 0f, 0f, 0f))};
	}
	fVar6 = func_476(vVar3, vVar0);
	if (fVar6 <= cos(fParam4 / 2f))
	{
		return false;
	}
	return true;
}

bool func_485(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam1)
	{
		if (is_ped_shooting(PLAYER::PLAYER_PED_ID()))
		{
			if (is_entity_at_entity(PLAYER::PLAYER_PED_ID(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return true;
			}
		}
	}
	if (is_bullet_in_area(get_entity_coords(iParam0, 1), fParam2, 1))
	{
		return true;
	}
	return false;
}

bool func_486()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_176))
	{
		if (is_entity_dead(iLocal_176, 0))
		{
			iLocal_567 = 3;
			return false;
		}
		else if (has_entity_been_damaged_by_entity(iLocal_176, PLAYER::PLAYER_PED_ID(), 1))
		{
			iLocal_567 = 2;
			return false;
		}
	}
	else
	{
		iLocal_567 = 2;
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_177))
	{
		if (is_entity_dead(iLocal_177, 0))
		{
			iLocal_567 = 5;
			return false;
		}
		else if (has_entity_been_damaged_by_entity(iLocal_177, PLAYER::PLAYER_PED_ID(), 1))
		{
			iLocal_567 = 4;
			return false;
		}
	}
	else
	{
		iLocal_567 = 4;
		return false;
	}
	return true;
}

bool func_487()
{
	if (!func_228(PLAYER::PLAYER_PED_ID()))
	{
		sLocal_698 = "DEFAULT";
		iLocal_157 = 13;
		iLocal_158 = 0;
		return true;
	}
	if ((((((iLocal_157 != 0 && iLocal_157 != 1) && iLocal_157 != 2) && iLocal_157 != 9) && iLocal_157 != 7) && iLocal_157 != 10) && iLocal_157 != 14)
	{
		if (!func_228(Local_165))
		{
			iLocal_157 = 12;
			iLocal_158 = 0;
			return false;
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_175) && !func_228(iLocal_175))
		{
			iLocal_157 = 12;
			iLocal_158 = 0;
			return false;
		}
		else if (func_488())
		{
			sLocal_698 = "N3STUCK";
			iLocal_157 = 13;
			iLocal_158 = 0;
			return true;
		}
	}
	return false;
}

int func_488()
{
	int iVar0;
	
	iVar0 = 0;
	if (is_vehicle_stuck_on_roof(Local_165))
	{
		if (iLocal_173)
		{
			if (GAMEPLAY::GET_GAME_TIMER() - iLocal_174 > 7000)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iLocal_173 = 1;
			iLocal_174 = GAMEPLAY::GET_GAME_TIMER();
		}
	}
	else
	{
		if (iLocal_173)
		{
		}
		iLocal_173 = 0;
	}
	return iVar0;
}

void func_489()
{
	switch (iLocal_158)
	{
		case 0:
			func_241(&iLocal_294);
			clear_prints();
			if (is_string_null_or_empty(sLocal_698))
			{
				sLocal_698 = "DEFAULT";
			}
			if (are_strings_equal(sLocal_698, "DEFAULT"))
			{
				func_544(1);
			}
			else
			{
				func_492(sLocal_698, 1);
			}
			iLocal_158 = 1;
			break;
		
		case 1:
			if (func_491())
			{
				if (iLocal_618)
				{
					func_490(2555.932f, 1645.358f, 27.9926f, 89f);
				}
				func_270();
				func_539(&iLocal_175);
				func_539(&iLocal_176);
				func_203(&iLocal_178);
				func_539(&iLocal_177);
				if (ENTITY::DOES_ENTITY_EXIST(Local_165))
				{
					remove_vehicle_upsidedown_check(Local_165);
				}
				func_407(&Local_165);
				if (ENTITY::DOES_ENTITY_EXIST(Local_557))
				{
					delete_mission_train(&Local_557);
				}
				func_541();
			}
			break;
	}
}

void func_490(Vector3 vParam0, float fParam1)
{
	if (func_339(Global_69729, 0f, 0f, 0f, 0))
	{
		Global_69729 = {vParam0};
		Global_69732 = fParam3;
	}
}

bool func_491()
{
	if (Global_3)
	{
		return true;
	}
	if (Global_91278 == 7 || Global_91278 == 8)
	{
		return true;
	}
	return false;
}

void func_492(char* sParam0, int iParam1)
{
	func_493(sParam0);
	func_544(iParam1);
}

void func_493(char* sParam0)
{
	if (!is_string_null_or_empty(sParam0))
	{
		if (get_length_of_literal_string(sParam0) <= 16)
		{
			StringCopy(&Global_69721, sParam0, 16);
			StringCopy(&Global_69725, "", 16);
			if (_is_recording())
			{
				_stop_recording_and_save_clip();
			}
		}
	}
}

void func_494(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	auto uVar11;
	int iVar12;
	
	if (Global_69743 != 6)
	{
		if (Global_69745 == -1)
		{
			if (func_505(1, Param0))
			{
				if (Global_69746 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_21 > fVar0)
				{
					Global_69745 = GAMEPLAY::GET_GAME_TIMER();
					vLocal_22 = {get_hud_component_position(15)};
					fLocal_21 = 0f;
				}
				else
				{
					fLocal_21 += get_frame_time();
				}
			}
			else
			{
				fLocal_21 = 0f;
			}
		}
		else
		{
			if (!func_505(0, Param0))
			{
				Global_69745 = GAMEPLAY::GET_GAME_TIMER() - 9000;
			}
			hide_hud_component_this_frame(7);
			hide_hud_component_this_frame(6);
			hide_hud_component_this_frame(8);
			hide_hud_component_this_frame(9);
			iVar1 = GAMEPLAY::GET_GAME_TIMER() - Global_69745;
			if (iVar1 < 9000 && !is_screen_faded_out())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = ceil(to_float(iVar1) / 1000f * 255f);
				}
				else
				{
					iVar3 = 9000 - iVar1;
					if (iVar3 < 1000)
					{
						iVar2 = ceil(to_float(iVar3) / 1000f * 255f);
					}
				}
				switch (Global_69743)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				_set_screen_draw_position(82, 66);
				set_text_font(1);
				set_text_justification(2);
				iVar12 = func_216();
				if (Global_69746 == 1 && Global_69744 == 62)
				{
					iVar12 = Global_101154.f_1826.f_539.f_3550;
				}
				switch (iVar12)
				{
					case 0:
						get_hud_colour(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						get_hud_colour(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						get_hud_colour(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				set_text_colour(iVar8, iVar9, iVar10, iVar2);
				set_text_drop_shadow();
				Var4 = {func_496(Global_69744, Global_69746, iParam10)};
				if (fVar7 == -0.014f)
				{
				}
				_0xF5A2C681787E579D(fVar6, fVar7, 0f, 0.01f);
				set_text_scale(0.67f, 0.67f);
				if (!get_is_widescreen() && !get_is_hidef())
				{
					fLocal_26 = 0.14f;
				}
				else
				{
					fLocal_26 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (func_495(&Var4) > fLocal_26)
					{
						if (is_hud_component_active(15))
						{
							set_hud_component_position(15, vLocal_22.x, vLocal_22.y + fLocal_25);
							Global_69748 = 1;
						}
					}
				}
				_set_text_entry(&Var4);
				_draw_text(fVar6, fVar7, 0);
				_0xE3A3DB414A373DAB();
				if (Global_69747 == 1)
				{
					func_168();
					fLocal_21 = 0f;
				}
			}
			else
			{
				func_168();
				fLocal_21 = 0f;
			}
		}
	}
}

float func_495(char* sParam0)
{
	_set_text_entry_for_width(sParam0);
	return _get_text_screen_width(1);
}

struct<2> func_496(int iParam0, int iParam1, int iParam2)
{
	char[8] cVar0;
	int iVar2;
	
	StringCopy(&cVar0, "", 8);
	switch (iParam1)
	{
		case 1:
			cVar0 = {func_504(iParam0)};
			break;
		
		case 7:
			cVar0 = {func_154(iParam0)};
			break;
		
		case 3:
			iVar2 = iParam0;
			switch (iVar2)
			{
				case 0:
					cVar0 = {func_503(iParam2)};
					break;
				
				case 8:
					cVar0 = {func_502(iParam2)};
					break;
				
				case 7:
					cVar0 = {func_501(iParam2)};
					break;
				
				case 10:
					cVar0 = {func_500(iParam2)};
					break;
				
				case 5:
					cVar0 = {func_499(iParam2)};
					break;
				
				case 4:
					cVar0 = {func_498(iParam2)};
					break;
				
				default:
					StringCopy(&cVar0, func_497(iVar2), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return cVar0;
}

char* func_497(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_498(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	IntToString(&Var2, iParam0, 8);
	if (is_string_null_or_empty(&Var2))
	{
	}
	else
	{
		StringCopy(&cVar0, "MGOR_", 8);
		StringConCat(&cVar0, &Var2, 8);
	}
	return cVar0;
}

struct<2> func_499(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	IntToString(&Var2, iParam0, 8);
	if (is_string_null_or_empty(&Var2))
	{
	}
	else
	{
		StringCopy(&cVar0, "MGFS_", 8);
		StringConCat(&cVar0, &Var2, 8);
	}
	return cVar0;
}

struct<2> func_500(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	IntToString(&Var2, iParam0, 8);
	if (is_string_null_or_empty(&Var2))
	{
	}
	else
	{
		StringCopy(&cVar0, "MGSP_", 8);
		StringConCat(&cVar0, &Var2, 8);
	}
	return cVar0;
}

struct<2> func_501(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	IntToString(&Var2, iParam0, 8);
	if (is_string_null_or_empty(&Var2))
	{
	}
	else
	{
		StringCopy(&cVar0, "MGSR_", 8);
		StringConCat(&cVar0, &Var2, 8);
	}
	return cVar0;
}

struct<2> func_502(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	IntToString(&Var2, iParam0, 8);
	if (is_string_null_or_empty(&Var2) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&cVar0, "MGCR_", 8);
		StringConCat(&cVar0, &Var2, 8);
	}
	return cVar0;
}

struct<2> func_503(auto uParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	IntToString(&Var2, uParam0, 8);
	if (is_string_null_or_empty(&Var2))
	{
	}
	else
	{
		StringCopy(&cVar0, "MGBJ_", 8);
		StringConCat(&cVar0, &Var2, 8);
	}
	return cVar0;
}

struct<2> func_504(int iParam0)
{
	char[8] cVar0;
	
	StringCopy(&cVar0, "M_", 8);
	StringConCat(&cVar0, &(Global_82399[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_101154.f_7775.f_99.f_205[7])
		{
			case 1:
				StringConCat(&cVar0, "A", 8);
				break;
			
			case 2:
				StringConCat(&cVar0, "B", 8);
				break;
			
			default:
				StringConCat(&cVar0, "A", 8);
				break;
			}
	}
	return cVar0;
}

bool func_505(int iParam0, auto uParam1, auto uParam2, auto uParam3, auto uParam4, auto uParam5, auto uParam6)
{
	if (((!func_507(0) || Global_69758) || Global_69747 == 1) || !is_screen_faded_in())
	{
		return false;
	}
	switch (Global_69743)
	{
		case 0:
			if (are_strings_equal(&uParam1, "NONE") || is_string_null_or_empty(&uParam1))
			{
				Global_69743 = 3;
			}
			else
			{
				Global_69743 = 1;
			}
			break;
		
		case 1:
			if (has_cutscene_loaded())
			{
				Global_69743 = 2;
			}
			break;
		
		case 2:
			if (is_cutscene_playing())
			{
				Global_69743 = 4;
				return true;
			}
			else if (!is_cutscene_active())
			{
				Global_69743 = 3;
			}
			break;
		
		case 3:
			if (is_cutscene_playing())
			{
			}
			else
			{
				Global_69743 = 5;
				return true;
			}
			break;
		
		case 4:
			if (is_cutscene_playing())
			{
				return true;
			}
			else if (iParam0 == 1)
			{
				Global_69743 = 5;
			}
			break;
		
		case 5:
			if ((is_cutscene_playing() || func_292(0)) || func_506(1))
			{
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

int func_506(int iParam0)
{
	if (iParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_507(int iParam0)
{
	if (Global_35711 == 15)
	{
		return false;
	}
	if (func_508(iParam0))
	{
		return false;
	}
	return true;
}

int func_508(int iParam0)
{
	return func_509(iParam0, Global_35711);
}

bool func_509(int iParam0, int iParam1)
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

void func_510(int iParam0)
{
	func_516(1, 1);
	if (iParam0)
	{
		func_515(2605.444f, 1890.189f, 26.1751f, 196.5f, 1, 0);
	}
	else if (func_228(PLAYER::PLAYER_PED_ID()))
	{
		set_entity_coords(PLAYER::PLAYER_PED_ID(), 2605.444f, 1890.189f, 26.1751f, 1, false, 0, 1);
		set_entity_heading(PLAYER::PLAYER_PED_ID(), 196.5f);
	}
	if (is_audio_scene_active("NIGEL_03_MIX_SETTINGS"))
	{
		stop_audio_scene("NIGEL_03_MIX_SETTINGS");
	}
	if (!is_audio_scene_active("NIGEL_03_JOURNEY_MIX"))
	{
		start_audio_scene("NIGEL_03_JOURNEY_MIX");
	}
	set_model_as_no_longer_needed(joaat("ig_nigel"));
	set_model_as_no_longer_needed(joaat("ig_mrs_thornhill"));
	STREAMING::REQUEST_MODEL(Local_165.f_1);
	while (!ENTITY::DOES_ENTITY_EXIST(Local_165))
	{
		func_403(2621.299f, 1868.021f, 26.4687f, 60.4f, 0);
		wait(0);
	}
	if (func_228(Local_165))
	{
		explode_vehicle_in_cutscene(Local_165, 1);
	}
	set_random_trains(0);
	func_539(&(Local_557.f_6));
	delete_all_trains();
	iLocal_314 = false;
	iLocal_696 = 0;
	iLocal_157 = 10;
	iLocal_158 = 0;
	if (iParam0)
	{
		while (!has_additional_text_loaded(false))
		{
			wait(0);
		}
		func_513(0, -1, 1);
	}
	else
	{
		func_511(2605.444f, 1890.189f, 26.1751f, 1112014848, 12, 5000, 0, 0);
	}
	wait(1000);
	func_444(1, 1, 1);
}

void func_511(Vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	iVar0 = _0x219C7B8D53E429FD(vParam0, fParam3, iParam4, 127);
	if (_0x07C313F94746702C(iVar0))
	{
		iVar1 = GAMEPLAY::GET_GAME_TIMER() + iParam5;
		while (!_0x7D41E9D2D17C5B2D(iVar0) && GAMEPLAY::GET_GAME_TIMER() < iVar1)
		{
			if (iParam7)
			{
				func_456();
			}
			if (iParam6)
			{
				func_512();
			}
			wait(0);
		}
		if (GAMEPLAY::GET_GAME_TIMER() < iVar1)
		{
		}
		_0x1EE7D8DF4425F053(iVar0);
	}
}

void func_512()
{
	Global_17118.f_6 = 1;
}

void func_513(int iParam0, int iParam1, int iParam2)
{
	if (func_526() && func_514())
	{
		while (Global_91273 != 6)
		{
			wait(0);
		}
		set_game_paused(false);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				clear_ped_wetness(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (is_vehicle_driveable(iParam0, 0))
					{
						if (!is_ped_in_vehicle(PLAYER::PLAYER_PED_ID(), iParam0, 0))
						{
							set_ped_into_vehicle(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
							set_gameplay_cam_relative_pitch(0f, 1f);
							set_gameplay_cam_relative_heading(0f);
							wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (is_player_playing(player_id()))
			{
				set_player_control(player_id(), true, 0);
			}
		}
		_stop_all_screen_effects();
		func_13(0);
	}
}

int func_514()
{
	return GAMEPLAY::IS_BIT_SET(Global_91278.f_20, 13);
}

void func_515(Vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_526())
	{
		set_this_script_can_be_paused(0);
		GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 2);
		set_game_paused(true);
		if (is_player_playing(player_id()))
		{
			set_player_control(player_id(), false, 0);
		}
		Global_91274 = {vParam0};
		Global_91277 = fParam3;
		Global_91273 = 1;
		if (iParam4 == 1)
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_91278.f_20), 14);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 14);
		}
		if (iParam5 == 1)
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_91278.f_20), 24);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 24);
		}
		func_13(1);
	}
}

void func_516(int iParam0, int iParam1)
{
	if (iParam0)
	{
		func_517(0, 1, 1);
	}
	if (!is_screen_faded_out())
	{
		do_screen_fade_out(false);
	}
	func_229(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, iParam1, 1, 1, 1);
}

void func_517(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = true;
	if (is_cutscene_active())
	{
		while (iVar0)
		{
			iVar0 = is_cutscene_active();
			if (is_cutscene_playing())
			{
				stop_cutscene(0);
			}
			if (has_cutscene_loaded())
			{
				remove_cutscene();
			}
			if (is_cutscene_active() && !is_cutscene_playing())
			{
				iVar0 = false;
			}
			wait(0);
		}
		if (iParam0)
		{
			func_543(iParam1, iParam2, 1, 1);
		}
	}
}

void func_518(int iParam0)
{
	func_516(1, 1);
	func_539(&(Local_557.f_6));
	if (ENTITY::DOES_ENTITY_EXIST(Local_557))
	{
		delete_mission_train(&Local_557);
	}
	set_random_trains(0);
	delete_all_trains();
	iLocal_314 = false;
	if (iParam0)
	{
		func_515(vLocal_295, 0f, 1, 0);
	}
	else if (func_228(PLAYER::PLAYER_PED_ID()))
	{
		set_entity_coords(PLAYER::PLAYER_PED_ID(), vLocal_295, 1, false, 0, 1);
	}
	if (iLocal_193)
	{
		remove_relationship_group(iLocal_192);
	}
	func_401(&Local_96, 1);
	func_539(&iLocal_176);
	func_203(&iLocal_178);
	func_539(&iLocal_177);
	set_model_as_no_longer_needed(joaat("ig_nigel"));
	set_model_as_no_longer_needed(joaat("ig_mrs_thornhill"));
	iLocal_568 = 0;
	func_539(&iLocal_175);
	func_399(&Local_96, 1);
	func_407(&Local_165);
	STREAMING::REQUEST_MODEL(Local_165.f_1);
	while (!ENTITY::DOES_ENTITY_EXIST(Local_165))
	{
		func_403(vLocal_295, 0f, 0);
		wait(0);
	}
	if (func_228(Local_165))
	{
		add_vehicle_upsidedown_check(Local_165);
		set_vehicle_engine_on(Local_165, true, 1, 0);
	}
	while (!ENTITY::DOES_ENTITY_EXIST(iLocal_175))
	{
		func_389();
		wait(0);
	}
	iLocal_623 = 0;
	iLocal_349 = 2;
	iLocal_160 = 6;
	iLocal_527 = 1;
	iLocal_618 = false;
	iLocal_624 = false;
	iLocal_626 = 0;
	iLocal_627 = false;
	iLocal_696 = 0;
	iLocal_157 = 6;
	iLocal_158 = 0;
	if (iParam0)
	{
		while (!has_additional_text_loaded(false))
		{
			wait(0);
		}
		func_513(Local_165, -1, 0);
	}
	else
	{
		if (func_228(PLAYER::PLAYER_PED_ID()) && func_228(Local_165))
		{
			func_519(PLAYER::PLAYER_PED_ID(), Local_165, -1);
		}
		func_511(vLocal_295, 1112014848, 12, 5000, 0, 0);
	}
	if (func_228(Local_165))
	{
		set_vehicle_forward_speed(Local_165, 10f);
	}
	func_444(1, 1, 1);
}

void func_519(int iParam0, int iParam1, int iParam2)
{
	if (func_450(iParam0))
	{
		if (func_228(iParam1))
		{
			if (is_entity_attached(iParam0))
			{
				freeze_entity_position(get_entity_attached_to(iParam0), false);
			}
			else
			{
				freeze_entity_position(iParam0, false);
			}
			set_ped_into_vehicle(iParam0, iParam1, iParam2);
		}
	}
}

void func_520(int iParam0)
{
	func_516(1, 1);
	if (iParam0)
	{
		func_515(-43.6338f, -1289.323f, 28.0753f, 87.6522f, 1, 0);
	}
	else if (func_228(PLAYER::PLAYER_PED_ID()))
	{
		set_entity_coords(PLAYER::PLAYER_PED_ID(), -43.6338f, -1289.323f, 28.0753f, 1, false, 0, 1);
		set_entity_heading(PLAYER::PLAYER_PED_ID(), 87.6522f);
	}
	STREAMING::REQUEST_MODEL(Local_165.f_1);
	func_460();
	iLocal_157 = 3;
	iLocal_158 = 0;
	iLocal_160 = 0;
	iLocal_161 = 0;
	iLocal_162 = 0;
	if (is_audio_scene_active("NIGEL_03_MIX_SETTINGS"))
	{
		stop_audio_scene("NIGEL_03_MIX_SETTINGS");
	}
	if (!is_audio_scene_active("NIGEL_03_JOURNEY_MIX"))
	{
		start_audio_scene("NIGEL_03_JOURNEY_MIX");
	}
	if (iLocal_193)
	{
		remove_relationship_group(iLocal_192);
	}
	func_401(&Local_96, 1);
	if (!func_228(iLocal_176))
	{
		while (!func_522(&iLocal_176, 64, -44.76f, -1289.19f, 29.22f, -109.3f, "RC_NIGEL", 1))
		{
			wait(0);
		}
	}
	set_entity_coords_no_offset(iLocal_176, -44.76f, -1289.19f, 29.22f, 0, 0, 1);
	set_entity_heading(iLocal_176, -109.3f);
	if (!func_228(iLocal_177))
	{
		while (!func_522(&iLocal_177, 63, -45.11f, -1289.77f, 29.24f, -96.8f, "RC_MRS_THORNHILL", 1))
		{
			wait(0);
		}
	}
	set_entity_coords_no_offset(iLocal_177, -45.11f, -1289.77f, 29.24f, 0, 0, 1);
	set_entity_heading(iLocal_177, -96.8f);
	iLocal_190 = 0;
	while (!func_521())
	{
		wait(0);
	}
	if (func_228(iLocal_176) && func_228(iLocal_177))
	{
		func_394();
		func_395();
	}
	func_399(&Local_96, 1);
	func_539(&iLocal_175);
	func_407(&Local_165);
	while (!STREAMING::HAS_MODEL_LOADED(Local_165.f_1))
	{
		wait(0);
	}
	while (!ENTITY::DOES_ENTITY_EXIST(Local_165))
	{
		func_403(Local_165.f_2, Local_165.f_5, 0);
	}
	set_gameplay_cam_relative_pitch(0f, 1f);
	set_gameplay_cam_relative_heading(0f);
	if (func_228(Local_165))
	{
		add_vehicle_upsidedown_check(Local_165);
	}
	iLocal_314 = true;
	iLocal_348 = 0;
	iLocal_349 = 0;
	iLocal_527 = 0;
	iLocal_528 = 0;
	iLocal_529 = false;
	iLocal_530 = false;
	iLocal_532 = 0;
	iLocal_280 = 0;
	iLocal_534 = false;
	iLocal_565 = 0;
	iLocal_566 = 0;
	iLocal_567 = 0;
	iLocal_568 = 1;
	iLocal_618 = false;
	iLocal_624 = false;
	iLocal_626 = 0;
	iLocal_627 = false;
	iLocal_696 = 0;
	wait(0);
	if (iParam0)
	{
		while (!has_additional_text_loaded(false))
		{
			wait(0);
		}
		func_513(0, -1, 1);
	}
	func_444(1, 1, 1);
}

bool func_521()
{
	if (!has_anim_dict_loaded(sLocal_179))
	{
		return false;
	}
	return true;
}

bool func_522(int iParam0, int iParam1, Vector3 vParam2, Vector3 fParam3, char* sParam4, int iParam5)
{
	if (func_523(iParam0, iParam1, vParam2, fParam5, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (!is_entity_dead(*iParam0, 0))
			{
				set_blocking_of_non_temporary_events(*iParam0, true);
				set_ped_money(*iParam0, false);
				if (iParam7 == 1)
				{
					set_ped_can_be_targetted(*iParam0, false);
				}
			}
			set_ped_name_debug(*iParam0, sParam6);
		}
		return true;
	}
	return false;
}

bool func_523(int iParam0, int iParam1, Vector3 vParam2, Vector3 fParam3, int iParam4)
{
	int iVar0;
	
	if (!func_150(iParam1))
	{
		iVar0 = func_563(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				delete_ped(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, vParam2, fParam5, 0, false);
			set_ped_default_component_variation(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (get_ped_drawable_variation(*iParam0, 3) == 0)
				{
					set_ped_component_variation(*iParam0, 5, 2, false, 0);
				}
			}
			func_524(*iParam0, iParam1);
			if (iParam6)
			{
				set_model_as_no_longer_needed(iVar0);
			}
			return true;
		}
	}
	return false;
}

bool func_524(auto uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return false;
	}
	Global_87445[iVar0 - 3] = uParam0;
	return true;
}

int func_525()
{
	if (!Global_91278 == 10 && !Global_91278 == 9)
	{
		return 0;
	}
	return Global_91278.f_2;
}

bool func_526()
{
	if (Global_91278 == 10 || Global_91278 == 9)
	{
		return true;
	}
	return false;
}

void func_527()
{
	func_537(&Local_165, func_538(), -39.9698f, -1285.97f, 28.8324f, -178.98f);
	func_537(&Local_557, joaat("freight"), 2574.291f, 2173.551f, 31.4003f, 210.2f);
	Local_557.f_7 = joaat("s_m_m_lsmetro_01");
	STREAMING::REQUEST_MODEL(joaat("ig_nigel"));
	STREAMING::REQUEST_MODEL(joaat("ig_mrs_thornhill"));
	STREAMING::REQUEST_MODEL(Local_165.f_1);
	STREAMING::REQUEST_MODEL(joaat("u_m_m_aldinapoli"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_handbag_s"));
	set_ped_model_is_suppressed(joaat("ig_nigel"), true);
	set_ped_model_is_suppressed(joaat("ig_mrs_thornhill"), true);
	set_ped_model_is_suppressed(joaat("u_m_m_aldinapoli"), true);
	request_additional_text("NIGEL3", false);
	func_535(64, 2, 0);
	GAMEPLAY::CLEAR_BIT(&(Global_101154.f_17264.f_382), 5);
	if (func_228(PLAYER::PLAYER_PED_ID()))
	{
		func_221(&uLocal_350, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	func_534();
	func_533();
	iLocal_349 = 0;
	SCRIPT::REQUEST_SCRIPT_audio_bank("CAR_TRUNK_THUMPS", false);
	iLocal_516 = get_sound_id();
	iLocal_647 = get_sound_id();
	iLocal_648 = get_sound_id();
	Local_202[0 /*7*/][0 /*3*/] = {-92f, -1271f, 25f};
	Local_202[0 /*7*/][1 /*3*/] = {-27f, -1247f, 30f};
	Local_202[1 /*7*/][0 /*3*/] = {2649.08f, 1643.26f, 20f};
	Local_202[1 /*7*/][1 /*3*/] = {2688.73f, 1675.07f, 30f};
	Local_202[2 /*7*/][0 /*3*/] = {2649.08f, 1608.6f, 20f};
	Local_202[2 /*7*/][1 /*3*/] = {2692.73f, 1640.4f, 30f};
	Local_298[0 /*3*/] = {2611.25f, 1800.09f, 25.4f};
	Local_298[1 /*3*/] = {2611.25f, 1950.31f, 29.68f};
	Local_298.f_7 = 3f;
	Local_306[0 /*3*/] = {2611f, 1630f, 24.61f};
	Local_306[1 /*3*/] = {2611.28f, 1856.65f, 30.73f};
	Local_306.f_7 = 1.75f;
	Local_663[0 /*8*/][0 /*3*/] = {2611f, 1601.95f, 31.48f};
	Local_663[0 /*8*/][1 /*3*/] = {2611f, 2050f, 24.36f};
	Local_663[0 /*8*/].f_7 = 6.5f;
	Local_663[1 /*8*/][0 /*3*/] = {2611f, 1786.85f, 34.44f};
	Local_663[1 /*8*/][1 /*3*/] = {2611f, 2050f, 22.22f};
	Local_663[1 /*8*/].f_7 = 30f;
	Local_663[2 /*8*/][0 /*3*/] = {2625.47f, 1707.78f, 29.52f};
	Local_663[2 /*8*/][1 /*3*/] = {2611.65f, 1749.99f, 23.39f};
	Local_663[2 /*8*/].f_7 = 8f;
	Local_663[3 /*8*/][0 /*3*/] = {2617.39f, 1709.61f, 29.56f};
	Local_663[3 /*8*/][1 /*3*/] = {2611.65f, 1749.99f, 23.39f};
	Local_663[3 /*8*/].f_7 = 8f;
	vLocal_232[0 /*3*/] = {0f, -3.45f, 1.15f};
	vLocal_232[1 /*3*/] = {0f, -3.45f, 0.15f};
	vLocal_245[0 /*3*/] = {2f, 2f, 1.3f};
	vLocal_245[1 /*3*/] = {1.6f, 2f, 0.7f};
	vLocal_232[2 /*3*/] = {0f, -5.45f, 1.15f};
	vLocal_232[3 /*3*/] = {0f, -5.45f, 0.15f};
	vLocal_245[2 /*3*/] = {1.5f, 6f, 1.3f};
	vLocal_245[3 /*3*/] = {1.2f, 6f, 0.7f};
	iLocal_191 = 0;
	func_529(1);
	func_528(1);
	sLocal_698 = "DEFAULT";
	iLocal_623 = 0;
}

void func_528(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iParam0)
		{
			iLocal_198[iVar0] = add_scenario_blocking_area(Local_202[iVar0 /*7*/][0 /*3*/], Local_202[iVar0 /*7*/][1 /*3*/], 0, 1, 1, 1);
		}
		else
		{
			remove_scenario_blocking_area(iLocal_198[iVar0], 0);
		}
		iVar0++;
	}
}

void func_529(int iParam0)
{
	func_530(39, iParam0);
	func_530(40, iParam0);
	func_530(41, iParam0);
	func_530(42, iParam0);
	func_530(43, iParam0);
	func_530(44, iParam0);
}

void func_530(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!func_342(iParam0, 2, 1))
		{
			func_532(iParam0, 2, 1);
		}
	}
	else if (func_342(iParam0, 2, 1))
	{
		func_531(iParam0, 2, 1);
	}
}

void func_531(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_8() == 0)
		{
			iVar0 = func_69(func_343(iParam0), -1, 0);
			GAMEPLAY::CLEAR_BIT(&iVar0, iParam1);
			func_67(func_343(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_532(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_8() == 0)
		{
			iVar0 = func_69(func_343(iParam0), -1, 0);
			GAMEPLAY::GAMEPLAY::SET_BIT(&iVar0, iParam1);
			func_67(func_343(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_533()
{
	Local_315[0 /*8*/] = "NIGE3AU";
	Local_315[0 /*8*/].f_1 = "NIGEL3_C1";
	Local_315[0 /*8*/].f_2 = 200f;
	Local_315[0 /*8*/].f_7 = 3000;
	Local_315[1 /*8*/] = "NIGE3AU";
	Local_315[1 /*8*/].f_1 = "NIGEL3_C2";
	Local_315[1 /*8*/].f_2 = 1000f;
	Local_315[1 /*8*/].f_7 = 5000;
	Local_315[2 /*8*/] = "NIGE3AU";
	Local_315[2 /*8*/].f_1 = "NIGEL3_C3";
	Local_315[2 /*8*/].f_2 = 1800f;
	Local_315[2 /*8*/].f_7 = 10000;
	Local_315[3 /*8*/] = "NIGE3AU";
	Local_315[3 /*8*/].f_1 = "NIGEL3_C4";
	Local_315[3 /*8*/].f_2 = 2250f;
	Local_315[3 /*8*/].f_7 = 10000;
	Local_315[0 /*8*/].f_3 = {165.8198f, -1241.902f, 37.1128f};
	Local_315[0 /*8*/].f_6 = 287.4437f;
	Local_315[1 /*8*/].f_3 = {997.1073f, -1193.715f, 53.655f};
	Local_315[1 /*8*/].f_6 = 273.9958f;
	Local_315[2 /*8*/].f_3 = {1880.136f, -780.5549f, 80.6259f};
	Local_315[2 /*8*/].f_6 = 304.6608f;
	Local_315[3 /*8*/].f_3 = {2483.936f, 946.1223f, 85.4867f};
	Local_315[3 /*8*/].f_6 = 38.84f;
}

void func_534()
{
	Local_569[0 /*8*/] = "NIGE3AU";
	Local_569[0 /*8*/].f_1 = "NIGEL3_N1";
	Local_569[1 /*8*/] = "NIGE3AU";
	Local_569[1 /*8*/].f_1 = "NIGEL3_N2";
	Local_569[2 /*8*/] = "NIGE3AU";
	Local_569[2 /*8*/].f_1 = "NIGEL3_N3";
	sLocal_596[0] = "NIGEL3_DAWD_1";
	sLocal_596[1] = "NIGEL3_DAWD_3";
	sLocal_596[2] = "NIGEL3_DAWD_5";
	sLocal_596[3] = "NIGEL3_DAWD_7";
	sLocal_596[4] = "NIGEL3_DAWD_9";
	sLocal_596[5] = "NIGEL3_DAWD_11";
}

void func_535(int iParam0, int iParam1, int iParam2)
{
	Global_2969 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 138)
	{
		func_215();
		if (iParam1 == 4)
		{
			Global_101154.f_32575[iParam0 /*29*/].f_12[0] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_12[1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_12[2] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[0] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101154.f_32575[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101154.f_32575[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				iParam2 = false;
			}
			Global_101154.f_32575[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101154.f_32575[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (iParam2)
		{
			if (!Global_69489)
			{
				if (iParam1 != 4)
				{
					if (Global_14413 != iParam1)
					{
						Global_2942[iParam1 /*4*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
						Global_2959[iParam1] = 1;
						Global_2964[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14413)
					{
					}
					else
					{
						Global_2893[1 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
						Global_2893[1 /*6*/].f_5 = iParam1;
						func_536();
					}
				}
				else
				{
					Global_2893[1 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
					Global_2893[1 /*6*/].f_5 = iParam1;
					func_536();
				}
			}
			else
			{
				Global_2893[1 /*6*/] = {Global_101154.f_32575[iParam0 /*29*/].f_3};
				Global_2893[1 /*6*/].f_5 = iParam1;
				func_536();
			}
		}
	}
}

void func_536()
{
	char[64] cVar0;
	char[64] cVar16;
	char* sVar32;
	
	StringCopy(&cVar0, _get_label_text(&(Global_101154.f_32575[Global_2969 /*29*/].f_7)), 64);
	if (Global_2988 == 0)
	{
		_set_notification_text_entry("");
		StringCopy(&cVar16, _get_label_text(&(Global_2893[1 /*6*/])), 64);
		sVar32 = _get_label_text("CELL_253");
		_set_notification_message(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		_set_notification_text_entry("CELL_255");
		_add_text_component_item_string(&(Global_2893[1 /*6*/]));
		_set_notification_message(&cVar0, &cVar0, 0, 3, "", 0);
	}
	GAMEPLAY::CLEAR_BIT(&Global_2283, false);
}

void func_537(int iParam0, int iParam1, Vector3 vParam2, float fParam3)
{
	*iParam0.f_1 = iParam1;
	*iParam0.f_2 = {vParam2};
	*iParam0.f_5 = fParam5;
}

int func_538()
{
	return iLocal_83;
}

void func_539(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!is_entity_dead(*iParam0, 0))
		{
			set_entity_load_collision_flag(*iParam0, false);
		}
		if (!is_entity_a_mission_entity(*iParam0))
		{
			set_entity_as_mission_entity(*iParam0, true, 0);
		}
		delete_ped(iParam0);
	}
}

void func_540(auto uParam0, auto uParam1)
{
	*uParam0 = *uParam1;
	*uParam1 = 0;
}

void func_541()
{
	func_443();
	if (func_542())
	{
	}
	func_396(&Local_96, 1, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_165))
	{
		remove_vehicle_upsidedown_check(Local_165);
		set_vehicle_as_no_longer_needed(&Local_165);
	}
	if (func_208())
	{
		stop_scripted_conversation(true);
	}
	set_random_trains(1);
	func_528(0);
	func_241(&iLocal_294);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_175) && !iLocal_532)
	{
		func_539(&iLocal_175);
	}
	set_ped_model_is_suppressed(joaat("ig_nigel"), false);
	set_ped_model_is_suppressed(joaat("ig_mrs_thornhill"), false);
	set_ped_model_is_suppressed(joaat("u_m_m_aldinapoli"), false);
	if (iLocal_191)
	{
		remove_anim_dict("amb@world_human_stand_impatient@female@no_sign@idle_a");
		remove_anim_dict("amb@world_human_stand_impatient@male@no_sign@idle_a");
	}
	func_393(&iLocal_194, 0);
	_0xDC0F817884CDD856(3, true);
	if (iLocal_193)
	{
		remove_relationship_group(iLocal_192);
	}
	func_529(0);
	set_cinematic_button_active(true);
	_set_unk_map_flag(0);
	terminate_this_thread();
}

bool func_542()
{
	int iVar0;
	
	iVar0 = func_199();
	if (iVar0 == -1)
	{
		return false;
	}
	if (!Global_100241[iVar0 /*10*/].f_4)
	{
		return false;
	}
	Global_100241[iVar0 /*10*/].f_4 = 0;
	clear_additional_text(false, true);
	clear_additional_text(3, true);
	clear_additional_text(2, true);
	if (!func_5(0))
	{
		if (Global_100241[iVar0 /*10*/].f_5 && Global_100241[iVar0 /*10*/].f_6)
		{
			Global_100241[iVar0 /*10*/].f_6 = 0;
		}
		if (!Global_100241[iVar0 /*10*/].f_6 && !Global_100241[iVar0 /*10*/].f_5)
		{
			Global_100241[iVar0 /*10*/].f_6 = 1;
		}
	}
	return true;
}

void func_543(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = get_player_index();
	set_everyone_ignore_player(iVar0, 0);
	set_player_control(iVar0, iParam3, 0);
	func_233(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		display_radar(true);
		display_hud(true);
	}
	clear_help(1);
	if (iParam0 == 1)
	{
		set_widescreen_borders(false, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_36 != 0 && iLocal_36 != joaat("object")) && iLocal_36 != joaat("gadget_parachute"))
		{
			if (func_228(PLAYER::PLAYER_PED_ID()))
			{
				if (has_ped_got_weapon(PLAYER::PLAYER_PED_ID(), iLocal_36, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_36, false);
				}
			}
		}
	}
	if (func_450(PLAYER::PLAYER_PED_ID()))
	{
		set_ped_stealth_movement(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}

void func_544(int iParam0)
{
	int iVar0;
	
	func_559();
	if (!func_558())
	{
		iVar0 = func_199();
		if (iVar0 == -1)
		{
			return;
		}
		if (!Global_100241[iVar0 /*10*/].f_4)
		{
			return;
		}
		if (Global_100241[iVar0 /*10*/].f_5)
		{
			return;
		}
		if (Global_100241[iVar0 /*10*/].f_6)
		{
			return;
		}
		if (Global_85786 == Global_91315)
		{
			Global_101154.f_17264[iVar0 /*6*/].f_4++;
		}
		Global_85786 = Global_91315;
		if (iParam0)
		{
			func_158(iVar0, 1, 0);
			func_545(get_this_script_name(), iVar0);
		}
		else
		{
			if (Global_100241[iVar0 /*10*/].f_9 == -1)
			{
			}
			else
			{
				func_169(&(Global_100241[iVar0 /*10*/].f_9));
			}
			func_157(iVar0, 1, 1, 0);
		}
		Global_100241[iVar0 /*10*/].f_6 = 1;
	}
}

void func_545(char* sParam0, int iParam1)
{
	if (Global_91278 != 12)
	{
		if (func_546(sParam0, 6, iParam1))
		{
			Global_91278.f_1 = iParam1;
		}
	}
}

bool func_546(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<32> Var1;
	int iVar33;
	
	func_17();
	func_557();
	Global_91278 = 0;
	StringCopy(&(Global_91278.f_3), sParam0, 32);
	Global_91278.f_11 = iParam1;
	_disable_automatic_respawn(1);
	set_fade_out_after_arrest(0);
	set_fade_out_after_death(0);
	func_457(1);
	func_555(1);
	func_552(0);
	func_551(1);
	GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 9);
	GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 6);
	GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 20);
	GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 21);
	GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 5);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (is_ped_in_any_vehicle(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = get_vehicle_ped_is_in(PLAYER::PLAYER_PED_ID(), 0);
				if (is_entity_upsidedown(iVar0))
				{
					GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_91278.f_20), 5);
				}
			}
		}
	}
	clear_help(1);
	clear_prints();
	func_550(0);
	func_20(1);
	Global_91278.f_2 = Global_91315;
	if (func_549())
	{
		if (func_548())
		{
			if (Global_91315 >= func_547())
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_82399[iParam2 /*34*/].f_15, 16))
				{
					if (Global_101154.f_7775.f_330[iParam2 /*6*/].f_1 >= 2)
					{
						Global_85787 = 1;
					}
				}
			}
		}
		else if (Global_91278.f_11 == 6)
		{
			func_160(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_101154.f_17264[iParam2 /*6*/].f_4 >= 2)
				{
					Global_85787 = 1;
				}
			}
		}
		else
		{
			iVar33 = func_361(get_this_script_name());
			if (iVar33 > -1)
			{
				if (Global_101154.f_29511.f_4[iVar33] >= 2)
				{
					Global_85787 = 1;
				}
			}
		}
	}
	return true;
}

int func_547()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_364(&(Global_91278.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

bool func_548()
{
	if ((((Global_91278.f_11 == 0 || Global_91278.f_11 == 1) || Global_91278.f_11 == 2) || Global_91278.f_11 == 3) || Global_91278.f_11 == 4)
	{
		return true;
	}
	return false;
}

bool func_549()
{
	if ((((Global_91278.f_11 == 0 || Global_91278.f_11 == 1) || Global_91278.f_11 == 2) || Global_91278.f_11 == 6) || Global_91278.f_11 == 3)
	{
		return true;
	}
	if (Global_91278.f_11 == 5)
	{
		if (func_361(&(Global_91278.f_3)) > -1)
		{
			return true;
		}
	}
	return false;
}

void func_550(int iParam0)
{
	display_hud(iParam0);
	display_radar(iParam0);
}

void func_551(int iParam0)
{
	if (iParam0 == 1)
	{
		_0xFDB423997FA30340();
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_91278.f_20), 3);
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_91278.f_20, 3))
	{
		_0xE1CD1E48E025E661();
		GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 3);
	}
}

void func_552(int iParam0)
{
	if (iParam0 == 1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_91278.f_20, 4))
		{
			func_554();
			GAMEPLAY::CLEAR_BIT(&(Global_91278.f_20), 4);
		}
	}
	else
	{
		func_553();
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_91278.f_20), 4);
	}
}

void func_553()
{
	Global_17118.f_5 = 1;
}

void func_554()
{
	Global_17118.f_5 = 0;
}

void func_555(int iParam0)
{
	if (iParam0)
	{
		func_556();
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			GAMEPLAY::GAMEPLAY::SET_BIT(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_292(0))
		{
			func_457(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_556()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_557()
{
	Global_85787 = 0;
	Global_85788 = 0;
}

bool func_558()
{
	if (((Global_91278 == 13 || Global_91278 == 10) || Global_91278 == 11) || Global_91278 == 12)
	{
		return false;
	}
	return true;
}

void func_559()
{
	Global_91313 = 1;
	if (is_player_being_arrested(player_id(), 1))
	{
		if (is_string_null_or_empty(&Global_69721))
		{
			switch (func_216())
			{
				case 0:
					StringCopy(&Global_69721, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69721, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69721, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69725, "", 16);
		}
		Global_91313 = 0;
	}
	else if (!is_player_playing(player_id()))
	{
		if (is_string_null_or_empty(&Global_69721))
		{
			switch (func_216())
			{
				case 0:
					StringCopy(&Global_69721, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69721, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69721, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69725, "", 16);
		}
		Global_91313 = 0;
		GAMEPLAY::GAMEPLAY::SET_BIT(&(Global_91278.f_20), 25);
	}
}

void func_560(char* sParam0)
{
	if (!is_string_null_or_empty(sParam0))
	{
	}
}

void func_561(auto uParam0)
{
	func_562(uParam0.f_28);
	func_562(uParam0.f_35);
	func_562(uParam0.f_41);
}

void func_562(auto uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= *uParam0 - 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0[iVar0]))
		{
			set_entity_as_mission_entity(*uParam0[iVar0], false, 1);
		}
		iVar0++;
	}
}

int func_563(int iParam0)
{
	if (!func_150(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

