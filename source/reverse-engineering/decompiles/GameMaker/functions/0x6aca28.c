// rea decompile_all
// name: FUN_006aca28
// address: 0x6aca28
// body: available
// range: 0x6aca28-0x6aca7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6aca54 (push 0x6aca7e followed by fs-segment stack chaining); handler 0x6aca7e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006aca28(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;

  local_10 = *param_2;
  uStack_c = param_2[1];
  local_8 = param_2[2];
  puStack_20 = (undefined1 *)0x6aca49;
  FUN_00408f60(&local_10,&DAT_006ab1e4);
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *param_3 = local_10;
  param_3[2] = local_8;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006aca85;
  uStack_24 = 0x6aca7d;
  FUN_00408df4(&local_10,&DAT_006ab1e4,&stack0xfffffffc);
  return;
}
