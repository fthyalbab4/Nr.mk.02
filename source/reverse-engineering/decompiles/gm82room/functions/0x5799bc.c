// rea decompile_all
// name: FUN_005799bc
// address: 0x5799bc
// body: available
// range: 0x5799bc-0x579ab2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5799ea (push 0x579ab3 followed by fs-segment stack chaining); handler 0x579ab3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005799bc(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,byte param_6)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined1 local_9;
  undefined4 local_8;

  local_10 = 0;
  puStack_20 = (undefined1 *)0x5799da;
  local_9 = param_3;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_24 = &LAB_00579ab3;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  DAT_00686ad0 = DAT_00686ad0 + 1;
  puStack_20 = &stack0xfffffffc;
  FUN_00409dfc(&DAT_00686ac8,&DAT_0057968c,1,DAT_00686ad0);
  FUN_00409dfc(&DAT_00686acc,&DAT_005796b8,1,DAT_00686ad0);
  FUN_0041636c(DAT_00686ad0 + -1,&local_10);
  FUN_00408678(DAT_00686acc + -4 + DAT_00686ad0 * 4,L"__newsprite",local_10);
  uVar2 = FUN_00624e6c(&LAB_00622954,1);
  *(undefined4 *)(DAT_00686ac8 + -4 + DAT_00686ad0 * 4) = uVar2;
  uVar3 = (uint)param_6;
  cVar1 = FUN_0062447c(*(undefined4 *)(DAT_00686ac8 + -4 + DAT_00686ad0 * 4),local_8,param_2,param_4
                       ,param_5,uVar3,local_9);
  if (cVar1 == '\0') {
    DAT_00686ad0 = DAT_00686ad0 + -1;
  }
  *in_FS_OFFSET = param_4;
  thunk_FUN_004072d8(&local_10,param_4,uVar3,&LAB_00579aba);
  thunk_FUN_004072d8(&local_8);
  return;
}
