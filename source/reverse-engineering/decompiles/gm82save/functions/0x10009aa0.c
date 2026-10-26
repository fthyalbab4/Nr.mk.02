// rea decompile_all
// name: FUN_10009aa0
// address: 0x10009aa0
// body: available
// range: 0x10009aa0-0x10009c7b inclusive
// range: 0x10009c80-0x10009f4b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10009aa0(char *param_1,int param_2,uint *param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  LPVOID pvVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  BOOL BVar7;
  uint extraout_EDX;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint uStack_cc;
  LARGE_INTEGER LStack_c8;
  char *local_bc;
  uint uStack_b8;
  uint *puStack_b4;
  uint uStack_b0;
  int iStack_ac;
  uint uStack_a8;
  int iStack_a4;
  int iStack_a0;
  code *local_9c;
  char cStack_98;
  undefined3 uStack_97;
  DWORD DStack_94;
  LONG LStack_90;
  undefined5 uStack_8c;
  undefined8 uStack_87;
  undefined7 uStack_7f;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  int iStack_5c;
  undefined *puStack_58;
  code **ppcStack_54;
  uint *puStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined7 uStack_30;
  undefined4 uStack_29;
  undefined4 auStack_20 [4];

  local_9c = FUN_1005b150;
  local_bc = param_1;
  FUN_10111020(param_3,&DAT_101402c1,9);
  iVar10 = *(int *)(param_2 + 0x28);
  _DAT_0077f4f4 = iVar10;
  (*(code *)0x409be0)(iVar10);
  (*(code *)0x409be0)(iVar10);
  (*(code *)0x409be0)(iVar10);
  (*(code *)0x409be0)(iVar10);
  ppcStack_54 = &local_9c;
  puStack_58 = &DAT_101404a8;
  puStack_50 = param_3;
  uStack_4c = param_4;
  iStack_ac = iVar10;
  iStack_5c = param_2 + 0x20;
  if (iVar10 != 0) {
    pvVar4 = FUN_10107380(0,0x140);
    if (pvVar4 == (LPVOID)0x0) {
      FUN_1013679e(0x40,0x100);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    iVar10 = 0;
    uVar8 = (uint)pvVar4 & 0xffffffc0;
    *(LPVOID *)(uVar8 + 0x3c) = pvVar4;
    *(undefined4 *)(uVar8 + 0x40) = 0;
    *(undefined4 *)(uVar8 + 0x44) = 0;
    *(undefined4 *)(uVar8 + 0x80) = 0;
    *(undefined4 *)(uVar8 + 0x84) = 0;
    *(undefined4 *)(uVar8 + 0xc0) = 0;
    *(undefined4 *)(uVar8 + 0xc4) = 0;
    *(undefined4 *)(uVar8 + 200) = 4;
    *(undefined4 *)(uVar8 + 0xcc) = 0;
    *(undefined4 *)(uVar8 + 0xd0) = 0;
    *(undefined4 *)(uVar8 + 0xd4) = 4;
    *(undefined4 *)(uVar8 + 0xd8) = 0;
    *(undefined1 *)(uVar8 + 0xdc) = 1;
    *(undefined4 *)(uVar8 + 0x100) = 1;
    *(undefined4 *)(uVar8 + 0x104) = 1;
    *(undefined1 *)(uVar8 + 0x108) = 0;
    puVar5 = FUN_10107380(0,0xc);
    if (puVar5 == (undefined4 *)0x0) {
      FUN_1013679e(4,0xc);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    puVar9 = (uint *)(uVar8 + 0x40);
    *puVar5 = 1;
    puVar5[1] = puVar9;
    puVar5[2] = &iStack_5c;
    FUN_100190a0(auStack_20,puVar5,&PTR_LAB_1013f16c);
    puStack_b4 = puVar9;
    while( true ) {
      while( true ) {
        uStack_70 = 0;
        uStack_78 = 0;
        uStack_74 = 0;
        uVar6 = FUN_1004e150(puVar9,(int)&cStack_98);
        if ((char)uVar6 != '\0') break;
        (*(code *)0x6ca2ac)();
        uVar15 = CONCAT44(DAT_101633b8._4_4_,(int)DAT_101633b8);
        if ((int)DAT_101633b8 == 0 && DAT_101633b8._4_4_ == 0) {
          uVar15 = FUN_1013c290();
        }
        uVar8 = (uint)((ulonglong)uVar15 >> 0x20);
        uStack_cc = (uint)uVar15;
        LStack_c8.s.HighPart = 0;
        LStack_c8.s.LowPart = 0;
        iStack_a0 = iVar10;
        BVar7 = QueryPerformanceCounter(&LStack_c8);
        if (BVar7 == 0) {
          DStack_94 = GetLastError();
          _cStack_98 = 0;
          FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&cStack_98,
                       &PTR_FUN_101569a8,&PTR_s_C__Users_runneradmin__rustup_too_10158df8);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uStack_b8 = LStack_c8.s.LowPart;
        uStack_a8 = LStack_c8.s.HighPart;
        uStack_b0 = uVar8;
        uVar12 = __aulldiv(LStack_c8.s.LowPart,LStack_c8.s.HighPart,uStack_cc,uVar8);
        iStack_a4 = (int)(uVar12 >> 0x20) * 1000000000;
        lVar13 = uVar12 * CONCAT44(uStack_b0,uStack_cc);
        uVar8 = (uint)lVar13;
        bVar2 = uStack_b8 < uVar8;
        uVar8 = uStack_b8 - uVar8;
        lVar14 = (uVar12 & 0xffffffff) * 1000000000;
        uStack_b8 = (uint)lVar14;
        iVar10 = (int)((ulonglong)lVar14 >> 0x20) + iStack_a4;
        lVar14 = (ulonglong)uVar8 * 1000000000;
        lVar13 = __aulldiv((uint)lVar14,
                           (int)((ulonglong)lVar14 >> 0x20) +
                           ((uStack_a8 - (int)((ulonglong)lVar13 >> 0x20)) - (uint)bVar2) *
                           1000000000,uStack_cc,uStack_b0);
        lVar13 = lVar13 + CONCAT44(iVar10,uStack_b8);
        lVar14 = lVar13 + 0x3fffffffffffffff;
        uVar11 = (uint)lVar14;
        lVar14 = __aulldiv(uVar11,(uint)((ulonglong)lVar14 >> 0x20),1000000000,0);
        puVar9 = puStack_b4;
        uVar11 = uVar11 + (int)lVar14 * -1000000000;
        uVar8 = (int)lVar13 + 19999999 + (int)lVar14 * -1000000000;
        if (979999999 < uVar11) {
          uVar8 = uVar11 + 0xc5966300;
        }
        lVar14 = lVar14 + (ulonglong)(979999999 < uVar11);
        cVar3 = FUN_1004e780(puStack_b4,(uint)lVar14,(uint)((ulonglong)lVar14 >> 0x20),uVar8);
        iVar10 = iStack_a0 + (uint)(cVar3 == '\x02');
      }
      bVar2 = FUN_1004e300((LPVOID)uStack_70,uStack_70._4_4_);
      if (bVar2) break;
      iVar10 = iVar10 + 1;
    }
    FUN_1004ec40(&cStack_98,auStack_20);
    if (cStack_98 == -2) {
      LStack_c8.s.LowPart = DStack_94;
      LStack_c8.s.HighPart = LStack_90;
      FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&LStack_c8,&PTR_LAB_1013f0dc,
                   &PTR_s_src_lib_rs_1013f0ec);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uStack_48 = CONCAT17((undefined1)LStack_90,CONCAT43(DStack_94,uStack_97));
    uStack_38 = uStack_87;
    uStack_40 = CONCAT53(uStack_8c,LStack_90._1_3_);
    uStack_30 = uStack_7f;
    uStack_29 = uStack_78;
    FUN_10004630(puStack_b4);
    if (cStack_98 != -1) {
      *(undefined8 *)(local_bc + 0x11) = uStack_38;
      *(undefined4 *)(local_bc + 0x20) = uStack_29;
      *(ulonglong *)(local_bc + 0x19) = CONCAT17((undefined1)uStack_29,uStack_30);
      *(undefined8 *)(local_bc + 1) = uStack_48;
      *(undefined8 *)(local_bc + 9) = uStack_40;
      goto LAB_10009eb8;
    }
  }
  iVar10 = FUN_10110f10((byte *)param_3[1],param_3[2]);
  cStack_98 = -1;
  if (iVar10 != 0) {
    FUN_10110e70((int)param_3,extraout_EDX);
  }
LAB_10009eb8:
  *local_bc = cStack_98;
  return;
}
