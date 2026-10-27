// rea decompile_all
// name: FUN_005642f0
// address: 0x5642f0
// body: available
// range: 0x5642f0-0x56437a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x564309 (push 0x56437b followed by fs-segment stack chaining); handler 0x56437b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005642f0(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_0056437b;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_005642a8(param_1);
  iVar3 = FUN_0052f024(param_2);
  if ((699 < iVar3) && (iVar3 < 0x2bd)) {
    FUN_0052f060(param_2,&local_8);
    FUN_00407eb8(param_1 + 4,local_8);
    FUN_0052f060(param_2,&local_c);
    FUN_00407eb8(param_1 + 8,local_c);
    uVar2 = FUN_0052f114(param_2);
    *(undefined1 *)(param_1 + 0xc) = uVar2;
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00564382;
  puStack_20 = (undefined1 *)0x56437a;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
