// rea decompile_all
// name: FUN_004b2928
// address: 0x4b2928
// body: available
// range: 0x4b2928-0x4b2a9c inclusive
// range: 0x4b2aa4-0x4b2ab2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b2977 (push 0x4b2a9d followed by fs-segment stack chaining); handler 0x4b2a9d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b2928(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;

  if (*(int *)(param_2 + 8) == 0) {
    puStack_20 = (undefined1 *)0x4b2949;
    (**(code **)(*param_1 + 0x11c))(param_1,0);
    puStack_20 = (undefined1 *)0x4b2aac;
    FUN_004b2804(param_1);
    return;
  }
  puStack_20 = (undefined1 *)0x4b295a;
  iVar2 = FUN_00405a4c(&PTR_LAB_0042f444,1);
  puStack_20 = (undefined1 *)0x4b2969;
  iVar3 = FUN_00405a4c(&PTR_LAB_0042f444,1);
  puStack_24 = &LAB_004b2a9d;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iVar7 = *(int *)(param_2 + 8) + -1;
  puStack_20 = &stack0xfffffffc;
  puVar1 = &stack0xfffffffc;
  if (-1 < iVar7) {
    do {
      iVar4 = FUN_0043b048(param_2,iVar7);
      if (*(char *)(iVar4 + 0x24) != '\0') {
        FUN_0043aee0(param_2,iVar7);
      }
      iVar7 = iVar7 + -1;
      puVar1 = puStack_20;
    } while (iVar7 != -1);
  }
  puStack_20 = puVar1;
  if (0 < *(int *)(param_2 + 8)) {
    iVar7 = FUN_0043b048(param_2,0);
    iVar4 = FUN_004b053c(param_1);
    if (iVar7 != iVar4) {
      uVar5 = FUN_0043b048(param_2,0);
      FUN_004b0584(param_1,uVar5);
    }
  }
  iVar7 = param_2;
  FUN_0043b6c4(iVar3,param_1[0xb9],4);
  if ((0 < *(int *)(iVar3 + 8)) && (iVar4 = *(int *)(param_1[0xb9] + 8) + -1, -1 < iVar4)) {
    do {
      uVar5 = FUN_0043b048(param_1[0xb9],iVar4);
      iVar6 = FUN_0043b0b0(iVar3,uVar5);
      if (iVar6 != -1) {
        FUN_004b243c(param_1,iVar4);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  FUN_0043b6c4(iVar2,param_2,4,param_1[0xb9]);
  iVar4 = *(int *)(iVar2 + 8);
  if (-1 < iVar4 + -1) {
    iVar6 = 0;
    do {
      uVar5 = FUN_0043b048(iVar2,iVar6);
      FUN_004b2464(param_1,uVar5,0);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_0043b6c4(param_1[0xb9],param_2,0);
  *in_FS_OFFSET = 0;
  FUN_00405a7c(iVar3,0,iVar7,0x4b2aa4);
  FUN_00405a7c(iVar2);
  return;
}
