// rea decompile_all
// name: FUN_006152a4
// address: 0x6152a4
// body: available
// range: 0x6152a4-0x615355 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6152c3 (push 0x615356 followed by fs-segment stack chaining); handler 0x615356 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006152a4(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_00615356;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  if (DAT_0077ec6c == (int *)0x0) {
    DAT_0077ec6c = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
    puVar1 = puStack_20;
  }
  puStack_20 = puVar1;
  iVar2 = (**(code **)(*DAT_0077ec6c + 0x54))(DAT_0077ec6c,param_1);
  if (iVar2 < 0) {
    (**(code **)(*DAT_0077ec6c + 0x3c))(DAT_0077ec6c,param_1,param_2);
  }
  else {
    FUN_00405954(param_2,&local_10);
    local_c = local_10;
    local_8 = 0x11;
    puVar4 = &local_c;
    uVar3 = 0;
    FUN_0040b75c(PTR_PTR_00781e20,&local_14);
    FUN_0041bef4(&PTR_LAB_0061521c,1,local_14,uVar3,puVar4);
    FUN_00406618();
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0061535d;
  puStack_24 = (undefined1 *)0x615355;
  thunk_FUN_00406e80(&local_14,2,puVar1);
  return;
}
