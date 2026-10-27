// rea decompile_all
// name: FUN_0051a8f0
// address: 0x51a8f0
// body: available
// range: 0x51a8f0-0x51a95c inclusive
// range: 0x51a97f-0x51a985 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51a907 (push 0x51a95d followed by fs-segment stack chaining); handler 0x51a95d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051a8f0(int *param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  char local_9;
  int *local_8;

  puStack_1c = &stack0xfffffffc;
  puStack_20 = &LAB_0051a95d;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_9 = '\0';
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x108))();
  if (cVar1 != '\0') {
    local_9 = '\x01';
    FUN_00405d08(local_8,&local_9);
  }
  if (local_9 == '\0') {
    local_8[0xae] = 0;
  }
  else if (local_9 == '\x02') {
    FUN_0051adac(local_8);
  }
  *in_FS_OFFSET = uStack_24;
  return;
}
