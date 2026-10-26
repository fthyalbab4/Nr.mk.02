// rea decompile_all
// name: FUN_0056e570
// address: 0x56e570
// body: available
// range: 0x56e570-0x56e609 inclusive
// range: 0x56e640-0x56e646 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x56e5f6 (push 0x56e60a followed by fs-segment stack chaining); handler 0x56e60a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056e570(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  undefined1 local_6c [100];
  int local_8;

  puStack_84 = (undefined1 *)0x56e588;
  local_8 = param_1;
  cVar1 = FUN_004f7a54(param_1);
  if (cVar1 != '\0') {
    puStack_84 = (undefined1 *)0x56e597;
    FUN_0056dcec(local_8,local_6c);
  }
  *(int *)(local_8 + 0x284) = param_2;
  *(int *)(local_8 + 0x2c0) = param_3;
  if (param_2 < *(int *)(local_8 + 0x29c)) {
    *(int *)(local_8 + 0x29c) = param_2 + -1;
  }
  if (param_3 < *(int *)(local_8 + 0x2a0)) {
    *(int *)(local_8 + 0x2a0) = param_3 + -1;
  }
  puStack_88 = &LAB_0056e60a;
  uStack_8c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_8c;
  puStack_84 = &stack0xfffffffc;
  FUN_0056e3c8();
  *in_FS_OFFSET = uStack_8c;
  return;
}
