// rea decompile_all
// name: FUN_00693250
// address: 0x693250
// body: available
// range: 0x693250-0x6932b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x69326a (push 0x6932b5 followed by fs-segment stack chaining); handler 0x6932b5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00693250(undefined4 param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  puStack_c = (undefined1 *)0x69325f;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_10 = &LAB_006932b5;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  if (DAT_0077f3bc == 1000) {
    puStack_c = &stack0xfffffffc;
    FUN_004d43f8(L"INTERNAL ERROR: Adding too many global variables");
  }
  else {
    DAT_0077f3bc = DAT_0077f3bc + 1;
    puStack_c = &stack0xfffffffc;
    FUN_00407eb8(&DAT_0078a200 + DAT_0077f3bc * 4,local_8);
  }
  puVar1 = puStack_c;
  *in_FS_OFFSET = uStack_14;
  puStack_c = &LAB_006932bc;
  puStack_10 = (undefined1 *)0x6932b4;
  thunk_FUN_00406e5c(&local_8,uStack_14,puVar1);
  return;
}
