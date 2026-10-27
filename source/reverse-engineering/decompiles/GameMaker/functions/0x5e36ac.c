// rea decompile_all
// name: FUN_005e36ac
// address: 0x5e36ac
// body: available
// range: 0x5e36ac-0x5e372f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e36c5 (push 0x5e3730 followed by fs-segment stack chaining); handler 0x5e3730 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e36ac(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int extraout_EDX;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_005e3730;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (0 < param_3) {
    FUN_00409be0(&local_8,&DAT_004108f8,1,param_3);
    iVar2 = 0;
    if ((local_8 == 0) || (iVar3 = local_8, *(int *)(local_8 + -4) == 0)) {
      iVar2 = thunk_FUN_00404478();
      iVar3 = extraout_EDX;
    }
    FUN_0040450c(param_2,iVar3 + iVar2,param_3);
    (**(code **)(*param_1 + 0x20))(param_1,local_8,0,param_3);
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005e3737;
  puStack_1c = (undefined1 *)0x5e372f;
  FUN_00409ce0(&local_8,&DAT_004108f8,puVar1);
  return;
}
