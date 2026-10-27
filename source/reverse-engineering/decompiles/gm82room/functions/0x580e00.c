// rea decompile_all
// name: FUN_00580e00
// address: 0x580e00
// body: available
// range: 0x580e00-0x580ee6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x580e2d (push 0x580ee7 followed by fs-segment stack chaining); handler 0x580ee7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00580e00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,byte param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  puStack_1c = (undefined1 *)0x580e1d;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_20 = &LAB_00580ee7;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  iVar1 = FUN_00409c34(DAT_00686ae0);
  if (iVar1 == DAT_00686ae8) {
    FUN_00409dfc(&DAT_00686ae0,&DAT_00580b04,1,DAT_00686ae8 + 5);
    FUN_00409dfc(&DAT_00686ae4,&DAT_00580b2c,1,DAT_00686ae8 + 5);
  }
  DAT_00686ae8 = DAT_00686ae8 + 1;
  uVar2 = (uint)param_6;
  uVar3 = FUN_0057e5b8(&DAT_0057c260,1,local_8,param_4,param_5,uVar2,param_3,param_2);
  *(undefined4 *)(DAT_00686ae0 + -4 + DAT_00686ae8 * 4) = uVar3;
  FUN_0041636c(DAT_00686ae8 + -1,&local_c);
  FUN_00408678(DAT_00686ae4 + -4 + DAT_00686ae8 * 4,L"__newfont",local_c);
  *in_FS_OFFSET = param_4;
  thunk_FUN_004072fc(&local_c,2,uVar2,&LAB_00580eee);
  return;
}
