// rea decompile_all
// name: FUN_0045fe54
// address: 0x45fe54
// body: available
// range: 0x45fe54-0x45fec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x45fe7b (push 0x45fec4 followed by fs-segment stack chaining); handler 0x45fec4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045fe54(undefined4 param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_c;
  undefined4 local_8;

  local_8 = 0;
  local_c = 0;
  if (param_2 != '\0') {
    puStack_2c = (undefined1 *)0x45fe6a;
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
  }
  puStack_30 = &LAB_0045fec4;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  FUN_00460398(param_3,&local_8);
  uVar2 = local_8;
  FUN_00460400(param_3,&local_c);
  uVar1 = local_c;
  FUN_0045feec(param_1,0,param_3,local_c,uVar2);
  *in_FS_OFFSET = uVar1;
  thunk_FUN_00406e80(&local_c,2,param_4,&LAB_0045fecb);
  return;
}
