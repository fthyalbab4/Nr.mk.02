// rea decompile_all
// name: FUN_006fef10
// address: 0x6fef10
// body: available
// range: 0x6fef10-0x6ff020 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6fef2b (push 0x6ff021 followed by fs-segment stack chaining); handler 0x6ff021 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006fef10(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 in_stack_ffffffcc;
  undefined4 uVar4;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_28 = &LAB_006ff021;
  puStack_2c = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_2c;
  puVar1 = &stack0xfffffffc;
  if ((*PTR_DAT_007815f8 == '\0') && (puVar1 = &stack0xfffffffc, *(int *)PTR_DAT_00782044 != 0)) {
    cVar2 = FUN_00416e40(*(undefined4 *)PTR_DAT_00782044);
    puVar1 = puStack_24;
    if (cVar2 != '\0') {
      FUN_0051acd0(*(undefined4 *)PTR_DAT_00781a58);
      FUN_007104b0(*param_1,0,&local_10);
      FUN_00533aa8(local_10,*(undefined4 *)PTR_DAT_00782044,&local_8);
      FUN_0051acd8(*(undefined4 *)PTR_DAT_00781a58);
      uVar3 = 1;
      FUN_007104b0(*param_1,0,&local_14);
      FUN_00408640(local_8,local_14);
      param_2 = in_stack_ffffffcc;
      if (!(bool)uVar3) {
        FUN_007104dc(*param_1,0,local_8);
        param_2 = in_stack_ffffffcc;
      }
      goto LAB_006feffe;
    }
  }
  puStack_24 = puVar1;
  FUN_007104b0(*param_1,0,&local_8);
  local_c = *(undefined4 *)(*param_1 + 0x44);
  uVar4 = 1;
  FUN_006fff10(*param_1,&local_18);
  cVar2 = FUN_00681ba0(&local_8,&local_c,local_18,param_2,uVar4);
  if (cVar2 != '\0') {
    *(undefined4 *)(*param_1 + 0x44) = local_c;
    FUN_007104dc(*param_1,0,local_8);
  }
LAB_006feffe:
  puVar1 = puStack_2c;
  *in_FS_OFFSET = param_2;
  puStack_2c = &LAB_006ff028;
  thunk_FUN_00406e80(&local_18,3,puVar1);
  thunk_FUN_00406e5c(&local_8);
  return;
}
