// rea decompile_all
// name: FUN_101018c0
// address: 0x101018c0
// body: available
// range: 0x101018c0-0x10101d86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 __fastcall FUN_101018c0(int *param_1)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  uint local_34;
  uint local_30;
  char local_28;
  char local_27;
  uint local_20;
  int local_1c;

  iVar6 = *param_1;
  if (iVar6 == 0) {
    puVar8 = (undefined4 *)param_1[4];
    if (puVar8 != (undefined4 *)0x0) {
      pcVar9 = "?";
      puVar12 = (undefined1 *)0x1;
LAB_10101947:
      uVar2 = FUN_10093f00(puVar8,(undefined1 (*) [16])pcVar9,puVar12);
      return uVar2;
    }
    goto LAB_10101c90;
  }
  local_34 = param_1[1];
  uVar7 = param_1[2];
  if (local_34 <= uVar7) {
LAB_10101c68:
    if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
       (cVar3 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"{invalid syntax}",
                             &DAT_00000010), cVar3 != '\0')) {
      return 1;
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    goto LAB_10101c90;
  }
  cVar3 = *(char *)(iVar6 + uVar7);
  local_30 = uVar7 + 1;
  param_1[2] = local_30;
  if (((byte)(cVar3 + 0x9fU) < 0x1a) &&
     (uVar10 = (uint)(byte)(cVar3 + 0x9fU), (0x3bcfbbfU >> (uVar10 & 0x1f) & 1) != 0)) {
    puVar8 = (undefined4 *)param_1[4];
    if (puVar8 != (undefined4 *)0x0) {
      pcVar9 = (&PTR_s_i8_101607c0)[uVar10];
      puVar12 = *(undefined1 **)(&DAT_10160758 + uVar10 * 4);
      goto LAB_10101947;
    }
    goto LAB_10101c90;
  }
  iVar1 = param_1[3];
  param_1[3] = iVar1 + 1U;
  if (500 < iVar1 + 1U) {
    if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
       (cVar3 = FUN_10093f00((undefined4 *)param_1[4],
                             (undefined1 (*) [16])"{recursion limit reached}",(undefined1 *)0x19),
       cVar3 != '\0')) {
      return 1;
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_10101c90;
  }
  switch(cVar3) {
  case 'A':
  case 'S':
    if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
       (cVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"[",(undefined1 *)0x1),
       cVar4 != '\0')) {
      return 1;
    }
    cVar4 = FUN_101018c0(param_1);
    if (cVar4 != '\0') {
      return 1;
    }
    if (cVar3 == 'A') {
      if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
         (cVar3 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"; ",(undefined1 *)0x2)
         , cVar3 != '\0')) {
        return 1;
      }
      cVar3 = FUN_10101fc0(param_1,'\x01');
      if (cVar3 != '\0') {
        return 1;
      }
    }
    puVar8 = (undefined4 *)param_1[4];
    if (puVar8 != (undefined4 *)0x0) {
      pcVar9 = "]";
LAB_10101b63:
      cVar3 = FUN_10093f00(puVar8,(undefined1 (*) [16])pcVar9,(undefined1 *)0x1);
      break;
    }
    goto LAB_10101d49;
  case 'B':
    cVar3 = FUN_10104210(param_1);
    break;
  default:
    param_1[2] = uVar7;
    cVar3 = FUN_101006c0(param_1,'\0');
    break;
  case 'D':
    if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
       (cVar3 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"dyn ",&DAT_00000004),
       cVar3 != '\0')) {
      return 1;
    }
    cVar3 = FUN_10104540(param_1);
    if (cVar3 != '\0') {
      return 1;
    }
    if (((*param_1 == 0) || (uVar7 = param_1[2], (uint)param_1[1] <= uVar7)) ||
       (*(char *)(*param_1 + uVar7) != 'L')) goto LAB_10101c68;
    param_1[2] = uVar7 + 1;
    FUN_101043d0(&local_28,param_1);
    if (local_28 == '\0') {
      if (local_20 == 0 && local_1c == 0) goto LAB_10101d49;
      if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
         (cVar3 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])" + ",(undefined1 *)0x3
                              ), cVar3 != '\0')) {
        return 1;
      }
      cVar3 = FUN_101026a0(param_1,local_20,local_1c);
      break;
    }
