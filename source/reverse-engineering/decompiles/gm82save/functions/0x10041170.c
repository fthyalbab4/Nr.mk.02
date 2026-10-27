// rea decompile_all
// name: FUN_10041170
// address: 0x10041170
// body: available
// range: 0x10041170-0x10041488 inclusive
// range: 0x100414a0-0x10041522 inclusive
// range: 0x10041530-0x10041588 inclusive
// range: 0x10041590-0x100415c3 inclusive
// range: 0x100415e0-0x100415f8 inclusive
// range: 0x1004164c-0x100419aa inclusive
// range: 0x100419e1-0x100419f4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x1004182a) */
/* WARNING: Removing unreachable block (ram,0x100411d5) */
/* WARNING: Removing unreachable block (ram,0x1004199b) */
/* WARNING: Removing unreachable block (ram,0x100411e4) */
/* WARNING: Removing unreachable block (ram,0x1004147d) */
/* WARNING: Removing unreachable block (ram,0x100414a8) */
/* WARNING: Removing unreachable block (ram,0x100414b0) */
/* WARNING: Removing unreachable block (ram,0x100414bf) */
/* WARNING: Removing unreachable block (ram,0x1004187e) */
/* WARNING: Removing unreachable block (ram,0x100414ce) */
/* WARNING: Removing unreachable block (ram,0x100414f0) */
/* WARNING: Removing unreachable block (ram,0x1004164c) */
/* WARNING: Removing unreachable block (ram,0x100414fa) */
/* WARNING: Removing unreachable block (ram,0x10041530) */
/* WARNING: Removing unreachable block (ram,0x100414fc) */
/* WARNING: Removing unreachable block (ram,0x1004151e) */
/* WARNING: Removing unreachable block (ram,0x1004188a) */
/* WARNING: Removing unreachable block (ram,0x1004153f) */
/* WARNING: Removing unreachable block (ram,0x10041590) */
/* WARNING: Removing unreachable block (ram,0x100415b4) */
/* WARNING: Removing unreachable block (ram,0x1004156f) */
/* WARNING: Removing unreachable block (ram,0x1004157f) */
/* WARNING: Removing unreachable block (ram,0x10041587) */
/* WARNING: Removing unreachable block (ram,0x100415e0) */
/* WARNING: Removing unreachable block (ram,0x10041660) */
/* WARNING: Removing unreachable block (ram,0x10041893) */
/* WARNING: Removing unreachable block (ram,0x100415e4) */
/* WARNING: Removing unreachable block (ram,0x100418be) */
/* WARNING: Removing unreachable block (ram,0x100414a0) */
/* WARNING: Removing unreachable block (ram,0x100411c4) */

int * FUN_10041170(void)

