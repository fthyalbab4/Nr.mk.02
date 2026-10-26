// rea decompile_all
// name: FUN_005b8508
// address: 0x5b8508
// body: available
// range: 0x5b8508-0x5b858a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5b851a (push 0x5b858b followed by fs-segment stack chaining); handler 0x5b858b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b8508(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_14 = &LAB_005b858b;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  *(undefined4 *)PTR_DAT_00688c4c = param_1;
  *(undefined4 *)PTR_DAT_006889c0 = param_2;
  cVar2 = FUN_00571240(*(undefined4 *)PTR_DAT_00688c4c);
  if (cVar2 == '\0') {
    FUN_0041636c(*(undefined4 *)PTR_DAT_00688c4c,&local_c);
    FUN_00408678(&local_8,&PTR_DAT_005b85a4,local_c);
    FUN_0061156c(local_8,1);
    *(undefined4 *)PTR_DAT_00688c4c = 0xfffffe70;
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005b8592;
  puStack_14 = (undefined1 *)0x5b858a;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
