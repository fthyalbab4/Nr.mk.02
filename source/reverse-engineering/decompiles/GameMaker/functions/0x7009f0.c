// rea decompile_all
// name: FUN_007009f0
// address: 0x7009f0
// body: available
// range: 0x7009f0-0x700b26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x700a0c (push 0x700b27 followed by fs-segment stack chaining); handler 0x700b27 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007009f0(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;

  puStack_24 = &stack0xfffffffc;
  uStack_8 = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_28 = &LAB_00700b27;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_c = param_2;
  piVar2 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  FUN_0045b3a0(param_1,&local_10);
  (**(code **)(*piVar2 + 0x38))(piVar2,local_10);
  uVar3 = FUN_0045b450(param_1);
  FUN_0041666c(uVar3,&local_14);
  (**(code **)(*piVar2 + 0x38))(piVar2,local_14);
  FUN_0041666c(*(undefined4 *)(param_1 + 0x18),&local_18);
  (**(code **)(*piVar2 + 0x38))(piVar2,local_18);
  if ((*(byte *)(*(int *)(param_1 + 0x10) + 0x1d) & 1) == 0) {
    (**(code **)(*piVar2 + 0x38))(piVar2,&DAT_00700b50);
  }
  else {
    (**(code **)(*piVar2 + 0x38))(piVar2,&DAT_00700b40);
  }
  if ((*(byte *)(*(int *)(param_1 + 0x10) + 0x1d) & 2) == 0) {
    (**(code **)(*piVar2 + 0x38))(piVar2,&DAT_00700b50);
  }
  else {
    (**(code **)(*piVar2 + 0x38))(piVar2,&DAT_00700b40);
  }
  if ((*(byte *)(*(int *)(param_1 + 0x10) + 0x1d) & 4) == 0) {
    (**(code **)(*piVar2 + 0x38))(piVar2,&DAT_00700b50);
  }
  else {
    (**(code **)(*piVar2 + 0x38))(piVar2,&DAT_00700b40);
  }
  if ((*(byte *)(*(int *)(param_1 + 0x10) + 0x1d) & 8) == 0) {
    (**(code **)(*piVar2 + 0x38))(piVar2,&DAT_00700b50);
  }
  else {
    (**(code **)(*piVar2 + 0x38))(piVar2,&DAT_00700b40);
  }
  FUN_0043d6dc(piVar2,local_c);
  FUN_00405a7c(piVar2);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00700b2e;
  puStack_28 = (undefined1 *)0x700b1e;
  thunk_FUN_00406e80(&local_18,2,puVar1);
  puStack_28 = (undefined1 *)0x700b26;
  thunk_FUN_00406e5c(&local_10);
  return;
}
