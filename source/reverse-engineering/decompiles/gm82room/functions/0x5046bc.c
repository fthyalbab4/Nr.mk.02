// rea decompile_all
// name: FUN_005046bc
// address: 0x5046bc
// body: available
// range: 0x5046bc-0x504800 inclusive
// range: 0x504863-0x504885 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5046d9 (push 0x504886 followed by fs-segment stack chaining); handler 0x504886 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5047a4 (push 0x504801 followed by fs-segment stack chaining); handler 0x504801 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005046bc(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined2 *local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = (undefined2 *)0x0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_00504886;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puVar1 = &stack0xfffffffc;
  local_c = param_1;
  if (param_2 != 0) {
    puStack_34 = (undefined1 *)0x5046ee;
    FUN_004173f0(param_2,&local_10);
    puStack_34 = (undefined1 *)0x5046fe;
    FUN_00500354(local_10,&DAT_005048a0,&local_8);
    puVar2 = local_8;
    if ((local_8 != (undefined2 *)0x0) && (local_8[-5] != 2)) {
      puStack_34 = (undefined1 *)0x50471b;
      puVar2 = (undefined2 *)FUN_00407488(&local_8,local_8);
    }
    iVar3 = 0;
    if (puVar2 != (undefined2 *)0x0) {
      iVar3 = *(int *)(puVar2 + -2);
    }
    puVar1 = puStack_28;
    if (2 < iVar3) {
      puVar2 = local_8;
      if ((local_8 != (undefined2 *)0x0) && (local_8[-5] != 2)) {
        puStack_34 = (undefined1 *)0x50474a;
        puVar2 = (undefined2 *)FUN_00407488(&local_8,local_8);
      }
      puVar1 = puStack_28;
      if (puVar2[1] == 0x3a) {
        puVar2 = local_8;
        if ((local_8 != (undefined2 *)0x0) && (local_8[-5] != 2)) {
          puStack_34 = (undefined1 *)0x504772;
          puVar2 = (undefined2 *)FUN_00407488(&local_8,local_8);
        }
        puStack_34 = (undefined1 *)0x504783;
        FUN_00501338(*(undefined4 *)(local_c + 0x390),*puVar2);
        puStack_34 = (undefined1 *)0x50478e;
        FUN_00417028(local_8,&local_14);
        puStack_34 = (undefined1 *)0x504799;
        FUN_004081e8(&local_8,local_14);
        puStack_38 = &LAB_00504801;
        uStack_3c = *in_FS_OFFSET;
        *in_FS_OFFSET = &uStack_3c;
        puVar2 = local_8;
        puStack_34 = &stack0xfffffffc;
        if ((local_8 != (undefined2 *)0x0) && (puStack_34 = &stack0xfffffffc, local_8[-5] != 2)) {
          puStack_34 = &stack0xfffffffc;
          puVar2 = (undefined2 *)FUN_00407488(&local_8,local_8);
        }
        iVar3 = 0;
        if (puVar2 != (undefined2 *)0x0) {
          iVar3 = *(int *)(puVar2 + -2);
        }
        FUN_00408984(local_8,1,iVar3 + -1,&local_18);
        (**(code **)(**(int **)(local_c + 0x388) + 300))(*(int **)(local_c + 0x388),local_18);
        *in_FS_OFFSET = uStack_3c;
        puVar1 = puStack_28;
      }
    }
  }
  puStack_28 = puVar1;
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0050488d;
  puStack_2c = (undefined1 *)0x50487d;
  thunk_FUN_004072fc(&local_18,3,puVar1);
  puStack_2c = (undefined1 *)0x504885;
  thunk_FUN_004072d8(&local_8);
  return;
}
