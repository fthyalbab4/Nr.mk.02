// rea decompile_all
// name: FUN_004a9980
// address: 0x4a9980
// body: available
// range: 0x4a9980-0x4a9afe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4a99a4 (push 0x4a9aff followed by fs-segment stack chaining); handler 0x4a9aff lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a9980(int *param_1,undefined *param_2,int param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined *puStackY_48;
  undefined *in_stack_ffffffc0;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  char local_d;
  int local_c;
  undefined *local_8;

  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  local_14 = 0;
  puStack_2c = &LAB_004a9aff;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_d = '\0';
  iVar3 = *param_1;
  puVar1 = &stack0xfffffffc;
  local_c = param_3;
  local_8 = param_2;
  if ((iVar3 != 0) && (puVar1 = &stack0xfffffffc, *(short *)(iVar3 + -10) != 2)) {
    iVar3 = FUN_00407488(param_1,*param_1);
    puVar1 = puStack_28;
  }
  puStack_28 = puVar1;
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + -4);
  }
  if (0 < iVar4) {
    iVar3 = 1;
    do {
      cVar2 = FUN_004100f0(*(undefined2 *)(*param_1 + -2 + iVar3 * 2));
      if ((cVar2 == '\a') || (cVar2 == '\x0f')) {
        local_d = '\x01';
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_d == '\0') {
    if (local_c != 0) {
      FUN_00408ac8(&DAT_004a9b40,param_1,local_c);
    }
  }
  else {
    iVar3 = *param_1;
    if ((iVar3 != 0) && (*(short *)(iVar3 + -10) != 2)) {
      iVar3 = FUN_00407488(param_1,*param_1);
    }
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4);
    }
    uVar5 = iVar4 + -2 == 0;
    FUN_00408984(*param_1,iVar4 + -2,3,&local_14);
    FUN_0040891c(local_14,&DAT_004a9b1c);
    if ((bool)uVar5) {
      iVar3 = *param_1;
      if ((iVar3 != 0) && (*(short *)(iVar3 + -10) != 2)) {
        iVar3 = FUN_00407488(param_1,*param_1);
      }
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + -4);
      }
      FUN_00408984(*param_1,1,iVar4 + -3,&local_18);
      in_stack_ffffffc0 = &DAT_004a9b30;
      puStackY_48 = local_8;
      FUN_0040875c(param_1,6);
    }
    else {
      in_stack_ffffffc0 = &DAT_004a9b40;
      puStackY_48 = &DAT_004a9b50;
      FUN_0040875c(param_1,5);
    }
  }
  *in_FS_OFFSET = puStackY_48;
  thunk_FUN_004072fc(&local_18,2,in_stack_ffffffc0,&LAB_004a9b06);
  return;
}
