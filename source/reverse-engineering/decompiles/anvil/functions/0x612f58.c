// rea decompile_all
// name: FUN_00612f58
// address: 0x612f58
// body: available
// range: 0x612f58-0x61308d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x612f75 (push 0x61308e followed by fs-segment stack chaining); handler 0x61308e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00612f58(undefined4 param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;

  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  local_10 = 0;
  local_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  local_20 = 0;
  puStack_30 = &LAB_0061308e;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  uStack_c = 0;
  *PTR_PTR_00688e10 = 0;
  *param_2 = 0;
  FUN_00409dfc(param_2 + 1,&DAT_00611974,1,1);
  local_10 = 1;
  FUN_00616838(param_1,&local_14);
  FUN_00408678(&local_8,local_14,&DAT_006130ac);
  while( true ) {
    iVar2 = FUN_00409c34(param_2[1]);
    if (iVar2 <= *param_2) {
      FUN_00409dfc(param_2 + 1,&DAT_00611974,1,*param_2 + 3);
    }
    *param_2 = *param_2 + 1;
    FUN_00612ce8(&local_8,&local_10,&local_20);
    FUN_00409360(param_2[1] + -0xc + *param_2 * 0xc,&local_20,&DAT_00611918);
    if (*(int *)(param_2[1] + -0xc + *param_2 * 0xc) == -1) break;
    if (*(int *)(param_2[1] + -0xc + *param_2 * 0xc) == -2) {
      uStack_c = CONCAT13(1,(undefined3)uStack_c);
      FUN_004081e8(&local_8,0);
      FUN_00408520(&local_8,0);
LAB_00613062:
      puVar1 = puStack_2c;
      *in_FS_OFFSET = uStack_34;
      puStack_2c = &LAB_00613095;
      puStack_30 = (undefined1 *)0x61307d;
      FUN_004090d0(&local_20,&DAT_00611918,puVar1);
      puStack_30 = (undefined1 *)0x613085;
      thunk_FUN_004072d8(&local_14);
      puStack_30 = (undefined1 *)0x61308d;
      thunk_FUN_004072d8(&local_8);
      return;
    }
  }
  FUN_00610d7c(param_1,*(undefined4 *)(param_2[1] + -4 + *param_2 * 0xc),&PTR_DAT_006130c0);
  goto LAB_00613062;
}
