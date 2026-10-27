// rea decompile_all
// name: FUN_005c6d70
// address: 0x5c6d70
// body: available
// range: 0x5c6d70-0x5c6e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c6d8f (push 0x5c6e6c followed by fs-segment stack chaining); handler 0x5c6e6c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c6d70(int param_1,undefined4 param_2,int param_3,undefined4 *param_4,undefined4 param_5,
                 char param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_005c6e6c;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_00407f0c(&local_c,param_2);
  FUN_005c7690(param_1,param_3,&local_8);
  if (local_8 == 0) {
    puVar5 = (undefined4 *)0x5c6dc6;
    cVar1 = FUN_005c04d8(param_2);
    if (cVar1 == '\0') {
      if (param_6 != '\0') {
        iVar3 = param_1;
        if (param_1 != 0) {
          iVar3 = param_1 + 0x48;
        }
        FUN_005caa18(*(undefined4 *)(param_1 + 0x1c),iVar3,&local_10);
        FUN_005c0590(local_10,local_c,&local_14);
        puVar5 = (undefined4 *)0x5c6dfd;
        FUN_00407f0c(&local_c,local_14);
      }
    }
    else {
      puVar5 = (undefined4 *)0x5c6e09;
      FUN_005c0548(param_2,&local_10);
    }
  }
  else {
    puVar5 = &local_c;
    FUN_005c7994(param_1,param_2,param_3,puVar5);
  }
  puVar4 = param_4;
  iVar3 = param_3;
  FUN_005c737c(param_1,0,local_c,param_4,param_5,param_3,puVar5);
  if (((local_8 == 0) && (*(int *)(param_1 + 0x1c) != 0)) && (param_3 != 0)) {
    uVar2 = FUN_005cb194(*(undefined4 *)(param_1 + 0x1c));
    if ((uVar2 & 0x10) != 0) {
      (**(code **)(*(int *)*param_4 + 0x78))((int *)*param_4,local_10,param_3);
    }
  }
  *in_FS_OFFSET = puVar4;
  thunk_FUN_00406e80(&local_14,3,iVar3,&LAB_005c6e73);
  FUN_0040b140(&local_8);
  return;
}
