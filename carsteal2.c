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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = 0;
	float fLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0;
	float fLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	vector3 vLocal_31 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	struct<13>[] Local_37 = new struct<13>[6];
	int iLocal_116 = 0;
	float fLocal_117 = 0;
	int iLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	float fLocal_121 = 0;
	float fLocal_122 = 0;
	float fLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 2;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 2;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 20;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = -1;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 1065353216;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = -1;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 1065353216;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = -1;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 1065353216;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = -1;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 1065353216;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = -1;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 1065353216;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = -1;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 1065353216;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = -1;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 1065353216;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = -1;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 1065353216;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
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
	var uLocal_609 = -1;
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
	var uLocal_639 = 1065353216;
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
	var uLocal_666 = -1;
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
	var uLocal_696 = 1065353216;
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
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = -1;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
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
	var uLocal_740 = 0;
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
	var uLocal_753 = 1065353216;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
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
	var uLocal_780 = -1;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 1065353216;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = -1;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 1065353216;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = -1;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 1065353216;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = -1;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 1065353216;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = -1;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 1065353216;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = -1;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 1065353216;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = -1;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 1065353216;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = -1;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 1065353216;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = -1;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 1065353216;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 16;
	var uLocal_1291 = 0;
	var uLocal_1292 = -1082130432;
	var uLocal_1293 = 0;
	var uLocal_1294 = -1082130432;
	var uLocal_1295 = 0;
	var uLocal_1296 = -1082130432;
	var uLocal_1297 = 0;
	var uLocal_1298 = -1082130432;
	var uLocal_1299 = 0;
	var uLocal_1300 = -1082130432;
	var uLocal_1301 = 0;
	var uLocal_1302 = -1082130432;
	var uLocal_1303 = 0;
	var uLocal_1304 = -1082130432;
	var uLocal_1305 = 0;
	var uLocal_1306 = -1082130432;
	var uLocal_1307 = 0;
	var uLocal_1308 = -1082130432;
	var uLocal_1309 = 0;
	var uLocal_1310 = -1082130432;
	var uLocal_1311 = 0;
	var uLocal_1312 = -1082130432;
	var uLocal_1313 = 0;
	var uLocal_1314 = -1082130432;
	var uLocal_1315 = 0;
	var uLocal_1316 = -1082130432;
	var uLocal_1317 = 0;
	var uLocal_1318 = -1082130432;
	var uLocal_1319 = 0;
	var uLocal_1320 = -1082130432;
	var uLocal_1321 = 0;
	var uLocal_1322 = -1082130432;
	var uLocal_1323 = 16;
	var uLocal_1324 = 0;
	var uLocal_1325 = -1082130432;
	var uLocal_1326 = 0;
	var uLocal_1327 = -1082130432;
	var uLocal_1328 = 0;
	var uLocal_1329 = -1082130432;
	var uLocal_1330 = 0;
	var uLocal_1331 = -1082130432;
	var uLocal_1332 = 0;
	var uLocal_1333 = -1082130432;
	var uLocal_1334 = 0;
	var uLocal_1335 = -1082130432;
	var uLocal_1336 = 0;
	var uLocal_1337 = -1082130432;
	var uLocal_1338 = 0;
	var uLocal_1339 = -1082130432;
	var uLocal_1340 = 0;
	var uLocal_1341 = -1082130432;
	var uLocal_1342 = 0;
	var uLocal_1343 = -1082130432;
	var uLocal_1344 = 0;
	var uLocal_1345 = -1082130432;
	var uLocal_1346 = 0;
	var uLocal_1347 = -1082130432;
	var uLocal_1348 = 0;
	var uLocal_1349 = -1082130432;
	var uLocal_1350 = 0;
	var uLocal_1351 = -1082130432;
	var uLocal_1352 = 0;
	var uLocal_1353 = -1082130432;
	var uLocal_1354 = 0;
	var uLocal_1355 = -1082130432;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = -1082130432;
	var uLocal_1373 = -1082130432;
	var uLocal_1374 = 1;
	var uLocal_1375 = 1;
	var uLocal_1376 = 1;
	var uLocal_1377 = -1;
	var uLocal_1378 = -1;
	var uLocal_1379 = -1;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	int iLocal_1398 = 0;
	int iLocal_1399 = 0;
	int iLocal_1400 = 0;
	int iLocal_1401 = 0;
	int iLocal_1402 = 0;
	float fLocal_1403 = 0;
	Vector3 fLocal_1404 = 0;
	int iLocal_1405 = 0;
	float fLocal_1406 = 0;
	float fLocal_1407 = 0;
	int iLocal_1408 = 0;
	int iLocal_1409 = 0;
	int iLocal_1410 = 0;
	int iLocal_1411 = 0;
	int iLocal_1412 = 0;
	int iLocal_1413 = 0;
	float fLocal_1414 = 0;
	float fLocal_1415 = 0;
	float fLocal_1416 = 0;
	int iLocal_1417 = 0;
	char* sLocal_1418 = 0;
	int iLocal_1419 = 0;
	int iLocal_1420 = 0;
	int iLocal_1421 = 0;
	int iLocal_1422 = 0;
	int iLocal_1423 = 0;
	int iLocal_1424 = 0;
	int iLocal_1425 = 0;
	vector3[] vLocal_1426 = new vector3[10];
	int iLocal_1457 = 0;
	int iLocal_1458 = 0;
	vector3 vLocal_1459 = 0;
	Vector3 fLocal_1462 = 0;
	vector3 vLocal_1463 = 0;
	vector3 vLocal_1466 = 0;
	vector3 vLocal_1469 = 0;
	struct<14>[] Local_1472 = new struct<14>[18];
	struct<2>[] Local_1725 = new struct<2>[14];
	int iLocal_1754 = 0;
	int iLocal_1755 = 0;
	int iLocal_1756 = 0;
	int iLocal_1757 = 0;
	int iLocal_1758 = 0;
	int iLocal_1759 = 0;
	struct<10>[] Local_1760 = new struct<10>[16];
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	char* sLocal_1925 = 0;
	char* sLocal_1926 = 0;
	var uLocal_1927 = 0;
	int iLocal_1928 = 0;
	struct<12>[] Local_1929 = new struct<12>[5];
	int iLocal_1990 = 0;
	struct<6>[] Local_1991 = new struct<6>[20];
	int iLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 4;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 4;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 4;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 4;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 4;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 4;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 4;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	struct<21> Local_2158 = 8;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	int iLocal_2192 = 0;
	var uLocal_2193 = 0;
	struct<468> Local_2194 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = -1;
	var uLocal_2667 = -1;
	var uLocal_2668 = -1;
	var uLocal_2669 = -1;
	var uLocal_2670 = -1;
	var uLocal_2671 = -1;
	var uLocal_2672 = -1;
	var uLocal_2673 = -1;
	var uLocal_2674 = 0;
	struct<11>[] Local_2675 = new struct<11>[5];
	vector3 vLocal_2731 = 0;
	vector3 vLocal_2734 = 0;
	vector3 vLocal_2737 = 0;
	vector3 vLocal_2740 = 0;
	float fLocal_2743 = 0;
	int iLocal_2744 = 0;
	int iLocal_2745 = 0;
	int iLocal_2746 = 0;
	int iLocal_2747 = 0;
	int iLocal_2748 = 0;
	int[] iLocal_2749 = new int[16];
	int iLocal_2766 = 0;
	int iLocal_2767 = 0;
	int iLocal_2768 = 0;
	struct<81>[] Local_2769 = new struct<81>[4];
	int iLocal_3094 = 0;
	var uLocal_3095 = 8;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	int[] iLocal_3104 = new int[3];
	int iLocal_3108 = 0;
	int iLocal_3109 = 0;
	int iLocal_3110 = 0;
	int iLocal_3111 = 0;
	int iLocal_3112 = 0;
	int iLocal_3113 = 0;
	int iLocal_3114 = 0;
	int iLocal_3115 = 0;
	int iLocal_3116 = 0;
	int iLocal_3117 = 0;
	struct<5> Local_3118 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 21;
	var uLocal_3126 = 6;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	int iLocal_3130 = 0;
	int iLocal_3131 = 0;
	int iLocal_3132 = 0;
	int iLocal_3133 = 0;
	int iLocal_3134 = 0;
	int iLocal_3135 = 0;
	int iLocal_3136 = 0;
	int iLocal_3137 = 0;
	int iLocal_3138 = 0;
	var uLocal_3139 = 3;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 1092616192;
	var uLocal_3146 = 1101004800;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 3;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	int iLocal_3163 = 0;
	struct<9>[] Local_3164 = new struct<9>[17];
	float fLocal_3318 = 0;
	struct<8>[] Local_3319 = new struct<8>[72];
	int[] iLocal_3896 = new int[35];
	int iLocal_3932 = 0;
	float fLocal_3933 = 0;
	int iLocal_3934 = 0;
	int iLocal_3935 = 0;
	int iLocal_3936 = 0;
	int iLocal_3937 = 0;
	int iLocal_3938 = 0;
	int iLocal_3939 = 0;
	int iLocal_3940 = 0;
	int iLocal_3941 = 0;
	int iLocal_3942 = 0;
	int iLocal_3943 = 0;
	char[24] cLocal_3944 = 0;
	char[24] cLocal_3950 = 0;
	struct<6> Local_3956 = 0;
	struct<6> Local_3962 = 0;
	int iLocal_3968 = 0;
	int iLocal_3969 = 0;
	int iLocal_3970 = 0;
	int iLocal_3971 = 0;
	char* sLocal_3972 = 0;
	char* sLocal_3973 = 0;
	int iLocal_3974 = 0;
	int iLocal_3975 = 0;
	int iLocal_3976 = 0;
	char* sLocal_3977 = 0;
	var[] uLocal_3978 = new var[10];
	var uLocal_3989 = 10;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	int iLocal_4000 = 0;
	vector3[] vLocal_4001 = new vector3[4];
	char* sLocal_4014 = 0;
	float fLocal_4015 = 0;
	int iLocal_4016 = 0;
	int iLocal_4017 = 0;
	char* sLocal_4018 = 0;
	struct<4>[] Local_4019 = new struct<4>[6];
	struct<7>[] Local_4044 = new struct<7>[36];
	char[24] cLocal_4297 = 0;
	char[24] cLocal_4303 = 0;
	struct<5>[] Local_4309 = new struct<5>[25];
	struct<10>[] Local_4435 = new struct<10>[21];
	int iLocal_4646 = 0;
	struct<9>[] Local_4647 = new struct<9>[15];
	int iLocal_4783 = 0;
	struct<5>[] Local_4784 = new struct<5>[2];
	vector3[] vLocal_4795 = new vector3[7];
	float fLocal_4817 = 0;
	int iLocal_4818 = 0;
	int iLocal_4819 = 0;
	int iLocal_4820 = 0;
	int iLocal_4821 = 0;
	int iLocal_4822 = 0;
	var uLocal_4823 = 0;
	float fLocal_4824 = 0;
	float fLocal_4825 = 0;
	float fLocal_4826 = 0;
	int iLocal_4827 = 0;
	int iLocal_4828 = 0;
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
	fLocal_117 = 1f;
	iLocal_118 = 3;
	fLocal_121 = 80f;
	fLocal_122 = 140f;
	fLocal_123 = 180f;
	iLocal_129 = 1;
	iLocal_130 = 65;
	iLocal_131 = 49;
	iLocal_132 = 64;
	iLocal_136 = _0x4A9923385BDB9DAD();
	iLocal_137 = _get_blip_info_id_iterator();
	fLocal_1403 = 0f;
	fLocal_1404 = 145.4926f;
	fLocal_1406 = 0.37f;
	fLocal_1407 = 0.4f;
	fLocal_1414 = 0.278269f;
	fLocal_1415 = 0.345958f;
	fLocal_1416 = 0.95f;
	vLocal_1459 = {-993.41f, -3023.94f, 12.94f};
	fLocal_1462 = -20.61f;
	vLocal_1463 = {-990.14f, -3016.53f, 12.94f};
	vLocal_1466 = {-967.8815f, -2796.752f, 12.9648f};
	vLocal_1469 = {0f, 0f, 0f};
	iLocal_1928 = -1;
	iLocal_2768 = -1;
	iLocal_3938 = -1;
	iLocal_3939 = -1;
	func_915(1);
	iLocal_1759 = 1;
	set_mission_flag(1);
	if (has_force_cleanup_occurred(3))
	{
		func_913();
		func_911(2);
	}
	func_905();
	func_915(1);
	set_scenario_group_enabled("MP_POLICE", false);
	set_roads_in_angled_area(1413.366f, -2037.311f, 49.11167f, 1345.929f, -2093.547f, 57.62325f, 96.5f, 0, false, 1);
	add_scenario_blocking_area(Vector(56.18571f, -2064.169f, 1382.831f) - Vector(5.75f, 44.75f, 41.25f), Vector(56.18571f, -2064.169f, 1382.831f) + Vector(5.75f, 44.75f, 41.25f), 0, 1, 1, 1);
	set_all_vehicle_generators_active_in_area(1382.831f, -2064.169f, 56.18571f, 41.25f, 44.75f, 5.75f, false, 1);
	set_ped_non_creation_area(Vector(56.18571f, -2064.169f, 1382.831f) - Vector(5.75f, 44.75f, 41.25f), Vector(56.18571f, -2064.169f, 1382.831f) + Vector(5.75f, 44.75f, 41.25f));
	set_ped_paths_in_area(Vector(56.18571f, -2064.169f, 1382.831f) - Vector(5.75f, 44.75f, 41.25f), Vector(56.18571f, -2064.169f, 1382.831f) + Vector(5.75f, 44.75f, 41.25f), false, 0);
	set_vehicle_model_is_suppressed(joaat("blimp"), true);
	_set_weather_type_over_time("EXTRASUNNY", 50f);
	func_894(get_players_last_vehicle(), 0f, 0f, 0f, 0f, 24, 0);
	func_893();
	if (func_892())
	{
		iVar0 = func_891();
		if (Global_85788 == 1)
		{
			if (!iLocal_2747)
			{
				if (iVar0 == 0)
				{
					iVar0 = 2;
				}
				else
				{
					iVar0++;
				}
			}
			else
			{
				iVar0++;
			}
		}
		if (!is_ped_injured(player_ped_id()))
		{
			clear_area(get_entity_coords(player_ped_id(), 1), 100f, 1, 0, 0, false);
		}
		switch (iVar0)
		{
			case 0:
				if (iLocal_2747)
				{
					func_873(1, 1, 0, 1);
				}
				else
				{
					func_873(1, 2, 0, 1);
				}
				break;
			
			case 1:
				func_873(1, 1, 1, 1);
				break;
			
			case 2:
				set_entity_invincible(player_ped_id(), true);
				iLocal_1401 = 1;
				func_873(1, 5, 1, 1);
				clear_prints();
				func_872(6, 14, 0);
				func_836(6, 0);
				func_835(6);
				while (!does_entity_exist(Local_1472[3 /*14*/]))
				{
					func_836(53, 0);
					func_823(&Local_2194, 0);
					wait(0);
				}
				func_822(&Local_2194, Local_1472[3 /*14*/], 1, 2, 1, 1, 1, 1, 0);
				func_821(&Local_2194, Local_1472[3 /*14*/], "CH_CHAD", 8);
				func_835(62);
				do_screen_fade_in(0);
				break;
			
			case 3:
				func_873(1, 6, 0, 1);
				while (!func_820())
				{
					func_823(&Local_2194, 0);
					func_819(0);
				}
				break;
			
			case 4:
				func_873(1, 9, 0, 1);
				break;
			
			case 5:
				func_873(1, 10, 0, 1);
				break;
			
			case 6:
				if (Global_85788 == 1)
				{
					func_873(1, 12, 0, 1);
				}
				else
				{
					func_873(1, 13, 0, 1);
				}
				break;
			
			case 7:
				func_873(1, 14, 0, 1);
				break;
		}
	}
	else if (func_818(0))
	{
		if (iLocal_2747)
		{
			func_873(1, 1, 0, 0);
		}
		else
		{
			func_873(1, 2, 0, 0);
		}
		do_screen_fade_in(1000);
	}
	uLocal_2193 = uLocal_2193;
	request_additional_text("CHHEIST", false);
	while (!has_additional_text_loaded(false))
	{
		wait(0);
	}
	func_872(90, 14, 1);
	func_872(65, 7, 1);
	func_872(69, 14, 1);
	func_872(70, 14, 1);
	while (true)
	{
		if (is_vehicle_driveable(Local_1725[0 /*2*/], 0))
		{
			set_vehicle_searchlight(Local_1725[0 /*2*/], 0, 0);
		}
		if ((!func_817(&Local_2194) && iLocal_1420 != 7) && iLocal_1420 != 8)
		{
			if (func_816())
			{
				iLocal_1411 = 1;
			}
			else
			{
				iLocal_1411 = 0;
			}
		}
		func_815();
		func_820();
		func_138();
		func_836(91, 0);
		func_137();
		func_134();
		func_57();
		func_52();
		func_51();
		func_25();
		func_24();
		func_21();
		_0x208784099002BC30("m_EyeInTheSky", 0);
		func_19();
		if (iLocal_3976)
		{
			func_1(sLocal_3977);
		}
		wait(0);
	}
	iLocal_1425 = iLocal_1425;
}

void func_1(char* sParam0)
{
	if (is_string_null(sParam0))
	{
		sParam0 = "CHFAILED";
	}
	clear_prints();
	clear_help(1);
	while (!trigger_music_event("CAR2_MISSION_FAIL"))
	{
		func_819(0);
	}
	func_3(sParam0);
	while (!func_2())
	{
		wait(0);
	}
	func_911(1);
}

bool func_2()
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

void func_3(char* sParam0)
{
	func_18(sParam0);
	func_4(0);
}

void func_4(int iParam0)
{
	int iVar0;
	
	if (Global_101154.f_7775 || func_818(0))
	{
		iVar0 = func_17();
		if (!func_5(iVar0))
		{
			return;
		}
		set_bit(&(Global_82363[iVar0 /*5*/].f_1), 5);
		Global_91314 = iParam0;
	}
}

bool func_5(int iParam0)
{
	var uVar0;
	int iVar1;
	
	func_10();
	if (is_player_playing(player_id()))
	{
		start_firing_amnesty(5000);
	}
	uVar0 = Global_82363[iParam0 /*5*/];
	iVar1 = Global_69758.f_109[uVar0 /*4*/];
	func_9(iVar1, 1);
	_0xC9A763D8FE87436A(player_id());
	special_ability_deactivate(player_id());
	func_6(&(Global_101154.f_1826.f_539), iVar1);
	if (Global_85786 == Global_91315)
	{
		Global_101154.f_7775.f_330[iVar1 /*6*/].f_1++;
	}
	if (!is_bit_set(Global_82399[iVar1 /*34*/].f_15, true))
	{
		if (!is_player_playing(player_id()))
		{
			set_fade_in_after_death_arrest(0);
		}
	}
	Global_101154.f_7775.f_330[iVar1 /*6*/].f_2++;
	Global_85786 = Global_91315;
	if (iParam0 == -1)
	{
		if (Global_101154.f_7775)
		{
		}
		return false;
	}
	if (is_bit_set(Global_82363[iParam0 /*5*/].f_1, 4))
	{
		return false;
	}
	if (is_bit_set(Global_82363[iParam0 /*5*/].f_1, 5))
	{
		return false;
	}
	return true;
}

void func_6(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_101154.f_17223[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !is_bit_set(Global_101154.f_7775.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = {0f, 0f, 0f};
			fVar5 = 0f;
			if (!func_8(Global_101154.f_17223[iVar0], &vVar2, &fVar5))
			{
				Global_101154.f_17223[iVar0] = 318;
				func_7(uParam0.f_1524[iVar0]);
				*(uParam0.f_1528[iVar0 /*3*/]) = {0f, 0f, 0f};
				*uParam0.f_1538[iVar0] = 0f;
				*uParam0.f_1542[iVar0] = 0;
				*(uParam0.f_1546[iVar0 /*3*/]) = {0f, 0f, 0f};
				*uParam0.f_1556[iVar0] = 0;
				Global_89001[iVar0 /*29*/] = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_9 = 0f;
				Global_89001[iVar0 /*29*/].f_12 = 0f;
				Global_89001[iVar0 /*29*/].f_3 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_10 = 0f;
				Global_89001[iVar0 /*29*/].f_13 = 0f;
				Global_89001[iVar0 /*29*/].f_6 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_11 = 0f;
				Global_89001[iVar0 /*29*/].f_14 = 0f;
				Global_89001[iVar0 /*29*/].f_17 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_26 = 0f;
				Global_89001[iVar0 /*29*/].f_20 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_27 = 0f;
				Global_89001[iVar0 /*29*/].f_23 = {0f, 0f, 0f};
				Global_89001[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_7(var uParam0)
{
	*uParam0 = -15;
}

int func_8(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = {115.1569f, -1286.684f, 28.2613f};
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = {-90.0089f, -1324.195f, 28.3203f};
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_8(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_8(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = {-807.2979f, -48.4004f, 36.8173f};
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = {1432.34f, -1887.383f, 70.5768f};
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = {1666.204f, 1967.25f, 143.3213f};
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = {-1440.22f, -127.02f, 50f};
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = {135.055f, -1759.64f, 27.8957f};
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = {687.6992f, -1744.03f, 28.3624f};
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = {56.5117f, -744.6122f, 43.1356f};
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = {506.485f, -1884.967f, 24.764f};
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = {1555.958f, 953.6136f, 77.2063f};
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = {220.72f, -64.4177f, 68.2922f};
			*fParam2 = 250.4535f - 360f;
			return 1;
			break;
		
		case 74:
			*uParam1 = {2048.07f, 3840.84f, 34.2238f};
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = {-464.22f, -1592.98f, 38.73f};
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = {744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f};
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = {-9f, 508.1f, 173.6278f};
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = {72.2278f, -1464.68f, 28.2915f};
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = {763f, -906f, 24.2312f};
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = {257.9167f, -1120.786f, 28.3684f};
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = {422.5858f, -978.6332f, 69.7073f};
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = {294.8521f, 882.9366f, 197.8527f};
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = {-1771.802f, 794.4316f, 138.4211f};
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = {1495.595f, -1848.821f, 70.2075f};
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = {2897.554f, 4032.241f, 50.1419f};
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = {1973.355f, 3818.204f, 32.005f};
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = {1973.355f, 3818.204f, 32.005f};
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = {1397f, 3725.8f, 33.0673f};
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = {Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f)};
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = {709.0244f, -2916.479f, 5.0589f};
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = {643.5248f, -2917.325f, 5.1337f};
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = {595.2742f, -2819.183f, 5.0559f};
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = {314.4171f, 965.207f, 208.4024f};
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = {3321.537f, 4975.455f, 25.9097f};
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = {-111.1318f, 6316.479f, 30.4904f};
			*fParam2 = 42f + 180f;
			return 1;
			break;
		
		case 50:
			*uParam1 = {-731.3261f, 106.68f, 54.7169f};
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = {-1257.5f, -526.9999f, 30.2361f};
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = {736.9869f, -2050.678f, 28.2718f};
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = {262.5499f, -2540.15f, 4.8433f};
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = {-315.7789f, 6201.355f, 30.4322f};
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = {118.0988f, -1264.916f, 32.3637f};
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = {37.5988f, -1351.52f, 28.2954f};
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = {-558.2693f, 261.1167f, 82.07f};
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = {-196.9999f, 507.9999f, 132.477f};
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = {1312.01f, -1645.87f, 51.2f};
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = {-818.7374f, 6.4824f, 41.2432f};
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = {2091.258f, 4714.852f, 40.1936f};
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = {1762.59f, 3247.212f, 40.735f};
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = {1764.013f, 3252.902f, 40.735f};
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = {0f, 0f, 0f};
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_9(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85596[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85596[iParam0 /*2*/] = 0;
	}
}

void func_10()
{
	Global_91313 = 1;
	if (is_player_being_arrested(player_id(), 1))
	{
		if (is_string_null_or_empty(&Global_69721))
		{
			switch (func_11())
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
			switch (func_11())
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
		set_bit(&(Global_91278.f_20), 25);
	}
}

var func_11()
{
	func_12();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_12()
{
	int iVar0;
	
	if (does_entity_exist(player_ped_id()))
	{
		if (func_16(Global_101154.f_1826.f_539.f_3549) != get_entity_model(player_ped_id()))
		{
			iVar0 = func_15(player_ped_id());
			if (func_14(iVar0) && (!func_13(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_14(Global_101154.f_1826.f_539.f_3549))
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

int func_13(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_14(int iParam0)
{
	return iParam0 < 3;
}

int func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (does_entity_exist(iParam0))
	{
		iVar1 = get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)
{
	if (func_14(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_17()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (is_bit_set(Global_82363[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_18(char* sParam0)
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

void func_19()
{
	switch (iLocal_3969)
	{
		case 0:
			break;
		
		case 1:
			if (does_object_of_type_exist_at_coords(201.4003f, -153.3645f, 57.84888f, 1f, joaat("prop_gar_door_05"), 0))
			{
				iLocal_3109 = get_closest_object_of_type(201.4003f, -153.3645f, 57.84888f, 1f, joaat("prop_gar_door_05"), 1, 0, 1);
				set_entity_coords(iLocal_3109, 201.4003f, -153.3645f, 47.84888f, 1, false, 0, 1);
				iLocal_3108 = create_object_no_offset(joaat("prop_gar_door_05"), 201.4003f, -153.3645f, 57.84888f, 1, 1, 0);
				set_entity_rotation(iLocal_3108, -1.441772f, 0f, -20.00017f, 2, 1);
				set_entity_lod_dist(iLocal_3108, 400);
				iLocal_3969 = 2;
			}
			break;
		
		case 2:
			if (func_20(joaat("prop_gar_door_05"), 201.4f, -153.4f, 57.8f, 1, -2f))
			{
				iLocal_3969 = 0;
			}
			break;
		
		case 3:
			func_20(joaat("prop_gar_door_05"), 201.4f, -153.4f, 57.8f, 0, 1f);
			iLocal_3969 = 0;
			break;
		
		case 4:
			if (does_entity_exist(iLocal_3109))
			{
				if (does_entity_exist(iLocal_3108))
				{
					delete_object(&iLocal_3108);
					set_model_as_no_longer_needed(joaat("prop_gar_door_05"));
				}
				if (does_object_of_type_exist_at_coords(201.4003f, -153.3645f, 57.84888f, 1f, joaat("prop_gar_door_05"), 0))
				{
					func_20(joaat("prop_gar_door_05"), 201.4f, -153.4f, 47.8f, 0, 1f);
					set_entity_coords(iLocal_3109, 201.4003f, -153.3645f, 57.84888f, 1, false, 0, 1);
				}
				iLocal_3969 = 0;
			}
			break;
		
		case 5:
			if (does_entity_exist(iLocal_3108))
			{
				delete_object(&iLocal_3108);
			}
			if (does_entity_exist(iLocal_3109))
			{
				set_entity_coords(iLocal_3109, 201.4003f, -153.3645f, 57.84888f, 1, false, 0, 1);
			}
			iLocal_3969 = 0;
			break;
	}
}

bool func_20(int iParam0, vector3 vParam1, int iParam2, float fParam3)
{
	var uVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	if (does_object_of_type_exist_at_coords(vParam1, 5f, iParam0, 0))
	{
		if (fParam5 != -2f)
		{
			set_state_of_closest_door_of_type(iParam0, vParam1, iParam4, fParam5, 0);
			get_state_of_closest_door_of_type(iParam0, vParam1, &iVar3, &fVar2);
			if (iVar3 == iParam4 && fVar2 == fParam5)
			{
				return true;
			}
		}
		else
		{
			get_state_of_closest_door_of_type(iParam0, vParam1, &uVar0, &fVar1);
			set_state_of_closest_door_of_type(iParam0, vParam1, iParam4, fVar1, 0);
			return true;
		}
	}
	return false;
}

void func_21()
{
	int iVar0;
	float fVar1;
	
	if (!is_ped_injured(Local_1472[3 /*14*/]))
	{
		if (!is_entity_dead(Local_1472[3 /*14*/], 0) && !is_entity_dead(Local_2194.f_9, 0))
		{
			if (is_entity_on_screen(Local_1472[3 /*14*/]))
			{
				fVar1 = tan(Local_2194.f_40 / 2f) * get_distance_between_coords(get_entity_coords(Local_2194.f_9, 1), get_world_position_of_entity_bone(Local_1472[3 /*14*/], 0), 1);
				if (fVar1 < Local_2194.f_467)
				{
					iVar0 = true;
				}
			}
		}
		if (iVar0)
		{
			if (!iLocal_4828)
			{
				func_23(106, 0);
				iLocal_4828 = 1;
			}
		}
		else if (iLocal_4828)
		{
			func_22(0, -1);
			iLocal_4828 = 0;
		}
	}
}

void func_22(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55757)
	{
	}
	Global_55757 = 0;
	if (iParam0)
	{
		Global_55758 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67844)
		{
			if (Global_55974[Global_67845[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67845[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67844)
		{
			if (Global_67845[iVar0 /*9*/] > 0)
			{
				if (Global_67845[iVar0 /*9*/] == iParam1)
				{
					Global_67845[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_23(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55759 = iParam0;
	if (!Global_55757)
	{
		Global_55757 = 1;
	}
	if (iParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67844)
		{
			if (Global_67845[iVar0 /*9*/] == iParam0)
			{
				Global_67845[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_24()
{
	if (is_vehicle_driveable(Local_1725[0 /*2*/], 0))
	{
		if (is_ped_in_vehicle(player_ped_id(), Local_1725[0 /*2*/], 0))
		{
			switch (iLocal_3941)
			{
				case 0:
					if (func_817(&Local_2194))
					{
						if (start_audio_scene("CAR_2_HELI_FILTERING"))
						{
							iLocal_3941++;
						}
					}
					break;
				
				case 1:
					set_audio_scene_variable("CAR_2_HELI_FILTERING", "HeliFiltering", get_entity_speed(Local_1725[0 /*2*/]));
					break;
			}
		}
		else if (iLocal_3941 != 99 && iLocal_3941 > 0)
		{
			stop_audio_scene("CAR_2_HELI_FILTERING");
			iLocal_3941 = 99;
		}
	}
	else if (iLocal_3941 != 99 && iLocal_3941 > 0)
	{
		stop_audio_scene("CAR_2_HELI_FILTERING");
		iLocal_3941 = 99;
	}
}

void func_25()
{
	if (iLocal_1425 != 0)
	{
		if (!func_50())
		{
			iLocal_1425 = 0;
		}
	}
	if (iLocal_4000)
	{
		if (is_string_null_or_empty(&cLocal_3950))
		{
			if (func_50())
			{
				if (is_scripted_conversation_ongoing())
				{
					if (!is_message_being_displayed())
					{
						cLocal_3944 = {func_49()};
						cLocal_3950 = {func_48()};
						StringCopy(&cLocal_3950, "", 24);
						if (!func_47(&cLocal_3944))
						{
							cLocal_3950 = {func_48()};
							func_45();
						}
						else
						{
							iLocal_4000 = 0;
							StringCopy(&cLocal_3950, "", 24);
							StringCopy(&cLocal_3944, "", 24);
						}
					}
				}
			}
			else
			{
				iLocal_4000 = 0;
				StringCopy(&cLocal_3950, "", 24);
				StringCopy(&cLocal_3944, "", 24);
			}
		}
		else
		{
			if (is_scripted_conversation_ongoing())
			{
				if (!func_44(&cLocal_3950))
				{
					iLocal_4000 = 0;
					StringCopy(&cLocal_3950, "", 24);
					StringCopy(&cLocal_3944, "", 24);
				}
			}
			if (!is_string_null_or_empty(&cLocal_3950))
			{
				if (func_26(iLocal_1425, &cLocal_3950, &cLocal_3944, vLocal_4001[0 /*3*/], vLocal_4001[0 /*3*/].f_1, vLocal_4001[0 /*3*/].f_2, vLocal_4001[1 /*3*/], vLocal_4001[1 /*3*/].f_1, vLocal_4001[1 /*3*/].f_2, vLocal_4001[2 /*3*/], vLocal_4001[2 /*3*/].f_1, vLocal_4001[2 /*3*/].f_2, vLocal_4001[3 /*3*/], vLocal_4001[3 /*3*/].f_1, vLocal_4001[3 /*3*/].f_2, 7))
				{
					StringCopy(&cLocal_3950, "", 24);
					StringCopy(&cLocal_3944, "", 24);
					iLocal_4000 = 0;
				}
			}
		}
	}
}

bool func_26(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15)
{
	if (!func_50() || (func_50() && iParam0 > iLocal_1425))
	{
		func_43(sParam1, iParam3, iParam6, iParam9, iParam12);
		func_40(iParam3, iParam4, sParam5);
		if (iParam6 != -1)
		{
			func_40(iParam6, iParam7, sParam8);
		}
		if (iParam9 != -1)
		{
			func_40(iParam9, iParam10, sParam11);
		}
		if (iParam12 != -1)
		{
			func_40(iParam12, iParam13, sParam14);
		}
		if (iLocal_1425 < iParam0)
		{
			if (func_50())
			{
				func_38();
				iLocal_1425 = 0;
			}
		}
		if (is_message_being_displayed() && is_subtitle_preference_switched_on())
		{
			if (func_27(&Local_1760, sLocal_1925, sParam1, sParam2, iParam15, 1, 0))
			{
				iLocal_1425 = iParam0;
				iLocal_1399 = 0;
				return true;
			}
			else if (iLocal_1400 != get_game_timer())
			{
				iLocal_1399++;
				iLocal_1400 = get_game_timer();
				if (iLocal_1399 >= 10)
				{
					return true;
				}
			}
		}
		else if (func_27(&Local_1760, sLocal_1925, sParam1, sParam2, iParam15, 0, 0))
		{
			iLocal_1425 = iParam0;
			iLocal_1399 = 0;
			return true;
		}
		else if (iLocal_1400 != get_game_timer())
		{
			iLocal_1399++;
			iLocal_1400 = get_game_timer();
			if (iLocal_1399 >= 10)
			{
				return true;
			}
		}
	}
	return false;
}

int func_27(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_37(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_28(sParam2, iParam4, 0);
}

bool func_28(char* sParam0, int iParam1, int iParam2)
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
					func_36();
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
		if (func_35(8, -1))
		{
			return false;
		}
		Global_15788 = {Global_15782};
		func_34();
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
			clear_bit(&Global_2283, 20);
			clear_bit(&Global_2284, 17);
			clear_bit(&Global_2285, false);
			if (iParam2)
			{
				func_33();
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
				if (is_ped_in_melee_combat(player_ped_id()))
				{
					return false;
				}
				if (func_32())
				{
					return false;
				}
				if (is_ped_sprinting(player_ped_id()))
				{
					return false;
				}
				if (is_ped_ragdoll(player_ped_id()))
				{
					return false;
				}
				if (is_ped_in_parachute_free_fall(player_ped_id()))
				{
					return false;
				}
				if (get_is_ped_gadget_equipped(player_ped_id(), joaat("gadget_parachute")))
				{
					return false;
				}
				if (!Global_69489)
				{
					if (is_entity_in_water(player_ped_id()))
					{
						return false;
					}
					if (is_player_climbing(player_id()))
					{
						return false;
					}
					if (is_ped_planting_bomb(player_ped_id()))
					{
						return false;
					}
					if (is_special_ability_active(player_id()))
					{
						return false;
					}
				}
			}
			if (func_31())
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
				if (is_bit_set(Global_2283, 9))
				{
					return false;
				}
			}
			func_30();
			Global_15722 = iParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_29();
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
		func_36();
	}
	return false;
}

void func_29()
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

void func_30()
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
	clear_bit(&Global_2284, 16);
}

bool func_31()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return true;
	}
	return false;
}

bool func_32()
{
	int iVar0;
	int iVar1;
	
	if (Global_69489)
	{
		iVar0 = 0;
		get_current_ped_weapon(player_ped_id(), &iVar1, 1);
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
		if (get_ped_config_flag(player_ped_id(), 78, 1))
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

void func_33()
{
	if (func_13(14))
	{
		if (!is_entity_dead(player_ped_id(), 0))
		{
			if (get_entity_model(player_ped_id()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (get_entity_model(player_ped_id()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (get_entity_model(player_ped_id()) == Global_101154.f_32575[2 /*29*/])
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
		Global_14413 = func_11();
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

void func_34()
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

int func_35(int iParam0, int iParam1)
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

void func_36()
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

void func_37(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_38()
{
	Global_14578 = 0;
	func_39();
}

void func_39()
{
	restart_scripted_conversation();
	Global_16723 = 0;
	if (is_scripted_conversation_ongoing())
	{
		stop_scripted_conversation(false);
		Global_15712 = 6;
	}
}

bool func_40(int iParam0, int iParam1, char* sParam2)
{
	if (iParam1 != 0)
	{
		if (is_ped_injured(iParam1))
		{
			return false;
		}
	}
	if (iParam1 != Local_1760[iParam0 /*10*/])
	{
		func_42(&Local_1760, iParam0);
	}
	func_41(&Local_1760, iParam0, iParam1, sParam2, 0, 1);
	return true;
}

void func_41(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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
		if (!is_ped_injured(iParam2))
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
		if (!is_ped_injured(iParam2))
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

void func_42(var uParam0, int iParam1)
{
	if (*(uParam0[iParam1 /*10*/]).f_7 == 1)
	{
		*(uParam0[iParam1 /*10*/]).f_7 = 0;
	}
}

void func_43(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (is_string_null_or_empty(sLocal_4014) || !are_strings_equal(sLocal_4014, sParam0))
	{
		sLocal_4014 = sParam0;
		iVar0 = 0;
		while (iVar0 <= 15)
		{
			if (Local_1760[iVar0 /*10*/].f_7)
			{
				if (((iVar0 != iParam1 && iVar0 != iParam2) && iVar0 != iParam3) && iVar0 != iParam4)
				{
					func_42(&Local_1760, iVar0);
				}
			}
			iVar0++;
		}
	}
}

bool func_44(char* sParam0)
{
	struct<6> Var0;
	
	Var0 = {func_48()};
	if (are_strings_equal(&Var0, sParam0) || are_strings_equal(&cLocal_3950, sParam0))
	{
		return true;
	}
	return false;
}

void func_45()
{
	Global_14578 = 0;
	func_46();
}

void func_46()
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

bool func_47(char* sParam0)
{
	if (is_string_null(sParam0))
	{
		return true;
	}
	if (get_length_of_literal_string(sParam0) <= 0)
	{
		return true;
	}
	if (are_strings_equal(sParam0, "NULL"))
	{
		return true;
	}
	return false;
}

struct<6> func_48()
{
	char[24] cVar0;
	
	StringCopy(&cVar0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return cVar0;
}

struct<6> func_49()
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

bool func_50()
{
	if (Global_15712 != 0 || is_scripted_conversation_ongoing())
	{
		return true;
	}
	return false;
}

void func_51()
{
	if (iLocal_3971)
	{
		switch (iLocal_3974)
		{
			case 0:
				if (iLocal_3970)
				{
					if (prepare_music_event(sLocal_3972))
					{
						if (trigger_music_event(sLocal_3972))
						{
							iLocal_3974++;
						}
					}
				}
				else if (trigger_music_event(sLocal_3972))
				{
					iLocal_3974++;
				}
				break;
			
			case 1:
				if (!is_string_null_or_empty(sLocal_3973))
				{
					if (!_0xA097AB275061FB21())
					{
						prepare_music_event(sLocal_3973);
						iLocal_3971 = 0;
					}
				}
				else
				{
					iLocal_3971 = 0;
				}
				break;
		}
	}
	else
	{
		iLocal_3974 = 0;
	}
}

void func_52()
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (func_817(&Local_2194))
	{
		func_56();
		if (is_control_pressed(2, 227))
		{
			if (iLocal_1425 == 2)
			{
				if (iLocal_3939 != -1)
				{
					if (iLocal_1420 < 6)
					{
						if (!is_bit_set(iLocal_1419, iLocal_3939))
						{
							set_bit(&iLocal_1419, iLocal_3939);
							func_55(108, 1, 0);
						}
					}
					else if (!is_bit_set(iLocal_1419, iLocal_3939 + 7))
					{
						set_bit(&iLocal_1419, iLocal_3939 + 7);
						func_55(108, 1, 0);
					}
				}
				if (!iLocal_2745)
				{
					_push_scaleform_movie_function(iLocal_116, "SET_AUDIO_STATES");
					_push_scaleform_movie_function_parameter_bool(false);
					_push_scaleform_movie_function_parameter_bool(false);
					_push_scaleform_movie_function_parameter_bool(true);
					_pop_scaleform_movie_function_void();
					iLocal_2744 = 0;
					iLocal_2745 = 1;
				}
			}
			if (!iLocal_2744)
			{
				if (iLocal_1425 != 2)
				{
					_push_scaleform_movie_function(iLocal_116, "SET_AUDIO_STATES");
					_push_scaleform_movie_function_parameter_bool(false);
					_push_scaleform_movie_function_parameter_bool(true);
					_push_scaleform_movie_function_parameter_bool(false);
					_pop_scaleform_movie_function_void();
					iLocal_2744 = 1;
					iLocal_2745 = 0;
				}
			}
			if (iLocal_3938 == -1)
			{
				iLocal_3938 = get_sound_id();
				play_sound_frontend(iLocal_3938, "Microphone", "POLICE_CHOPPER_CAM_SOUNDS", 1);
				start_audio_scene("CAR_2_USE_MICROPHONE");
			}
			fVar2 = 1000000f;
			iLocal_3939 = -1;
			iVar0 = 0;
			while (iVar0 < vLocal_4795.x)
			{
				if (!func_54(vLocal_4795[iVar0 /*3*/]))
				{
					if (is_sphere_visible(vLocal_4795[iVar0 /*3*/], 5f))
					{
						if (Local_2194.f_40 < 15f)
						{
							iVar4 = 0;
							iVar5 = -1;
							while (iVar5 <= 1)
							{
								iVar6 = -1;
								while (iVar6 <= 1)
								{
									if (is_sphere_visible(vLocal_4795[iVar0 /*3*/] + Vector(IntToFloat(iVar6 * 15), 0f, IntToFloat(iVar5 * 15)), 5f))
									{
										iVar4++;
									}
									iVar6++;
								}
								iVar5++;
							}
							if (iVar4 > iVar3)
							{
								iLocal_3939 = iVar0;
								iVar3 = iVar4;
							}
						}
					}
				}
				iVar0++;
			}
			if (fVar2 != 1000000f)
			{
				fVar1 = fVar2 / 20f;
			}
			else
			{
				fVar1 = 1f;
			}
			func_53(fVar1, 0f, 1f);
			set_variable_on_sound(iLocal_3938, "Ctrl", fVar1);
		}
		else
		{
			if (iLocal_2745 || iLocal_2744)
			{
				_push_scaleform_movie_function(iLocal_116, "SET_AUDIO_STATES");
				_push_scaleform_movie_function_parameter_bool(true);
				_push_scaleform_movie_function_parameter_bool(false);
				_push_scaleform_movie_function_parameter_bool(false);
				_pop_scaleform_movie_function_void();
				iLocal_2745 = 0;
				iLocal_2744 = 0;
			}
			if (iLocal_1425 == 2)
			{
				func_38();
				iLocal_1425 = 0;
			}
			if (iLocal_3938 != -1)
			{
				stop_sound(iLocal_3938);
				stop_audio_scene("CAR_2_USE_MICROPHONE");
				iLocal_3938 = -1;
			}
			iLocal_3939 = -1;
		}
	}
	else if (iLocal_3938 != -1)
	{
		stop_sound(iLocal_3938);
		stop_audio_scene("CAR_2_USE_MICROPHONE");
		iLocal_3938 = -1;
	}
}

float func_53(float fParam0, float fParam1, float fParam2)
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

bool func_54(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_55(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		if (Global_67845[iVar0 /*9*/] == iParam0)
		{
			if (iParam2)
			{
				Global_67845[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_67845[iVar0 /*9*/].f_1 += iParam1;
			}
			return;
		}
		iVar0++;
	}
	if (Global_67845[iVar0 /*9*/] != -1)
	{
		if (Global_55974[Global_67845[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_67845[iVar0 /*9*/].f_1 > 1)
			{
				Global_67845[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_67845[iVar0 /*9*/].f_1 < 0)
			{
				Global_67845[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_56()
{
	Global_17118.f_134 = 1;
}

void func_57()
{
	switch (iLocal_2766)
	{
		case 0:
			if (func_15(player_ped_id()) == 1)
			{
				iLocal_2766 = 1;
			}
			else if ((iLocal_1420 == 1 && is_entity_in_angled_area(player_ped_id(), 476.3787f, -987.3391f, 42.32075f, 430.2201f, -986.7795f, 47.25765f, 31.125f, 0, true, 0)) || iLocal_1420 > 1)
			{
				func_61(1, "Trevor on roof", 0, 0, 0, 1);
				iLocal_2766++;
			}
			break;
		
		case 1:
			if (iLocal_1420 >= 5)
			{
				if (func_60(&Local_2194, Local_1472[3 /*14*/]) || iLocal_1420 > 5)
				{
					func_61(2, "Follow Chad on foot", 0, 0, 0, 1);
					iLocal_2766++;
				}
			}
			break;
		
		case 2:
			if (iLocal_1420 >= 6)
			{
				func_61(3, "Follow Chad in car", 0, 0, 0, 1);
				iLocal_2766++;
			}
			break;
		
		case 3:
			if (iLocal_1420 == 9)
			{
				func_61(4, "Franklin gets Z-Type", 0, 0, 0, 1);
				if (!is_ped_injured(Local_1472[3 /*14*/]))
				{
					Global_88048 = 1;
				}
				else
				{
					Global_88048 = 0;
				}
				iLocal_2766++;
			}
			else if (iLocal_1420 >= 10)
			{
				iLocal_2766++;
			}
			break;
		
		case 4:
			if (iLocal_1420 >= 9 && func_58(125))
			{
				func_61(5, "Drive Z-type back to garage", 0, 0, 0, 1);
				if (!is_ped_injured(Local_1472[3 /*14*/]))
				{
					Global_88048 = 1;
				}
				else
				{
					Global_88048 = 0;
				}
				iLocal_2766++;
			}
			else if (iLocal_1420 > 10)
			{
				iLocal_2766++;
			}
			break;
		
		case 5:
			if (iLocal_1420 >= 13)
			{
				func_61(6, "Leave the airport", 1, 0, 0, 1);
				iLocal_2766++;
			}
			break;
	}
}

bool func_58(int iParam0)
{
	int iVar0;
	char[64] cVar1;
	
	iVar0 = iParam0 - Local_4044[0 /*7*/];
	if (iVar0 >= 0 && iVar0 < Local_4044)
	{
		if (Local_4044[iVar0 /*7*/] == iParam0)
		{
			if (Local_4044[iVar0 /*7*/].f_1 && Local_4044[iVar0 /*7*/].f_2)
			{
				return true;
			}
		}
		else
		{
			StringCopy(&cVar1, "", 64);
			StringConCat(&cVar1, "IS_COND_TRUE() fail:", 64);
			StringConCat(&cVar1, func_59(iParam0), 64);
		}
	}
	return false;
}

char* func_59(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "	COND_NULL RETURN	";
			break;
		
		case 1:
			return "	COND_FAILING RETURN	";
			break;
		
		case 2:
			return "	COND_COP_WALKING_TO_STAIRS RETURN	";
			break;
		
		case 3:
			return "	COND_CUTSCENE_ENDED RETURN	";
			break;
		
		case 4:
			return "	COND_PLAYER_ENTERED_RECEPTION RETURN	";
			break;
		
		case 5:
			return "	COND_COP_IN_CORRIDOR RETURN	";
			break;
		
		case 6:
			return "	COND_PLAYER_ANYWHERE_IN_STAIRWALL RETURN	";
			break;
		
		case 7:
			return "	COND_PLAYER_LAGS_BEHIND_OR_WANDERS RETURN	";
			break;
		
		case 8:
			return "	COND_PLAYER_UP_STAIRWELL RETURN	";
			break;
		
		case 9:
			return "	COND_PLAYER_IN_CORRIDOR RETURN	";
			break;
		
		case 10:
			return "	COND_PLAYER_OUT_OF_BOUNDS RETURN	";
			break;
		
		case 11:
			return "	COND_PLAYER_NEARBY RETURN	";
			break;
		
		case 12:
			return "	COND_COPS_ALERTED_CONDITION RETURN	";
			break;
		
		case 13:
			return "	COND_COP_IN_STAIRWELL RETURN	";
			break;
		
		case 14:
			return "	COND_COP_FINISHED_LEADING_PLAYER RETURN	";
			break;
		
		case 15:
			return "	COND_CAN_SPAWN_CHOPPER RETURN	";
			break;
		
		case 16:
			return "	COND_PLAYER_NOT_FOLLOWING_COP RETURN	";
			break;
		
		case 17:
			return "	COND_DIA_COP_LEADING RETURN	";
			break;
		
		case 18:
			return "	COND_PLAYER_ON_ROOF RETURN	";
			break;
		
		case 19:
			return "	COND_PLAYER_TRYS_TO_ENTER_CHOPPER RETURN	";
			break;
		
		case 20:
			return "	COND_PLAYER_IN_LOCKER_ROOM RETURN	";
			break;
		
		case 21:
			return "	COND_PLAYER_RUNS_AHEAD RETURN	";
			break;
		
		case 22:
			return "	COND_TREVOR_TELLS_PILOT_TO_TAKE_OFF RETURN	";
			break;
		
		case 23:
			return "	COND_TREVOR_TELLS_PILOT_TO_ACTIVATE_SCANNER RETURN	";
			break;
		
		case 24:
			return "	COND_READY_TO_TURN_ON_SCANNER RETURN	";
			break;
		
		case 25:
			return "	COND_DIA_BACK_TO_FRONT_DESK RETURN	";
			break;
		
		case 26:
			return "	COND_DIA_GET_IN RETURN	";
			break;
		
		case 27:
			return "	COND_PLAYER_IN_CHOPPER RETURN	";
			break;
		
		case 28:
			return "	COND_COP_LEADING_PLAYER RETURN	";
			break;
		
		case 29:
			return "	COND_PLAYER_SPOTTED_BY_PILOT RETURN	";
			break;
		
		case 30:
			return "	COND_START_FRANKLIN RETURN	";
			break;
		
		case 31:
			return "	COND_PLAYER_LEAVING_TREVOR RETURN	";
			break;
		
		case 32:
			return "	COND_END_FRANKLIN RETURN	";
			break;
		
		case 33:
			return "	COND_SCAN_STAGE_START RETURN	";
			break;
		
		case 34:
			return "	COND_STARTED_AS_TREVOR RETURN	";
			break;
		
		case 35:
			return "	COND_FAR_ENOUGH_FROM_FRANKLIN_TO_PLAY_CONVO RETURN	";
			break;
		
		case 36:
			return "	COND_LEARNT_TO_SCAN RETURN	";
			break;
		
		case 37:
			return "	COND_BOOTING_UP_LINE_PLAYED RETURN	";
			break;
		
		case 38:
			return "	COND_FRANKLIN_SCANNED RETURN	";
			break;
		
		case 39:
			return "	COND_DIA_SCANNED_CONVO_FINISHED RETURN	";
			break;
		
		case 40:
			return "	COND_DIA_SCAN_MY_BUDDY RETURN	";
			break;
		
		case 41:
			return "	COND_TREV_SAID_TO_FIND_FRANKLIN RETURN	";
			break;
		
		case 42:
			return "	COND_TOLD_TO_SCAN_FRANKLIN RETURN	";
			break;
		
		case 43:
			return "	COND_OUTSIDE_SAFE_ZONE RETURN	";
			break;
		
		case 44:
			return "	COND_FLEW_IN_TO_FAIL_ZONE RETURN	";
			break;
		
		case 46:
			return "	COND_SCAN_STAGE_END RETURN	";
			break;
		
		case 47:
			return "	COND_START_SCAN_AREA_1 RETURN	";
			break;
		
		case 48:
			return "	COND_POSTAL_BEING_OBSERVED RETURN	";
			break;
		
		case 49:
			return "	COND_PERVERT_BEING_OBSERVED RETURN	";
			break;
		
		case 50:
			return "	COND_AREA1_PED_JUST_SCANNED RETURN	";
			break;
		
		case 51:
			return "	COND_SCANNED_PED_WAS_A_WOMAN RETURN	";
			break;
		
		case 52:
			return "	COND_DIA_COME_IN_FRANKLIN_PLAYED RETURN	";
			break;
		
		case 53:
			return "	COND_CHOPPER_IN_VIEWING_RANGE_OF_AREA1 RETURN	";
			break;
		
		case 54:
			return "	COND_START_SCAN_AREA_3 RETURN	";
			break;
		
		case 55:
			return "	COND_LISTENING_IN_ON_DIALOGUE RETURN	";
			break;
		
		case 56:
			return "	COND_END_SCAN_AREA_1 RETURN	";
			break;
		
		case 57:
			return "	COND_AREA3_PED_JUST_SCANNED RETURN	";
			break;
		
		case 58:
			return "	COND_PROSIE_BEING_OBSERVED RETURN	";
			break;
		
		case 59:
			return "	COND_CHAD_BEING_OBSERVED RETURN	";
			break;
		
		case 60:
			return "	COND_CHAD_WAS_SCANNED RETURN	";
			break;
		
		case 61:
			return "	COND_CHAD_HIDDEN RETURN	";
			break;
		
		case 62:
			return "	COND_CHAD_ON_SCREEN RETURN	";
			break;
		
		case 63:
			return "	COND_CHAD_OFFSCREEN_FOR_4_SECONDS RETURN	";
			break;
		
		case 64:
			return "	COND_CHAD_BY_GARAGES RETURN	";
			break;
		
		case 65:
			return "	COND_CHAD_IN_APARTMENT_LOCATE RETURN	";
			break;
		
		case 66:
			return "	COND_GARAGE_DOOR_OPENING RETURN	";
			break;
		
		case 67:
			return "	COND_END_SCAN_AREA_3 RETURN	";
			break;
		
		case 68:
			return "	COND_CARPARK_STARTS RETURN	";
			break;
		
		case 69:
			return "	COND_CHOPPER_DESCENDING RETURN	";
			break;
		
		case 70:
			return "	COND_FRANKLIN_STOPPED_HIS_CAR RETURN	";
			break;
		
		case 71:
			return "	COND_FRANKLIN_HAS_STOPPED_RUNNING RETURN	";
			break;
		
		case 72:
			return "	COND_A_LITTLE_AFTER_EXITS_CLEAR_DIA RETURN	";
			break;
		
		case 73:
			return "	COND_DIA_TAKE_US_DOWN RETURN	";
			break;
		
		case 74:
			return "	COND_DIA_THERMAL_VISION RETURN	";
			break;
		
		case 75:
			return "	COND_DIA_CAN_YOU_SEE_FRANKLIN RETURN	";
			break;
		
		case 76:
			return "	COND_DIA_ANY_OTHER_HEAT_SOURCES RETURN	";
			break;
		
		case 77:
			return "	COND_DIA_LOOK_FOR_MORE_HEAT_PLAYED RETURN	";
			break;
		
		case 78:
			return "	COND_DIA_FRANKLIN_SEES_PISSER RETURN	";
			break;
		
		case 79:
			return "	COND_DIA_FRANKLIN_SEES_FIXING_MAN RETURN	";
			break;
		
		case 80:
			return "	COND_DIA_FRANKLIN_SEES_CHAD RETURN	";
			break;
		
		case 81:
			return "	COND_DIA_TREVOR_SEE_FRANKLIN_ENDED RETURN	";
			break;
		
		case 82:
			return "	COND_CHOPPER_AT_CAR_PARK_LEVEL RETURN	";
			break;
		
		case 83:
			return "	COND_THERMAL_TURNED_ON RETURN	";
			break;
		
		case 84:
			return "	COND_FRANKLIN_OBSERVED_WITH_THERMAL RETURN	";
			break;
		
		case 85:
			return "	COND_SEE_WANKER RETURN	";
			break;
		
		case 86:
			return "	COND_SEE_FIXING_MAN RETURN	";
			break;
		
		case 87:
			return "	COND_SEE_CHAD RETURN	";
			break;
		
		case 88:
			return "	COND_SEE_LEANING_MAN RETURN	";
			break;
		
		case 89:
			return "	COND_SEE_PHONE_CAR_MAN RETURN	";
			break;
		
		case 90:
			return "	COND_FRANKLIN_AT_PHONE_MAN RETURN	";
			break;
		
		case 91:
			return "	COND_FRANKLIN_AT_CHAD RETURN	";
			break;
		
		case 92:
			return "	COND_THERMAL_READY RETURN	";
			break;
		
		case 93:
			return "	COND_DIA_TREVOR_SEES_CHAD_ENDED RETURN	";
			break;
		
		case 94:
			return "	COND_SWITCH_BEGUN RETURN	";
			break;
		
		case 95:
			return "	COND_BLOCK_LISTENING RETURN	";
			break;
		
		case 96:
			return "	COND_FRANKLIN_SAW_WRONG_GUY RETURN	";
			break;
		
		case 97:
			return "	COND_DIA_FROM_FRANKLIN_SEEING_CHAD RETURN	";
			break;
		
		case 98:
			return "	COND_FRANKLIN_RUNS_TO_CAR RETURN	";
			break;
		
		case 99:
			return "	COND_WAITING_FOR_NEXT_TARGET RETURN	";
			break;
		
		case 100:
			return "	COND_NEXT_TARGET_FOUND RETURN	";
			break;
		
		case 101:
			return "	COND_INVESTIGATING_NEXT_TARGET RETURN	";
			break;
		
		case 102:
			return "	COND_CAR_PARK_ENDS RETURN	";
			break;
		
		case 103:
			return "	COND_ZTYPE_STARTS RETURN	";
			break;
		
		case 104:
			return "	COND_CHAD_INTERRUPTED RETURN	";
			break;
		
		case 105:
			return "	COND_CHAD_CAN_BACK_OFF RETURN	";
			break;
		
		case 106:
			return "	COND_GUN_AIMED_AT_CHAD RETURN	";
			break;
		
		case 107:
			return "	COND_CHAD_DAMAGED_BY_PLAYER RETURN	";
			break;
		
		case 108:
			return "	COND_CHAD_CAN_RUN RETURN	";
			break;
		
		case 109:
			return "	COND_PLAYER_AT_SECURITY RETURN	";
			break;
		
		case 110:
			return "	COND_PLAYER_200M_FROM_SECURITY RETURN	";
			break;
		
		case 111:
			return "	COND_CHAD_PLAYER_IN_GARAGE RETURN	";
			break;
		
		case 112:
			return "	COND_CHAD_RAGDOLL RETURN	";
			break;
		
		case 113:
			return "	COND_PLAYER_GOT_IN_CAR RETURN	";
			break;
		
		case 114:
			return "	COND_PROCEED_TO_HANGAR_CONDITIONS_MET RETURN	";
			break;
		
		case 115:
			return "	COND_PHONE_CALL_MADE RETURN	";
			break;
		
		case 116:
			return "	COND_NO_DIALOGUE_FOR_TWO_SECONDS RETURN	";
			break;
		
		case 117:
			return "	COND_CHAD_DEAD RETURN	";
			break;
		
		case 118:
			return "	COND_CHAD_PLAYER_100m_FROM_CAR_PARK RETURN	";
			break;
		
		case 119:
			return "	COND_PLAYER_30m_from_garage RETURN	";
			break;
		
		case 120:
			return "	COND_PLAYER_200m_from_garage RETURN	";
			break;
		
		case 121:
			return "	COND_PLAYER_300m_from_garage RETURN	";
			break;
		
		case 122:
			return "	COND_PLAYER_DEFAULT_LOAD_CUT_RANGE_FROM_HANGAR RETURN	";
			break;
		
		case 123:
			return "	COND_WANTED RETURN	";
			break;
		
		case 124:
			return "	COND_HIT_BLIP RETURN	";
			break;
		
		case 125:
			return "	COND_PLAYER_IN_ZTYPE RETURN	";
			break;
		
		case 126:
			return "	COND_DRIVE_TO_INSTRUCTIONS_GIVEN RETURN	";
			break;
		
		case 127:
			return "	COND_CHAD_ESCAPED_IN_ZTYPE RETURN	";
			break;
		
		case 128:
			return "	COND_PLAYER_SHOOTING_NEAR_CHAD RETURN	";
			break;
		
		case 129:
			return "	COND_DEVIN_WALKING_IN_TO_ZTYPE RETURN	";
			break;
		
		case 130:
			return "	COND_CHOPPER_DAMAGED_BY_PLAYER RETURN	";
			break;
		
		case 131:
			return "	COND_DAMAGED_ZTYPE RETURN	";
			break;
		
		case 132:
			return "	COND_PLAYER_7M_FROM_CHAD RETURN	";
			break;
		
		case 133:
			return "	COND_ZTYPE_IN_HANGAR RETURN	";
			break;
		
		case 134:
			return "	COND_ZTYPE_IN_CAR_STOP_RANGE RETURN	";
			break;
		
		case 135:
			return "	COND_ZTYPE_IS_STOPPED RETURN	";
			break;
		
		case 138:
			return "	COND_ZTYPE_ENDS RETURN	";
			break;
		
		case 139:
			return "	COND_EXIT_AIRPORT_START RETURN	";
			break;
		
		case 140:
			return "	COND_PLAY_IN_ZTYPE RETURN	";
			break;
		
		case 141:
			return "	COND_EXIT_AIRPORT_END RETURN	";
			break;
	}
	return "NO DATA";
}

bool func_60(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= *uParam0.f_127 - 1)
	{
		if (*uParam0.f_298[iVar0 /*11*/] == iParam1)
		{
			if (is_bit_set(*(uParam0.f_298[iVar0 /*11*/]).f_2, false))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		iVar0++;
	}
	return false;
}

void func_61(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[8] cVar3;
	int iVar5;
	var uVar6;
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
		func_133(1);
		if (iParam0 <= Global_91315)
		{
		}
		iVar1 = func_131(get_this_script_name(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_101154.f_7775.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_129(iVar1);
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
			iVar5 = func_124(get_this_script_name(), 1);
			if (iVar5 != -1)
			{
				Global_101154.f_17264[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_123(iVar5)}, 4);
				playstats_mission_checkpoint(&uVar6, 0, Global_91315, iParam0);
			}
			else
			{
				iVar10 = func_122(&(Global_91278.f_3));
				if (iVar10 > -1)
				{
					Global_101154.f_29511.f_4[iVar10] = 0;
				}
			}
		}
		Global_85789 = iParam2;
		Global_91315 = iParam0;
		func_62(iParam0, sParam1, iParam4, iParam5);
		if (are_strings_equal(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_91315)
	{
	}
}

void func_62(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_63(&Global_95496, get_this_script_name(), iParam0, uParam1, iParam3, iParam2);
}

void func_63(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_11();
	*uParam0.f_1 = func_111();
	_get_weather_type_transition(uParam0.f_6, uParam0.f_7, uParam0.f_8);
	if (!is_ped_injured(player_ped_id()))
	{
		func_96(uParam0.f_2305, 0);
		func_95(player_ped_id());
		func_89(player_ped_id(), 0);
		get_current_ped_weapon(player_ped_id(), uParam0.f_2, 1);
		if (*uParam0.f_2 == 0 || *uParam0.f_2 == joaat("object"))
		{
			*uParam0.f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		*uParam0.f_17[iVar1] = Global_101154.f_1826.f_539.f_294[iVar1];
		if (iVar1 == func_88())
		{
			func_81(player_ped_id(), uParam0.f_616[iVar1 /*65*/], 1);
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
				stat_get_int(joaat("sp0_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				stat_get_int(joaat("sp0_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				stat_get_int(joaat("sp0_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				stat_get_int(joaat("sp0_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				stat_get_int(joaat("sp0_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				stat_get_int(joaat("sp0_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				stat_get_int(joaat("sp0_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				stat_get_int(joaat("sp0_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
				break;
			
			case 1:
				stat_get_int(joaat("sp1_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				stat_get_int(joaat("sp1_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				stat_get_int(joaat("sp1_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				stat_get_int(joaat("sp1_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				stat_get_int(joaat("sp1_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				stat_get_int(joaat("sp1_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				stat_get_int(joaat("sp1_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				stat_get_int(joaat("sp1_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
				break;
			
			case 2:
				stat_get_int(joaat("sp2_weap_purch_0"), uParam0.f_1665[iVar1 /*32*/][0], -1);
				stat_get_int(joaat("sp2_weap_purch_1"), uParam0.f_1665[iVar1 /*32*/][1], -1);
				stat_get_int(joaat("sp2_weap_addon_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_5[0], -1);
				stat_get_int(joaat("sp2_weap_addon_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_5[1], -1);
				stat_get_int(joaat("sp2_weap_addon_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_5[2], -1);
				stat_get_int(joaat("sp2_weap_addon_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_5[3], -1);
				stat_get_int(joaat("sp2_weap_addon_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_5[4], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_0"), uParam0.f_1665[iVar1 /*32*/].f_16[0], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_1"), uParam0.f_1665[iVar1 /*32*/].f_16[1], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_2"), uParam0.f_1665[iVar1 /*32*/].f_16[2], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_3"), uParam0.f_1665[iVar1 /*32*/].f_16[3], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_4"), uParam0.f_1665[iVar1 /*32*/].f_16[4], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_5"), uParam0.f_1665[iVar1 /*32*/].f_16[5], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_6"), uParam0.f_1665[iVar1 /*32*/].f_16[6], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_7"), uParam0.f_1665[iVar1 /*32*/].f_16[7], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_8"), uParam0.f_1665[iVar1 /*32*/].f_16[8], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_9"), uParam0.f_1665[iVar1 /*32*/].f_16[9], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_10"), uParam0.f_1665[iVar1 /*32*/].f_16[10], -1);
				stat_get_int(joaat("sp2_weap_tint_purch_11"), uParam0.f_1665[iVar1 /*32*/].f_16[11], -1);
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
	stat_get_int(joaat("sp0_special_ability"), uParam0.f_1762[0], -1);
	stat_get_int(joaat("sp1_special_ability"), uParam0.f_1762[1], -1);
	stat_get_int(joaat("sp2_special_ability"), uParam0.f_1762[2], -1);
	*uParam0.f_5 = 145;
	if (iParam4 == 1)
	{
		func_65(uParam0.f_2311, uParam0, iParam5, 1, 1, 0);
	}
	func_64(uParam0.f_2401);
	uParam3 = uParam3;
	uParam2 = uParam2;
}

bool func_64(var uParam0)
{
	*uParam0 = Global_87460;
	*uParam0.f_1 = Global_87461;
	*uParam0.f_2 = 0;
	*uParam0.f_3 = 0;
	return true;
}

void func_65(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = player_ped_id();
	}
	if (does_entity_exist(iParam2))
	{
		*uParam1.f_5 = func_15(iParam2);
	}
	if (func_78(iParam2, &iVar0, iParam3, iParam5))
	{
		func_66(uParam0, uParam1, iVar0, iParam4);
	}
	else if (does_entity_exist(iVar0))
	{
		if (!is_entity_dead(iVar0, 0))
		{
			if (is_vehicle_model(iVar0, joaat("skylift")) && is_ped_in_vehicle(player_ped_id(), iVar0, 0))
			{
				func_66(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

bool func_66(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (is_vehicle_driveable(iParam2, 0))
	{
		func_68(uParam0, iParam2, iParam3);
		*uParam1.f_4 = iParam2;
		if (func_67(iParam2))
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

bool func_67(int iParam0)
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

void func_68(var uParam0, int iParam1, int iParam2)
{
	func_74(iParam1, uParam0.f_12);
	*uParam0.f_7 = func_71(iParam1, 145, 0);
	*uParam0.f_11 = func_70(iParam1);
	if (!*uParam0.f_7)
	{
		if (!*uParam0.f_10)
		{
			*uParam0.f_10 = func_69(iParam1);
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
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		*uParam0.f_8 = 1;
	}
	else
	{
		*uParam0.f_8 = 0;
	}
}

bool func_69(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (does_entity_exist(Global_68319.f_484[iVar0]))
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

int func_70(int iParam0)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
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
		if (does_entity_exist(Global_88942[iVar0]))
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

bool func_71(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
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
		if (does_entity_exist(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_88952[iVar0])
				{
					if (iParam2 == 0 || get_entity_model(iParam0) == func_72(iParam1, iParam2))
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

int func_72(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_14(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_73(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_73(int iParam0, var uParam1, int iParam2)
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

void func_74(int iParam0, var uParam1)
{
	int iVar0;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		func_77(uParam1);
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
		func_76(&iParam0, uParam1.f_9, uParam1.f_59);
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (is_vehicle_extra_turned_on(iParam0, iVar0 + 1))
			{
				set_bit(uParam1.f_77, func_75(iVar0 + 1));
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

int func_75(int iParam0)
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

bool func_76(int iParam0, var uParam1, var uParam2)
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

void func_77(var uParam0)
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

bool func_78(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (iParam0 == player_ped_id())
			{
				*uParam1 = get_players_last_vehicle();
			}
			else
			{
				*uParam1 = get_vehicle_ped_is_in(iParam0, 1);
			}
			if (does_entity_exist(*uParam1))
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
						if (func_79(*uParam1, func_11(), 1))
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

bool func_79(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	var uVar9;
	
	if (!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (func_80(iParam1, iVar0, &sVar1, &uVar9))
	{
		if (!iParam2 || is_bit_set(Global_101154.f_5919[uVar9], false))
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

bool func_80(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_81(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_ped_injured(iParam0))
	{
		iVar0 = func_15(iParam0);
		iVar1 = false;
		while (iVar1 < 12)
		{
			func_87(iParam0, iVar1, uParam1.f_13[iVar1], uParam1[iVar1], uParam1.f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = false;
		while (iVar1 < 9)
		{
			func_86(iParam0, iVar1, uParam1.f_39[iVar1], uParam1.f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_14(iVar0))
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
			if (func_85(161, -1))
			{
				*uParam1.f_59 = func_82(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_82(745, Global_69309, 0);
			}
			*uParam1.f_60 = func_82(746, Global_69309, 0);
			*uParam1.f_61 = func_82(747, Global_69309, 0);
		}
		if (network_is_game_in_progress() && iParam0 == player_ped_id())
		{
			if (func_85(161, -1))
			{
				*uParam1.f_59 = func_82(2043, Global_69309, 0);
			}
			else
			{
				*uParam1.f_59 = func_82(745, Global_69309, 0);
			}
		}
	}
}

int func_82(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2469339[iParam0 /*5*/][func_83(iParam1)];
	if (stat_get_int(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_83(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_84();
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

var func_84()
{
	return Global_1312747;
}

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2490231[iParam0 /*5*/][func_83(iParam1)];
	if (stat_get_bool(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_86(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_15(iParam0);
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

void func_87(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_15(iParam0);
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

var func_88()
{
	func_12();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_89(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_15(iParam0);
	if (func_14(iVar0) && !is_ped_injured(iParam0))
	{
		if (iParam0 == player_ped_id())
		{
			func_90(iParam0, &(Global_101154.f_1826.f_539.f_298[iVar0 /*284*/]));
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
				stat_set_int(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				stat_set_int(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				stat_set_int(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_90(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!is_ped_injured(iParam0))
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
			iVar3 = func_94(iVar0);
			if (iVar3 != 0)
			{
				vVar4.x = get_ped_weapontype_in_slot(iParam0, func_94(iVar0));
				vVar4.y = 0;
				vVar4.z = 0;
				if (vVar4.x != 0 && vVar4.x != joaat("weapon_unarmed"))
				{
					vVar4.y = get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (vVar4.x == joaat("gadget_parachute"))
					{
						vVar4.y = 1;
					}
					set_bit(&(vVar4.f_2), 20 + get_ped_weapon_tint_index(iParam0, vVar4.x));
					if (vVar4.y == -1)
					{
						if (!get_max_ammo(iParam0, vVar4.x, &(vVar4.f_1)))
						{
							vVar4.y = 0;
						}
					}
					*(uParam1[iVar0 /*3*/]).f_1 = vVar4.y;
					iVar1 = false;
					iVar2 = func_92(vVar4.x, iVar1);
					while (iVar2 != 0)
					{
						if (has_ped_got_weapon_component(iParam0, vVar4.x, iVar2))
						{
							set_bit(&(vVar4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_92(vVar4.x, iVar1);
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
			if ((get_dlc_weapon_data(iVar7, &Var9) && !func_91(Var9.f_1)) && iVar70 < 50)
			{
				if (!_is_dlc_data_empty(Var9))
				{
					vVar4.x = Var9.f_1;
					vVar4.y = 0;
					vVar4.z = 0;
					vVar4.y = get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (has_ped_got_weapon(iParam0, vVar4.x, 0))
					{
						set_bit(&(vVar4.f_2), 20 + get_ped_weapon_tint_index(iParam0, vVar4.x));
					}
					else
					{
						set_bit(&(vVar4.f_2), 20);
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
								set_bit(&(vVar4.f_2), iVar1);
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

bool func_91(int iParam0)
{
	if (network_is_game_in_progress())
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

int func_92(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
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
				iVar1 = func_93(iParam0, &uVar2);
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

int func_93(int iParam0, var uParam1)
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

int func_94(int iParam0)
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

void func_95(int iParam0)
{
	int iVar0;
	
	iVar0 = func_15(iParam0);
	if (func_14(iVar0) && !is_ped_injured(iParam0))
	{
		Global_101154.f_1826.f_539.f_294[iVar0] = get_ped_armour(iParam0);
	}
}

void func_96(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	int iVar5;
	
	*uParam0 = {get_entity_coords(player_ped_id(), 1)};
	*uParam0.f_3 = get_entity_heading(player_ped_id());
	*uParam0.f_5 = get_ped_parachute_state(player_ped_id());
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
	else if (is_bit_set(Global_69737, 4))
	{
		*uParam0 = {452.0255f, 5571.85f, 780.1859f};
		*uParam0.f_3 = 78.9858f;
	}
	else if (is_bit_set(Global_69737, 5))
	{
		*uParam0 = {-745.4462f, 5595.146f, 40.6594f};
		*uParam0.f_3 = 261.747f;
	}
	else if (is_bit_set(Global_69737, 6))
	{
		*uParam0 = {-1675.521f, -1125.59f, 12.091f};
		*uParam0.f_3 = 271.8208f;
	}
	else if (is_bit_set(Global_69737, 7))
	{
		*uParam0 = {-1631.219f, -1112.805f, 12.0212f};
		*uParam0.f_3 = 316.8879f;
	}
	else if (get_interior_from_entity(player_ped_id()) == get_interior_at_coords_with_type(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = {1276.956f, -1725.189f, 53.6551f};
		*uParam0.f_3 = 204.1703f;
	}
	else if (is_entity_in_angled_area(player_ped_id(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || is_entity_in_angled_area(player_ped_id(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
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
		if (func_100(&iVar0))
		{
			if (func_98(iVar0, &vVar1, &uVar4))
			{
				vVar1.z++;
				*uParam0 = {vVar1};
				*uParam0.f_3 = uVar4;
			}
		}
		else if (is_entity_in_angled_area(player_ped_id(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar5 = func_11();
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
		else if (is_entity_in_angled_area(player_ped_id(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = {495.4108f, -1306.08f, 29.2883f};
			*uParam0.f_3 = 213.6273f;
		}
		else if (is_entity_in_angled_area(player_ped_id(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			*uParam0.f_3 = 305.6424f;
		}
		else if (is_entity_in_angled_area(player_ped_id(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = {431.8853f, -1013.133f, 28.7907f};
			*uParam0.f_3 = 186.6814f;
		}
		else if (func_97(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = {279.4137f, -585.8815f, 43.2502f};
			*uParam0.f_3 = 48.8028f;
		}
	}
}

bool func_97(vector3 vParam0, char* sParam1, vector3 vParam2)
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

int func_98(int iParam0, var uParam1, var uParam2)
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
	return !func_99(*uParam1, 0f, 0f, 0f, 0);
}

int func_99(vector3 vParam0, vector3 vParam1, int iParam2)
{
	if (iParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_100(var uParam0)
{
	if (!is_entity_dead(player_ped_id(), 0) && !is_ped_injured(player_ped_id()))
	{
		if (func_110())
		{
			*uParam0 = func_106(get_entity_coords(player_ped_id(), 0), 5, -1, 0, 1, -1);
			if (func_105(*uParam0) && !func_101(*uParam0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_101(int iParam0)
{
	return func_102(iParam0, 0, 1);
}

int func_102(int iParam0, int iParam1, int iParam2)
{
	if (iParam2)
	{
		return is_bit_set(Global_91330.f_1300[iParam0], iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_104() == 0)
		{
			return is_bit_set(func_82(func_103(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return is_bit_set(Global_101154.f_668[iParam0], iParam1);
	}
	return false;
}

int func_103(int iParam0)
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

var func_104()
{
	return Global_25120;
}

int func_105(int iParam0)
{
	return func_102(iParam0, 5, 1);
}

int func_106(vector3 vParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		if (iParam3 == 5 || iParam3 == func_109(iVar0))
		{
			if (!iParam5 || func_108(iVar0))
			{
				fVar1 = get_distance_between_coords(vParam0, func_107(iVar0, 0), 1);
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

Vector3 func_107(int iParam0, int iParam1)
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

int func_108(int iParam0)
{
	return func_102(iParam0, 0, 0);
}

int func_109(int iParam0)
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

int func_110()
{
	return Global_91330.f_296 > 0;
}

var func_111()
{
	var uVar0;
	
	func_121(&uVar0, get_clock_seconds());
	func_120(&uVar0, get_clock_minutes());
	func_119(&uVar0, get_clock_hours());
	func_114(&uVar0, get_clock_day_of_month());
	func_113(&uVar0, get_clock_month());
	func_112(&uVar0, get_clock_year());
	return uVar0;
}

void func_112(var uParam0, int iParam1)
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

void func_113(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15;
	*uParam0 = (*uParam0 || iParam1);
}

void func_114(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_118(*uParam0);
	iVar1 = func_116(*uParam0);
	if (iParam1 < 1 || iParam1 > func_115(iVar0, iVar1))
	{
		return;
	}
	*uParam0 -= *uParam0 & 496;
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_115(int iParam0, int iParam1)
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

var func_116(int iParam0)
{
	return shift_right(iParam0, 26) & 31 * func_117(is_bit_set(iParam0, 31), -1, 1) + 2011;
}

int func_117(int iParam0, int iParam1, int iParam2)
{
	if (iParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_118(int iParam0)
{
	return (iParam0 && 15);
}

void func_119(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 -= *uParam0 & 15872;
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_120(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 1032192;
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_121(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 -= *uParam0 & 66060288;
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_122(char* sParam0)
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

struct<2> func_123(int iParam0)
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

int func_124(char* sParam0, int iParam1)
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
		func_125(iVar0, &sVar1);
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

void func_125(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_126(uParam1, "Abigail1", func_128(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 1:
			func_126(uParam1, "Abigail2", func_128(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 2:
			func_126(uParam1, "Barry1", func_128(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 3:
			func_126(uParam1, "Barry2", func_128(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_127(iParam0), 1, 1);
			break;
		
		case 4:
			func_126(uParam1, "Barry3", func_128(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 5:
			func_126(uParam1, "Barry3A", func_128(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 6:
			func_126(uParam1, "Barry3C", func_128(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 7:
			func_126(uParam1, "Barry4", func_128(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_127(iParam0), 0, 0);
			break;
		
		case 8:
			func_126(uParam1, "Dreyfuss1", func_128(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 9:
			func_126(uParam1, "Epsilon1", func_128(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 10:
			func_126(uParam1, "Epsilon2", func_128(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 11:
			func_126(uParam1, "Epsilon3", func_128(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 12:
			func_126(uParam1, "Epsilon4", func_128(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 13:
			func_126(uParam1, "Epsilon5", func_128(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 14:
			func_126(uParam1, "Epsilon6", func_128(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 15:
			func_126(uParam1, "Epsilon7", func_128(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 16:
			func_126(uParam1, "Epsilon8", func_128(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 17:
			func_126(uParam1, "Extreme1", func_128(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 18:
			func_126(uParam1, "Extreme2", func_128(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 19:
			func_126(uParam1, "Extreme3", func_128(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 20:
			func_126(uParam1, "Extreme4", func_128(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 21:
			func_126(uParam1, "Fanatic1", func_128(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_127(iParam0), 1, 0);
			break;
		
		case 22:
			func_126(uParam1, "Fanatic2", func_128(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_127(iParam0), 1, 0);
			break;
		
		case 23:
			func_126(uParam1, "Fanatic3", func_128(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_127(iParam0), 0, 1);
			break;
		
		case 24:
			func_126(uParam1, "Hao1", func_128(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_127(iParam0), 0, 1);
			break;
		
		case 25:
			func_126(uParam1, "Hunting1", func_128(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 26:
			func_126(uParam1, "Hunting2", func_128(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 27:
			func_126(uParam1, "Josh1", func_128(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 28:
			func_126(uParam1, "Josh2", func_128(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_127(iParam0), 1, 1);
			break;
		
		case 29:
			func_126(uParam1, "Josh3", func_128(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_127(iParam0), 1, 1);
			break;
		
		case 30:
			func_126(uParam1, "Josh4", func_128(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 31:
			func_126(uParam1, "Maude1", func_128(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 32:
			func_126(uParam1, "Minute1", func_128(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 33:
			func_126(uParam1, "Minute2", func_128(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 34:
			func_126(uParam1, "Minute3", func_128(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 35:
			func_126(uParam1, "MrsPhilips1", func_128(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 36:
			func_126(uParam1, "MrsPhilips2", func_128(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 37:
			func_126(uParam1, "Nigel1", func_128(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 38:
			func_126(uParam1, "Nigel1A", func_128(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_127(iParam0), 1, 1);
			break;
		
		case 39:
			func_126(uParam1, "Nigel1B", func_128(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_127(iParam0), 1, 1);
			break;
		
		case 40:
			func_126(uParam1, "Nigel1C", func_128(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_127(iParam0), 1, 1);
			break;
		
		case 41:
			func_126(uParam1, "Nigel1D", func_128(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_127(iParam0), 1, 1);
			break;
		
		case 42:
			func_126(uParam1, "Nigel2", func_128(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_127(iParam0), 1, 1);
			break;
		
		case 43:
			func_126(uParam1, "Nigel3", func_128(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_127(iParam0), 1, 1);
			break;
		
		case 44:
			func_126(uParam1, "Omega1", func_128(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 45:
			func_126(uParam1, "Omega2", func_128(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 46:
			func_126(uParam1, "Paparazzo1", func_128(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 47:
			func_126(uParam1, "Paparazzo2", func_128(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 48:
			func_126(uParam1, "Paparazzo3", func_128(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 49:
			func_126(uParam1, "Paparazzo3A", func_128(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 50:
			func_126(uParam1, "Paparazzo3B", func_128(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 51:
			func_126(uParam1, "Paparazzo4", func_128(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 52:
			func_126(uParam1, "Rampage1", func_128(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 54:
			func_126(uParam1, "Rampage3", func_128(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 55:
			func_126(uParam1, "Rampage4", func_128(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 56:
			func_126(uParam1, "Rampage5", func_128(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_127(iParam0), 0, 0);
			break;
		
		case 53:
			func_126(uParam1, "Rampage2", func_128(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_127(iParam0), 1, 0);
			break;
		
		case 57:
			func_126(uParam1, "TheLastOne", func_128(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 58:
			func_126(uParam1, "Tonya1", func_128(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 59:
			func_126(uParam1, "Tonya2", func_128(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 60:
			func_126(uParam1, "Tonya3", func_128(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 61:
			func_126(uParam1, "Tonya4", func_128(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		case 62:
			func_126(uParam1, "Tonya5", func_128(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_127(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_126(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

bool func_127(int iParam0)
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

struct<2> func_128(int iParam0)
{
	char[8] cVar0;
	struct<2> Var2;
	
	StringCopy(&cVar0, "", 8);
	Var2 = {func_123(iParam0)};
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

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_130(Global_101154.f_7775.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_130(Global_101154.f_7775.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_130(Global_101154.f_7775.f_99.f_205[11]);
			break;
		
		case 90:
			return func_130(Global_101154.f_7775.f_99.f_205[7]);
			break;
		
		case 93:
			return func_130(Global_101154.f_7775.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_130(int iParam0)
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

int func_131(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = get_hash_key(sParam0);
	iVar1 = func_132(iVar0, 1);
	if (iVar1 == -1 && !iParam1)
	{
	}
	return iVar1;
}

int func_132(int iParam0, int iParam1)
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

void func_133(int iParam0)
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

void func_134()
{
	int iVar0;
	
	if (!is_help_message_being_displayed())
	{
		if (Local_1929[0 /*12*/].f_10 == 1)
		{
			iVar0 = 0;
			while (iVar0 <= Local_1929 - 2)
			{
				Local_1929[iVar0 /*12*/] = {Local_1929[iVar0 + 1 /*12*/]};
				iVar0++;
			}
			Local_1929[Local_1929 - 1 /*12*/] = 0;
			Local_1929[Local_1929 - 1 /*12*/].f_1 = -1;
			Local_1929[Local_1929 - 1 /*12*/].f_2 = -1;
			Local_1929[Local_1929 - 1 /*12*/].f_3 = 0;
			Local_1929[Local_1929 - 1 /*12*/].f_5 = -1;
			Local_1929[Local_1929 - 1 /*12*/].f_10 = 0;
		}
		if (!is_string_null(Local_1929[0 /*12*/]))
		{
			if (Local_1929[0 /*12*/].f_2 != -1)
			{
				if (Local_1929[0 /*12*/].f_3 == 0)
				{
					Local_1929[0 /*12*/].f_2 += get_game_timer();
					Local_1929[0 /*12*/].f_3 = 1;
				}
			}
			if (get_game_timer() > Local_1929[0 /*12*/].f_2)
			{
				func_136(Local_1929[0 /*12*/]);
				if (Local_1929[0 /*12*/].f_4 != 1)
				{
					if (Local_1929[0 /*12*/].f_1 == 0)
					{
						Local_1929[0 /*12*/].f_1 = 7500;
					}
				}
				Local_1929[0 /*12*/].f_10 = 1;
				if (Local_1929[0 /*12*/].f_1 > 0)
				{
					iLocal_1990 = get_game_timer() + Local_1929[0 /*12*/].f_1;
				}
				else
				{
					iLocal_1990 = -1;
				}
			}
		}
		else
		{
			iLocal_1990 = -1;
		}
	}
	if (is_help_message_being_displayed())
	{
		if (!is_string_null(Local_1929[0 /*12*/]))
		{
			if (iLocal_1990 > 0)
			{
				if (get_game_timer() > iLocal_1990)
				{
					if (func_135(Local_1929[0 /*12*/]))
					{
						clear_help(1);
					}
				}
			}
		}
	}
}

int func_135(char* sParam0)
{
	_0x0A24DA3A41B718F5(sParam0);
	return _0x10BDDBFC529428DD(0);
}

void func_136(char* sParam0)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 1, true, -1);
}

void func_137()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_1472)
	{
		if (does_blip_exist(Local_1472[iVar0 /*14*/].f_1))
		{
			if (does_entity_exist(Local_1472[iVar0 /*14*/]))
			{
				if (is_entity_dead(Local_1472[iVar0 /*14*/], 0))
				{
					remove_blip(&(Local_1472[iVar0 /*14*/].f_1));
				}
			}
			else
			{
				remove_blip(&(Local_1472[iVar0 /*14*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_138()
{
	switch (iLocal_1420)
	{
		case 0:
			if (iLocal_2747 == 0)
			{
				iLocal_1420 = 2;
			}
			else
			{
				func_813(1);
				iLocal_1420 = 1;
			}
			break;
		
		case 1:
			if (func_811())
			{
				func_805(16);
			}
			break;
		
		case 2:
			if (func_543())
			{
				func_805(16);
			}
			break;
		
		case 3:
			if (func_542())
			{
				func_805(16);
			}
			break;
		
		case 4:
			if (func_539())
			{
				func_805(16);
			}
			break;
		
		case 5:
			if (func_535())
			{
				func_805(16);
			}
			break;
		
		case 6:
			if (func_529())
			{
				func_805(16);
			}
			break;
		
		case 7:
			if (func_524())
			{
				func_805(9);
			}
			break;
		
		case 8:
			if (func_524())
			{
				func_805(9);
			}
			break;
		
		case 9:
			if (func_510())
			{
				func_805(12);
			}
			break;
		
		case 11:
		case 10:
			if (func_510())
			{
				func_805(12);
			}
			break;
		
		case 12:
			if (func_497())
			{
				func_805(16);
			}
			break;
		
		case 13:
			if (func_152())
			{
				func_805(16);
			}
			break;
		
		case 14:
			func_149();
			break;
	}
	if (iLocal_1420 >= 9)
	{
		func_144(1);
	}
	func_823(&Local_2194, 0);
	func_143();
	iLocal_4783 = iLocal_4783;
	if (iLocal_1420 >= 3 && iLocal_1420 <= 8)
	{
		func_139();
	}
}

void func_139()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_142(0))
		{
			func_140(0);
		}
		set_bit(&Global_2284, 2);
	}
}

void func_140(int iParam0)
{
	if (Global_14571)
	{
		func_141(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		set_bit(&Global_2284, 16);
	}
	if (is_mobile_phone_call_ongoing())
	{
		stop_scripted_conversation(false);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		set_bit(&Global_2283, 30);
	}
	else
	{
		clear_bit(&Global_2283, 30);
	}
	if (!func_31())
	{
		Global_14413.f_1 = 3;
	}
}

void func_141(int iParam0, int iParam1)
{
	if (iParam0)
	{
		if (func_142(0))
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

bool func_142(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (is_bit_set(Global_2283, 14))
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

void func_143()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	
	if (iLocal_2746 == 1)
	{
		if (iLocal_1420 == 6 || iLocal_1420 == 7)
		{
			if (!is_pc_version())
			{
				iLocal_4646 += floor(timestep() * fLocal_3318 * 1000f);
			}
			else
			{
				iLocal_4646 += floor(timestep() * fLocal_3318 * 1000f + 0.5f);
			}
			iVar0 = 0;
			while (iVar0 < Local_3319)
			{
				if (Local_3319[iVar0 /*8*/].f_3 >= 1)
				{
					if (Local_3319[iVar0 /*8*/].f_4 == 0 && Local_3319[iVar0 /*8*/].f_5 == 0)
					{
						if (Local_3319[iVar0 /*8*/].f_2 - 5000 < iLocal_4646)
						{
							if (Local_3319[iVar0 /*8*/].f_6 == 0 && Local_3319[iVar0 /*8*/].f_7 == 0)
							{
								request_model(Local_3319[iVar0 /*8*/]);
							}
						}
						if ((iVar0 != 31 && iLocal_4646 > Local_3319[iVar0 /*8*/].f_2) || (iVar0 == 31 && iLocal_4646 > Local_3319[iVar0 /*8*/].f_2 - 15000))
						{
							if (Local_3319[iVar0 /*8*/].f_6 == 1)
							{
								Local_3319[iVar0 /*8*/].f_1 = Local_1725[2 /*2*/];
								vLocal_2731 = {get_entity_coords(Local_3319[iVar0 /*8*/].f_1, 1)};
								vLocal_2734 = {get_entity_rotation(Local_3319[iVar0 /*8*/].f_1, 2)};
							}
							else if (Local_3319[iVar0 /*8*/].f_7 == 1)
							{
								if (!is_vehicle_driveable(Local_1725[1 /*2*/], 0))
								{
									if (!is_ped_injured(Local_1472[4 /*14*/]))
									{
										if (is_ped_in_any_vehicle(Local_1472[4 /*14*/], 0))
										{
											Local_1725[1 /*2*/] = get_vehicle_ped_is_in(Local_1472[4 /*14*/], 1);
										}
									}
								}
								Local_3319[iVar0 /*8*/].f_1 = Local_1725[1 /*2*/];
							}
							else if (has_model_loaded(Local_3319[iVar0 /*8*/]))
							{
								if (!is_vehicle_driveable(Local_3319[iVar0 /*8*/].f_1, 0))
								{
									if (has_vehicle_recording_been_loaded(Local_3319[iVar0 /*8*/].f_3, sLocal_1418))
									{
										Local_3319[iVar0 /*8*/].f_1 = create_vehicle(Local_3319[iVar0 /*8*/], get_position_of_vehicle_recording_at_time(Local_3319[iVar0 /*8*/].f_3, 0f, sLocal_1418), 0, 1, 1);
										set_vehicle_lights(Local_3319[iVar0 /*8*/].f_1, 3);
									}
								}
							}
							if (is_vehicle_driveable(Local_3319[iVar0 /*8*/].f_1, 0))
							{
								freeze_entity_position(Local_3319[iVar0 /*8*/].f_1, false);
								if (Local_3319[iVar0 /*8*/].f_6 == 1 || Local_3319[iVar0 /*8*/].f_7 == 1)
								{
									if (is_playback_going_on_for_vehicle(Local_3319[iVar0 /*8*/].f_1))
									{
										vLocal_2731 = {get_entity_coords(Local_3319[iVar0 /*8*/].f_1, 1) + Vector(0.0054f, -0.1f, -0.01f)};
										vLocal_2734 = {get_entity_rotation(Local_3319[iVar0 /*8*/].f_1, 2)};
										stop_playback_recorded_vehicle(Local_3319[iVar0 /*8*/].f_1);
										Local_3319[iVar0 - 1 /*8*/].f_5 = 0;
									}
								}
								if (Local_3319[iVar0 /*8*/].f_3 == 100)
								{
									stop_synchronized_entity_anim(Local_1725[1 /*2*/], 1000f, 1);
									set_vehicle_door_shut(Local_1725[1 /*2*/], false, 1);
								}
								if (!is_playback_going_on_for_vehicle(Local_3319[iVar0 /*8*/].f_1))
								{
									if (Local_3319[iVar0 /*8*/].f_6 == 1)
									{
										if (Local_3319[iVar0 /*8*/].f_3 == 400)
										{
											start_playback_recorded_vehicle(Local_3319[iVar0 /*8*/].f_1, Local_3319[iVar0 /*8*/].f_3, sLocal_1418, 0);
											iVar2 = true;
										}
										else
										{
											fLocal_2743 = 0f;
											vLocal_2737 = {get_position_of_vehicle_recording_at_time(Local_3319[iVar0 /*8*/].f_3, 1000f, "cs2")};
											vLocal_2740 = {get_rotation_of_vehicle_recording_at_time(Local_3319[iVar0 /*8*/].f_3, 1000f, "cs2")};
										}
									}
									else
									{
										start_playback_recorded_vehicle_with_flags(Local_3319[iVar0 /*8*/].f_1, Local_3319[iVar0 /*8*/].f_3, sLocal_1418, 16, 0, 786603);
										iVar2 = true;
									}
									if (iVar2)
									{
										_0x1F2E4E06DEA8992B(Local_3319[iVar0 /*8*/].f_1, 0);
										iVar1 = iLocal_4646 - Local_3319[iVar0 /*8*/].f_2;
										skip_time_in_playback_recorded_vehicle(Local_3319[iVar0 /*8*/].f_1, to_float(iVar1));
									}
									Local_3319[iVar0 /*8*/].f_4 = 1;
								}
							}
						}
					}
					if (Local_3319[iVar0 /*8*/].f_4 == 1 && Local_3319[iVar0 /*8*/].f_5 == 0)
					{
						if (is_vehicle_driveable(Local_3319[iVar0 /*8*/].f_1, 0))
						{
							if (!is_playback_going_on_for_vehicle(Local_3319[iVar0 /*8*/].f_1))
							{
								if (Local_3319[iVar0 /*8*/].f_6 != 1 && Local_3319[iVar0 /*8*/].f_7 != 1)
								{
									freeze_entity_position(Local_3319[iVar0 /*8*/].f_1, true);
								}
								else if (Local_3319[iVar0 /*8*/].f_6)
								{
									if (Local_3319[iVar0 /*8*/].f_3 > 400)
									{
										if (iLocal_4646 - Local_3319[iVar0 /*8*/].f_2 < 2000)
										{
											fLocal_2743 += timestep();
											fVar9 = 1f - cos(fLocal_2743 * 90f);
											if (fLocal_2743 < 1f)
											{
												vVar3 = {vLocal_2731 + vLocal_2737 - vLocal_2731 * Vector(fVar9, fVar9, fVar9)};
												vVar6 = {vLocal_2734 + vLocal_2740 - vLocal_2734 * Vector(fVar9, fVar9, fVar9)};
												freeze_entity_position(Local_3319[iVar0 /*8*/].f_1, true);
												set_entity_coords(Local_3319[iVar0 /*8*/].f_1, vVar3, 1, false, 0, 1);
												set_entity_rotation(Local_3319[iVar0 /*8*/].f_1, vVar6, 2, 1);
											}
											else
											{
												vVar3 = {vLocal_2731 + vLocal_2737 - vLocal_2731 * Vector(fVar9, fVar9, fVar9)};
												vVar6 = {vLocal_2734 + vLocal_2740 - vLocal_2734 * Vector(fVar9, fVar9, fVar9)};
												set_entity_coords_no_offset(Local_3319[iVar0 /*8*/].f_1, vVar3, 0, 0, 1);
												set_entity_rotation(Local_3319[iVar0 /*8*/].f_1, vVar6, 2, 1);
												freeze_entity_position(Local_3319[iVar0 /*8*/].f_1, false);
												start_playback_recorded_vehicle(Local_3319[iVar0 /*8*/].f_1, Local_3319[iVar0 /*8*/].f_3, sLocal_1418, 0);
												iVar1 = iLocal_4646 - Local_3319[iVar0 /*8*/].f_2;
												skip_time_in_playback_recorded_vehicle(Local_3319[iVar0 /*8*/].f_1, to_float(iVar1));
												_0x1F2E4E06DEA8992B(Local_3319[iVar0 /*8*/].f_1, 0);
											}
										}
									}
									else
									{
										freeze_entity_position(Local_3319[iVar0 /*8*/].f_1, true);
									}
								}
							}
							if (!has_vehicle_recording_been_loaded(Local_3319[iVar0 /*8*/].f_3, sLocal_1418))
							{
							}
							if (has_vehicle_recording_been_loaded(Local_3319[iVar0 /*8*/].f_3, sLocal_1418))
							{
								if (IntToFloat(iLocal_4646) < IntToFloat(Local_3319[iVar0 /*8*/].f_2) + get_total_duration_of_vehicle_recording(Local_3319[iVar0 /*8*/].f_3, sLocal_1418))
								{
								}
								else
								{
									if (Local_3319[iVar0 /*8*/].f_6 != 1 && Local_3319[iVar0 /*8*/].f_7 != 1)
									{
										freeze_entity_position(Local_3319[iVar0 /*8*/].f_1, true);
									}
									if (is_playback_going_on_for_vehicle(Local_3319[iVar0 /*8*/].f_1))
									{
										if (get_current_playback_for_vehicle(Local_3319[iVar0 /*8*/].f_1) == get_vehicle_recording_id(Local_3319[iVar0 /*8*/].f_3, sLocal_1418))
										{
											stop_playback_recorded_vehicle(Local_3319[iVar0 /*8*/].f_1);
										}
									}
									if (Local_3319[iVar0 /*8*/].f_6 != 1 && Local_3319[iVar0 /*8*/].f_7 != 1)
									{
										set_vehicle_as_no_longer_needed(&(Local_3319[iVar0 /*8*/].f_1));
										set_model_as_no_longer_needed(Local_3319[iVar0 /*8*/]);
									}
									if (Local_3319[iVar0 /*8*/].f_6 == 1)
									{
										vLocal_2731 = {get_entity_coords(Local_3319[iVar0 /*8*/].f_1, 1) + Vector(0.0054f, -0.1f, -0.01f)};
										vLocal_2734 = {get_entity_rotation(Local_3319[iVar0 /*8*/].f_1, 2)};
									}
									Local_3319[iVar0 /*8*/].f_5 = 1;
								}
							}
						}
					}
				}
				iVar0++;
			}
		}
	}
}

void func_144(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_145(iVar0, iParam0);
		iVar0++;
	}
}

void func_145(int iParam0, int iParam1)
{
	if (iParam1)
	{
		if (!func_102(iParam0, 2, 1))
		{
			func_148(iParam0, 2, 1);
		}
	}
	else if (func_102(iParam0, 2, 1))
	{
		func_146(iParam0, 2, 1);
	}
}

void func_146(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		clear_bit(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_104() == 0)
		{
			iVar0 = func_82(func_103(iParam0), -1, 0);
			clear_bit(&iVar0, iParam1);
			func_147(func_103(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		clear_bit(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_147(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_83(iParam2)];
	if (iVar0 != 0)
	{
		stat_set_int(iVar0, iParam1, iParam3);
	}
}

void func_148(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam2)
	{
		set_bit(&(Global_91330.f_1300[iParam0]), iParam1);
	}
	else if (network_is_game_in_progress())
	{
		if (func_104() == 0)
		{
			iVar0 = func_82(func_103(iParam0), -1, 0);
			set_bit(&iVar0, iParam1);
			func_147(func_103(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		set_bit(&(Global_101154.f_668[iParam0]), iParam1);
	}
}

void func_149()
{
	clear_prints();
	set_current_ped_weapon(player_ped_id(), joaat("weapon_unarmed"), false);
	func_150(0, 0);
	func_911(3);
}

void func_150(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (!Global_55751)
	{
		Global_55751 = iParam1;
	}
	if (iParam0)
	{
		if ((func_818(0) && Global_69735.f_1 == 1) && func_151(Global_69735))
		{
		}
		else
		{
			Global_55749 = 1;
		}
	}
	if (Global_101154.f_7775 || func_818(0))
	{
		iVar0 = func_17();
		uVar1 = Global_82363[iVar0 /*5*/];
		uVar2 = Global_69758.f_109[uVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_101154.f_7775)
			{
			}
			return;
		}
		if (is_bit_set(Global_82363[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (is_bit_set(Global_82363[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		set_bit(&(Global_82363[iVar0 /*5*/].f_1), 4);
		set_bit(&Global_69737, true);
		Global_69753 = uVar2;
		Global_69754 = get_game_timer();
	}
}

bool func_151(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return true;
			break;
		
		case 86:
			return true;
			break;
		
		case 91:
			return true;
			break;
		
		default:
			return false;
			break;
	}
	return false;
}

bool func_152()
{
	func_485(139, 141);
	func_234(0, 80, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_234(1, 81, 0, 0, 0, 1, 0, 1, 0, 1, 0);
	func_161(0, 22, 0, 0, 1, 0, 1, 0);
	func_155(18);
	func_155(19);
	if (func_153(0, 22))
	{
		return true;
	}
	return false;
}

bool func_153(int iParam0, int iParam1)
{
	char[64] cVar0;
	
	if (Local_4019[iParam0 /*4*/] == iParam1)
	{
		if (Local_4019[iParam0 /*4*/].f_1)
		{
			return true;
		}
	}
	else if (Local_4019[iParam0 /*4*/] != 0)
	{
		StringCopy(&cVar0, "", 64);
		StringConCat(&cVar0, "IS_INS_COM() fail:", 64);
		StringConCat(&cVar0, func_154(iParam1), 64);
	}
	return false;
}

char* func_154(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "INS_NULL";
			break;
		
		case 1:
			return "INS_GET_TO_RECEPTION";
			break;
		
		case 2:
			return "INS_FOLLOW_COP";
			break;
		
		case 3:
			return "INS_GET_TO_ROOF";
			break;
		
		case 4:
			return "INS_GET_IN_CHOPPER";
			break;
		
		case 5:
			return "INS_ABANDON_TREVOR";
			break;
		
		case 6:
			return "INS_TEACH_TO_SCAN";
			break;
		
		case 7:
			return "INS_SCAN_FRANKLIN";
			break;
		
		case 8:
			return "INS_SCAN_COMPLETE";
			break;
		
		case 9:
			return "INS_GET_BACK_TO_FRANKLIN";
			break;
		
		case 10:
			return "INS_FOLLOW_CHAD";
			break;
		
		case 11:
			return "INS_SHOW_HIDDEN_HELP";
			break;
		
		case 12:
			return "INS_TURN_ON_THERMAL_VISION";
			break;
		
		case 13:
			return "INS_ZOOM_IN_ON_FRANKLIN";
			break;
		
		case 14:
			return "INS_LOOK_FOR_A_HEAT_SOURCES";
			break;
		
		case 15:
			return "INS_LOOK_FOR_ANOTHER_HEAT_SOURCES";
			break;
		
		case 16:
			return "INS_SWITCH_TO_FRANKLIN";
			break;
		
		case 17:
			return "INS_GET_IN_THE_ZTYPE";
			break;
		
		case 18:
			return "INS_DRIVE_TO_AIRPORT";
			break;
		
		case 19:
			return "INS_DRIVE_TO_DESTINATION";
			break;
		
		case 20:
			return "INS_WARNING_WANTED_LEVEL";
			break;
		
		case 21:
			return "INS_DRIVE_IN_TO_GARAGE";
			break;
		
		case 22:
			return "INS_EXIT_AIRPORT";
			break;
		
		case 23:
			return "INS_RETURN_ZTYPE";
			break;
	}
	return "NO DATA";
}

void func_155(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	switch (iParam0)
	{
		case 1:
			iVar0 = get_interior_at_coords_with_type(442.1297f, -982.7592f, 31.463f, "v_policehub");
			if (is_valid_interior(iVar0))
			{
				if (get_interior_from_entity(player_ped_id()) == iVar0)
				{
					iVar1 = joaat("weapon_unarmed");
					if (get_current_ped_weapon(player_ped_id(), &iVar1, 1))
					{
						if (iVar1 != joaat("weapon_unarmed"))
						{
							if (!func_142(0))
							{
								if (get_room_key_from_entity(player_ped_id()) != get_hash_key("PH_EXTSTRS_ROOM001") && get_room_key_from_entity(player_ped_id()) != get_hash_key("PH_EXTSTRS_ROOM002"))
								{
									set_wanted_level_multiplier(1f);
									set_max_wanted_level(5);
									set_player_wanted_level(player_id(), 3, 0);
									set_player_wanted_level_now(player_id(), 0);
									func_158(iParam0, "CH_F15", 1);
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (get_player_wanted_level(player_id()) != 0)
			{
				iVar0 = get_interior_at_coords_with_type(442.1297f, -982.7592f, 31.463f, "v_policehub");
				if (is_valid_interior(iVar0))
				{
					if (get_interior_from_entity(player_ped_id()) == iVar0)
					{
						if (iLocal_1424 == 0)
						{
							iLocal_1424 = get_game_timer() + 2700;
							iLocal_1423 = 2;
						}
					}
				}
			}
			if (iLocal_1423 == 2)
			{
				if (get_game_timer() > iLocal_1424)
				{
					func_158(iParam0, "CH_F13", 1);
				}
			}
			break;
		
		case 3:
			if (does_entity_exist(Local_1472[5 /*14*/]))
			{
				if (is_ped_injured(Local_1472[5 /*14*/]))
				{
					if (!func_58(13))
					{
						set_wanted_level_multiplier(1f);
						set_max_wanted_level(5);
						set_player_wanted_level(player_id(), 3, 0);
						set_player_wanted_level_now(player_id(), 0);
						func_158(iParam0, "CH_F13", 1);
					}
				}
			}
			break;
		
		case 4:
			if (is_ped_shooting(player_ped_id()))
			{
				if (is_entity_in_angled_area(player_ped_id(), 443.0603f, -943.3536f, 12.57497f, 441.9478f, -1061.535f, 55.02719f, 130.8125f, 0, true, 0))
				{
					set_wanted_level_multiplier(1f);
					set_max_wanted_level(5);
					set_player_wanted_level(player_id(), 3, 0);
					set_player_wanted_level_now(player_id(), 0);
					func_158(iParam0, "CH_F13", 1);
				}
			}
			break;
		
		case 5:
			if (is_explosion_in_angled_area(-1, 443.0603f, -943.3536f, 12.57497f, 441.9478f, -1061.535f, 55.02719f, 130.8125f))
			{
				iVar2 = _get_ped_inside_explosion_area(-1, 443.0603f, -943.3536f, 12.57497f, 441.9478f, -1061.535f, 55.02719f, 130.8125f);
				if (get_ped_index_from_entity_index(iVar2) == player_ped_id())
				{
					set_wanted_level_multiplier(1f);
					set_max_wanted_level(5);
					set_player_wanted_level(player_id(), 3, 0);
					set_player_wanted_level_now(player_id(), 0);
					func_158(iParam0, "CH_F13", 1);
				}
			}
			break;
		
		case 6:
			get_ped_nearby_peds(player_ped_id(), &iLocal_2749, -1);
			iVar3 = 0;
			while (iVar3 < iLocal_2749)
			{
				if (does_entity_exist(iLocal_2749[iVar3]))
				{
					if (!is_ped_injured(iLocal_2749[iVar3]))
					{
						if (is_ped_in_combat(iLocal_2749[iVar3], player_ped_id()) || is_ped_ragdoll(iLocal_2749[iVar3]))
						{
							if (get_interior_from_entity(iLocal_2749[iVar3]) == iLocal_3940)
							{
								func_158(iParam0, "CH_F13", 1);
							}
						}
					}
					else if (get_interior_from_entity(player_ped_id()) == iLocal_3940)
					{
						func_158(iParam0, "CH_F13", 1);
					}
				}
				iVar3++;
			}
			break;
		
		case 7:
			if (does_entity_exist(Local_1725[0 /*2*/]))
			{
				if (!is_vehicle_driveable(Local_1725[0 /*2*/], 0))
				{
					func_158(iParam0, "CH_F01", 1);
				}
			}
			break;
		
		case 8:
			if (func_157(player_ped_id(), 422f, -978f, 30f, 1) > 100f && (!is_vehicle_driveable(Local_1725[0 /*2*/], 0) || (is_vehicle_driveable(Local_1725[0 /*2*/], 0) && !is_ped_in_vehicle(player_ped_id(), Local_1725[0 /*2*/], 0))))
			{
				func_158(iParam0, "CH_F14", 0);
			}
			break;
		
		case 9:
			if (is_vehicle_driveable(Local_1725[0 /*2*/], 0))
			{
				if (!is_ped_in_vehicle(player_ped_id(), Local_1725[0 /*2*/], 0))
				{
					if (is_entity_in_angled_area(Local_1725[0 /*2*/], 476.3787f, -987.3391f, 45.75825f, 430.2201f, -986.7795f, 79.07014f, 31.125f, 0, true, 0))
					{
						func_158(iParam0, "CH_F18", 0);
					}
				}
			}
			break;
		
		case 10:
			if (is_vehicle_driveable(Local_1725[2 /*2*/], 0))
			{
				if (get_entity_health(Local_1725[2 /*2*/]) < 820)
				{
					func_158(iParam0, "CH_F07", 0);
				}
				if (((is_vehicle_door_damaged(Local_1725[2 /*2*/], false) || is_vehicle_door_damaged(Local_1725[2 /*2*/], true)) || is_vehicle_door_damaged(Local_1725[2 /*2*/], 2)) || is_vehicle_door_damaged(Local_1725[2 /*2*/], 3))
				{
					func_158(iParam0, "CH_F07", 0);
				}
			}
			break;
		
		case 11:
			if (is_vehicle_driveable(Local_1725[2 /*2*/], 0))
			{
				if (func_156(player_ped_id(), Local_1725[2 /*2*/], 1) > 150f)
				{
					func_158(iParam0, "CH_F08", 0);
				}
			}
			break;
		
		case 12:
			if (func_58(127))
			{
				func_158(iParam0, "CH_F20", 0);
			}
			break;
		
		case 17:
			if (func_58(44))
			{
				func_158(iParam0, "CH_F19", 0);
			}
			break;
		
		case 18:
			if (does_entity_exist(Local_1725[5 /*2*/]))
			{
				if (!is_vehicle_driveable(Local_1725[5 /*2*/], 0))
				{
					func_158(iParam0, "CH_F21", 0);
				}
				else if (has_entity_been_damaged_by_entity(Local_1725[5 /*2*/], player_ped_id(), 1))
				{
					func_158(iParam0, "CH_F23", 0);
				}
			}
			break;
		
		case 19:
			if ((((does_entity_exist(Local_1472[6 /*14*/]) && has_entity_been_damaged_by_entity(Local_1472[6 /*14*/], player_ped_id(), 1)) || (does_entity_exist(Local_1472[7 /*14*/]) && has_entity_been_damaged_by_entity(Local_1472[7 /*14*/], player_ped_id(), 1))) || (does_entity_exist(Local_1472[8 /*14*/]) && has_entity_been_damaged_by_entity(Local_1472[8 /*14*/], player_ped_id(), 1))) || (does_entity_exist(Local_1472[9 /*14*/]) && has_entity_been_damaged_by_entity(Local_1472[9 /*14*/], player_ped_id(), 1)))
			{
				func_158(iParam0, "CH_F24", 0);
			}
			break;
		
		case 13:
			if (is_vehicle_driveable(Local_1725[2 /*2*/], 0))
			{
				if ((is_vehicle_stuck_timer_up(Local_1725[2 /*2*/], 3, 30000) || is_vehicle_stuck_timer_up(Local_1725[2 /*2*/], 2, 30000)) || is_vehicle_stuck_timer_up(Local_1725[2 /*2*/], 0, 7000))
				{
					func_158(iParam0, "CH_F12", 0);
				}
			}
			break;
		
		case 14:
			if (does_entity_exist(iLocal_2748))
			{
				if (is_ped_injured(iLocal_2748))
				{
					func_158(iParam0, "CH_F21", 0);
				}
			}
			break;
		
		case 16:
			if (func_58(133))
			{
				if (get_player_wanted_level(player_id()) > 0)
				{
					func_158(iParam0, "CH_F25", 0);
				}
			}
			break;
		
		case 15:
			if (func_58(121))
			{
				if (does_entity_exist(iLocal_2748))
				{
					if (!is_ped_injured(iLocal_2748))
					{
						if (has_entity_been_damaged_by_entity(iLocal_2748, player_ped_id(), 1) || get_script_task_status(iLocal_2748, 1785177548) == 2)
						{
							iVar4 = 1;
						}
					}
				}
				if (does_entity_exist(Local_1472[6 /*14*/]))
				{
					if (is_ped_injured(Local_1472[6 /*14*/]))
					{
						iVar4 = 1;
					}
					else if (has_entity_been_damaged_by_entity(Local_1472[6 /*14*/], player_ped_id(), 1) || get_script_task_status(Local_1472[6 /*14*/], 993674639) == 2)
					{
						iVar4 = 1;
					}
				}
				if (does_entity_exist(Local_1472[7 /*14*/]))
				{
					if (is_ped_injured(Local_1472[7 /*14*/]))
					{
						iVar4 = 1;
					}
					else if (has_entity_been_damaged_by_entity(Local_1472[7 /*14*/], player_ped_id(), 1) || get_script_task_status(Local_1472[7 /*14*/], 993674639) == 2)
					{
						iVar4 = 1;
					}
				}
				if (does_entity_exist(Local_1472[8 /*14*/]))
				{
					if (is_ped_injured(Local_1472[8 /*14*/]))
					{
						iVar4 = 1;
					}
					else if (has_entity_been_damaged_by_entity(Local_1472[8 /*14*/], player_ped_id(), 1) || get_script_task_status(Local_1472[8 /*14*/], 993674639) == 2)
					{
						iVar4 = 1;
					}
				}
				if (does_entity_exist(Local_1725[5 /*2*/]))
				{
					if (!is_vehicle_driveable(Local_1725[5 /*2*/], 0))
					{
						iVar4 = 1;
					}
					else if (get_entity_health(Local_1725[5 /*2*/]) < 1000)
					{
						iVar4 = 1;
					}
				}
				if (does_entity_exist(Local_1725[4 /*2*/]))
				{
					if (!is_vehicle_driveable(Local_1725[4 /*2*/], 0))
					{
						iVar4 = 1;
					}
					else if (get_entity_health(Local_1725[4 /*2*/]) < 1000)
					{
						iVar4 = 1;
					}
				}
				if (does_entity_exist(Local_1725[12 /*2*/]))
				{
					if (!is_vehicle_driveable(Local_1725[12 /*2*/], 0))
					{
						iVar4 = 1;
					}
					else if (get_entity_health(Local_1725[4 /*2*/]) < 1000)
					{
						iVar4 = 1;
					}
				}
				if (does_entity_exist(Local_1725[13 /*2*/]))
				{
					if (!is_vehicle_driveable(Local_1725[13 /*2*/], 0))
					{
						iVar4 = 1;
					}
					else if (get_entity_health(Local_1725[13 /*2*/]) < 1000)
					{
						iVar4 = 1;
					}
				}
				if (iVar4 && iLocal_4016 == 0)
				{
					func_158(iParam0, "CH_F22", 1);
					if (!is_ped_injured(Local_1472[8 /*14*/]))
					{
						task_smart_flee_ped(Local_1472[8 /*14*/], player_ped_id(), 100f, -1, 0, 0);
						set_ped_keep_task(Local_1472[8 /*14*/], true);
					}
					if (!is_ped_injured(iLocal_2748))
					{
						task_smart_flee_ped(iLocal_2748, player_ped_id(), 100f, -1, 0, 0);
						set_ped_keep_task(iLocal_2748, true);
					}
					if (!is_ped_injured(Local_1472[6 /*14*/]))
					{
						give_weapon_to_ped(Local_1472[6 /*14*/], joaat("weapon_microsmg"), 1000, false, true);
						task_combat_ped(Local_1472[6 /*14*/], player_ped_id(), 0, 16);
						set_ped_keep_task(Local_1472[6 /*14*/], true);
					}
					if (!is_ped_injured(Local_1472[7 /*14*/]))
					{
						give_weapon_to_ped(Local_1472[7 /*14*/], joaat("weapon_microsmg"), 1000, false, true);
						task_combat_ped(Local_1472[7 /*14*/], player_ped_id(), 0, 16);
						set_ped_keep_task(Local_1472[7 /*14*/], true);
					}
				}
			}
			break;
	}
	if (iLocal_4016 != 0)
	{
		if (iLocal_4017 && fLocal_4015 < 2f)
		{
			fLocal_4015 += timestep();
		}
		else
		{
			func_1(sLocal_4018);
		}
	}
}

float func_156(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
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

float func_157(int iParam0, vector3 vParam1, int iParam2)
{
	vector3 vVar0;
	
	if (!is_entity_dead(iParam0, 0))
	{
		vVar0 = {get_entity_coords(iParam0, 1)};
	}
	else
	{
		vVar0 = {get_entity_coords(iParam0, 0)};
	}
	return get_distance_between_coords(vVar0, vParam1, iParam4);
}

void func_158(int iParam0, char* sParam1, int iParam2)
{
	if (!func_44("cs2_cop5"))
	{
		func_159(0);
	}
	if (!iLocal_4017)
	{
		iLocal_4016 = iParam0;
		sLocal_4018 = sParam1;
		iLocal_4017 = iParam2;
	}
}

void func_159(int iParam0)
{
	iLocal_4000 = 0;
	StringCopy(&cLocal_3944, "", 24);
	StringCopy(&cLocal_3950, "", 24);
	if (iParam0)
	{
		func_45();
	}
	else
	{
		func_38();
		func_160();
	}
}

void func_160()
{
	Global_14578 = 0;
	func_36();
}

void func_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	if (Local_4019[iParam0 /*4*/] != iParam1)
	{
		Local_4019[iParam0 /*4*/].f_1 = 0;
		Local_4019[iParam0 /*4*/] = iParam1;
	}
	if (!Local_4019[iParam0 /*4*/].f_1)
	{
		if (func_229(iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, 1, 0))
		{
			switch (Local_4019[iParam0 /*4*/])
			{
				case 1:
					func_228("CH_POL1", 7500, 1);
					iLocal_3934 = func_227(441.02f, -978.93f, 30.69f, 0);
					Local_4019[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 2:
					switch (Local_4019[iParam0 /*4*/].f_2)
					{
						case 0:
							if (does_blip_exist(iLocal_3934))
							{
								remove_blip(&iLocal_3934);
							}
							if (!is_ped_injured(Local_1472[5 /*14*/]))
							{
								iLocal_3934 = func_226(Local_1472[5 /*14*/], 0, 145);
							}
							Local_4019[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (!func_50())
							{
								func_228("CH_POL2", 7500, 1);
								Local_4019[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 3:
					switch (Local_4019[iParam0 /*4*/].f_2)
					{
						case 0:
							if (does_blip_exist(iLocal_3934))
							{
								remove_blip(&iLocal_3934);
							}
							if (func_225("CH_POL2", 0, 0))
							{
								clear_prints();
							}
							func_224(1, 2, 1);
							iLocal_3934 = func_227(463.5469f, -984.1166f, 42.6919f, 0);
							Local_4019[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (!func_50())
							{
								func_228("CH_POL3", 7500, 1);
								Local_4019[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 4:
					if (is_vehicle_driveable(Local_1725[0 /*2*/], 0))
					{
						switch (Local_4019[iParam0 /*4*/].f_2)
						{
							case 0:
								if (does_blip_exist(iLocal_3934))
								{
									remove_blip(&iLocal_3934);
								}
								if (is_valid_interior(iLocal_3940))
								{
									unpin_interior(iLocal_3940);
								}
								iLocal_3934 = func_221(Local_1725[0 /*2*/], 0, 0);
								Local_4019[iParam0 /*4*/].f_2++;
								break;
							
							case 1:
								if (!is_ped_getting_into_a_vehicle(player_ped_id()) && !is_ped_in_vehicle(player_ped_id(), Local_1725[0 /*2*/], 0))
								{
									if (!func_50())
									{
										if (func_225("CH_POL3", 0, 0))
										{
											clear_prints();
										}
										func_228("CH_INS1", 1, 1);
									}
								}
								else if (is_ped_in_vehicle(player_ped_id(), Local_1725[0 /*2*/], 0))
								{
									if (does_blip_exist(iLocal_3934))
									{
										remove_blip(&iLocal_3934);
										Local_4019[iParam0 /*4*/].f_2++;
									}
								}
								break;
							
							case 2:
								if (!is_ped_in_vehicle(player_ped_id(), Local_1725[0 /*2*/], 0))
								{
									iLocal_3934 = func_221(Local_1725[0 /*2*/], 0, 0);
									Local_4019[iParam0 /*4*/].f_2++;
								}
								break;
							
							case 3:
								if (is_ped_in_vehicle(player_ped_id(), Local_1725[0 /*2*/], 0))
								{
									remove_blip(&iLocal_3934);
									Local_4019[iParam0 /*4*/].f_2 = 2;
								}
								break;
							}
					}
					break;
				
				case 5:
					func_228("CH_INS50", 7500, 1);
					Local_4019[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 6:
					switch (Local_4019[iParam0 /*4*/].f_2)
					{
						case 0:
							func_136("CH_INS3");
							Local_4019[iParam0 /*4*/].f_3 = get_game_timer() + 8000;
							Local_4019[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (func_135("CH_INS3"))
							{
								if (iLocal_3133 == 0)
								{
									iLocal_3133 = get_game_timer() + 3000;
								}
								if (absf(get_disabled_control_normal(0, 291)) > 0.1f || absf(get_disabled_control_normal(0, 290)) > 0.1f)
								{
									iLocal_3132 += floor(1000f * timestep());
									if (!iLocal_3135)
									{
										iLocal_3135 = 1;
										iLocal_3134++;
									}
								}
								else
								{
									iLocal_3135 = 0;
								}
								if ((iLocal_3132 > 3000 || iLocal_3134 >= 2) || get_game_timer() > Local_4019[iParam0 /*4*/].f_3)
								{
									if (get_game_timer() > iLocal_3133)
									{
										iLocal_3135 = 0;
										iLocal_3134 = 0;
										iLocal_3133 = 0;
										iLocal_3132 = 0;
										Local_4019[iParam0 /*4*/].f_2++;
										clear_help(1);
									}
								}
							}
							else
							{
								clear_help(1);
								Local_4019[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 2:
							func_136("CH_INS4");
							Local_4019[iParam0 /*4*/].f_2++;
							break;
						
						case 3:
							if (func_135("CH_INS4"))
							{
								if (iLocal_3133 == 0)
								{
									iLocal_3133 = get_game_timer() + 3000;
									Local_4019[iParam0 /*4*/].f_3 = get_game_timer() + 8000;
								}
								if (absf(get_disabled_control_normal(0, 39)) >= 0.05f)
								{
									iLocal_3132 += floor(1000f * timestep());
									if (!iLocal_3135)
									{
										iLocal_3135 = 1;
										iLocal_3134++;
									}
								}
								else
								{
									iLocal_3135 = 0;
								}
								if ((iLocal_3132 > 3000 || iLocal_3134 >= 2) || get_game_timer() > Local_4019[iParam0 /*4*/].f_3)
								{
									if (get_game_timer() > iLocal_3133)
									{
										iLocal_3135 = 0;
										iLocal_3134 = 0;
										iLocal_3133 = 0;
										iLocal_3132 = 0;
										clear_help(1);
										Local_4019[iParam0 /*4*/].f_2 = 6;
									}
								}
							}
							else
							{
								Local_4019[iParam0 /*4*/].f_2 = 6;
							}
							break;
						
						case 4:
							func_220("CH_INS4", -1);
							Local_4019[iParam0 /*4*/].f_2 = 6;
							break;
						
						case 5:
							if (func_135("CH_INS5"))
							{
								if (Local_2194.f_40 < 20f)
								{
									clear_help(1);
									Local_4019[iParam0 /*4*/].f_2++;
								}
							}
							else
							{
								Local_4019[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 6:
							func_220("CH_INS6d", 5500);
							Local_4019[iParam0 /*4*/].f_2++;
							break;
						
						case 7:
							if (!func_135("CH_INS6d"))
							{
								Local_4019[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 7:
					if (!is_ped_injured(Local_1472[4 /*14*/]))
					{
						switch (Local_4019[iParam0 /*4*/].f_2)
						{
							case 0:
								func_220("CH_INS7b", -1);
								func_228("CH_INS7", 7500, 1);
								func_219(&Local_2194);
								func_822(&Local_2194, Local_1472[4 /*14*/], 1, 3, 0, 1, 0, 1, 0);
								func_821(&Local_2194, Local_1472[4 /*14*/], "CH_NAME", 3);
								Local_4019[iParam0 /*4*/].f_2++;
								break;
							
							case 1:
								if (is_entity_on_screen(Local_1472[4 /*14*/]))
								{
									Local_4019[iParam0 /*4*/].f_3 += floor(1000f * timestep());
									if (Local_4019[iParam0 /*4*/].f_3 > 5000)
									{
										iLocal_3132 = 0;
										clear_help(1);
									}
								}
								if (!is_help_message_being_displayed())
								{
									func_220("CH_INS8c", 5000);
									Local_4019[iParam0 /*4*/].f_3 = 0;
									Local_4019[iParam0 /*4*/].f_2++;
								}
								break;
							
							case 2:
								if (func_135("CH_INS8c"))
								{
									if (is_entity_on_screen(Local_1472[4 /*14*/]))
									{
										if (Local_2194.f_128 == 1 || func_60(&Local_2194, Local_1472[4 /*14*/]))
										{
											Local_4019[iParam0 /*4*/].f_3 += floor(1000f * timestep());
											if (Local_4019[iParam0 /*4*/].f_3 > 5000)
											{
												iLocal_3132 = 0;
												clear_help(1);
												Local_4019[iParam0 /*4*/].f_2++;
											}
										}
									}
								}
								else
								{
									if (func_218(&Local_2194, &iVar0))
									{
										Local_4019[iParam0 /*4*/].f_2 = 5;
									}
									else
									{
										Local_4019[iParam0 /*4*/].f_2++;
									}
									Local_4019[iParam0 /*4*/].f_3 = get_game_timer() + 3000;
									func_220("CH_INS7c", 13000);
								}
								break;
							
							case 3:
							case 4:
							case 5:
								if (func_60(&Local_2194, Local_1472[4 /*14*/]) || Local_2194.f_128 == 1)
								{
									Local_4019[iParam0 /*4*/].f_1 = 1;
								}
								else if (!is_help_message_being_displayed())
								{
									if (get_game_timer() > Local_4019[iParam0 /*4*/].f_3)
									{
										if (func_156(player_ped_id(), Local_1472[4 /*14*/], 0) < 550f)
										{
											if (func_218(&Local_2194, &iVar1))
											{
												if (Local_4019[iParam0 /*4*/].f_2 < 5)
												{
													clear_help(1);
													func_220("CH_INS7c", -1);
													Local_4019[iParam0 /*4*/].f_2 = 5;
												}
											}
											else if (Local_4019[iParam0 /*4*/].f_2 < 4)
											{
												func_220("CH_INS4", -1);
												Local_4019[iParam0 /*4*/].f_2 = 4;
											}
										}
									}
								}
								break;
							}
					}
					break;
				
				case 8:
					Local_4019[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 9:
					break;
				
				case 10:
					func_217("CH_INS13", 6000, 1);
					Local_4019[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 11:
					func_220("CH_INS41", -1);
					Local_4019[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 12:
					switch (Local_4019[iParam0 /*4*/].f_2)
					{
						case 0:
							func_136("CH_INS31");
							func_872(16, 14, 0);
							Local_4019[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (iLocal_3163 == 1)
							{
								clear_help(1);
								func_220("CH_INS32", -1);
								Local_4019[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 2:
							if (!func_50())
							{
								if (!func_58(83))
								{
									func_228("CH_INS30", 7500, 1);
									Local_4019[iParam0 /*4*/].f_1 = 1;
								}
								else
								{
									Local_4019[iParam0 /*4*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 13:
					switch (Local_4019[iParam0 /*4*/].f_2)
					{
						case 0:
							func_228("CH_ZOOM", 7500, 1);
							Local_4019[iParam0 /*4*/].f_2 = 2;
							break;
						
						case 2:
							if (!func_225("CH_ZOOM", 0, 0))
							{
								Local_4019[iParam0 /*4*/].f_3 = get_game_timer() + 1500;
								Local_4019[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 3:
							if (get_game_timer() > Local_4019[iParam0 /*4*/].f_3)
							{
								func_228("CH_ZOOMC", 7500, 1);
								Local_4019[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 14:
					switch (Local_4019[iParam0 /*4*/].f_2)
					{
						case 0:
							func_228("CH_INS32b", 7500, 1);
							func_220("CH_ZOOMb", -1);
							Local_4019[iParam0 /*4*/].f_2++;
							Local_4019[iParam0 /*4*/].f_3 = get_game_timer() + 2500;
							break;
						
						case 1:
							if (get_game_timer() > Local_4019[iParam0 /*4*/].f_3)
							{
								Local_4019[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 2:
							if (func_58(100))
							{
								if (func_225("CH_INS32b", 0, 0))
								{
									clear_prints();
								}
								Local_4019[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 15:
					switch (Local_4019[iParam0 /*4*/].f_2)
					{
						case 0:
							if (func_58(99))
							{
								Local_4019[iParam0 /*4*/].f_3 = get_game_timer() + 1000;
								Local_4019[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 1:
							if (get_game_timer() > Local_4019[iParam0 /*4*/].f_3)
							{
								if (!func_50())
								{
									func_228("CH_INS32c", 7500, 1);
									Local_4019[iParam0 /*4*/].f_2++;
								}
							}
							else if (func_58(100))
							{
								Local_4019[iParam0 /*4*/].f_2++;
							}
							break;
					}
					break;
				
				case 16:
					func_228("CH_INS39", 7500, 1);
					Local_4019[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 17:
					switch (Local_4019[iParam0 /*4*/].f_2)
					{
						case 0:
							func_228("CH_GET", 7500, 1);
							iLocal_3934 = func_221(Local_1725[2 /*2*/], 0, 0);
							Local_4019[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (func_58(113) && func_58(115))
							{
								if (func_225("CH_GET", 0, 0))
								{
									clear_prints();
								}
								_0x293220DA1B46CEBC(5f, 10f, 4);
								Local_4019[iParam0 /*4*/].f_1 = 1;
							}
							else if (is_vehicle_driveable(Local_1725[2 /*2*/], 0))
							{
								if (is_ped_in_vehicle(player_ped_id(), Local_1725[2 /*2*/], 0))
								{
									if (func_225("CH_GET", 0, 0))
									{
										clear_prints();
									}
									if (does_blip_exist(iLocal_3934))
									{
										remove_blip(&iLocal_3934);
									}
								}
								else if (!does_blip_exist(iLocal_3934))
								{
									iLocal_3934 = func_221(Local_1725[2 /*2*/], 0, 0);
								}
							}
							break;
					}
					break;
				
				case 18:
					switch (Local_4019[iParam0 /*4*/].f_2)
					{
						case 0:
							clear_prints();
							if (does_blip_exist(iLocal_3934))
							{
								remove_blip(&iLocal_3934);
							}
							if (is_vehicle_driveable(Local_1725[2 /*2*/], 0))
							{
								func_216(Local_1725[2 /*2*/], -1);
								func_215(Local_1725[2 /*2*/], -1);
							}
							Local_4019[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (func_58(115))
							{
								set_audio_flag("AllowScoreAndRadio", 1);
								func_213(14, 0);
								Local_4019[iParam0 /*4*/].f_2++;
								Local_4019[iParam0 /*4*/].f_3 = get_game_timer() + 5500;
								func_212(2, 1);
							}
							break;
						
						case 2:
							if (Local_4019[iParam0 /*4*/].f_3 != 0)
							{
								if (get_game_timer() > Local_4019[iParam0 /*4*/].f_3)
								{
									Local_4019[iParam0 /*4*/].f_3 = 0;
									set_audio_flag("AllowScoreAndRadio", 0);
								}
							}
							if (is_vehicle_driveable(Local_1725[2 /*2*/], 0))
							{
								fVar3 = get_entity_speed(Local_1725[2 /*2*/]);
								fVar2 = fVar3 * 0.2f;
								if (fVar2 < 3f)
								{
									fVar2 = 3f;
								}
								fVar2 += 2f;
								if (func_157(Local_1725[2 /*2*/], -968.4945f, -2798.293f, 12.9648f, 1) < fVar2 || func_211(&iLocal_3138, vLocal_1466, 2f, 2f, 5f, 1, Local_1725[2 /*2*/], "CH_INS53", "CMN_GENGETIN", "CMN_GENGETBCK", 1, 0, 1, -1))
								{
									if (get_player_wanted_level(player_id()) == 0)
									{
										Local_4019[iParam0 /*4*/].f_2++;
									}
								}
								else if (func_58(114))
								{
									Local_4019[iParam0 /*4*/].f_1 = 1;
								}
							}
							break;
						
						case 3:
							if (func_210(Local_1725[2 /*2*/], 3f, 2, 1056964608, 0, 1, 0))
							{
								Local_4019[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 19:
					switch (Local_4019[iParam0 /*4*/].f_2)
					{
						case 0:
							if (is_vehicle_driveable(Local_1725[2 /*2*/], 0))
							{
								if (func_211(&iLocal_3138, vLocal_1463, 2f, 2f, 2f, 1, Local_1725[2 /*2*/], "CH_INS25", "CMN_GENGETIN", "CMN_GENGETBCK", 1, 0, 1, -1))
								{
									Local_4019[iParam0 /*4*/].f_1 = 1;
								}
							}
							break;
					}
					break;
				
				case 20:
					switch (Local_4019[iParam0 /*4*/].f_2)
					{
						case 0:
							if (func_209(5, 71))
							{
								func_228("CH_COPS", 7500, 1);
								Local_4019[iParam0 /*4*/].f_2++;
								Local_4019[iParam0 /*4*/].f_3 = get_game_timer() + 12000;
							}
							break;
						
						case 1:
							if (!func_225("CH_COPS", 0, 0))
							{
								func_228("CH_COPS2", 7500, 1);
								Local_4019[iParam0 /*4*/].f_2++;
							}
							break;
						
						case 2:
							if (get_game_timer() > Local_4019[iParam0 /*4*/].f_3 && func_157(player_ped_id(), vLocal_1463, 1) > 300f)
							{
								if (is_vehicle_driveable(Local_1725[2 /*2*/], 0))
								{
									set_max_wanted_level(5);
									set_player_wanted_level(player_id(), 2, 0);
									set_player_wanted_level_now(player_id(), 0);
									Local_4019[iParam0 /*4*/].f_2++;
									Local_4019[iParam0 /*4*/].f_3 = get_game_timer() + 2000;
								}
							}
							break;
						
						case 3:
							if (!func_50())
							{
								play_police_report("SCRIPTED_SCANNER_REPORT_CAR_STEAL_2_01", 0f);
								Local_4019[iParam0 /*4*/].f_1 = 1;
							}
							break;
					}
					break;
				
				case 21:
					func_228("CH_INS38", 7500, 1);
					Local_4019[iParam0 /*4*/].f_1 = 1;
					break;
				
				case 22:
					switch (Local_4019[iParam0 /*4*/].f_2)
					{
						case 0:
							func_206(&iLocal_3138, 1, 0);
							func_205(&iLocal_3138, 0);
							Local_4019[1 /*4*/].f_2 = 0;
							Local_4019[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if ((func_163(&iLocal_3138, -951.5104f, -2785.983f, 12.9648f, Global_19, 1, "CH_INS51", 0, 1, -1) || !func_162(get_entity_coords(player_ped_id(), 1), 2, 0, 0)) && !is_entity_in_angled_area(player_ped_id(), -1000.982f, -2863.638f, 12.02729f, -962.7838f, -2797.051f, 21.38574f, 41.75f, 0, true, 0))
							{
								Local_4019[iParam0 /*4*/].f_1 = 1;
								func_206(&iLocal_3138, 1, 0);
								func_205(&iLocal_3138, 0);
							}
							break;
					}
					break;
				
				case 23:
					switch (Local_4019[iParam0 /*4*/].f_2)
					{
						case 0:
							func_206(&iLocal_3138, 1, 0);
							func_205(&iLocal_3138, 0);
							Local_4019[0 /*4*/].f_2 = 0;
							Local_4019[iParam0 /*4*/].f_2++;
							break;
						
						case 1:
							if (func_211(&iLocal_3138, vLocal_1463, Global_19, 1, Local_1725[2 /*2*/], "CH_INS52", "CMN_GENGETIN", "CMN_GENGETBCK", 0, 0, 1, -1))
							{
								Local_4019[iParam0 /*4*/].f_1 = 1;
								func_206(&iLocal_3138, 1, 0);
								func_205(&iLocal_3138, 0);
							}
							break;
					}
					break;
				}
			}
	}
}

bool func_162(vector3 vParam0, int iParam1, int iParam2, int iParam3)
{
	vector3[] vVar0 = new vector3[15];
	vector3[] vVar46 = new vector3[15];
	float[] fVar92 = new float[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			vVar0[0 /*3*/] = {-1332.211f, 100.4608f, 40.38437f};
			vVar46[0 /*3*/] = {-1094.238f, 148.4274f, 73f};
			fVar92[0] = 171.25f;
			vVar0[1 /*3*/] = {-999.7344f, -110.2231f, 25.25706f};
			vVar46[1 /*3*/] = {-1149.494f, 109.2558f, 73f};
			fVar92[1] = 132f;
			vVar0[2 /*3*/] = {-1035.113f, -84.95885f, 28.2746f};
			vVar46[2 /*3*/] = {-1261.103f, 50.08148f, 73f};
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = {-804.3439f, -3346.5f, 10f};
			vVar46[0 /*3*/] = {-1816.954f, -2768.893f, IntToFloat(250 + iParam4)};
			fVar92[0] = 247f;
			vVar0[1 /*3*/] = {-1911.488f, -2934.197f, 10f};
			vVar46[1 /*3*/] = {-968.6236f, -3477.748f, IntToFloat(250 + iParam4)};
			fVar92[1] = 149f;
			vVar0[2 /*3*/] = {-844.9433f, -2802.785f, 10f};
			vVar46[2 /*3*/] = {-1011.081f, -3086.904f, IntToFloat(250 + iParam4)};
			fVar92[2] = 185.5f;
			vVar0[3 /*3*/] = {-1021.086f, -2952.277f, 10f};
			vVar46[3 /*3*/] = {-1599.008f, -2616.271f, IntToFloat(250 + iParam4)};
			fVar92[3] = 250f;
			vVar0[4 /*3*/] = {-1027.136f, -2436.457f, 10f};
			vVar46[4 /*3*/] = {-1392.61f, -2226.763f, IntToFloat(250 + iParam4)};
			fVar92[4] = 193.5f;
			vVar0[5 /*3*/] = {-1497.549f, -2408.712f, 10f};
			vVar46[5 /*3*/] = {-1136.917f, -2617.955f, IntToFloat(250 + iParam4)};
			fVar92[5] = 234.5f;
			vVar0[6 /*3*/] = {-982.7924f, -2831.709f, 12.93313f};
			vVar46[6 /*3*/] = {-966.4677f, -2803.458f, 16.68313f};
			fVar92[6] = 16f;
			vVar0[7 /*3*/] = {-1110.083f, -3496.806f, 12f};
			vVar46[7 /*3*/] = {-1955.298f, -3010.431f, IntToFloat(250 + iParam4)};
			fVar92[7] = 80f;
			vVar0[8 /*3*/] = {-1886.899f, -3193.024f, 12f};
			vVar46[8 /*3*/] = {-1836.143f, -3105.268f, IntToFloat(250 + iParam4)};
			fVar92[8] = 142f;
			vVar0[9 /*3*/] = {-1134.337f, -3535.648f, 12f};
			vVar46[9 /*3*/] = {-1259.649f, -3463.486f, IntToFloat(250 + iParam4)};
			fVar92[9] = 30.75f;
			vVar0[10 /*3*/] = {-969.1279f, -3463.899f, 12f};
			vVar46[10 /*3*/] = {-896.3734f, -3505.715f, IntToFloat(250 + iParam4)};
			fVar92[10] = 150f;
			vVar0[11 /*3*/] = {-1369.491f, -2173.579f, 10f};
			vVar46[11 /*3*/] = {-1685.626f, -2720.364f, IntToFloat(250 + iParam4)};
			fVar92[11] = 29.25f;
			vVar0[12 /*3*/] = {-1010.926f, -3550.943f, 10f};
			vVar46[12 /*3*/] = {-1110.198f, -3493.617f, IntToFloat(250 + iParam4)};
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = {-1773.944f, 3287.334f, 30f};
			vVar46[0 /*3*/] = {-2029.776f, 2845.083f, IntToFloat(250 + iParam4)};
			fVar92[0] = 250f;
			vVar0[1 /*3*/] = {-2725.889f, 3291.099f, 30f};
			vVar46[1 /*3*/] = {-2009.182f, 2879.835f, IntToFloat(250 + iParam4)};
			fVar92[1] = 180f;
			vVar0[2 /*3*/] = {-2442.026f, 3326.699f, 30f};
			vVar46[2 /*3*/] = {-2033.928f, 3089.049f, IntToFloat(250 + iParam4)};
			fVar92[2] = 200f;
			vVar0[3 /*3*/] = {-1917.165f, 3374.209f, 30f};
			vVar46[3 /*3*/] = {-2016.791f, 3195.058f, IntToFloat(250 + iParam4)};
			fVar92[3] = 86.25f;
			vVar0[4 /*3*/] = {-2192.753f, 3373.278f, 30f};
			vVar46[4 /*3*/] = {-2191.544f, 3150.417f, IntToFloat(250 + iParam4)};
			fVar92[4] = 140.5f;
			vVar0[5 /*3*/] = {-2077.663f, 3344.514f, 30f};
			vVar46[5 /*3*/] = {-2191.544f, 3150.417f, IntToFloat(250 + iParam4)};
			fVar92[5] = 140.5f;
			vVar0[6 /*3*/] = {-2861.755f, 3352.661f, 30f};
			vVar46[6 /*3*/] = {-2715.871f, 3269.916f, IntToFloat(250 + iParam4)};
			fVar92[6] = 90f;
			vVar0[7 /*3*/] = {-2005.574f, 3364.533f, 30f};
			vVar46[7 /*3*/] = {-1977.569f, 3330.888f, IntToFloat(250 + iParam4)};
			fVar92[7] = 100f;
			vVar0[8 /*3*/] = {-1682.235f, 3004.285f, 30f};
			vVar46[8 /*3*/] = {-1942.747f, 2947.441f, IntToFloat(250 + iParam4)};
			fVar92[8] = 248.75f;
			vVar0[9 /*3*/] = {-2393.295f, 2936.406f, 31.6801f};
			vVar46[9 /*3*/] = {-2453.037f, 3006.863f, 52.31003f};
			fVar92[9] = 128f;
			vVar0[10 /*3*/] = {-2347.185f, 3023.83f, 31.56573f};
			vVar46[10 /*3*/] = {-2517.33f, 2989.063f, 49.95644f};
			fVar92[10] = 127.25f;
			vVar0[11 /*3*/] = {-2259.922f, 3358.04f, 29.99972f};
			vVar46[11 /*3*/] = {-2299.772f, 3385.79f, 38.06014f};
			fVar92[11] = 16f;
			vVar0[12 /*3*/] = {-2476.309f, 3363.914f, 31.67933f};
			vVar46[12 /*3*/] = {-2431.981f, 3287.669f, 39.97826f};
			fVar92[12] = 214.25f;
			vVar0[13 /*3*/] = {-2103.081f, 2797.783f, 29.37864f};
			vVar46[13 /*3*/] = {-2096.821f, 2874.423f, 57.80989f};
			fVar92[13] = 65.75f;
			if (iParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			vVar46[9 /*3*/].f_2 += IntToFloat(iVar111);
			vVar46[10 /*3*/].f_2 += IntToFloat(iVar111);
			vVar46[11 /*3*/].f_2 += IntToFloat(iVar111);
			vVar46[12 /*3*/].f_2 += IntToFloat(iVar111);
			vVar46[13 /*3*/].f_2 += IntToFloat(iVar111);
			iVar108 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = {1541.607f, 2527.555f, 40f};
			vVar46[0 /*3*/] = {1815.575f, 2535.06f, IntToFloat(150 + iParam4)};
			fVar92[0] = 114f;
			vVar0[1 /*3*/] = {1788.879f, 2445.727f, 40f};
			vVar46[1 /*3*/] = {1716.96f, 2502.957f, IntToFloat(150 + iParam4)};
			fVar92[1] = 88.5f;
			vVar0[2 /*3*/] = {1601.157f, 2436.244f, 40f};
			vVar46[2 /*3*/] = {1650.078f, 2515.923f, IntToFloat(150 + iParam4)};
			fVar92[2] = 133.25f;
			vVar0[3 /*3*/] = {1706.331f, 2407.597f, 40f};
			vVar46[3 /*3*/] = {1698.555f, 2460.208f, IntToFloat(150 + iParam4)};
			fVar92[3] = 104.5f;
			vVar0[4 /*3*/] = {1712.452f, 2756.218f, 40f};
			vVar46[4 /*3*/] = {1718.848f, 2589.162f, IntToFloat(150 + iParam4)};
			fVar92[4] = 121.75f;
			vVar0[5 /*3*/] = {1830.228f, 2661.24f, 40f};
			vVar46[5 /*3*/] = {1774.812f, 2679.419f, IntToFloat(150 + iParam4)};
			fVar92[5] = 84.5f;
			vVar0[6 /*3*/] = {1559.05f, 2632.22f, 40f};
			vVar46[6 /*3*/] = {1657.208f, 2595.484f, IntToFloat(150 + iParam4)};
			fVar92[6] = 103.75f;
			vVar0[7 /*3*/] = {1612.021f, 2716.869f, 40f};
			vVar46[7 /*3*/] = {1657.165f, 2669.721f, IntToFloat(150 + iParam4)};
			fVar92[7] = 104.25f;
			vVar0[8 /*3*/] = {1809.872f, 2729.827f, 40f};
			vVar46[8 /*3*/] = {1789.855f, 2705.037f, IntToFloat(150 + iParam4)};
			fVar92[8] = 91f;
			vVar0[9 /*3*/] = {1818.789f, 2605.948f, 40f};
			vVar46[9 /*3*/] = {1783.114f, 2606.783f, IntToFloat(150 + iParam4)};
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = {3411.002f, 3663.185f, 20f};
			vVar46[0 /*3*/] = {3615.583f, 3626.194f, IntToFloat(40 + iParam4)};
			fVar92[0] = 45.75f;
			vVar0[1 /*3*/] = {3426.66f, 3733.078f, 20f};
			vVar46[1 /*3*/] = {3643.801f, 3694.362f, IntToFloat(40 + iParam4)};
			fVar92[1] = 99f;
			vVar0[2 /*3*/] = {3446.036f, 3795.688f, 20f};
			vVar46[2 /*3*/] = {3650.914f, 3766.152f, IntToFloat(40 + iParam4)};
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = {526.053f, -3391.497f, -10f};
			vVar46[0 /*3*/] = {523.2289f, -3118.678f, IntToFloat(10 + iParam4)};
			fVar92[0] = 120f;
			vVar0[1 /*3*/] = {459.4397f, -3199.99f, 4.819676f};
			vVar46[1 /*3*/] = {593.8928f, -3199.998f, 30.06926f};
			fVar92[1] = 170f;
			vVar0[2 /*3*/] = {552.8467f, -3111.054f, 4.819394f};
			vVar46[2 /*3*/] = {585.3137f, -3111.844f, 17.56923f};
			fVar92[2] = 12.5f;
			vVar0[3 /*3*/] = {598.4666f, -3140.147f, 4.819257f};
			vVar46[3 /*3*/] = {597.4973f, -3117.063f, 17.31926f};
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = {-1108.55f, -570.8798f, 20f};
			vVar46[0 /*3*/] = {-1187.811f, -477.5037f, IntToFloat(50 + iParam4)};
			fVar92[0] = 162f;
			vVar0[1 /*3*/] = {-1201.378f, -485.9673f, 20f};
			vVar46[1 /*3*/] = {-1215.796f, -464.8281f, IntToFloat(50 + iParam4)};
			fVar92[1] = 124f;
			vVar0[2 /*3*/] = {-985.6311f, -525.4233f, 20f};
			vVar46[2 /*3*/] = {-1013.393f, -475.2057f, IntToFloat(50 + iParam4)};
			fVar92[2] = 55f;
			vVar0[3 /*3*/] = {-1055.849f, -477.8226f, 20f};
			vVar46[3 /*3*/] = {-1073.333f, -498.717f, IntToFloat(50 + iParam4)};
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = {461.5684f, -984.572f, 29.43951f};
			vVar46[0 /*3*/] = {471.17f, -984.4292f, 40.14212f};
			fVar92[0] = 7.75f;
			vVar0[1 /*3*/] = {457.3404f, -984.756f, 34.43951f};
			vVar46[1 /*3*/] = {457.2084f, -993.7189f, 29.38958f};
			fVar92[1] = 14.75f;
			vVar0[2 /*3*/] = {477.6227f, -986.6f, 40.00819f};
			vVar46[2 /*3*/] = {424.8687f, -986.3279f, 48.71241f};
			fVar92[2] = 31.5f;
			vVar0[3 /*3*/] = {474.3889f, -974.4613f, 39.55761f};
			vVar46[3 /*3*/] = {474.0358f, -1021.972f, 49.10033f};
			fVar92[3] = 30.5f;
			vVar0[4 /*3*/] = {442.1768f, -974.1888f, 29.68951f};
			vVar46[4 /*3*/] = {442.1855f, -979.8635f, 33.43951f};
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (is_point_in_angled_area(vParam0, vVar0[iVar109 /*3*/], vVar46[iVar109 /*3*/], fVar92[iVar109], iVar110, true))
		{
			return true;
		}
		iVar109++;
	}
	return false;
}

int func_163(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	return func_164(iParam0, vParam1, vParam4, func_204(), func_204(), iParam7, 1, 0, 0, 0, 0, sParam8, func_203(), func_203(), func_203(), func_203(), func_203(), 0, iParam9, func_203(), 0, 0, iParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

bool func_164(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, float fParam28)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	vVar3 = {vParam1 + Vector(1f, 0f, 0f)};
	*iParam0.f_17[0] = iParam15;
	*iParam0.f_17[1] = iParam16;
	*iParam0.f_17[2] = iParam17;
	*iParam0.f_16 = iParam15;
	func_202(iParam0);
	func_201(iParam0);
	func_200();
	if (func_183(iParam0, *iParam0.f_17[0], *iParam0.f_17[1], *iParam0.f_17[2], sParam20, sParam21, sParam22, sParam23, *iParam0.f_8, iParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, iParam26))
	{
		func_182(sParam20);
		func_182(sParam21);
		func_182(sParam22);
		func_182(sParam23);
		if (is_screen_faded_in())
		{
			iVar1 = false;
			if (is_vehicle_driveable(iParam18, 0))
			{
				if (is_ped_in_vehicle(player_ped_id(), iParam18, 0))
				{
					set_bit(iParam0.f_13, 3);
					if (!is_bit_set(*iParam0.f_13, 9))
					{
						clear_bit(iParam0.f_13, 4);
					}
					if (is_bit_set(*iParam0.f_13, 23))
					{
						clear_bit(iParam0.f_13, 23);
					}
					set_bit(iParam0.f_13, 9);
					iVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_180(iParam0, iParam29))
				{
					set_bit(iParam0.f_13, 3);
					if (!is_bit_set(*iParam0.f_13, 9))
					{
						clear_bit(iParam0.f_13, 4);
					}
					set_bit(iParam0.f_13, 9);
					iVar1 = true;
				}
			}
			else
			{
				iVar1 = true;
			}
			if (iVar1)
			{
				func_182(sParam24);
				func_182(sParam27);
				func_182("MORE_SEATS");
				if (iParam26 && is_player_wanted_level_greater(player_id(), 0))
				{
					if (does_blip_exist(*iParam0.f_5))
					{
						remove_blip(iParam0.f_5);
						func_182(sParam19);
					}
					if (does_blip_exist(*iParam0))
					{
						remove_blip(iParam0);
					}
					if ((!func_177(iParam0, 1) && !func_176(iParam0)) && !is_bit_set(*iParam0.f_13, false))
					{
						if (iParam30)
						{
							func_175(iParam0, "LOSE_WANTED", 0);
							if (!is_ped_injured(*iParam0.f_17[0]))
							{
								func_173(*iParam0.f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						set_bit(iParam0.f_13, false);
						clear_bit(iParam0.f_13, true);
					}
				}
				else
				{
					if (is_bit_set(*iParam0.f_13, false))
					{
						func_182("LOSE_WANTED");
						clear_bit(iParam0.f_13, false);
						set_bit(iParam0.f_13, true);
					}
					if (is_bit_set(*iParam0.f_13, true))
					{
						if (!func_177(iParam0, 1))
						{
							if (!is_ped_injured(*iParam0.f_17[0]))
							{
								func_173(*iParam0.f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							clear_bit(iParam0.f_13, true);
						}
					}
					if (!does_blip_exist(*iParam0.f_5))
					{
						if (does_blip_exist(*iParam0))
						{
							remove_blip(iParam0);
						}
						*iParam0.f_5 = func_227(vVar3, 0);
						if (!iParam31 == -1)
						{
							set_blip_sprite(*iParam0.f_5, iParam31);
						}
						if (iParam35)
						{
							func_172(*iParam0.f_5, iParam0);
						}
					}
					else if (!func_171(vVar3, get_blip_coords(*iParam0.f_5), 0.1f, 0))
					{
						set_blip_coords(*iParam0.f_5, vVar3);
						if (iParam35)
						{
							func_172(*iParam0.f_5, iParam0);
						}
					}
					if (!func_177(iParam0, 2))
					{
						if (!is_bit_set(*iParam0.f_13, 2))
						{
							func_175(iParam0, sParam19, 0);
							set_bit(iParam0.f_13, 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (is_bit_set(*iParam0.f_13, 13))
						{
							iParam13 = false;
						}
					}
					iVar1 = false;
					iVar6 = false;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						iVar6 = true;
					}
					if (iParam14 == 2 || iParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5)
					{
						iVar7 = 2;
					}
					if (iParam28)
					{
						is_entity_at_coord(player_ped_id(), vParam1, vParam4, iParam13, iVar6, iVar7);
						if (is_entity_in_angled_area(player_ped_id(), vParam7, vParam10, fParam36, 0, iVar6, iVar7))
						{
							iVar1 = true;
						}
					}
					else if (is_entity_at_coord(player_ped_id(), vParam1, vParam4, iParam13, iVar6, iVar7))
					{
						iVar1 = true;
					}
					if (iVar1)
					{
						iVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!is_ped_injured(*iParam0.f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
									if (!is_ped_in_vehicle(*iParam0.f_17[iVar2], iVar0, 0))
									{
										iVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!is_ped_in_vehicle(*iParam0.f_17[iVar2], iParam18, 0))
									{
										iVar1 = false;
									}
								}
								else if (!is_ped_group_member(*iParam0.f_17[iVar2], func_170()) || !func_168(*iParam0.f_17[iVar2], 1))
								{
									iVar1 = false;
								}
							}
							iVar2++;
						}
						if (iVar1)
						{
							if (func_165(iParam0))
							{
								func_182(sParam19);
								func_182(sParam24);
								func_182(sParam20);
								func_182(sParam21);
								func_182(sParam22);
								func_182(sParam23);
								func_182("LOSE_WANTED");
								func_182("MORE_SEATS");
								func_182(sParam27);
								func_206(iParam0, 1, 0);
								return true;
							}
						}
					}
				}
			}
			else if (does_entity_exist(iParam18))
			{
				if ((iParam26 && is_player_wanted_level_greater(player_id(), 0)) && (!is_bit_set(*iParam0.f_13, 9) && !is_bit_set(*iParam0.f_13, 22)))
				{
					func_182(sParam24);
					func_182(sParam27);
					if (does_blip_exist(*iParam0.f_5) || does_blip_exist(*iParam0))
					{
						remove_blip(iParam0.f_5);
						remove_blip(iParam0);
						func_182(sParam19);
					}
					if ((!func_177(iParam0, 1) && !func_176(iParam0)) && !is_bit_set(*iParam0.f_13, false))
					{
						if (iParam30)
						{
							func_175(iParam0, "LOSE_WANTED", 0);
							if (!is_ped_injured(*iParam0.f_17[0]))
							{
								func_173(*iParam0.f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						set_bit(iParam0.f_13, false);
						clear_bit(iParam0.f_13, true);
					}
				}
				else
				{
					if (is_bit_set(*iParam0.f_13, false))
					{
						func_182("LOSE_WANTED");
						clear_bit(iParam0.f_13, false);
						set_bit(iParam0.f_13, true);
					}
					if (is_bit_set(*iParam0.f_13, true))
					{
						if (!func_177(iParam0, 1))
						{
							if (!is_ped_injured(*iParam0.f_17[0]))
							{
								func_173(*iParam0.f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							clear_bit(iParam0.f_13, true);
						}
					}
					if (is_vehicle_driveable(iParam18, 0))
					{
						if (!does_blip_exist(*iParam0))
						{
							if (does_blip_exist(*iParam0.f_5))
							{
								remove_blip(iParam0.f_5);
								func_182(sParam19);
							}
							*iParam0 = func_221(iParam18, 0, 0);
							set_blip_display(*iParam0, 2);
							if (!is_bit_set(*iParam0.f_13, 4))
							{
								func_172(*iParam0, iParam0);
							}
						}
						if (!func_177(iParam0, 2))
						{
							if (!is_bit_set(*iParam0.f_13, 3))
							{
								func_175(iParam0, sParam24, 0);
								set_bit(iParam0.f_13, 3);
								clear_bit(iParam0.f_13, 4);
							}
							else if (is_bit_set(*iParam0.f_13, 9))
							{
								if (!is_string_null(sParam27))
								{
									if (!is_bit_set(*iParam0.f_13, 4))
									{
										func_175(iParam0, sParam27, 0);
										set_bit(iParam0.f_13, 4);
									}
								}
								else if (!is_bit_set(*iParam0.f_13, 4))
								{
									func_175(iParam0, sParam24, 0);
									set_bit(iParam0.f_13, 4);
								}
								if (!is_bit_set(*iParam0.f_13, 23))
								{
									if (!is_ped_injured(*iParam0.f_17[0]))
									{
										func_173(*iParam0.f_17[0], "GET_IN_CAR", 3);
									}
									set_bit(iParam0.f_13, 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (does_blip_exist(*iParam0.f_5))
				{
					remove_blip(iParam0.f_5);
					func_182(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_177(iParam0, 2))
						{
							if (is_ped_sitting_in_any_vehicle(player_ped_id()))
							{
								if (!is_bit_set(*iParam0.f_13, 13))
								{
									iVar8 = false;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!is_ped_injured(*iParam0.f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = get_random_int_in_range(false, iVar8);
									if (!is_ped_injured(*iParam0.f_17[iVar9]))
									{
										func_173(*iParam0.f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_175(iParam0, "MORE_SEATS", 0);
									set_bit(iParam0.f_13, 13);
								}
							}
							else if (!is_bit_set(*iParam0.f_13, 3))
							{
								func_175(iParam0, sParam24, 0);
								set_bit(iParam0.f_13, 3);
								clear_bit(iParam0.f_13, 4);
							}
							else if (!is_bit_set(*iParam0.f_13, 4))
							{
								if (is_bit_set(*iParam0.f_13, 9))
								{
									func_175(iParam0, sParam27, 0);
									set_bit(iParam0.f_13, 4);
								}
							}
						}
					}
					else if (!func_177(iParam0, 2))
					{
						if (!is_bit_set(*iParam0.f_13, 3))
						{
							func_175(iParam0, sParam24, 0);
							set_bit(iParam0.f_13, 3);
							clear_bit(iParam0.f_13, 4);
						}
						else if (is_bit_set(*iParam0.f_13, 9))
						{
							if (!is_string_null(sParam27))
							{
								if (!is_bit_set(*iParam0.f_13, 4))
								{
									func_175(iParam0, sParam27, 0);
									set_bit(iParam0.f_13, 4);
								}
							}
							else if (!is_bit_set(*iParam0.f_13, 4))
							{
								func_175(iParam0, sParam24, 0);
								set_bit(iParam0.f_13, 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (is_bit_set(*iParam0.f_13, false))
		{
			clear_bit(iParam0.f_13, false);
		}
		func_182(sParam19);
		func_182(sParam24);
		func_182(sParam27);
		func_182(sParam24);
		func_182("LOSE_WANTED");
		if (does_blip_exist(*iParam0.f_5))
		{
			remove_blip(iParam0.f_5);
		}
		if (does_blip_exist(*iParam0))
		{
			remove_blip(iParam0);
		}
	}
	clear_bit(iParam0.f_13, 11);
	clear_bit(iParam0.f_13, 12);
	return false;
}

bool func_165(int iParam0)
{
	if (is_bit_set(*iParam0.f_13, 12))
	{
		if (func_167(player_ped_id()))
		{
			if (func_166(1, 0, 1) || is_bit_set(*iParam0.f_13, 7))
			{
				return true;
			}
		}
	}
	else if (func_166(1, 0, 1) || is_bit_set(*iParam0.f_13, 7))
	{
		return true;
	}
	return false;
}

bool func_166(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (is_minigame_in_progress())
	{
		return false;
	}
	if (iParam0)
	{
		if (is_entity_dead(player_ped_id(), 0))
		{
			return false;
		}
	}
	iVar0 = false;
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
		{
			return false;
		}
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (iParam0)
		{
			if (is_entity_dead(iVar0, 0))
			{
				return false;
			}
		}
		if (iParam2)
		{
			if (!is_entity_dead(iVar0, 0))
			{
				if (get_ped_in_vehicle_seat(iVar0, -1) != player_ped_id())
				{
					return false;
				}
			}
		}
		if (!is_entity_dead(iVar0, 0))
		{
			if (get_entity_upright_value(iVar0) < 0.95f || get_entity_upright_value(iVar0) > 1.011f)
			{
				return false;
			}
		}
	}
	else if (iParam1)
	{
		return false;
	}
	if (!is_player_ready_for_cutscene(player_id()))
	{
		return false;
	}
	if (!can_player_start_mission(player_id()))
	{
		return false;
	}
	return true;
}

bool func_167(int iParam0)
{
	float fVar0;
	
	if (!is_ped_injured(iParam0))
	{
		fVar0 = get_entity_speed(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return true;
		}
	}
	return false;
}

bool func_168(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		if (is_ped_sitting_in_any_vehicle(player_ped_id()) && iParam1)
		{
			if (func_169(player_ped_id(), iParam0))
			{
				set_group_separation_range(func_170(), 50f);
				return true;
			}
		}
		else if (is_ped_group_member(iParam0, func_170()))
		{
			set_group_separation_range(func_170(), 50f);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_169(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		if (is_ped_sitting_in_any_vehicle(iParam0))
		{
			iVar0 = get_vehicle_ped_is_in(iParam0, 0);
			if (is_vehicle_driveable(iVar0, 0))
			{
				if (!is_ped_injured(iParam1))
				{
					if (is_ped_sitting_in_vehicle(iParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_170()
{
	return get_player_group(get_player_index());
}

bool func_171(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!iParam7)
	{
		if (absf(vParam0.x - vParam3.x) <= fParam6)
		{
			if (absf(vParam0.y - vParam3.y) <= fParam6)
			{
				if (absf(vParam0.z - vParam3.z) <= fParam6)
				{
					return true;
				}
			}
		}
	}
	else if (absf(vParam0.x - vParam3.x) <= fParam6)
	{
		if (absf(vParam0.y - vParam3.y) <= fParam6)
		{
			return true;
		}
	}
	return false;
}

void func_172(int iParam0, int iParam1)
{
	if (does_blip_exist(iParam0))
	{
		if (does_blip_exist(*iParam1.f_6))
		{
			set_blip_route(*iParam1.f_6, false);
		}
		_0x3DDA37128DD1ACA8(0);
		_0x67EEDEA1B9BAFD94();
		*iParam1.f_6 = iParam0;
		set_blip_route(iParam0, true);
	}
}

void func_173(int iParam0, char* sParam1, int iParam2)
{
	_play_ambient_speech1(iParam0, sParam1, func_174(iParam2), 1);
}

int func_174(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_175(int iParam0, char* sParam1, int iParam2)
{
	if (!iParam2)
	{
		if (!is_string_null(sParam1))
		{
			if (!are_strings_equal(sParam1, ""))
			{
				func_217(sParam1, 7500, 1);
			}
		}
	}
	*iParam0.f_10 = get_game_timer();
}

bool func_176(int iParam0)
{
	if (!is_ped_injured(*iParam0.f_16))
	{
		if (is_ambient_speech_playing(*iParam0.f_16))
		{
			return true;
		}
	}
	return false;
}

bool func_177(int iParam0, int iParam1)
{
	if (iParam1 != 1 || is_subtitle_preference_switched_on())
	{
		if (is_message_being_displayed())
		{
			return true;
		}
		if (func_179(iParam0))
		{
			return true;
		}
	}
	if (iParam1 != 2 || is_subtitle_preference_switched_on())
	{
		if (func_50() && !func_178())
		{
			return true;
		}
	}
	return false;
}

bool func_178()
{
	if (Global_16723 == 1)
	{
		return true;
	}
	return false;
}

bool func_179(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = get_game_timer();
	iVar0 = iVar1 - *uParam0.f_10;
	if (iVar0 < 35)
	{
		return true;
	}
	return false;
}

bool func_180(var uParam0, int iParam1)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(player_ped_id(), 0))
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (func_181(iVar0, uParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_181(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (does_entity_exist(*uParam1.f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = get_vehicle_max_number_of_passengers(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!_0xF7F203E31F96F6A1(iParam0, 1))
					{
						return true;
					}
				}
				else
				{
					return true;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!_0xF7F203E31F96F6A1(iParam0, 1))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

void func_182(char* sParam0)
{
	if (!is_string_null(sParam0))
	{
		clear_this_print(sParam0);
	}
}

bool func_183(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int[] iVar7 = new int[3];
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	var[] uVar15 = new var[3];
	var[] uVar19 = new var[3];
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	vector3 vVar28;
	int iVar31;
	int iVar32;
	
	iVar4 = 0;
	*uParam0.f_17[0] = uParam1;
	*uParam0.f_17[1] = uParam2;
	*uParam0.f_17[2] = uParam3;
	*uParam0.f_16 = uParam1;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19[0] = uParam13;
	uVar19[1] = uParam14;
	uVar19[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = false;
	while (iVar0 < 3)
	{
		if (!is_ped_injured(*uParam0.f_17[iVar0]))
		{
			iVar3++;
		}
		if (is_player_wanted_level_greater(player_id(), 0))
		{
			if (!is_bit_set(*uParam0.f_13, 29) && !is_bit_set(*uParam0.f_13, 28))
			{
				if (!is_ped_injured(*uParam0.f_17[iVar0]))
				{
					set_ped_using_action_mode(*uParam0.f_17[iVar0], true, -1, 0);
				}
				if (iVar0 == 2)
				{
					set_bit(uParam0.f_13, 28);
				}
			}
		}
		else if (!is_bit_set(*uParam0.f_13, 29) && is_bit_set(*uParam0.f_13, 28))
		{
			if (!is_ped_injured(*uParam0.f_17[iVar0]))
			{
				set_ped_using_action_mode(*uParam0.f_17[iVar0], false, -1, 0);
			}
			if (iVar0 == 2)
			{
				clear_bit(uParam0.f_13, 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return true;
	}
	if (is_bit_set(*uParam0.f_13, 26))
	{
		iVar23 = false;
		if (!does_entity_exist(*uParam0.f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			iVar24 = get_closest_vehicle(get_entity_coords(player_ped_id(), 1), 50f, false, iVar25);
			if (is_vehicle_driveable(iVar24, 0))
			{
				*uParam0.f_21 = iVar24;
			}
		}
		if (is_vehicle_driveable(*uParam0.f_21, 0))
		{
			if (vdist2(get_entity_coords(player_ped_id(), 1), get_entity_coords(*uParam0.f_21, 1)) < 400f)
			{
				if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
				{
					if (!is_player_wanted_level_greater(player_id(), 0) || !iParam17)
					{
						if (func_181(*uParam0.f_21, uParam0, iVar3))
						{
							iVar0 = false;
							while (iVar0 < 3)
							{
								if (!is_ped_injured(*uParam0.f_17[iVar0]))
								{
									set_ped_max_move_blend_ratio(*uParam0.f_17[iVar0], 1f);
									if (is_ped_group_member(*uParam0.f_17[iVar0], func_170()))
									{
										remove_ped_from_group(*uParam0.f_17[iVar0]);
									}
									if (get_script_task_status(*uParam0.f_17[iVar0], -1794415470) == 7 && !func_199(*uParam0.f_17[iVar0], *uParam0.f_21))
									{
										if (!is_ped_ragdoll(*uParam0.f_17[iVar0]) && !is_ped_getting_up(*uParam0.f_17[iVar0]))
										{
											set_blocking_of_non_temporary_events(*uParam0.f_17[iVar0], true);
											task_enter_vehicle(*uParam0.f_17[iVar0], *uParam0.f_21, 60000, iVar0, 1f, 1, 0);
											set_ped_group_member_passenger_index(*uParam0.f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return true;
						}
						else
						{
							iVar23 = true;
						}
					}
					else
					{
						iVar23 = true;
					}
				}
				else
				{
					iVar23 = true;
				}
			}
			else
			{
				iVar23 = true;
			}
		}
		else
		{
			iVar23 = true;
		}
		if (iVar23)
		{
			clear_bit(uParam0.f_13, 26);
			iVar0 = false;
			while (iVar0 < 3)
			{
				if (!is_ped_injured(*uParam0.f_17[iVar0]))
				{
					if (!is_ped_getting_into_a_vehicle(*uParam0.f_17[iVar0]) && !*uParam0.f_15)
					{
						clear_ped_tasks(*uParam0.f_17[iVar0]);
					}
					if (!is_ped_group_member(*uParam0.f_17[iVar0], func_170()))
					{
						if (func_197(uParam0, *uParam0.f_17[iVar0], fParam8, 1))
						{
							set_ped_as_group_member(*uParam0.f_17[iVar0], func_170());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!is_bit_set(*uParam0.f_13, 26))
	{
		if ((!func_196(uParam0) && is_ped_sitting_in_any_vehicle(player_ped_id())) && !does_entity_exist(iParam10))
		{
			iVar13 = get_vehicle_ped_is_in(player_ped_id(), 0);
			if (is_vehicle_driveable(iVar13, 0))
			{
				if (!is_bit_set(*uParam0.f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_177(uParam0, 2))
					{
						iVar26 = false;
						iVar27 = 0;
						iVar0 = false;
						while (iVar0 < 3)
						{
							if (!is_ped_injured(*uParam0.f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = get_random_int_in_range(false, iVar26);
						if (!is_ped_injured(*uParam0.f_17[iVar27]))
						{
							func_173(*uParam0.f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_175(uParam0, "MORE_SEATS", 0);
						set_bit(uParam0.f_13, 13);
					}
				}
				iVar12 = true;
			}
		}
		else
		{
			iVar12 = false;
			clear_bit(uParam0.f_13, 13);
			func_182("MORE_SEATS");
		}
		if (!does_entity_exist(iParam10))
		{
			if ((!is_ped_injured(*uParam0.f_17[0]) || !is_ped_injured(*uParam0.f_17[1])) || !is_ped_injured(*uParam0.f_17[2]))
			{
				if (!is_bit_set(*uParam0.f_13, 31))
				{
					if (is_ped_sitting_in_any_vehicle(player_ped_id()) && !func_177(uParam0, 2))
					{
						iVar13 = get_vehicle_ped_is_in(player_ped_id(), 0);
						if (func_195(iVar13, uParam0))
						{
							func_175(uParam0, "CMN_VEHSUIT", 0);
							set_bit(uParam0.f_13, 31);
						}
					}
				}
				else if (!is_ped_sitting_in_any_vehicle(player_ped_id()))
				{
					clear_bit(uParam0.f_13, 31);
					func_182("CMN_VEHSUIT");
				}
			}
		}
		if (is_vehicle_driveable(iParam10, 0))
		{
			if (is_ped_sitting_in_vehicle(player_ped_id(), iParam10))
			{
				if (is_control_just_pressed(0, 75))
				{
					set_bit(uParam0.f_13, 21);
				}
			}
			else if (is_bit_set(*uParam0.f_13, 21))
			{
				clear_bit(uParam0.f_13, 21);
			}
		}
		iVar0 = false;
		while (iVar0 < 3)
		{
			if (does_entity_exist(*uParam0.f_17[iVar0]))
			{
				if (!is_ped_injured(*uParam0.f_17[iVar0]))
				{
					if (!is_ped_group_member(*uParam0.f_17[iVar0], func_170()))
					{
						set_ped_dies_in_water(*uParam0.f_17[iVar0], 1);
					}
					else
					{
						set_ped_dies_in_water(*uParam0.f_17[iVar0], 0);
					}
					if (is_ped_sitting_in_any_vehicle(player_ped_id()))
					{
						iVar13 = get_vehicle_ped_is_in(player_ped_id(), 0);
						if (is_vehicle_driveable(iVar13, 0))
						{
							if (is_ped_group_member(*uParam0.f_17[iVar0], func_170()))
							{
								if (!func_196(uParam0) && is_ped_sitting_in_any_vehicle(player_ped_id()))
								{
									if (!func_194(*uParam0.f_17[iVar0]))
									{
										remove_ped_from_group(*uParam0.f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !is_entity_dead(iVar13, 0))
						{
							if (is_ped_sitting_in_vehicle(*uParam0.f_17[iVar0], iVar13))
							{
								if (is_entity_in_water(iVar13) && !is_vehicle_on_all_wheels(iVar13))
								{
									vVar28 = {get_entity_coords(iVar13, 1)};
									if (vVar28.z < -1f)
									{
										task_leave_vehicle(*uParam0.f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					iVar11 = true;
					if (!is_ped_group_member(*uParam0.f_17[iVar0], func_170()))
					{
						if (is_ped_sitting_in_any_vehicle(*uParam0.f_17[iVar0]))
						{
							iVar13 = get_vehicle_ped_is_in(*uParam0.f_17[iVar0], 0);
							if (!is_entity_dead(iVar13, 0))
							{
								if (is_vehicle_driveable(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!is_ped_sitting_in_vehicle(player_ped_id(), iVar13))
										{
											if (get_entity_speed(iVar13) > 5f)
											{
												task_leave_vehicle(*uParam0.f_17[iVar0], iVar13, 4160);
											}
											else
											{
												task_leave_vehicle(*uParam0.f_17[iVar0], iVar13, 64);
											}
											iVar11 = false;
										}
									}
								}
								else
								{
									if (is_ped_sitting_in_any_vehicle(player_ped_id()))
									{
										iVar31 = get_vehicle_ped_is_in(player_ped_id(), 0);
									}
									if (is_vehicle_driveable(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (get_entity_speed(iVar13) > 5f)
											{
												task_leave_vehicle(*uParam0.f_17[iVar0], iVar13, 4160);
											}
											else
											{
												task_leave_vehicle(*uParam0.f_17[iVar0], iVar13, 64);
											}
											iVar11 = false;
										}
									}
								}
							}
						}
					}
					if (is_ped_group_member(*uParam0.f_17[iVar0], func_170()))
					{
						iVar32 = get_vehicle_ped_is_using(player_ped_id());
						if (does_entity_exist(iVar32))
						{
							if (func_181(iVar32, uParam0, 0))
							{
								if (func_193(iVar0, uParam0) || !is_bit_set(*uParam0.f_13, 27))
								{
									set_ped_group_member_passenger_index(*uParam0.f_17[iVar0], iVar0);
									func_192(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										set_bit(uParam0.f_13, 27);
									}
								}
							}
							else if (!func_193(iVar0, uParam0))
							{
								if (get_entity_model(iVar32) == joaat("sentinel2"))
								{
									set_ped_group_member_passenger_index(*uParam0.f_17[iVar0], 4);
								}
								else
								{
									set_ped_group_member_passenger_index(*uParam0.f_17[iVar0], 2);
								}
								func_191(iVar0, uParam0);
							}
						}
					}
					if ((!is_ped_group_member(*uParam0.f_17[iVar0], func_170()) && !func_190(*uParam0.f_17[iVar0], iParam10)) && !func_189(*uParam0.f_17[iVar0], iParam10))
					{
						if (func_197(uParam0, *uParam0.f_17[iVar0], fParam8, iParam11))
						{
							if (!is_ped_group_member(*uParam0.f_17[iVar0], func_170()))
							{
								if (((!is_ped_ragdoll(*uParam0.f_17[iVar0]) && !is_ped_getting_up(*uParam0.f_17[iVar0])) && !is_ped_jumping_out_of_vehicle(*uParam0.f_17[iVar0])) && !is_ped_getting_into_a_vehicle(*uParam0.f_17[iVar0]))
								{
									iVar14 = get_script_task_status(*uParam0.f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										clear_ped_tasks(*uParam0.f_17[iVar0]);
									}
									set_ped_as_group_member(*uParam0.f_17[iVar0], func_170());
									iVar11 = false;
								}
							}
						}
						if (iVar11)
						{
							if (!does_blip_exist(*uParam0.f_1[iVar0]))
							{
								*uParam0.f_11 = get_game_timer();
								*uParam0.f_1[iVar0] = func_221(*uParam0.f_17[iVar0], 0, 0);
								set_blip_display(*uParam0.f_1[iVar0], 2);
								if (iParam9)
								{
									func_172(*uParam0.f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (does_blip_exist(*uParam0.f_1[iVar0]))
					{
						if (((func_168(*uParam0.f_17[iVar0], 1) || func_190(*uParam0.f_17[iVar0], iParam10)) || iParam12) || (is_vehicle_driveable(iParam10, 0) && !is_ped_in_vehicle(player_ped_id(), iParam10, 0)))
						{
							if (does_blip_exist(*uParam0.f_1[iVar0]))
							{
								remove_blip(uParam0.f_1[iVar0]);
								func_182(uVar15[iVar0]);
							}
						}
						else
						{
							if (iParam9)
							{
								func_172(*uParam0.f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (is_vehicle_driveable(iParam10, 0))
					{
						if (!is_ped_sitting_in_vehicle(*uParam0.f_17[iVar0], iParam10))
						{
							if ((is_entity_at_entity(*uParam0.f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !is_bit_set(*uParam0.f_13, 11)) && !((iParam17 && is_player_wanted_level_greater(player_id(), 0)) && !is_ped_in_vehicle(player_ped_id(), iParam10, 0)))
							{
								if (is_ped_sitting_in_any_vehicle(*uParam0.f_17[iVar0]))
								{
									if (!is_ped_in_vehicle(*uParam0.f_17[iVar0], iParam10, 0))
									{
										if (!func_168(*uParam0.f_17[iVar0], 1))
										{
											if (func_167(*uParam0.f_17[iVar0]))
											{
												iVar14 = get_script_task_status(*uParam0.f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													task_leave_any_vehicle(*uParam0.f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (is_ped_group_member(*uParam0.f_17[iVar0], func_170()))
									{
										if ((((!is_ped_jumping_out_of_vehicle(*uParam0.f_17[iVar0]) && !is_ped_ragdoll(*uParam0.f_17[iVar0])) && !is_ped_getting_up(*uParam0.f_17[iVar0])) && !is_ped_getting_into_a_vehicle(*uParam0.f_17[iVar0])) && !is_entity_on_fire(iParam10))
										{
											remove_ped_from_group(*uParam0.f_17[iVar0]);
										}
									}
									iVar14 = get_script_task_status(*uParam0.f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_199(*uParam0.f_17[iVar0], iParam10))
									{
										if (((((!is_ped_jumping_out_of_vehicle(*uParam0.f_17[iVar0]) && !is_ped_jumping_out_of_vehicle(player_ped_id())) && !func_188(*uParam0.f_17[iVar0], 2f)) && !is_ped_ragdoll(*uParam0.f_17[iVar0])) && !is_ped_getting_up(*uParam0.f_17[iVar0])) && !is_entity_on_fire(iParam10))
										{
											set_blocking_of_non_temporary_events(*uParam0.f_17[iVar0], true);
											if (is_bit_set(*uParam0.f_13, 10))
											{
												set_ped_max_move_blend_ratio(*uParam0.f_17[iVar0], 1f);
											}
											task_enter_vehicle(*uParam0.f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											set_ped_get_out_upside_down_vehicle(*uParam0.f_17[iVar0], 0);
										}
									}
									else if (is_ped_in_vehicle(player_ped_id(), iParam10, 0))
									{
										*uParam0.f_1[iVar0] = func_221(*uParam0.f_17[iVar0], 0, 0);
										set_blip_display(*uParam0.f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!is_ped_group_member(*uParam0.f_17[iVar0], func_170()))
							{
								if (func_197(uParam0, *uParam0.f_17[iVar0], fParam8, iParam11))
								{
									if (!is_ped_ragdoll(*uParam0.f_17[iVar0]) && !is_ped_getting_up(*uParam0.f_17[iVar0]))
									{
										iVar14 = get_script_task_status(*uParam0.f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											clear_ped_tasks(*uParam0.f_17[iVar0]);
										}
										set_blocking_of_non_temporary_events(*uParam0.f_17[iVar0], false);
										set_ped_as_group_member(*uParam0.f_17[iVar0], func_170());
									}
								}
							}
						}
						else if (is_ped_sitting_in_vehicle(player_ped_id(), iParam10))
						{
							if (!is_ped_group_member(*uParam0.f_17[iVar0], func_170()))
							{
								if (!is_bit_set(*uParam0.f_13, 21))
								{
									set_ped_as_group_member(*uParam0.f_17[iVar0], func_170());
								}
							}
							else if (is_bit_set(*uParam0.f_13, 21))
							{
								remove_ped_from_group(*uParam0.f_17[iVar0]);
								set_bit(uParam0.f_13, 21);
							}
						}
						else if (is_ped_group_member(*uParam0.f_17[iVar0], func_170()) && !is_entity_on_fire(iParam10))
						{
							remove_ped_from_group(*uParam0.f_17[iVar0]);
						}
					}
				}
				else if (does_blip_exist(*uParam0.f_1[iVar0]))
				{
					remove_blip(uParam0.f_1[iVar0]);
					func_182(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = false;
		while (iVar0 < 3)
		{
			if (does_blip_exist(*uParam0.f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_177(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = false;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!is_ped_injured(*uParam0.f_17[iVar0]))
						{
							if (func_194(*uParam0.f_17[iVar0]) || is_entity_at_entity(*uParam0.f_17[iVar0], player_ped_id(), *uParam0.f_8, *uParam0.f_8, *uParam0.f_8, 0, 1, 0))
							{
								iVar1--;
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!is_ped_injured(*uParam0.f_17[iVar0]))
					{
						if (!is_entity_at_entity(*uParam0.f_17[iVar0], player_ped_id(), *uParam0.f_8 * 0.85f, *uParam0.f_8 * 0.85f, *uParam0.f_8, 0, 1, 0) && !func_194(*uParam0.f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = get_game_timer();
			if (iVar5 - *uParam0.f_11 > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (*uParam0.f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || iVar2 + iVar1 == iVar3) && iVar3 > 1)
						{
							if (!is_bit_set(*uParam0.f_13, 5))
							{
								func_175(uParam0, sParam7, 0);
								set_bit(uParam0.f_13, 5);
								*uParam0.f_12 = iVar1;
							}
							else
							{
								*uParam0.f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = false;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_187(iVar0, uParam0))
									{
										if (!is_string_null(uVar19[iVar0]))
										{
											if (!are_strings_equal(uVar19[iVar0], ""))
											{
												func_185(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_184(iVar0, uParam0);
												*uParam0.f_12 = iVar1;
											}
										}
										if (!func_187(iVar0, uParam0))
										{
											func_175(uParam0, uVar15[iVar0], 0);
											func_184(iVar0, uParam0);
											*uParam0.f_12 = iVar1;
										}
									}
									else
									{
										*uParam0.f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					*uParam0.f_12 = 0;
				}
			}
		}
		clear_bit(uParam0.f_13, 10);
		if (iVar6 && !iVar12)
		{
			iVar0 = false;
			while (iVar0 < 3)
			{
				if (does_blip_exist(*uParam0.f_1[iVar0]))
				{
					remove_blip(uParam0.f_1[iVar0]);
					func_182(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_182("MORE_SEATS");
			return true;
		}
	}
	return false;
}

void func_184(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			set_bit(uParam1.f_13, 14);
			break;
		
		case 1:
			set_bit(uParam1.f_13, 15);
			break;
		
		case 2:
			set_bit(uParam1.f_13, 16);
			break;
	}
}

void func_185(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (!iParam3)
	{
		if (!is_string_null(sParam1))
		{
			if (!are_strings_equal(sParam1, ""))
			{
				func_186(sParam1, sParam2, 7500, 1);
			}
		}
	}
	*uParam0.f_10 = get_game_timer();
}

void func_186(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	_set_text_entry_2(sParam0);
	_add_text_component_item_string(sParam1);
	_draw_subtitle_timed(iParam2, 1);
}

int func_187(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return is_bit_set(*uParam1.f_13, 14);
		
		case 1:
			return is_bit_set(*uParam1.f_13, 15);
		
		case 2:
			return is_bit_set(*uParam1.f_13, 16);
		
		default:
	}
	return false;
}

bool func_188(int iParam0, float fParam1)
{
	int iVar0;
	
	if (is_ped_in_any_vehicle(iParam0, 0))
	{
		iVar0 = get_vehicle_ped_is_in(iParam0, 0);
		if (!is_entity_dead(iVar0, 0))
		{
			if (get_entity_speed(iVar0) > fParam1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_189(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		if (!is_ped_group_member(iParam0, func_170()))
		{
			iVar0 = set_exclusive_phone_relationships(iParam0);
			if (is_vehicle_driveable(iParam1, 0))
			{
				if (is_entity_at_entity(iParam0, iParam1, 20f + 10f, 20f + 10f, 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_190(int iParam0, int iParam1)
{
	if (!is_ped_injured(iParam0))
	{
		if (does_entity_exist(iParam1))
		{
			if (is_vehicle_driveable(iParam1, 0))
			{
				if (is_ped_sitting_in_vehicle(iParam0, iParam1))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_191(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			set_bit(uParam1.f_13, 17);
			break;
		
		case 1:
			set_bit(uParam1.f_13, 18);
			break;
		
		case 2:
			set_bit(uParam1.f_13, 19);
			break;
	}
}

void func_192(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			clear_bit(uParam1.f_13, 17);
			break;
		
		case 1:
			clear_bit(uParam1.f_13, 18);
			break;
		
		case 2:
			clear_bit(uParam1.f_13, 19);
			break;
	}
}

int func_193(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return is_bit_set(*uParam1.f_13, 17);
		
		case 1:
			return is_bit_set(*uParam1.f_13, 18);
		
		case 2:
			return is_bit_set(*uParam1.f_13, 19);
		
		default:
	}
	return false;
}

bool func_194(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (is_player_playing(player_id()))
	{
		iVar0 = get_vehicle_ped_is_using(player_ped_id());
		if (is_vehicle_driveable(iVar0, 0))
		{
			if (!is_ped_injured(iParam0))
			{
				iVar1 = get_vehicle_ped_is_using(iParam0);
				if (is_vehicle_driveable(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (is_entity_at_entity(player_ped_id(), iParam0, 20f, 20f, 20f, 0, 1, 0) && is_entity_at_entity(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

bool func_195(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (is_vehicle_driveable(iParam0, 0))
	{
		if (get_entity_model(iParam0) == joaat("bus") || get_entity_model(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!is_ped_injured(*uParam1.f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = get_ped_in_vehicle_seat(iParam0, false);
			if (!is_ped_injured(iVar3))
			{
				if ((iVar3 == *uParam1.f_17[0] || iVar3 == *uParam1.f_17[1]) || iVar3 == *uParam1.f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = get_ped_in_vehicle_seat(iParam0, true);
			if (!is_ped_injured(iVar4))
			{
				if ((iVar4 == *uParam1.f_17[0] || iVar4 == *uParam1.f_17[1]) || iVar4 == *uParam1.f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = get_ped_in_vehicle_seat(iParam0, 2);
			if (!is_ped_injured(iVar5))
			{
				if ((iVar5 == *uParam1.f_17[0] || iVar5 == *uParam1.f_17[1]) || iVar5 == *uParam1.f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_196(var uParam0)
{
	int iVar0;
	
	if (is_ped_sitting_in_any_vehicle(player_ped_id()))
	{
		iVar0 = get_vehicle_ped_is_in(player_ped_id(), 0);
		if (func_181(iVar0, uParam0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_197(var uParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	
	if (!is_ped_injured(iParam1))
	{
		if (is_ped_sitting_in_any_vehicle(iParam1))
		{
			iVar0 = get_vehicle_ped_is_in(iParam1, 0);
			if (!is_entity_dead(iVar0, 0))
			{
				if (is_vehicle_driveable(iVar0, 0))
				{
					if (is_ped_sitting_in_vehicle(player_ped_id(), iVar0))
					{
						if (func_196(uParam0))
						{
							return true;
						}
					}
					else if (iParam3)
					{
						return true;
					}
				}
				else if (is_entity_at_entity(player_ped_id(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return true;
				}
			}
		}
		else if (is_entity_at_entity(player_ped_id(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!iParam3)
			{
				iVar0 = get_vehicle_ped_is_using(player_ped_id());
				if (does_entity_exist(iVar0))
				{
					if (func_181(iVar0, uParam0, 0))
					{
						if (is_vehicle_driveable(iVar0, 0))
						{
							if (func_198(iVar0))
							{
								return true;
							}
						}
					}
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
	}
	return false;
}

bool func_198(int iParam0)
{
	float fVar0;
	
	if (!is_entity_dead(iParam0, 0))
	{
		fVar0 = get_entity_speed(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return true;
		}
	}
	return false;
}

bool func_199(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!is_ped_injured(iParam0))
	{
		if (is_vehicle_driveable(iParam1, 0))
		{
			iVar0 = get_vehicle_ped_is_using(iParam0);
			if (iVar0 == iParam1)
			{
				return true;
			}
		}
	}
	return false;
}

void func_200()
{
	int iVar0;
	int iVar1;
	
	if (is_ped_in_any_vehicle(player_ped_id(), 1))
	{
		iVar0 = set_exclusive_phone_relationships(player_ped_id());
		if (is_vehicle_driveable(iVar0, 0))
		{
			iVar1 = get_ped_in_vehicle_seat(iVar0, false);
			if (!is_ped_injured(iVar1))
			{
				if (iVar1 != player_ped_id())
				{
					if (is_entity_a_mission_entity(iVar1))
					{
						if (!is_ped_headtracking_entity(iVar1, player_ped_id()))
						{
							task_look_at_entity(iVar1, player_ped_id(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_201(var uParam0)
{
	int iVar0;
	
	if (!is_bit_set(*uParam0.f_13, 25))
	{
		if (is_player_playing(player_id()))
		{
			set_ped_config_flag(player_ped_id(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (does_entity_exist(*uParam0.f_17[iVar0]))
			{
				if (!is_ped_injured(*uParam0.f_17[iVar0]))
				{
					set_ped_config_flag(*uParam0.f_17[iVar0], 32, false);
					set_ped_config_flag(*uParam0.f_17[iVar0], 305, true);
					set_ped_config_flag(*uParam0.f_17[iVar0], 268, true);
					set_ped_get_out_upside_down_vehicle(*uParam0.f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		set_bit(uParam0.f_13, 25);
	}
}

void func_202(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_entity_exist(*uParam0.f_17[iVar0]))
		{
			if (!is_ped_injured(*uParam0.f_17[iVar0]))
			{
				if (is_ped_sitting_in_any_vehicle(*uParam0.f_17[iVar0]))
				{
					set_ped_can_play_ambient_anims(*uParam0.f_17[iVar0], 0);
					set_ped_can_play_ambient_base_anims(*uParam0.f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (is_player_playing(player_id()))
	{
		if (!is_ped_injured(player_ped_id()))
		{
			if (is_ped_sitting_in_any_vehicle(player_ped_id()))
			{
				set_ped_can_play_ambient_anims(player_ped_id(), 0);
				set_ped_can_play_ambient_base_anims(player_ped_id(), 0);
			}
		}
	}
}

var func_203()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_204()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_205(int iParam0, int iParam1)
{
	func_206(iParam0, iParam1, 0);
}

void func_206(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (is_bit_set(*iParam0.f_13, 30))
	{
		iParam1 = true;
	}
	func_208(iParam0);
	iVar0 = false;
	while (iVar0 < 3)
	{
		if (does_blip_exist(*iParam0.f_1[iVar0]))
		{
			remove_blip(iParam0.f_1[iVar0]);
		}
		func_207(iVar0, iParam0);
		func_192(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = false;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			clear_bit(iParam0.f_13, iVar0);
			clear_bit(iParam0.f_14, iVar0);
		}
		iVar0++;
	}
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
	*iParam0.f_6 = 0;
	*iParam0.f_12 = 0;
	*iParam0.f_15 = 0;
	iVar0 = false;
	while (iVar0 < 3)
	{
		if (!is_ped_injured(*iParam0.f_17[iVar0]))
		{
			set_ped_can_play_ambient_anims(*iParam0.f_17[iVar0], 1);
			set_ped_can_play_ambient_base_anims(*iParam0.f_17[iVar0], 1);
			if (iParam2)
			{
				set_ped_config_flag(*iParam0.f_17[iVar0], 32, true);
				set_ped_config_flag(*iParam0.f_17[iVar0], 305, false);
			}
			set_ped_config_flag(*iParam0.f_17[iVar0], 268, false);
			if (iParam1)
			{
				if (is_ped_group_member(*iParam0.f_17[iVar0], func_170()) && *iParam0.f_17[iVar0] != player_ped_id())
				{
					remove_ped_from_group(*iParam0.f_17[iVar0]);
				}
			}
			if (!is_bit_set(*iParam0.f_13, 29))
			{
				set_ped_using_action_mode(*iParam0.f_17[iVar0], false, -1, 0);
			}
			*iParam0.f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (is_player_playing(player_id()))
	{
		set_ped_can_play_ambient_anims(player_ped_id(), 1);
		set_ped_can_play_ambient_base_anims(player_ped_id(), 1);
	}
	if (is_player_playing(player_id()))
	{
		if (iParam2)
		{
			set_ped_config_flag(player_ped_id(), 32, true);
		}
	}
	*iParam0.f_21 = 0;
}

void func_207(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			clear_bit(uParam1.f_13, 14);
			break;
		
		case 1:
			clear_bit(uParam1.f_13, 15);
			break;
		
		case 2:
			clear_bit(uParam1.f_13, 16);
			break;
	}
}

void func_208(var uParam0)
{
	if (does_blip_exist(*uParam0.f_5))
	{
		remove_blip(uParam0.f_5);
	}
}

bool func_209(int iParam0, int iParam1)
{
	if (Local_4309[iParam0 /*5*/] == iParam1)
	{
		if (Local_4309[iParam0 /*5*/].f_1)
		{
			return true;
		}
	}
	return false;
}

bool func_210(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	disable_control_action(0, 71, 1);
	disable_control_action(0, 72, 1);
	disable_control_action(0, 76, 1);
	disable_control_action(0, 73, 1);
	disable_control_action(0, 59, 1);
	disable_control_action(0, 60, 1);
	if (iParam5)
	{
		disable_control_action(0, 75, 1);
	}
	disable_control_action(0, 80, 1);
	if (!iParam6)
	{
		disable_control_action(0, 69, 1);
		disable_control_action(0, 70, 1);
		disable_control_action(0, 68, 1);
	}
	disable_control_action(0, 74, 1);
	disable_control_action(0, 86, 1);
	disable_control_action(0, 81, 1);
	disable_control_action(0, 82, 1);
	disable_control_action(0, 138, 1);
	disable_control_action(0, 136, 1);
	disable_control_action(0, 114, 1);
	disable_control_action(0, 107, 1);
	disable_control_action(0, 110, 1);
	disable_control_action(0, 89, 1);
	disable_control_action(0, 89, 1);
	disable_control_action(0, 87, 1);
	disable_control_action(0, 88, 1);
	disable_control_action(0, 113, 1);
	disable_control_action(0, 115, 1);
	disable_control_action(0, 116, 1);
	disable_control_action(0, 117, 1);
	disable_control_action(0, 118, 1);
	disable_control_action(0, 119, 1);
	disable_control_action(0, 131, 1);
	disable_control_action(0, 132, 1);
	disable_control_action(0, 123, 1);
	disable_control_action(0, 126, 1);
	disable_control_action(0, 129, 1);
	disable_control_action(0, 130, 1);
	disable_control_action(0, 133, 1);
	disable_control_action(0, 134, 1);
	_0x17FCA7199A530203();
	if (get_game_timer() - Global_29 > 500)
	{
		_task_bring_vehicle_to_halt(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = get_game_timer();
	if (!is_entity_dead(iParam0, 0))
	{
		if (absf(get_entity_speed(iParam0)) <= fParam3)
		{
			return true;
		}
	}
	return false;
}

int func_211(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	return func_164(iParam0, vParam1, vParam4, func_204(), func_204(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_203(), func_203(), func_203(), func_203(), sParam10, 0, iParam12, sParam11, 0, iParam13, iParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

void func_212(int iParam0, int iParam1)
{
	set_bit(&Global_25277, iParam0);
	StringCopy(&(Global_25278[iParam0 /*6*/]), get_this_script_name(), 24);
	Global_25333[iParam0] = iParam1;
}

void func_213(int iParam0, int iParam1)
{
	iLocal_3971 = 1;
	iLocal_3974 = 0;
	iLocal_3970 = false;
	switch (iParam0)
	{
		case 2:
		case 4:
		case 6:
		case 8:
		case 14:
			iLocal_3970 = true;
			break;
	}
	sLocal_3972 = func_214(iParam0);
	sLocal_3973 = func_214(iParam1);
}

char* func_214(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
			break;
		
		case 1:
			return "CAR2_MISSION_START";
			break;
		
		case 2:
			return "CAR2_SCAN_1";
			break;
		
		case 3:
			return "car2_scan_2_restart";
			break;
		
		case 4:
			return "CAR2_GUN";
			break;
		
		case 5:
			return "car2_scan_2_restart";
			break;
		
		case 6:
			return "CAR2_CHASE_START";
			break;
		
		case 7:
			return "CAR2_CHASE_RESTART";
			break;
		
		case 8:
			return "CAR2_ALLEY";
			break;
		
		case 9:
			return "CAR2_SWITCH_1_RESTART";
			break;
		
		case 10:
			return "CAR2_CHAD_FOUND";
			break;
		
		case 11:
			return "CAR2_SWITCH_1";
			break;
		
		case 12:
			return "CAR2_SWITCH_1_RESTART";
			break;
		
		case 13:
			return "CAR2_DRIVE_RESTART";
			break;
		
		case 14:
			return "CAR2_RADIO_1";
			break;
		
		case 15:
			return "CAR2_STOP";
			break;
		
		case 16:
			return "CAR2_MISSION_FAIL";
			break;
	}
	return "";
}

void func_215(var uParam0, int iParam1)
{
	Global_55760 = uParam0;
	Global_55761 = iParam1;
}

void func_216(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55762 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		if (iParam1 == -1 || Global_67845[iVar0 /*9*/] == iParam1)
		{
			if (Global_67845[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67845[iVar0 /*9*/].f_6 = iParam0;
				Global_67845[iVar0 /*9*/].f_7 = 1;
				Global_67845[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_217(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	_set_text_entry_2(sParam0);
	_draw_subtitle_timed(iParam1, 1);
}

bool func_218(var uParam0, int iParam1)
{
	if (*uParam0.f_171 == -1)
	{
		return false;
	}
	*iParam1 = *uParam0.f_298[*uParam0.f_171 /*11*/];
	return true;
}

void func_219(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0.f_242)
	{
		*(uParam0.f_242[iVar0 /*11*/]).f_5 = -1;
		*(uParam0.f_242[iVar0 /*11*/]).f_4 = 0;
		*(uParam0.f_242[iVar0 /*11*/]).f_3 = 0;
		*(uParam0.f_242[iVar0 /*11*/]) = {0f, 0f, 0f};
		iVar0++;
	}
	*uParam0.f_241 = 0;
}

void func_220(char* sParam0, int iParam1)
{
	_set_text_component_format(sParam0);
	_display_help_text_from_string_label(0, 0, true, iParam1);
}

int func_221(int iParam0, int iParam1, int iParam2)
{
	return func_222(iParam0, !iParam1, iParam2);
}

int func_222(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	iVar0 = add_blip_for_entity(iParam0);
	if (is_entity_a_vehicle(iParam0))
	{
		set_blip_scale(iVar0, func_223(network_is_game_in_progress(), 1f, 1f));
		if (!iParam2)
		{
			set_blip_as_friendly(iVar0, iParam1);
		}
		else
		{
			set_blip_colour(iVar0, 2);
		}
	}
	else if (is_entity_a_ped(iParam0))
	{
		set_blip_scale(iVar0, func_223(network_is_game_in_progress(), 0.7f, 0.7f));
		set_blip_as_friendly(iVar0, iParam1);
	}
	else if (is_entity_an_object(iParam0))
	{
		set_blip_scale(iVar0, func_223(network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_223(int iParam0, float fParam1, float fParam2)
{
	if (iParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_224(int iParam0, int iParam1, int iParam2)
{
	Local_4019[iParam0 /*4*/].f_1 = iParam2;
	Local_4019[iParam0 /*4*/] = iParam1;
}

var func_225(char* sParam0, int iParam1, char* sParam2)
{
	_0x853648FD1063A213(sParam0);
	if (iParam1 == 1)
	{
		_add_text_component_item_string(sParam2);
	}
	return _0x8A9BA1AB3E237613();
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_222(iParam0, !iParam1, 0);
	if ((iParam2 != 145 && does_blip_exist(iVar0)) && does_text_label_exist(&(Global_101154.f_32575[iParam2 /*29*/].f_3)))
	{
		set_blip_name_from_text_file(iVar0, &(Global_101154.f_32575[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_227(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = add_blip_for_coord(vParam0);
	set_blip_scale(iVar0, func_223(network_is_game_in_progress(), 1f, 1f));
	set_blip_route(iVar0, iParam3);
	return iVar0;
}

void func_228(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	_set_text_entry_2(sParam0);
	_draw_subtitle_timed(iParam1, 0);
}

bool func_229(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	iLocal_1421 = false;
	iLocal_1422 = 0;
	if (func_230(&iLocal_1421, &iLocal_1422, iParam0, iParam1))
	{
		if (func_230(&iLocal_1421, &iLocal_1422, iParam2, iParam3))
		{
			if (func_230(&iLocal_1421, &iLocal_1422, iParam4, iParam5))
			{
				if (func_230(&iLocal_1421, &iLocal_1422, iParam6, iParam7))
				{
				}
			}
		}
	}
	if (iLocal_1421)
	{
		return true;
	}
	return false;
}

bool func_230(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case 0:
			*iParam0 = 1;
			break;
		
		case 1:
			return false;
			break;
		
		case 2:
			if (iParam3 == 0 || (iParam3 != 0 && func_58(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 3:
			if (iParam3 == 0 || (iParam3 != 0 && func_233(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 6:
			if (iParam3 == 0 || (iParam3 != 0 && func_58(iParam3)))
			{
				*iParam0 = 1;
			}
			break;
		
		case 8:
			if (*iParam0)
			{
				return false;
			}
			else
			{
				*iParam1 = 1;
				if (iParam3 == 0 || (iParam3 != 0 && func_58(iParam3)))
				{
					*iParam0 = 1;
				}
			}
			break;
		
		case 4:
			if (iParam3 != 0 && func_233(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 5:
			if (iParam3 != 0 && func_58(iParam3))
			{
				*iParam0 = 0;
			}
			break;
		
		case 7:
			if (func_232(iParam3))
			{
				if (func_233(iParam3))
				{
					*iParam0 = 1;
				}
			}
			else if (func_58(iParam3))
			{
				func_231(iParam3);
				*iParam0 = 0;
			}
			break;
	}
	return true;
}

void func_231(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0 - Local_4044[0 /*7*/];
	if (Local_4044[iVar0 /*7*/] == iParam0)
	{
		Local_4044[iVar0 /*7*/].f_3 = 1;
	}
}

bool func_232(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0 - Local_4044[0 /*7*/];
	if (Local_4044[iVar0 /*7*/] == iParam0)
	{
		if (Local_4044[iVar0 /*7*/].f_1 && Local_4044[iVar0 /*7*/].f_3)
		{
			return true;
		}
	}
	return false;
}

bool func_233(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0 - Local_4044[0 /*7*/];
	if (Local_4044[iVar0 /*7*/] == iParam0)
	{
		if (Local_4044[iVar0 /*7*/].f_1 && !Local_4044[iVar0 /*7*/].f_2)
		{
			return true;
		}
	}
	return false;
}

void func_234(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	Vector3 fVar11;
	Vector3 fVar12;
	Vector3 fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	
	if (Local_4435[iParam0 /*10*/] != iParam1 || Local_4435[iParam0 /*10*/].f_1 == 0)
	{
		Local_4435[iParam0 /*10*/] = iParam1;
		Local_4435[iParam0 /*10*/].f_1 = 1;
		Local_4435[iParam0 /*10*/].f_3 = 0;
		Local_4435[iParam0 /*10*/].f_6 = 0;
		Local_4435[iParam0 /*10*/].f_2 = 0;
		Local_4435[iParam0 /*10*/].f_4 = 0;
		Local_4435[iParam0 /*10*/].f_7 = 0;
	}
	if (Local_4435[iParam0 /*10*/].f_2 && iParam2 == 0)
	{
		iVar0 = true;
	}
	else
	{
		iVar0 = func_229(iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
	}
	if (iParam2 == 1 && !iVar0)
	{
		Local_4435[iParam0 /*10*/].f_2 = 0;
	}
	if (!iLocal_2112 || Local_4435[iParam0 /*10*/].f_6 == 99)
	{
		if (Local_4435[iParam0 /*10*/].f_3 == 0 || Local_4435[iParam0 /*10*/].f_6 == 99)
		{
			if (iVar0 == 1)
			{
				if (!Local_4435[iParam0 /*10*/].f_2)
				{
					Local_4435[iParam0 /*10*/].f_2 = 1;
				}
				switch (Local_4435[iParam0 /*10*/])
				{
					case 1:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 99:
								set_model_as_no_longer_needed(joaat("s_m_y_cop_01"));
								break;
							
							case 100:
								Local_1472[5 /*14*/] = Global_88108.f_9[0];
								Local_1472[6 /*14*/] = Global_88108.f_9[1];
								Local_1472[7 /*14*/] = Global_88108.f_9[2];
								Local_1472[8 /*14*/] = Global_88108.f_9[6];
								Local_1472[9 /*14*/] = Global_88108.f_9[3];
								Local_1472[10 /*14*/] = Global_88108.f_9[4];
								Local_1472[11 /*14*/] = Global_88108.f_9[5];
								set_entity_as_mission_entity(Local_1472[5 /*14*/], true, 1);
								set_entity_as_mission_entity(Local_1472[6 /*14*/], true, 1);
								set_entity_as_mission_entity(Local_1472[7 /*14*/], true, 1);
								set_entity_as_mission_entity(Local_1472[8 /*14*/], true, 1);
								set_entity_as_mission_entity(Local_1472[9 /*14*/], true, 1);
								set_entity_as_mission_entity(Local_1472[10 /*14*/], true, 1);
								set_entity_as_mission_entity(Local_1472[11 /*14*/], true, 1);
								break;
							
							case 0:
								func_484(iParam0);
								Local_4435[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								iLocal_3940 = get_interior_at_coords(441.02f, -978.93f, 30.69f);
								if (is_valid_interior(iLocal_3940))
								{
									_0x2CA429C029CCF247(iLocal_3940);
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								if (is_interior_ready(iLocal_3940))
								{
									set_interior_active(iLocal_3940, 1);
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 3:
								if (does_entity_exist(Global_88108.f_9[0]))
								{
									Local_1472[5 /*14*/] = Global_88108.f_9[0];
									Local_1472[6 /*14*/] = Global_88108.f_9[1];
									Local_1472[7 /*14*/] = Global_88108.f_9[2];
									Local_1472[8 /*14*/] = Global_88108.f_9[6];
									Local_1472[9 /*14*/] = Global_88108.f_9[3];
									Local_1472[10 /*14*/] = Global_88108.f_9[4];
									Local_1472[11 /*14*/] = Global_88108.f_9[5];
									set_entity_as_mission_entity(Local_1472[5 /*14*/], true, 1);
									set_entity_as_mission_entity(Local_1472[6 /*14*/], true, 1);
									set_entity_as_mission_entity(Local_1472[7 /*14*/], true, 1);
									set_entity_as_mission_entity(Local_1472[8 /*14*/], true, 1);
									set_entity_as_mission_entity(Local_1472[9 /*14*/], true, 1);
									set_entity_as_mission_entity(Local_1472[10 /*14*/], true, 1);
									set_entity_as_mission_entity(Local_1472[11 /*14*/], true, 1);
								}
								else
								{
									Local_1472[5 /*14*/] = create_ped(6, joaat("s_m_y_cop_01"), 441.0267f, -978.204f, 29.6895f, 192f, 1, true);
									Local_1472[6 /*14*/] = create_ped(6, joaat("s_m_y_cop_01"), 440.2506f, -975.6328f, 29.6895f, 356f, 1, true);
									Local_1472[7 /*14*/] = create_ped(6, joaat("s_m_y_cop_01"), 454.1487f, -979.894f, 29.6896f, 105.1729f, 1, true);
									Local_1472[8 /*14*/] = create_ped(6, joaat("s_m_y_cop_01"), 450.2071f, -992.9072f, 29.6896f, 316.4481f, 1, true);
									Local_1472[9 /*14*/] = create_ped(4, joaat("a_m_y_genstreet_02"), 436.9079f, -986.8186f, 29.6895f, 71.5386f, 1, true);
									Local_1472[10 /*14*/] = create_ped(4, joaat("a_m_y_genstreet_02"), 443.468f, -981.777f, 29.6895f, 30f, 1, true);
									Local_1472[11 /*14*/] = create_ped(4, joaat("a_m_y_genstreet_02"), 444.914f, -988.1146f, 29.6895f, 71.5386f, 1, true);
								}
								set_ped_component_variation(Local_1472[5 /*14*/], false, 2, 1, 0);
								set_ped_component_variation(Local_1472[5 /*14*/], 3, 0, 2, 0);
								set_ped_component_variation(Local_1472[5 /*14*/], 4, 0, 0, 0);
								set_ped_component_variation(Local_1472[5 /*14*/], 8, 0, 0, 0);
								set_ped_component_variation(Local_1472[5 /*14*/], 9, 0, 0, 0);
								set_ped_component_variation(Local_1472[5 /*14*/], 10, 0, 1, 0);
								set_ped_component_variation(Local_1472[6 /*14*/], false, 0, 1, 0);
								set_ped_component_variation(Local_1472[6 /*14*/], 3, 1, 0, 0);
								set_ped_component_variation(Local_1472[6 /*14*/], 4, 0, 0, 0);
								set_ped_component_variation(Local_1472[6 /*14*/], 8, 1, 0, 0);
								set_ped_component_variation(Local_1472[6 /*14*/], 9, 0, 0, 0);
								set_ped_component_variation(Local_1472[6 /*14*/], 10, 1, 0, 0);
								set_ped_component_variation(Local_1472[7 /*14*/], false, 0, 1, 0);
								set_ped_component_variation(Local_1472[7 /*14*/], 3, 0, 2, 0);
								set_ped_component_variation(Local_1472[7 /*14*/], 4, 0, 0, 0);
								set_ped_component_variation(Local_1472[7 /*14*/], 8, 0, 0, 0);
								set_ped_component_variation(Local_1472[7 /*14*/], 9, 1, 0, 0);
								set_ped_component_variation(Local_1472[7 /*14*/], 10, 1, 1, 0);
								set_ped_default_component_variation(Local_1472[8 /*14*/]);
								set_ped_can_ragdoll_from_player_impact(Local_1472[5 /*14*/], 0);
								stop_ped_speaking(Local_1472[5 /*14*/], 1);
								stop_ped_speaking(Local_1472[6 /*14*/], 1);
								stop_ped_speaking(Local_1472[7 /*14*/], 1);
								stop_ped_speaking(Local_1472[8 /*14*/], 1);
								give_weapon_to_ped(Local_1472[5 /*14*/], joaat("weapon_pistol"), -1, false, true);
								give_weapon_to_ped(Local_1472[6 /*14*/], joaat("weapon_pistol"), -1, false, true);
								give_weapon_to_ped(Local_1472[7 /*14*/], joaat("weapon_pistol"), -1, false, true);
								give_weapon_to_ped(Local_1472[8 /*14*/], joaat("weapon_pistol"), -1, false, true);
								task_start_scenario_in_place(Local_1472[5 /*14*/], "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
								task_start_scenario_in_place(Local_1472[6 /*14*/], "WORLD_HUMAN_CLIPBOARD", 0, 0);
								task_start_scenario_in_place(Local_1472[7 /*14*/], "WORLD_HUMAN_CLIPBOARD", 0, 0);
								_0x2208438012482A1A(Local_1472[5 /*14*/], 0, 0);
								_0x2208438012482A1A(Local_1472[6 /*14*/], 0, 0);
								_0x2208438012482A1A(Local_1472[7 /*14*/], 0, 0);
								task_start_scenario_in_place(Local_1472[9 /*14*/], "WORLD_HUMAN_BUM_STANDING", 0, 0);
								task_start_scenario_in_place(Local_1472[10 /*14*/], "WORLD_HUMAN_STAND_IMPATIENT", 0, 0);
								_0x2208438012482A1A(Local_1472[9 /*14*/], 0, 0);
								_0x2208438012482A1A(Local_1472[10 /*14*/], 0, 0);
								iVar1 = create_synchronized_scene(447.14f, -988.574f, 29.688f, 0f, 0f, -80.15f, 2);
								task_synchronized_scene(Local_1472[11 /*14*/], iVar1, "missheistdockssetup1ig_13@start_idle", "guard_beatup_startidle_dockworker", 1000f, -2f, 1, 0, 1000f, 0);
								task_synchronized_scene(Local_1472[8 /*14*/], iVar1, "missheistdockssetup1ig_13@start_idle", "guard_beatup_startidle_guard1", 1000f, -2f, 1, 0, 1000f, 0);
								set_synchronized_scene_looped(iVar1, true);
								_0x2208438012482A1A(Local_1472[11 /*14*/], 0, 0);
								_0x2208438012482A1A(Local_1472[8 /*14*/], 0, 0);
								set_ped_can_ragdoll(Local_1472[11 /*14*/], 0);
								Local_4435[iParam0 /*10*/].f_3 = 1;
								break;
						}
						break;
					
					case 3:
						if (!is_ped_injured(Local_1472[5 /*14*/]))
						{
							task_look_at_entity(Local_1472[5 /*14*/], player_ped_id(), 14000, 0, 2);
							task_look_at_entity(player_ped_id(), Local_1472[5 /*14*/], 14000, 0, 2);
						}
						Local_4435[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 4:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								Local_4435[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (func_44("cs2_cop1"))
								{
									if (get_current_scripted_conversation_line() == 0)
									{
										_0x293220DA1B46CEBC(7f, 5f, 4);
										Local_4435[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 2:
								if (!is_ped_injured(Local_1472[5 /*14*/]))
								{
									clear_ped_tasks(Local_1472[5 /*14*/]);
									func_483();
									task_play_anim(false, "misscarsteal2officer", "officer_point", 8f, -8f, -1, 0, 0, 0, 0, 0);
									task_start_scenario_in_place(false, "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
									func_482(Local_1472[5 /*14*/], 0);
									Local_4435[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 5:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!is_ped_injured(Local_1472[5 /*14*/]))
								{
									clear_ped_tasks(Local_1472[5 /*14*/]);
									func_483();
									task_follow_nav_mesh_to_coord(false, 464.19f, -985.8955f, 29.6897f, 1f, 40000, 0.25f, 0, 40000f);
									task_look_at_entity(false, player_ped_id(), 10000, 0, 2);
									task_turn_ped_to_face_entity(false, player_ped_id(), 5000);
									func_482(Local_1472[5 /*14*/], 0);
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (func_58(20))
								{
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								if (func_233(20))
								{
									Local_4435[iParam0 /*10*/].f_6 = 0;
								}
								break;
						}
						break;
					
					case 6:
						func_481(5);
						set_wanted_level_multiplier(1f);
						set_max_wanted_level(5);
						set_player_wanted_level(player_id(), 3, 0);
						set_player_wanted_level_now(player_id(), 0);
						if (!is_ped_injured(Local_1472[5 /*14*/]))
						{
							set_ped_as_no_longer_needed(&(Local_1472[5 /*14*/]));
						}
						Local_4435[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 7:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								request_model(joaat("polmav"));
								request_model(iLocal_3136);
								Local_4435[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (has_model_loaded(joaat("polmav")) && has_model_loaded(iLocal_3136))
								{
									_0xAF66DCEE6609B148();
									Local_1725[0 /*2*/] = create_vehicle(joaat("polmav"), 449.035f, -982.4875f, 42.6919f, 357.5347f, 1, 1);
									set_vehicle_livery(Local_1725[0 /*2*/], 0);
									set_vehicle_engine_on(Local_1725[0 /*2*/], false, 1, 0);
									set_vehicle_doors_locked(Local_1725[0 /*2*/], 1);
									set_vehicle_radio_enabled(Local_1725[0 /*2*/], 0);
									set_vehicle_on_ground_properly(Local_1725[0 /*2*/]);
									func_480(1);
									func_483();
									task_start_scenario_in_place(false, "WORLD_HUMAN_AA_SMOKE", 0, 0);
									task_look_at_coord(false, 453.9144f, -948.0502f, 44.276f, -1, 0, 2);
									task_pause(false, 99999999);
									func_482(Local_1472[2 /*14*/], 0);
									Local_4435[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 8:
						if (!is_ped_injured(Local_1472[9 /*14*/]))
						{
							if (Global_25371)
							{
								if (func_156(Local_1472[9 /*14*/], player_ped_id(), 1) < 5f)
								{
									task_use_nearest_scenario_to_coord(Local_1472[9 /*14*/], get_entity_coords(Local_1472[9 /*14*/], 1), 30f, 0);
									Local_4435[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					
					case 9:
						func_483();
						task_follow_nav_mesh_to_coord(false, 441.256f, -977.9714f, 29.6895f, 1f, 20000, 0.25f, 0, 40000f);
						task_start_scenario_in_place(false, "WORLD_HUMAN_HANG_OUT_STREET", 0, 0);
						func_482(Local_1472[5 /*14*/], 0);
						Local_4435[iParam0 /*10*/].f_3 = 1;
						func_479(3, 5, 1);
						break;
					
					case 10:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								_0x293220DA1B46CEBC(8f, 10f, 4);
								set_player_control(player_id(), false, 256);
								task_enter_vehicle(player_ped_id(), Local_1725[0 /*2*/], 20000, false, 2f, 262144, 0);
								if (does_blip_exist(iLocal_3934))
								{
									remove_blip(&iLocal_3934);
								}
								clear_prints();
								if (!is_ped_injured(Local_1472[2 /*14*/]))
								{
									task_look_at_entity(Local_1472[2 /*14*/], player_ped_id(), 6000, 0, 2);
								}
								func_477(1);
								Local_4435[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (get_script_task_status(player_ped_id(), -1794415470) == 7 || get_script_task_status(player_ped_id(), -1794415470) == 2)
								{
									task_enter_vehicle(player_ped_id(), Local_1725[0 /*2*/], 20000, false, 2f, 262144, 0);
								}
								if (get_script_task_status(player_ped_id(), -1794415470) == 1)
								{
									if (is_ped_in_any_vehicle(player_ped_id(), 1))
									{
										Local_4435[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 11:
						if (!is_ped_injured(Local_1472[2 /*14*/]) && is_vehicle_driveable(Local_1725[0 /*2*/], 0))
						{
							func_483();
							task_heli_mission(false, Local_1725[0 /*2*/], false, false, 447.0187f, -982.2263f, 73.6343f, 4, 15f, 1f, 0f, 130, 30, -1f, 0);
							task_heli_mission(false, Local_1725[0 /*2*/], false, false, 727.9601f, -1085.078f, 131.2213f, 9, 15f, 1f, 0f, 130, 30, -1f, 0);
							func_482(Local_1472[2 /*14*/], 0);
							Local_4435[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 12:
						if (!is_ped_injured(Local_1472[2 /*14*/]) && is_vehicle_driveable(Local_1725[0 /*2*/], 0))
						{
							func_483();
							task_look_at_entity(false, player_ped_id(), 15000, 0, 2);
							task_pause(false, 1000);
							task_enter_vehicle(false, Local_1725[0 /*2*/], 20000, -1, 1f, 1, 0);
							task_heli_mission(false, Local_1725[0 /*2*/], false, false, get_entity_coords(Local_1725[0 /*2*/], 1), 20, 0f, 5f, 0f, 0, 0, -1f, 0);
							func_482(Local_1472[2 /*14*/], 0);
							Local_4435[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 13:
						if (!is_ped_injured(Local_1472[5 /*14*/]))
						{
							func_483();
							task_follow_nav_mesh_to_coord(false, 453.0859f, -985.3833f, 29.6896f, 2f, 20000, 0.25f, 0, 40000f);
							task_turn_ped_to_face_entity(false, player_ped_id(), 0);
							func_482(Local_1472[5 /*14*/], 0);
							Local_4435[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 16:
						if (iLocal_2192 == 2)
						{
							clear_prints();
							Local_4435[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 15:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								if (has_anim_dict_loaded("switch@trevor@head_in_sink"))
								{
									Local_4435[iParam0 /*10*/].f_6 = 2;
								}
								break;
							
							case 3:
								hide_hud_and_radar_this_frame();
								func_476();
								render_script_cams(false, false, 3000, 1, 0, 0);
								set_player_control(player_id(), false, 0);
								destroy_all_cams(0);
								iVar2 = create_cam("DEFAULT_SPLINE_CAMERA", true);
								add_cam_spline_node(iVar2, 417.4168f, -964.0216f, 31.2312f, 22.2372f, 0f, -121.6787f, 6500, 3, 2);
								add_cam_spline_node(iVar2, 417.3173f, -965.3885f, 31.2487f, -17.7868f, 0f, -164.7233f, 4500, 3, 2);
								_0xD1B0F412F109EA5D(iVar2, 3);
								set_cam_active(iVar2, true);
								set_cam_fov(iVar2, 46.25f);
								render_script_cams(true, false, 3000, 1, 0, 0);
								Local_4435[iParam0 /*10*/].f_7 = create_synchronized_scene(419.776f, -969.354f, 29.529f, 0f, 0f, -108.72f, 2);
								task_synchronized_scene(player_ped_id(), Local_4435[iParam0 /*10*/].f_7, "switch@trevor@head_in_sink", "trev_sink_exit", 1000f, -2f, 0, 0, 1000f, 0);
								set_synchronized_scene_looped(Local_4435[iParam0 /*10*/].f_7, false);
								set_synchronized_scene_rate(Local_4435[iParam0 /*10*/].f_7, 0f);
								clear_area(418.9293f, -969.5886f, 29.41168f, 4f, 1, 0, 0, false);
								Local_4435[iParam0 /*10*/].f_6 = 4;
								Local_4435[iParam0 /*10*/].f_8 = get_game_timer() + 1800;
								func_471(408.866f, -964.7565f, 26.65749f, 407.2291f, -989.1416f, 34.57925f, 24.8125f, 407.1f, -983.7553f, 28.2668f, 233.2444f, 4f, 10f, 6f, 1, 1, 1, 0, 0);
								break;
							
							case 4:
								hide_hud_and_radar_this_frame();
								func_476();
								if (get_game_timer() > Local_4435[iParam0 /*10*/].f_8)
								{
									set_synchronized_scene_rate(Local_4435[iParam0 /*10*/].f_7, 1f);
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 5:
								hide_hud_and_radar_this_frame();
								func_476();
								if (((is_synchronized_scene_running(Local_4435[iParam0 /*10*/].f_7) && get_synchronized_scene_phase(Local_4435[iParam0 /*10*/].f_7) > 0.67f) && func_470()) || !is_synchronized_scene_running(Local_4435[iParam0 /*10*/].f_7))
								{
									clear_ped_tasks(player_ped_id());
									set_player_control(player_id(), true, 0);
									_0xC819F3CBB62BF692(0, 0f, 3, 0);
									destroy_all_cams(0);
									if (is_vehicle_driveable(Local_1725[0 /*2*/], 0))
									{
										set_gameplay_entity_hint(Local_1725[0 /*2*/], 0f, 0f, -7f, 1, 6000, 5000, 4000, 0);
									}
									Local_4435[iParam0 /*10*/].f_3 = 1;
								}
								break;
							
							case 6:
								if (!is_synchronized_scene_running(Local_4435[iParam0 /*10*/].f_7))
								{
									remove_anim_dict("switch@trevor@head_in_sink");
								}
								break;
						}
						break;
					
					case 17:
						disable_control_action(1, 0, 1);
						disable_control_action(0, 0, 1);
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								request_anim_dict("misscarsteal2franklin_on_bench");
								request_anim_dict("AMB@PROP_HUMAN_SEAT_CHAIR@MALE@LEFT_ELBOW_ON_KNEE@BASE");
								request_model(iLocal_3136);
								request_model(joaat("polmav"));
								Local_4435[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (has_anim_dict_loaded("misscarsteal2franklin_on_bench") && has_anim_dict_loaded("AMB@PROP_HUMAN_SEAT_CHAIR@MALE@LEFT_ELBOW_ON_KNEE@BASE"))
								{
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 3:
								render_script_cams(false, false, 3000, 1, 0, 0);
								func_476();
								set_player_control(player_id(), false, 0);
								destroy_all_cams(0);
								iVar3 = create_cam("DEFAULT_SPLINE_CAMERA", true);
								add_cam_spline_node(iVar3, 1411.643f, -2045.374f, 52.0791f, -4.6833f, 0.165f, 106.0461f, 6500, 3, 2);
								add_cam_spline_node(iVar3, 1411.875f, -2045.208f, 51.9994f, 7.385f, 0.165f, 120.462f, 4000, 3, 2);
								_0xD1B0F412F109EA5D(iVar3, 2);
								set_cam_active(iVar3, true);
								set_cam_fov(iVar3, 50f);
								render_script_cams(true, false, 3000, 1, 0, 0);
								Local_4435[iParam0 /*10*/].f_7 = create_synchronized_scene(1409.681f, -2045.772f, 51.5f, 0f, 0f, 144.5f, 2);
								task_synchronized_scene(player_ped_id(), Local_4435[iParam0 /*10*/].f_7, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@LEFT_ELBOW_ON_KNEE@BASE", "base", 1000f, -4f, 0, 0, 1000f, 0);
								set_synchronized_scene_looped(Local_4435[iParam0 /*10*/].f_7, true);
								Local_4435[iParam0 /*10*/].f_6 = 4;
								Local_4435[iParam0 /*10*/].f_8 = get_game_timer() + 2000;
								break;
							
							case 35:
								if (does_entity_exist(Local_1725[0 /*2*/]))
								{
									set_gameplay_entity_hint(Local_1725[0 /*2*/], 0f, 0f, 0f, 1, 10000, 6000, 2000, 0);
									Local_4435[iParam0 /*10*/].f_6 = 4;
								}
								break;
							
							case 4:
								func_476();
								if (get_game_timer() > Local_4435[iParam0 /*10*/].f_8 || func_470())
								{
									Local_4435[iParam0 /*10*/].f_8 = create_synchronized_scene(1409.681f, -2045.772f, 51.5f, 0f, 0f, 144.5f, 2);
									task_synchronized_scene(player_ped_id(), Local_4435[iParam0 /*10*/].f_8, "misscarsteal2franklin_on_bench", "exit_forward", 4f, -4f, 8, 0, 1000f, 0);
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 5:
								func_476();
								if ((is_synchronized_scene_running(Local_4435[iParam0 /*10*/].f_8) && get_synchronized_scene_phase(Local_4435[iParam0 /*10*/].f_8) > 0.97f) || !is_synchronized_scene_running(Local_4435[iParam0 /*10*/].f_8))
								{
									clear_ped_tasks(player_ped_id());
									set_player_control(player_id(), true, 0);
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 6:
								func_476();
								if (func_470())
								{
									_0xC819F3CBB62BF692(0, 0f, 3, 0);
									destroy_all_cams(0);
									if (is_vehicle_driveable(Local_1725[0 /*2*/], 0))
									{
										set_gameplay_entity_hint(Local_1725[0 /*2*/], 0f, 0f, -7f, 1, 6000, 5000, 4000, 0);
									}
									Local_4435[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 19:
						func_444(&Local_2194, Local_1725[0 /*2*/], 1, 0);
						set_audio_flag("AllowPoliceScannerWhenPlayerHasNoControl", 1);
						func_443();
						if (does_entity_exist(Local_1472[2 /*14*/]))
						{
							delete_ped(&(Local_1472[2 /*14*/]));
							set_model_as_no_longer_needed(iLocal_3136);
						}
						if (is_vehicle_driveable(Local_1725[0 /*2*/], 0))
						{
							freeze_entity_position(Local_1725[0 /*2*/], false);
							set_vehicle_engine_on(Local_1725[0 /*2*/], true, 1, 0);
							set_heli_blades_full_speed(Local_1725[0 /*2*/]);
						}
						Local_2194.f_6 = 1;
						func_813(3);
						start_audio_scene("CAR_2_HELI_CAM_TUTORIAL");
						func_835(45);
						Local_4435[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 20:
						func_213(1, 2);
						Local_4435[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 21:
						if (!is_ped_injured(Local_1472[4 /*14*/]) || Local_4435[iParam0 /*10*/].f_6 == 99)
						{
							switch (Local_4435[iParam0 /*10*/].f_6)
							{
								case 99:
									remove_anim_dict("misscarsteal2");
									Local_4435[iParam0 /*10*/].f_3 = 1;
									break;
								
								case 0:
									request_anim_dict("misscarsteal2");
									Local_4435[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (has_anim_dict_loaded("misscarsteal2"))
									{
										Local_4435[iParam0 /*10*/].f_6++;
									}
									break;
								
								case 2:
									if (is_ped_in_any_vehicle(Local_1472[4 /*14*/], 0) || is_ped_sitting_in_any_vehicle(Local_1472[4 /*14*/]))
									{
										if (get_script_task_status(Local_1472[4 /*14*/], -828834893) == 7)
										{
											task_leave_any_vehicle(Local_1472[4 /*14*/], 0, 0);
										}
									}
									else if (func_157(Local_1472[4 /*14*/], 1390.733f, -2063.394f, 50.9983f, 1) < 5f)
									{
										if (!is_ped_injured(Local_1472[4 /*14*/]))
										{
											if (absf(func_440(Local_1472[4 /*14*/], player_ped_id())) > 45f)
											{
												if (get_script_task_status(Local_1472[4 /*14*/], -875674219) != 1)
												{
													task_turn_ped_to_face_entity(Local_1472[4 /*14*/], player_ped_id(), 2000);
												}
											}
											else if (get_script_task_status(Local_1472[4 /*14*/], 242628503) == 7 && get_script_task_status(Local_1472[4 /*14*/], -875674219) == 7)
											{
												func_483();
												task_look_at_entity(false, player_ped_id(), 5000, 0, 2);
												func_482(Local_1472[4 /*14*/], 0);
											}
										}
									}
									else
									{
										task_follow_nav_mesh_to_coord(Local_1472[4 /*14*/], 1390.733f, -2063.394f, 50.9983f, 2f, 20000, 0.25f, 0, 40000f);
										Local_4435[iParam0 /*10*/].f_6++;
									}
									break;
								
								case 3:
									if (func_157(Local_1472[4 /*14*/], 1390.733f, -2063.394f, 50.9983f, 1) < 5f)
									{
										Local_4435[iParam0 /*10*/].f_6 = 2;
									}
									break;
								}
						}
						break;
					
					case 22:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!is_ped_injured(Local_1472[4 /*14*/]) && is_vehicle_driveable(Local_1725[0 /*2*/], 0))
								{
									task_sweep_aim_entity(Local_1472[4 /*14*/], "missCarsteal2", "sweep_high", "sweep_high", "sweep_high", -1, Local_1725[0 /*2*/], 1.57f, 1f);
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (!is_ped_injured(Local_1472[4 /*14*/]) && is_vehicle_driveable(Local_1725[0 /*2*/], 0))
								{
									if (get_script_task_status(Local_1472[4 /*14*/], 1226471469) == 1)
									{
										update_task_sweep_aim_entity(Local_1472[4 /*14*/], Local_1725[0 /*2*/]);
									}
									else
									{
										Local_4435[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 24:
						_0x07FB139B592FA687(1598.694f, -2350.996f, -200.3946f, 368.2026f);
						if (!does_entity_exist(Local_1472[4 /*14*/]))
						{
							Local_4435[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 25:
						if (Local_4435[iParam0 /*10*/].f_6 == 0)
						{
							if (is_vehicle_driveable(Local_1725[1 /*2*/], 0))
							{
								if (get_entity_model(Local_1725[1 /*2*/]) != joaat("buffalo2"))
								{
									Local_1725[1 /*2*/] = 0;
								}
							}
							if (!is_vehicle_driveable(Local_1725[1 /*2*/], 0) || (is_vehicle_driveable(Local_1725[1 /*2*/], 0) && func_157(Local_1725[1 /*2*/], 1380.772f, -2066.011f, 50.9983f, 1) > 60f))
							{
								if (!is_sphere_visible(1388.482f, -2043.429f, 50.9985f, 5f) && !is_any_vehicle_near_point(1388.482f, -2043.429f, 50.9985f, 5f))
								{
									Local_4435[iParam0 /*10*/].f_6 = 1;
								}
								else if (!is_sphere_visible(1408.543f, -2057.734f, 50.9983f, 5f) && !is_any_vehicle_near_point(1408.543f, -2057.734f, 50.9983f, 5f))
								{
									Local_4435[iParam0 /*10*/].f_6 = 2;
								}
								else if (!is_sphere_visible(1375.769f, -2080.064f, 50.9983f, 5f) && !is_any_vehicle_near_point(1375.769f, -2080.064f, 50.9983f, 5f))
								{
									Local_4435[iParam0 /*10*/].f_6 = 3;
								}
							}
						}
						if (Local_4435[iParam0 /*10*/].f_6 > 0)
						{
							switch (Local_4435[iParam0 /*10*/].f_6)
							{
								case 1:
									if (func_410(&(Local_1725[1 /*2*/]), 1, 1388.482f, -2043.429f, 50.9985f, 135.7372f, 1, 1))
									{
										Local_4435[iParam0 /*10*/].f_3 = 1;
									}
									break;
								
								case 2:
									if (func_410(&(Local_1725[1 /*2*/]), 1, 1408.543f, -2057.734f, 50.9983f, 108.4516f, 1, 1))
									{
										Local_4435[iParam0 /*10*/].f_3 = 1;
									}
									break;
								
								case 3:
									if (func_410(&(Local_1725[1 /*2*/]), 1, 1375.769f, -2080.064f, 50.9983f, 312.541f, 1, 1))
									{
										Local_4435[iParam0 /*10*/].f_3 = 1;
									}
									break;
							}
						}
						else
						{
							Local_4435[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 26:
						if (!is_ped_injured(Local_1472[4 /*14*/]))
						{
							set_ped_lod_multiplier(Local_1472[4 /*14*/], 1.7f);
							Local_4435[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 27:
						if (!is_ped_injured(Local_1472[4 /*14*/]))
						{
							set_ped_lod_multiplier(Local_1472[4 /*14*/], 1f);
							Local_4435[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 23:
						if (!is_ped_injured(Local_1472[4 /*14*/]))
						{
							switch (Local_4435[iParam0 /*10*/].f_6)
							{
								case 99:
									remove_anim_dict("misscarsteal2");
									Local_4435[iParam0 /*10*/].f_3 = 1;
									break;
								
								case 0:
									if (is_vehicle_driveable(Local_1725[1 /*2*/], 0))
									{
										func_483();
										task_enter_vehicle(false, Local_1725[1 /*2*/], 20000, -1, 2f, 1, 0);
										task_vehicle_drive_to_coord_longrange(false, Local_1725[1 /*2*/], -93.9606f, -68.0128f, 55.7683f, 18f, 786603, 5f);
										func_482(Local_1472[4 /*14*/], 0);
									}
									remove_anim_dict("misscarsteal2");
									func_479(2, 21, 1);
									Local_4435[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (is_ped_in_any_vehicle(Local_1472[4 /*14*/], 0))
									{
										if (is_vehicle_driveable(Local_1725[1 /*2*/], 0))
										{
											detach_vehicle_from_any_tow_truck(Local_1725[1 /*2*/]);
											Local_4435[iParam0 /*10*/].f_3 = 1;
										}
									}
									break;
								}
						}
						break;
					
					case 28:
						if (func_409(-10.7022f, -33.1513f, 69.2777f, 30f, 500f))
						{
							if (is_sphere_visible(-27.9336f, -35.7344f, 88.8509f, 10f))
							{
								Local_4435[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 29:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								if (is_audio_scene_active("CAR_2_SCANNING_TARGET"))
								{
									stop_audio_scene("CAR_2_SCANNING_TARGET");
								}
								if (Local_2194.f_128 == 1)
								{
									start_audio_scene("CAR_2_SCANNING_TARGET");
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (Local_2194.f_128 == 0)
								{
									stop_audio_scene("CAR_2_SCANNING_TARGET");
									Local_4435[iParam0 /*10*/].f_6 = 0;
								}
								break;
						}
						break;
					
					case 30:
						if (func_60(&Local_2194, Local_1472[3 /*14*/]))
						{
							stop_audio_scene("CAR_2_SCAN_THE_SUSPECTS");
							start_audio_scene("CAR_2_FOLLOW_CHAD_ON_FOOT");
							Local_4435[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 31:
						if (!is_entity_on_screen(Local_1472[4 /*14*/]))
						{
							Local_4435[iParam0 /*10*/].f_9 += timestep();
							if (Local_4435[iParam0 /*10*/].f_9 > 10000f)
							{
								if (!is_ped_injured(Local_1472[4 /*14*/]))
								{
									delete_ped(&(Local_1472[4 /*14*/]));
								}
								if (is_vehicle_driveable(Local_1725[1 /*2*/], 0))
								{
									if (!does_entity_belong_to_this_script(Local_1725[1 /*2*/], 1))
									{
										set_entity_as_mission_entity(Local_1725[1 /*2*/], true, 1);
										delete_vehicle(&(Local_1725[1 /*2*/]));
									}
								}
								Local_4435[iParam0 /*10*/].f_3 = 1;
							}
						}
						else
						{
							Local_4435[iParam0 /*10*/].f_9 = 0f;
						}
						break;
					
					case 32:
						play_sound_from_entity(-1, "Garage_Open", Local_1472[3 /*14*/], "CAR_STEAL_2_SOUNDSET", 0, 0);
						Local_4435[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 33:
						if (!func_409(-10.7022f, -33.1513f, 69.2777f, 30f, 500f) && !func_409(-30.3868f, -90.256f, 59.0222f, 30f, 500f))
						{
							func_835(52);
							func_835(50);
							func_813(6);
							Local_4435[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 34:
						if (func_407(6))
						{
							func_405(202.7272f, -149.7968f, 56.176f, 160f);
							Local_4435[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 35:
						if (iLocal_3939 == 5 || Local_4435[iParam0 /*10*/].f_6 == 0)
						{
							switch (Local_4435[iParam0 /*10*/].f_6)
							{
								case 0:
									if (request_script_audio_bank("CAR_STEAL2_DISTANT_DOG", false))
									{
										Local_4435[iParam0 /*10*/].f_8 = get_sound_id();
										Local_4435[iParam0 /*10*/].f_6++;
									}
									break;
								
								case 2:
									if (!is_ped_injured(Local_1472[16 /*14*/]))
									{
										if (is_entity_playing_anim(Local_1472[16 /*14*/], "CREATURES@ROTTWEILER@AMB@WORLD_DOG_BARKING@idle_a", "idle_a", 3))
										{
											fVar4 = get_entity_anim_current_time(Local_1472[16 /*14*/], "CREATURES@ROTTWEILER@AMB@WORLD_DOG_BARKING@idle_a", "idle_a");
											if ((((((fVar4 >= 0f && fVar4 < 0.02f) || (fVar4 >= 0.173f && fVar4 < 0.193f)) || (fVar4 >= 0.348f && fVar4 < 0.368f)) || (fVar4 >= 0.528f && fVar4 < 0.548f)) || (fVar4 >= 0.633f && fVar4 < 0.653f)) || (fVar4 >= 0.818f && fVar4 < 0.838f))
											{
												play_sound_frontend(Local_4435[iParam0 /*10*/].f_8, "DISTANT_DOG_BARK", "CAR_STEAL_2_SOUNDSET", 1);
												Local_4435[iParam0 /*10*/].f_6++;
												Local_4435[iParam0 /*10*/].f_7 = get_game_timer() + 500;
											}
										}
									}
									break;
								
								case 3:
									if (get_game_timer() > Local_4435[iParam0 /*10*/].f_7)
									{
										Local_4435[iParam0 /*10*/].f_6 = 2;
									}
									break;
								
								case 10:
									Local_4435[iParam0 /*10*/].f_3 = 1;
									break;
								}
						}
						break;
					
					case 36:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								if (Local_2194.f_132)
								{
									Local_4435[iParam0 /*10*/].f_7 = get_sound_id();
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (Local_2194.f_132)
								{
									play_sound_frontend(iLocal_3938, "Lost_Target", "POLICE_CHOPPER_CAM_SOUNDS", 1);
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								if (!Local_2194.f_132)
								{
									play_sound_frontend(iLocal_3938, "Found_Target", "POLICE_CHOPPER_CAM_SOUNDS", 1);
									Local_4435[iParam0 /*10*/].f_6 = 1;
								}
								break;
						}
						break;
					
					case 37:
						set_ped_paths_in_area(Vector(46.3507f, -100.4234f, -290.3812f) - Vector(10f, 10f, 10f), Vector(46.3507f, -100.4234f, -290.3812f) + Vector(10f, 10f, 10f), false, 0);
						Local_4435[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 38:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_44("cs2_chase2"))
								{
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (!func_44("cs2_chase2"))
								{
									stop_audio_scene("CAR_2_CAR_CHASE_START");
									start_audio_scene("CAR_2_CAR_CHASE_CONTINUED");
									Local_4435[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 39:
						if (request_script_audio_bank("Car_Steal_2_Chase_Skids_01", false) && request_script_audio_bank("Car_Steal_2_Chase_Skids_02", false))
						{
							if (is_vehicle_driveable(Local_1725[2 /*2*/], 0))
							{
								set_audio_vehicle_priority(Local_1725[2 /*2*/], 3);
							}
							Local_4435[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 40:
						if (does_entity_exist(Local_2194.f_9) && does_entity_exist(Local_1725[2 /*2*/]))
						{
							vVar5 = {get_cam_rot(Local_2194.f_32, 2)};
							func_403(get_entity_coords(Local_2194.f_9, 0), get_entity_coords(Local_1725[2 /*2*/], 0), &vVar8, &(vVar8.f_2), 1);
							fVar11 = cos(vVar5.z - vVar8.z);
							fVar12 = cos(vVar5.x - vVar8.x);
							fVar13 = cos(vVar5.x + vVar8.x);
							fVar14 = acos(fVar11 * fVar12 + fVar13 + fVar12 - fVar13 / 2f);
							set_audio_scene_variable("CAR_2_Z_TYPE_ENGINE_BOOST", "TargetCarVisibility", fVar14);
						}
						break;
					
					case 41:
						create_model_hide(-111.8944f, -188.65f, 46.02f, 1f, joaat("prop_tree_birch_04"), 1);
						create_model_hide(-109.937f, -179.954f, 47.62f, 1f, joaat("prop_tree_birch_04"), 1);
						create_model_hide(-108.3848f, -171.323f, 49.34f, 1f, joaat("prop_tree_birch_04"), 1);
						Local_4435[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 42:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								Local_4435[iParam0 /*10*/].f_7 = get_game_timer() + 2000;
								Local_4435[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (get_game_timer() > Local_4435[iParam0 /*10*/].f_7)
								{
									func_872(15, 14, 0);
									Local_4435[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 43:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 99:
								if (does_entity_exist(Local_1472[5 /*14*/]))
								{
									if (!is_ped_injured(Local_1472[5 /*14*/]))
									{
										if (is_vehicle_driveable(Local_1725[8 /*2*/], 0))
										{
											set_ped_into_vehicle(Local_1472[5 /*14*/], Local_1725[8 /*2*/], -1);
											func_483();
											task_look_at_coord(false, get_offset_from_entity_in_world_coords(Local_1472[5 /*14*/], -5f, 5f, 0f), 15000, 0, 2);
											task_pause(false, 15000);
											task_look_at_coord(false, get_offset_from_entity_in_world_coords(Local_1472[5 /*14*/], 5f, 5f, 0f), 15000, 0, 2);
											task_pause(false, 15000);
											func_482(Local_1472[5 /*14*/], 1);
										}
										set_ped_keep_task(Local_1472[5 /*14*/], true);
										set_blocking_of_non_temporary_events(Local_1472[5 /*14*/], false);
										set_ped_as_no_longer_needed(&(Local_1472[5 /*14*/]));
									}
								}
								if (does_entity_exist(Local_1725[8 /*2*/]))
								{
									set_vehicle_as_no_longer_needed(&(Local_1725[8 /*2*/]));
								}
								break;
							
							case 0:
								if (func_407(7))
								{
									Local_4435[iParam0 /*10*/].f_6 = 100;
									Local_4435[iParam0 /*10*/].f_7 = get_game_timer() + 1000;
								}
								break;
							
							case 100:
								if (get_game_timer() > Local_4435[iParam0 /*10*/].f_7)
								{
									func_484(iParam0);
									Local_4435[iParam0 /*10*/].f_6 = 1;
								}
								break;
							
							case 1:
								func_402(8, joaat("dominator"), -1269.403f, -212.2201f, 50.8255f, -56.5256f, -1027080192);
								func_401(5, joaat("a_m_y_genstreet_01"), Local_1725[8 /*2*/], -1, 0, 0);
								Local_4435[iParam0 /*10*/].f_6++;
								break;
							
							case 2:
								if (func_58(77))
								{
									func_483();
									task_leave_any_vehicle(false, 0, 0);
									task_follow_nav_mesh_to_coord(false, -1269.91f, -210.0006f, 50.5499f, 1f, 20000, 0.25f, 0, 40000f);
									task_play_anim(false, "misscarsteal2peeing", "peeing_intro", 8f, -8f, -1, 0, 0, 0, 0, 0);
									task_play_anim(false, "misscarsteal2peeing", "peeing_loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
									func_482(Local_1472[5 /*14*/], 0);
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 3:
								if (func_400(15, 56))
								{
									Local_4435[iParam0 /*10*/].f_7 = get_game_timer() + 6000;
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 4:
								if (get_game_timer() > Local_4435[iParam0 /*10*/].f_7)
								{
									if (is_vehicle_driveable(Local_1725[8 /*2*/], 0))
									{
										func_483();
										task_play_anim(false, "misscarsteal2peeing", "peeing_outro", 8f, -8f, -1, 0, 0, 0, 0, 0);
										task_enter_vehicle(false, Local_1725[8 /*2*/], 20000, -1, 1f, 1, 0);
										func_482(Local_1472[5 /*14*/], 0);
										remove_anim_dict("misscarsteal2peeing");
										Local_4435[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 45:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 99:
								if (does_entity_exist(Local_1472[6 /*14*/]))
								{
									if (!is_ped_injured(Local_1472[6 /*14*/]))
									{
										if (is_vehicle_driveable(Local_1725[9 /*2*/], 0))
										{
											set_ped_into_vehicle(Local_1472[6 /*14*/], Local_1725[9 /*2*/], -1);
											func_483();
											task_look_at_coord(false, get_offset_from_entity_in_world_coords(Local_1472[6 /*14*/], -5f, 5f, 0f), 15000, 0, 2);
											task_pause(false, 15000);
											task_look_at_coord(false, get_offset_from_entity_in_world_coords(Local_1472[6 /*14*/], 5f, 5f, 0f), 15000, 0, 2);
											task_pause(false, 15000);
											func_482(Local_1472[6 /*14*/], 1);
										}
										set_ped_keep_task(Local_1472[6 /*14*/], true);
										set_blocking_of_non_temporary_events(Local_1472[6 /*14*/], false);
										set_ped_as_no_longer_needed(&(Local_1472[6 /*14*/]));
									}
								}
								if (is_vehicle_driveable(Local_1725[9 /*2*/], 0))
								{
									set_vehicle_as_no_longer_needed(&(Local_1725[9 /*2*/]));
								}
								break;
							
							case 0:
								func_484(iParam0);
								Local_4435[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (func_407(7))
								{
									func_402(9, joaat("dominator"), -1260.322f, -244.883f, 50.7755f, 29.36f, -1027080192);
									set_vehicle_door_open(Local_1725[9 /*2*/], 4, 0, 0);
									func_287(6, joaat("a_m_y_genstreet_01"), -1260.095f, -244.781f, 51.224f, 34.618f, 2, 0, 0);
									iLocal_3113 = create_synchronized_scene(-1260.66f, -244.607f, 50.957f, 0f, 0f, 32.4f, 2);
									task_synchronized_scene(Local_1472[6 /*14*/], iLocal_3113, "misscarsteal2fixer", "confused_a", 1000f, -4f, 0, 0, 1000f, 0);
									set_synchronized_scene_looped(iLocal_3113, true);
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
						}
						break;
					
					case 46:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 99:
								if (does_entity_exist(Local_1472[7 /*14*/]))
								{
									if (!is_ped_injured(Local_1472[7 /*14*/]))
									{
										if (is_vehicle_driveable(Local_1725[10 /*2*/], 0))
										{
											set_ped_into_vehicle(Local_1472[7 /*14*/], Local_1725[10 /*2*/], -1);
											func_483();
											task_look_at_coord(false, get_offset_from_entity_in_world_coords(Local_1472[7 /*14*/], -5f, 5f, 0f), 15000, 0, 2);
											task_pause(false, 15000);
											task_look_at_coord(false, get_offset_from_entity_in_world_coords(Local_1472[7 /*14*/], 5f, 5f, 0f), 15000, 0, 2);
											task_pause(false, 15000);
											func_482(Local_1472[7 /*14*/], 1);
										}
										set_ped_keep_task(Local_1472[7 /*14*/], true);
										set_blocking_of_non_temporary_events(Local_1472[7 /*14*/], false);
										set_ped_as_no_longer_needed(&(Local_1472[7 /*14*/]));
									}
								}
								if (is_vehicle_driveable(Local_1725[10 /*2*/], 0))
								{
									set_vehicle_as_no_longer_needed(&(Local_1725[10 /*2*/]));
								}
								break;
							
							case 0:
								func_484(iParam0);
								Local_4435[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (func_407(7))
								{
									func_402(10, joaat("habanero"), -1260.889f, -226.0429f, 50.5499f, 303.048f, -1027080192);
									set_vehicle_door_open(Local_1725[10 /*2*/], false, 0, 0);
									func_287(7, joaat("a_m_y_genstreet_01"), -1260.095f, -244.781f, 51.224f, 34.618f, 2, 0, 0);
									iLocal_3114 = create_synchronized_scene(-1261.042f, -225.594f, 51.12f, 0f, 0f, -53.64f, 2);
									task_synchronized_scene(Local_1472[7 /*14*/], iLocal_3114, "misscarsteal2", "wrong_house_dave_dave", 1000f, -4f, 0, 0, 1000f, 0);
									set_synchronized_scene_looped(iLocal_3114, true);
									set_synchronized_scene_phase(iLocal_3114, 0.41f);
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								if (get_synchronized_scene_phase(iLocal_3114) > 0.835f)
								{
									set_synchronized_scene_phase(iLocal_3114, 0.46f);
								}
								break;
						}
						break;
					
					case 47:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 99:
								if (does_entity_exist(Local_1472[8 /*14*/]))
								{
									if (!is_ped_injured(Local_1472[8 /*14*/]))
									{
										if (is_vehicle_driveable(Local_1725[11 /*2*/], 0))
										{
											set_ped_into_vehicle(Local_1472[8 /*14*/], Local_1725[11 /*2*/], -1);
											func_483();
											task_look_at_coord(false, get_offset_from_entity_in_world_coords(Local_1472[8 /*14*/], -5f, 5f, 0f), 15000, 0, 2);
											task_pause(false, 15000);
											task_look_at_coord(false, get_offset_from_entity_in_world_coords(Local_1472[8 /*14*/], 5f, 5f, 0f), 15000, 0, 2);
											task_pause(false, 15000);
											func_482(Local_1472[8 /*14*/], 1);
										}
										set_ped_keep_task(Local_1472[8 /*14*/], true);
										set_blocking_of_non_temporary_events(Local_1472[8 /*14*/], false);
										set_ped_as_no_longer_needed(&(Local_1472[8 /*14*/]));
									}
								}
								if (is_vehicle_driveable(Local_1725[11 /*2*/], 0))
								{
									set_vehicle_as_no_longer_needed(&(Local_1725[11 /*2*/]));
								}
								break;
							
							case 0:
								func_484(iParam0);
								Local_4435[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (func_407(7))
								{
									func_287(8, joaat("a_m_y_genstreet_01"), -1260.095f, -244.781f, 51.224f, 34.618f, 2, 0, 0);
									iLocal_3115 = create_synchronized_scene(-1293.832f, -184.969f, 50.87f, 0f, 0f, 180f, 2);
									task_synchronized_scene(Local_1472[8 /*14*/], iLocal_3115, "misscarstealfinalecar_5_ig_1", "waitloop_lamar", 1000f, -4f, 0, 0, 1000f, 0);
									set_synchronized_scene_looped(iLocal_3115, true);
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
						}
						break;
					
					case 48:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!is_ped_injured(Local_1472[4 /*14*/]))
								{
									if (is_ped_in_any_vehicle(Local_1472[4 /*14*/], 0))
									{
										func_483();
										task_leave_any_vehicle(false, 0, 0);
										task_follow_nav_mesh_to_coord(false, -1273.988f, -221.81f, 50.5498f, 2f, 20000, 0.25f, 0, 40000f);
										task_turn_ped_to_face_coord(false, -1314.795f, -243.3134f, 55.9067f, 3000);
										func_482(Local_1472[4 /*14*/], 0);
										Local_4435[iParam0 /*10*/].f_6++;
										request_anim_dict("missarmenian2lamar_idles");
										request_anim_dict("misscarsteal2");
									}
								}
								break;
							
							case 1:
								if (!is_ped_injured(Local_1472[4 /*14*/]))
								{
									if (get_script_task_status(Local_1472[4 /*14*/], 242628503) == 7)
									{
										Local_4435[iParam0 /*10*/].f_7 = get_game_timer() + get_random_int_in_range(500, 2500);
										Local_4435[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 2:
								if (func_44("cs2_onme"))
								{
									Local_4435[iParam0 /*10*/].f_6++;
								}
								if (get_game_timer() > Local_4435[iParam0 /*10*/].f_7)
								{
									if (!is_ped_injured(Local_1472[4 /*14*/]))
									{
										if (!is_ped_in_any_vehicle(Local_1472[4 /*14*/], 0))
										{
											if (has_anim_dict_loaded("missarmenian2lamar_idles"))
											{
												iVar15 = get_random_int_in_range(false, 7);
												if (iVar15 == Local_4435[iParam0 /*10*/].f_8)
												{
													iVar15++;
													if (iVar15 == 7)
													{
														iVar15 = 0;
													}
												}
												if (iVar15 == 0)
												{
													task_play_anim(Local_1472[4 /*14*/], "missarmenian2lamar_idles", "idle_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
												}
												else if (iVar15 == 1)
												{
													task_play_anim(Local_1472[4 /*14*/], "missarmenian2lamar_idles", "idle_b", 4f, -4f, -1, 0, 0, 0, 0, 0);
												}
												else if (iVar15 == 2)
												{
													task_play_anim(Local_1472[4 /*14*/], "missarmenian2lamar_idles", "idle_c", 4f, -4f, -1, 0, 0, 0, 0, 0);
												}
												else if (iVar15 == 3)
												{
													task_play_anim(Local_1472[4 /*14*/], "missarmenian2lamar_idles", "idle_d", 4f, -4f, -1, 0, 0, 0, 0, 0);
												}
												else if (iVar15 == 4)
												{
													task_play_anim(Local_1472[4 /*14*/], "missarmenian2lamar_idles", "idle_e", 4f, -4f, -1, 0, 0, 0, 0, 0);
												}
												else if (iVar15 == 5)
												{
													task_play_anim(Local_1472[4 /*14*/], "missarmenian2lamar_idles", "idle_f", 4f, -4f, -1, 0, 0, 0, 0, 0);
												}
												else if (iVar15 == 6)
												{
													task_play_anim(Local_1472[4 /*14*/], "missarmenian2lamar_idles", "idle_look_right", 4f, -4f, -1, 0, 0, 0, 0, 0);
												}
												Local_4435[iParam0 /*10*/].f_7 = get_game_timer() + get_random_int_in_range(3500, 5000);
												Local_4435[iParam0 /*10*/].f_8 = iVar15;
											}
										}
									}
								}
								break;
							
							case 3:
								if (!is_ped_injured(Local_1472[4 /*14*/]))
								{
									if (is_sphere_visible(get_entity_coords(Local_1472[4 /*14*/], 1), 1.5f))
									{
										task_play_anim(Local_1472[4 /*14*/], "misscarsteal2", "COME_HERE_IDLE_C", 4f, -4f, -1, 0, 0, 0, 0, 0);
										Local_4435[iParam0 /*10*/].f_7 = get_game_timer() + 7000;
										Local_4435[iParam0 /*10*/].f_6++;
									}
								}
								break;
							
							case 4:
								if (get_game_timer() > Local_4435[iParam0 /*10*/].f_7 && !func_44("cs2_onme"))
								{
									Local_4435[iParam0 /*10*/].f_6 = 2;
								}
								break;
						}
						break;
					
					case 49:
						break;
					
					case 50:
						if (!is_ped_injured(Local_1472[4 /*14*/]))
						{
							switch (Local_4435[iParam0 /*10*/].f_6)
							{
								case 0:
									func_483();
									task_follow_nav_mesh_to_coord(false, -1263.639f, -239.6366f, 50.5499f, 2f, 20000, 0.25f, 0, 40000f);
									if (!is_ped_injured(Local_1472[6 /*14*/]))
									{
										task_turn_ped_to_face_entity(false, Local_1472[6 /*14*/], 5000);
									}
									task_turn_ped_to_face_entity(false, player_ped_id(), 3000);
									func_482(Local_1472[4 /*14*/], 0);
									Local_4435[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (get_script_task_status(Local_1472[4 /*14*/], 242628503) == 1)
									{
										if (get_sequence_progress(Local_1472[4 /*14*/]) >= 1)
										{
											Local_4435[iParam0 /*10*/].f_3 = 1;
										}
									}
									break;
								}
						}
						break;
					
					case 51:
						if (!is_ped_injured(Local_1472[4 /*14*/]))
						{
							switch (Local_4435[iParam0 /*10*/].f_6)
							{
								case 0:
									func_483();
									task_follow_nav_mesh_to_coord(false, -1273.505f, -212.807f, 50.5499f, 2f, 20000, 1.2f, 0, 300f);
									func_482(Local_1472[4 /*14*/], 0);
									Local_4435[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (get_script_task_status(Local_1472[4 /*14*/], 242628503) == 7)
									{
										Local_4435[iParam0 /*10*/].f_3 = 1;
									}
									break;
								}
						}
						break;
					
					case 52:
						if (!is_ped_injured(Local_1472[4 /*14*/]))
						{
							switch (Local_4435[iParam0 /*10*/].f_6)
							{
								case 0:
									task_follow_nav_mesh_to_coord(Local_1472[4 /*14*/], -1301.094f, -208.0075f, 50.5498f, 2f, 20000, 0.25f, 0, 141.1114f);
									Local_4435[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (func_157(Local_1472[4 /*14*/], -1301.094f, -208.0075f, 50.5498f, 1) < 5f)
									{
										if (!is_ped_injured(Local_1472[4 /*14*/]) && !is_ped_injured(Local_1472[3 /*14*/]))
										{
											give_weapon_to_ped(Local_1472[4 /*14*/], joaat("weapon_pistol"), 50, true, true);
											set_current_ped_weapon(Local_1472[4 /*14*/], joaat("weapon_pistol"), true);
											task_aim_gun_at_entity(Local_1472[4 /*14*/], Local_1472[3 /*14*/], -1, 0);
										}
										Local_4435[iParam0 /*10*/].f_3 = 1;
									}
									else if (get_script_task_status(Local_1472[4 /*14*/], 713668775) == 7)
									{
									}
									break;
								}
						}
						break;
					
					case 53:
						if (!is_ped_injured(Local_1472[4 /*14*/]))
						{
							switch (Local_4435[iParam0 /*10*/].f_6)
							{
								case 0:
									func_483();
									task_follow_nav_mesh_to_coord(false, -1293.675f, -193.4069f, 50.5497f, 2f, 20000, 0.25f, 0, 40000f);
									if (!is_ped_injured(Local_1472[8 /*14*/]))
									{
										task_turn_ped_to_face_entity(false, Local_1472[8 /*14*/], 5000);
									}
									task_turn_ped_to_face_entity(false, player_ped_id(), 3000);
									func_482(Local_1472[4 /*14*/], 0);
									Local_4435[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (get_script_task_status(Local_1472[4 /*14*/], 242628503) == 1)
									{
										if (get_sequence_progress(Local_1472[4 /*14*/]) >= 1)
										{
											Local_4435[iParam0 /*10*/].f_3 = 1;
										}
									}
									break;
								}
						}
						break;
					
					case 54:
						if (!is_ped_injured(Local_1472[4 /*14*/]))
						{
							switch (Local_4435[iParam0 /*10*/].f_6)
							{
								case 0:
									func_483();
									task_follow_nav_mesh_to_coord(false, -1265.911f, -225.6303f, 50.5499f, 2f, 20000, 0.25f, 0, 300f);
									func_482(Local_1472[4 /*14*/], 0);
									Local_4435[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (get_script_task_status(Local_1472[4 /*14*/], 242628503) == 7)
									{
										Local_4435[iParam0 /*10*/].f_3 = 1;
									}
									break;
								}
						}
						break;
					
					case 58:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								if (iLocal_1754 == 10002)
								{
									Local_4435[iParam0 /*10*/].f_7 = get_game_timer() + 2500;
									if (!is_ped_injured(Local_1472[4 /*14*/]) && !is_ped_injured(Local_1472[3 /*14*/]))
									{
										task_aim_gun_at_entity(Local_1472[4 /*14*/], Local_1472[3 /*14*/], 3000, 0);
									}
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (get_game_timer() > Local_4435[iParam0 /*10*/].f_7)
								{
									if (!is_ped_injured(Local_1472[4 /*14*/]))
									{
										set_ped_min_move_blend_ratio(Local_1472[4 /*14*/], 1f);
										Local_4435[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 59:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								Local_4435[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								Local_4435[iParam0 /*10*/].f_3 = 1;
								break;
						}
						break;
					
					case 60:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								hide_hud_and_radar_this_frame();
								func_476();
								clear_prints();
								func_213(11, 14);
								func_286(0, 1);
								Local_2194.f_129 = 0;
								func_444(&Local_2194, Local_1725[0 /*2*/], 0, 0);
								set_audio_flag("AllowPoliceScannerWhenPlayerHasNoControl", 0);
								stop_audio_scene("CAR_2_CAR_ENTERS_GARAGE");
								func_835(15);
								func_835(16);
								func_285(94, 1, -1);
								iVar16 = player_ped_id();
								func_283(2, &(Local_1472[1 /*14*/]));
								if (!is_ped_injured(Local_1472[4 /*14*/]))
								{
									change_player_ped(player_id(), Local_1472[4 /*14*/], false, 1);
									func_282(1, &(Local_1472[4 /*14*/]));
								}
								if (!is_ped_injured(Local_1472[3 /*14*/]))
								{
									set_blocking_of_non_temporary_events(Local_1472[3 /*14*/], true);
								}
								set_entity_coords(player_ped_id(), -1299.678f, -205.9114f, 50.5498f, 1, false, 0, 1);
								set_entity_heading(player_ped_id(), 143.87f);
								Local_1472[1 /*14*/] = iVar16;
								if (iLocal_1411)
								{
									func_281(&uLocal_1380);
									func_280(&uLocal_1380, Local_1472[4 /*14*/], 1, 2.5f, 1200, 1200, 900, 700, 1045220557);
								}
								if (does_entity_exist(Local_1725[0 /*2*/]))
								{
									if (!is_entity_dead(Local_1725[0 /*2*/], 0))
									{
										set_ped_into_vehicle(Local_1472[1 /*14*/], Local_1725[0 /*2*/], false);
										if (does_entity_exist(Local_1472[1 /*14*/]))
										{
											if (!is_entity_dead(Local_1472[1 /*14*/], 0))
											{
												if (!is_ped_injured(Local_1472[1 /*14*/]))
												{
													set_blocking_of_non_temporary_events(Local_1472[1 /*14*/], true);
													task_play_anim(Local_1472[1 /*14*/], "misscarsteal2switch", "_heli_trevor", 1000f, -8f, -1, 0, 0, 0, 0, 0);
													_0x2208438012482A1A(Local_1472[1 /*14*/], 0, 0);
												}
											}
										}
										Local_1472[2 /*14*/] = create_ped_inside_vehicle(Local_1725[0 /*2*/], 26, iLocal_3136, -1, 1, true);
										if (does_entity_exist(Local_1472[2 /*14*/]))
										{
											if (!is_entity_dead(Local_1472[2 /*14*/], 0))
											{
												if (!is_ped_injured(Local_1472[2 /*14*/]))
												{
													set_blocking_of_non_temporary_events(Local_1472[2 /*14*/], true);
													_0x2208438012482A1A(Local_1472[2 /*14*/], 0, 0);
												}
											}
										}
									}
								}
								display_hud(false);
								display_radar(false);
								iLocal_138 = 1;
								Local_4435[iParam0 /*10*/].f_6++;
							
							case 1:
								if (func_244(&uLocal_139))
								{
									Local_4435[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 56:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								request_anim_dict("misscarsteal2Chad_waiting");
								Local_4435[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (has_anim_dict_loaded("misscarsteal2Chad_waiting"))
								{
									if (does_entity_exist(Local_1472[3 /*14*/]))
									{
										if (!is_ped_injured(Local_1472[3 /*14*/]))
										{
											task_play_anim(Local_1472[3 /*14*/], "misscarsteal2Chad_waiting", "Sat_in_Car_Lookaround", 8f, -8f, -1, 1, 0, 0, 0, 0);
										}
										Local_4435[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 57:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 99:
								remove_anim_dict("misscarsteal2CAR_STOLEN");
								remove_anim_dict("misscarsteal2CHAD_GARAGE");
								Local_1991[iParam0 /*6*/].f_1 = 0;
								break;
							
							case 0:
								if (!is_ped_injured(Local_1472[3 /*14*/]))
								{
									set_blocking_of_non_temporary_events(Local_1472[3 /*14*/], true);
								}
								request_anim_dict("misscarsteal2CAR_STOLEN");
								request_anim_dict("misscarsteal2CHAD_GARAGE");
								Local_4435[iParam0 /*10*/].f_6++;
								break;
							
							case 1:
								if (has_anim_dict_loaded("misscarsteal2CAR_STOLEN") && has_anim_dict_loaded("misscarsteal2CHAD_GARAGE"))
								{
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								if (!is_ped_injured(Local_1472[3 /*14*/]) && is_vehicle_driveable(Local_1725[2 /*2*/], 0))
								{
									iLocal_3112 = create_synchronized_scene(-1308.275f, -222.337f, 50.563f, 0f, 0f, 35.5f, 2);
									set_entity_coords_no_offset(Local_1472[3 /*14*/], -1308.275f, -222.337f, 50.563f, 0, 0, 1);
									task_synchronized_scene(Local_1472[3 /*14*/], iLocal_3112, "misscarsteal2CHAD_GARAGE", "chad_parking_garage_chad", 1000f, -4f, 16, 0, 1000f, 0);
									set_vehicle_door_open(Local_1725[2 /*2*/], false, 1, 1);
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 3:
								if (!is_ped_injured(Local_1472[3 /*14*/]))
								{
									if (is_synchronized_scene_running(iLocal_3112))
									{
										if (get_synchronized_scene_phase(iLocal_3112) > 0.1f)
										{
											task_synchronized_scene(Local_1472[3 /*14*/], iLocal_3112, "misscarsteal2CHAD_GARAGE", "chad_parking_garage_chad", 1000f, -4f, 25, 0, 1000f, 0);
											task_look_at_entity(Local_1472[3 /*14*/], player_ped_id(), -1, 4, 2);
											set_entity_collision(Local_1472[3 /*14*/], true, 0);
											Local_4435[iParam0 /*10*/].f_6++;
										}
									}
								}
								break;
							
							case 4:
								if (!is_ped_injured(Local_1472[3 /*14*/]) && is_vehicle_driveable(Local_1725[2 /*2*/], 0))
								{
									if (is_synchronized_scene_running(iLocal_3112))
									{
										if (get_synchronized_scene_phase(iLocal_3112) > 0.87f)
										{
											Local_4435[iParam0 /*10*/].f_3 = 1;
										}
									}
								}
								break;
							
							case 5:
								if (!is_ped_injured(Local_1472[3 /*14*/]) && is_vehicle_driveable(Local_1725[2 /*2*/], 0))
								{
									Local_4435[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 61:
						func_144(0);
						func_835(22);
						set_all_vehicle_generators_active_in_area(Vector(21.69487f, -3006.615f, -961.9077f) - Vector(11.125f, 41.5f, 41.1875f), Vector(21.69487f, -3006.615f, -961.9077f) + Vector(11.125f, 41.5f, 41.1875f), false, 1);
						set_wanted_level_multiplier(1f);
						set_max_wanted_level(5);
						func_477(0);
						set_ignore_no_gps_flag(1);
						func_243(0, 15, 1);
						func_835(80);
						set_roads_in_angled_area(-1314.046f, -183.052f, 40.46598f, -1256.618f, -261.5953f, 68.17989f, 52.25f, 0, false, 1);
						set_vehicle_density_multiplier_this_frame(1f);
						if (!is_ped_injured(Local_1472[3 /*14*/]))
						{
							set_blocking_of_non_temporary_events(Local_1472[3 /*14*/], true);
							task_look_at_entity(Local_1472[3 /*14*/], player_ped_id(), -1, 0, 2);
						}
						if (is_vehicle_driveable(Local_1725[2 /*2*/], 0))
						{
							freeze_entity_position(Local_1725[2 /*2*/], false);
							set_vehicle_engine_on(Local_1725[2 /*2*/], true, 1, 0);
							set_vehicle_lights(Local_1725[2 /*2*/], 0);
						}
						start_audio_scene("CAR_2_STEAL_THE_CAR");
						Local_4435[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 63:
						if (does_entity_exist(Local_1472[3 /*14*/]))
						{
							if (is_ped_injured(Local_1472[3 /*14*/]))
							{
								stop_audio_scene("CAR_2_STEAL_THE_CAR");
								Local_4435[iParam0 /*10*/].f_3 = 1;
							}
						}
						if (is_vehicle_driveable(Local_1725[2 /*2*/], 0))
						{
							if (is_ped_in_vehicle(player_ped_id(), Local_1725[2 /*2*/], 0))
							{
								stop_audio_scene("CAR_2_STEAL_THE_CAR");
								Local_4435[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 62:
						if (is_vehicle_driveable(Local_1725[2 /*2*/], 0))
						{
							if (is_ped_in_vehicle(player_ped_id(), Local_1725[2 /*2*/], 0))
							{
								start_audio_scene("CAR_2_DRIVE_BACK_TO_GARAGE");
								Local_4435[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 65:
						if (!is_ped_in_any_vehicle(player_ped_id(), 0))
						{
							switch (Local_4435[iParam0 /*10*/].f_6)
							{
								case 0:
									task_play_anim(Local_1472[3 /*14*/], "misscarsteal2CHAD_GARAGE", "chad_parking_garage_handsuploop_chad", 4f, -8f, -1, 57, 0, 0, 0, 0);
									Local_4435[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									func_483();
									task_turn_ped_to_face_entity(false, player_ped_id(), 2000);
									task_play_anim(Local_1472[3 /*14*/], "misscarsteal2CHAD_GARAGE", "chad_parking_garage_handsuploop_chad", 4f, -8f, -1, 57, 0, 0, 0, 0);
									task_go_to_coord_while_aiming_at_entity(0, -1310.4f, -218.5188f, 50.5498f, player_ped_id(), 1f, false, 0.5f, 4f, true, 0, 0, -957453492, 20000);
									task_turn_ped_to_face_entity(false, player_ped_id(), -1);
									func_482(Local_1472[3 /*14*/], 0);
									Local_4435[iParam0 /*10*/].f_7 = get_game_timer() + 13000;
									Local_4435[iParam0 /*10*/].f_6++;
									break;
								
								case 2:
									break;
								
								case 3:
									if (!is_ped_injured(Local_1472[3 /*14*/]))
									{
										if (func_157(Local_1472[3 /*14*/], -1287.622f, -251.0352f, 46.0453f, 1) < 2f)
										{
											Local_4435[iParam0 /*10*/].f_3 = 1;
										}
									}
									break;
							}
						}
						else
						{
							Local_4435[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 64:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!is_ped_injured(Local_1472[3 /*14*/]))
								{
									if (is_entity_playing_anim(Local_1472[3 /*14*/], "misscarsteal2CHAD_GARAGE", "chad_parking_garage_handsuploop_chad", 3))
									{
										stop_anim_task(Local_1472[3 /*14*/], "misscarsteal2CHAD_GARAGE", "chad_parking_garage_handsuploop_chad", -8f);
									}
									clear_ped_tasks(Local_1472[3 /*14*/]);
									func_483();
									task_follow_nav_mesh_to_coord(false, -1287.622f, -251.0352f, 46.0453f, 2f, 20000, 0.25f, 0, 40000f);
									task_cower(false, -1);
									func_482(Local_1472[3 /*14*/], 0);
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (!is_ped_injured(Local_1472[3 /*14*/]))
								{
									if (func_157(Local_1472[3 /*14*/], -1287.622f, -251.0352f, 46.0453f, 1) < 2f)
									{
										Local_4435[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 66:
						if (!is_ped_injured(Local_1472[3 /*14*/]))
						{
							switch (Local_4435[iParam0 /*10*/].f_6)
							{
								case 0:
									func_483();
									task_set_blocking_of_non_temporary_events(false, 1);
									task_play_anim(false, "misscarsteal2CHAD_GARAGE", "chad_parking_garage_handsuploop_chad", 4f, -4f, 30000, 49, 0, 0, 0, 0);
									task_turn_ped_to_face_entity(false, player_ped_id(), 30000);
									func_482(Local_1472[3 /*14*/], 0);
									request_anim_dict("misscarsteal2car_stolen");
									Local_4435[iParam0 /*10*/].f_7 = get_game_timer() + 25000;
									Local_4435[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (has_anim_dict_loaded("misscarsteal2car_stolen"))
									{
										clear_ped_secondary_task(Local_1472[3 /*14*/]);
										func_483();
										task_set_blocking_of_non_temporary_events(false, 1);
										task_play_anim(false, "misscarsteal2car_stolen", "chad_car_stolen_reaction", 4f, -4f, -1, 0, 0, 0, 0, 0);
										task_set_blocking_of_non_temporary_events(false, 0);
										func_482(Local_1472[3 /*14*/], 0);
										Local_4435[iParam0 /*10*/].f_6++;
									}
									break;
								
								case 2:
									if (get_script_task_status(Local_1472[3 /*14*/], -2017877118) == 7 || get_script_task_status(Local_1472[3 /*14*/], -2017877118) == 2)
									{
										Local_4435[iParam0 /*10*/].f_3 = 1;
									}
									break;
								}
						}
						break;
					
					case 68:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								if (!is_ped_injured(Local_1472[3 /*14*/]))
								{
									task_use_mobile_phone(Local_1472[3 /*14*/], 1, 1);
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								break;
						}
						break;
					
					case 69:
						if (!is_ped_injured(Local_1472[2 /*14*/]))
						{
							if (is_vehicle_driveable(Local_1725[0 /*2*/], 0))
							{
								if (is_ped_in_vehicle(Local_1472[2 /*14*/], Local_1725[0 /*2*/], 0))
								{
									task_heli_mission(Local_1472[2 /*14*/], Local_1725[0 /*2*/], false, false, 500.9223f, -1314.291f, 73.6306f, 4, 20f, 10f, 0f, 100, 60, -1f, 0);
									Local_4435[iParam0 /*10*/].f_3 = 1;
								}
							}
						}
						break;
					
					case 70:
						iVar17 = 0;
						while (iVar17 < iLocal_3896)
						{
							set_vehicle_as_no_longer_needed(&(iLocal_3896[iVar17]));
							iVar17++;
						}
						set_vehicle_as_no_longer_needed(&(Local_1725[5 /*2*/]));
						set_vehicle_as_no_longer_needed(&(Local_1725[6 /*2*/]));
						set_vehicle_as_no_longer_needed(&(Local_1725[10 /*2*/]));
						set_vehicle_as_no_longer_needed(&(Local_1725[7 /*2*/]));
						set_vehicle_as_no_longer_needed(&(Local_1725[9 /*2*/]));
						set_vehicle_as_no_longer_needed(&(Local_1725[1 /*2*/]));
						set_vehicle_as_no_longer_needed(&(Local_1725[11 /*2*/]));
						set_ped_as_no_longer_needed(&(Local_1472[3 /*14*/]));
						remove_vehicle_recording(301, sLocal_1418);
						func_813(11);
						set_roads_in_angled_area(-1314.046f, -183.052f, 40.46598f, -1256.618f, -261.5953f, 68.17989f, 52.25f, 0, true, 1);
						Local_4435[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 72:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_407(8))
								{
									add_scenario_blocking_area(Vector(13.24f, -2799.27f, -964.12f) - Vector(10f, 10f, 10f), Vector(13.24f, -2799.27f, -964.12f) + Vector(10f, 10f, 10f), 0, 1, 1, 1);
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								Local_1472[5 /*14*/] = create_ped(26, joaat("s_m_m_security_01"), -966.6412f, -2800.247f, 12.9648f, 19.0574f, 1, true);
								set_ped_can_evasive_dive(Local_1472[5 /*14*/], 0);
								Local_4435[iParam0 /*10*/].f_6++;
								break;
							
							case 2:
								if (!is_ped_injured(Local_1472[5 /*14*/]))
								{
									task_start_scenario_at_position(Local_1472[5 /*14*/], "WORLD_HUMAN_GUARD_STAND", -966.9684f, -2799.987f, 12.9648f, 19.0574f, 0, 0, 1);
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 3:
								if (!is_ped_injured(Local_1472[5 /*14*/]))
								{
									if (func_156(player_ped_id(), Local_1472[5 /*14*/], 1) < 30f)
									{
										task_look_at_entity(Local_1472[5 /*14*/], player_ped_id(), -1, 0, 2);
										Local_4435[iParam0 /*10*/].f_3 = 1;
									}
								}
								break;
						}
						break;
					
					case 73:
						if (!func_242(17, player_ped_id()))
						{
							func_241(17, player_ped_id());
							Local_4435[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 71:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_407(8))
								{
									Local_4435[iParam0 /*10*/].f_6 = 2;
								}
								break;
							
							case 2:
								if (func_157(player_ped_id(), vLocal_1459, 1) < 300f)
								{
									Local_4435[iParam0 /*10*/].f_6 = 3;
								}
								break;
							
							case 3:
								iLocal_1398 = get_interior_at_coords(-960.7767f, -3016.691f, 12.9451f);
								_0x2CA429C029CCF247(iLocal_1398);
								Local_4435[iParam0 /*10*/].f_6++;
								break;
							
							case 4:
								if (is_interior_ready(iLocal_1398))
								{
									if (is_vehicle_driveable(Local_1725[2 /*2*/], 0))
									{
										if (func_238(&iLocal_2748, 29, vLocal_1459, fLocal_1462, 1) && func_238(&(Local_1472[8 /*14*/]), 45, -992.12f, -3024.18f, 12.94f, 42.6f, 1))
										{
											set_ped_default_component_variation(iLocal_2748);
											set_ped_component_variation(iLocal_2748, false, 0, 0, 0);
											set_ped_component_variation(iLocal_2748, 2, 0, 0, 0);
											set_ped_component_variation(iLocal_2748, 3, 1, 0, 0);
											set_ped_component_variation(iLocal_2748, 4, 1, 0, 0);
											set_ped_component_variation(iLocal_2748, 5, 0, 0, 0);
											set_ped_component_variation(iLocal_2748, 6, 0, 0, 0);
											set_ped_component_variation(iLocal_2748, 7, 0, 0, 0);
											set_ped_component_variation(iLocal_2748, 8, 0, 0, 0);
											set_ped_component_variation(iLocal_2748, 9, 0, 0, 0);
											set_ped_component_variation(iLocal_2748, 10, 1, 0, 0);
											set_ped_component_variation(iLocal_2748, 11, 0, 0, 0);
											set_ped_can_evasive_dive(iLocal_2748, 0);
											set_blocking_of_non_temporary_events(iLocal_2748, true);
											Local_1725[5 /*2*/] = create_vehicle(joaat("shamal"), -981.02f, -3011.31f, 14.55f, 59.25f, 1, 1);
											set_vehicle_doors_locked(Local_1725[5 /*2*/], 2);
											set_vehicle_livery(Local_1725[5 /*2*/], 1);
											iLocal_2767 = create_synchronized_scene(vLocal_1459 + Vector(1f, 0f, 0f), 0f, 0f, fLocal_1462, 2);
											task_synchronized_scene(iLocal_2748, iLocal_2767, "misscarsteal2leadinoutcar_2_mcs_1", "_leadin_loop", 1000f, -1000f, 0, 0, 1000f, 0);
											set_synchronized_scene_looped(iLocal_2767, true);
											Local_1472[6 /*14*/] = create_ped(26, joaat("s_m_y_devinsec_01"), -989.96f, -3022.82f, 13.91f, 91.12f, 1, true);
											Local_1472[7 /*14*/] = create_ped(26, joaat("s_m_y_devinsec_01"), -990.51f, -3023.46f, 13.93f, 11.9f, 1, true);
											give_weapon_to_ped(Local_1472[6 /*14*/], joaat("weapon_microsmg"), 1000, false, true);
											give_weapon_to_ped(Local_1472[7 /*14*/], joaat("weapon_microsmg"), 1000, false, true);
											set_ped_prop_index(Local_1472[8 /*14*/], true, 0, 0, false);
											set_ped_default_component_variation(Local_1472[6 /*14*/]);
											set_ped_component_variation(Local_1472[6 /*14*/], false, 0, 0, 0);
											set_ped_component_variation(Local_1472[6 /*14*/], 3, 0, 0, 0);
											set_ped_component_variation(Local_1472[6 /*14*/], 4, 0, 0, 0);
											set_ped_component_variation(Local_1472[6 /*14*/], 8, 0, 0, 0);
											set_ped_component_variation(Local_1472[6 /*14*/], 11, 0, 0, 0);
											set_ped_default_component_variation(Local_1472[7 /*14*/]);
											set_ped_component_variation(Local_1472[7 /*14*/], false, 1, 0, 0);
											set_ped_component_variation(Local_1472[7 /*14*/], 3, 0, 0, 0);
											set_ped_component_variation(Local_1472[7 /*14*/], 4, 0, 0, 0);
											set_ped_component_variation(Local_1472[7 /*14*/], 8, 0, 0, 0);
											set_ped_component_variation(Local_1472[7 /*14*/], 11, 0, 0, 0);
											task_start_scenario_in_place(Local_1472[6 /*14*/], "WORLD_HUMAN_GUARD_STAND", 0, 0);
											task_start_scenario_in_place(Local_1472[7 /*14*/], "WORLD_HUMAN_GUARD_STAND", 0, 0);
											task_start_scenario_in_place(Local_1472[8 /*14*/], "WORLD_HUMAN_STAND_MOBILE_UPRIGHT", 0, 0);
											set_ped_can_evasive_dive(Local_1472[6 /*14*/], 0);
											set_ped_can_evasive_dive(Local_1472[7 /*14*/], 0);
											set_ped_can_evasive_dive(Local_1472[8 /*14*/], 0);
											Local_1725[4 /*2*/] = create_vehicle(joaat("tailgater"), -984.58f, -2998.8f, 13.58f, 22.68f, 1, 1);
											Local_1725[12 /*2*/] = create_vehicle(joaat("tailgater"), -992.74f, -3031.48f, 13.58f, 18.53f, 1, 1);
											Local_1725[13 /*2*/] = create_vehicle(joaat("tailgater"), -990.95f, -2997.46f, 13.56f, 24.38f, 1, 1);
											_0x97CE68CB032583F0(Local_1725[4 /*2*/], 1);
											_0x97CE68CB032583F0(Local_1725[13 /*2*/], 1);
											if (iLocal_1420 == 12)
											{
												Local_4435[iParam0 /*10*/].f_3 = 1;
											}
											else
											{
												Local_4435[iParam0 /*10*/].f_6++;
											}
										}
									}
								}
								break;
							
							case 5:
								if (func_58(137) && !func_58(123))
								{
									Local_4435[iParam0 /*10*/].f_6 = 6;
								}
								break;
							
							case 6:
								if (!is_ped_injured(iLocal_2748))
								{
									if (is_vehicle_driveable(Local_1725[2 /*2*/], 0))
									{
										set_vehicle_doors_locked(Local_1725[2 /*2*/], 4);
									}
									if (get_follow_vehicle_cam_view_mode() != 4)
									{
										set_gameplay_entity_hint(iLocal_2748, 0f, 0f, 0.5f, 1, -1, 7000, 2000, 0);
										_0xF8BDBF3D573049A1(0.51f);
										_0x5D7B620DAE436138(0.4f);
										_0xC92717EF615B6704(0f);
										set_gameplay_hint_fov(35f);
									}
									iLocal_2768 = create_synchronized_scene(vLocal_1459 + Vector(1f, 0f, 0f), 0f, 0f, fLocal_1462, 2);
									task_synchronized_scene(iLocal_2748, iLocal_2768, "misscarsteal2leadinoutcar_2_mcs_1", "_leadin_action", 4f, -1000f, 0, 0, 1000f, 0);
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 7:
								if (func_236(4, "CAR2_MCS1_LI", 0, iLocal_2748, "Devin", -1, 0, 0, -1, 0, 0, -1, 0, 0, 8))
								{
									set_player_control(player_id(), false, 256);
									Local_4435[iParam0 /*10*/].f_6++;
									Local_4435[iParam0 /*10*/].f_7 = get_game_timer() + 2000;
								}
								break;
							
							case 8:
								if (get_game_timer() > Local_4435[iParam0 /*10*/].f_7)
								{
									func_483();
									task_leave_any_vehicle(false, 0, 0);
									task_turn_ped_to_face_entity(false, iLocal_2748, -1);
									func_482(player_ped_id(), 0);
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
						}
						break;
					
					case 74:
						if (is_vehicle_driveable(Local_1725[0 /*2*/], 0) && !is_ped_injured(Local_1472[2 /*14*/]))
						{
							switch (Local_4435[iParam0 /*10*/].f_6)
							{
								case 0:
									freeze_entity_position(Local_1725[0 /*2*/], false);
									task_heli_mission(Local_1472[2 /*14*/], Local_1725[0 /*2*/], false, false, -1316.728f, -233.5309f, 53.7461f, 4, 4f, 3f, -54f, 20, 20, -1f, 0);
									Local_4435[iParam0 /*10*/].f_6++;
									break;
								
								case 1:
									if (func_58(118))
									{
										task_heli_mission(Local_1472[2 /*14*/], Local_1725[0 /*2*/], false, false, -1067.636f, -2946.363f, 70.9524f, 4, 20f, 10f, 0f, 100, 60, -1f, 0);
										Local_4435[iParam0 /*10*/].f_3 = 1;
									}
									break;
								}
						}
						break;
					
					case 75:
						if (Local_4435[iParam0 /*10*/].f_6 == 0)
						{
							trigger_music_event("CAR2_STOP");
							Local_4435[iParam0 /*10*/].f_6 = 1;
						}
						if (func_210(Local_1725[2 /*2*/], 6f, 2, 1056964608, 0, 1, 0))
						{
							func_224(3, 19, 1);
							func_206(&iLocal_3138, 1, 0);
							_0x293220DA1B46CEBC(10f, 10f, 4);
							Local_4435[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 76:
						if (!Local_4435[iParam0 /*10*/].f_3)
						{
							if (func_470())
							{
								clear_ped_tasks(player_ped_id());
								set_player_control(player_id(), true, 0);
								Local_4435[iParam0 /*10*/].f_3 = 1;
							}
						}
						break;
					
					case 77:
						if (((!func_58(85) && !func_58(86)) && !func_58(88)) && !func_58(89))
						{
							func_235(109);
						}
						Local_4435[iParam0 /*10*/].f_3 = 1;
						break;
					
					case 67:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								if (func_157(player_ped_id(), vLocal_1459, 1) < 100f)
								{
									if ((!is_ped_injured(iLocal_2748) && !is_ped_injured(Local_1472[6 /*14*/])) && !is_ped_injured(Local_1472[7 /*14*/]))
									{
										_request_cutscene_2("Car_2_mcs_1", 2, 8);
									}
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if ((!is_ped_injured(iLocal_2748) && !is_ped_injured(Local_1472[6 /*14*/])) && !is_ped_injured(Local_1472[7 /*14*/]))
								{
									if (_0xB56BBBCC2955D9CB())
									{
										_0x2A56C06EBEF2B0D9("Devin", iLocal_2748, false);
										_0x2A56C06EBEF2B0D9("Franklin", player_ped_id(), false);
										_0x2A56C06EBEF2B0D9("Car_2_Security", Local_1472[6 /*14*/], false);
										_0x2A56C06EBEF2B0D9("Car_2_Security^1", Local_1472[7 /*14*/], false);
									}
								}
								if (has_cutscene_loaded())
								{
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 2:
								if (func_157(player_ped_id(), vLocal_1459, 1) > 100f + 100f)
								{
									remove_cutscene();
									Local_4435[iParam0 /*10*/].f_6 = 0;
								}
								break;
						}
						break;
					
					case 79:
						switch (Local_4435[iParam0 /*10*/].f_6)
						{
							case 0:
								if (is_cutscene_playing())
								{
									Local_4435[iParam0 /*10*/].f_6++;
								}
								break;
							
							case 1:
								if (can_set_exit_state_for_registered_entity("Franklin", false) || has_cutscene_finished())
								{
									if (!is_cutscene_playing())
									{
										force_ped_motion_state(player_ped_id(), -668482597, false, 0, 0);
									}
									else
									{
										force_ped_motion_state(player_ped_id(), -668482597, false, 1, 0);
									}
									set_ped_min_move_blend_ratio(player_ped_id(), 1f);
									Local_4435[iParam0 /*10*/].f_6 = 2;
									Local_4435[iParam0 /*10*/].f_7 = get_game_timer() + 1000;
								}
								break;
							
							case 2:
								if (get_game_timer() < Local_4435[iParam0 /*10*/].f_7)
								{
									set_ped_min_move_blend_ratio(player_ped_id(), 1f);
								}
								else
								{
									Local_4435[iParam0 /*10*/].f_3 = 1;
								}
								break;
						}
						break;
					
					case 80:
						if (!func_242(16, player_ped_id()))
						{
							func_241(16, player_ped_id());
							Local_4435[iParam0 /*10*/].f_3 = 1;
						}
						break;
					
					case 81:
						if (is_vehicle_driveable(Local_1725[5 /*2*/], 0))
						{
							set_vehicle_engine_on(Local_1725[5 /*2*/], true, 0, 0);
							Local_4435[iParam0 /*10*/].f_3 = 1;
						}
						break;
				}
				if (Local_4435[iParam0 /*10*/].f_6 == 99)
				{
					Local_4435[iParam0 /*10*/].f_3 = 1;
					Local_4435[iParam0 /*10*/].f_6 = 0;
					Local_4435[iParam0 /*10*/].f_1 = 0;
				}
			}
		}
	}
}

void func_235(int iParam0)
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

bool func_236(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, char* sParam10, int iParam11, int iParam12, char* sParam13, int iParam14)
{
	if (!func_50() || (func_50() && iParam0 > iLocal_1425))
	{
		vLocal_4001[0 /*3*/] = iParam2;
		vLocal_4001[0 /*3*/].f_1 = iParam3;
		vLocal_4001[0 /*3*/].f_2 = sParam4;
		vLocal_4001[1 /*3*/] = iParam5;
		vLocal_4001[1 /*3*/].f_1 = iParam6;
		vLocal_4001[1 /*3*/].f_2 = sParam7;
		vLocal_4001[2 /*3*/] = iParam8;
		vLocal_4001[2 /*3*/].f_1 = iParam9;
		vLocal_4001[2 /*3*/].f_2 = sParam10;
		vLocal_4001[3 /*3*/] = iParam11;
		vLocal_4001[3 /*3*/].f_1 = iParam12;
		vLocal_4001[3 /*3*/].f_2 = sParam13;
		func_43(sParam1, iParam2, iParam5, iParam8, iParam11);
		func_40(iParam2, iParam3, sParam4);
		if (iParam5 != -1)
		{
			func_40(iParam5, iParam6, sParam7);
		}
		if (iParam8 != -1)
		{
			func_40(iParam8, iParam9, sParam10);
		}
		if (iParam11 != -1)
		{
			func_40(iParam11, iParam12, sParam13);
		}
		if (iLocal_1425 < iParam0)
		{
			if (func_50())
			{
				if (iLocal_1425 == 1)
				{
					func_45();
				}
				else
				{
					func_38();
				}
				iLocal_1425 = 0;
			}
		}
		if (is_message_being_displayed() && is_subtitle_preference_switched_on())
		{
			if (func_237(&Local_1760, sLocal_1925, sParam1, iParam14, 1, 0, 0))
			{
				iLocal_4000 = 1;
				iLocal_1425 = iParam0;
				iLocal_1399 = 0;
				return true;
			}
			else if (iLocal_1400 != get_game_timer())
			{
				iLocal_1399++;
				iLocal_1400 = get_game_timer();
				if (iLocal_1399 >= 10)
				{
					return true;
				}
			}
		}
		else if (func_237(&Local_1760, sLocal_1925, sParam1, iParam14, 0, 0, 0))
		{
			iLocal_4000 = 0;
			StringCopy(&cLocal_3950, "", 24);
			StringCopy(&cLocal_3944, "", 24);
			iLocal_1425 = iParam0;
			iLocal_1399 = 0;
			return true;
		}
		else if (iLocal_1400 != get_game_timer())
		{
			iLocal_1399++;
			iLocal_1400 = get_game_timer();
			if (iLocal_1399 >= 10)
			{
				iLocal_1399 = 0;
				return true;
			}
		}
	}
	return false;
}

int func_237(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_37(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_28(sParam2, iParam3, 0);
}

bool func_238(int iParam0, int iParam1, vector3 vParam2, Vector3 fParam3, int iParam4)
{
	int iVar0;
	
	if (!func_14(iParam1))
	{
		iVar0 = func_240(iParam1);
		request_model(iVar0);
		if (has_model_loaded(iVar0))
		{
			if (does_entity_exist(*iParam0))
			{
				delete_ped(iParam0);
			}
			*iParam0 = create_ped(26, iVar0, vParam2, fParam5, 0, false);
			set_ped_default_component_variation(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (get_ped_drawable_variation(*iParam0, 3) == 0)
				{
					set_ped_component_variation(*iParam0, 5, 2, 0, 0);
				}
			}
			func_239(*iParam0, iParam1);
			if (iParam6)
			{
				set_model_as_no_longer_needed(iVar0);
			}
			return true;
		}
	}
	return false;
}

bool func_239(var uParam0, int iParam1)
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

int func_240(int iParam0)
{
	if (!func_14(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_241(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (func_242(iParam0, iParam1))
	{
		return;
	}
	if (Global_34834[iParam0 /*31*/].f_24 < 5)
	{
		Global_34834[iParam0 /*31*/].f_25[Global_34834[iParam0 /*31*/].f_24] = iParam1;
		Global_34834[iParam0 /*31*/].f_24++;
	}
	else
	{
		iVar2 = false;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = Global_34834[iParam0 /*31*/].f_25[iVar0];
			if (!does_entity_exist(iVar1) || is_ped_injured(iVar1))
			{
				Global_34834[iParam0 /*31*/].f_25[iVar0] = iParam1;
				iVar2 = true;
				iVar0 = 6;
			}
			iVar0++;
		}
		if (!iVar2)
		{
		}
	}
}

bool func_242(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_34834[iParam0 /*31*/].f_24)
	{
		if (iParam1 == Global_34834[iParam0 /*31*/].f_25[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_243(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		if (iVar0 < Local_4647)
		{
			set_roads_in_angled_area(Local_4647[iVar0 /*9*/], Local_4647[iVar0 /*9*/].f_3, Local_4647[iVar0 /*9*/].f_6, 0, iParam2, 1);
		}
		iVar0++;
	}
}

bool func_244(var uParam0)
{
	var uVar0;
	float fVar1;
	int iVar2;
	
	switch (iLocal_138)
	{
		case 0:
			break;
		
		case 1:
			set_player_control(player_id(), false, 0);
			if (does_entity_exist(player_ped_id()))
			{
				if (!is_entity_dead(player_ped_id(), 0))
				{
					give_weapon_to_ped(player_ped_id(), joaat("weapon_pistol"), 25, true, true);
				}
			}
			if (does_entity_exist(Local_1725[2 /*2*/]))
			{
				if (!is_entity_dead(Local_1725[2 /*2*/], 0))
				{
					if (is_vehicle_driveable(Local_1725[2 /*2*/], 0))
					{
						set_entity_invincible(Local_1725[2 /*2*/], false);
						set_entity_health(Local_1725[2 /*2*/], 1000);
						set_vehicle_dirt_level(Local_1725[2 /*2*/], 0f);
						set_vehicle_can_be_visibly_damaged(Local_1725[2 /*2*/], true);
						set_vehicle_engine_on(Local_1725[2 /*2*/], true, 1, 0);
						set_vehicle_door_open(Local_1725[2 /*2*/], false, 0, 0);
					}
				}
			}
			func_279(uParam0, Local_1725[0 /*2*/], Local_1472[4 /*14*/]);
			func_261(uParam0);
			set_cam_active(*uParam0.f_1, true);
			render_script_cams(true, false, 3000, 1, 0, 0);
			iLocal_1402 = 0;
			iLocal_1405 = 0;
			iLocal_1408 = false;
			iLocal_1412 = 0;
			iLocal_1413 = 0;
			iLocal_1417 = 0;
			iLocal_138 = 2;
		
		case 2:
			uVar0 = uVar0;
			uVar0 = func_248(uParam0);
			fVar1 = get_cam_spline_phase(*uParam0.f_1);
			if (!iLocal_1412)
			{
				if (fVar1 > fLocal_1414)
				{
					_start_screen_effect("SwitchShortTrevorIn", false, 0);
					iLocal_1409 = get_sound_id();
					play_sound_frontend(iLocal_1409, "HIT_OUT", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					_0x129466ED55140F8D(player_ped_id(), 1);
					start_audio_scene("CAR_2_SWITCH_TO_FRANLIN_IN_GARAGE");
					iLocal_1412 = 1;
				}
			}
			else if (fVar1 > fLocal_1415 && !iLocal_1417)
			{
				iLocal_1417 = 1;
				play_sound_frontend(iLocal_1410, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			}
			if (!iLocal_1413)
			{
				if (fVar1 > fLocal_1416)
				{
					stop_sound(iLocal_1409);
					if (iLocal_1411)
					{
						play_sound_frontend(iLocal_1409, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					}
					iLocal_1413 = 1;
				}
			}
			if (!iLocal_1402)
			{
				if (fVar1 > fLocal_1403)
				{
					if (does_entity_exist(Local_1472[1 /*14*/]) && does_entity_exist(player_ped_id()))
					{
						if (!is_entity_dead(Local_1472[1 /*14*/], 0) && !is_entity_dead(player_ped_id(), 0))
						{
							if (!is_ped_injured(Local_1472[1 /*14*/]) && !is_ped_injured(player_ped_id()))
							{
								task_look_at_entity(Local_1472[1 /*14*/], player_ped_id(), 5000, 2048, 4);
							}
						}
					}
					iLocal_1402 = 1;
				}
			}
			if (fVar1 > fLocal_1407)
			{
				func_285(97, 1, -1);
			}
			if (!iLocal_1405)
			{
				if (fVar1 > fLocal_1406)
				{
					stop_audio_scene("CAR_2_USE_INFRARED");
					if (does_entity_exist(player_ped_id()))
					{
						if (!is_entity_dead(player_ped_id(), 0))
						{
							if (!is_ped_injured(player_ped_id()))
							{
								set_entity_heading(player_ped_id(), fLocal_1404);
								set_player_force_skip_aim_intro(player_id(), 1);
								set_player_forced_aim(player_id(), 1);
								set_player_simulate_aiming(player_id(), 1);
								task_play_anim(player_ped_id(), "misscarsteal2switch", "_ground_franklin", 1000f, -1000f, -1, 2, 0, 0, 0, 0);
							}
						}
					}
					iLocal_1405 = 1;
				}
			}
			if (!iLocal_1408)
			{
				if (does_entity_exist(player_ped_id()))
				{
					if (!is_entity_dead(player_ped_id(), 0))
					{
						if (!is_ped_injured(player_ped_id()))
						{
							if (is_entity_playing_anim(player_ped_id(), "misscarsteal2switch", "_ground_franklin", 3))
							{
								if (get_entity_anim_current_time(player_ped_id(), "misscarsteal2switch", "_ground_franklin") >= 0.99f)
								{
									if (iLocal_1411)
									{
										task_aim_gun_at_entity(player_ped_id(), Local_1472[3 /*14*/], -1, 1);
									}
									else
									{
										task_aim_gun_at_coord(player_ped_id(), -1320.303f, -219.4609f, 50.5926f, -1, 1, 0);
									}
									force_ped_motion_state(player_ped_id(), 1063765679, true, 0, 1);
									_0x2208438012482A1A(player_ped_id(), 0, 0);
									display_hud(true);
									display_radar(true);
									set_widescreen_borders(false, 500);
									iLocal_1408 = true;
								}
							}
						}
					}
				}
			}
			if (iLocal_1408)
			{
				show_hud_component_this_frame(14);
			}
			if (iLocal_1411)
			{
				if (fVar1 >= 0.8f)
				{
					if (func_245(&uLocal_1380, 0, 1, 1, 0, 1, 0))
					{
						iVar2 = 1;
					}
				}
			}
			else if (fVar1 >= 1f || iLocal_1408)
			{
				iVar2 = 1;
			}
			if (iVar2 == 1)
			{
				set_time_scale(1f);
				set_player_control(player_id(), true, 0);
				if (!iLocal_1411)
				{
					_start_screen_effect("CamPushInFranklin", false, 0);
					play_sound_frontend(iLocal_1409, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
				if (does_cam_exist(*uParam0.f_1))
				{
					if (is_cam_active(*uParam0.f_1))
					{
						destroy_cam(*uParam0.f_1, 0);
					}
				}
				destroy_all_cams(0);
				render_script_cams(false, true, 3000, 1, 0, 0);
				set_player_forced_aim(player_id(), 0);
				_0x129466ED55140F8D(player_ped_id(), 0);
				display_hud(true);
				display_radar(true);
				set_widescreen_borders(false, 500);
				stop_audio_scene("CAR_2_SWITCH_TO_FRANLIN_IN_GARAGE");
				iLocal_138 = 0;
				func_281(&uLocal_1380);
				return true;
			}
			else
			{
				_disable_first_person_cam_this_frame();
			}
			break;
	}
	return false;
}

bool func_245(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	Vector3 fVar21;
	
	switch (*uParam0)
	{
		case 0:
			func_247();
			if (!is_entity_dead(*uParam0.f_5, 0))
			{
				func_246(uParam0);
				vVar0 = {_get_gameplay_cam_coords()};
				if (iParam1)
				{
					vVar0 = {vVar0 + get_entity_velocity(*uParam0.f_5) * FtoV(get_frame_time())};
				}
				vVar3 = {get_offset_from_entity_given_world_coords(*uParam0.f_5, vVar0)};
				vVar6 = {_get_gameplay_cam_rot(2)};
				vVar9 = {vVar6 + *uParam0.f_9};
				vVar12 = {vVar9 - get_entity_rotation(*uParam0.f_5, 2)};
				vVar15 = {-sin(vVar9.z) * cos(vVar9.x), cos(vVar9.z) * cos(vVar9.x), sin(vVar9.x)};
				vVar18 = {-sin(vVar12.z) * cos(vVar12.x), cos(vVar12.z) * cos(vVar12.x), sin(vVar12.x)};
				fVar21 = _0x80EC114669DAEFF4();
				if (*uParam0.f_17 > 0 || iParam6 != 0)
				{
					*uParam0.f_3 = create_camera(1775630800, 0);
				}
				*uParam0.f_1 = create_camera(26379945, 1);
				if (iParam1)
				{
					attach_cam_to_entity(*uParam0.f_1, *uParam0.f_5, vVar3, 1);
				}
				else
				{
					set_cam_coord(*uParam0.f_1, vVar0);
				}
				set_cam_rot(*uParam0.f_1, vVar6, 2);
				set_cam_fov(*uParam0.f_1, fVar21);
				*uParam0.f_2 = create_camera(26379945, 1);
				if (iParam1 && !iParam4)
				{
					attach_cam_to_entity(*uParam0.f_2, *uParam0.f_5, vVar3 + vVar18 * Vector(*uParam0.f_12, *uParam0.f_12, *uParam0.f_12), 1);
				}
				else
				{
					set_cam_coord(*uParam0.f_2, vVar0 + vVar15 * Vector(*uParam0.f_12, *uParam0.f_12, *uParam0.f_12));
				}
				set_cam_rot(*uParam0.f_2, vVar6, 2);
				set_cam_fov(*uParam0.f_2, fVar21);
				if (*uParam0.f_17 > 0 && iParam6 == 0)
				{
					*uParam0.f_4 = create_camera(26379945, 1);
					if (iParam1 && !iParam4)
					{
						attach_cam_to_entity(*uParam0.f_4, *uParam0.f_5, vVar3 + vVar18 * Vector(*uParam0.f_12, *uParam0.f_12, *uParam0.f_12) * Vector(*uParam0.f_13, *uParam0.f_13, *uParam0.f_13), 1);
					}
					else
					{
						set_cam_coord(*uParam0.f_4, vVar0 + vVar15 * Vector(*uParam0.f_12, *uParam0.f_12, *uParam0.f_12) * Vector(*uParam0.f_13, *uParam0.f_13, *uParam0.f_13));
					}
					set_cam_rot(*uParam0.f_4, vVar6, 2);
					set_cam_fov(*uParam0.f_4, fVar21);
				}
				if (*uParam0.f_17 > 0 || iParam6 != 0)
				{
					_0x0FB82563989CF4FB(*uParam0.f_3, *uParam0.f_1, 0, 2);
					if (iParam6 == 0)
					{
						_0x0FB82563989CF4FB(*uParam0.f_3, *uParam0.f_4, *uParam0.f_17, 2);
					}
					_0x0FB82563989CF4FB(*uParam0.f_3, *uParam0.f_2, *uParam0.f_14 - *uParam0.f_17, 2);
					_0xD1B0F412F109EA5D(*uParam0.f_3, iParam6);
					set_cam_active(*uParam0.f_3, true);
				}
				else
				{
					set_cam_active_with_interp(*uParam0.f_2, *uParam0.f_1, *uParam0.f_14, 2, 2);
				}
				render_script_cams(true, false, 3000, 1, 0, 0);
				*uParam0.f_7 = get_game_timer();
				*uParam0.f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return true;
			}
			break;
		
		case 1:
			func_247();
			if (iParam3)
			{
				if (!*uParam0.f_8)
				{
					if (get_game_timer() >= *uParam0.f_7 + *uParam0.f_16)
					{
						if (iParam5)
						{
							switch (*uParam0.f_6)
							{
								case 1:
									_start_screen_effect("CamPushInFranklin", false, 0);
									break;
								
								case 0:
									_start_screen_effect("CamPushInMichael", false, 0);
									break;
								
								case 2:
									_start_screen_effect("CamPushInTrevor", false, 0);
									break;
							}
						}
						else
						{
							_start_screen_effect("CamPushInNeutral", false, 0);
						}
						play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						*uParam0.f_8 = 1;
					}
				}
			}
			if (get_game_timer() >= *uParam0.f_7 + *uParam0.f_15)
			{
				if (iParam2)
				{
					func_246(uParam0);
					render_script_cams(false, false, 3000, 1, 0, 0);
				}
				return true;
			}
			break;
		
		case 2:
			return true;
			break;
	}
	return false;
}

void func_246(var uParam0)
{
	if (does_cam_exist(*uParam0.f_1))
	{
		destroy_cam(*uParam0.f_1, 0);
	}
	if (does_cam_exist(*uParam0.f_2))
	{
		destroy_cam(*uParam0.f_2, 0);
	}
	if (does_cam_exist(*uParam0.f_3))
	{
		destroy_cam(*uParam0.f_3, 0);
	}
	if (does_cam_exist(*uParam0.f_4))
	{
		destroy_cam(*uParam0.f_4, 0);
	}
}

void func_247()
{
	_0xEB2D525B57F42B40();
	func_56();
}

int func_248(var uParam0)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	
	iVar0 = get_cam_spline_node_index(*uParam0.f_1);
	iVar1 = get_cam_spline_node_index(*uParam0.f_1) + 1;
	if (iVar1 > *uParam0.f_1217)
	{
		iVar1 = *uParam0.f_1217;
	}
	if (iVar1 < *uParam0.f_1217 - 1)
	{
		switch (*(uParam0.f_10[iVar1 /*57*/]).f_34)
		{
			case 0:
				fLocal_117 = func_260(*(uParam0.f_10[iVar1 /*57*/]).f_33, *(uParam0.f_10[iVar1 + 1 /*57*/]).f_33, get_cam_spline_node_phase(*uParam0.f_1));
				break;
			
			case 1:
				fLocal_117 = func_259(*(uParam0.f_10[iVar1 /*57*/]).f_33, *(uParam0.f_10[iVar1 + 1 /*57*/]).f_33, func_53(get_cam_spline_node_phase(*uParam0.f_1) * 1f / *(uParam0.f_10[iVar1 /*57*/]).f_35, 0f, 1f));
				break;
			
			case 2:
				fLocal_117 = func_258(*(uParam0.f_10[iVar1 /*57*/]).f_33, *(uParam0.f_10[iVar1 + 1 /*57*/]).f_33, func_53(get_cam_spline_node_phase(*uParam0.f_1) * 1f / *(uParam0.f_10[iVar1 /*57*/]).f_35, 0f, 1f));
				break;
			
			case 3:
				fLocal_117 = func_256(*(uParam0.f_10[iVar1 /*57*/]).f_33, *(uParam0.f_10[iVar1 + 1 /*57*/]).f_33, func_53(get_cam_spline_node_phase(*uParam0.f_1) * 1f / *(uParam0.f_10[iVar1 /*57*/]).f_35, 0f, 1f));
				break;
		}
		set_time_scale(fLocal_117);
	}
	else
	{
		set_time_scale(1f);
	}
	if (*(uParam0.f_10[iVar0 /*57*/]).f_2 == 8)
	{
		func_255(uParam0, iVar0, 0);
	}
	if (!*(uParam0.f_10[iVar1 /*57*/]).f_56)
	{
		if (*(uParam0.f_10[iVar1 /*57*/]).f_50 != 0)
		{
			if (!*uParam0.f_1231 || (iVar1 > 1 && *(uParam0.f_10[iVar0 /*57*/]).f_50 != *(uParam0.f_10[iVar1 /*57*/]).f_50))
			{
				if (get_cam_spline_node_phase(*uParam0.f_1) >= *(uParam0.f_10[iVar1 /*57*/]).f_52)
				{
					switch (*(uParam0.f_10[iVar1 /*57*/]).f_50)
					{
						case 1:
							sVar2 = "switch_cam_2";
							break;
						
						case 2:
							sVar2 = "switch_cam_1";
							break;
						
						case 3:
							sVar2 = "SwitchHUDIn";
							break;
					}
					switch (*(uParam0.f_10[iVar1 /*57*/]).f_50)
					{
						case 1:
						case 2:
							func_254(uParam0, iVar1);
							if (*(uParam0.f_10[iVar1 /*57*/]).f_51 > 0f)
							{
								set_transition_timecycle_modifier(sVar2, *(uParam0.f_10[iVar1 /*57*/]).f_51);
							}
							else
							{
								set_timecycle_modifier(sVar2);
							}
							break;
						
						case 3:
							func_254(uParam0, iVar1);
							_start_screen_effect(sVar2, floor(1000f * *(uParam0.f_10[iVar1 /*57*/]).f_51), 0);
							break;
					}
					*uParam0.f_1231 = 1;
					*(uParam0.f_10[iVar1 /*57*/]).f_56 = 1;
				}
			}
		}
		else if (*uParam0.f_1231)
		{
			if (get_cam_spline_node_phase(*uParam0.f_1) >= *(uParam0.f_10[iVar1 /*57*/]).f_52)
			{
				if (get_timecycle_modifier_index() != -1)
				{
					_0x1CBA05AE7BD7EE05(*(uParam0.f_10[iVar1 /*57*/]).f_51);
					*uParam0.f_1231 = 0;
					*(uParam0.f_10[iVar1 /*57*/]).f_56 = 1;
				}
				else if (!are_strings_equal(func_253(), ""))
				{
					func_254(uParam0, iVar1);
					*uParam0.f_1231 = 0;
					*(uParam0.f_10[iVar1 /*57*/]).f_56 = 1;
				}
			}
		}
	}
	if (*(uParam0.f_10[iVar1 /*57*/]).f_36)
	{
		if (!*(uParam0.f_10[iVar1 /*57*/]).f_44)
		{
			if (get_cam_spline_node_phase(*uParam0.f_1) >= *(uParam0.f_10[iVar1 /*57*/]).f_38)
			{
				func_252(uParam0, iVar1);
				*(uParam0.f_10[iVar1 /*57*/]).f_44 = 1;
			}
		}
	}
	if (*(uParam0.f_10[iVar0 /*57*/]).f_36)
	{
		if (!*(uParam0.f_10[iVar0 /*57*/]).f_44)
		{
			func_252(uParam0, iVar0);
			*(uParam0.f_10[iVar0 /*57*/]).f_44 = 1;
		}
	}
	_0xE3E2C1B4C59DBC77(6);
	if (iVar1 < *uParam0.f_1217 - 1)
	{
		if (!*(uParam0.f_10[iVar1 /*57*/]).f_55)
		{
			if (*(uParam0.f_10[iVar1 /*57*/]).f_54)
			{
				stop_cam_shaking(*(uParam0.f_10[iVar1 /*57*/]).f_1, 1);
			}
			if (*(uParam0.f_10[iVar1 /*57*/]).f_53 != 0)
			{
				sVar4 = "shake_cam_all@";
				if (*(uParam0.f_10[iVar1 /*57*/]).f_53 == 1)
				{
					sVar3 = "light";
				}
				else if (*(uParam0.f_10[iVar1 /*57*/]).f_53 == 2)
				{
					sVar3 = "medium";
				}
				else if (*(uParam0.f_10[iVar1 /*57*/]).f_53 == 3)
				{
					sVar3 = "heavy";
				}
				animated_shake_cam(*(uParam0.f_10[iVar1 /*57*/]).f_1, sVar4, sVar3, "", *(uParam0.f_10[iVar1 /*57*/]).f_23);
			}
			else
			{
				shake_cam(*uParam0.f_1, "SKY_DIVING_SHAKE", *(uParam0.f_10[iVar1 /*57*/]).f_23);
			}
			*(uParam0.f_10[iVar1 /*57*/]).f_55 = 1;
		}
	}
	if (*(uParam0.f_10[iVar0 /*57*/]).f_45)
	{
		func_251(0, 0, 1, 1);
	}
	else
	{
		func_250(3, 3, 0, 0);
	}
	if (get_cam_spline_node_index(*uParam0.f_1) < *uParam0.f_1217)
	{
		if (*(uParam0.f_10[get_cam_spline_node_index(*uParam0.f_1) + 1 /*57*/]).f_46)
		{
			iVar5 = true;
		}
	}
	if (*(uParam0.f_10[get_cam_spline_node_index(*uParam0.f_1) /*57*/]).f_46)
	{
		iVar5 = true;
	}
	if (iVar5)
	{
		set_use_hi_dof();
	}
	func_249(uParam0);
	return iVar0;
}

void func_249(var uParam0)
{
	if (*uParam0.f_1233 >= 0f)
	{
		if (get_cam_spline_phase(*uParam0.f_1) >= *uParam0.f_1233 && get_cam_spline_phase(*uParam0.f_1) < *uParam0.f_1234)
		{
			if (*uParam0.f_1238 == -1)
			{
				if (*uParam0.f_1235)
				{
					*uParam0.f_1238 = get_sound_id();
					play_sound_frontend(*uParam0.f_1238, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
			}
			if (*uParam0.f_1239 == -1)
			{
				if (*uParam0.f_1236)
				{
					*uParam0.f_1239 = get_sound_id();
					play_sound_frontend(*uParam0.f_1239, "Camera_Move_Loop", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
			}
		}
	}
	if (*uParam0.f_1234 >= 0f)
	{
		if (get_cam_spline_phase(*uParam0.f_1) >= *uParam0.f_1234 || get_cam_spline_phase(*uParam0.f_1) == 1f)
		{
			if (*uParam0.f_1239 != -1)
			{
				if (*uParam0.f_1236)
				{
					stop_sound(*uParam0.f_1239);
					*uParam0.f_1239 = -1;
				}
			}
			if (*uParam0.f_1240 == -1)
			{
				if (*uParam0.f_1237)
				{
					*uParam0.f_1240 = get_sound_id();
					play_sound_frontend(*uParam0.f_1240, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
				}
			}
		}
	}
}

void func_250(int iParam0, int iParam1, int iParam2, int iParam3)
{
	set_ped_population_budget(iParam0);
	set_vehicle_population_budget(iParam1);
	set_reduce_ped_model_budget(iParam2);
	set_reduce_vehicle_model_budget(iParam3);
}

void func_251(int iParam0, int iParam1, int iParam2, int iParam3)
{
	set_ped_population_budget(iParam0);
	set_vehicle_population_budget(iParam1);
	set_reduce_ped_model_budget(iParam2);
	set_reduce_vehicle_model_budget(iParam3);
}

void func_252(var uParam0, int iParam1)
{
	char* sVar0;
	
	switch (*(uParam0.f_10[iParam1 /*57*/]).f_37)
	{
		case 0:
			set_flash(*(uParam0.f_10[iParam1 /*57*/]).f_39, *(uParam0.f_10[iParam1 /*57*/]).f_40, *(uParam0.f_10[iParam1 /*57*/]).f_41, *(uParam0.f_10[iParam1 /*57*/]).f_42, *(uParam0.f_10[iParam1 /*57*/]).f_43);
			break;
		
		case 1:
			sVar0 = "DefaultFlash";
			break;
		
		case 2:
			sVar0 = "FocusOut";
			break;
		
		case 3:
			sVar0 = "MinigameEndNeutral";
			break;
		
		case 4:
			sVar0 = "MinigameTransitionOut";
			break;
		
		case 5:
			sVar0 = "PauseMenuOut";
			break;
		
		case 6:
			sVar0 = "SwitchShortNeutralIn";
			break;
		
		case 7:
			sVar0 = "SwitchShortNeutralMid";
			break;
		
		case 8:
			sVar0 = "SwitchShortMichaelMid";
			break;
		
		case 9:
			sVar0 = "SwitchShortMichaelIn";
			break;
		
		case 10:
			sVar0 = "SwitchSceneMichael";
			break;
		
		case 11:
			sVar0 = "SwitchShortTrevorMid";
			break;
		
		case 12:
			sVar0 = "SwitchShortFranklinIn";
			break;
		
		case 13:
			sVar0 = "SwitchShortFranklinMid";
			break;
		
		case 14:
			sVar0 = "SwitchShortTrevorIn";
			break;
		
		case 15:
			sVar0 = "SwitchOpenFranklinOut";
			break;
		
		case 16:
			sVar0 = "SwitchOpenMichaelIn";
			break;
		
		case 17:
			sVar0 = "SwitchOpenMichaelOut";
			break;
		
		case 18:
			sVar0 = "SwitchOpenTrevorIn";
			break;
		
		case 19:
			sVar0 = "SwitchOpenTrevorOut";
			break;
		
		case 20:
			sVar0 = "SwitchSceneFranklin";
			break;
		
		case 21:
			sVar0 = "SwitchSceneTrevor";
			break;
	}
	if (*(uParam0.f_10[iParam1 /*57*/]).f_37 > 0)
	{
		_start_screen_effect(sVar0, false, 0);
	}
}

char* func_253()
{
	char* sVar0;
	
	sVar0 = "";
	if (_get_screen_effect_is_active("SwitchSceneMichael"))
	{
		sVar0 = "SwitchSceneMichael";
	}
	else if (_get_screen_effect_is_active("SwitchSceneFranklin"))
	{
		sVar0 = "SwitchSceneFranklin";
	}
	else if (_get_screen_effect_is_active("SwitchSceneTrevor"))
	{
		sVar0 = "SwitchSceneTrevor";
	}
	else if (_get_screen_effect_is_active("SwitchSceneNeutral"))
	{
		sVar0 = "SwitchSceneNeutral";
	}
	else if (_get_screen_effect_is_active("SwitchHUDIn"))
	{
		sVar0 = "SwitchHUDIn";
	}
	return sVar0;
}

void func_254(var uParam0, int iParam1)
{
	if (are_strings_equal(func_253(), "SwitchHUDIn") && *(uParam0.f_10[iParam1 /*57*/]).f_51 > 0f)
	{
		_stop_screen_effect(func_253());
		_start_screen_effect("SwitchHUDOut", floor(*(uParam0.f_10[iParam1 /*57*/]).f_51) * 1000, 0);
	}
	else
	{
		_stop_screen_effect(func_253());
	}
}

void func_255(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0.f_10)
	{
		if ((iParam1 >= *uParam0.f_1218 && iVar0 >= *uParam0.f_1218) || iParam2)
		{
			if (*(uParam0.f_10[*(uParam0.f_10[iVar0 /*57*/]).f_27 /*57*/]).f_4 || *(uParam0.f_10[*(uParam0.f_10[iVar0 /*57*/]).f_27 /*57*/]).f_2 == 2)
			{
				set_cam_coord(*(uParam0.f_10[iVar0 /*57*/]).f_1, get_gameplay_cam_coord() + *(uParam0.f_10[iVar0 /*57*/].f_24));
				set_cam_rot(*(uParam0.f_10[iVar0 /*57*/]).f_1, get_gameplay_cam_rot(2), 2);
			}
		}
		iVar0++;
	}
}

float func_256(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = 0.5f * 1f - cos(func_257(fParam2 * 3.141593f));
	return fParam0 * 1f - fVar0 + fParam1 * fVar0;
}

float func_257(float fParam0)
{
	return fParam0 * 57.29578f;
}

float func_258(float fParam0, float fParam1, float fParam2)
{
	Vector3 fVar0;
	
	fVar0 = sin(func_257(fParam2 * 3.141593f * 0.5f));
	return fParam0 * 1f - fVar0 + fParam1 * fVar0;
}

float func_259(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = 1f - cos(func_257(fParam2 * 3.141593f * 0.5f));
	return fParam0 * 1f - fVar0 + fParam1 * fVar0;
}

float func_260(float fParam0, float fParam1, float fParam2)
{
	return 1f - fParam2 * fParam0 + fParam2 * fParam1;
}

void func_261(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_277(uParam0))
	{
	}
	iVar0 = 0;
	*uParam0.f_1232 = 0;
	func_276(uParam0);
	iVar1 = 0;
	while (iVar1 < 20)
	{
		*(uParam0.f_10[iVar1 /*57*/]).f_44 = 0;
		iVar1++;
	}
	*uParam0.f_1231 = 0;
	if (does_cam_exist(*uParam0.f_1))
	{
		destroy_cam(*uParam0.f_1, 0);
	}
	*uParam0.f_1 = create_camera(1665938388, 0);
	if (does_cam_exist(*uParam0.f_1))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0.f_1217)
		{
			func_266(uParam0, iVar1);
			if (*(uParam0.f_10[iVar1 /*57*/]).f_4 || *(uParam0.f_10[iVar1 /*57*/]).f_2 == 2)
			{
				if (func_265(uParam0, iVar1))
				{
					_0x0FB82563989CF4FB(*uParam0.f_1, *(uParam0.f_10[iVar1 /*57*/]).f_1, *(uParam0.f_10[iVar1 /*57*/]).f_5, 2);
				}
				else
				{
					_0x609278246A29CA34(*uParam0.f_1, *(uParam0.f_10[iVar1 /*57*/]).f_5, 2);
				}
			}
			else
			{
				_0x0FB82563989CF4FB(*uParam0.f_1, *(uParam0.f_10[iVar1 /*57*/]).f_1, *(uParam0.f_10[iVar1 /*57*/]).f_5, 2);
			}
			if (func_265(uParam0, iVar1))
			{
				func_262(uParam0, iVar1);
			}
			if (*(uParam0.f_10[iVar1 /*57*/]).f_28 > 0 && *(uParam0.f_10[iVar1 /*57*/]).f_29 > 0f)
			{
				switch (*(uParam0.f_10[iVar1 /*57*/]).f_28)
				{
					case 1:
						iVar0 = 4;
						break;
					
					case 2:
						iVar0 = 8;
						break;
					
					case 3:
						iVar0 = 16;
						break;
				}
				_0x83B8201ED82A9A2D(*uParam0.f_1, iVar1, iVar0, *(uParam0.f_10[iVar1 /*57*/]).f_29);
			}
			iVar2 = 0;
			if (*(uParam0.f_10[iVar1 /*57*/]).f_30)
			{
				iVar2++;
			}
			if (*(uParam0.f_10[iVar1 /*57*/]).f_31)
			{
				iVar2 += 8;
			}
			_0xA6385DEB180F319F(*uParam0.f_1, iVar1, *(uParam0.f_10[iVar1 /*57*/]).f_32);
			_0x7BF1A54AE67AC070(*uParam0.f_1, iVar1, iVar2);
			iVar1++;
		}
		if (*uParam0.f_3)
		{
			if (*uParam0.f_1219 >= 0)
			{
				_0x609278246A29CA34(*uParam0.f_1, *uParam0.f_1219, 2);
			}
		}
		if (*uParam0.f_2)
		{
			_0xD1B0F412F109EA5D(*uParam0.f_1, 0);
		}
		iVar1 = 0;
		while (iVar1 < 16)
		{
			if (*(uParam0.f_1151[iVar1 /*2*/]).f_1 > -1f)
			{
				override_cam_spline_velocity(*uParam0.f_1, iVar1, *uParam0.f_1151[iVar1 /*2*/], *(uParam0.f_1151[iVar1 /*2*/]).f_1);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 16)
		{
			override_cam_spline_motion_blur(*uParam0.f_1, iVar1, *uParam0.f_1184[iVar1 /*2*/], *(uParam0.f_1184[iVar1 /*2*/]).f_1);
			iVar1++;
		}
		_0x271017B9BA825366(*uParam0.f_1, 0);
	}
}

void func_262(var uParam0, int iParam1)
{
	attach_cam_to_entity(*(uParam0.f_10[iParam1 /*57*/]).f_1, func_263(uParam0, iParam1, -1), get_offset_from_entity_given_world_coords(func_263(uParam0, iParam1, -1), get_gameplay_cam_coord()), 1);
}

int func_263(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		iParam1 = iParam2;
	}
	if (iParam1 < *uParam0.f_1218 || (*uParam0.f_1218 == 0 && iParam2 == -1))
	{
		if (does_entity_exist(*uParam0.f_7[0]))
		{
			return func_264(*uParam0.f_7[0]);
		}
		else if (does_entity_exist(*uParam0.f_4[0]))
		{
			return func_264(*uParam0.f_4[0]);
		}
	}
	else if (does_entity_exist(*uParam0.f_7[1]))
	{
		return func_264(*uParam0.f_7[1]);
	}
	else if (does_entity_exist(*uParam0.f_4[1]))
	{
		return func_264(*uParam0.f_4[1]);
	}
	return false;
}

int func_264(int iParam0)
{
	return iParam0;
}

bool func_265(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if ((*(uParam0.f_10[iParam1 /*57*/]).f_2 == 2 || *(uParam0.f_10[iParam1 /*57*/]).f_4) && (*(uParam0.f_10[iParam1 + 1 /*57*/]).f_2 != 2 && *(uParam0.f_10[iParam1 + 1 /*57*/]).f_4 == 0))
		{
			return true;
		}
	}
	if (iParam1 == 1)
	{
		if ((*(uParam0.f_10[iParam1 /*57*/]).f_2 == 2 || *(uParam0.f_10[iParam1 /*57*/]).f_4) && (*(uParam0.f_10[iParam1 - 1 /*57*/]).f_2 != 2 && *(uParam0.f_10[iParam1 - 1 /*57*/]).f_4 == 0))
		{
			return true;
		}
	}
	return false;
}

void func_266(var uParam0, int iParam1)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	vector3 vVar19;
	float fVar22;
	vector3 vVar23;
	vector3 vVar26;
	vector3 vVar29;
	vector3 vVar32;
	float fVar35;
	float fVar36;
	vector3 vVar37;
	vector3 vVar40;
	vector3 vVar43;
	float fVar46;
	vector3 vVar47;
	int iVar50;
	
	if (func_265(uParam0, iParam1))
	{
		func_275(uParam0, iParam1);
	}
	if (*(uParam0.f_10[iParam1 /*57*/]).f_21 == 0f)
	{
		fVar0 = get_gameplay_cam_fov();
	}
	else
	{
		fVar0 = *(uParam0.f_10[iParam1 /*57*/]).f_21;
	}
	if (func_274(uParam0, iParam1))
	{
		func_273(uParam0, iParam1);
		if (iParam1 == *uParam0.f_1217 - 1)
		{
			*(uParam0.f_10[iParam1 /*57*/]).f_54 = 0;
		}
	}
	if (iParam1 == *uParam0.f_1217 - 1)
	{
		*(uParam0.f_10[iParam1 /*57*/]).f_54 = 0;
	}
	if (*(uParam0.f_10[iParam1 /*57*/]).f_2 == 4)
	{
		if (*(uParam0.f_10[iParam1 /*57*/]).f_3 > -1)
		{
			vVar1 = {func_272(uParam0, *(uParam0.f_10[iParam1 /*57*/]).f_3)};
		}
		else
		{
			vVar1 = {*(uParam0.f_10[iParam1 /*57*/].f_13)};
		}
		if ((iParam1 == 0 || (iParam1 > 0 && *(uParam0.f_10[iParam1 - 1 /*57*/]).f_4)) || (iParam1 > 0 && *(uParam0.f_10[iParam1 - 1 /*57*/]).f_2 == 2))
		{
			vVar4 = {get_gameplay_cam_coord()};
		}
		else
		{
			vVar4 = {*(uParam0.f_10[iParam1 - 1 /*57*/].f_6)};
			if (func_271(uParam0, iParam1 - 1))
			{
				get_entity_matrix(func_263(uParam0, iParam1 - 1, -1), &vVar7, &vVar10, &vVar13, &vVar16);
				if (*(uParam0.f_10[iParam1 /*57*/]).f_20)
				{
					vVar4 = {vVar16 + vVar7 * FtoV(*(uParam0.f_10[iParam1 - 1 /*57*/].f_6).f_1) + vVar10 * FtoV(*(uParam0.f_10[iParam1 - 1 /*57*/]).f_6) + vVar13 * FtoV(*(uParam0.f_10[iParam1 - 1 /*57*/].f_6).f_2)};
				}
				else
				{
					vVar4 = {vVar16 + *(uParam0.f_10[iParam1 - 1 /*57*/].f_6)};
				}
			}
		}
		vVar19 = {vVar1 - vVar4};
		fVar22 = vmag(vVar19) - *(uParam0.f_10[iParam1 /*57*/]).f_12;
		vVar19 = {func_270(vVar19)};
		vVar19 = {vVar19 * Vector(fVar22, fVar22, fVar22)};
		*(uParam0.f_10[iParam1 /*57*/].f_6) = {vVar4 + vVar19};
		if (*(uParam0.f_10[iParam1 /*57*/]).f_3 > -1)
		{
			*(uParam0.f_10[iParam1 /*57*/].f_13) = {vVar1};
		}
	}
	else if (*(uParam0.f_10[iParam1 /*57*/]).f_2 == 5 || *(uParam0.f_10[iParam1 /*57*/]).f_2 == 6)
	{
		vVar23 = {0f, 0f, 0f};
		if (does_entity_exist(func_263(uParam0, *uParam0.f_1218, -1)))
		{
			if (*(uParam0.f_10[iParam1 /*57*/]).f_3 > -1)
			{
				vVar23 = {func_272(uParam0, *(uParam0.f_10[iParam1 /*57*/]).f_3)};
			}
			else
			{
				vVar23 = {get_entity_coords(func_263(uParam0, *uParam0.f_1218, -1), 1)};
			}
		}
		vVar26 = {get_gameplay_cam_rot(2)};
		vVar29 = {get_gameplay_cam_coord()};
		vVar32 = {vVar23 - vVar29};
		fVar35 = 0f;
		if (iParam1 < *uParam0.f_1218 || *uParam0.f_1218 == 0)
		{
			fVar35 = *(uParam0.f_10[iParam1 /*57*/]).f_12;
		}
		fVar36 = vmag(vVar32) - fVar35;
		vVar32 = {func_269(vVar26)};
		vVar29 = {vVar29 + vVar32 * Vector(fVar35, fVar35, fVar35)};
		if (iParam1 < *uParam0.f_1218)
		{
			*(uParam0.f_10[iParam1 /*57*/].f_6) = {vVar29};
		}
		else
		{
			*(uParam0.f_10[iParam1 /*57*/].f_6) = {vVar29 + vVar32 * FtoV(fVar36 - *(uParam0.f_10[iParam1 /*57*/]).f_12)};
		}
		*(uParam0.f_10[iParam1 /*57*/].f_9) = {vVar26};
	}
	else if (*(uParam0.f_10[iParam1 /*57*/]).f_2 == 7)
	{
		vVar37 = {*(uParam0.f_10[iParam1 /*57*/].f_13)};
		vVar40 = {get_entity_coords(func_263(uParam0, iParam1, -1), 1)};
		vVar43 = {vVar37 - vVar40};
		fVar46 = 0f;
		fVar46 = *(uParam0.f_10[iParam1 /*57*/]).f_12;
		vVar43 = {func_270(vVar43)};
		vVar47 = {vVar40 + vVar43 * Vector(fVar46, fVar46, fVar46)};
		vVar47.z += *(uParam0.f_10[iParam1 /*57*/]).f_16;
		*(uParam0.f_10[iParam1 /*57*/].f_6) = {vVar47};
	}
	if (*(uParam0.f_10[iParam1 /*57*/]).f_2 == 8)
	{
		func_268(uParam0, iParam1);
		fVar0 = *(uParam0.f_10[iParam1 /*57*/]).f_21;
	}
	*(uParam0.f_10[iParam1 /*57*/]).f_1 = create_camera_with_params(26379945, *(uParam0.f_10[iParam1 /*57*/].f_6), *(uParam0.f_10[iParam1 /*57*/].f_9), fVar0, 1, 2);
	iVar50 = *(uParam0.f_10[iParam1 /*57*/]).f_1;
	if (does_cam_exist(*(uParam0.f_10[iParam1 /*57*/]).f_1))
	{
		set_cam_motion_blur_strength(iVar50, *(uParam0.f_10[iParam1 /*57*/]).f_22);
		if (*(uParam0.f_10[iParam1 /*57*/]).f_2 == 4)
		{
			point_cam_at_coord(iVar50, *(uParam0.f_10[iParam1 /*57*/].f_13));
		}
		if (*(uParam0.f_10[iParam1 /*57*/]).f_2 == 3 && *(uParam0.f_10[iParam1 /*57*/]).f_3 > -1)
		{
			point_cam_at_entity(iVar50, func_263(uParam0, iParam1, *(uParam0.f_10[iParam1 /*57*/]).f_3), *(uParam0.f_10[iParam1 /*57*/].f_9), *(uParam0.f_10[iParam1 /*57*/]).f_19);
		}
		if (*(uParam0.f_10[iParam1 /*57*/]).f_2 == 6)
		{
			if (*(uParam0.f_10[iParam1 /*57*/]).f_3 > -1)
			{
				attach_cam_to_entity(iVar50, func_263(uParam0, iParam1, *(uParam0.f_10[iParam1 /*57*/]).f_3), *(uParam0.f_10[iParam1 /*57*/].f_6) - func_272(uParam0, *(uParam0.f_10[iParam1 /*57*/]).f_3) + *(uParam0.f_10[iParam1 /*57*/].f_24), 0);
			}
			else
			{
				attach_cam_to_entity(iVar50, func_263(uParam0, iParam1, -1), *(uParam0.f_10[iParam1 /*57*/].f_9), 0);
			}
		}
		if (*(uParam0.f_10[iParam1 /*57*/]).f_2 == 7)
		{
			if (*(uParam0.f_10[iParam1 /*57*/]).f_17)
			{
				attach_cam_to_entity(iVar50, func_263(uParam0, iParam1, -1), *(uParam0.f_10[iParam1 /*57*/].f_6) - get_entity_coords(func_263(uParam0, iParam1, -1), 1), 0);
			}
		}
		if (func_271(uParam0, iParam1))
		{
			if (does_entity_exist(func_263(uParam0, iParam1, -1)))
			{
				attach_cam_to_entity(iVar50, func_263(uParam0, iParam1, -1), *(uParam0.f_10[iParam1 /*57*/].f_6), *(uParam0.f_10[iParam1 /*57*/]).f_20);
				if (*(uParam0.f_10[iParam1 /*57*/]).f_18)
				{
					if (*(uParam0.f_10[iParam1 /*57*/]).f_3 > -1)
					{
						point_cam_at_entity(iVar50, func_263(uParam0, iParam1, *(uParam0.f_10[iParam1 /*57*/]).f_3), *(uParam0.f_10[iParam1 /*57*/].f_9), *(uParam0.f_10[iParam1 /*57*/]).f_19);
					}
					else
					{
						point_cam_at_entity(iVar50, func_263(uParam0, iParam1, -1), *(uParam0.f_10[iParam1 /*57*/].f_9), *(uParam0.f_10[iParam1 /*57*/]).f_19);
					}
				}
			}
		}
		if (*(uParam0.f_10[iParam1 /*57*/]).f_2 == 7)
		{
			point_cam_at_coord(iVar50, *(uParam0.f_10[iParam1 /*57*/].f_13));
		}
		if (*(uParam0.f_10[iParam1 /*57*/]).f_46)
		{
			func_267(uParam0, iParam1);
		}
	}
	*(uParam0.f_10[iParam1 /*57*/]).f_55 = 0;
	*(uParam0.f_10[iParam1 /*57*/]).f_56 = 0;
}

void func_267(var uParam0, int iParam1)
{
	set_cam_near_dof(*(uParam0.f_10[iParam1 /*57*/]).f_1, *(uParam0.f_10[iParam1 /*57*/]).f_47);
	set_cam_far_dof(*(uParam0.f_10[iParam1 /*57*/]).f_1, *(uParam0.f_10[iParam1 /*57*/].f_47).f_1);
	set_cam_dof_strength(*(uParam0.f_10[iParam1 /*57*/]).f_1, *(uParam0.f_10[iParam1 /*57*/].f_47).f_2);
}

void func_268(var uParam0, int iParam1)
{
	var uVar0;
	
	if (iParam1 == 0)
	{
		return;
	}
	uVar0 = *(uParam0.f_10[iParam1 /*57*/]).f_27;
	if (*(uParam0.f_10[uVar0 /*57*/]).f_4 || *(uParam0.f_10[uVar0 /*57*/]).f_2 == 2)
	{
		*(uParam0.f_10[iParam1 /*57*/].f_6) = {get_gameplay_cam_coord() + *(uParam0.f_10[iParam1 /*57*/].f_24)};
		*(uParam0.f_10[iParam1 /*57*/].f_9) = {get_gameplay_cam_rot(2)};
	}
	else
	{
		*(uParam0.f_10[iParam1 /*57*/].f_6) = {*(uParam0.f_10[uVar0 /*57*/].f_6) + *(uParam0.f_10[iParam1 /*57*/].f_24)};
		*(uParam0.f_10[iParam1 /*57*/].f_9) = {*(uParam0.f_10[uVar0 /*57*/].f_9)};
	}
	*(uParam0.f_10[iParam1 /*57*/]).f_21 = *(uParam0.f_10[uVar0 /*57*/]).f_21;
	if (*(uParam0.f_10[iParam1 /*57*/]).f_21 == 0f)
	{
		*(uParam0.f_10[iParam1 /*57*/]).f_21 = get_gameplay_cam_fov();
	}
	*(uParam0.f_10[iParam1 /*57*/]).f_18 = *(uParam0.f_10[uVar0 /*57*/]).f_18;
	*(uParam0.f_10[iParam1 /*57*/]).f_12 = *(uParam0.f_10[uVar0 /*57*/]).f_12;
	*(uParam0.f_10[iParam1 /*57*/].f_13) = {*(uParam0.f_10[uVar0 /*57*/].f_13)};
	*(uParam0.f_10[iParam1 /*57*/]).f_19 = *(uParam0.f_10[uVar0 /*57*/]).f_19;
	*(uParam0.f_10[iParam1 /*57*/]).f_20 = *(uParam0.f_10[uVar0 /*57*/]).f_20;
}

Vector3 func_269(vector3 vParam0)
{
	vector3 vVar0;
	
	vVar0.x = cos(vParam0.x);
	vVar0.y = cos(vParam0.z);
	vVar0.z = sin(vParam0.x);
	vVar0.y *= vVar0.x;
	vVar0.x *= -sin(vParam0.z);
	return vVar0;
}

Vector3 func_270(vector3 vParam0)
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

int func_271(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (*(uParam0.f_10[iParam1 /*57*/]).f_2 == 0)
	{
		iVar0 = 1;
	}
	if (*(uParam0.f_10[iParam1 /*57*/]).f_2 == 1)
	{
		iVar0 = 1;
	}
	if (*(uParam0.f_10[iParam1 /*57*/]).f_4 || *(uParam0.f_10[iParam1 /*57*/]).f_2 == 2)
	{
		iVar0 = 0;
	}
	if (iParam1 > 0)
	{
		if (*(uParam0.f_10[iParam1 /*57*/]).f_2 == 8)
		{
			if (*(uParam0.f_10[*(uParam0.f_10[iParam1 /*57*/]).f_27 /*57*/]).f_2 == 0)
			{
				iVar0 = 1;
			}
			if (*(uParam0.f_10[*(uParam0.f_10[iParam1 /*57*/]).f_27 /*57*/]).f_2 == 1)
			{
				iVar0 = 1;
			}
			if (*(uParam0.f_10[*(uParam0.f_10[iParam1 /*57*/]).f_27 /*57*/]).f_4 || *(uParam0.f_10[*(uParam0.f_10[iParam1 /*57*/]).f_27 /*57*/]).f_2 == 2)
			{
				iVar0 = 0;
			}
		}
	}
	if (iParam1 < *uParam0.f_1217 - 1)
	{
		if (*(uParam0.f_10[iParam1 /*57*/]).f_54)
		{
			if (((((*(uParam0.f_10[iParam1 + 1 /*57*/]).f_2 == 2 || *(uParam0.f_10[iParam1 + 1 /*57*/]).f_4) || *(uParam0.f_10[iParam1 + 1 /*57*/]).f_2 == 3) || *(uParam0.f_10[iParam1 + 1 /*57*/]).f_2 == 4) || *(uParam0.f_10[iParam1 + 1 /*57*/]).f_2 == 5) || *(uParam0.f_10[iParam1 + 1 /*57*/]).f_2 == 6)
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

Vector3 func_272(var uParam0, int iParam1)
{
	if (iParam1 < 2)
	{
		if (does_entity_exist(*uParam0.f_4[iParam1]))
		{
			return get_entity_coords(*uParam0.f_4[iParam1], 1);
		}
		if (does_entity_exist(*uParam0.f_7[iParam1]))
		{
			return get_entity_coords(*uParam0.f_7[iParam1], 1);
		}
	}
	return 0f, 0f, 0f;
}

void func_273(var uParam0, int iParam1)
{
	if (iParam1 < *uParam0.f_1217 - 1)
	{
		*(uParam0.f_10[iParam1 /*57*/]).f_5 = 0;
		*(uParam0.f_10[iParam1 /*57*/].f_6) = {*(uParam0.f_10[iParam1 + 1 /*57*/].f_6)};
		*(uParam0.f_10[iParam1 /*57*/].f_9) = {*(uParam0.f_10[iParam1 + 1 /*57*/].f_9)};
		*(uParam0.f_10[iParam1 /*57*/]).f_18 = *(uParam0.f_10[iParam1 + 1 /*57*/]).f_18;
		*(uParam0.f_10[iParam1 /*57*/]).f_21 = *(uParam0.f_10[iParam1 + 1 /*57*/]).f_21;
		*(uParam0.f_10[iParam1 /*57*/]).f_22 = *(uParam0.f_10[iParam1 + 1 /*57*/]).f_22;
		*(uParam0.f_10[iParam1 /*57*/]).f_23 = *(uParam0.f_10[iParam1 + 1 /*57*/]).f_23;
		*(uParam0.f_10[iParam1 /*57*/]).f_28 = *(uParam0.f_10[iParam1 + 1 /*57*/]).f_28;
		*(uParam0.f_10[iParam1 /*57*/]).f_29 = *(uParam0.f_10[iParam1 + 1 /*57*/]).f_29;
		*(uParam0.f_10[iParam1 /*57*/]).f_30 = *(uParam0.f_10[iParam1 + 1 /*57*/]).f_30;
		*(uParam0.f_10[iParam1 /*57*/]).f_31 = *(uParam0.f_10[iParam1 + 1 /*57*/]).f_31;
		*(uParam0.f_10[iParam1 /*57*/]).f_33 = *(uParam0.f_10[iParam1 + 1 /*57*/]).f_33;
		*(uParam0.f_10[iParam1 /*57*/]).f_34 = *(uParam0.f_10[iParam1 + 1 /*57*/]).f_34;
		*(uParam0.f_10[iParam1 /*57*/]).f_35 = *(uParam0.f_10[iParam1 + 1 /*57*/]).f_35;
		*(uParam0.f_10[iParam1 /*57*/]).f_36 = 0;
		*(uParam0.f_10[iParam1 /*57*/]).f_39 = 0f;
		*(uParam0.f_10[iParam1 /*57*/]).f_40 = 0f;
		*(uParam0.f_10[iParam1 /*57*/]).f_41 = 0;
		*(uParam0.f_10[iParam1 /*57*/]).f_42 = 0;
		*(uParam0.f_10[iParam1 /*57*/]).f_43 = 0;
		*(uParam0.f_10[iParam1 /*57*/]).f_46 = *(uParam0.f_10[iParam1 + 1 /*57*/]).f_46;
		*(uParam0.f_10[iParam1 /*57*/]).f_4 = *(uParam0.f_10[iParam1 + 1 /*57*/]).f_4;
		*(uParam0.f_10[iParam1 /*57*/]).f_12 = *(uParam0.f_10[iParam1 + 1 /*57*/]).f_12;
		*(uParam0.f_10[iParam1 /*57*/].f_13) = {*(uParam0.f_10[iParam1 + 1 /*57*/].f_13)};
		*(uParam0.f_10[iParam1 /*57*/]).f_19 = *(uParam0.f_10[iParam1 + 1 /*57*/]).f_19;
		*(uParam0.f_10[iParam1 /*57*/]).f_20 = *(uParam0.f_10[iParam1 + 1 /*57*/]).f_20;
		*(uParam0.f_10[iParam1 /*57*/]).f_50 = *(uParam0.f_10[iParam1 + 1 /*57*/]).f_50;
		*(uParam0.f_10[iParam1 /*57*/]).f_45 = *(uParam0.f_10[iParam1 + 1 /*57*/]).f_45;
	}
}

bool func_274(var uParam0, int iParam1)
{
	if (iParam1 > 0 && iParam1 < *uParam0.f_1217 - 1)
	{
		if (*(uParam0.f_10[iParam1 /*57*/]).f_54)
		{
			return true;
		}
	}
	return false;
}

void func_275(var uParam0, int iParam1)
{
	*(uParam0.f_10[iParam1 /*57*/].f_6) = {get_gameplay_cam_coord()};
	*(uParam0.f_10[iParam1 /*57*/].f_9) = {get_gameplay_cam_rot(2)};
	*(uParam0.f_10[iParam1 /*57*/]).f_21 = get_gameplay_cam_fov();
}

void func_276(var uParam0)
{
	stop_sound(*uParam0.f_1240);
	stop_sound(*uParam0.f_1238);
	stop_sound(*uParam0.f_1239);
	*uParam0.f_1240 = -1;
	*uParam0.f_1238 = -1;
	*uParam0.f_1239 = -1;
}

bool func_277(var uParam0)
{
	*uParam0 = *uParam0;
	if (func_278(uParam0))
	{
		request_anim_dict("shake_cam_all@");
		if (has_anim_dict_loaded("shake_cam_all@"))
		{
			return true;
		}
		return false;
	}
	return true;
}

int func_278(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam0.f_1217)
	{
		if (*(uParam0.f_10[iVar1 /*57*/]).f_53 != 0)
		{
			iVar0 = 1;
		}
		iVar1++;
	}
	return iVar0;
}

void func_279(var uParam0, var uParam1, var uParam2)
{
	if (!iLocal_1411)
	{
		*(uParam0.f_10[0 /*57*/]).f_2 = 1;
		*(uParam0.f_10[0 /*57*/]).f_4 = 0;
		*(uParam0.f_10[0 /*57*/]).f_5 = 0;
		*(uParam0.f_10[0 /*57*/].f_6) = {-2.4172f, 4.2304f, 0.1681f};
		*(uParam0.f_10[0 /*57*/].f_13) = {0f, 0f, 0f};
		*(uParam0.f_10[0 /*57*/]).f_12 = 0f;
		*(uParam0.f_10[0 /*57*/].f_9) = {0.9921f, 1.067f, 0.0872f};
		*(uParam0.f_10[0 /*57*/]).f_18 = 1;
		*(uParam0.f_10[0 /*57*/]).f_19 = 1;
		*(uParam0.f_10[0 /*57*/]).f_20 = 1;
		*(uParam0.f_10[0 /*57*/]).f_21 = 45f;
		*(uParam0.f_10[0 /*57*/]).f_50 = 0;
		*(uParam0.f_10[0 /*57*/]).f_51 = 0f;
		*(uParam0.f_10[0 /*57*/]).f_52 = 0f;
		*(uParam0.f_10[0 /*57*/]).f_22 = 0f;
		*(uParam0.f_10[0 /*57*/]).f_53 = 0;
		*(uParam0.f_10[0 /*57*/]).f_23 = 0f;
		*(uParam0.f_10[0 /*57*/]).f_28 = 0;
		*(uParam0.f_10[0 /*57*/]).f_29 = 1f;
		*(uParam0.f_10[0 /*57*/]).f_30 = 0;
		*(uParam0.f_10[0 /*57*/]).f_31 = 1;
		*(uParam0.f_10[0 /*57*/]).f_33 = 1f;
		*(uParam0.f_10[0 /*57*/]).f_34 = 0;
		*(uParam0.f_10[0 /*57*/]).f_35 = 1f;
		*(uParam0.f_10[0 /*57*/]).f_36 = 0;
		*(uParam0.f_10[0 /*57*/]).f_39 = 0f;
		*(uParam0.f_10[0 /*57*/]).f_40 = 0f;
		*(uParam0.f_10[0 /*57*/]).f_41 = 0;
		*(uParam0.f_10[0 /*57*/]).f_42 = 0;
		*(uParam0.f_10[0 /*57*/]).f_43 = 0;
		*(uParam0.f_10[0 /*57*/]).f_38 = 0f;
		*(uParam0.f_10[0 /*57*/]).f_45 = 0;
		*(uParam0.f_10[0 /*57*/]).f_46 = 0;
		*(uParam0.f_10[0 /*57*/]).f_47 = 0f;
		*(uParam0.f_10[0 /*57*/].f_47).f_1 = 0f;
		*(uParam0.f_10[0 /*57*/].f_47).f_2 = 0f;
		*(uParam0.f_10[1 /*57*/]).f_2 = 1;
		*(uParam0.f_10[1 /*57*/]).f_4 = 0;
		*(uParam0.f_10[1 /*57*/]).f_5 = 1800;
		*(uParam0.f_10[1 /*57*/].f_6) = {-2.4172f, 4.2304f, 0.1681f};
		*(uParam0.f_10[1 /*57*/].f_13) = {0f, 0f, 0f};
		*(uParam0.f_10[1 /*57*/]).f_12 = 0f;
		*(uParam0.f_10[1 /*57*/].f_9) = {0.9921f, 1.067f, 0.0872f};
		*(uParam0.f_10[1 /*57*/]).f_18 = 1;
		*(uParam0.f_10[1 /*57*/]).f_19 = 1;
		*(uParam0.f_10[1 /*57*/]).f_20 = 1;
		*(uParam0.f_10[1 /*57*/]).f_21 = 50f;
		*(uParam0.f_10[1 /*57*/]).f_50 = 0;
		*(uParam0.f_10[1 /*57*/]).f_51 = 0f;
		*(uParam0.f_10[1 /*57*/]).f_52 = 0f;
		*(uParam0.f_10[1 /*57*/]).f_22 = 0f;
		*(uParam0.f_10[1 /*57*/]).f_53 = 0;
		*(uParam0.f_10[1 /*57*/]).f_23 = 0f;
		*(uParam0.f_10[1 /*57*/]).f_28 = 0;
		*(uParam0.f_10[1 /*57*/]).f_29 = 0f;
		*(uParam0.f_10[1 /*57*/]).f_30 = 1;
		*(uParam0.f_10[1 /*57*/]).f_31 = 1;
		*(uParam0.f_10[1 /*57*/]).f_33 = 1f;
		*(uParam0.f_10[1 /*57*/]).f_34 = 0;
		*(uParam0.f_10[1 /*57*/]).f_35 = 0f;
		*(uParam0.f_10[1 /*57*/]).f_36 = 0;
		*(uParam0.f_10[1 /*57*/]).f_39 = 0f;
		*(uParam0.f_10[1 /*57*/]).f_40 = 0f;
		*(uParam0.f_10[1 /*57*/]).f_41 = 0;
		*(uParam0.f_10[1 /*57*/]).f_42 = 0;
		*(uParam0.f_10[1 /*57*/]).f_43 = 0;
		*(uParam0.f_10[1 /*57*/]).f_38 = 0f;
		*(uParam0.f_10[1 /*57*/]).f_45 = 0;
		*(uParam0.f_10[1 /*57*/]).f_46 = 0;
		*(uParam0.f_10[1 /*57*/]).f_47 = 0f;
		*(uParam0.f_10[1 /*57*/].f_47).f_1 = 0f;
		*(uParam0.f_10[1 /*57*/].f_47).f_2 = 0f;
		*(uParam0.f_10[2 /*57*/]).f_2 = 1;
		*(uParam0.f_10[2 /*57*/]).f_4 = 1;
		*(uParam0.f_10[2 /*57*/]).f_5 = 1600;
		*(uParam0.f_10[2 /*57*/].f_6) = {0f, 0f, 0f};
		*(uParam0.f_10[2 /*57*/].f_13) = {0f, 0f, 0f};
		*(uParam0.f_10[2 /*57*/]).f_12 = 0f;
		*(uParam0.f_10[2 /*57*/].f_9) = {0f, 0f, 0f};
		*(uParam0.f_10[2 /*57*/]).f_18 = 0;
		*(uParam0.f_10[2 /*57*/]).f_19 = 0;
		*(uParam0.f_10[2 /*57*/]).f_20 = 0;
		*(uParam0.f_10[2 /*57*/]).f_21 = 45f;
		*(uParam0.f_10[2 /*57*/]).f_50 = 0;
		*(uParam0.f_10[2 /*57*/]).f_51 = 0f;
		*(uParam0.f_10[2 /*57*/]).f_52 = 0f;
		*(uParam0.f_10[2 /*57*/]).f_22 = 0.1f;
		*(uParam0.f_10[2 /*57*/]).f_53 = 0;
		*(uParam0.f_10[2 /*57*/]).f_23 = 0f;
		*(uParam0.f_10[2 /*57*/]).f_28 = 0;
		*(uParam0.f_10[2 /*57*/]).f_29 = 0f;
		*(uParam0.f_10[2 /*57*/]).f_30 = 1;
		*(uParam0.f_10[2 /*57*/]).f_31 = 0;
		*(uParam0.f_10[2 /*57*/]).f_33 = 1f;
		*(uParam0.f_10[2 /*57*/]).f_34 = 0;
		*(uParam0.f_10[2 /*57*/]).f_35 = 0f;
		*(uParam0.f_10[2 /*57*/]).f_36 = 0;
		*(uParam0.f_10[2 /*57*/]).f_39 = 0f;
		*(uParam0.f_10[2 /*57*/]).f_40 = 0f;
		*(uParam0.f_10[2 /*57*/]).f_41 = 0;
		*(uParam0.f_10[2 /*57*/]).f_42 = 0;
		*(uParam0.f_10[2 /*57*/]).f_43 = 0;
		*(uParam0.f_10[2 /*57*/]).f_38 = 0f;
		*(uParam0.f_10[2 /*57*/]).f_45 = 0;
		*(uParam0.f_10[2 /*57*/]).f_46 = 0;
		*(uParam0.f_10[2 /*57*/]).f_47 = 0f;
		*(uParam0.f_10[2 /*57*/].f_47).f_1 = 0f;
		*(uParam0.f_10[2 /*57*/].f_47).f_2 = 0f;
		*(uParam0.f_10[3 /*57*/]).f_2 = 0;
		*(uParam0.f_10[3 /*57*/]).f_4 = 1;
		*(uParam0.f_10[3 /*57*/]).f_5 = 2000;
		*(uParam0.f_10[3 /*57*/].f_6) = {0f, 0f, 0f};
		*(uParam0.f_10[3 /*57*/].f_13) = {0f, 0f, 0f};
		*(uParam0.f_10[3 /*57*/]).f_12 = 0f;
		*(uParam0.f_10[3 /*57*/].f_9) = {0f, 0f, 0f};
		*(uParam0.f_10[3 /*57*/]).f_18 = 0;
		*(uParam0.f_10[3 /*57*/]).f_19 = 0;
		*(uParam0.f_10[3 /*57*/]).f_20 = 0;
		*(uParam0.f_10[3 /*57*/]).f_21 = 45f;
		*(uParam0.f_10[3 /*57*/]).f_50 = 0;
		*(uParam0.f_10[3 /*57*/]).f_51 = 0f;
		*(uParam0.f_10[3 /*57*/]).f_52 = 0f;
		*(uParam0.f_10[3 /*57*/]).f_22 = 0f;
		*(uParam0.f_10[3 /*57*/]).f_53 = 0;
		*(uParam0.f_10[3 /*57*/]).f_23 = 0f;
		*(uParam0.f_10[3 /*57*/]).f_28 = 0;
		*(uParam0.f_10[3 /*57*/]).f_29 = 0f;
		*(uParam0.f_10[3 /*57*/]).f_30 = 1;
		*(uParam0.f_10[3 /*57*/]).f_31 = 0;
		*(uParam0.f_10[3 /*57*/]).f_33 = 1f;
		*(uParam0.f_10[3 /*57*/]).f_34 = 0;
		*(uParam0.f_10[3 /*57*/]).f_35 = 0f;
		*(uParam0.f_10[3 /*57*/]).f_36 = 0;
		*(uParam0.f_10[3 /*57*/]).f_39 = 0f;
		*(uParam0.f_10[3 /*57*/]).f_40 = 0f;
		*(uParam0.f_10[3 /*57*/]).f_41 = 0;
		*(uParam0.f_10[3 /*57*/]).f_42 = 0;
		*(uParam0.f_10[3 /*57*/]).f_43 = 0;
		*(uParam0.f_10[3 /*57*/]).f_38 = 0f;
		*(uParam0.f_10[3 /*57*/]).f_45 = 0;
		*(uParam0.f_10[3 /*57*/]).f_46 = 0;
		*(uParam0.f_10[3 /*57*/]).f_47 = 0f;
		*(uParam0.f_10[3 /*57*/].f_47).f_1 = 0f;
		*(uParam0.f_10[3 /*57*/].f_47).f_2 = 0f;
		*uParam0.f_1217 = 4;
		*uParam0.f_1218 = 2;
		*uParam0.f_2 = 0;
		*uParam0.f_3 = 1;
		*uParam0.f_1219 = 1000;
	}
	else
	{
		*(uParam0.f_10[0 /*57*/]).f_2 = 1;
		*(uParam0.f_10[0 /*57*/]).f_4 = 0;
		*(uParam0.f_10[0 /*57*/]).f_5 = 0;
		*(uParam0.f_10[0 /*57*/].f_6) = {-2.4172f, 4.2304f, 0.1681f};
		*(uParam0.f_10[0 /*57*/].f_13) = {0f, 0f, 0f};
		*(uParam0.f_10[0 /*57*/]).f_12 = 0f;
		*(uParam0.f_10[0 /*57*/].f_9) = {0.9921f, 1.067f, 0.0872f};
		*(uParam0.f_10[0 /*57*/]).f_18 = 1;
		*(uParam0.f_10[0 /*57*/]).f_19 = 1;
		*(uParam0.f_10[0 /*57*/]).f_20 = 1;
		*(uParam0.f_10[0 /*57*/]).f_21 = 45f;
		*(uParam0.f_10[0 /*57*/]).f_50 = 0;
		*(uParam0.f_10[0 /*57*/]).f_51 = 0f;
		*(uParam0.f_10[0 /*57*/]).f_52 = 0f;
		*(uParam0.f_10[0 /*57*/]).f_22 = 0f;
		*(uParam0.f_10[0 /*57*/]).f_53 = 0;
		*(uParam0.f_10[0 /*57*/]).f_23 = 0f;
		*(uParam0.f_10[0 /*57*/]).f_28 = 0;
		*(uParam0.f_10[0 /*57*/]).f_29 = 1f;
		*(uParam0.f_10[0 /*57*/]).f_30 = 0;
		*(uParam0.f_10[0 /*57*/]).f_31 = 1;
		*(uParam0.f_10[0 /*57*/]).f_33 = 1f;
		*(uParam0.f_10[0 /*57*/]).f_34 = 0;
		*(uParam0.f_10[0 /*57*/]).f_35 = 1f;
		*(uParam0.f_10[0 /*57*/]).f_36 = 0;
		*(uParam0.f_10[0 /*57*/]).f_39 = 0f;
		*(uParam0.f_10[0 /*57*/]).f_40 = 0f;
		*(uParam0.f_10[0 /*57*/]).f_41 = 0;
		*(uParam0.f_10[0 /*57*/]).f_42 = 0;
		*(uParam0.f_10[0 /*57*/]).f_43 = 0;
		*(uParam0.f_10[0 /*57*/]).f_38 = 0f;
		*(uParam0.f_10[0 /*57*/]).f_45 = 0;
		*(uParam0.f_10[0 /*57*/]).f_46 = 0;
		*(uParam0.f_10[0 /*57*/]).f_47 = 0f;
		*(uParam0.f_10[0 /*57*/].f_47).f_1 = 0f;
		*(uParam0.f_10[0 /*57*/].f_47).f_2 = 0f;
		*(uParam0.f_10[1 /*57*/]).f_2 = 1;
		*(uParam0.f_10[1 /*57*/]).f_4 = 0;
		*(uParam0.f_10[1 /*57*/]).f_5 = 1800;
		*(uParam0.f_10[1 /*57*/].f_6) = {-2.4172f, 4.2304f, 0.1681f};
		*(uParam0.f_10[1 /*57*/].f_13) = {0f, 0f, 0f};
		*(uParam0.f_10[1 /*57*/]).f_12 = 0f;
		*(uParam0.f_10[1 /*57*/].f_9) = {0.9921f, 1.067f, 0.0872f};
		*(uParam0.f_10[1 /*57*/]).f_18 = 1;
		*(uParam0.f_10[1 /*57*/]).f_19 = 1;
		*(uParam0.f_10[1 /*57*/]).f_20 = 1;
		*(uParam0.f_10[1 /*57*/]).f_21 = 50f;
		*(uParam0.f_10[1 /*57*/]).f_50 = 0;
		*(uParam0.f_10[1 /*57*/]).f_51 = 0f;
		*(uParam0.f_10[1 /*57*/]).f_52 = 0f;
		*(uParam0.f_10[1 /*57*/]).f_22 = 0f;
		*(uParam0.f_10[1 /*57*/]).f_53 = 0;
		*(uParam0.f_10[1 /*57*/]).f_23 = 0f;
		*(uParam0.f_10[1 /*57*/]).f_28 = 0;
		*(uParam0.f_10[1 /*57*/]).f_29 = 0f;
		*(uParam0.f_10[1 /*57*/]).f_30 = 1;
		*(uParam0.f_10[1 /*57*/]).f_31 = 1;
		*(uParam0.f_10[1 /*57*/]).f_33 = 1f;
		*(uParam0.f_10[1 /*57*/]).f_34 = 0;
		*(uParam0.f_10[1 /*57*/]).f_35 = 0f;
		*(uParam0.f_10[1 /*57*/]).f_36 = 0;
		*(uParam0.f_10[1 /*57*/]).f_39 = 0f;
		*(uParam0.f_10[1 /*57*/]).f_40 = 0f;
		*(uParam0.f_10[1 /*57*/]).f_41 = 0;
		*(uParam0.f_10[1 /*57*/]).f_42 = 0;
		*(uParam0.f_10[1 /*57*/]).f_43 = 0;
		*(uParam0.f_10[1 /*57*/]).f_38 = 0f;
		*(uParam0.f_10[1 /*57*/]).f_45 = 0;
		*(uParam0.f_10[1 /*57*/]).f_46 = 0;
		*(uParam0.f_10[1 /*57*/]).f_47 = 0f;
		*(uParam0.f_10[1 /*57*/].f_47).f_1 = 0f;
		*(uParam0.f_10[1 /*57*/].f_47).f_2 = 0f;
		*(uParam0.f_10[2 /*57*/]).f_2 = 1;
		*(uParam0.f_10[2 /*57*/]).f_4 = 0;
		*(uParam0.f_10[2 /*57*/]).f_5 = 1600;
		*(uParam0.f_10[2 /*57*/].f_6) = {0f, -3.2f, 0.67f};
		*(uParam0.f_10[2 /*57*/].f_13) = {0f, 0f, 0f};
		*(uParam0.f_10[2 /*57*/]).f_12 = 0f;
		*(uParam0.f_10[2 /*57*/].f_9) = {-4f, 0.0236f, 145.3507f};
		*(uParam0.f_10[2 /*57*/]).f_18 = 0;
		*(uParam0.f_10[2 /*57*/]).f_19 = 0;
		*(uParam0.f_10[2 /*57*/]).f_20 = 1;
		*(uParam0.f_10[2 /*57*/]).f_21 = 45f;
		*(uParam0.f_10[2 /*57*/]).f_50 = 0;
		*(uParam0.f_10[2 /*57*/]).f_51 = 0f;
		*(uParam0.f_10[2 /*57*/]).f_52 = 0f;
		*(uParam0.f_10[2 /*57*/]).f_22 = 0.1f;
		*(uParam0.f_10[2 /*57*/]).f_53 = 0;
		*(uParam0.f_10[2 /*57*/]).f_23 = 0f;
		*(uParam0.f_10[2 /*57*/]).f_28 = 0;
		*(uParam0.f_10[2 /*57*/]).f_29 = 0f;
		*(uParam0.f_10[2 /*57*/]).f_30 = 1;
		*(uParam0.f_10[2 /*57*/]).f_31 = 0;
		*(uParam0.f_10[2 /*57*/]).f_33 = 1f;
		*(uParam0.f_10[2 /*57*/]).f_34 = 0;
		*(uParam0.f_10[2 /*57*/]).f_35 = 0f;
		*(uParam0.f_10[2 /*57*/]).f_36 = 0;
		*(uParam0.f_10[2 /*57*/]).f_39 = 0f;
		*(uParam0.f_10[2 /*57*/]).f_40 = 0f;
		*(uParam0.f_10[2 /*57*/]).f_41 = 0;
		*(uParam0.f_10[2 /*57*/]).f_42 = 0;
		*(uParam0.f_10[2 /*57*/]).f_43 = 0;
		*(uParam0.f_10[2 /*57*/]).f_38 = 0f;
		*(uParam0.f_10[2 /*57*/]).f_45 = 0;
		*(uParam0.f_10[2 /*57*/]).f_46 = 0;
		*(uParam0.f_10[2 /*57*/]).f_47 = 0f;
		*(uParam0.f_10[2 /*57*/].f_47).f_1 = 0f;
		*(uParam0.f_10[2 /*57*/].f_47).f_2 = 0f;
		*(uParam0.f_10[3 /*57*/]).f_2 = 1;
		*(uParam0.f_10[3 /*57*/]).f_4 = 0;
		*(uParam0.f_10[3 /*57*/]).f_5 = 2000;
		*(uParam0.f_10[3 /*57*/].f_6) = {0f, -3.2f, 0.67f};
		*(uParam0.f_10[3 /*57*/].f_13) = {0f, 0f, 0f};
		*(uParam0.f_10[3 /*57*/]).f_12 = 0f;
		*(uParam0.f_10[3 /*57*/].f_9) = {-4.0088f, 0.0236f, 145.3507f};
		*(uParam0.f_10[3 /*57*/]).f_18 = 0;
		*(uParam0.f_10[3 /*57*/]).f_19 = 0;
		*(uParam0.f_10[3 /*57*/]).f_20 = 1;
		*(uParam0.f_10[3 /*57*/]).f_21 = 45f;
		*(uParam0.f_10[3 /*57*/]).f_50 = 0;
		*(uParam0.f_10[3 /*57*/]).f_51 = 0f;
		*(uParam0.f_10[3 /*57*/]).f_52 = 0f;
		*(uParam0.f_10[3 /*57*/]).f_22 = 0f;
		*(uParam0.f_10[3 /*57*/]).f_53 = 2;
		*(uParam0.f_10[3 /*57*/]).f_23 = 0f;
		*(uParam0.f_10[3 /*57*/]).f_28 = 0;
		*(uParam0.f_10[3 /*57*/]).f_29 = 0f;
		*(uParam0.f_10[3 /*57*/]).f_30 = 1;
		*(uParam0.f_10[3 /*57*/]).f_31 = 0;
		*(uParam0.f_10[3 /*57*/]).f_33 = 1f;
		*(uParam0.f_10[3 /*57*/]).f_34 = 0;
		*(uParam0.f_10[3 /*57*/]).f_35 = 0f;
		*(uParam0.f_10[3 /*57*/]).f_36 = 0;
		*(uParam0.f_10[3 /*57*/]).f_39 = 0f;
		*(uParam0.f_10[3 /*57*/]).f_40 = 0f;
		*(uParam0.f_10[3 /*57*/]).f_41 = 0;
		*(uParam0.f_10[3 /*57*/]).f_42 = 0;
		*(uParam0.f_10[3 /*57*/]).f_43 = 0;
		*(uParam0.f_10[3 /*57*/]).f_38 = 0f;
		*(uParam0.f_10[3 /*57*/]).f_45 = 0;
		*(uParam0.f_10[3 /*57*/]).f_46 = 0;
		*(uParam0.f_10[3 /*57*/]).f_47 = 0f;
		*(uParam0.f_10[3 /*57*/].f_47).f_1 = 0f;
		*(uParam0.f_10[3 /*57*/].f_47).f_2 = 0f;
		*uParam0.f_1217 = 4;
		*uParam0.f_1218 = 2;
		*uParam0.f_2 = 0;
		*uParam0.f_3 = 1;
		*uParam0.f_1219 = 1000;
	}
	*uParam0.f_1221 = "thisSwitchCam";
	*uParam0.f_1220 = "CameraInfo_CarSteal2_HeliToFranklin.txt";
	*uParam0.f_1225 = "CameraInfo_CarSteal2_HeliToFranklin.xml";
	*uParam0 = 1;
	*uParam0.f_4[0] = uParam1;
	*uParam0.f_7[1] = uParam2;
}

void func_280(var uParam0, var uParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	*uParam0.f_5 = uParam1;
	*uParam0.f_6 = iParam2;
	*uParam0.f_12 = fParam3;
	*uParam0.f_14 = iParam4;
	*uParam0.f_15 = iParam5;
	*uParam0.f_16 = iParam6;
	*uParam0.f_17 = iParam7;
	*uParam0.f_13 = iParam8;
}

void func_281(var uParam0)
{
	func_246(uParam0);
	*uParam0 = 0;
	*uParam0.f_9 = {0f, 0f, 0f};
}

void func_282(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_241(4, *iParam1);
			func_241(7, *iParam1);
			func_241(8, *iParam1);
			func_241(11, *iParam1);
			break;
		
		case 1:
			if (Global_101154.f_7775.f_330[2 /*6*/])
			{
				func_241(4, *iParam1);
			}
			func_241(7, *iParam1);
			func_241(8, *iParam1);
			func_241(11, *iParam1);
			if (Global_101154.f_7775.f_99.f_58[126])
			{
				func_241(12, *iParam1);
			}
			break;
		
		case 2:
			if (Global_101154.f_7775.f_330[20 /*6*/])
			{
				func_241(4, *iParam1);
			}
			func_241(7, *iParam1);
			func_241(8, *iParam1);
			func_241(11, *iParam1);
			break;
	}
}

void func_283(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_284(4, *iParam1, 0);
			func_284(7, *iParam1, 0);
			func_284(8, *iParam1, 0);
			func_284(11, *iParam1, 0);
			break;
		
		case 1:
			func_284(4, *iParam1, 0);
			func_284(7, *iParam1, 0);
			func_284(8, *iParam1, 0);
			func_284(11, *iParam1, 0);
			if (Global_101154.f_7775.f_99.f_58[126])
			{
				func_284(12, *iParam1, 0);
			}
			break;
		
		case 2:
			func_284(4, *iParam1, 0);
			func_284(7, *iParam1, 0);
			func_284(8, *iParam1, 0);
			func_284(11, *iParam1, 0);
			break;
	}
}

void func_284(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!iParam2)
	{
		if (!does_entity_exist(iParam1))
		{
			return;
		}
	}
	if (Global_34834[iParam0 /*31*/].f_24 == 0)
	{
		return;
	}
	iVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_34834[iParam0 /*31*/].f_24)
	{
		if (iVar1)
		{
			Global_34834[iParam0 /*31*/].f_25[iVar0 - 1] = Global_34834[iParam0 /*31*/].f_25[iVar0];
			Global_34834[iParam0 /*31*/].f_25[iVar0] = 0;
		}
		else if (iParam1 == Global_34834[iParam0 /*31*/].f_25[iVar0])
		{
			Global_34834[iParam0 /*31*/].f_25[iVar0] = 0;
			iVar1 = true;
		}
		iVar0++;
	}
	if (iVar1)
	{
		Global_34834[iParam0 /*31*/].f_24--;
	}
}

bool func_285(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_4044)
	{
		if (iParam0 == Local_4044[iVar0 /*7*/])
		{
			Local_4044[iVar0 /*7*/].f_2 = iParam1;
			if (iParam2 != -1)
			{
				Local_4044[iVar0 /*7*/].f_4 = iParam2;
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_286(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		if (!iParam1)
		{
			clear_timecycle_modifier();
		}
		set_seethrough(1);
	}
	else
	{
		set_seethrough(0);
		if (!iParam1)
		{
			set_timecycle_modifier("eyeinthesky");
		}
	}
}

void func_287(int iParam0, int iParam1, vector3 vParam2, Vector3 fParam3, int iParam4, int iParam5, int iParam6)
{
	func_288(iParam0, iParam1, vParam2, fParam5, 0, -1, iParam6, iParam7, iParam8, 0);
}

void func_288(int iParam0, int iParam1, vector3 vParam2, Vector3 fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	vector3 vVar0;
	
	if (iParam0 == -1 || iParam0 >= 18)
	{
	}
	if (iParam0 != 0)
	{
		if (is_ped_injured(Local_1472[iParam0 /*14*/]))
		{
			set_ped_as_no_longer_needed(&(Local_1472[iParam0 /*14*/]));
		}
		else if (Local_1472[iParam0 /*14*/] == player_ped_id())
		{
			if (get_entity_model(Local_1472[iParam0 /*14*/]) != get_entity_model(player_ped_id()))
			{
				Local_1472[iParam0 /*14*/] = 0;
			}
		}
		else if (get_entity_model(Local_1472[iParam0 /*14*/]) != iParam1 && iParam1 != 0)
		{
			delete_ped(&(Local_1472[iParam0 /*14*/]));
			Local_1472[iParam0 /*14*/] = 0;
		}
	}
	iLocal_1754 = iLocal_1754;
	if (iParam6 == 0)
	{
		if (!does_entity_exist(Local_1472[iParam0 /*14*/]) && iParam0 != 0)
		{
			if (iParam1 == 0)
			{
				if (can_create_random_ped(0))
				{
					Local_1472[iParam0 /*14*/] = create_random_ped(vParam2);
					set_entity_heading(Local_1472[iParam0 /*14*/], fParam5);
				}
			}
			else
			{
				Local_1472[iParam0 /*14*/] = create_ped(26, iParam1, vParam2, fParam5, 1, true);
				if (iParam11 == 1)
				{
					set_entity_coords_no_offset(Local_1472[iParam0 /*14*/], vParam2, 0, 0, 1);
				}
			}
		}
		else if (!func_54(vParam2))
		{
			if (iParam0 == 0)
			{
				set_entity_coords(player_ped_id(), vParam2, 1, false, 0, 1);
				set_entity_heading(player_ped_id(), fParam5);
			}
			else if (!is_ped_injured(Local_1472[iParam0 /*14*/]))
			{
				if (iParam11 == 1)
				{
					set_entity_coords_no_offset(Local_1472[iParam0 /*14*/], vParam2, 0, 0, 1);
				}
				else
				{
					set_entity_coords(Local_1472[iParam0 /*14*/], vParam2, 1, false, 0, 1);
				}
				set_entity_heading(Local_1472[iParam0 /*14*/], fParam5);
			}
		}
	}
	else if (!does_entity_exist(Local_1472[iParam0 /*14*/]) && iParam0 != 0)
	{
		if (is_vehicle_driveable(iParam6, 0))
		{
			Local_1472[iParam0 /*14*/] = create_ped_inside_vehicle(iParam6, 26, iParam1, iParam7, 1, true);
		}
	}
	else
	{
		if (!is_ped_injured(Local_1472[iParam0 /*14*/]))
		{
			vVar0 = {get_entity_coords(Local_1472[iParam0 /*14*/], 1)};
		}
		if (is_vehicle_driveable(iParam6, 0))
		{
			if (iParam0 == 0)
			{
				if (!is_ped_injured(player_ped_id()))
				{
					set_ped_into_vehicle(player_ped_id(), iParam6, iParam7);
				}
			}
			else if (!is_ped_injured(Local_1472[iParam0 /*14*/]))
			{
				set_ped_into_vehicle(Local_1472[iParam0 /*14*/], iParam6, iParam7);
			}
		}
	}
	if (Local_1472[iParam0 /*14*/] != player_ped_id())
	{
		if (!is_ped_injured(Local_1472[iParam0 /*14*/]))
		{
			set_entity_only_damaged_by_player(Local_1472[iParam0 /*14*/], true);
			if (iParam10)
			{
				set_ped_random_component_variation(Local_1472[iParam0 /*14*/], 0);
			}
			else
			{
				set_ped_default_component_variation(Local_1472[iParam0 /*14*/]);
			}
		}
	}
	if (iParam8 != 0)
	{
		if (!is_ped_injured(Local_1472[iParam0 /*14*/]))
		{
			switch (iParam8)
			{
				case 1:
					set_ped_relationship_group_hash(Local_1472[iParam0 /*14*/], iLocal_1756);
					set_ped_combat_attributes(Local_1472[iParam0 /*14*/], 13, true);
					set_ped_combat_attributes(Local_1472[iParam0 /*14*/], 12, true);
					set_ped_combat_attributes(Local_1472[iParam0 /*14*/], 14, true);
					set_ped_combat_attributes(Local_1472[iParam0 /*14*/], 3, true);
					set_ped_combat_attributes(Local_1472[iParam0 /*14*/], 0, true);
					if (iParam9 != 0)
					{
						if (!has_ped_got_weapon(Local_1472[iParam0 /*14*/], iParam9, 0))
						{
							give_weapon_to_ped(Local_1472[iParam0 /*14*/], iParam9, 500, true, true);
						}
					}
					else if (!has_ped_got_weapon(Local_1472[iParam0 /*14*/], joaat("weapon_pistol"), 0))
					{
						give_weapon_to_ped(Local_1472[iParam0 /*14*/], joaat("weapon_pistol"), 500, true, true);
					}
					if (!does_blip_exist(Local_1472[iParam0 /*14*/].f_1))
					{
						Local_1472[iParam0 /*14*/].f_1 = func_221(Local_1472[iParam0 /*14*/], 1, 0);
					}
					break;
				
				case 3:
					set_ped_relationship_group_hash(Local_1472[iParam0 /*14*/], iLocal_1755);
					set_ped_combat_attributes(Local_1472[iParam0 /*14*/], 13, true);
					set_ped_combat_attributes(Local_1472[iParam0 /*14*/], 12, true);
					set_ped_combat_attributes(Local_1472[iParam0 /*14*/], 14, true);
					set_ped_combat_attributes(Local_1472[iParam0 /*14*/], 3, true);
					set_ped_combat_attributes(Local_1472[iParam0 /*14*/], 0, true);
					set_ped_can_be_targetted(Local_1472[iParam0 /*14*/], false);
					if (iParam9 != joaat("weapon_unarmed"))
					{
						if (!has_ped_got_weapon(Local_1472[iParam0 /*14*/], iParam9, 0))
						{
							give_weapon_to_ped(Local_1472[iParam0 /*14*/], iParam9, 500, true, true);
						}
					}
					else if (!has_ped_got_weapon(Local_1472[iParam0 /*14*/], joaat("weapon_pistol"), 0))
					{
						give_weapon_to_ped(Local_1472[iParam0 /*14*/], joaat("weapon_pistol"), 500, true, true);
					}
					break;
				
				case 5:
					set_ped_relationship_group_hash(Local_1472[iParam0 /*14*/], iLocal_1756);
					if (iParam9 != 0)
					{
						if (!has_ped_got_weapon(Local_1472[iParam0 /*14*/], iParam9, 0))
						{
							give_weapon_to_ped(Local_1472[iParam0 /*14*/], iParam9, 500, true, true);
						}
					}
					else if (!has_ped_got_weapon(Local_1472[iParam0 /*14*/], joaat("weapon_pumpshotgun"), 0) && !has_ped_got_weapon(Local_1472[iParam0 /*14*/], joaat("weapon_pistol"), 0))
					{
						if (get_random_int_in_range(false, 3) == 0)
						{
							give_weapon_to_ped(Local_1472[iParam0 /*14*/], joaat("weapon_pumpshotgun"), 500, true, true);
						}
						else
						{
							give_weapon_to_ped(Local_1472[iParam0 /*14*/], joaat("weapon_pistol"), 500, true, true);
						}
					}
					set_ped_combat_attributes(Local_1472[iParam0 /*14*/], 13, true);
					set_ped_combat_attributes(Local_1472[iParam0 /*14*/], 12, true);
					set_ped_combat_attributes(Local_1472[iParam0 /*14*/], 14, true);
					set_ped_combat_attributes(Local_1472[iParam0 /*14*/], 3, true);
					set_ped_combat_attributes(Local_1472[iParam0 /*14*/], 0, true);
					if (!does_blip_exist(Local_1472[iParam0 /*14*/].f_1))
					{
						Local_1472[iParam0 /*14*/].f_1 = func_221(Local_1472[iParam0 /*14*/], 1, 0);
					}
					break;
				
				case 6:
					set_blocking_of_non_temporary_events(Local_1472[iParam0 /*14*/], true);
					if (iParam9 != 0 && iParam9 != joaat("weapon_unarmed"))
					{
						if (!has_ped_got_weapon(Local_1472[iParam0 /*14*/], iParam9, 0))
						{
							give_weapon_to_ped(Local_1472[iParam0 /*14*/], iParam9, 500, true, true);
						}
					}
					set_ped_relationship_group_hash(Local_1472[iParam0 /*14*/], iLocal_1757);
					if (!does_blip_exist(Local_1472[iParam0 /*14*/].f_1))
					{
						Local_1472[iParam0 /*14*/].f_1 = func_221(Local_1472[iParam0 /*14*/], 1, 0);
					}
					break;
				
				case 8:
					set_blocking_of_non_temporary_events(Local_1472[iParam0 /*14*/], true);
					if (iParam9 != 0 && iParam9 != joaat("weapon_unarmed"))
					{
						if (!has_ped_got_weapon(Local_1472[iParam0 /*14*/], iParam9, 0))
						{
							give_weapon_to_ped(Local_1472[iParam0 /*14*/], iParam9, 500, true, true);
						}
					}
					set_ped_can_be_targetted(Local_1472[iParam0 /*14*/], true);
					set_ped_relationship_group_hash(Local_1472[iParam0 /*14*/], iLocal_1757);
					break;
				
				case 4:
					set_blocking_of_non_temporary_events(Local_1472[iParam0 /*14*/], true);
					if (iParam9 != 0 && iParam9 != joaat("weapon_unarmed"))
					{
						if (!has_ped_got_weapon(Local_1472[iParam0 /*14*/], iParam9, 0))
						{
							give_weapon_to_ped(Local_1472[iParam0 /*14*/], iParam9, 500, true, true);
						}
					}
					set_ped_can_be_targetted(Local_1472[iParam0 /*14*/], false);
					set_ped_relationship_group_hash(Local_1472[iParam0 /*14*/], iLocal_1757);
					break;
				
				case 2:
					set_blocking_of_non_temporary_events(Local_1472[iParam0 /*14*/], true);
					if (iParam9 != 0 && iParam9 != joaat("weapon_unarmed"))
					{
						if (!has_ped_got_weapon(Local_1472[iParam0 /*14*/], iParam9, 0))
						{
							give_weapon_to_ped(Local_1472[iParam0 /*14*/], iParam9, 500, true, true);
						}
					}
					set_ped_can_be_targetted(Local_1472[iParam0 /*14*/], false);
					set_ped_combat_attributes(Local_1472[iParam0 /*14*/], 17, true);
					break;
				
				case 7:
					set_ped_relationship_group_hash(Local_1472[iParam0 /*14*/], iLocal_1758);
					break;
				}
			}
	}
	if (iLocal_1759 == 1)
	{
		if (!is_ped_injured(Local_1472[iParam0 /*14*/]))
		{
			if (get_entity_model(Local_1472[iParam0 /*14*/]) == func_16(1))
			{
				func_289(Local_1472[iParam0 /*14*/], 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			if (get_entity_model(Local_1472[iParam0 /*14*/]) == func_16(2))
			{
				func_289(Local_1472[iParam0 /*14*/], 14, 154, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			if (get_entity_model(Local_1472[iParam0 /*14*/]) == func_16(0))
			{
				func_289(Local_1472[iParam0 /*14*/], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
}

bool func_289(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	var uVar11;
	var uVar27;
	var uVar37;
	struct<14> Var53;
	var uVar67;
	
	if (is_ped_injured(iParam0) || iParam2 == -99)
	{
		return false;
	}
	Global_69310++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = get_entity_model(iParam0);
	if (iParam5 == 0)
	{
		Global_69311[1 /*14*/] = {func_336(iVar10, iParam1, iParam2)};
		if (!func_335(iParam3))
		{
			Global_69310--;
			return false;
		}
		func_331(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_329(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_329(iParam0, 9);
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
			iVar7 = func_325(iParam0, 1);
			if (!func_324(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = func_325(iParam0, 0);
			if (!func_323(iVar10, 14, iVar8) && !func_321(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_325(iParam0, 2);
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
			uVar11 = {func_317(iVar10, iParam2)};
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_69311[1 /*14*/] = {func_336(iVar10, iVar0, uVar11[iVar0])};
				if (is_bit_set(Global_69311[1 /*14*/].f_6, false))
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
							uVar27 = {func_311(iVar10, uVar11[iVar0])};
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_69311[1 /*14*/] = {func_336(iVar10, 14, uVar27[iVar1])};
							func_310(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
							func_331(14);
							if (Global_69310 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_302(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_289(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
							func_301(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							set_ped_component_variation(iParam0, func_300(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_300(iVar0)));
						}
						else
						{
							set_ped_component_variation(iParam0, func_300(iVar0), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
						}
						func_331(iVar0);
						if (Global_69310 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_302(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_289(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_69311[1 /*14*/] = {func_336(iVar10, iVar0, func_299(iParam0, iVar0, -1))};
				if (is_bit_set(Global_69311[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_298(iParam0, iVar10, &iVar4, 1))
							{
								func_289(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = {func_317(iVar10, 0)};
						func_289(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = {func_336(iVar10, 8, iVar5)};
			if (iVar5 != -99)
			{
				if (func_296(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_289(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = {func_336(iVar10, 9, iVar6)};
			if (iVar6 != -99)
			{
				if (func_296(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_289(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = {func_336(iVar10, 14, iVar7)};
			if (iVar7 != -99)
			{
				if (func_296(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_289(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = {func_336(iVar10, 14, iVar8)};
			if (iVar8 != -99)
			{
				if (func_296(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_289(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = {func_336(iVar10, 14, iVar9)};
			if (iVar9 != -99)
			{
				if (func_296(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_289(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar67 = {func_311(iVar10, iParam2)};
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_69311[1 /*14*/] = {func_336(iVar10, 14, uVar67[iVar1])};
			func_310(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
			func_331(14);
			if (Global_69310 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_302(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_289(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_310(iParam0, Global_69311[1 /*14*/].f_12, Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4);
		func_331(iParam1);
		if (Global_69310 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_302(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_289(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			set_ped_component_variation(iParam0, func_300(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, get_ped_palette_variation(iParam0, func_300(iParam1)));
		}
		else
		{
			set_ped_component_variation(iParam0, func_300(iParam1), Global_69311[1 /*14*/].f_3, Global_69311[1 /*14*/].f_4, iParam4);
		}
		if (Global_69310 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_302(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_289(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_293(iVar10, iParam1, iParam2);
		}
	}
	if (Global_69310 == 1)
	{
		if (func_298(iParam0, iVar10, &iVar4, 0))
		{
			func_289(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_290(iParam0, iVar10, &iVar4))
		{
			func_289(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_69310--;
	return true;
}

bool func_290(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_292(iParam1);
	if (Global_101154.f_1826.f_539[uVar0 /*65*/].f_63 != -99)
	{
		if (!func_291(iParam0, Global_101154.f_1826.f_539[uVar0 /*65*/].f_64, Global_101154.f_1826.f_539[uVar0 /*65*/].f_63))
		{
			*iParam2 = Global_101154.f_1826.f_539[uVar0 /*65*/].f_62;
			Global_101154.f_1826.f_539[uVar0 /*65*/].f_63 = -99;
			Global_101154.f_1826.f_539[uVar0 /*65*/].f_64 = 1;
			return true;
		}
	}
	return false;
}

bool func_291(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar21;
	int iVar31;
	var uVar32;
	
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	Global_69311[1 /*14*/] = {func_336(iVar0, iParam1, iParam2)};
	if (!is_bit_set(Global_69311[1 /*14*/].f_6, false))
	{
		return false;
	}
	if (iParam1 == 12)
	{
		uVar5 = {func_317(iVar0, iParam2)};
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_291(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = {func_311(iVar0, uVar5[iVar2])};
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_291(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_69311[2 /*14*/] = {func_336(iVar0, 14, iVar4)};
									if (Global_69311[2 /*14*/].f_12 == iVar3)
									{
										if (func_291(iParam0, 14, iVar4))
										{
											if (!func_296(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_69311[2 /*14*/])))
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
						iVar1 = func_329(iParam0, iVar2);
						Global_69311[2 /*14*/] = {func_336(iVar0, iVar2, iVar1)};
						if (!func_296(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_69311[2 /*14*/])))
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
		uVar32 = {func_311(iVar0, iParam2)};
		iVar31 = 0;
		while (iVar31 <= 8)
		{
			if (!func_291(iParam0, 14, uVar32[iVar31]))
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
	else if (Global_69311[1 /*14*/].f_3 == get_ped_drawable_variation(iParam0, func_300(iParam1)) && Global_69311[1 /*14*/].f_4 == get_ped_texture_variation(iParam0, func_300(iParam1)))
	{
		return true;
	}
	return false;
}

int func_292(int iParam0)
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

void func_293(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
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
	if (func_295(iParam0, 12, iVar0))
	{
		if (func_294(iParam0, iParam1, iParam2))
		{
			uVar1 = func_292(iParam0);
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

bool func_294(int iParam0, int iParam1, int iParam2)
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

int func_295(int iParam0, int iParam1, int iParam2)
{
	Global_69311[1 /*14*/] = {func_336(iParam0, iParam1, iParam2)};
	return is_bit_set(Global_69311[1 /*14*/].f_6, 2);
}

bool func_296(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
		uVar0 = {func_311(iParam0, *uParam4[13])};
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
	if (func_297(iParam0, iParam2, iParam3))
	{
		return true;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_324(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return false;
			}
			return true;
		}
		else if (func_323(iParam0, iParam2, iParam3))
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
		else if (func_321(iParam0, iParam2, iParam3))
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
		if (func_324(iParam0, iParam2, iParam3))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return false;
			}
			return true;
		}
		else if (func_323(iParam0, iParam2, iParam3))
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
		else if (func_321(iParam0, iParam2, iParam3))
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
		if (func_324(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return false;
			}
			return true;
		}
		else if (func_323(iParam0, iParam2, iParam3))
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
		else if (func_321(iParam0, iParam2, iParam3))
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

bool func_297(int iParam0, int iParam1, int iParam2)
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

bool func_298(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	uVar0 = func_292(iParam1);
	if (Global_101154.f_1826.f_539[uVar0 /*65*/].f_60 != -99)
	{
		if (!func_291(iParam0, Global_101154.f_1826.f_539[uVar0 /*65*/].f_61, Global_101154.f_1826.f_539[uVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_101154.f_1826.f_539[uVar0 /*65*/].f_59;
			Global_101154.f_1826.f_539[uVar0 /*65*/].f_60 = -99;
			Global_101154.f_1826.f_539[uVar0 /*65*/].f_61 = 2;
			return true;
		}
	}
	return false;
}

int func_299(int iParam0, int iParam1, int iParam2)
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
				if (func_291(iParam0, iParam1, iVar0))
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
				if (func_291(iParam0, iParam1, iVar1))
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
				return func_325(iParam0, iParam2);
			}
		}
		else
		{
			return func_329(iParam0, iParam1);
		}
	}
	return -99;
}

int func_300(int iParam0)
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

bool func_301(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
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
		uVar0 = func_292(iParam0);
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_60 = iParam2;
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_61 = iParam1;
		return true;
	}
	return false;
}

int func_302(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				iVar1 = func_329(iParam0, 1);
				iVar0 = func_309(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_329(iParam0, 2);
				iVar0 = func_309(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_301(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_308(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_307(iParam1, iParam3, &iVar0))
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
									if (!func_306(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_306(iParam0, 3, 135, 150))
									{
										iVar0 = func_305(iParam1, 3, 135, 150);
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
									if (!func_306(iParam0, 3, 209, 222))
									{
										iVar0 = func_305(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_306(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_305(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_305(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_305(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_305(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_306(iParam0, 3, 176, 191) && !func_306(iParam0, 3, 227, 242))
									{
										iVar0 = func_305(iParam1, 3, 176, 191);
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
								iVar4 = func_329(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_329(iParam0, 11);
								iVar5 = func_304(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_329(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_303(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
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
								iVar7 = func_329(iParam0, 8);
								iVar8 = func_329(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_304(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_304(iParam1, iParam3, iVar8, 1);
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
								iVar9 = func_329(iParam0, 11);
								iVar0 = func_304(iParam1, -99, iVar9, 0);
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

bool func_303(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
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

int func_304(int iParam0, int iParam1, int iParam2, int iParam3)
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
				iParam2 = func_305(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_305(iParam0, 11, 25, 40);
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

int func_305(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= iParam3 - 1)
	{
		iVar1 = iVar0;
		if (func_295(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

bool func_306(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_329(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return true;
	}
	return false;
}

bool func_307(int iParam0, int iParam1, int iParam2)
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

bool func_308(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
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
		uVar0 = func_292(iParam0);
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_63 = iParam2;
		Global_101154.f_1826.f_539[uVar0 /*65*/].f_64 = iParam1;
		return true;
	}
	return false;
}

int func_309(int iParam0, int iParam1, int iParam2)
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

void func_310(int iParam0, int iParam1, int iParam2, int iParam3)
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

struct<10> func_311(int iParam0, int iParam1)
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
					func_316(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_316(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_316(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_316(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_316(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_316(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_316(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_316(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_316(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_316(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_316(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_312(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_316(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_316(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_316(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_316(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_316(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_316(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_316(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_316(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_316(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_316(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_312(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_316(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_316(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_316(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_316(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_316(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_316(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_316(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_316(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_316(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_316(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_312(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_316(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_316(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_316(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_316(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_316(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_316(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_316(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_316(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_316(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_316(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_316(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_316(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_316(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_316(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_316(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_316(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_316(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_316(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_316(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_316(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_316(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_316(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_316(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_316(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_316(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_316(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_312(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_316(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_316(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_316(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_316(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_316(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_316(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_316(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_316(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_316(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_316(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_316(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_316(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_316(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_316(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_316(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_316(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_316(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_316(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_316(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_316(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_316(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_316(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_316(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_316(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_316(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_312(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_312(int iParam0, int iParam1, int iParam2, int iParam3)
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
						*iParam0[vVar16.z] = func_313(iParam1, vVar16.x, 14, iVar0);
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

int func_313(int iParam0, int iParam1, int iParam2, int iParam3)
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
					return func_315(iParam0) + iVar18;
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
		iVar39 = _get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_300(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			get_shop_ped_query_component(iVar37, &Var20);
			if (!_is_dlc_data_empty(Var20))
			{
				if (iParam1 == Var20.f_1)
				{
					return func_314(iParam0, func_300(iParam2)) + iVar38;
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_314(int iParam0, int iParam1)
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

int func_315(int iParam0)
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

void func_316(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

struct<16> func_317(int iParam0, int iParam1)
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
						func_320(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_320(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_320(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_320(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_320(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_320(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_320(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[0], Global_101154.f_1826.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_320(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_320(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_320(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_320(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_320(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_320(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_320(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_320(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_320(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_320(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_320(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_320(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_320(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_320(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_320(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_320(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_320(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_320(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_320(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_320(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_320(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_320(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_320(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_320(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_320(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_320(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_320(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_320(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_320(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_320(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_320(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_320(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_320(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_320(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_320(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_320(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_320(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_320(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_320(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_320(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_320(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_320(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_320(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_320(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_320(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_320(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_320(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_318(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_320(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_320(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_320(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[1], Global_101154.f_1826.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_320(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_320(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_320(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_320(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_320(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_320(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_320(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_320(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_320(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_320(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_320(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_320(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_320(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_320(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_320(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_320(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_320(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_320(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_320(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_320(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_320(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_320(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_320(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_320(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_320(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_320(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_320(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_320(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_320(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_320(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_320(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_320(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_320(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_320(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_320(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_320(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_320(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_320(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_320(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_320(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_320(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_320(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_320(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_320(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_318(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_320(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_320(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_320(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_320(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_320(&Var1, -99, -99, Global_101154.f_1826.f_539.f_196[2], Global_101154.f_1826.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_320(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_320(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_320(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_320(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_320(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_320(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_320(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_320(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_320(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_320(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_320(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_320(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_320(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_320(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_320(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_320(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_320(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_320(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_320(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_320(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_320(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_320(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_320(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_320(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_320(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_320(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_320(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_320(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_320(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_320(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_320(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_320(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_320(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_320(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_320(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_320(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_320(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_320(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_320(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_320(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_320(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_320(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_320(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_318(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_320(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_320(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_320(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_320(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_320(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_320(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_320(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_320(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_320(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_320(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_320(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_320(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_320(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_320(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_320(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_320(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_320(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_320(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_320(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_320(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_320(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_320(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_320(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_320(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_320(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_320(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_318(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_320(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_320(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_320(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_320(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_320(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_320(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_320(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_320(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_320(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_320(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_320(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_320(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_320(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_320(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_320(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_320(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_320(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_320(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_320(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_320(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_320(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_320(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_320(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_320(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_320(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_320(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_320(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_320(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_318(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_318(int iParam0, int iParam1, int iParam2, int iParam3)
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
						*iParam0[func_319(vVar16.z)] = vVar16.x;
					}
					else
					{
						*iParam0[func_319(vVar16.z)] = func_313(iParam1, vVar16.x, func_319(vVar16.z), iVar0);
					}
				}
				else if (vVar16.y != -1)
				{
					*iParam0[func_319(vVar16.z)] = vVar16.y;
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

int func_319(int iParam0)
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

void func_320(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

int func_321(int iParam0, int iParam1, int iParam2)
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
						return (_0x341DE7ED1D2A1BFD(func_322(iParam0, iParam2, 14, 3), -1757550583, true) || _0x341DE7ED1D2A1BFD(func_322(iParam0, iParam2, 14, 3), -1842686353, true));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (_0x341DE7ED1D2A1BFD(func_322(iParam0, iParam2, 1, 3), -1757550583, false) || _0x341DE7ED1D2A1BFD(func_322(iParam0, iParam2, 1, 3), -1842686353, false));
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
						return (_0x341DE7ED1D2A1BFD(func_322(iParam0, iParam2, 14, 4), -1757550583, true) || _0x341DE7ED1D2A1BFD(func_322(iParam0, iParam2, 14, 4), -1842686353, true));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (_0x341DE7ED1D2A1BFD(func_322(iParam0, iParam2, 1, 4), -1757550583, false) || _0x341DE7ED1D2A1BFD(func_322(iParam0, iParam2, 1, 4), -1842686353, false));
					}
					break;
			}
			break;
	}
	return false;
}

int func_322(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar19 = iParam1 - func_315(iParam0);
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
		iVar40 = iParam1 - func_314(iParam0, func_300(iParam2));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_69432.f_26[iParam2] && iParam1 == Global_69432[iParam2]) && Global_69432.f_13[iParam2] != 0)
		{
			return Global_69432.f_13[iParam2];
		}
		iVar41 = _get_num_props_from_outfit(iParam3, 6, -1, 0, -1, func_300(iParam2));
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

bool func_323(int iParam0, int iParam1, int iParam2)
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
					iVar0 = func_322(iParam0, iParam2, 1, 3);
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
					iVar1 = func_322(iParam0, iParam2, 1, 4);
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

int func_324(int iParam0, int iParam1, int iParam2)
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
					return _0x341DE7ED1D2A1BFD(func_322(iParam0, iParam2, 14, 3), 97230661, true);
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
					return _0x341DE7ED1D2A1BFD(func_322(iParam0, iParam2, 14, 4), 97230661, true);
				}
			}
			break;
	}
	return false;
}

int func_325(int iParam0, int iParam1)
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
		return func_328(iParam1);
	}
	iVar1 = get_ped_prop_texture_index(iParam0, iParam1);
	return func_326(iParam0, iVar0, iVar1, iParam1);
}

int func_326(int iParam0, int iParam1, int iParam2, int iParam3)
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
		return func_328(iParam3);
	}
	iVar0 = get_entity_model(iParam0);
	iVar1 = get_hash_name_for_prop(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_313(get_entity_model(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_313(get_entity_model(iParam0), iVar1, 14, 4);
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
					iVar3 += func_327(iParam0, iParam3);
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
	return func_328(iParam3);
}

int func_327(int iParam0, int iParam1)
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

int func_328(int iParam0)
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

int func_329(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || is_ped_injured(iParam0))
	{
		return -99;
	}
	iVar0 = func_300(iParam1);
	iVar1 = get_ped_drawable_variation(iParam0, iVar0);
	iVar2 = get_ped_texture_variation(iParam0, iVar0);
	return func_330(iParam0, iVar1, iVar2, iParam1);
}

int func_330(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_300(iParam3);
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

void func_331(int iParam0)
{
	if (is_bit_set(Global_69311[1 /*14*/].f_6, true) && !is_bit_set(Global_69311[1 /*14*/].f_6, 6))
	{
		func_334(iParam0, Global_69311[1 /*14*/].f_5, Global_69311[1 /*14*/].f_2, 2, Global_69311[1 /*14*/].f_1, 1, 0);
	}
	if (is_bit_set(Global_69311[1 /*14*/].f_6, true) && is_bit_set(Global_69311[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_332(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_332(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_332(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_332(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_333(iParam0, iParam1, &uVar2, &iVar1, iParam2, iParam3))
	{
		iVar3 = func_82(uVar2, iVar0, 0);
		set_bit(&iVar3, iVar1);
		func_147(uVar2, iVar3, iVar0, 1);
	}
}

int func_333(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
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

int func_334(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_335(int iParam0)
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

struct<14> func_336(int iParam0, int iParam1, int iParam2)
{
	func_399();
	if (iParam0 == joaat("player_zero"))
	{
		func_381(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_362(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_337(iParam1, iParam2);
	}
	return Global_69311[0 /*14*/];
}

void func_337(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_361(iParam1);
			break;
		
		case 2:
			func_360(iParam1);
			break;
		
		case 3:
			func_357(iParam1);
			break;
		
		case 4:
			func_356(iParam1);
			break;
		
		case 6:
			func_355(iParam1);
			break;
		
		case 5:
			func_354(iParam1);
			break;
		
		case 8:
			func_353(iParam1);
			break;
		
		case 9:
			func_352(iParam1);
			break;
		
		case 10:
			func_351(iParam1);
			break;
		
		case 1:
			func_350(iParam1);
			break;
		
		case 7:
			func_349(iParam1);
			break;
		
		case 11:
			func_348(iParam1);
			break;
		
		case 12:
			func_347(iParam1);
			break;
		
		case 13:
			func_346(iParam1);
			break;
		
		case 14:
			func_338(iParam1);
			break;
	}
}

void func_338(int iParam0)
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
			func_345(iVar10, iParam0, 155);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_339(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	*uParam0.f_12 = func_344(iParam8);
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
		if (func_13(14))
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
			if (!func_343(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_343(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_343(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_343(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
		else
		{
			if (!func_343(Global_2621444, 1, 1, 1, -1))
			{
				clear_bit(uParam0.f_6, 2);
			}
			if (!func_343(Global_2621444, 2, 1, 1, -1))
			{
				set_bit(uParam0.f_6, 4);
			}
		}
	}
	else if (*uParam0.f_5 >= 0 && *uParam0.f_5 < 3)
	{
		set_bit(uParam0.f_6, false);
		set_bit(uParam0.f_6, 5);
		if (func_334(iParam1, *uParam0.f_5, *uParam0.f_2, 0, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, true);
		}
		if (func_334(iParam1, *uParam0.f_5, *uParam0.f_2, 1, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, 2);
		}
		if (!func_334(iParam1, *uParam0.f_5, *uParam0.f_2, 2, *uParam0.f_1, 0, 0))
		{
			set_bit(uParam0.f_6, 4);
		}
	}
	else
	{
		set_bit(uParam0.f_6, false);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_13(14))
			{
				return;
			}
			iVar0 = func_82(func_342(iParam1, *uParam0.f_2), Global_69309, 0);
			if (is_bit_set(iVar0, *uParam0.f_1))
			{
				set_bit(uParam0.f_6, true);
			}
			iVar0 = func_82(func_341(iParam1, *uParam0.f_2), Global_69309, 0);
			if (is_bit_set(iVar0, *uParam0.f_1))
			{
				set_bit(uParam0.f_6, 2);
			}
			if (func_340(iParam1, *uParam0.f_2, &uVar1))
			{
				iVar0 = func_82(uVar1, Global_69309, 0);
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

int func_340(int iParam0, int iParam1, var uParam2)
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

int func_341(int iParam0, int iParam1)
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

int func_342(int iParam0, int iParam1)
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

int func_343(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_333(uParam0, iParam1, &uVar2, &iVar1, iParam2, iParam3))
	{
		iVar3 = func_82(uVar2, iVar0, 0);
		return is_bit_set(iVar3, iVar1);
	}
	return false;
}

int func_344(int iParam0)
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

void func_345(int iParam0, int iParam1, int iParam2)
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
					func_339(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_339(&(Global_69311[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
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
					func_339(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, _0x341DE7ED1D2A1BFD(Var20.f_1, -2050632586, false), iVar37, 2, Var20.f_1 != 0);
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
		iVar60 = _get_num_props_from_outfit(iVar1, 6, -1, 0, -1, func_300(iParam0));
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
					func_339(&(Global_69311[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, _0x341DE7ED1D2A1BFD(Var41.f_1, -2050632586, false), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_346(int iParam0)
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
			func_345(iVar10, iParam0, 9);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_347(int iParam0)
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
			func_345(iVar10, iParam0, 48);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_348(int iParam0)
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
			func_345(iVar10, iParam0, 1);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_349(int iParam0)
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
			func_345(iVar10, iParam0, 1);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_350(int iParam0)
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
			func_345(iVar10, iParam0, 6);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_351(int iParam0)
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
			func_345(iVar10, iParam0, 33);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_352(int iParam0)
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
			func_345(iVar10, iParam0, 17);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_353(int iParam0)
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
			func_345(iVar10, iParam0, 18);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_354(int iParam0)
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
			func_345(iVar10, iParam0, 7);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_355(int iParam0)
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
			func_345(iVar10, iParam0, 84);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_356(int iParam0)
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
			func_345(iVar10, iParam0, 104);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_357(int iParam0)
{
	if (iParam0 < 136)
	{
		func_359(iParam0);
	}
	else
	{
		func_358(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_345(3, iParam0, 242);
	}
}

void func_358(int iParam0)
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
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_359(int iParam0)
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
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_360(int iParam0)
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
			func_345(iVar10, iParam0, 9);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_361(int iParam0)
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
			func_345(iVar10, iParam0, 7);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_362(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_380(iParam1);
			break;
		
		case 2:
			func_379(iParam1);
			break;
		
		case 3:
			func_375(iParam1);
			break;
		
		case 4:
			func_374(iParam1);
			break;
		
		case 6:
			func_373(iParam1);
			break;
		
		case 5:
			func_372(iParam1);
			break;
		
		case 8:
			func_371(iParam1);
			break;
		
		case 9:
			func_370(iParam1);
			break;
		
		case 10:
			func_369(iParam1);
			break;
		
		case 1:
			func_368(iParam1);
			break;
		
		case 7:
			func_367(iParam1);
			break;
		
		case 11:
			func_366(iParam1);
			break;
		
		case 12:
			func_365(iParam1);
			break;
		
		case 13:
			func_364(iParam1);
			break;
		
		case 14:
			func_363(iParam1);
			break;
	}
}

void func_363(int iParam0)
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
			func_345(iVar10, iParam0, 175);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_364(int iParam0)
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
			func_345(iVar10, iParam0, 9);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_365(int iParam0)
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
			func_345(iVar10, iParam0, 47);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_366(int iParam0)
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
			func_345(iVar10, iParam0, 63);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_367(int iParam0)
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
			func_345(iVar10, iParam0, 1);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_368(int iParam0)
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
			func_345(iVar10, iParam0, 5);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_369(int iParam0)
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
			func_345(iVar10, iParam0, 53);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_370(int iParam0)
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
			func_345(iVar10, iParam0, 12);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_371(int iParam0)
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
			func_345(iVar10, iParam0, 77);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_372(int iParam0)
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
			func_345(iVar10, iParam0, 7);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_373(int iParam0)
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
			func_345(iVar10, iParam0, 134);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_374(int iParam0)
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
			func_345(iVar10, iParam0, 117);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_375(int iParam0)
{
	if (iParam0 < 107)
	{
		func_378(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_377(iParam0);
	}
	else
	{
		func_376(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_345(3, iParam0, 318);
	}
}

void func_376(int iParam0)
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
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_377(int iParam0)
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
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_378(int iParam0)
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
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_379(int iParam0)
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
			func_345(iVar10, iParam0, 21);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_380(int iParam0)
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
			func_345(iVar10, iParam0, 10);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_381(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_398(iParam1);
			break;
		
		case 2:
			func_397(iParam1);
			break;
		
		case 3:
			func_394(iParam1);
			break;
		
		case 4:
			func_393(iParam1);
			break;
		
		case 6:
			func_392(iParam1);
			break;
		
		case 5:
			func_391(iParam1);
			break;
		
		case 8:
			func_390(iParam1);
			break;
		
		case 9:
			func_389(iParam1);
			break;
		
		case 10:
			func_388(iParam1);
			break;
		
		case 1:
			func_387(iParam1);
			break;
		
		case 7:
			func_386(iParam1);
			break;
		
		case 11:
			func_385(iParam1);
			break;
		
		case 12:
			func_384(iParam1);
			break;
		
		case 13:
			func_383(iParam1);
			break;
		
		case 14:
			func_382(iParam1);
			break;
	}
}

void func_382(int iParam0)
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
			func_345(iVar10, iParam0, 113);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_383(int iParam0)
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
			func_345(iVar10, iParam0, 10);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_384(int iParam0)
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
			func_345(iVar10, iParam0, 53);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_385(int iParam0)
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
			func_345(iVar10, iParam0, 45);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_386(int iParam0)
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
			func_345(iVar10, iParam0, 1);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_387(int iParam0)
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
			func_345(iVar10, iParam0, 5);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_388(int iParam0)
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
			func_345(iVar10, iParam0, 48);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_389(int iParam0)
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
			func_345(iVar10, iParam0, 20);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_390(int iParam0)
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
			func_345(iVar10, iParam0, 24);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_391(int iParam0)
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
			func_345(iVar10, iParam0, 14);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_392(int iParam0)
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
			func_345(iVar10, iParam0, 99);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_393(int iParam0)
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
			func_345(iVar10, iParam0, 113);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_394(int iParam0)
{
	if (iParam0 < 60)
	{
		func_396(iParam0);
	}
	else
	{
		func_395(iParam0);
	}
	if (Global_69311[0 /*14*/].f_2 == -1)
	{
		func_345(3, iParam0, 181);
	}
}

void func_395(int iParam0)
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
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_396(int iParam0)
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
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_397(int iParam0)
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
			func_345(iVar10, iParam0, 6);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_398(int iParam0)
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
			func_345(iVar10, iParam0, 7);
			return;
			break;
	}
	func_339(&(Global_69311[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, iVar0, iVar8, iVar9, 0);
}

void func_399()
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

bool func_400(int iParam0, int iParam1)
{
	if (Local_4309[iParam0 /*5*/] == iParam1)
	{
		if (Local_4309[iParam0 /*5*/].f_1)
		{
			return true;
		}
	}
	else if (Local_4309[iParam0 /*5*/] != 0)
	{
	}
	return false;
}

void func_401(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	func_288(iParam0, iParam1, vLocal_1469, 0f, iParam2, iParam3, iParam4, iParam5, 0, 0);
}

void func_402(int iParam0, int iParam1, vector3 vParam2, Vector3 fParam3, float fParam4)
{
	if (iParam0 == -1 || iParam0 >= 14)
	{
	}
	if (is_vehicle_driveable(Local_1725[iParam0 /*2*/], 0))
	{
		if (get_entity_model(Local_1725[iParam0 /*2*/]) != iParam1 && iParam1 != 0)
		{
			delete_vehicle(&(Local_1725[iParam0 /*2*/]));
		}
	}
	if (!does_entity_exist(Local_1725[iParam0 /*2*/]))
	{
		Local_1725[iParam0 /*2*/] = create_vehicle(iParam1, vParam2, fParam5, 1, 1);
	}
	else if (!is_entity_dead(Local_1725[iParam0 /*2*/], 0))
	{
		set_entity_coords(Local_1725[iParam0 /*2*/], vParam2, 1, false, 0, 1);
		set_entity_heading(Local_1725[iParam0 /*2*/], fParam5);
	}
	else
	{
		set_vehicle_as_no_longer_needed(&(Local_1725[iParam0 /*2*/]));
		Local_1725[iParam0 /*2*/] = create_vehicle(iParam1, vParam2, fParam5, 1, 1);
	}
	if (is_vehicle_driveable(Local_1725[iParam0 /*2*/], 0))
	{
		if (fParam6 != -100f)
		{
			set_vehicle_forward_speed(Local_1725[iParam0 /*2*/], fParam6);
		}
		if (is_entity_a_mission_entity(Local_1725[iParam0 /*2*/]))
		{
			_0x51BB2D88D31A914B(Local_1725[iParam0 /*2*/], false);
			_0x192547247864DFDD(Local_1725[iParam0 /*2*/], false);
		}
	}
}

void func_403(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, int iParam4)
{
	vector3 vVar0;
	
	vVar0 = {vParam3 - vParam0};
	func_404(vVar0, uParam6, uParam7, iParam8);
}

void func_404(vector3 vParam0, var uParam1, var uParam2, int iParam3)
{
	Vector3 fVar0;
	
	if (vParam0.y != 0f)
	{
		*uParam4 = atan2(vParam0.x, vParam0.y);
	}
	else if (vParam0.x < 0f)
	{
		*uParam4 = -90f;
	}
	else
	{
		*uParam4 = 90f;
	}
	if (iParam5 == 1)
	{
		*uParam4 *= -1f;
		if (*uParam4 < 0f)
		{
			*uParam4 += 360f;
		}
	}
	fVar0 = sqrt(vParam0.x * vParam0.x + vParam0.y * vParam0.y);
	if (fVar0 != 0f)
	{
		*uParam3 = atan2(vParam0.z, fVar0);
	}
	else if (vParam0.z < 0f)
	{
		*uParam3 = -90f;
	}
	else
	{
		*uParam3 = 90f;
	}
}

void func_405(vector3 vParam0, Vector3 fParam1)
{
	func_402(2, joaat("ztype"), vParam0, fParam3, -1027080192);
	set_vehicle_colours(Local_1725[2 /*2*/], 0, 0);
	set_vehicle_extra_colours(Local_1725[2 /*2*/], 0, 0);
	set_vehicle_can_be_visibly_damaged(Local_1725[2 /*2*/], false);
	set_vehicle_has_strong_axles(Local_1725[2 /*2*/], true);
	set_entity_health(Local_1725[2 /*2*/], 1000);
	func_406(Local_1725[2 /*2*/], 0);
}

void func_406(var uParam0, int iParam1)
{
	Global_91278.f_22[iParam1] = uParam0;
}

bool func_407(int iParam0)
{
	if (func_408(iParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_408(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iLocal_1457 >= vLocal_1426[iVar0 /*3*/] && iLocal_1457 < vLocal_1426[iVar0 /*3*/].f_1)
	{
		switch (iVar0)
		{
			case 0:
				if (((((has_model_loaded(joaat("s_m_y_cop_01")) && has_model_loaded(joaat("a_m_y_genstreet_02"))) && has_anim_dict_loaded("missheistdockssetup1ig_13@start_idle")) && has_anim_dict_loaded("misscarsteal2officer")) && has_anim_dict_loaded("reaction@points@")) && has_anim_dict_loaded("switch@trevor@head_in_sink"))
				{
					return true;
				}
				break;
			
			case 1:
				if (has_model_loaded(joaat("polmav")))
				{
					return true;
				}
				break;
			
			case 2:
				if (has_model_loaded(iLocal_3136))
				{
					return true;
				}
				break;
			
			case 3:
				if ((((((has_model_loaded(joaat("prop_cs_package_01")) && has_model_loaded(joaat("boxville2"))) && has_model_loaded(joaat("s_f_y_hooker_01"))) && has_model_loaded(joaat("s_m_m_janitor"))) && has_model_loaded(joaat("a_m_y_beach_02"))) && has_anim_dict_loaded("misscarsteal2MUGGING")) && has_anim_dict_loaded("misscarsteal2PERVERT"))
				{
					return true;
				}
				break;
			
			case 4:
				if (((((((((((((has_model_loaded(joaat("s_f_y_hooker_02")) && has_model_loaded(joaat("s_f_y_hooker_01"))) && has_model_loaded(joaat("u_m_y_fibmugger_01"))) && has_model_loaded(joaat("a_m_m_og_boss_01"))) && has_model_loaded(joaat("a_c_rottweiler"))) && has_model_loaded(joaat("a_m_y_beach_02"))) && has_model_loaded(joaat("prop_gar_door_05"))) && has_anim_dict_loaded("misscarsteal2PIMPSEX")) && has_anim_dict_loaded("misscarsteal2CHAD_GOODBYE")) && has_anim_dict_loaded("misscarsteal2_bum")) && has_anim_dict_loaded("CREATURES@ROTTWEILER@AMB@WORLD_DOG_BARKING@idle_a")) && has_vehicle_recording_been_loaded(102, "CS2")) && has_vehicle_recording_been_loaded(103, "CS2")) && get_is_waypoint_recording_loaded("cs2_01"))
				{
					return true;
				}
				break;
			
			case 5:
				if (has_model_loaded(iLocal_3137))
				{
					return true;
				}
				break;
			
			case 6:
				if (has_model_loaded(joaat("ztype")))
				{
					return true;
				}
				break;
			
			case 7:
				if (((((((((((((((has_model_loaded(joaat("burrito")) && has_model_loaded(joaat("dominator"))) && has_model_loaded(joaat("habanero"))) && has_model_loaded(joaat("dubsta"))) && has_model_loaded(iLocal_3136)) && has_model_loaded(joaat("a_m_y_genstreet_01"))) && has_anim_dict_loaded("misscarsteal2peeing")) && has_anim_dict_loaded("misscarstealfinalecar_5_ig_1")) && has_anim_dict_loaded("missarmenian2lamar_idles")) && has_anim_dict_loaded("misscarsteal2")) && has_anim_dict_loaded("misscarsteal2Chad_waiting")) && has_anim_dict_loaded("misscarsteal2CAR_STOLEN")) && has_anim_dict_loaded("misscarsteal2CHAD_GARAGE")) && has_anim_dict_loaded("misscarsteal2switch")) && has_anim_dict_loaded("misscarsteal2fixer")) && get_is_waypoint_recording_loaded("cs2_10"))
				{
					return true;
				}
				break;
			
			case 8:
				if (((((((has_model_loaded(joaat("ig_devin")) && has_model_loaded(joaat("s_m_y_devinsec_01"))) && has_model_loaded(joaat("s_m_m_security_01"))) && has_model_loaded(joaat("cs_molly"))) && has_model_loaded(joaat("shamal"))) && has_model_loaded(joaat("tailgater"))) && has_model_loaded(joaat("s_m_m_pilot_01"))) && has_anim_dict_loaded("misscarsteal2leadinoutcar_2_mcs_1"))
				{
					return true;
				}
				break;
			
			case 9:
				return true;
				break;
		}
	}
	else if (iParam1)
	{
		return false;
	}
	else
	{
		return true;
	}
	return false;
}

bool func_409(vector3 vParam0, float fParam1, float fParam2)
{
	if (is_sphere_visible(vParam0, fParam3))
	{
		if (!is_entity_at_coord(player_ped_id(), vParam0, fParam4, fParam4, fParam4, false, false, 0))
		{
			return false;
		}
		else if (is_screen_faded_out())
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_410(int iParam0, int iParam1, vector3 vParam2, Vector3 fParam3, int iParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	struct<97> Var5;
	int iVar103;
	int iVar104;
	int iVar105;
	char[16] cVar106;
	int iVar110;
	
	if (func_14(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 49;
		Var5.f_81 = 2;
		func_73(iParam1, &Var5, iParam7);
		if (Var5 == 0)
		{
			return true;
		}
		if (does_entity_exist(*iParam0))
		{
			if (get_entity_model(*iParam0) != Var5)
			{
			}
			return true;
		}
		if ((iParam1 == 0 && !Global_101154.f_1826.f_539.f_3544) && Global_101154.f_7775.f_99.f_58[131])
		{
			Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/] == Var5)
		{
			request_model(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
			if (has_model_loaded(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = create_vehicle(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/], vParam2, fParam5, 0, 0);
				set_vehicle_on_ground_properly(*iParam0);
				_0xAB04325045427AAE(*iParam0, 0);
				_0x428BACCDF5E26EAD(*iParam0, false);
				set_vehicle_has_strong_axles(*iParam0, true);
				set_entity_health(*iParam0, 1250);
				set_vehicle_engine_health(*iParam0, 1250f);
				set_vehicle_petrol_tank_health(*iParam0, 1250f);
				Var5.f_3 = 1250;
				set_vehicle_colours(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_5, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_6);
				set_vehicle_extra_colours(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_7, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_8);
				set_vehicle_dirt_level(*iParam0, Var5.f_2);
				iVar103 = 0;
				while (iVar103 < 12)
				{
					set_vehicle_extra(*iParam0, iVar103 + 1, !Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_11[iVar103]);
					iVar103++;
				}
				if (Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24)
				{
					set_convertible_roof(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_439(&uVar1, &iVar0))
				{
					set_vehicle_number_plate_text(*iParam0, &uVar1);
					set_vehicle_number_plate_text_index(*iParam0, iVar0);
				}
				else
				{
					set_vehicle_number_plate_text(*iParam0, &(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26 < get_number_of_vehicle_number_plates())
					{
						set_vehicle_number_plate_text_index(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				set_vehicle_tyre_smoke_color(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_84, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_85, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_86);
				set_vehicle_tyres_can_burst(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_88);
				set_vehicle_window_tint(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_87);
				_set_vehicle_neon_lights_colour(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_93, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_94, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_95);
				_set_vehicle_neon_light_enabled(*iParam0, 2, is_bit_set(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 28));
				_set_vehicle_neon_light_enabled(*iParam0, 3, is_bit_set(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 29));
				_set_vehicle_neon_light_enabled(*iParam0, 0, is_bit_set(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 30));
				_set_vehicle_neon_light_enabled(*iParam0, 1, is_bit_set(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (get_vehicle_livery_count(*iParam0) > 1 && Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					set_vehicle_livery(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!is_this_model_a_bicycle(get_entity_model(*iParam0)))
					{
						if (is_this_model_a_bike(get_entity_model(*iParam0)))
						{
							if (Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								set_vehicle_wheel_type(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							set_vehicle_wheel_type(*iParam0, Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_435(iParam0, &(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_31), &(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/].f_81));
				_set_vehicle_paint_fade(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (get_entity_model(*iParam0) == joaat("bodhi2"))
					{
						func_433(iParam0);
					}
				}
				if (iParam6)
				{
					set_model_as_no_longer_needed(Global_101154.f_1826.f_539.f_1635[0 /*295*/][iParam1 /*98*/]);
				}
				func_432(*iParam0, iParam1);
				return true;
			}
		}
		else if (Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/] == Var5)
		{
			request_model(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
			if (has_model_loaded(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = create_vehicle(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/], vParam2, fParam5, 0, 0);
				set_vehicle_on_ground_properly(*iParam0);
				_0xAB04325045427AAE(*iParam0, 0);
				_0x428BACCDF5E26EAD(*iParam0, false);
				set_vehicle_has_strong_axles(*iParam0, true);
				set_entity_health(*iParam0, 1250);
				set_vehicle_engine_health(*iParam0, 1250f);
				set_vehicle_petrol_tank_health(*iParam0, 1250f);
				Var5.f_3 = 1250;
				set_vehicle_colours(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_5, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_6);
				set_vehicle_extra_colours(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_7, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_8);
				set_vehicle_dirt_level(*iParam0, Var5.f_2);
				iVar104 = 0;
				while (iVar104 < 12)
				{
					set_vehicle_extra(*iParam0, iVar104 + 1, !Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_11[iVar104]);
					iVar104++;
				}
				if (Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24)
				{
					set_convertible_roof(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_439(&uVar1, &iVar0))
				{
					set_vehicle_number_plate_text(*iParam0, &uVar1);
					set_vehicle_number_plate_text_index(*iParam0, iVar0);
				}
				else
				{
					set_vehicle_number_plate_text(*iParam0, &(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26 < get_number_of_vehicle_number_plates())
					{
						set_vehicle_number_plate_text_index(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				set_vehicle_tyre_smoke_color(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_84, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_85, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_86);
				set_vehicle_tyres_can_burst(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_88);
				set_vehicle_window_tint(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_87);
				_set_vehicle_neon_lights_colour(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_93, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_94, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_95);
				_set_vehicle_neon_light_enabled(*iParam0, 2, is_bit_set(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 28));
				_set_vehicle_neon_light_enabled(*iParam0, 3, is_bit_set(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 29));
				_set_vehicle_neon_light_enabled(*iParam0, 0, is_bit_set(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 30));
				_set_vehicle_neon_light_enabled(*iParam0, 1, is_bit_set(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (get_vehicle_livery_count(*iParam0) > 1 && Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					set_vehicle_livery(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!is_this_model_a_bicycle(get_entity_model(*iParam0)))
					{
						if (is_this_model_a_bike(get_entity_model(*iParam0)))
						{
							if (Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								set_vehicle_wheel_type(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							set_vehicle_wheel_type(*iParam0, Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_435(iParam0, &(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_31), &(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/].f_81));
				_set_vehicle_paint_fade(*iParam0, Var5.f_96);
				if (iParam1 == 2)
				{
					if (get_entity_model(*iParam0) == joaat("bodhi2"))
					{
						func_433(iParam0);
					}
				}
				if (iParam6)
				{
					set_model_as_no_longer_needed(Global_101154.f_1826.f_539.f_1635[1 /*295*/][iParam1 /*98*/]);
				}
				func_432(*iParam0, iParam1);
				return true;
			}
		}
		else
		{
			request_model(Var5);
			if (has_model_loaded(Var5))
			{
				iVar105 = true;
				*iParam0 = create_vehicle(Var5, vParam2, fParam5, 1, 1);
				set_vehicle_on_ground_properly(*iParam0);
				_0xAB04325045427AAE(*iParam0, 0);
				_0x428BACCDF5E26EAD(*iParam0, false);
				set_vehicle_has_strong_axles(*iParam0, true);
				StringCopy(&cVar106, get_vehicle_number_plate_text(*iParam0), 16);
				set_entity_health(*iParam0, 1250);
				set_vehicle_engine_health(*iParam0, 1250f);
				set_vehicle_petrol_tank_health(*iParam0, 1250f);
				Var5.f_3 = 1250;
				set_vehicle_colours(*iParam0, Var5.f_5, Var5.f_6);
				set_vehicle_extra_colours(*iParam0, Var5.f_7, Var5.f_8);
				set_vehicle_dirt_level(*iParam0, Var5.f_2);
				iVar110 = 0;
				while (iVar110 < 12)
				{
					set_vehicle_extra(*iParam0, iVar110 + 1, !Var5.f_11[iVar110]);
					iVar110++;
				}
				if (Var5.f_24)
				{
					set_convertible_roof(*iParam0, Var5.f_24);
				}
				if (func_439(&uVar1, &iVar0))
				{
					set_vehicle_number_plate_text(*iParam0, &uVar1);
					set_vehicle_number_plate_text_index(*iParam0, iVar0);
				}
				else
				{
					set_vehicle_number_plate_text(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < get_number_of_vehicle_number_plates())
					{
						set_vehicle_number_plate_text_index(*iParam0, Var5.f_26);
					}
				}
				set_vehicle_tyre_smoke_color(*iParam0, Var5.f_84, Var5.f_85, Var5.f_86);
				set_vehicle_tyres_can_burst(*iParam0, Var5.f_88);
				set_vehicle_window_tint(*iParam0, Var5.f_87);
				_set_vehicle_neon_lights_colour(*iParam0, Var5.f_93, Var5.f_94, Var5.f_95);
				_set_vehicle_neon_light_enabled(*iParam0, 2, is_bit_set(Var5.f_92, 28));
				_set_vehicle_neon_light_enabled(*iParam0, 3, is_bit_set(Var5.f_92, 29));
				_set_vehicle_neon_light_enabled(*iParam0, 0, is_bit_set(Var5.f_92, 30));
				_set_vehicle_neon_light_enabled(*iParam0, 1, is_bit_set(Var5.f_92, 31));
				if (get_vehicle_livery_count(*iParam0) > 1 && Var5.f_89 >= 0)
				{
					set_vehicle_livery(*iParam0, Var5.f_89);
				}
				if (Var5.f_90 > -1)
				{
					if (!is_this_model_a_bicycle(get_entity_model(*iParam0)))
					{
						if (is_this_model_a_bike(get_entity_model(*iParam0)))
						{
							if (Var5.f_90 == 6)
							{
								set_vehicle_wheel_type(*iParam0, Var5.f_90);
							}
						}
						else
						{
							set_vehicle_wheel_type(*iParam0, Var5.f_90);
						}
					}
				}
				func_435(iParam0, &(Var5.f_31), &(Var5.f_81));
				_set_vehicle_paint_fade(*iParam0, Var5.f_96);
				if (iParam1 == 1)
				{
					if (get_entity_model(*iParam0) == joaat("bagger") && !Global_101154.f_7775.f_99.f_58[118])
					{
						set_vehicle_number_plate_text(*iParam0, &cVar106);
						iVar105 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (get_entity_model(*iParam0) == joaat("bodhi2"))
					{
						func_433(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_101154.f_1826.f_539.f_3544) && Global_101154.f_7775.f_99.f_58[131]) && get_entity_model(*iParam0) == joaat("tailgater"))
				{
					set_vehicle_mod(*iParam0, 6, 1, false);
					set_vehicle_mod(*iParam0, 14, 7, false);
					set_vehicle_mod(*iParam0, 11, 2, false);
					set_vehicle_mod(*iParam0, 2, 3, false);
					set_vehicle_mod(*iParam0, 7, 5, false);
					set_vehicle_mod(*iParam0, 0, 0, false);
					set_vehicle_mod(*iParam0, 3, 3, false);
					set_vehicle_mod(*iParam0, 13, 1, false);
					set_vehicle_mod(*iParam0, 4, 3, false);
					set_vehicle_mod(*iParam0, 12, 2, false);
					toggle_vehicle_mod(*iParam0, 22, true);
					set_vehicle_wheel_type(*iParam0, 2);
					set_vehicle_mod(*iParam0, 23, 11, false);
					set_vehicle_window_tint(*iParam0, 2);
					Global_101154.f_1826.f_539.f_3544 = 1;
					func_411(iParam1, iParam0, 0, 1);
				}
				if (iParam6)
				{
					set_model_as_no_longer_needed(Var5);
				}
				if (iVar105)
				{
					func_432(*iParam0, iParam1);
				}
				return true;
			}
		}
	}
	return false;
}

void func_411(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_14(iParam0) && does_entity_exist(*iParam1)) && is_vehicle_driveable(*iParam1, 0))
	{
		if (iParam2 > Global_101154.f_1826.f_539.f_1635)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_419(*iParam1, iParam0);
		}
		if (get_num_mod_kits(*iParam1) != 0)
		{
			set_vehicle_mod_kit(*iParam1, 0);
		}
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/] = get_entity_model(*iParam1);
		if (get_vehicle_trailer_vehicle(*iParam1, &iVar1))
		{
			Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_1 = get_entity_model(iVar1);
		}
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_2 = get_vehicle_dirt_level(*iParam1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_3 = get_entity_health(*iParam1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = is_vehicle_extra_turned_on(*iParam1, 1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = is_vehicle_extra_turned_on(*iParam1, 2);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = is_vehicle_extra_turned_on(*iParam1, 3);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = is_vehicle_extra_turned_on(*iParam1, 4);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = is_vehicle_extra_turned_on(*iParam1, 5);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = is_vehicle_extra_turned_on(*iParam1, 6);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = is_vehicle_extra_turned_on(*iParam1, 7);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = is_vehicle_extra_turned_on(*iParam1, 8);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = is_vehicle_extra_turned_on(*iParam1, 9);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = is_vehicle_extra_turned_on(*iParam1, 10);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = is_vehicle_extra_turned_on(*iParam1, 11);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = is_vehicle_extra_turned_on(*iParam1, 12);
		if (is_vehicle_a_convertible(*iParam1, 0))
		{
			iVar2 = get_convertible_roof_state(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_25 = get_player_radio_station_index();
		StringCopy(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27), get_vehicle_number_plate_text(*iParam1), 16);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26 = get_vehicle_number_plate_text_index(*iParam1);
		get_vehicle_colours(*iParam1, &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6));
		get_vehicle_extra_colours(*iParam1, &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_8));
		get_vehicle_tyre_smoke_color(*iParam1, &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88 = get_vehicle_tyres_can_burst(*iParam1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87 = get_vehicle_window_tint(*iParam1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_89 = get_vehicle_livery(*iParam1);
		Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90 = get_vehicle_wheel_type(*iParam1);
		_get_vehicle_neon_lights_colour(*iParam1, &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (_is_vehicle_neon_light_enabled(*iParam1, 2))
		{
			set_bit(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			clear_bit(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (_is_vehicle_neon_light_enabled(*iParam1, 3))
		{
			set_bit(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			clear_bit(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (_is_vehicle_neon_light_enabled(*iParam1, 0))
		{
			set_bit(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			clear_bit(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (_is_vehicle_neon_light_enabled(*iParam1, 1))
		{
			set_bit(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			clear_bit(&(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_101154.f_1826.f_539.f_3545[iParam0] = 10;
		if ((get_vehicle_mod_kit(*iParam1) >= 0 && get_vehicle_mod_kit(*iParam1) < 255) && func_415(*iParam1, 0, &uVar0))
		{
			func_76(iParam1, &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (iParam3)
			{
				Global_101154.f_24643[iParam0 /*43*/].f_40 = 1;
				Global_101154.f_24643[iParam0 /*43*/] = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/];
				Global_101154.f_24643[iParam0 /*43*/].f_3 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_101154.f_24643[iParam0 /*43*/].f_4 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_101154.f_24643[iParam0 /*43*/].f_5 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_101154.f_24643[iParam0 /*43*/].f_6 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_101154.f_24643[iParam0 /*43*/].f_10 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_101154.f_24643[iParam0 /*43*/].f_16 = !Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_101154.f_24643[iParam0 /*43*/].f_19 = {Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_27};
				Global_101154.f_24643[iParam0 /*43*/].f_23 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_101154.f_24643[iParam0 /*43*/].f_7 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_101154.f_24643[iParam0 /*43*/].f_8 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_101154.f_24643[iParam0 /*43*/].f_9 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_101154.f_24643[iParam0 /*43*/].f_11 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_101154.f_24643[iParam0 /*43*/].f_12 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_101154.f_24643[iParam0 /*43*/].f_13 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_101154.f_24643[iParam0 /*43*/].f_14 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_101154.f_24643[iParam0 /*43*/].f_15 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_101154.f_24643[iParam0 /*43*/].f_18 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_101154.f_24643[iParam0 /*43*/].f_17 = Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_101154.f_24643[iParam0 /*43*/].f_24 = get_num_vehicle_mods(*iParam1, 11) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_25 = get_num_vehicle_mods(*iParam1, 12) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_26 = get_num_vehicle_mods(*iParam1, 4) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_27 = get_num_vehicle_mods(*iParam1, 23) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_28 = get_num_vehicle_mods(*iParam1, 14) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_29 = get_num_vehicle_mods(*iParam1, 16) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_30 = get_num_vehicle_mods(*iParam1, 15) + 1;
				Global_101154.f_24643[iParam0 /*43*/].f_32 = _0xEEBFC7A7EFDC35B4(*iParam1);
				Global_101154.f_24643[iParam0 /*43*/].f_33[0] = get_vehicle_default_horn(*iParam1);
				Global_101154.f_24643[iParam0 /*43*/].f_33[1] = get_vehicle_mod_modifier_value(*iParam1, 14, 0);
				Global_101154.f_24643[iParam0 /*43*/].f_33[2] = get_vehicle_mod_modifier_value(*iParam1, 14, 1);
				Global_101154.f_24643[iParam0 /*43*/].f_33[3] = get_vehicle_mod_modifier_value(*iParam1, 14, 2);
				Global_101154.f_24643[iParam0 /*43*/].f_33[4] = get_vehicle_mod_modifier_value(*iParam1, 14, 3);
				Global_101154.f_24643[iParam0 /*43*/].f_39 = get_vehicle_mod_kit_type(*iParam1);
				Global_101154.f_24643[iParam0 /*43*/].f_31 = func_414(*iParam1);
				Global_101154.f_24643[iParam0 /*43*/].f_33[0] = _0xACB5DCCA1EC76840(*iParam1);
				get_vehicle_mod_color_1(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_412(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_101154.f_24643[iParam0 /*43*/].f_1));
				get_vehicle_mod_color_2(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_412(Global_101154.f_1826.f_539.f_1635[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_101154.f_24643[iParam0 /*43*/].f_2));
			}
		}
	}
}

bool func_412(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	
	iVar0 = 0;
	while (func_413(iVar0, &sVar2, &iVar1, &iVar6, &iVar7))
	{
		if ((iParam0 == iVar6 && (!iParam3 || iParam1 == iVar7)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return true;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return false;
}

int func_413(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_414(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if (((does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, 0)) && get_vehicle_mod_kit(iParam0) >= 0) && get_vehicle_mod_kit(iParam0) < 255)
	{
		if (get_vehicle_mod_kit_type(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (get_vehicle_mod_kit_type(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (get_vehicle_mod_kit_type(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (get_vehicle_mod_kit_type(iParam0) == 0)
		{
			if (is_this_model_a_bike(get_entity_model(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = to_float(iVar5) / to_float(iVar4);
	return fVar6;
}

bool func_415(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	*uParam2 = 0;
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_vehicle_driveable(iParam0, 0))
	{
		return false;
	}
	if (!is_model_a_vehicle(get_entity_model(iParam0)))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	if (!func_417(iVar0, iParam1, uParam2))
	{
		return false;
	}
	if (is_big_vehicle(iParam0))
	{
		*uParam2 = 2;
		return false;
	}
	if (!network_is_game_in_progress())
	{
		if ((func_416(iParam0) && get_entity_model(iParam0) != joaat("sentinel2")) && get_entity_model(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return false;
		}
	}
	return true;
}

bool func_416(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (does_entity_exist(Global_88972[iVar0]))
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

bool func_417(int iParam0, int iParam1, var uParam2)
{
	if (!iParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return false;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == 1938952078) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return false;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return false;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return false;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return false;
	}
	if (((!is_this_model_a_car(iParam0) && !is_this_model_a_bike(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3"))
	{
		*uParam2 = 2;
		return false;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return false;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return false;
	}
	if (network_is_game_in_progress())
	{
		if (func_418(iParam0))
		{
			*uParam2 = 2;
			return false;
		}
	}
	if (!network_is_game_in_progress())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return true;
}

bool func_418(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return true;
			break;
	}
	return false;
}

void func_419(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_420(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = get_ped_in_vehicle_seat(iParam0, -1);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = get_last_ped_in_vehicle_seat(iParam0, -1);
		}
		if (does_entity_exist(iVar0) && !is_ped_injured(iVar0))
		{
			if (get_entity_model(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (get_entity_model(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (get_entity_model(iVar0) == joaat("player_two"))
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
			if (get_entity_model(iParam0) == Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
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
		if (get_entity_model(iParam0) == Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66)
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
	func_74(iParam0, &(Global_101154.f_18807.f_5510));
}

bool func_420(int iParam0)
{
	if ((((((((((!does_entity_exist(iParam0) || !is_vehicle_driveable(iParam0, 0)) || func_79(iParam0, 0, 0)) || func_79(iParam0, 1, 0)) || func_79(iParam0, 2, 0)) || func_70(iParam0) != 145) || func_431(iParam0)) || func_430(iParam0)) || func_416(iParam0)) || func_429(iParam0)) || !func_421(get_entity_model(iParam0)))
	{
		if (func_430(iParam0))
		{
		}
		if (func_430(iParam0))
		{
		}
		if (func_79(iParam0, 0, 0))
		{
		}
		if (func_79(iParam0, 1, 0))
		{
		}
		if (func_79(iParam0, 2, 0))
		{
		}
		if (func_70(iParam0) != 145)
		{
		}
		return false;
	}
	return true;
}

bool func_421(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!func_422(iParam0, 0))
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

bool func_422(int iParam0, int iParam1)
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
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !network_is_game_in_progress())) || (iParam0 == joaat("buffalo3") && !network_is_game_in_progress())) || (iParam0 == joaat("gauntlet2") && !network_is_game_in_progress())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !network_is_game_in_progress())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_428())
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
		if ((((!func_427() && !func_426()) && !func_425()) && !func_424()) && !func_428())
		{
			return false;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((is_durango_version() || is_pc_version()) || is_orbis_version())
		{
		}
		else if (!func_425())
		{
			return false;
		}
	}
	if (iParam1)
	{
		if (!func_423(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_423(int iParam0)
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

bool func_424()
{
	return false;
}

bool func_425()
{
	return true;
}

bool func_426()
{
	return true;
}

bool func_427()
{
	if (is_dlc_present(-1226939934))
	{
		return true;
	}
	return false;
}

bool func_428()
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

bool func_429(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = get_entity_model(iParam0);
	sVar1 = get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && are_strings_equal(sVar1, "LAMAR G "))
	{
		return true;
	}
	if (!func_422(iVar0, 0))
	{
		return true;
	}
	return false;
}

bool func_430(int iParam0)
{
	int iVar0;
	
	if (does_entity_exist(iParam0) && is_vehicle_driveable(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (does_entity_exist(Global_88942[iVar0]) && is_vehicle_driveable(Global_88942[iVar0], 0))
			{
				if (Global_88942[iVar0] == iParam0 && get_entity_model(Global_88942[iVar0]) == get_entity_model(iParam0))
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_431(int iParam0)
{
	int iVar0;
	
	if (does_entity_exist(Global_68319.f_484[24]))
	{
		if (iParam0 == Global_68319.f_484[24])
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (does_entity_exist(Global_68319.f_484[iVar0]))
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

void func_432(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!does_entity_exist(Global_88942[iVar0]))
		{
			Global_88942[iVar0] = iParam0;
			Global_88952[iVar0] = iParam1;
			Global_88962[iVar0] = get_entity_model(iParam0);
			if (is_this_model_a_car(Global_88962[iVar0]))
			{
				Global_88990[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_88990[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_433(var uParam0)
{
	if (!func_434(*uParam0))
	{
		set_vehicle_extra(*uParam0, 5, !Global_101154.f_7775.f_99.f_58[119]);
	}
}

int func_434(int iParam0)
{
	return is_vehicle_extra_turned_on(iParam0, 5);
}

bool func_435(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!is_vehicle_driveable(*uParam0, 0))
	{
		return false;
	}
	if (get_num_mod_kits(*uParam0) == 0)
	{
		return false;
	}
	set_vehicle_mod_kit(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			toggle_vehicle_mod(*uParam0, iVar1, *uParam1[iVar0] > 0);
		}
		else if (get_vehicle_mod(*uParam0, iVar1) != *uParam1[iVar0] - 1)
		{
			remove_vehicle_mod(*uParam0, iVar1);
			if (*uParam1[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					set_vehicle_mod(*uParam0, iVar1, *uParam1[iVar0] - 1, *uParam2[0] > 0);
				}
				else if (iVar0 == 24)
				{
					set_vehicle_mod(*uParam0, iVar1, *uParam1[iVar0] - 1, *uParam2[1] > 0);
				}
				else
				{
					set_vehicle_mod(*uParam0, iVar1, *uParam1[iVar0] - 1, false);
				}
			}
		}
		iVar0++;
	}
	if (func_438(get_entity_model(*uParam0), 1) && get_vehicle_mod(*uParam0, 24) != func_437(*uParam0, *uParam1[38] - 1))
	{
		set_vehicle_mod(*uParam0, 24, func_437(*uParam0, *uParam1[38] - 1), false);
	}
	if (func_436(*uParam0))
	{
		set_vehicle_strong(*uParam0, true);
		set_vehicle_has_strong_axles(*uParam0, true);
	}
	return true;
}

bool func_436(int iParam0)
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

int func_437(int iParam0, int iParam1)
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

bool func_438(int iParam0, int iParam1)
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

bool func_439(var uParam0, int iParam1)
{
	if (network_is_game_in_progress())
	{
	}
	else if (Global_101154.f_24643.f_261)
	{
		*uParam0 = {Global_101154.f_24643.f_267};
		*iParam1 = Global_101154.f_24643.f_271;
		return true;
	}
	return false;
}

float func_440(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && does_entity_exist(iParam1))
	{
		return func_441(iParam0, get_entity_coords(iParam1, 0));
	}
	return 0f;
}

float func_441(int iParam0, vector3 vParam1)
{
	float fVar0;
	
	if (does_entity_exist(iParam0))
	{
		if (!is_entity_dead(iParam0, 0))
		{
			fVar0 = func_442(get_entity_coords(iParam0, 0), vParam1, 1);
			return fVar0 - get_entity_heading(iParam0);
		}
	}
	return 0f;
}

float func_442(struct<2> Param0, Vector3 fParam1, struct<2> Param2, float fParam3, int iParam4)
{
	float fVar0;
	Vector3 fVar1;
	Vector3 fVar2;
	
	fVar1 = Param3 - Param0;
	fVar2 = Param3.f_1 - Param0.f_1;
	if (fVar2 != 0f)
	{
		fVar0 = atan2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 *= -1f;
		if (fVar0 < 0f)
		{
			fVar0 += 360f;
		}
	}
	return fVar0;
}

void func_443()
{
	Global_17118.f_5 = 1;
}

bool func_444(var uParam0, int iParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	float fVar10;
	int iVar11;
	
	*uParam0.f_70 = {0f, 0f, 0f};
	if (iParam2 == 1 && *uParam0.f_1 == 0)
	{
		if (*uParam0.f_5 == 0)
		{
			iLocal_116 = unk_0x67D02A194A2FC2BD("heli_cam");
		}
		request_streamed_texture_dict("helicopterhud", false);
		if (!does_cam_exist(*uParam0.f_32))
		{
			*uParam0.f_35 = 0;
			*uParam0.f_32 = create_cam("default_scripted_camera", false);
			set_cam_near_clip(*uParam0.f_32, *uParam0.f_12);
		}
		*uParam0.f_49 = 1;
		_set_unk_map_flag(4);
		func_469(1, 1, 1, 0);
		if (!is_entity_dead(iParam1, 0))
		{
			if (!is_entity_dead(player_ped_id(), 0))
			{
				if (is_entity_a_vehicle(iParam1))
				{
					*uParam0.f_8 = get_vehicle_index_from_entity_index(iParam1);
					if (!*uParam0.f_4)
					{
						set_entity_has_gravity(*uParam0.f_8, 0);
					}
					_0xBC3CCA5844452B06(300f);
				}
				_0xBC3CCA5844452B06(300f);
				*uParam0.f_6 = 1;
				*uParam0.f_33 = 1;
				*uParam0.f_129 = 1;
				*uParam0.f_2 = 1;
				*uParam0.f_9 = iParam1;
				vVar0 = {get_entity_coords(iParam1, 1)};
				*uParam0.f_22 = vVar0.z;
				vVar3 = {get_entity_rotation(iParam1, 2)};
				*uParam0.f_41 = vVar3.z;
				if (*uParam0.f_4)
				{
					disable_all_control_actions(0);
				}
				else
				{
					disable_all_control_actions(0);
					set_everyone_ignore_player(player_id(), 1);
				}
				vVar6 = {get_entity_velocity(iParam1)};
				*uParam0.f_78 = vVar6.x;
				*uParam0.f_79 = vVar6.y;
				push_timecycle_modifier();
				if (is_vehicle_driveable(*uParam0.f_8, 0))
				{
					iVar9 = get_entity_model(*uParam0.f_8);
				}
				if (iVar9 == joaat("buzzard") || iVar9 == joaat("savage"))
				{
					set_timecycle_modifier("heliGunCam");
				}
				else if (iVar9 == joaat("valkyrie"))
				{
					set_timecycle_modifier("heliGunCam");
				}
				else
				{
					set_timecycle_modifier("eyeinthesky");
				}
				_0x6DDBF9DFFC4AC080(1);
				get_ground_z_for_3d_coord(vVar0, &fVar10, 0);
				*uParam0.f_469 = fVar10 * 10f;
				if (*uParam0.f_470 == 1)
				{
					if (*uParam0.f_475 != -1)
					{
						if (has_sound_finished(*uParam0.f_475))
						{
							play_sound_frontend(*uParam0.f_475, "COP_HELI_CAM_BACKGROUND", 0, 1);
						}
					}
				}
				func_468(uParam0);
				*uParam0.f_1 = 1;
			}
		}
		return false;
	}
	else
	{
		if (*uParam0.f_1 == 1 && iParam2 == 1)
		{
			if (*uParam0.f_165 == 0)
			{
				func_449(uParam0, 0);
				func_448();
			}
			else
			{
				return true;
			}
		}
		if (*uParam0.f_1 == 1 && iParam2 == 0)
		{
			if (iParam3 == 0)
			{
				*uParam0.f_127 = 0;
			}
			*uParam0.f_6 = 0;
			*uParam0.f_33 = 0;
			*uParam0.f_129 = 0;
			*uParam0.f_9 = 0;
			*uParam0.f_2 = 0;
			*uParam0.f_134 = 0;
			func_445(uParam0);
			if (!is_entity_dead(player_ped_id(), 0))
			{
				enable_all_control_actions(0);
				set_everyone_ignore_player(player_id(), 0);
			}
			if (is_vehicle_driveable(*uParam0.f_8, 0))
			{
				if (is_entity_attached_to_any_object(*uParam0.f_8))
				{
					detach_entity(*uParam0.f_8, 1, true);
				}
				if (!*uParam0.f_4)
				{
					freeze_entity_position(*uParam0.f_8, false);
					set_entity_invincible(*uParam0.f_8, false);
					set_entity_has_gravity(*uParam0.f_8, 1);
					set_vehicle_gravity(*uParam0.f_8, 1);
				}
			}
			_set_unk_map_flag(0);
			if (does_cam_exist(*uParam0.f_32))
			{
				if (is_cam_active(*uParam0.f_32))
				{
					set_cam_active(*uParam0.f_32, false);
				}
				if (is_cam_rendering(*uParam0.f_32))
				{
					render_script_cams(false, false, 3000, 1, 0, 0);
				}
				destroy_cam(*uParam0.f_32, 0);
			}
			if (*uParam0.f_472 != -1)
			{
				if (!has_sound_finished(*uParam0.f_472))
				{
					stop_sound(*uParam0.f_472);
				}
			}
			if (*uParam0.f_473 != -1)
			{
				if (!has_sound_finished(*uParam0.f_473))
				{
					stop_sound(*uParam0.f_473);
				}
			}
			if (*uParam0.f_474 != -1)
			{
				if (!has_sound_finished(*uParam0.f_474))
				{
					stop_sound(*uParam0.f_474);
				}
			}
			if (*uParam0.f_476 != -1)
			{
				if (!has_sound_finished(*uParam0.f_476))
				{
					stop_sound(*uParam0.f_476);
				}
			}
			if (*uParam0.f_477 != -1)
			{
				if (!has_sound_finished(*uParam0.f_477))
				{
					stop_sound(*uParam0.f_477);
				}
			}
			if (*uParam0.f_478 != -1)
			{
				if (!has_sound_finished(*uParam0.f_478))
				{
					stop_sound(*uParam0.f_478);
				}
			}
			if (*uParam0.f_475 != -1)
			{
				if (!has_sound_finished(*uParam0.f_475))
				{
					stop_sound(*uParam0.f_475);
				}
			}
			if (*uParam0.f_479 != -1)
			{
				if (!has_sound_finished(*uParam0.f_479))
				{
					stop_sound(*uParam0.f_479);
				}
			}
			if (*uParam0.f_470 == 1)
			{
				release_ambient_audio_bank();
				release_sound_id(*uParam0.f_475);
				release_sound_id(*uParam0.f_472);
				release_sound_id(*uParam0.f_473);
				release_sound_id(*uParam0.f_474);
				release_sound_id(*uParam0.f_476);
				release_sound_id(*uParam0.f_477);
				release_sound_id(*uParam0.f_478);
				release_sound_id(*uParam0.f_479);
				*uParam0.f_475 = -1;
				*uParam0.f_472 = -1;
				*uParam0.f_473 = -1;
				*uParam0.f_474 = -1;
				*uParam0.f_476 = -1;
				*uParam0.f_477 = -1;
				*uParam0.f_478 = -1;
				*uParam0.f_479 = -1;
				*uParam0.f_470 = 0;
			}
			clear_timecycle_modifier();
			_0x6DDBF9DFFC4AC080(0);
			set_streamed_texture_dict_as_no_longer_needed("helicopterHUD");
			set_scaleform_movie_as_no_longer_needed(&iLocal_116);
			pop_timecycle_modifier();
			func_469(0, 0, 1, 0);
			*uParam0.f_46 = 0;
			if (does_entity_exist(*uParam0.f_9))
			{
				iVar11 = 0;
				while (iVar11 < *uParam0.f_85)
				{
					*(uParam0.f_85[iVar11 /*5*/]).f_4 = 0;
					iVar11++;
				}
			}
			*uParam0.f_8 = 0;
			*uParam0.f_1 = 0;
			func_468(uParam0);
			return true;
		}
	}
	return false;
}

void func_445(var uParam0)
{
	*uParam0.f_47 = 0;
	if (func_447(uParam0))
	{
		func_446(uParam0, *uParam0.f_41, 0);
	}
}

void func_446(var uParam0, float fParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		*uParam0.f_51 = 1;
		*uParam0.f_52 = fParam1;
		*uParam0.f_53 = *uParam0.f_41;
	}
	else
	{
		*uParam0.f_51 = 0;
		*uParam0.f_41 = *uParam0.f_53;
	}
}

bool func_447(var uParam0)
{
	if (*uParam0.f_51 == 1)
	{
		return true;
	}
	return false;
}

void func_448()
{
	Global_88895 = 1;
}

void func_449(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	var uVar19;
	int iVar20;
	float fVar21;
	vector3 vVar22;
	int iVar25;
	vector3 vVar26;
	int iVar29;
	vector3 vVar30;
	vector3 vVar33;
	vector3 vVar36;
	Vector3 fVar39;
	vector3 vVar40;
	Vector3 fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	Vector3 fVar47;
	
	if (*uParam0.f_129 == 1)
	{
		fVar0 = *uParam0.f_121 - *uParam0.f_31 / *uParam0.f_30 - *uParam0.f_31;
		if (fVar0 < 0f)
		{
			fVar0 = 0f;
		}
		if (fVar0 > 1f)
		{
			fVar0 = 1f;
		}
		fVar1 = *uParam0.f_26 + *uParam0.f_28 - *uParam0.f_26 * fVar0;
		fVar2 = *uParam0.f_27 + *uParam0.f_29 - *uParam0.f_27 * fVar0;
		_0xBED8CA5FF5E04113(1.7f, 4.7f, fVar1, fVar2);
		fVar3 = get_entity_speed(*uParam0.f_8);
		if (fVar3 > 30f)
		{
			_0x472397322E92A856();
		}
		_0x03F1A106BDA7DD3E();
		if (is_vehicle_driveable(*uParam0.f_8, 0))
		{
			if (!network_is_game_in_progress())
			{
				set_heli_blades_full_speed(*uParam0.f_8);
			}
		}
		if (*uParam0.f_43 != -1)
		{
			if (*uParam0.f_44 < *uParam0.f_43)
			{
				if (get_clock_hours() < *uParam0.f_43 && get_clock_hours() > *uParam0.f_44 + 1)
				{
					set_clock_time(*uParam0.f_43, 0, 0);
				}
				else if (get_clock_hours() >= *uParam0.f_44 && get_clock_hours() < *uParam0.f_43)
				{
					set_clock_time(*uParam0.f_44, 0, 0);
				}
			}
			else if (get_clock_hours() < *uParam0.f_43)
			{
				set_clock_time(*uParam0.f_43, 0, 0);
			}
			else if (get_clock_hours() >= *uParam0.f_44)
			{
				set_clock_time(*uParam0.f_44, 0, 0);
			}
		}
		if (!has_streamed_texture_dict_loaded("helicopterhud") || (iParam1 == 0 && !has_scaleform_movie_loaded(iLocal_116)))
		{
			*uParam0.f_165 = 0;
		}
		else
		{
			*uParam0.f_159 = 1f - 2f * *uParam0.f_133;
			_set_2d_layer(1);
			if (iParam1 == 0)
			{
				_set_2d_layer(0);
				draw_scaleform_movie_fullscreen(iLocal_116, 255, 255, 255, false, 1);
				hide_hud_component_this_frame(14);
				if (!*uParam0.f_165)
				{
					if (is_vehicle_driveable(*uParam0.f_8, 0))
					{
						if (get_entity_model(*uParam0.f_8) == joaat("polmav") && get_vehicle_livery(*uParam0.f_8) == 0)
						{
							_push_scaleform_movie_function(iLocal_116, "SET_CAM_LOGO");
							_push_scaleform_movie_function_parameter_int(true);
							_pop_scaleform_movie_function_void();
						}
						else
						{
							_push_scaleform_movie_function(iLocal_116, "SET_CAM_LOGO");
							_push_scaleform_movie_function_parameter_int(false);
							_pop_scaleform_movie_function_void();
						}
					}
					else
					{
						_push_scaleform_movie_function(iLocal_116, "SET_CAM_LOGO");
						_push_scaleform_movie_function_parameter_int(false);
						_pop_scaleform_movie_function_void();
					}
				}
			}
			*uParam0.f_165 = 1;
		}
		if (*uParam0.f_165 == 1)
		{
			if (iParam1 == 0)
			{
			}
			fVar18 = *uParam0.f_236;
			iVar20 = -1;
			if (!is_entity_dead(*uParam0.f_9, 0))
			{
				vVar22 = {get_entity_coords(*uParam0.f_9, 1)};
			}
			if (*uParam0.f_166 == 0)
			{
				iVar4 = 0;
				*uParam0.f_132 = 0;
				iVar4 = 0;
				while (iVar4 < *uParam0.f_298)
				{
					if (is_bit_set(*(uParam0.f_298[iVar4 /*11*/]).f_2, 9))
					{
						if (does_entity_exist(*uParam0.f_298[iVar4 /*11*/]))
						{
							if (!is_entity_dead(*uParam0.f_298[iVar4 /*11*/], 0))
							{
								if (is_bit_set(*(uParam0.f_298[iVar4 /*11*/]).f_2, false))
								{
									switch (*(uParam0.f_298[iVar4 /*11*/]).f_4)
									{
										case 2:
											func_466(uParam0, get_world_position_of_entity_bone(*uParam0.f_298[iVar4 /*11*/], 0), *uParam0.f_144, *uParam0.f_144.f_1, *uParam0.f_144.f_2);
											break;
										
										case 3:
											func_466(uParam0, get_world_position_of_entity_bone(*uParam0.f_298[iVar4 /*11*/], 0), *uParam0.f_147, *uParam0.f_147.f_1, *uParam0.f_147.f_2);
											break;
										
										case 0:
											func_466(uParam0, get_world_position_of_entity_bone(*uParam0.f_298[iVar4 /*11*/], 0), *uParam0.f_141, *uParam0.f_141.f_1, *uParam0.f_141.f_2);
											break;
										
										case 1:
											func_466(uParam0, get_world_position_of_entity_bone(*uParam0.f_298[iVar4 /*11*/], 0), *uParam0.f_147, *uParam0.f_147.f_1, *uParam0.f_147.f_2);
											break;
									}
								}
								else if (get_clock_hours() < 19 && get_clock_hours() > 7)
								{
									func_466(uParam0, get_world_position_of_entity_bone(*uParam0.f_298[iVar4 /*11*/], 0), *uParam0.f_141, *uParam0.f_141.f_1, *uParam0.f_141.f_2);
								}
								else
								{
									func_466(uParam0, get_world_position_of_entity_bone(*uParam0.f_298[iVar4 /*11*/], 0), *uParam0.f_141, *uParam0.f_141.f_1, *uParam0.f_141.f_2);
								}
							}
						}
					}
					iVar4++;
				}
				if (!is_entity_dead(*uParam0.f_9, 0))
				{
					get_ground_z_for_3d_coord(vVar22, &uVar19, 0);
					if (*uParam0.f_131 == 0 && *uParam0.f_127 > 0)
					{
						iVar4 = 0;
						while (iVar4 <= *uParam0.f_127 - 1)
						{
							if (does_entity_exist(*uParam0.f_298[iVar4 /*11*/]))
							{
								if (!is_entity_dead(*uParam0.f_298[iVar4 /*11*/], 0) && !is_entity_dead(player_ped_id(), 0))
								{
									vVar12 = {get_world_position_of_entity_bone(*uParam0.f_298[iVar4 /*11*/], 0)};
									if (is_entity_on_screen(*uParam0.f_298[iVar4 /*11*/]))
									{
										fVar8 = 0f;
										fVar9 = 0f;
										fVar16 = get_distance_between_coords(vVar12, get_entity_coords(*uParam0.f_9, 1), 1);
										fVar21 = func_465(uParam0, *uParam0.f_298[iVar4 /*11*/], *uParam0.f_9);
										fVar17 = *uParam0.f_153 * fVar21;
										if (is_bit_set(*(uParam0.f_298[iVar4 /*11*/]).f_2, 2) || iVar4 == *uParam0.f_171)
										{
											if (is_bit_set(*(uParam0.f_298[iVar4 /*11*/]).f_2, false))
											{
												if ((timera() - *(uParam0.f_298[iVar4 /*11*/]).f_1 < 500 && !func_463(uParam0, *uParam0.f_298[iVar4 /*11*/])) && !func_457(get_entity_coords(*uParam0.f_298[iVar4 /*11*/], 1)))
												{
													func_456(uParam0, vVar12, fVar21, *(uParam0.f_298[iVar4 /*11*/]).f_4, -1, -1, -1);
													*(uParam0.f_298[iVar4 /*11*/].f_7) = {get_entity_coords(*uParam0.f_298[iVar4 /*11*/], 1)};
												}
												else
												{
													func_455(uParam0, *(uParam0.f_298[iVar4 /*11*/]).f_4, &iVar5, &iVar6, &iVar7);
													set_draw_origin(*(uParam0.f_298[iVar4 /*11*/].f_7), 0);
													draw_sprite("helicopterhud", "TargetLost", fVar8, fVar9, fVar17, fVar17 * 2f, 0f, iVar5, iVar6, iVar7, 200, 1);
													clear_draw_origin();
													func_454(iVar5, iVar6, iVar7, 0.5f, 1);
													*uParam0.f_132 = 1;
												}
											}
											else
											{
												func_455(uParam0, 3, &iVar5, &iVar6, &iVar7);
												if (iVar4 == *uParam0.f_171)
												{
													func_456(uParam0, vVar12, fVar21, *(uParam0.f_298[iVar4 /*11*/]).f_4, *uParam0.f_141, *uParam0.f_141.f_1, *uParam0.f_141.f_2);
												}
												else
												{
													func_456(uParam0, vVar12, fVar21, *(uParam0.f_298[iVar4 /*11*/]).f_4, *uParam0.f_141, *uParam0.f_141.f_1, *uParam0.f_141.f_2);
												}
											}
											if (is_bit_set(*(uParam0.f_298[iVar4 /*11*/]).f_2, 7))
											{
												func_456(uParam0, vVar12, fVar21, *(uParam0.f_298[iVar4 /*11*/]).f_4, 227, 24, 234);
											}
										}
										iVar25 = 0;
										vVar26 = {0f, 0f, 0f};
										iVar29 = 0;
										switch (_get_raycast_result(*(uParam0.f_298[iVar4 /*11*/]).f_10, &iVar25, &vVar26, &vVar26, &iVar29))
										{
											case 0:
												vVar30 = {get_entity_coords(*uParam0.f_8, 1)};
												vVar33 = {get_entity_coords(*uParam0.f_298[iVar4 /*11*/], 1) + Vector(0.5f, 0f, 0f)};
												*(uParam0.f_298[iVar4 /*11*/]).f_10 = _0x7EE9F5D83DD4F90E(vVar30, vVar33, 1, false, 7);
												break;
											
											case 2:
												if (iVar25 == 0)
												{
													*(uParam0.f_298[iVar4 /*11*/]).f_1 = timera();
												}
												break;
										}
										if (timera() - *(uParam0.f_298[iVar4 /*11*/]).f_1 < 1500 || is_bit_set(*(uParam0.f_298[iVar4 /*11*/]).f_2, false))
										{
											if (*uParam0.f_157 / *uParam0.f_40 * fVar16 > 1f)
											{
												_world3d_to_screen2d(vVar12, &fVar8, &fVar9);
												fVar15 = sqrt(fVar8 - 0.5f * fVar8 - 0.5f + fVar9 - 0.5f * fVar9 - 0.5f);
												if (fVar15 < fVar18)
												{
													fVar10 = fVar8;
													fVar11 = fVar9;
													fVar10 = fVar10;
													fVar11 = fVar11;
													fVar18 = fVar15;
													iVar20 = iVar4;
												}
											}
										}
										clear_draw_origin();
									}
								}
							}
							iVar4++;
						}
					}
					*uParam0.f_155++;
					if (*uParam0.f_155 > *uParam0.f_127 - 1)
					{
						*uParam0.f_155 = 0;
					}
				}
				if (*uParam0.f_171 != iVar20)
				{
					if (*uParam0.f_474 != -1)
					{
						if (has_sound_finished(*uParam0.f_474))
						{
							play_sound_frontend(*uParam0.f_474, "COP_HELI_CAM_BLEEP", 0, 1);
						}
					}
				}
				*uParam0.f_171 = iVar20;
				*uParam0.f_128 = 0;
				if (*uParam0.f_171 != -1 && *uParam0.f_2 == 1)
				{
					if (!is_bit_set(*(uParam0.f_298[*uParam0.f_171 /*11*/]).f_2, false))
					{
						if (is_control_pressed(2, 229))
						{
							if ((*uParam0.f_156 / *uParam0.f_40 * fVar16 > 0.5f && !func_457(get_entity_coords(*uParam0.f_298[*uParam0.f_171 /*11*/], 1))) && !func_463(uParam0, *uParam0.f_298[*uParam0.f_171 /*11*/]))
							{
								if (*uParam0.f_471 == 1)
								{
									if (*uParam0.f_479 != -1)
									{
										if (!has_sound_finished(*uParam0.f_479))
										{
											stop_sound(*uParam0.f_479);
										}
									}
									*uParam0.f_471 = 0;
								}
								*uParam0.f_128 = 1;
								if (*(uParam0.f_298[*uParam0.f_171 /*11*/]).f_3 < 1f)
								{
									if (*uParam0.f_476 != -1)
									{
										if (has_sound_finished(*uParam0.f_476))
										{
											play_sound_frontend(*uParam0.f_476, "COP_HELI_CAM_SCAN_PED_LOOP", 0, 1);
										}
									}
									fVar18 = absf(1f - fVar18);
									*(uParam0.f_298[*uParam0.f_171 /*11*/]).f_3 += fVar18 * timestep() / 3.5f;
									fVar21 = func_465(uParam0, *uParam0.f_298[*uParam0.f_171 /*11*/], *uParam0.f_9);
									fVar17 = *uParam0.f_153 * fVar21;
									func_454(255, 0, 0, 0.5f, 1);
									if (timera() % 600 < 300)
									{
										func_453(0.5f, 0.68f, "scan", 1);
									}
									fVar21 = func_465(uParam0, *uParam0.f_298[*uParam0.f_171 /*11*/], *uParam0.f_9);
									fVar17 = 0.03f;
									set_draw_origin(get_world_position_of_entity_bone(*uParam0.f_298[*uParam0.f_171 /*11*/], 0), 0);
									func_451(uParam0, *uParam0.f_298[*uParam0.f_171 /*11*/], *(uParam0.f_298[*uParam0.f_171 /*11*/]).f_3, fVar21);
									clear_draw_origin();
								}
								else
								{
									if (is_bit_set(*(uParam0.f_298[*uParam0.f_171 /*11*/]).f_2, 3))
									{
										set_bit(uParam0.f_298[*uParam0.f_171 /*11*/].f_2, 2);
									}
									set_bit(uParam0.f_298[*uParam0.f_171 /*11*/].f_2, false);
									*uParam0.f_134 = *uParam0.f_298[*uParam0.f_171 /*11*/];
									if (*uParam0.f_476 != -1)
									{
										if (!has_sound_finished(*uParam0.f_476))
										{
											stop_sound(*uParam0.f_476);
										}
									}
									if (*(uParam0.f_298[*uParam0.f_171 /*11*/]).f_4 == 2)
									{
										if (*uParam0.f_477 != -1)
										{
											if (has_sound_finished(*uParam0.f_477))
											{
												play_sound_frontend(*uParam0.f_477, "COP_HELI_CAM_SCAN_PED_SUCCESS", 0, 1);
											}
										}
									}
									else if (*uParam0.f_478 != -1)
									{
										if (has_sound_finished(*uParam0.f_478))
										{
											play_sound_frontend(*uParam0.f_478, "COP_HELI_CAM_SCAN_PED_FAILURE", 0, 1);
										}
									}
								}
							}
							else
							{
								fVar21 = func_465(uParam0, *uParam0.f_298[*uParam0.f_171 /*11*/], *uParam0.f_9);
								fVar17 = *uParam0.f_153 * fVar21;
								func_454(255, 0, 0, 0.5f, 1);
								func_453(0.5f, 0.68f, "HUD_RNG", 0);
								if (!*uParam0.f_471)
								{
									if (*uParam0.f_479 != -1)
									{
										if (has_sound_finished(*uParam0.f_479))
										{
											play_sound_frontend(*uParam0.f_479, "COP_HELI_CAM_BLEEP_TOO_FAR", 0, 1);
											*uParam0.f_471 = 1;
										}
									}
								}
							}
						}
						else if (*uParam0.f_471 == 1)
						{
							if (*uParam0.f_479 != -1)
							{
								if (!has_sound_finished(*uParam0.f_479))
								{
									stop_sound(*uParam0.f_479);
								}
							}
							*uParam0.f_471 = 0;
						}
					}
					else if (is_control_pressed(2, 229) || (get_game_timer() < *uParam0.f_173 && *uParam0.f_172 == *uParam0.f_171))
					{
						if (!is_entity_dead(*uParam0.f_298[*uParam0.f_171 /*11*/], 0))
						{
							if (timera() - *(uParam0.f_298[*uParam0.f_171 /*11*/]).f_1 < 500)
							{
								if (!*uParam0.f_132)
								{
									*uParam0.f_172 = *uParam0.f_171;
									*uParam0.f_173 = get_game_timer() + 3000;
									set_draw_origin(get_world_position_of_entity_bone(*uParam0.f_298[*uParam0.f_171 /*11*/], 0), 0);
									fVar21 = func_465(uParam0, *uParam0.f_298[*uParam0.f_171 /*11*/], *uParam0.f_9);
									fVar8 = 0f;
									fVar9 = 0f;
									func_455(uParam0, *(uParam0.f_298[*uParam0.f_171 /*11*/]).f_4, &iVar5, &iVar6, &iVar7);
									clear_draw_origin();
									if (*(uParam0.f_298[*uParam0.f_171 /*11*/]).f_4 == 2)
									{
										func_450(uParam0, *uParam0.f_171, fVar8 - fVar17 / 2f + fVar17 * 0.04f, fVar9 + fVar17 + 0.005f, iVar5, iVar6, iVar7, fVar21, 1);
									}
									else
									{
										func_450(uParam0, *uParam0.f_171, fVar8 - fVar17 / 2f + fVar17 * 0.04f, fVar9 + fVar17 + 0.005f, iVar5, iVar6, iVar7, fVar21, 0);
									}
								}
							}
						}
					}
				}
				if (*uParam0.f_128 == 0)
				{
					if (*uParam0.f_476 != -1)
					{
						if (!has_sound_finished(*uParam0.f_476))
						{
							stop_sound(*uParam0.f_476);
						}
					}
				}
			}
			if (*uParam0.f_241 > 0)
			{
				iVar4 = 0;
				while (iVar4 <= 4)
				{
					if (*(uParam0.f_242[iVar4 /*11*/]).f_5 != -1)
					{
						if (_world3d_to_screen2d(*(uParam0.f_242[iVar4 /*11*/]), &fVar8, &fVar9))
						{
							if (does_entity_exist(*uParam0.f_8) && is_vehicle_driveable(*uParam0.f_8, 0))
							{
								vVar36 = {get_entity_coords(*uParam0.f_8, 1)};
							}
							else if (does_entity_exist(*uParam0.f_9) && !is_entity_dead(*uParam0.f_9, 0))
							{
								vVar36 = {get_entity_coords(*uParam0.f_9, 1)};
							}
							set_draw_origin(*(uParam0.f_242[iVar4 /*11*/]), 0);
							fVar8 = 0f;
							fVar9 = 0f;
							if (*(uParam0.f_242[iVar4 /*11*/]).f_6 == 1)
							{
								fVar16 = get_distance_between_coords(*(uParam0.f_242[iVar4 /*11*/]), vVar36, 1);
								fVar21 = *uParam0.f_158 / *uParam0.f_40 * fVar16;
								if (fVar21 < 0.4f)
								{
									fVar21 = 0.4f;
								}
								if (fVar21 > 2f)
								{
									fVar21 = 2f;
								}
								func_456(uParam0, *(uParam0.f_242[iVar4 /*11*/]), fVar21, 0, -1, -1, -1);
								set_draw_origin(*(uParam0.f_242[iVar4 /*11*/]), 0);
							}
							else
							{
								draw_sprite("helicopterhud", "hud_dest", fVar8, fVar9, 0.042f, 0.042f, 0f, *(uParam0.f_242[iVar4 /*11*/]).f_8, *(uParam0.f_242[iVar4 /*11*/]).f_9, *(uParam0.f_242[iVar4 /*11*/]).f_10, 255, 1);
							}
							clear_draw_origin();
						}
						else if (*(uParam0.f_242[iVar4 /*11*/]).f_6 == 1)
						{
							func_466(uParam0, *(uParam0.f_242[iVar4 /*11*/]), *(uParam0.f_242[iVar4 /*11*/]).f_8, *(uParam0.f_242[iVar4 /*11*/]).f_9, *(uParam0.f_242[iVar4 /*11*/]).f_10);
						}
						else
						{
							func_466(uParam0, *(uParam0.f_242[iVar4 /*11*/]), *(uParam0.f_242[iVar4 /*11*/]).f_8, *(uParam0.f_242[iVar4 /*11*/]).f_9, *(uParam0.f_242[iVar4 /*11*/]).f_10);
						}
					}
					iVar4++;
				}
			}
			if (iParam1 == 0)
			{
				fVar39 = *uParam0.f_121.f_2;
				vVar40 = {0f, 0f, 0f};
				if (does_entity_exist(*uParam0.f_9))
				{
					if (!is_entity_dead(*uParam0.f_9, 0))
					{
						vVar40 = {get_entity_coords(*uParam0.f_9, 1)};
						fVar47 = get_entity_heading(*uParam0.f_9);
					}
				}
				while (fVar39 < 0f)
				{
					fVar39 += 360f;
				}
				while (fVar39 > 360f)
				{
					fVar39 -= 360f;
				}
				while (fVar47 < 0f)
				{
					fVar47 += 360f;
				}
				while (fVar47 > 360f)
				{
					fVar47 -= 360f;
				}
				fVar46 = fVar39;
				fVar44 = fVar47 - *uParam0.f_25;
				fVar45 = fVar47 + *uParam0.f_25;
				if (fVar46 < fVar44 && fVar46 + 360f <= fVar45)
				{
					fVar46 += 360f;
				}
				if (fVar46 > fVar45 && fVar46 - 360f >= fVar44)
				{
					fVar46 -= 360f;
				}
				fVar43 = fVar46 - fVar44 / fVar45 - fVar44;
				if (fVar43 == 2f)
				{
					fVar43 = 0f;
				}
				else if (fVar43 == -1f)
				{
					fVar43 = 1f;
				}
				else if (fVar43 < 0f && fVar43 >= -0.5f)
				{
					fVar43 = 0f;
				}
				else if (fVar43 < 0f && fVar43 > -1f)
				{
					fVar43 = 1f;
				}
				else if (fVar43 > 1.5f && fVar43 < 2f)
				{
					fVar43 = 0f;
				}
				else if (fVar43 > 2f || fVar43 < -1f)
				{
					fVar43 = 0.5f;
				}
				_push_scaleform_movie_function(iLocal_116, "SET_ALT_FOV_HEADING");
				_push_scaleform_movie_function_parameter_float(vVar40.z);
				if (network_is_game_in_progress())
				{
					_push_scaleform_movie_function_parameter_float(fVar43);
				}
				else
				{
					_push_scaleform_movie_function_parameter_float(*uParam0.f_40 - *uParam0.f_39 / *uParam0.f_38 - *uParam0.f_39);
				}
				_push_scaleform_movie_function_parameter_float(fVar39);
				_pop_scaleform_movie_function_void();
				hide_hud_component_this_frame(3);
				if (!*uParam0.f_130)
				{
					hide_hud_and_radar_this_frame();
				}
			}
		}
	}
}

bool func_450(var uParam0, var uParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;
	
	func_454(iParam4, iParam5, iParam6, 0.43f, iParam8);
	if (fParam7 < 0.7f)
	{
		fParam7 = 0.7f;
	}
	if (fParam7 > 1.5f)
	{
		fParam7 = 1.5f;
	}
	if (*(uParam0.f_298[uParam1 /*11*/]).f_6 != -1)
	{
		Var0 = {*(uParam0.f_433[*(uParam0.f_298[uParam1 /*11*/]).f_6 /*4*/])};
		func_454(iParam4, iParam5, iParam6, 0.43f, iParam8);
		func_453(0.5f, 0.68f, &Var0, 1);
	}
	else if (is_bit_set(*(uParam0.f_298[uParam1 /*11*/]).f_2, 8))
	{
	}
	iVar4 = 24;
	while (iVar4 <= 31)
	{
		if (is_bit_set(*(uParam0.f_298[uParam1 /*11*/]).f_5, iVar4))
		{
			StringCopy(&Var0, "crimes_", 16);
			StringIntConCat(&Var0, iVar4 - 23, 16);
			func_454(iParam4, iParam5, iParam6, 0.43f, iParam8);
			func_453(0.5f, 0.68f + 0.037f * IntToFloat(iVar5 + 1), &Var0, 1);
			iVar5++;
		}
		iVar4++;
	}
	if (iVar5 == 0)
	{
		func_454(iParam4, iParam5, iParam6, 0.43f, iParam8);
		func_453(fParam2, fParam3 + *uParam0.f_466 * fParam7, "unknown", 1);
	}
	if (*(uParam0.f_298[uParam1 /*11*/]).f_4 == 0)
	{
		func_454(iParam4, iParam5, iParam6, 0.43f, iParam8);
		func_453(fParam2, fParam3 + *uParam0.f_466 * fParam7, "HUD_ID2", 1);
	}
	return true;
}

void func_451(var uParam0, int iParam1, float fParam2, float fParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	float fVar15;
	float fVar16;
	
	vVar12 = {0f, 0f, 0f};
	if (fParam2 < 0.5f)
	{
		if (!is_ped_injured(iParam1))
		{
			vVar0 = {get_ped_bone_coords(iParam1, 14201, vVar12)};
			vVar3 = {get_ped_bone_coords(iParam1, 63931, vVar12)};
			set_draw_origin(vVar0, 0);
			_world3d_to_screen2d(vVar0, &fVar8, &fVar9);
			_world3d_to_screen2d(vVar3, &fVar10, &fVar11);
			fVar6 = fVar10 - fVar8 / 10f;
			fVar7 = fVar11 - fVar9 / 10f;
		}
		fVar15 = 0f;
		fVar16 = 0.3f;
		func_452(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
		if (!is_ped_injured(iParam1))
		{
			vVar0 = {get_ped_bone_coords(iParam1, 52301, vVar12)};
			vVar3 = {get_ped_bone_coords(iParam1, 36864, vVar12)};
			set_draw_origin(vVar0, 0);
			_world3d_to_screen2d(vVar0, &fVar8, &fVar9);
			_world3d_to_screen2d(vVar3, &fVar10, &fVar11);
			fVar6 = fVar10 - fVar8 / 10f;
			fVar7 = fVar11 - fVar9 / 10f;
		}
		fVar15 = 0f;
		fVar16 = 0.3f;
		func_452(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
	}
	if (fParam2 > 0.15f && fParam2 < 0.7f)
	{
		if (!is_ped_injured(iParam1))
		{
			vVar0 = {get_ped_bone_coords(iParam1, 36864, vVar12)};
			vVar3 = {get_ped_bone_coords(iParam1, 51826, vVar12)};
			set_draw_origin(vVar0, 0);
			_world3d_to_screen2d(vVar0, &fVar8, &fVar9);
			_world3d_to_screen2d(vVar3, &fVar10, &fVar11);
			fVar6 = fVar10 - fVar8 / 10f;
			fVar7 = fVar11 - fVar9 / 10f;
		}
		fVar15 = 0.15f;
		fVar16 = 0.3f;
		func_452(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
		if (!is_ped_injured(iParam1))
		{
			vVar0 = {get_ped_bone_coords(iParam1, 63931, vVar12)};
			vVar3 = {get_ped_bone_coords(iParam1, 58271, vVar12)};
			set_draw_origin(vVar0, 0);
			_world3d_to_screen2d(vVar0, &fVar8, &fVar9);
			_world3d_to_screen2d(vVar3, &fVar10, &fVar11);
			fVar6 = fVar10 - fVar8 / 10f;
			fVar7 = fVar11 - fVar9 / 10f;
		}
		fVar15 = 0.15f;
		fVar16 = 0.3f;
		func_452(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
	}
	if (fParam2 > 0.3f && fParam2 < 1f)
	{
		if (!is_ped_injured(iParam1))
		{
			vVar0 = {get_ped_bone_coords(iParam1, 11816, vVar12)};
			vVar3 = {get_ped_bone_coords(iParam1, 39317, vVar12)};
			set_draw_origin(vVar0, 0);
			_world3d_to_screen2d(vVar0, &fVar8, &fVar9);
			_world3d_to_screen2d(vVar3, &fVar10, &fVar11);
			fVar6 = fVar10 - fVar8 / 10f;
			fVar7 = fVar11 - fVar9 / 10f;
		}
		fVar15 = 0.3f;
		fVar16 = 0.5f;
		func_452(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 2f);
	}
	if (fParam2 > 0.6f && fParam2 < 1f)
	{
		if (!is_ped_injured(iParam1))
		{
			vVar0 = {get_ped_bone_coords(iParam1, 31086, vVar12)};
			vVar3 = {vVar0 + vVar0 - get_ped_bone_coords(iParam1, 39317, vVar12) * Vector(3f, 3f, 3f)};
			set_draw_origin(vVar0, 0);
			_world3d_to_screen2d(vVar0, &fVar8, &fVar9);
			_world3d_to_screen2d(vVar3, &fVar10, &fVar11);
			fVar6 = fVar10 - fVar8 / 10f;
			fVar7 = fVar11 - fVar9 / 10f;
		}
		fVar15 = 0.6f;
		fVar16 = 0.3f;
		func_452(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1.3f);
	}
	if (fParam2 > 0.6f && fParam2 < 1f)
	{
		if (!is_ped_injured(iParam1))
		{
			vVar0 = {get_ped_bone_coords(iParam1, 40269, vVar12)};
			vVar3 = {get_ped_bone_coords(iParam1, 28252, vVar12)};
			set_draw_origin(vVar0, 0);
			_world3d_to_screen2d(vVar0, &fVar8, &fVar9);
			_world3d_to_screen2d(vVar3, &fVar10, &fVar11);
			fVar6 = fVar10 - fVar8 / 10f;
			fVar7 = fVar11 - fVar9 / 10f;
		}
		fVar15 = 0.6f;
		fVar16 = 0.3f;
		func_452(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
		if (!is_ped_injured(iParam1))
		{
			vVar0 = {get_ped_bone_coords(iParam1, 45509, vVar12)};
			vVar3 = {get_ped_bone_coords(iParam1, 61163, vVar12)};
			set_draw_origin(vVar0, 0);
			_world3d_to_screen2d(vVar0, &fVar8, &fVar9);
			_world3d_to_screen2d(vVar3, &fVar10, &fVar11);
			fVar6 = fVar10 - fVar8 / 10f;
			fVar7 = fVar11 - fVar9 / 10f;
		}
		fVar15 = 0.6f;
		fVar16 = 0.3f;
		func_452(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
	}
	if (fParam2 > 0.75f && fParam2 < 1f)
	{
		if (!is_ped_injured(iParam1))
		{
			vVar0 = {get_ped_bone_coords(iParam1, 28252, vVar12)};
			vVar3 = {get_ped_bone_coords(iParam1, 57005, vVar12)};
			set_draw_origin(vVar0, 0);
			_world3d_to_screen2d(vVar0, &fVar8, &fVar9);
			_world3d_to_screen2d(vVar3, &fVar10, &fVar11);
			fVar6 = fVar10 - fVar8 / 10f;
			fVar7 = fVar11 - fVar9 / 10f;
		}
		fVar15 = 0.75f;
		fVar16 = 0.25f;
		func_452(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
		if (!is_ped_injured(iParam1))
		{
			vVar0 = {get_ped_bone_coords(iParam1, 61163, vVar12)};
			vVar3 = {get_ped_bone_coords(iParam1, 18905, vVar12)};
			set_draw_origin(vVar0, 0);
			_world3d_to_screen2d(vVar0, &fVar8, &fVar9);
			_world3d_to_screen2d(vVar3, &fVar10, &fVar11);
			fVar6 = fVar10 - fVar8 / 10f;
			fVar7 = fVar11 - fVar9 / 10f;
		}
		fVar15 = 0.75f;
		fVar16 = 0.3f;
		func_452(uParam0, fParam2, fVar15, fVar16, fVar6, fVar7, fParam3, fVar10, fVar8, fVar11, fVar9, 1065353216);
	}
	clear_draw_origin();
}

void func_452(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11)
{
	int iVar0;
	Vector3 fVar1;
	float fVar2;
	
	fVar2 = fParam3 / 10f;
	iVar0 = 0;
	while (iVar0 <= 10)
	{
		fVar1 = fParam1 - fParam2 + IntToFloat(iVar0) * fVar2;
		if (fVar1 > 0f && fVar1 < 0.3f)
		{
			fVar1 = sin(fVar1 * 600f);
			draw_sprite("helicopterhud", "hud_line", fParam4 * IntToFloat(iVar0), fParam5 * IntToFloat(iVar0), fParam6 * fParam11 * 0.01f, fParam6 * fParam11 * 0.01f, get_angle_between_2d_vectors(0f, 1f, fParam7 - fParam8, fParam9 - fParam10), *uParam0.f_150, *uParam0.f_150.f_1, *uParam0.f_150.f_2, floor(fVar1 * 32f), 1);
		}
		iVar0++;
	}
}

void func_453(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	_set_text_entry(sParam2);
	_draw_text(fParam0, fParam1, iParam3);
}

void func_454(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4)
{
	set_text_scale(fParam3, fParam3);
	set_text_colour(iParam0, iParam1, iParam2, 150);
	if (iParam4)
	{
		set_text_dropshadow(5, 0, 0, 0, 255);
	}
	set_text_centre(1);
	set_text_font(0);
}

bool func_455(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 0:
			*iParam2 = *uParam0.f_141;
			*iParam3 = *uParam0.f_141.f_1;
			*iParam4 = *uParam0.f_141.f_2;
			return true;
			break;
		
		case 1:
			*iParam2 = 255;
			*iParam3 = 255;
			*iParam4 = 0;
			return true;
			break;
		
		case 2:
			*iParam2 = *uParam0.f_144;
			*iParam3 = *uParam0.f_144.f_1;
			*iParam4 = *uParam0.f_144.f_2;
			return true;
			break;
		
		case 3:
			*iParam2 = *uParam0.f_147;
			*iParam3 = *uParam0.f_147.f_1;
			*iParam4 = *uParam0.f_147.f_2;
			return true;
			break;
	}
	return false;
}

void func_456(var uParam0, vector3 vParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_455(uParam0, iParam5, &iVar0, &iVar1, &iVar2);
	set_draw_origin(vParam1, 0);
	if (iParam6 != -1)
	{
		iVar0 = iParam6;
		iVar1 = iParam7;
		iVar2 = iParam8;
	}
	fParam4 *= 0.03f;
	draw_sprite("helicopterhud", "hud_corner", -fParam4 * 0.5f, -fParam4, 0.013f, 0.013f, 0f, iVar0, iVar1, iVar2, 200, 1);
	draw_sprite("helicopterhud", "hud_corner", fParam4 * 0.5f, -fParam4, 0.013f, 0.013f, 90f, iVar0, iVar1, iVar2, 200, 1);
	draw_sprite("helicopterhud", "hud_corner", -fParam4 * 0.5f, fParam4, 0.013f, 0.013f, 270f, iVar0, iVar1, iVar2, 200, 1);
	draw_sprite("helicopterhud", "hud_corner", fParam4 * 0.5f, fParam4, 0.013f, 0.013f, 180f, iVar0, iVar1, iVar2, 200, 1);
	clear_draw_origin();
}

bool func_457(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (does_cam_exist(get_rendering_cam()))
	{
		if (is_cam_rendering(get_rendering_cam()))
		{
			vVar1 = {get_cam_coord(get_rendering_cam())};
			iVar0 = 0;
			while (iVar0 < Local_37)
			{
				if (func_458(vVar1, vParam0, Local_37[iVar0 /*13*/][0 /*3*/], Local_37[iVar0 /*13*/][1 /*3*/], Local_37[iVar0 /*13*/][2 /*3*/], Local_37[iVar0 /*13*/][3 /*3*/]))
				{
					return true;
				}
				iVar0++;
			}
		}
	}
	return false;
}

bool func_458(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, vector3 vParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar3 = {func_462(vParam9 - vParam6, vParam12 - vParam6)};
	if (!func_54(vVar3))
	{
		vVar3 = {func_270(vVar3)};
		if (func_461(&vVar0, vParam0, vParam3, vVar3, vParam6))
		{
			if (get_distance_between_coords(vParam0, vVar0, 1) < get_distance_between_coords(vParam0, vParam3, 1))
			{
				if (func_459(vVar0, vParam6, vParam9, vParam12))
				{
					return true;
				}
			}
		}
		vVar3 = {func_462(vParam12 - vParam6, vParam15 - vParam6)};
		vVar3 = {func_270(vVar3)};
		if (!func_54(vVar3))
		{
			if (func_461(&vVar0, vParam0, vParam3, vVar3, vParam6))
			{
				if (get_distance_between_coords(vParam0, vVar0, 1) < get_distance_between_coords(vParam0, vParam3, 1))
				{
					if (func_459(vVar0, vParam6, vParam15, vParam12))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_459(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	
	vVar0 = {vParam9 - vParam3};
	vVar3 = {vParam6 - vParam3};
	vVar6 = {vParam0 - vParam3};
	fVar9 = func_460(vVar0, vVar0);
	fVar10 = func_460(vVar0, vVar3);
	fVar11 = func_460(vVar0, vVar6);
	fVar12 = func_460(vVar3, vVar3);
	fVar13 = func_460(vVar3, vVar6);
	fVar14 = 1f / fVar9 * fVar12 - fVar10 * fVar10;
	fVar15 = fVar12 * fVar11 - fVar10 * fVar13 * fVar14;
	fVar16 = fVar9 * fVar13 - fVar10 * fVar11 * fVar14;
	if ((fVar15 >= 0f && fVar16 >= 0f) && fVar15 + fVar16 < 1f)
	{
		return true;
	}
	return false;
}

float func_460(vector3 vParam0, vector3 vParam1)
{
	return vParam0.x * vParam3.x + vParam0.y * vParam3.y + vParam0.z * vParam3.z;
}

bool func_461(var uParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	vVar0 = {vParam4 - vParam1};
	vVar3 = {vParam1 - vParam10};
	fVar6 = func_460(vParam7, vVar0);
	fVar7 = -func_460(vParam7, vVar3);
	if (absf(fVar6) < 1E-08f)
	{
		return false;
	}
	fVar8 = fVar7 / fVar6;
	*uParam0 = {vParam1 + Vector(fVar8, fVar8, fVar8) * vVar0};
	if (fVar8 < 0f || fVar8 > 1f)
	{
		return false;
	}
	return true;
}

Vector3 func_462(vector3 vParam0, vector3 vParam1)
{
	return vParam0.y * vParam3.z - vParam0.z * vParam3.y, vParam0.z * vParam3.x - vParam0.x * vParam3.z, vParam0.x * vParam3.y - vParam0.y * vParam3.x;
}

bool func_463(var uParam0, int iParam1)
{
	int iVar0;
	
	if (*uParam0.f_46 == 1)
	{
		if (does_entity_exist(*uParam0.f_9))
		{
			iVar0 = 0;
			while (iVar0 < *uParam0.f_85)
			{
				if (func_464(get_entity_coords(*uParam0.f_9, 1), get_entity_coords(iParam1, 1), *(uParam0.f_85[iVar0 /*5*/]), *(uParam0.f_85[iVar0 /*5*/]).f_3))
				{
					return true;
				}
				iVar0++;
			}
		}
	}
	return false;
}

bool func_464(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	vVar4 = {vParam3 - vParam0};
	fVar0 = vVar4.x * vVar4.x + vVar4.y * vVar4.y + vVar4.z * vVar4.z;
	fVar1 = 2f * vVar4.x * vParam0.x - vParam6.x + vVar4.y * vParam0.y - vParam6.y + vVar4.z * vParam0.z - vParam6.z;
	fVar2 = vParam6.x * vParam6.x + vParam6.y * vParam6.y + vParam6.z * vParam6.z;
	fVar2 += vParam0.x * vParam0.x + vParam0.y * vParam0.y + vParam0.z * vParam0.z;
	fVar2 -= 2f * vParam6.x * vParam0.x + vParam6.y * vParam0.y + vParam6.z * vParam0.z;
	fVar2 -= fParam9 * fParam9;
	fVar3 = fVar1 * fVar1 - 4f * fVar0 * fVar2;
	if (absf(fVar0) < 1E-05f || fVar3 <= 0f)
	{
		return false;
	}
	return true;
}

float func_465(var uParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	
	if (!is_entity_dead(iParam1, 0))
	{
		vVar0 = {get_world_position_of_entity_bone(iParam1, 0)};
		if (!is_entity_dead(iParam2, 0))
		{
			fVar3 = get_distance_between_coords(vVar0, get_entity_coords(iParam2, 1), 1);
			fVar4 = *uParam0.f_158 / *uParam0.f_40 * fVar3;
			if (fVar4 < 0.4f)
			{
				fVar4 = 0.4f;
			}
			if (fVar4 > 2f)
			{
				fVar4 = 2f;
			}
			return fVar4;
		}
	}
	return 0f;
}

void func_466(var uParam0, vector3 vParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;
	Vector3 fVar9;
	float fVar10;
	Vector3 fVar11;
	float fVar12;
	float fVar13;
	
	if (does_cam_exist(get_rendering_cam()))
	{
		if (!_world3d_to_screen2d(vParam1, &uVar0, &uVar0))
		{
			vVar1 = {get_cam_coord(get_rendering_cam())};
			vVar4 = {get_cam_rot(get_rendering_cam(), 2)};
			fVar7 = get_distance_between_coords(vVar1.x, vVar1.y, 0f, vParam1.x, vParam1.y, 0f, 1);
			fVar8 = vParam1.z - vVar1.z;
			if (fVar7 > 0f)
			{
				fVar9 = atan(fVar8 / fVar7);
			}
			else
			{
				fVar9 = 0f;
			}
			fVar10 = func_467(vVar1, vParam1, 0);
			fVar11 = atan2(cos(vVar4.x) * sin(fVar9) - sin(vVar4.x) * cos(fVar9) * cos(fVar10 * -1f - vVar4.z), sin(fVar10 * -1f - vVar4.z) * cos(fVar9));
			if (*uParam0.f_10 > 0f)
			{
			}
			fVar12 = 0.5f - cos(fVar11) * 0.29f;
			fVar13 = 0.5f - sin(fVar11) * 0.29f;
			draw_sprite("helicopterhud", "hudArrow", fVar12, fVar13, 0.02f, 0.04f, fVar11 - 90f, iParam4, iParam5, iParam6, 255, 1);
			set_text_centre(1);
		}
	}
}

float func_467(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, int iParam4)
{
	float fVar0;
	Vector3 fVar1;
	Vector3 fVar2;
	
	fVar1 = Param3 - Param0;
	fVar2 = Param3.f_1 - Param0.f_1;
	if (fVar2 != 0f)
	{
		fVar0 = atan2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	{
		{
