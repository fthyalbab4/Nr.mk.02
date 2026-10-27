// rea decompile_all
// name: FUN_0053be98
// address: 0x53be98
// body: available
// range: 0x53be98-0x53bf4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x53bece (push 0x53bf50 followed by fs-segment stack chaining); handler 0x53bf50 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053be98(int param_1,char param_2,undefined4 param_3,undefined4 param_4,int param_5,
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
    puStack_34 = (undefined1 *)0x53beb5;
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puStack_38 = &LAB_0053bf50;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  local_c = param_3;
  FUN_0053bdcc(param_1,0,param_3,param_7);
  if (((char)param_7 != '\x03') && ((char)param_7 != '\x06')) {
    FUN_0040b75c(&PTR_DAT_0053b3e0,&local_10);
    FUN_0053b600(local_10);
  }
  if ((param_6 == 0) || (param_5 == 0)) {
    FUN_0040b75c(&PTR_DAT_0053b3e8,&local_14);
    FUN_0053b600(local_14);
  }
  puVar1 = puStack_34;
  *(int *)(param_1 + 0x20) = param_5;
  *(int *)(param_1 + 0x24) = param_6;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0053bf57;
  puStack_38 = (undefined1 *)0x53bf4f;
  thunk_FUN_00406e80(&local_14,2,puVar1);
  return;
}