LAB_10101ace:
    puVar8 = (undefined4 *)param_1[4];
    if (local_27 == '\0') {
      if (puVar8 != (undefined4 *)0x0) {
        pcVar9 = "{invalid syntax}";
        puVar12 = &DAT_00000010;
        goto LAB_10101d65;
      }
    }
    else if (puVar8 != (undefined4 *)0x0) {
      pcVar9 = "{recursion limit reached}";
      puVar12 = (undefined1 *)0x19;
LAB_10101d65:
      cVar3 = FUN_10093f00(puVar8,(undefined1 (*) [16])pcVar9,puVar12);
      if (cVar3 != '\0') {
        return 1;
      }
    }
    *param_1 = 0;
    *(char *)(param_1 + 1) = local_27;
    goto LAB_10101c90;
  case 'F':
    uVar7 = FUN_10103fe0(param_1);
    cVar3 = (char)uVar7;
    break;
  case 'O':
  case 'P':
    if ((undefined4 *)param_1[4] == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      cVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])&DAT_1015855c,
                           (undefined1 *)0x1);
      if (cVar4 != '\0') {
        return 1;
      }
      puVar8 = (undefined4 *)param_1[4];
    }
    if (cVar3 == 'P') {
      if (puVar8 == (undefined4 *)0x0) goto LAB_10101d36;
      pcVar9 = "const ";
      puVar12 = &DAT_00000006;
    }
    else {
LAB_10101d17:
      if (puVar8 == (undefined4 *)0x0) goto LAB_10101d36;
      pcVar9 = "mut ";
      puVar12 = &DAT_00000004;
    }
    cVar3 = FUN_10093f00(puVar8,(undefined1 (*) [16])pcVar9,puVar12);
    if (cVar3 != '\0') {
      return 1;
    }
    goto LAB_10101d36;
  case 'Q':
  case 'R':
    if ((undefined4 *)param_1[4] == (undefined4 *)0x0) {
LAB_10101a9c:
      if ((local_30 < local_34) && (*(char *)(iVar6 + local_30) == 'L')) {
        param_1[2] = local_30 + 1;
        FUN_101043d0(&local_28,param_1);
        if (local_28 != '\0') goto LAB_10101ace;
        if (local_20 != 0 || local_1c != 0) {
          bVar5 = FUN_101026a0(param_1,local_20,local_1c);
          if (bVar5) {
            return 1;
          }
          if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
             (cVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])" ",
                                   (undefined1 *)0x1), cVar4 != '\0')) {
            return 1;
          }
        }
      }
    }
    else {
      cVar4 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"&",(undefined1 *)0x1);
      if (cVar4 != '\0') {
        return 1;
      }
      iVar6 = *param_1;
      if (iVar6 != 0) {
        local_34 = param_1[1];
        local_30 = param_1[2];
        goto LAB_10101a9c;
      }
    }
    if (cVar3 != 'R') {
      puVar8 = (undefined4 *)param_1[4];
      goto LAB_10101d17;
    }
LAB_10101d36:
    cVar3 = FUN_101018c0(param_1);
    break;
  case 'T':
    if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
       (cVar3 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])"(",(undefined1 *)0x1),
       cVar3 != '\0')) {
      return 1;
    }
    uVar11 = FUN_101044d0(param_1);
    if ((uVar11 & 1) != 0) {
      return 1;
    }
    if ((int)(uVar11 >> 0x20) == 1) {
      if ((undefined4 *)param_1[4] == (undefined4 *)0x0) goto LAB_10101d49;
      cVar3 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])",",(undefined1 *)0x1);
      if (cVar3 != '\0') {
        return 1;
      }
    }
    puVar8 = (undefined4 *)param_1[4];
    if (puVar8 != (undefined4 *)0x0) {
      pcVar9 = ")";
      goto LAB_10101b63;
    }
    goto LAB_10101d49;
  case 'W':
    cVar3 = FUN_101018c0(param_1);
    if (cVar3 != '\0') {
      return 1;
    }
    if (((undefined4 *)param_1[4] != (undefined4 *)0x0) &&
       (cVar3 = FUN_10093f00((undefined4 *)param_1[4],(undefined1 (*) [16])" is ",&DAT_00000004),
       cVar3 != '\0')) {
      return 1;
    }
    cVar3 = FUN_10104810(param_1);
  }
  uVar2 = 1;
  if (cVar3 == '\0') {
LAB_10101d49:
    if (*param_1 != 0) {
      param_1[3] = param_1[3] + -1;
    }
LAB_10101c90:
    uVar2 = 0;
  }
  return uVar2;
}
