// rea decompile_all
// name: FUN_10101fc0
// address: 0x10101fc0
// body: available
// range: 0x10101fc0-0x101025b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __fastcall FUN_10101fc0(int *param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  int local_30;
  int local_2c;
  byte local_28 [8];
  uint local_20;
  int local_1c;

  iVar8 = *param_1;
  if (iVar8 == 0) {
LAB_101021c5:
    if ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
      uVar6 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"?",(undefined1 *)0x1);
      return uVar6;
    }
    goto LAB_10102449;
  }
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  if (uVar1 <= uVar2) {
LAB_10102421:
    if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
       (cVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"{invalid syntax}",
                             &DAT_00000010), cVar4 != '\0')) {
      return 1;
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    goto LAB_10102449;
  }
  cVar4 = *(char *)(iVar8 + uVar2);
  param_1[2] = uVar2 + 1;
  iVar3 = param_1[3];
  param_1[3] = iVar3 + 1U;
  if (500 < iVar3 + 1U) {
    if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
       (cVar4 = FUN_10093f00((undefined4 *)param_1[4],
                             (undefined1 (*) [16])"{recursion limit reached}",(undefined1 *)0x19),
       cVar4 != '\0')) {
      return 1;
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_10102449;
  }
  switch(cVar4) {
  case 'A':
    if (((param_2 == '\0') && ((undefined4 *)param_1[4] != (undefined4 *)0x0)) &&
       (cVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"{",(undefined1 *)0x1),
       cVar4 != '\0')) {
      return 1;
    }
    if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
       (cVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"[",(undefined1 *)0x1),
       cVar4 != '\0')) {
      return 1;
    }
    iVar8 = FUN_10103300(param_1);
    if (iVar8 != 0) {
      return 1;
    }
    puVar9 = (undefined4 *)param_1[4];
    if (puVar9 != (undefined4 *)0x0) {
      pcVar10 = "]";
LAB_10102538:
      puVar12 = (undefined1 *)0x1;
LAB_1010253a:
      cVar4 = FUN_10093f00(puVar9,(undefined1 (*) [16])pcVar10,puVar12);
      goto LAB_10102542;
    }
    goto LAB_101020b4;
  case 'B':
    cVar4 = FUN_10102bb0(param_1);
    break;
  default:
    goto LAB_10102421;
  case 'Q':
switchD_1010205d_caseD_51:
    if (((param_2 == '\0') && ((undefined4 *)param_1[4] != (undefined4 *)0x0)) &&
       (cVar5 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"{",(undefined1 *)0x1),
       cVar5 != '\0')) {
      return 1;
    }
    if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
       (cVar5 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"&",(undefined1 *)0x1),
       cVar5 != '\0')) {
      return 1;
    }
    if (((cVar4 != 'R') && ((undefined4 *)param_1[4] != (undefined4 *)0x0)) &&
       (cVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"mut ",&DAT_00000004),
       cVar4 != '\0')) {
      return 1;
    }
    cVar4 = FUN_10101fc0(param_1,'\x01');
    goto LAB_10102542;
  case 'R':
    if ((uVar1 <= uVar2 + 1) || (*(char *)(iVar8 + uVar2 + 1) != 'e'))
    goto switchD_1010205d_caseD_51;
    param_1[2] = uVar2 + 2;
    cVar4 = FUN_10103090(param_1);
    break;
  case 'T':
    if (((param_2 == '\0') && ((undefined4 *)param_1[4] != (undefined4 *)0x0)) &&
       (cVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"{",(undefined1 *)0x1),
       cVar4 != '\0')) {
      return 1;
    }
    if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
       (cVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"(",(undefined1 *)0x1),
       cVar4 != '\0')) {
      return 1;
    }
    uVar11 = FUN_10103370(param_1);
    if ((uVar11 & 1) != 0) {
      return 1;
    }
    if ((int)(uVar11 >> 0x20) == 1) {
      if ((undefined4 *)param_1[4] == (undefined4 *)0x0) goto LAB_101020b4;
      cVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])",",(undefined1 *)0x1);
      if (cVar4 != '\0') {
        return 1;
      }
    }
