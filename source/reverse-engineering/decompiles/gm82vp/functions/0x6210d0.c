// rea decompile_all
// name: FUN_006210d0
// address: 0x6210d0
// body: available
// range: 0x6210d0-0x621154 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6210e6 (push 0x621155 followed by fs-segment stack chaining); handler 0x621155 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006210d0(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_00621155;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_0041636c(param_1,&local_c);
  FUN_00408678(&local_8,&PTR_DAT_00621170,local_c);
  FUN_00561704(local_8);
  cVar2 = FUN_00620ff8(param_1);
  if (cVar2 != '\0') {
    FUN_0040b268(DAT_0085b3c4 + param_1 * 0x18);
    *(undefined1 *)(DAT_0085b3c4 + 0x14 + param_1 * 0x18) = 0;
    FUN_00561704(&PTR_DAT_006211a4);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0062115c;
  puStack_1c = (undefined1 *)0x621154;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
