// rea decompile_all
// name: FUN_004ec0f4
// address: 0x4ec0f4
// body: available
// range: 0x4ec0f4-0x4ec16a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ec111 (push 0x4ec16b followed by fs-segment stack chaining); handler 0x4ec16b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ec0f4(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  char local_5;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_004ec16b;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_004ebf98(param_1,1,param_2,&local_5);
  if ((local_5 != '\0') && (cVar2 = FUN_004ec81c(param_1), cVar2 != '\0')) {
    FUN_004ed1c4(param_1,&local_c);
    (**(code **)(**(int **)(param_1 + 0x4c) + 0x10))(*(int **)(param_1 + 0x4c),param_2,local_c);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004ec172;
  puStack_20 = (undefined1 *)0x4ec16a;
  thunk_FUN_004072d8(&local_c,uStack_24,puVar1);
  return;
}
