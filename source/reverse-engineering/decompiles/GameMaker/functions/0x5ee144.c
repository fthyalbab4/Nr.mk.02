// rea decompile_all
// name: FUN_005ee144
// address: 0x5ee144
// body: available
// range: 0x5ee144-0x5ee265 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ee16c (push 0x5ee266 followed by fs-segment stack chaining); handler 0x5ee266 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ee144(int *param_1,undefined2 *param_2,char param_3,undefined4 *param_4)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined *puStack_54;
  undefined4 in_stack_ffffffb4;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 *local_c;
  int *local_8;

  puStack_30 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = (undefined *)0x0;
  local_20 = 0;
  puStack_34 = &LAB_005ee266;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_c = param_2;
  local_8 = param_1;
  if (param_3 == '\0') {
    FUN_0041666c(*(undefined1 *)param_2,&local_10);
    FUN_0041666c(*(undefined1 *)((int)local_c + 1),&local_14);
    FUN_0041666c(*(undefined1 *)(local_c + 1),&local_18);
    in_stack_ffffffb4 = local_18;
    FUN_0041666c(*(undefined1 *)((int)local_c + 3),&local_1c);
    puStack_54 = local_1c;
    FUN_00408480(param_4,7);
  }
  else if (param_3 == '\x01') {
    puStack_30 = &stack0xfffffffc;
    FUN_00407eb8(param_4,0);
    iVar3 = 8;
    puVar2 = local_c;
    do {
      uVar1 = (**(code **)(*local_8 + 0x54))(local_8,*puVar2,*local_8,*param_4);
      FUN_004168d8(uVar1,1,&local_20);
      puStack_54 = &DAT_005ee294;
      FUN_00408480(param_4,3);
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = FUN_00408238(*param_4);
    if (SBORROW4(iVar3,1)) {
      FUN_00405944(iVar3,iVar3 + -1);
    }
    FUN_00408244(param_4);
  }
  else {
    puStack_30 = &stack0xfffffffc;
    FUN_005f3db8(param_1);
  }
  *in_FS_OFFSET = puStack_54;
  thunk_FUN_00406e80(&local_20,5,in_stack_ffffffb4,&LAB_005ee26d);
  return;
}
