// rea decompile_all
// name: FUN_005cab80
// address: 0x5cab80
// body: available
// range: 0x5cab80-0x5cabe8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cab99 (push 0x5cabe9 followed by fs-segment stack chaining); handler 0x5cabe9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cab80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int *in_FS_OFFSET;
  undefined4 *puVar2;
  int iStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_005cabe9;
  iStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_20;
  puVar2 = &local_8;
  FUN_005c40d4(*(undefined4 *)(param_1 + 0x50),param_2,param_3,puVar2,param_5,param_1,0);
  iVar1 = FUN_005c5adc(&PTR_LAB_005c25d8,1,local_8);
  if (iVar1 != 0) {
    iVar1 = iVar1 + 0x48;
  }
  FUN_0040b158(param_4,iVar1);
  *in_FS_OFFSET = (int)puVar2;
  FUN_0040b140(&local_8,puVar2,param_1,&LAB_005cabf0);
  return;
}
