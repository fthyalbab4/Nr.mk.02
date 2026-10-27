// rea decompile_all
// name: FUN_00426cb8
// address: 0x426cb8
// body: available
// range: 0x426cb8-0x426d0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x426cd5 (push 0x426d0d followed by fs-segment stack chaining); handler 0x426d0d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00426cb8(undefined4 param_1)

{
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  undefined4 uStackY_2c;
  undefined1 *puStackY_28;
  undefined1 *puVar1;
  VARIANTARG local_1c;
  double local_c;

  puVar1 = &stack0xfffffffc;
  puStackY_28 = (undefined1 *)0x426cca;
  VariantInit(&local_1c);
  puStackY_28 = &LAB_00426d0d;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  FUN_00424e1c(&local_1c,param_1);
  (*DAT_0068ef2c)(&local_1c);
  FUN_00426d68(&local_1c);
  local_c = (double)in_ST0;
  *in_FS_OFFSET = uStackY_2c;
  puStackY_28 = (undefined1 *)0x426d0c;
  FUN_00424ab4(&local_1c,uStackY_2c,puVar1);
  return;
}
