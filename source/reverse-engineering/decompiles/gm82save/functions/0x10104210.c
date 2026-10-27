// rea decompile_all
// name: FUN_10104210
// address: 0x10104210
// body: available
// range: 0x10104210-0x1010429d inclusive
// range: 0x101042a0-0x101043c5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __fastcall FUN_10104210(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  byte bVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  undefined1 *puVar18;

  iVar16 = *param_1;
  if (iVar16 == 0) {
    if ((undefined4 *)param_1[4] == (undefined4 *)0x0) {
      return 0;
    }
    uVar5 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"?",(undefined1 *)0x1);
    return uVar5;
  }
  uVar14 = param_1[1];
  uVar3 = param_1[2];
  if ((uVar3 < uVar14) && (*(char *)(iVar16 + uVar3) == '_')) {
    uVar14 = 0;
    param_1[2] = uVar3 + 1;
    if (uVar3 == 1) goto LAB_10104349;
LAB_10104323:
    puVar8 = (undefined4 *)param_1[4];
    if (param_1[3] + 1U < 0x1f5) {
      if (puVar8 == (undefined4 *)0x0) {
        return 0;
      }
      uVar1 = *(undefined8 *)param_1;
      uVar2 = *(undefined8 *)(param_1 + 2);
      param_1[2] = uVar14;
      param_1[3] = param_1[3] + 1U;
      uVar5 = FUN_101018c0(param_1);
      *(undefined8 *)param_1 = uVar1;
      *(undefined8 *)(param_1 + 2) = uVar2;
      return uVar5;
    }
    iVar16 = 1;
    if (puVar8 == (undefined4 *)0x0) goto LAB_1010436e;
    pcVar12 = "{recursion limit reached}";
    puVar18 = (undefined1 *)0x19;
  }
  else {
    if (uVar14 < uVar3) {
      uVar14 = uVar3;
    }
    uVar15 = 0;
    uVar9 = 0;
    uVar13 = uVar3;
    while (uVar14 != uVar13) {
      cVar4 = *(char *)(iVar16 + uVar13);
      if (cVar4 == '_') {
        param_1[2] = uVar13 + 1;
        if (((uVar15 & uVar9) != 0xffffffff) &&
           (uVar14 = uVar15 + 1, uVar9 + (0xfffffffe < uVar15) < (uint)(uVar14 < uVar3 - 1)))
        goto LAB_10104323;
        break;
      }
      bVar7 = cVar4 - 0x30;
      if (9 < bVar7) {
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          bVar7 = cVar4 + 0xa9;
        }
        else {
          if (0x19 < (byte)(cVar4 + 0xbfU)) break;
          bVar7 = cVar4 - 0x1d;
        }
      }
      uVar13 = uVar13 + 1;
      param_1[2] = uVar13;
      bVar17 = (int)((ulonglong)uVar9 * 0x3e >> 0x20) != 0;
      uVar9 = (uint)((ulonglong)uVar9 * 0x3e);
      uVar10 = (uint)((ulonglong)uVar15 * 0x3e >> 0x20);
      uVar6 = (uint)((ulonglong)uVar15 * 0x3e);
      uVar11 = uVar10 + uVar9;
      if (CARRY4(uVar10,uVar9) || bVar17) break;
      uVar9 = CONCAT11(bVar17,bVar7) & 0xff;
      uVar15 = uVar6 + uVar9;
      uVar6 = (uint)CARRY4(uVar6,uVar9);
      uVar9 = uVar11 + uVar6;
      if (CARRY4(uVar11,uVar6)) break;
    }
LAB_10104349:
    iVar16 = 0;
    puVar8 = (undefined4 *)param_1[4];
    if (puVar8 == (undefined4 *)0x0) goto LAB_1010436e;
    pcVar12 = "{invalid syntax}";
    puVar18 = &DAT_00000010;
  }
  cVar4 = FUN_10093f00(puVar8,(undefined1 (*) [16])pcVar12,puVar18);
  if (cVar4 != '\0') {
    return 1;
  }
LAB_1010436e:
  *param_1 = 0;
  param_1[1] = iVar16;
  return 0;
}
