// rea decompile_all
// name: FUN_004268d8
// address: 0x4268d8
// body: available
// range: 0x4268d8-0x42692b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4268f5 (push 0x42692c followed by fs-segment stack chaining); handler 0x42692c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004268d8(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_28;
  undefined1 *puStackY_24;
  undefined1 *puVar1;
  VARIANTARG local_15;
  undefined1 local_5;

  puVar1 = &stack0xfffffffc;
  puStackY_24 = (undefined1 *)0x4268ea;
  VariantInit(&local_15);
  puStackY_24 = &LAB_0042692c;
  uStackY_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_28;
  FUN_00424d3c(&local_15,param_1);
  (*DAT_00787f2c)(&local_15);
  local_5 = FUN_00426988(&local_15);
  *in_FS_OFFSET = uStackY_28;
  puStackY_24 = (undefined1 *)0x42692b;
  FUN_004249d4(&local_15,uStackY_28,puVar1);
  return;
}
