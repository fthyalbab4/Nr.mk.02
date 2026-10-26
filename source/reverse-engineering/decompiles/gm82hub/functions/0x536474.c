// rea decompile_all
// name: FUN_00536474
// address: 0x536474
// body: available
// range: 0x536474-0x53651d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5364a6 (push 0x53651e followed by fs-segment stack chaining); handler 0x53651e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00536474(int param_1,char param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  undefined1 local_9;
  int local_8;

  local_10 = 0;
  local_8 = 0;
  local_9 = 0;
  if (param_2 != '\0') {
    puStack_38 = (undefined1 *)0x536491;
    param_1 = FUN_00406510();
    param_3 = extraout_ECX;
    local_9 = extraout_DL;
  }
  puStack_3c = &LAB_0053651e;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  uStack_44 = 0x5364b3;
  puStack_38 = &stack0xfffffffc;
  FUN_004081e8(&local_8,param_3);
  if (local_8 == 0) {
    uStack_44 = 0x5364c3;
    FUN_0041b234(param_5,&local_8);
    if (local_8 == 0) {
      uStack_44 = 0;
      FUN_0040b9d0(PTR_LAB_00688a60,&local_10);
      local_18 = param_5;
      local_14 = 0;
      FUN_00417c9c(&local_8,local_10,&local_18);
    }
  }
  FUN_0041bfe4(param_1,0,local_8,param_4);
  puVar1 = puStack_3c;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *in_FS_OFFSET = uStack_44;
  puStack_3c = &LAB_00536525;
  uStack_40 = 0x536515;
  thunk_FUN_004072d8(&local_10,uStack_44,puVar1);
  uStack_40 = 0x53651d;
  thunk_FUN_004072d8(&local_8);
  return;
}
