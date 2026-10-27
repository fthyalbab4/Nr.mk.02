// rea decompile_all
// name: FUN_10101120
// address: 0x10101120
// body: available
// range: 0x10101120-0x10101300 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10101120(int *param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;

  uVar9 = param_2[1];
  uVar8 = param_2[2];
  if ((uVar8 < uVar9) && (*(char *)(*param_2 + uVar8) == 'u')) {
    uVar8 = uVar8 + 1;
    bVar3 = true;
    param_2[2] = uVar8;
  }
  else {
    bVar3 = false;
  }
  if (uVar9 <= uVar8) {
LAB_101011da:
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  iVar7 = *param_2;
  bVar4 = *(char *)(iVar7 + uVar8) - 0x30;
  if (9 < bVar4) goto LAB_101011da;
  uVar8 = uVar8 + 1;
  param_2[2] = uVar8;
  if (bVar4 != 0) {
    uVar5 = (uint)bVar4;
    do {
      uVar6 = uVar9;
      if (uVar9 == uVar8) goto LAB_101011cd;
      bVar4 = *(char *)(iVar7 + uVar8) - 0x30;
      if (9 < bVar4) goto joined_r0x101011b1;
      uVar8 = uVar8 + 1;
      uVar6 = (uint)((ulonglong)uVar5 * 10);
      param_2[2] = uVar8;
    } while (((int)((ulonglong)uVar5 * 10 >> 0x20) == 0) &&
            (uVar5 = uVar6 + bVar4, !CARRY4(uVar6,(uint)bVar4)));
    goto LAB_101012c4;
  }
  uVar5 = 0;
joined_r0x101011b1:
  uVar6 = uVar8;
  if ((uVar8 < uVar9) && (*(char *)(iVar7 + uVar8) == '_')) {
    param_2[2] = uVar8 + 1;
    uVar6 = uVar8 + 1;
  }
LAB_101011cd:
  uVar8 = uVar6 + uVar5;
  if ((CARRY4(uVar6,uVar5)) || (param_2[2] = uVar8, uVar9 < uVar8)) goto LAB_101011da;
  if (((uVar6 != 0 && uVar6 < uVar9) && (*(char *)(iVar7 + uVar6) < -0x40)) ||
     ((uVar8 != 0 && uVar8 < uVar9 && (*(char *)(iVar7 + uVar8) < -0x40)))) {
    FUN_10136b90(iVar7,uVar9,uVar6,uVar8,&PTR_s_C__Users_runneradmin__cargo_regi_10155ebc);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  iVar1 = iVar7 + uVar6;
  if (!bVar3) {
    *param_1 = iVar1;
    param_1[1] = uVar5;
    param_1[2] = 1;
    param_1[3] = 0;
    return;
  }
  uVar9 = uVar5;
  do {
    uVar8 = uVar9;
    if (uVar8 == 0) {
      uVar9 = 0;
      iVar7 = iVar1;
      iVar1 = 1;
      goto joined_r0x10101274;
    }
    uVar9 = uVar8 - 1;
  } while (*(char *)((uVar6 - 1) + iVar7 + uVar8) != '_');
  if (uVar9 == 0) {
LAB_1010128f:
    if (uVar8 < uVar5) {
      uVar6 = uVar8;
      if (*(char *)(iVar1 + uVar8) < -0x40) {
LAB_101012a1:
        FUN_10136b90(iVar1,uVar5,uVar8,uVar5,&PTR_s_C__Users_runneradmin__cargo_regi_10155edc);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      uVar6 = uVar5;
      if (uVar8 != uVar5) goto LAB_101012a1;
    }
  }
  else {
    if (uVar9 < uVar5) {
      if (*(char *)(iVar1 + uVar9) < -0x40) goto LAB_101012eb;
      goto LAB_1010128f;
    }
    if (uVar9 != uVar5) {
LAB_101012eb:
      FUN_10136b90(iVar1,uVar5,0,uVar9,&PTR_s_C__Users_runneradmin__cargo_regi_10155ecc);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (uVar8 != 0) goto LAB_1010128f;
    uVar6 = 0;
  }
  uVar5 = uVar5 - uVar6;
  iVar7 = uVar6 + iVar1;
joined_r0x10101274:
  if (uVar5 != 0) {
    *param_1 = iVar1;
    param_1[1] = uVar9;
    param_1[2] = iVar7;
    param_1[3] = uVar5;
    return;
  }
LAB_101012c4:
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}
