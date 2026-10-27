// rea decompile_all
// name: FUN_0051f674
// address: 0x51f674
// body: available
// range: 0x51f674-0x51f72b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x51f6aa (push 0x51f72c followed by fs-segment stack chaining); handler 0x51f72c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051f674(int param_1,char param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  undefined4 extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;

  local_14 = 0;
  local_10 = 0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStack_34 = (undefined1 *)0x51f691;
    param_1 = FUN_00406510();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puStack_38 = &LAB_0051f72c;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  local_c = param_3;
  FUN_0051f5a8(param_1,0,param_3,param_7);
  if (((char)param_7 != '\x03') && ((char)param_7 != '\x06')) {
    FUN_0040b9d0(&LAB_0051ebbc,&local_10);
    FUN_0051eddc(local_10);
  }
  if ((param_6 == 0) || (param_5 == 0)) {
    FUN_0040b9d0(&LAB_0051ebc4,&local_14);
    FUN_0051eddc(local_14);
  }
  puVar1 = puStack_34;
  *(int *)(param_1 + 0x20) = param_5;
  *(int *)(param_1 + 0x24) = param_6;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0051f733;
  puStack_38 = (undefined1 *)0x51f72b;
  thunk_FUN_004072fc(&local_14,2,puVar1);
  return;
}
