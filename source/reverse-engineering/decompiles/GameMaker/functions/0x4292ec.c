// rea decompile_all
// name: FUN_004292ec
// address: 0x4292ec
// body: available
// range: 0x4292ec-0x429341 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42930c (push 0x429342 followed by fs-segment stack chaining); handler 0x429342 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004292ec(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_28;
  undefined1 *puStackY_24;
  undefined1 *puVar1;
  VARIANTARG local_14;

  puVar1 = &stack0xfffffffc;
  puStackY_24 = (undefined1 *)0x429301;
  VariantInit(&local_14);
  puStackY_24 = &LAB_00429342;
  uStackY_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_28;
  FUN_00424d3c(&local_14,param_1);
  (*DAT_00787f2c)(&local_14);
  FUN_00429418(param_2,&local_14);
  *in_FS_OFFSET = uStackY_28;
  puStackY_24 = (undefined1 *)0x429341;
  FUN_004249d4(&local_14,uStackY_28,puVar1);
  return;
}
