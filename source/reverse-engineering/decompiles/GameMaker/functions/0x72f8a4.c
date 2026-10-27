// rea decompile_all
// name: FUN_0072f8a4
// address: 0x72f8a4
// body: available
// range: 0x72f8a4-0x72f90d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x72f8c9 (push 0x72f90e followed by fs-segment stack chaining); handler 0x72f90e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0072f8a4(int param_1,char param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_8;

  local_8 = 0;
  if (param_2 != '\0') {
    puStack_28 = (undefined1 *)0x72f8b8;
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
  }
  puStack_2c = &LAB_0072f90e;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_00405a4c(param_1,0);
  FUN_00730208(&PTR_FUN_0073058c,&local_8);
  FUN_0040b158(param_1 + 0xc,local_8);
  FUN_0072fbb8(param_1,0,param_3);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0072f915;
  puStack_2c = (undefined1 *)0x72f90d;
  FUN_0040b140(&local_8,uStack_30,puVar1);
  return;
}
