// rea decompile_all
// name: FUN_0057febc
// address: 0x57febc
// body: available
// range: 0x57febc-0x57ff25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x57fee1 (push 0x57ff26 followed by fs-segment stack chaining); handler 0x57ff26 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057febc(int param_1,char param_2,undefined4 param_3)

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
    puStack_28 = (undefined1 *)0x57fed0;
    param_1 = FUN_00406510();
    param_3 = extraout_ECX;
  }
  puStack_2c = &LAB_0057ff26;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  FUN_00405fac(param_1,0);
  FUN_005806d0(&PTR_FUN_0057dc50,&local_8);
  FUN_0040b280(param_1 + 0xc,local_8);
  FUN_005801c0(param_1,0,param_3);
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0057ff2d;
  puStack_2c = (undefined1 *)0x57ff25;
  FUN_0040b268(&local_8,uStack_30,puVar1);
  return;
}
