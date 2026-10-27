// rea decompile_all
// name: FUN_0042a6bc
// address: 0x42a6bc
// body: available
// range: 0x42a6bc-0x42a72c inclusive
// range: 0x42a734-0x42a745 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42a6f5 (push 0x42a72d followed by fs-segment stack chaining); handler 0x42a72d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a6bc(short *param_1,short *param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_2c;
  undefined1 *puStackY_28;
  undefined1 *puVar1;
  VARIANTARG local_14;

  puVar1 = &stack0xfffffffc;
  if (*param_1 == 0x101) {
    (*DAT_00787f2c)(param_1);
  }
  if (*param_2 == 0x101) {
    puStackY_28 = (undefined1 *)0x42a6ea;
    VariantInit(&local_14);
    puStackY_28 = &LAB_0042a72d;
    uStackY_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_2c;
    FUN_00424d3c(&local_14,param_2);
    (*DAT_00787f2c)(&local_14);
    FUN_0042b2cc(param_1,&local_14,param_3);
    *in_FS_OFFSET = uStackY_2c;
    puStackY_28 = (undefined1 *)0x42a72c;
    FUN_004249d4(&local_14,uStackY_2c,puVar1);
    return;
  }
  FUN_0042b2cc(param_1,param_2,param_3);
  return;
}
