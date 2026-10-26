// rea decompile_all
// name: FUN_00491578
// address: 0x491578
// body: available
// range: 0x491578-0x4917bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4915b2 (push 0x4917e8 followed by fs-segment stack chaining); handler 0x4917e8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4915c0 (push 0x4917c0 followed by fs-segment stack chaining); handler 0x4917c0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00491578(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  int local_2038;
  undefined1 local_2034 [2];
  undefined2 auStack_2032 [2023];
  undefined4 uStack_1064;
  undefined4 *puStack_1060;
  undefined4 uStack_105c;
  undefined1 *puStack_1058;
  undefined1 *puStack_1054;
  undefined4 uStack_1050;
  undefined1 *puStack_104c;
  undefined1 *puStack_1048;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  int local_28;
  undefined1 local_24;
  byte local_23;
  undefined2 local_22;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_1048 = &stack0xfffffffc;
  puStack_1054 = &stack0xfffffffc;
  iVar3 = 2;
  do {
    iVar2 = iVar3;
    iVar3 = iVar2 + -1;
  } while (iVar2 + -1 != 0);
  local_2038 = 0;
  local_8 = 0;
  puStack_104c = &LAB_004917e8;
  uStack_1050 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1050;
  puStack_1058 = &LAB_004917c0;
  uStack_105c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_105c;
  puStack_1060 = (undefined4 *)0x4915d1;
  local_10 = param_3;
  local_c = param_2;
  iVar3 = FUN_00438ec4(*(undefined4 *)(iVar2 + 0x288),param_3);
  puStack_1060 = (undefined4 *)0x4915e2;
  FUN_00404f38(&local_34,0x20,0);
  local_34 = 0x20;
  puStack_1060 = (undefined4 *)0x4915f6;
  cVar1 = FUN_004061f8(iVar3,&PTR_LAB_00488b04);
  local_20 = iVar3;
  if (cVar1 == '\0') {
    local_30 = 0x7e;
    local_23 = DAT_006813e6;
    local_22 = *(undefined2 *)(iVar3 + 0x48);
    local_2c = 0xffffffff;
    local_1c = (undefined1 *)0x0;
    local_18 = 0;
  }
  else {
    local_30 = 0x7c;
    if (1 < (byte)(*(byte *)(iVar3 + 0x1c6) - 3)) {
      local_30 = 0x7d;
      local_28 = *(int *)(iVar3 + 0x1b4);
      if (local_28 < 0) {
        local_28 = -2;
      }
    }
    local_2c = local_10;
    local_22 = *(undefined2 *)(iVar3 + 0x48);
    local_23 = (&DAT_006813e0)[(*(byte *)(iVar3 + 0x1c6) & 0x7f) * 2];
    if (*(char *)(iVar3 + 0x1b1) != '\0') {
      local_23 = local_23 | 0x10;
    }
    if (*(char *)(iVar3 + 0x1b3) != '\0') {
      local_23 = local_23 | 4;
    }
    puStack_1060 = (undefined4 *)0x491677;
    local_24 = FUN_0048ffdc(iVar3);
    if ((*(char *)(iVar2 + 0x2a8) == '\0') &&
       ((*(char *)(iVar2 + 0x27c) == '\0' || (*(char *)(iVar3 + 0x1c6) != '\x05')))) {
      local_1c = (undefined1 *)0x0;
      local_18 = 0;
    }
    else {
      puStack_1060 = (undefined4 *)0x4916af;
      FUN_004bb658(iVar3,&local_2038);
      if (local_2038 == 0) {
        puStack_1060 = (undefined4 *)0x4916d1;
        FUN_004081e8(&local_8,&DAT_00491808);
      }
      else {
        puStack_1060 = (undefined4 *)0x4916c2;
        FUN_004bb658(iVar3,&local_8);
      }
      puStack_1060 = (undefined4 *)0x4916e4;
      FUN_004177c8(local_2034,local_8,0x1000);
      iVar3 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        puStack_1060 = (undefined4 *)0x491701;
        iVar3 = FUN_00407488(&local_8,local_8);
      }
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + -4);
      }
      if (0xffd < iVar4) {
        iVar4 = 0xffe;
      }
      auStack_2032[iVar4] = 0;
      local_1c = local_2034;
      iVar3 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        puStack_1060 = (undefined4 *)0x491750;
        iVar3 = FUN_00407488(&local_8,local_8);
      }
      local_18 = 0;
      if (iVar3 != 0) {
        local_18 = *(undefined4 *)(iVar3 + -4);
      }
      local_30 = local_30 | 2;
    }
  }
  puStack_1060 = &local_34;
  uStack_1064 = 0x4917ac;
  FUN_004bcb48(iVar2,local_c,param_4);
  *in_FS_OFFSET = uStack_105c;
  return;
}
