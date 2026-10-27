// rea decompile_all
// name: FUN_00753f4c
// address: 0x753f4c
// body: available
// range: 0x753f4c-0x753fd2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x753f6b (push 0x753fd3 followed by fs-segment stack chaining); handler 0x753fd3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00753f4c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_28 = &LAB_00753fd3;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  uVar1 = FUN_0043b048(*(undefined4 *)(param_1 + 0xc),param_2);
  FUN_00407140(&local_10,uVar1,0);
  uStack_2c = 0x753f98;
  FUN_00733be8(local_10,&local_c);
  uStack_2c = 0x753fa3;
  FUN_00408130(&local_8,local_c);
  uStack_2c = 0x753fad;
  FUN_00407eb8(param_3,local_8);
  *in_FS_OFFSET = puStack_28;
  puStack_24 = (undefined1 *)0x753fc2;
  FUN_00406e5c(&local_10,puStack_28,unaff_EDI);
  puStack_24 = (undefined1 *)0x753fca;
  FUN_00407a78(&local_c);
  puStack_24 = (undefined1 *)0x753fd2;
  thunk_FUN_00406e5c(&local_8);
  return;
}
