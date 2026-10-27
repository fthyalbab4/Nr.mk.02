// rea decompile_all
// name: FUN_005f8a64
// address: 0x5f8a64
// body: available
// range: 0x5f8a64-0x5f8ac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f8a75 (push 0x5f8ac4 followed by fs-segment stack chaining); handler 0x5f8ac4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f8a64(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int extraout_ECX;
  int iVar2;
  int extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_005f8ac4;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puVar1 = &stack0xfffffffc;
  if (SBORROW4(0x7fffffff,param_2)) {
    param_1 = FUN_00405944();
    param_3 = extraout_ECX;
    puVar1 = puStack_10;
  }
  puStack_10 = puVar1;
  iVar2 = param_3 + *(int *)(param_1 + 0x20);
  if (SCARRY4(param_3,*(int *)(param_1 + 0x20))) {
    FUN_00405944();
    iVar2 = extraout_ECX_00;
  }
  if (0x7fffffff - param_2 < iVar2) {
    FUN_0040b75c(PTR_PTR_007828c4,&local_8);
    FUN_005df624(&PTR_LAB_005f7e34,local_8);
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005f8acb;
  puStack_14 = (undefined1 *)0x5f8ac3;
  thunk_FUN_00406e5c(&local_8,uStack_18,puVar1);
  return;
}
