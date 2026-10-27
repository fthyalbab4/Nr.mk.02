// rea decompile_all
// name: FUN_005ee298
// address: 0x5ee298
// body: available
// range: 0x5ee298-0x5ee3df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ee2c3 (push 0x5ee3e0 followed by fs-segment stack chaining); handler 0x5ee3e0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ee298(int *param_1,undefined4 param_2,undefined4 *param_3,char param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int *in_FS_OFFSET;
  byte bVar3;
  undefined4 auStackY_1814 [1513];
  undefined4 *in_stack_ffffff90;
  undefined4 *in_stack_ffffff98;
  int iStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined4 local_38;
  undefined4 auStack_34 [7];
  undefined1 local_18 [16];
  undefined4 local_8;

  bVar3 = 0;
  puStack_48 = &stack0xfffffffc;
  auStack_34[3] = 0;
  auStack_34[4] = 0;
  auStack_34[5] = 0;
  auStack_34[6] = 0;
  local_8 = 0;
  puStack_4c = &LAB_005ee3e0;
  iStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_50;
  if (param_4 == '\0') {
    FUN_00407f0c(&local_8,param_2);
    FUN_005e07ec(&local_8,&LAB_005ee3fc,1,auStack_34 + 6,1);
    uVar1 = FUN_005e25f0(auStack_34[6]);
    if (0xff < uVar1) {
      uVar1 = thunk_FUN_00404478();
    }
    *(char *)param_3 = (char)uVar1;
    FUN_005e07ec(&local_8,&LAB_005ee3fc,1,auStack_34 + 5,1);
    uVar1 = FUN_005e25f0(auStack_34[5]);
    if (0xff < uVar1) {
      uVar1 = thunk_FUN_00404478();
    }
    *(char *)((int)param_3 + 1) = (char)uVar1;
    in_stack_ffffff98 = auStack_34 + 4;
    FUN_005e07ec(&local_8,&LAB_005ee3fc,1,in_stack_ffffff98,1);
    uVar1 = FUN_005e25f0(auStack_34[4]);
    if (0xff < uVar1) {
      uVar1 = thunk_FUN_00404478();
    }
    *(char *)((int)param_3 + 2) = (char)uVar1;
    in_stack_ffffff90 = auStack_34 + 3;
    FUN_005e07ec(&local_8,&LAB_005ee3fc,1,in_stack_ffffff90,1);
    uVar1 = FUN_005e25f0(auStack_34[3]);
    if (0xff < uVar1) {
      uVar1 = thunk_FUN_00404478();
    }
    *(char *)((int)param_3 + 3) = (char)uVar1;
  }
  else if (param_4 == '\x01') {
    puStack_48 = &stack0xfffffffc;
    FUN_005e1688(param_2,local_18);
    (**(code **)(*param_1 + 0x38))(param_1,local_18,&local_38);
    puVar2 = param_3 + (uint)bVar3 * -2 + 1;
    *param_3 = local_38;
    *puVar2 = auStack_34[(uint)bVar3 * -2];
    puVar2[(uint)bVar3 * -2 + 1] = auStack_34[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
    (puVar2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
         (auStack_34 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1];
  }
  else {
    puStack_48 = &stack0xfffffffc;
    FUN_005f3db8(param_1);
  }
  *in_FS_OFFSET = (int)in_stack_ffffff90;
  thunk_FUN_00406e80(auStack_34 + 3,4,in_stack_ffffff98,&LAB_005ee3e7);
  thunk_FUN_00406e5c(&local_8);
  return;
}
