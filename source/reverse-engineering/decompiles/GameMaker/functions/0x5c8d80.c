// rea decompile_all
// name: FUN_005c8d80
// address: 0x5c8d80
// body: available
// range: 0x5c8d80-0x5c8f91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c8db0 (push 0x5c8f92 followed by fs-segment stack chaining); handler 0x5c8f92 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005c8e3a) */
/* WARNING: Removing unreachable block (ram,0x005c8e5a) */
/* WARNING: Removing unreachable block (ram,0x005c8e61) */
/* WARNING: Removing unreachable block (ram,0x005c8e96) */
/* WARNING: Removing unreachable block (ram,0x005c8ed8) */

void FUN_005c8d80(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 *in_FS_OFFSET;
  int local_68;
  int local_64;
  int *local_60 [2];
  undefined1 local_58 [16];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  undefined1 local_40 [16];
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  int *local_20;
  undefined4 local_8;

  iVar2 = 0xc;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  LOCK();
  UNLOCK();
  local_20 = (int *)0x5c8da5;
  local_8 = param_2;
  FUN_0040b1b4(param_2);
  local_24 = (int *)&LAB_005c8f92;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = 0x5c8dbd;
  local_20 = (int *)&stack0xfffffffc;
  cVar1 = FUN_005c8c80(param_1,local_8);
  if (cVar1 == '\0') {
    local_2c = 0x5c8f03;
    (**(code **)(*param_1 + 0x1c))(param_1,&local_64);
    local_2c = 0x5c8f10;
    FUN_005c6acc(param_1,&local_68);
    if (local_64 == local_68) {
      local_2c = 0x5c8f1e;
      FUN_005c89c0(param_1,0);
    }
  }
  else {
    local_2c = 0x5c8dd5;
    FUN_0040b184(&stack0xffffffec,local_8,&LAB_005c8fa0);
    local_2c = 0x5c8de2;
    (**(code **)(*unaff_EBX + 0xf0))(unaff_EBX,param_1);
    local_2c = 0x5c8dec;
    (**(code **)(*param_1 + 0x1c))(param_1,&stack0xffffffe8);
    local_2c = 0x5c8df9;
    FUN_005c6acc(param_1,&stack0xffffffe4);
    if (unaff_ESI != unaff_EDI) {
      local_2c = 0x5c8e0c;
      (**(code **)(*param_1 + 0x1c))(param_1,&local_20);
      local_2c = 0x5c8e14;
      iVar2 = (**(code **)(*local_20 + 0xc))();
      if (iVar2 == 0) {
        local_2c = 0x5c8e22;
        (**(code **)(*param_1 + 0x1c))(param_1,&local_24);
        local_2c = 0x5c8e2d;
        (**(code **)(*local_24 + 0x18))(local_24,local_8);
      }
      else {
        local_2c = 0x5c8eea;
        (**(code **)(*param_1 + 0x1c))(param_1,local_60);
        local_2c = 0x5c8ef7;
        (**(code **)(*local_60[0] + 0x58))(local_60[0],0,local_8);
      }
    }
  }
  *in_FS_OFFSET = local_28;
  local_20 = (int *)&LAB_005c8f99;
  local_24 = (int *)0x5c8f3e;
  FUN_00408e44(&local_68,&DAT_005c0e70,4);
  local_24 = (int *)0x5c8f46;
  FUN_004249e8(local_58);
  local_24 = (int *)0x5c8f4e;
  FUN_0040b140(local_48);
  local_24 = (int *)0x5c8f56;
  FUN_0040b140(local_44);
  local_24 = (int *)0x5c8f5e;
  FUN_004249e8(local_40);
  local_24 = (int *)0x5c8f66;
  FUN_0040b140(local_30);
  local_24 = (int *)0x5c8f6e;
  FUN_0040b140(&local_2c);
  local_24 = (int *)0x5c8f81;
  FUN_00408e44(&local_28,&DAT_005c0e70,5);
  local_24 = (int *)0x5c8f89;
  FUN_0040b140(&stack0xffffffec);
  local_24 = (int *)0x5c8f91;
  FUN_0040b140(&local_8);
  return;
}
