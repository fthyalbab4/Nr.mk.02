// rea decompile_all
// name: FUN_0042b35c
// address: 0x42b35c
// body: available
// range: 0x42b35c-0x42b3f2 inclusive
// range: 0x42b3fa-0x42b41e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42b37f (push 0x42b41f followed by fs-segment stack chaining); handler 0x42b41f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x42b3b7 (push 0x42b3f3 followed by fs-segment stack chaining); handler 0x42b3f3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042b35c(short *param_1,short *param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_4c;
  undefined1 *puStackY_48;
  undefined1 *puVar1;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puVar2;
  VARIANTARG local_25;
  VARIANTARG local_15;
  undefined1 local_5;

  puVar2 = &stack0xfffffffc;
  puVar1 = &stack0xfffffffc;
  puStack_3c = (undefined1 *)0x42b374;
  VariantInit(&local_15);
  puStack_3c = &LAB_0042b41f;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  FUN_00424d3c(&local_15,param_1);
  if (*param_1 == 0x101) {
    (*DAT_00787f2c)(&local_15);
  }
  if (*param_2 == 0x101) {
    puStackY_48 = (undefined1 *)0x42b3ac;
    VariantInit(&local_25);
    puStackY_48 = &LAB_0042b3f3;
    uStackY_4c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_4c;
    FUN_00424d3c(&local_25,param_2);
    (*DAT_00787f2c)(&local_25);
    local_5 = FUN_0042bc84(&local_15,&local_25,param_3);
    *in_FS_OFFSET = uStackY_4c;
    puStackY_48 = (undefined1 *)0x42b3f2;
    FUN_004249d4(&local_25,uStackY_4c,puVar1);
    return;
  }
  local_5 = FUN_0042bc84(&local_15,param_2,param_3);
  *in_FS_OFFSET = uStack_40;
  puStack_3c = (undefined1 *)0x42b41e;
  FUN_004249d4(&local_15,uStack_40,puVar2);
  return;
}
