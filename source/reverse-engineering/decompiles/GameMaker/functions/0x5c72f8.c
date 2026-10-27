// rea decompile_all
// name: FUN_005c72f8
// address: 0x5c72f8
// body: available
// range: 0x5c72f8-0x5c736d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c7317 (push 0x5c736e followed by fs-segment stack chaining); handler 0x5c736e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c72f8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  int *in_FS_OFFSET;
  int iVar2;
  int iStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puStack_14 = (undefined1 *)0x5c730c;
  thunk_FUN_00407660(param_4);
  puStack_18 = &LAB_005c736e;
  iStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_1c;
  if (*(int *)(param_1 + 0x24) == 0) {
    puStack_14 = &stack0xfffffffc;
    if (param_4 == 0) {
      puStack_14 = &stack0xfffffffc;
      FUN_005c85dc(param_1,&param_4);
    }
    FUN_005c4b00(param_1 + 0x14,param_3,param_2,param_4);
    iVar2 = 0x5c7358;
    FUN_0040b140(param_1 + 0x10);
  }
  else {
    iVar2 = param_4;
    puStack_14 = &stack0xfffffffc;
    FUN_005c72f8(*(int *)(param_1 + 0x24),param_2,param_3);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = iVar2;
  puStack_18 = &LAB_005c7375;
  iStack_1c = 0x5c736d;
  thunk_FUN_00406e5c(&param_4,iVar2,puVar1);
  return;
}
