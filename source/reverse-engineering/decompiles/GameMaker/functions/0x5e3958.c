// rea decompile_all
// name: FUN_005e3958
// address: 0x5e3958
// body: available
// range: 0x5e3958-0x5e39f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e3982 (push 0x5e39f1 followed by fs-segment stack chaining); handler 0x5e39f1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e3958(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int cchCount1;
  int iVar2;
  PCNZWCH lpString1;
  PCNZWCH lpString2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = (undefined1 *)0x5e396f;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_1c = (undefined1 *)0x5e3977;
  thunk_FUN_00407660(local_c);
  puStack_20 = &LAB_005e39f1;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_00407058(&local_c);
  cchCount1 = FUN_00408238();
  FUN_00407058(&local_8);
  iVar2 = FUN_00408238();
  if (cchCount1 <= iVar2) {
    lpString1 = (PCNZWCH)FUN_00407f44(local_8);
    lpString2 = (PCNZWCH)FUN_00407f44(local_c);
    CompareStringW(0x400,1,lpString1,cchCount1,lpString2,cchCount1);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005e39f8;
  puStack_20 = (undefined1 *)0x5e39f0;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
