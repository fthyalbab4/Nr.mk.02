// rea decompile_all
// name: FUN_004c4918
// address: 0x4c4918
// body: available
// range: 0x4c4918-0x4c497b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c492c (push 0x4c497c followed by fs-segment stack chaining); handler 0x4c497c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c4918(int param_1,byte param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004c497c;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if ((param_2 != *(byte *)(param_1 + 0x1eb)) &&
     (*(byte *)(param_1 + 0x1eb) = param_2, puVar1 = &stack0xfffffffc,
     ((*(byte *)(param_1 + 0x1c) & 0x10) == 0 & param_2) != 0)) {
    FUN_00406268(param_1,&local_8);
    FUN_0040b280(param_1 + 0x1c8,local_8);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004c4983;
  puStack_18 = (undefined1 *)0x4c497b;
  FUN_0040b268(&local_8,uStack_1c,puVar1);
  return;
}
