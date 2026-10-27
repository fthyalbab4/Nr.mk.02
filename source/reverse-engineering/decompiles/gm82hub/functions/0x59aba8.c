// rea decompile_all
// name: FUN_0059aba8
// address: 0x59aba8
// body: available
// range: 0x59aba8-0x59ad8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059aba8(int *param_1,int param_2,undefined4 param_3,char param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74 [96];
  int local_14;
  int local_10;
  int *local_c;
  int local_8;

  local_78 = param_3;
  local_c = param_1;
  local_8 = param_2;
  cVar1 = FUN_00406268(param_1);
  if ((cVar1 == '\0') || (param_4 == '\0')) {
    local_7c = 1;
  }
  else {
    local_7c = 0xffffffff;
  }
  if ((((*(char *)((int)local_c + 0x59) != '\0') && (cVar1 = FUN_00406268(local_c), cVar1 != '\0'))
      && ((char)local_c[0x7a] != '\0')) && ((*(byte *)(local_c + 7) & 0x10) == 0)) {
    (**(code **)(*local_c + 0xe8))();
  }
  FUN_005992f4(local_c,local_74);
  if ((local_8 == 0) && (local_c[0xa1] == 1)) {
    FUN_0059a9f8(local_78,param_5);
  }
  else {
    local_14 = local_c[0xa1] + -1;
    local_10 = local_c[0xb0] + -1;
    FUN_00599528(local_c,&local_14,local_74,&local_8c);
    local_14 = local_8c;
    local_10 = local_88;
    local_84 = local_c[0xb2];
    local_80 = local_c[0xb3];
    if (local_8 == 0) {
      do {
        iVar4 = local_84;
        puVar5 = &stack0xfffffffc;
        iVar2 = FUN_0059a8c0(local_84,local_7c);
        local_84 = iVar2;
        if (((iVar2 <= local_c[0xa7]) || (local_14 <= iVar2)) ||
           (iVar3 = FUN_0059cbe8(local_c,iVar2,puVar5), 0 < iVar3)) break;
      } while (iVar2 != iVar4);
    }
    else {
      while ((iVar4 = local_80, puVar5 = &stack0xfffffffc, iVar2 = FUN_0059a8c0(local_80,1),
             local_80 = iVar2, local_c[0xa8] < iVar2 && (iVar2 < local_10))) {
        iVar3 = FUN_0059cc08(local_c,iVar2,puVar5);
        if ((0 < iVar3) || (iVar2 == iVar4)) break;
      }
    }
    iVar4 = local_14;
    if (local_84 <= local_14) {
      iVar4 = local_84;
    }
    local_84 = iVar4;
    if (iVar4 < local_c[0xa7]) {
      local_84 = local_c[0xa7];
    }
    iVar4 = local_10;
    if (local_80 <= local_10) {
      iVar4 = local_80;
    }
    local_80 = iVar4;
    if (iVar4 < local_c[0xa8]) {
      local_80 = local_c[0xa8];
    }
    if ((local_c[0xb2] != local_84) || (local_c[0xb3] != local_80)) {
      FUN_0059afa0(local_c,local_84,local_80);
    }
  }
  return;
}
