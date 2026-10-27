// rea decompile_all
// name: FUN_006b09f4
// address: 0x6b09f4
// body: available
// range: 0x6b09f4-0x6b0b98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b0a0c (push 0x6b0b99 followed by fs-segment stack chaining); handler 0x6b0b99 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b09f4(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined *puVar5;
  undefined4 uVar6;
  wchar_t *pwVar7;
  undefined4 uVar8;
  wchar_t *pwVar9;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_006b0b99;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  FUN_004ee5c0(*(undefined4 *)(param_1 + 0x298),*PTR_DAT_007817f4);
  if (*PTR_DAT_007817f4 != '\0') {
    FUN_006b7f3c(param_1,&local_8);
    cVar2 = FUN_006ae554(local_8);
    if (cVar2 == '\0') {
      *(int *)(param_1 + 0x348) = *(int *)PTR_DAT_00781994 + -1;
      *(int *)(param_1 + 0x34c) = *(int *)PTR_DAT_00781974 + -1;
      iVar3 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
      if (iVar3 <= *(int *)(param_1 + 0x348)) {
        iVar3 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
        *(int *)(param_1 + 0x348) = iVar3 + -1;
        uVar4 = FUN_00409a18(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 4 + (iVar3 + -1) * 0x10));
        *(undefined4 *)(param_1 + 0x34c) = uVar4;
      }
      if (0 < *(int *)(param_1 + 0x348)) {
        iVar3 = FUN_006afea0(*(undefined4 *)
                              (*(int *)(param_1 + 0x2d8) + *(int *)(param_1 + 0x348) * 0x10));
        if (*(int *)(param_1 + 0x34c) < iVar3) {
          *(int *)(param_1 + 0x348) = *(int *)(param_1 + 0x348) + -1;
          uVar4 = FUN_00409a18(*(undefined4 *)
                                (*(int *)(param_1 + 0x2d8) + 4 + *(int *)(param_1 + 0x348) * 0x10));
          *(undefined4 *)(param_1 + 0x34c) = uVar4;
        }
      }
      pwVar9 = L" ERROR at line ";
      FUN_0041666c(*(int *)(param_1 + 0x348) + 1,&local_10);
      pwVar7 = L" pos ";
      uVar8 = local_10;
      FUN_0041666c(*(int *)(param_1 + 0x34c) + 1,&local_14);
      puVar5 = &DAT_006b0bf8;
      uVar4 = *(undefined4 *)PTR_DAT_0078283c;
      uVar6 = local_14;
      FUN_00408480(&local_c,6);
      FUN_004ee6d8(*(undefined4 *)(param_1 + 0x298),local_c);
      iVar3 = **(int **)(param_1 + 0x298);
      (**(code **)(iVar3 + 0x74))
                (*(int **)(param_1 + 0x298),1,iVar3,uVar4,puVar5,uVar6,pwVar7,uVar8,pwVar9);
    }
    else {
      FUN_004ee6d8(*(undefined4 *)(param_1 + 0x298),0);
      (**(code **)(**(int **)(param_1 + 0x298) + 0x74))(*(int **)(param_1 + 0x298),0);
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_006b0ba0;
  puStack_24 = (undefined1 *)0x6b0b98;
  thunk_FUN_00406e80(&local_14,4,puVar1);
  return;
}
