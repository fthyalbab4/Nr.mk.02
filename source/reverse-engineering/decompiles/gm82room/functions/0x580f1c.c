// rea decompile_all
// name: FUN_00580f1c
// address: 0x580f1c
// body: available
// range: 0x580f1c-0x580ffc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x580f35 (push 0x580ffd followed by fs-segment stack chaining); handler 0x580ffd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00580f1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00580ffd;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar2 = FUN_00409c34(DAT_00686ae0);
  if (iVar2 == DAT_00686ae8) {
    FUN_00409dfc(&DAT_00686ae0,&DAT_00580b04,1,DAT_00686ae8 + 5);
    FUN_00409dfc(&DAT_00686ae4,&DAT_00580b2c,1,DAT_00686ae8 + 5);
  }
  DAT_00686ae8 = DAT_00686ae8 + 1;
  uVar3 = FUN_0057e6a0(&DAT_0057c260,1,param_1,param_4,param_3,param_2);
  *(undefined4 *)(DAT_00686ae0 + -4 + DAT_00686ae8 * 4) = uVar3;
  FUN_0041636c(DAT_00686ae8 + -1,&local_8);
  FUN_00408678(DAT_00686ae4 + -4 + DAT_00686ae8 * 4,L"__newfont",local_8);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00581004;
  puStack_1c = (undefined1 *)0x580ffc;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
