// rea decompile_all
// name: FUN_00613d88
// address: 0x613d88
// body: available
// range: 0x613d88-0x613e41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x613da3 (push 0x613e42 followed by fs-segment stack chaining); handler 0x613e42 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00613d88(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_00613e42;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar1 = FUN_005e1b90(param_2,param_3 >> 0x1f,param_3,param_3,param_3 >> 0x1f);
  if (iVar1 >> 0x1f != extraout_EDX) {
    iVar1 = thunk_FUN_00404478();
  }
  if (0 < iVar1) {
    FUN_00409be0(&local_8,&DAT_004108f8,1,iVar1);
    FUN_005df820(&LAB_005df694,param_2,&local_8,0,iVar1);
    FUN_00613e50(param_1,local_8,&local_c);
    FUN_00409d1c(&local_8,local_c,&DAT_004108f8);
    FUN_005df9bc(&LAB_005df694,*(undefined4 *)(param_1 + 0x34),local_8,0,0xffffffff);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00613e49;
  puStack_20 = (undefined1 *)0x613e41;
  FUN_00408e44(&local_c,&DAT_004108f8,2);
  return;
}
