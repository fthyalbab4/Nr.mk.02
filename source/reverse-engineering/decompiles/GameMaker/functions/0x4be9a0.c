// rea decompile_all
// name: FUN_004be9a0
// address: 0x4be9a0
// body: available
// range: 0x4be9a0-0x4beb05 inclusive
// range: 0x4beb0d-0x4beb22 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4be9c6 (push 0x4beb23 followed by fs-segment stack chaining); handler 0x4beb23 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4bea43 (push 0x4beb06 followed by fs-segment stack chaining); handler 0x4beb06 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004be9a0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_10;

  puStack_28 = (undefined1 *)0x4be9b8;
  iVar2 = FUN_00405a4c(&PTR_LAB_0042f444,1);
  puStack_2c = &LAB_004beb23;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_34 = (undefined1 *)0x4be9d1;
  puStack_28 = &stack0xfffffffc;
  local_10 = FUN_004edf8c(param_1);
  iVar8 = *(int *)(*(int *)(*(int *)(param_1 + 0x2ac) + 8) + 8);
  if (-1 < iVar8 + -1) {
    iVar6 = 0;
    do {
      puStack_34 = (undefined1 *)0x4be9fb;
      iVar3 = FUN_004b8198(*(undefined4 *)(param_1 + 0x2ac),iVar6);
      if (*(char *)(iVar3 + 0xd) == '\0') {
        puStack_34 = (undefined1 *)0x4bea16;
        iVar3 = FUN_004b7f58(iVar3);
        local_10 = local_10 - iVar3;
      }
      else {
        puStack_34 = (undefined1 *)0x4bea0d;
        FUN_0043ae88(iVar2,iVar3);
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  puVar1 = puStack_28;
  if (0 < *(int *)(iVar2 + 8)) {
    puStack_34 = (undefined1 *)0x4bea38;
    (**(code **)(**(int **)(param_1 + 0x2ac) + 0x20))();
    puStack_38 = &LAB_004beb06;
    uStack_3c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_3c;
    puStack_34 = &stack0xfffffffc;
    do {
      iVar8 = *(int *)(iVar2 + 8);
      iVar3 = local_10 % iVar8;
      iVar6 = local_10 / iVar8;
      iVar7 = iVar8 + -1;
      if (-1 < iVar7) {
        do {
          uVar4 = FUN_0043b048(iVar2,iVar7);
          if (iVar7 == 0) {
            iVar6 = iVar6 + iVar3;
          }
          FUN_004b7ff4(uVar4,iVar6);
          iVar7 = iVar7 + -1;
        } while (iVar7 != -1);
      }
      iVar6 = local_10 / iVar8;
      iVar7 = iVar8 + -1;
      if (-1 < iVar7) {
        do {
          uVar4 = FUN_0043b048(iVar2,iVar7);
          if (iVar7 == 0) {
            iVar6 = iVar6 + iVar3;
          }
          iVar5 = FUN_004b7f58(uVar4);
          if (iVar6 != iVar5) {
            FUN_0043aee0(iVar2,iVar7);
            iVar5 = FUN_004b7f58(uVar4);
            local_10 = local_10 - iVar5;
          }
          iVar7 = iVar7 + -1;
        } while (iVar7 != -1);
      }
      puVar1 = puStack_34;
    } while ((*(int *)(iVar2 + 8) != 0) && (*(int *)(iVar2 + 8) != iVar8));
    *in_FS_OFFSET = uStack_3c;
    puStack_34 = (undefined1 *)0x4beb0d;
    iVar8 = **(int **)(param_1 + 0x2ac);
    puStack_38 = (undefined1 *)0x4beb05;
    (**(code **)(iVar8 + 0x24))(*(int **)(param_1 + 0x2ac),iVar8,puVar1);
    return;
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004beb2a;
  puStack_2c = (undefined1 *)0x4beb22;
  FUN_00405a7c(iVar2,uStack_30,puVar1);
  return;
}
