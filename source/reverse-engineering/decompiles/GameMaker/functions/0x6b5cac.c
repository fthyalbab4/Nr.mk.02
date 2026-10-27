// rea decompile_all
// name: FUN_006b5cac
// address: 0x6b5cac
// body: available
// range: 0x6b5cac-0x6b5ea2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b5cc7 (push 0x6b5ea3 followed by fs-segment stack chaining); handler 0x6b5ea3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b5cac(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_2c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_30 = &LAB_006b5ea3;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  iVar7 = *(int *)PTR_DAT_007817a0 - *(int *)(param_1 + 0x2f0) % *(int *)PTR_DAT_007817a0;
  puVar3 = &stack0xfffffffc;
  if ((*PTR_DAT_007819e8 != '\0') && (puVar3 = &stack0xfffffffc, 0 < *(int *)(param_1 + 0x2ec))) {
    iVar6 = *(int *)(param_1 + 0x2ec) + -1;
    FUN_006b7d0c(param_1,iVar6,&local_c);
    while( true ) {
      FUN_00415f30(local_c,&local_10);
      iVar4 = FUN_00408238(local_10);
      if ((*(int *)(param_1 + 0x2f0) <= iVar4) || (iVar6 < 1)) break;
      iVar6 = iVar6 + -1;
      FUN_006b7d0c(param_1,iVar6,&local_c);
    }
    puVar3 = puStack_2c;
    if (-1 < iVar6) {
      FUN_00415f30(local_c,&local_14);
      local_18 = local_14;
      iVar6 = 0;
      if (local_14 != 0) {
        iVar6 = *(int *)(local_14 + -4);
      }
      iVar4 = *(int *)(param_1 + 0x2f0);
      puVar3 = puStack_2c;
      if (iVar4 < iVar6) {
        do {
          iVar4 = iVar4 + 1;
          FUN_00407058(&local_c);
          iVar7 = FUN_00408238();
          if (iVar7 <= iVar4) break;
          iVar7 = FUN_00407058(&local_c);
        } while ((*(short *)(iVar7 + -2 + iVar4 * 2) != 0x20) ||
                (iVar7 = FUN_00407058(&local_c), *(short *)(iVar7 + iVar4 * 2) == 0x20));
        iVar7 = iVar4 - *(int *)(param_1 + 0x2f0);
        puVar3 = puStack_2c;
      }
    }
  }
  puStack_2c = puVar3;
  FUN_006b7d0c(param_1,*(undefined4 *)(param_1 + 0x2ec),&local_8);
  iVar6 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar6 = FUN_00407048(&local_8,local_8);
  }
  iVar4 = 0;
  if (iVar6 != 0) {
    iVar4 = *(int *)(iVar6 + -4);
  }
  iVar6 = *(int *)(param_1 + 0x2f0) + -1;
  if (iVar4 <= iVar6) {
    iVar6 = (iVar6 - iVar4) + 1;
    do {
      FUN_004082dc(&local_8,&DAT_006b5ec0);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00407e58(0x20,iVar7,&local_1c);
  FUN_004087ec(local_1c,&local_8,*(int *)(param_1 + 0x2f0) + 1);
  FUN_006b7a68(param_1,*(undefined4 *)(param_1 + 0x2ec),local_8);
  *(int *)(param_1 + 0x2f0) = *(int *)(param_1 + 0x2f0) + iVar7;
  FUN_006b2a1c(param_1);
  uVar1 = *(undefined4 *)(param_1 + 0x2ec);
  uVar2 = *(undefined4 *)(param_1 + 0x2d8);
  uVar8 = uVar1;
  uVar5 = FUN_00409a20(uVar2);
  FUN_006ab16c(uVar2,uVar5,uVar1,uVar8);
  FUN_006b315c(param_1,*(undefined4 *)(param_1 + 0x2ec));
  if (*(short *)(param_1 + 0x2d2) != 0) {
    (**(code **)(param_1 + 0x2d0))(*(undefined4 *)(param_1 + 0x2d4),param_1);
  }
  puVar3 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_006b5eaa;
  puStack_30 = (undefined1 *)0x6b5e95;
  thunk_FUN_00406e5c(&local_1c,uStack_34,puVar3);
  puStack_30 = (undefined1 *)0x6b5ea2;
  thunk_FUN_00406e80(&local_14,4);
  return;
}
