// rea decompile_all
// name: FUN_10100e20
// address: 0x10100e20
// body: available
// range: 0x10100e20-0x10100ebd inclusive
// range: 0x10100ec0-0x10100fe9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __fastcall FUN_10100e20(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  undefined4 *puVar9;
  char in_DL;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;

  iVar17 = *param_1;
  if (iVar17 == 0) {
    if ((undefined4 *)param_1[4] == (undefined4 *)0x0) {
      return 0;
    }
    uVar5 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"?",(undefined1 *)0x1);
    return uVar5;
  }
  uVar15 = param_1[1];
  uVar3 = param_1[2];
  if ((uVar3 < uVar15) && (*(char *)(iVar17 + uVar3) == '_')) {
    uVar15 = 0;
    param_1[2] = uVar3 + 1;
    if (uVar3 == 1) goto LAB_10100f68;
LAB_10100f42:
    puVar9 = (undefined4 *)param_1[4];
    if (param_1[3] + 1U < 0x1f5) {
      if (puVar9 == (undefined4 *)0x0) {
        return 0;
      }
      uVar1 = *(undefined8 *)param_1;
      uVar2 = *(undefined8 *)(param_1 + 2);
      param_1[2] = uVar15;
      param_1[3] = param_1[3] + 1U;
      uVar5 = FUN_101006c0(param_1,in_DL);
      *(undefined8 *)param_1 = uVar1;
      *(undefined8 *)(param_1 + 2) = uVar2;
      return uVar5;
    }
    iVar17 = 1;
    if (puVar9 == (undefined4 *)0x0) goto LAB_10100f8d;
    pcVar13 = "{recursion limit reached}";
    puVar18 = (undefined1 *)0x19;
  }
  else {
    if (uVar15 < uVar3) {
      uVar15 = uVar3;
    }
    uVar16 = 0;
    uVar10 = 0;
    uVar14 = uVar3;
    while (uVar15 != uVar14) {
      cVar4 = *(char *)(iVar17 + uVar14);
      if (cVar4 == '_') {
        param_1[2] = uVar14 + 1;
        if (((uVar16 & uVar10) != 0xffffffff) &&
           (uVar15 = uVar16 + 1, uVar10 + (0xfffffffe < uVar16) < (uint)(uVar15 < uVar3 - 1)))
        goto LAB_10100f42;
        break;
      }
      bVar8 = cVar4 - 0x30;
      if (9 < bVar8) {
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          bVar8 = cVar4 + 0xa9;
        }
        else {
          if (0x19 < (byte)(cVar4 + 0xbfU)) break;
          bVar8 = cVar4 - 0x1d;
        }
      }
      uVar14 = uVar14 + 1;
      param_1[2] = uVar14;
      uVar6 = (uint)((ulonglong)uVar10 * 0x3e);
      uVar11 = (uint)((ulonglong)uVar16 * 0x3e >> 0x20);
      uVar7 = (uint)((ulonglong)uVar16 * 0x3e);
      uVar12 = uVar11 + uVar6;
      if (CARRY4(uVar11,uVar6) || (int)((ulonglong)uVar10 * 0x3e >> 0x20) != 0) break;
      uVar16 = uVar7 + bVar8;
      uVar6 = (uint)CARRY4(uVar7,(uint)bVar8);
      uVar10 = uVar12 + uVar6;
      if (CARRY4(uVar12,uVar6)) break;
    }
LAB_10100f68:
    iVar17 = 0;
    puVar9 = (undefined4 *)param_1[4];
    if (puVar9 == (undefined4 *)0x0) goto LAB_10100f8d;
    pcVar13 = "{invalid syntax}";
    puVar18 = &DAT_00000010;
  }
  cVar4 = FUN_10093f00(puVar9,(undefined1 (*) [16])pcVar13,puVar18);
  if (cVar4 != '\0') {
    return 1;
  }
LAB_10100f8d:
  *param_1 = 0;
  param_1[1] = iVar17;
  return 0;
}
