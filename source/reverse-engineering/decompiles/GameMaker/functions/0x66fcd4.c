// rea decompile_all
// name: FUN_0066fcd4
// address: 0x66fcd4
// body: available
// range: 0x66fcd4-0x66fd35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x66fceb (push 0x66fd36 followed by fs-segment stack chaining); handler 0x66fd36 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066fcd4(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0066fd36;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  cVar2 = FUN_00405c98(param_2,&PTR_FUN_0066c650);
  if (cVar2 != '\0') {
    FUN_00673fe0(param_2,&local_8);
    iVar3 = FUN_00415c5c(local_8,*(undefined4 *)(param_1 + 0x70));
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x88) = param_2;
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0066fd3d;
  puStack_1c = (undefined1 *)0x66fd35;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
