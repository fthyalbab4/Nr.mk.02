// rea decompile_all
// name: FUN_10104c20
// address: 0x10104c20
// body: available
// range: 0x10104c20-0x10104d11 inclusive
// range: 0x10104d20-0x10104e9b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char __fastcall FUN_10104c20(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  undefined1 *puVar19;

  iVar17 = *param_1;
  if (iVar17 == 0) {
LAB_10104c78:
    cVar4 = FUN_101006c0(param_1,'\0');
    return cVar4 * '\x02';
  }
  uVar14 = param_1[1];
  uVar3 = param_1[2];
  if (uVar14 <= uVar3) goto LAB_10104c78;
  if (*(char *)(iVar17 + uVar3) == 'I') {
    param_1[2] = uVar3 + 1;
    cVar4 = FUN_101006c0(param_1,'\0');
    if ((cVar4 == '\0') &&
       (((undefined4 *)param_1[4] == (undefined4 *)0x0 ||
        (cVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"<",(undefined1 *)0x1),
        cVar4 == '\0')))) {
      iVar17 = *param_1;
      if (iVar17 == 0) {
        return '\x01';
      }
      iVar16 = 0;
      while( true ) {
        uVar14 = param_1[2];
        if ((uVar14 < (uint)param_1[1]) && (*(char *)(iVar17 + uVar14) == 'E')) {
          param_1[2] = uVar14 + 1;
          return '\x01';
        }
        bVar18 = iVar16 != 0;
        iVar16 = iVar16 + -1;
        if ((((bVar18) && ((undefined4 *)param_1[4] != (undefined4 *)0x0)) &&
            (cVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])&DAT_10155ce2,
                                  (undefined1 *)0x2), cVar4 != '\0')) ||
           (cVar4 = FUN_10101e60(param_1), cVar4 != '\0')) break;
        iVar17 = *param_1;
        if (iVar17 == 0) {
          return '\x01';
        }
      }
    }
    return '\x02';
  }
  if (*(char *)(iVar17 + uVar3) != 'B') goto LAB_10104c78;
  uVar13 = uVar3 + 1;
  param_1[2] = uVar13;
  if ((uVar13 < uVar14) && (*(char *)(iVar17 + uVar13) == '_')) {
    uVar14 = 0;
    param_1[2] = uVar3 + 2;
    if (uVar3 == 0) goto LAB_10104e19;
LAB_10104df6:
    puVar7 = (undefined4 *)param_1[4];
    if (param_1[3] + 1U < 0x1f5) {
      if (puVar7 == (undefined4 *)0x0) {
        return '\0';
      }
      uVar1 = *(undefined8 *)param_1;
      uVar2 = *(undefined8 *)(param_1 + 2);
      param_1[2] = uVar14;
      param_1[3] = param_1[3] + 1U;
      cVar4 = FUN_10104c20(param_1);
      *(undefined8 *)param_1 = uVar1;
      *(undefined8 *)(param_1 + 2) = uVar2;
      return cVar4;
    }
    iVar17 = 1;
    if (puVar7 == (undefined4 *)0x0) goto LAB_10104e43;
    pcVar11 = "{recursion limit reached}";
    puVar19 = (undefined1 *)0x19;
  }
  else {
    uVar15 = 0;
    uVar8 = 0;
    while (uVar14 != uVar13) {
      cVar4 = *(char *)(iVar17 + uVar13);
      if (cVar4 == '_') {
        param_1[2] = uVar13 + 1;
        if (((uVar15 & uVar8) != 0xffffffff) &&
           (uVar14 = uVar15 + 1, uVar8 + (0xfffffffe < uVar15) < (uint)(uVar14 < uVar3)))
        goto LAB_10104df6;
        break;
      }
      bVar12 = cVar4 - 0x30;
      if (9 < bVar12) {
        if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          bVar12 = cVar4 + 0xa9;
        }
        else {
          if (0x19 < (byte)(cVar4 + 0xbfU)) break;
          bVar12 = cVar4 - 0x1d;
        }
      }
      uVar13 = uVar13 + 1;
      uVar5 = (uint)((ulonglong)uVar8 * 0x3e);
      param_1[2] = uVar13;
      uVar9 = (uint)((ulonglong)uVar15 * 0x3e >> 0x20);
      uVar6 = (uint)((ulonglong)uVar15 * 0x3e);
      uVar10 = uVar9 + uVar5;
      if (CARRY4(uVar9,uVar5) || (int)((ulonglong)uVar8 * 0x3e >> 0x20) != 0) break;
      uVar15 = uVar6 + bVar12;
      uVar5 = (uint)CARRY4(uVar6,(uint)bVar12);
      uVar8 = uVar10 + uVar5;
      if (CARRY4(uVar10,uVar5)) break;
    }
LAB_10104e19:
    puVar7 = (undefined4 *)param_1[4];
    iVar17 = 0;
    if (puVar7 == (undefined4 *)0x0) goto LAB_10104e43;
    pcVar11 = "{invalid syntax}";
    puVar19 = &DAT_00000010;
  }
  cVar4 = FUN_10093f00(puVar7,(undefined1 (*) [16])pcVar11,puVar19);
  if (cVar4 != '\0') {
    return '\x02';
  }
LAB_10104e43:
  *param_1 = 0;
  param_1[1] = iVar17;
  return '\0';
}