LAB_10102528:
    puVar9 = (undefined4 *)param_1[4];
    if (puVar9 != (undefined4 *)0x0) {
      pcVar10 = ")";
      goto LAB_10102538;
    }
    goto LAB_101020b4;
  case 'V':
    if (((param_2 == '\0') && ((undefined4 *)param_1[4] != (undefined4 *)0x0)) &&
       (cVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"{",(undefined1 *)0x1),
       cVar4 != '\0')) {
      return 1;
    }
    cVar4 = FUN_101006c0(param_1,'\x01');
    if (cVar4 != '\0') {
      return 1;
    }
    if (*param_1 == 0) goto LAB_101021c5;
    uVar1 = param_1[2];
    if ((uint)param_1[1] <= uVar1) goto LAB_10102421;
    cVar4 = *(char *)(*param_1 + uVar1);
    param_1[2] = uVar1 + 1;
    if (cVar4 == 'S') {
      if ((((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
          (cVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])" { ",
                                (undefined1 *)0x3), cVar4 != '\0')) ||
         (iVar8 = FUN_101033f0(param_1), iVar8 != 0)) {
        return 1;
      }
      puVar9 = (undefined4 *)param_1[4];
      if (puVar9 == (undefined4 *)0x0) goto LAB_101020b4;
      pcVar10 = " }";
      puVar12 = (undefined1 *)0x2;
      goto LAB_1010253a;
    }
    if (cVar4 == 'T') {
      if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
         (cVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"(",(undefined1 *)0x1),
         cVar4 != '\0')) {
        return 1;
      }
      iVar8 = FUN_10103300(param_1);
      if (iVar8 != 0) {
        return 1;
      }
      goto LAB_10102528;
    }
    if (cVar4 != 'U') goto LAB_10102421;
    goto LAB_1010254e;
  case 'a':
  case 'i':
  case 'l':
  case 'n':
  case 's':
  case 'x':
    if ((uVar2 + 1 < uVar1) && (*(char *)(iVar8 + uVar2 + 1) == 'n')) {
      param_1[2] = uVar2 + 2;
      if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
         (cVar5 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"-",(undefined1 *)0x1),
         cVar5 != '\0')) {
        return 1;
      }
    }
    goto LAB_1010209d;
  case 'b':
    FUN_10102d80(&local_30,param_1);
    if (local_30 == 0) {
LAB_101024a9:
      puVar9 = (undefined4 *)param_1[4];
      if ((char)local_2c == '\0') {
        if (puVar9 != (undefined4 *)0x0) {
          pcVar10 = "{invalid syntax}";
          puVar12 = &DAT_00000010;
          goto LAB_101024cd;
        }
      }
      else if (puVar9 != (undefined4 *)0x0) {
        pcVar10 = "{recursion limit reached}";
        puVar12 = (undefined1 *)0x19;
LAB_101024cd:
        cVar4 = FUN_10093f00(puVar9,(undefined1 (*) [16])pcVar10,puVar12);
        if (cVar4 != '\0') {
          return 1;
        }
      }
      *param_1 = 0;
      *(char *)(param_1 + 1) = (char)local_2c;
      goto LAB_10102449;
    }
    FUN_10102e40((uint *)local_28,local_30,local_2c);
    if ((local_28[0] & 1) == 0) goto LAB_10102421;
    if (local_20 != 0 || local_1c != 0) {
      if (local_20 != 1 || local_1c != 0) goto LAB_10102421;
      puVar9 = (undefined4 *)param_1[4];
      if (puVar9 != (undefined4 *)0x0) {
        pcVar10 = "true";
        puVar12 = &DAT_00000004;
        goto LAB_1010256a;
      }
      goto LAB_101020b4;
    }
    puVar9 = (undefined4 *)param_1[4];
    if (puVar9 == (undefined4 *)0x0) goto LAB_101020b4;
    pcVar10 = "false";
    puVar12 = (undefined1 *)0x5;
    goto LAB_1010256a;
  case 'c':
    FUN_10102d80(&local_30,param_1);
    if (local_30 == 0) goto LAB_101024a9;
    FUN_10102e40((uint *)local_28,local_30,local_2c);
    if ((((local_28[0] & 1) == 0) || (local_1c != 0)) ||
       ((local_20 ^ 0xd800) - 0x110000 < 0xffef0800)) goto LAB_10102421;
    uVar7 = FUN_10102f90((undefined4 *)param_1[4],local_20);
    cVar4 = (char)uVar7;
    break;
  case 'e':
    if (((param_2 == '\0') && ((undefined4 *)param_1[4] != (undefined4 *)0x0)) &&
       (cVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"{",(undefined1 *)0x1),
       cVar4 != '\0')) {
      return 1;
    }
    if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
       (cVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])&DAT_1015855c,
                             (undefined1 *)0x1), cVar4 != '\0')) {
      return 1;
    }
    cVar4 = FUN_10103090(param_1);
LAB_10102542:
    if (cVar4 != '\0') {
      return 1;
    }
LAB_1010254e:
    if ((param_2 == '\0') && (puVar9 = (undefined4 *)param_1[4], puVar9 != (undefined4 *)0x0)) {
      pcVar10 = "}";
LAB_10102568:
      puVar12 = (undefined1 *)0x1;
LAB_1010256a:
      cVar4 = FUN_10093f00(puVar9,(undefined1 (*) [16])pcVar10,puVar12);
      break;
    }
    goto LAB_101020b4;
  case 'h':
  case 'j':
  case 'm':
  case 'o':
  case 't':
  case 'y':
LAB_1010209d:
    cVar4 = FUN_101028a0(param_1,cVar4);
    break;
  case 'p':
    puVar9 = (undefined4 *)param_1[4];
    if (puVar9 == (undefined4 *)0x0) goto LAB_101020b4;
    pcVar10 = "_";
    goto LAB_10102568;
  }
  uVar6 = 1;
  if (cVar4 == '\0') {
LAB_101020b4:
    if (*param_1 != 0) {
      param_1[3] = param_1[3] + -1;
    }
LAB_10102449:
    uVar6 = 0;
  }
  return uVar6;
}
