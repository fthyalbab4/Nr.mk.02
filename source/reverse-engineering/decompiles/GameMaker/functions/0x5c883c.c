// rea decompile_all
// name: FUN_005c883c
// address: 0x5c883c
// body: available
// range: 0x5c883c-0x5c88cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c8860 (push 0x5c88cd followed by fs-segment stack chaining); handler 0x5c88cd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c883c(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,undefined4 *param_5
                 )

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0;
  local_10 = 0;
  puStack_28 = &LAB_005c88cd;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_3 != param_4) {
    FUN_0040b75c(PTR_PTR_00781f78,&local_10);
    FUN_005c4098(local_10);
    puVar1 = puStack_24;
  }
  puStack_24 = puVar1;
  if (-1 < param_3) {
    param_3 = param_3 + 1;
    puVar2 = local_c;
    do {
      uVar3 = 0x5c8899;
      FUN_005c85dc(local_8,&local_14);
      uStack_2c = local_14;
      FUN_005c72f8(local_8,*puVar2,*param_5,uVar3);
      param_5 = param_5 + 1;
      puVar2 = puVar2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_005c88d4;
  puStack_28 = (undefined1 *)0x5c88cc;
  thunk_FUN_00406e80(&local_14,2,puVar1);
  return;
}