{
  code *pcVar1;
  int *lpMem;
  undefined8 uVar2;
  int *piVar3;
  LPVOID pvVar4;
  HANDLE pvVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined1 uStack_15a9;
  undefined4 uStack_15a8;
  undefined4 uStack_15a4;
  undefined4 local_159c;
  int iStack_1598;
  uint uStack_1594;
  int *piStack_1590;
  int *piStack_158c;
  undefined4 uStack_1588;
  undefined4 uStack_1584;
  undefined4 uStack_1580;
  undefined4 uStack_157c;
  undefined4 uStack_1578;
  undefined4 uStack_1574;
  undefined8 uStack_1570;
  int *piStack_1560;
  int *piStack_155c;
  undefined4 uStack_1558;
  undefined4 uStack_1554;
  undefined4 uStack_1550;
  undefined4 uStack_154c;
  undefined4 uStack_1548;
  undefined4 uStack_1544;
  undefined8 uStack_1540;
  undefined8 uStack_1538;
  undefined8 uStack_1530;
  undefined4 uStack_1528;
  undefined4 *puStack_1524;
  undefined1 *puStack_1520;
  undefined *puStack_151c;
  undefined4 uStack_1518;
  undefined4 uStack_1514;
  undefined4 uStack_1510;
  undefined4 uStack_150c;
  int *piStack_1508;
  undefined4 uStack_1504;
  LPVOID pvStack_1500;
  undefined4 uStack_14fc;
  undefined4 uStack_14f0;
  int *piStack_14ec;
  undefined4 uStack_14e8;
  undefined4 uStack_14e4;
  undefined4 uStack_14e0;
  undefined4 uStack_14dc;
  undefined4 uStack_14d8;
  undefined4 uStack_14d4;
  undefined4 uStack_14d0;
  undefined4 uStack_14cc;
  undefined4 uStack_14c8;
  undefined4 uStack_14c4;
  undefined4 uStack_14c0;
  undefined4 uStack_14bc;
  undefined4 uStack_14b8;
  undefined4 *puStack_14b4;
  undefined1 *puStack_14b0;
  code *pcStack_14ac;
  undefined4 uStack_14a8;
  undefined4 uStack_14a4;
  undefined4 uStack_14a0;
  undefined4 uStack_149c;
  int *piStack_1498;
  int iStack_1494;
  ulonglong uStack_1490;
  undefined4 uStack_14;

  uStack_14 = 0x10041183;
  local_159c = 0x10041188;
  piVar3 = (int *)(*(code *)0x405a4c)();
  (*(code *)0x43f488)();
  uStack_15a8 = 0;
  uStack_15a4 = 1;
  (*(code *)0x43f488)();
  memset((void *)((int)&uStack_14f0 + 3),0,0x14d0);
  pvVar4 = FUN_10107380(0,0xb940);
  if (pvVar4 == (LPVOID)0x0) {
    uStack_14f0 = (int *)0xfffffffc;
    FUN_1013d611(&uStack_14f0,&PTR_s_C__Users_runneradmin__cargo_regi_1015bb68);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uVar6 = (uint)pvVar4 & 0xffffffc0;
  *(LPVOID *)(uVar6 + 0x3c) = pvVar4;
  puVar7 = (undefined4 *)(uVar6 + 0x40);
  *puVar7 = 0x400;
  *(undefined1 *)(uVar6 + 0x44) = 0;
  *(uint *)(uVar6 + 0x48) = uVar6 + 0x38c0;
  *(undefined4 *)(uVar6 + 0x4c) = 0x8040;
  *(char (*) [4])(uVar6 + 0x70) = (char  [4])0x0;
  *(undefined4 *)(uVar6 + 0x74) = 0;
  *(undefined4 *)(uVar6 + 0x78) = 1;
  *(undefined4 *)(uVar6 + 0x7c) = 1;
  *(undefined4 *)(uVar6 + 0x68) = 0;
  *(undefined8 *)(uVar6 + 0x50) = 0;
  *(undefined8 *)(uVar6 + 0x58) = 0;
  *(undefined8 *)(uVar6 + 0x60) = 0;
  *(undefined1 *)(uVar6 + 0x80) = 0;
  *(undefined4 *)(uVar6 + 0x88) = 1;
  *(undefined8 *)(uVar6 + 0x8c) = 0;
  *(undefined8 *)(uVar6 + 0x94) = 0;
  *(undefined8 *)(uVar6 + 0x9c) = 0;
  *(undefined8 *)(uVar6 + 0xa4) = 0;
  *(undefined4 *)(uVar6 + 0xac) = 0x20;
  *(undefined4 *)(uVar6 + 0xdc) = 0;
  *(undefined1 *)(uVar6 + 0xe0) = 0;
  *(undefined8 *)(uVar6 + 0xc0) = 0;
  *(undefined4 *)(uVar6 + 0xb0) = 0;
  *(undefined4 *)(uVar6 + 0xb4) = 0;
  *(undefined4 *)(uVar6 + 0xb8) = 0;
  *(undefined4 *)(uVar6 + 0xbc) = 0;
  *(undefined8 *)(uVar6 + 0xcc) = 0;
  *(undefined8 *)(uVar6 + 0xd1) = 0;
  memcpy((void *)(uVar6 + 0xe1),&uStack_14f0,0x14d3);
  memset((void *)(uVar6 + 0x15b4),0,0x22d8);
  *(uint *)(uVar6 + 0x3884) = uVar6 + 0x40;
  *(undefined4 *)(uVar6 + 0x3888) = 0xb900;
  *(undefined4 *)(uVar6 + 0x54) = 0;
  *(undefined4 *)(uVar6 + 0x94) = 0;
  *(undefined4 *)(uVar6 + 0xbc) = 1;
  *puVar7 = 0x50f0400;
  *(undefined4 *)(uVar6 + 0xb8) = 0xffffffff;
  *(undefined4 *)(uVar6 + 0xd0) = 0x8000;
  *(undefined4 *)(uVar6 + 0x74) = 0;
  *(undefined4 *)(uVar6 + 0x70) = 0;
  *(undefined4 *)(uVar6 + 0x78) = 1;
  *(undefined1 *)(uVar6 + 0x80) = 0;
  *(undefined4 *)(uVar6 + 0xd4) = 0;
  *(undefined4 *)(uVar6 + 0xdc) = 0;
  *(undefined1 *)(uVar6 + 0xe0) = 0;
  *(undefined4 *)(uVar6 + 0xa4) = 0xffffffff;
  uStack_14d0 = 0;
  uStack_14cc = 0;
  uStack_1570 = 0;
  piStack_1590 = (int *)0x0;
  piStack_158c = (int *)0x0;
  uStack_1588 = 0;
  uStack_1584 = 0;
  uStack_1580 = 0;
  uStack_157c = 0;
  uStack_1578 = 0;
  uStack_1574 = 0;
  pvStack_1500 = FUN_10107380(0,0x8000);
  if (pvStack_1500 == (LPVOID)0x0) {
    FUN_101366bc(1);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  uStack_14fc = 0;
  uStack_1504 = 0x8000;
  uStack_150c = 0;
  uStack_1510 = 1;
  uStack_1514 = 0;
  uStack_1518 = 0;
  puStack_151c = &DAT_101210f0;
  puStack_1520 = &LAB_10121080;
  uStack_1528 = 0;
  uStack_1530 = 0;
  uStack_1538 = 0;
  uStack_1540 = uStack_1570;
  uVar2 = uStack_1540;
  uStack_1544 = uStack_1574;
  uStack_1548 = uStack_1578;
  uStack_154c = uStack_157c;
  uStack_1550 = uStack_1580;
  uStack_1554 = uStack_1584;
  uStack_1558 = uStack_1588;
  piStack_155c = piStack_158c;
  piStack_1560 = piStack_1590;
  uStack_1490 = ZEXT48(pvStack_1500);
  uStack_14a0 = 1;
  uStack_149c = 0;
  iStack_1494 = 0x8000;
  puStack_14b0 = &LAB_10121080;
  pcStack_14ac = (code *)&DAT_101210f0;
  uStack_14a8 = 0;
  uStack_14a4 = 0;
  uStack_1540._0_4_ = (undefined4)uStack_1570;
  uStack_1540._4_4_ = (undefined4)((ulonglong)uStack_1570 >> 0x20);
  uStack_14c0 = 0;
  uStack_14bc = 0;
  uStack_14b8 = 0;
  uStack_14d0 = (undefined4)uStack_1540;
  uStack_14cc = uStack_1540._4_4_;
  uStack_14c8 = 0;
  uStack_14c4 = 0;
  uStack_14e0 = uStack_1580;
  uStack_14dc = uStack_157c;
  uStack_14d8 = uStack_1578;
  uStack_14d4 = uStack_1574;
  uStack_14f0 = piStack_1590;
  piStack_14ec = piStack_158c;
  uStack_14e8 = uStack_1588;
  uStack_14e4 = uStack_1584;
  uStack_1540 = uVar2;
  puStack_1524 = puVar7;
  piStack_1508 = piVar3;
  puStack_14b4 = puVar7;
  piStack_1498 = piVar3;
  FUN_1004f5f0(&piStack_1590,(undefined *)&uStack_14f0);
  piVar3 = piStack_158c;
  if ((char)piStack_1590 == -1) {
    if (piStack_1498 == (int *)0x0) {
      FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101411ac);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    piVar8 = (int *)0xff;
    piVar3 = piStack_1498;
  }
  else {
    piVar8 = piStack_1590;
    if (piStack_1498 != (int *)0x0) {
      FUN_1004f5f0(&piStack_1590,(undefined *)&uStack_14f0);
      lpMem = piStack_158c;
      if ((char)piStack_1590 == '\x03') {
        puVar7 = (undefined4 *)piStack_158c[1];
        pvVar4 = (LPVOID)*piStack_158c;
        if ((code *)*puVar7 != (code *)0x0) {
          (*(code *)*puVar7)(pvVar4);
        }
        if (puVar7[1] != 0) {
          if (8 < (uint)puVar7[2]) {
            pvVar4 = *(LPVOID *)((int)pvVar4 + -4);
          }
          pvVar5 = GetProcessHeap();
          HeapFree(pvVar5,0,pvVar4);
        }
        pvVar5 = GetProcessHeap();
        HeapFree(pvVar5,0,lpMem);
      }
      if (piStack_1498 != (int *)0x0) {
        (*(code *)0x405a7c)();
      }
    }
  }
  iStack_1598 = puStack_14b4[0xe11];
  uStack_1594 = puStack_14b4[0xe12];
  puStack_14b4[2] = 1;
  puStack_14b4[3] = 0;
  puStack_14b4[4] = 0;
  puStack_14b4[5] = 0;
  if (iStack_1598 != 0) {
    if (pcStack_14ac == (code *)&DAT_101210f0) {
      if (uStack_1594 == 0) {
        piStack_1590 = &iStack_1598;
        piStack_158c = (int *)&LAB_101092d0;
        FUN_101369ea(1,&uStack_1594,&DAT_10159960,0x10159964,&piStack_1590,
                     &PTR_s_C__Users_runneradmin__cargo_regi_101599e0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (0x7fffffc0 < uStack_1594) {
        FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&uStack_15a9,&DAT_1015ddb8,
                     &PTR_s_C__Users_runneradmin__cargo_regi_1015ddc8);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      pvVar4 = *(LPVOID *)(iStack_1598 + -4);
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,pvVar4);
    }
    else {
      (*pcStack_14ac)(uStack_14a8,*(undefined4 *)(iStack_1598 + -4));
    }
  }
  if (iStack_1494 != 0) {
    pvVar4 = (LPVOID)uStack_1490;
    pvVar5 = GetProcessHeap();
    HeapFree(pvVar5,0,pvVar4);
  }
  if ((char)piVar8 == -1) {
    (*(code *)0x43f254)(0,0);
    return piVar3;
  }
  uStack_14f0 = piVar8;
  piStack_14ec = piVar3;
  FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&uStack_14f0,&PTR_FUN_1013f548,
               &PTR_s_src_lib_rs_101406a4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
