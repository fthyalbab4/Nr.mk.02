// rea decompile_all
// name: FUN_00424e60
// address: 0x424e60
// body: available
// range: 0x424e60-0x424ebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x424e83 (push 0x424ebc followed by fs-segment stack chaining); handler 0x424ebc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00424e60(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  undefined1 *puStackY_28;
  undefined1 *puVar1;
  VARIANTARG local_14;

  puVar1 = &stack0xfffffffc;
  puStackY_28 = (undefined1 *)0x424e78;
  VariantInit(&local_14);
  puStackY_28 = &LAB_00424ebc;
  uStackY_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_2c;
  FUN_00424e1c(&local_14,param_2);
  (*DAT_0068ef2c)(&local_14);
  FUN_00425134(param_1,&local_14,param_3);
  *in_FS_OFFSET = uStackY_2c;
  puStackY_28 = (undefined1 *)0x424ebb;
  FUN_00424ab4(&local_14,uStackY_2c,puVar1);
  return;
}
