// rea decompile_all
// name: FUN_005cbc24
// address: 0x5cbc24
// body: available
// range: 0x5cbc24-0x5cbdbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cbc4c (push 0x5cbdc0 followed by fs-segment stack chaining); handler 0x5cbdc0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005cbcc5) */
/* WARNING: Removing unreachable block (ram,0x005cbc78) */
/* WARNING: Removing unreachable block (ram,0x005cbc7a) */
/* WARNING: Removing unreachable block (ram,0x005cbc7e) */
/* WARNING: Removing unreachable block (ram,0x005cbca4) */

void FUN_005cbc24(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  undefined4 *in_FS_OFFSET;
  undefined4 **ppuVar3;
  int *local_34;
  int *local_30;
  int *local_2c;
  undefined4 *local_28;
  undefined1 *local_24;
  int *local_14;
  int local_10;
  undefined4 local_c;
  int *local_8;

  local_24 = &stack0xfffffffc;
  local_14 = (int *)&DAT_00000005;
  do {
    local_c = 0;
    local_14 = (int *)((int)local_14 + -1);
  } while (local_14 != (int *)0x0);
  LOCK();
  UNLOCK();
  local_28 = &DAT_005cbdc0;
  local_2c = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  local_30 = (int *)0x5cbc57;
  local_8 = local_14;
  local_30 = (int *)FUN_0040b140(&local_14);
  local_34 = (int *)&DAT_005cbdd0;
  FUN_005cae4c(param_1,&stack0xffffffe8);
  iVar2 = (**(code **)*unaff_EBX)();
  if (iVar2 == 0) {
    FUN_00429418(&stack0xffffffe4,param_2);
    (**(code **)(*local_14 + 0x20))();
    FUN_0040b250();
  }
  else {
    FUN_005cb714(param_1,&local_10);
    FUN_005cbab4(param_1,local_10,param_2,&local_8,0);
    FUN_005cab80(param_1,&DAT_005cbdec,7,&local_c,local_8);
    if (local_10 == 0) {
      FUN_005cabf8(param_1,&local_34);
      (**(code **)(*local_34 + 0x58))(local_34,0,local_c);
    }
    else {
      ppuVar3 = &local_28;
      FUN_005cae94(param_1,&local_30);
      (**(code **)(*local_30 + 0x14))(local_30,&local_2c,*local_30,ppuVar3);
      (**(code **)(*local_2c + 100))(local_2c,local_10,local_c);
    }
  }
  piVar1 = local_30;
  *in_FS_OFFSET = unaff_EBX;
  local_30 = (int *)&LAB_005cbdc7;
  local_34 = (int *)0x5cbd6f;
  FUN_0040b140(&local_34,unaff_EBX,piVar1);
  local_34 = (int *)0x5cbd77;
  FUN_0040b140(&local_30);
  local_34 = (int *)0x5cbd7f;
  FUN_0040b140(&local_2c);
  local_34 = (int *)0x5cbd87;
  FUN_0040b140(&local_28);
  local_34 = (int *)0x5cbd94;
  thunk_FUN_00406e80(&local_24,3);
  local_34 = (int *)0x5cbd9c;
  FUN_0040b140(&stack0xffffffe8);
  local_34 = (int *)0x5cbda4;
  FUN_0040b140(&local_14);
  local_34 = (int *)0x5cbdb7;
  FUN_00408e44(&local_10,&DAT_005c0e3c,2);
  local_34 = (int *)0x5cbdbf;
  thunk_FUN_00406e5c(&local_8);
  return;
}
