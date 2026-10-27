// rea decompile_all
// name: FUN_00568590
// address: 0x568590
// body: available
// range: 0x568590-0x568610 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5685a9 (push 0x568611 followed by fs-segment stack chaining); handler 0x568611 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00568590(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined1 local_c [4];
  int local_8;

  puStack_18 = &stack0xfffffffc;
  local_10 = 0;
  puStack_1c = &LAB_00568611;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0047e3f4(param_1);
  FUN_00567578(param_1,&local_10);
  FUN_00407eb8(param_1 + 0x2b8,local_10);
  cVar2 = FUN_004f7a54(param_1);
  if (cVar2 != '\0') {
    FUN_00567b30(param_1,&local_8,local_c);
    iVar3 = FUN_005682c4(param_1,local_8);
    if (iVar3 != local_8) {
      FUN_00567b78(param_1,iVar3);
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00568618;
  puStack_1c = (undefined1 *)0x568610;
  thunk_FUN_00406e5c(&local_10,uStack_20,puVar1);
  return;
}
