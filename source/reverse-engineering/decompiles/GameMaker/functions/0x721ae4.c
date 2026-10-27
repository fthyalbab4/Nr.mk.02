// rea decompile_all
// name: FUN_00721ae4
// address: 0x721ae4
// body: available
// range: 0x721ae4-0x721cda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x721b12 (push 0x721cdb followed by fs-segment stack chaining); handler 0x721cdb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00721ae4(int param_1,undefined4 param_2,ushort param_3,int param_4,int param_5)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  double dVar8;
  double dVar9;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined1 local_38 [24];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  ushort local_6;

  puStack_48 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_4c = &LAB_00721cdb;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  iVar6 = *(int *)(param_1 + 0x460) + param_5;
  iVar7 = *(int *)(param_1 + 0x464) + param_4;
  local_6 = param_3;
  if (DAT_007a4640 == '\x01') {
    *(int *)(param_1 + 0x460) = (DAT_007a4644 - param_5) + _DAT_007a464c;
    *(int *)(param_1 + 0x464) = (DAT_007a4648 - param_4) + _DAT_007a4650;
    puStack_48 = &stack0xfffffffc;
    FUN_007203ec(param_1);
    FUN_00720560(param_1);
    FUN_00720a68(param_1);
  }
  else {
    puVar2 = &stack0xfffffffc;
    if ((param_3 & 2) == 0) {
      local_c = iVar6;
      iVar6 = FUN_00404878();
      lVar1 = (longlong)iVar6 * (longlong)*(int *)(*(int *)(param_1 + 0x444) + 0x2c);
      iVar6 = (int)lVar1;
      local_c = iVar7;
      iVar7 = FUN_00404878(*(undefined4 *)(param_1 + 0x444),(int)((ulonglong)lVar1 >> 0x20));
      iVar7 = iVar7 * *(int *)(*(int *)(param_1 + 0x444) + 0x30);
      puVar2 = puStack_48;
    }
    puStack_48 = puVar2;
    FUN_0041666c(iVar6,&local_14);
    FUN_0040839c(&local_10,&DAT_00721cf8,local_14);
    uVar5 = local_10;
    uVar3 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x408) + 0x270),0);
    FUN_004ab804(uVar3,uVar5);
    FUN_0041666c(iVar7,&local_1c);
    FUN_0040839c(&local_18,&DAT_00721d0c,local_1c);
    uVar5 = local_18;
    uVar3 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x408) + 0x270),1);
    FUN_004ab804(uVar3,uVar5);
    if (DAT_0077f5f8 != '\0') {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x398) + 0xec))();
      if (-1 < iVar4) {
        dVar9 = (double)iVar6;
        dVar8 = (double)iVar7;
        local_20 = iVar7;
        local_c = iVar6;
        uVar5 = (**(code **)(**(int **)(param_1 + 0x398) + 0xec))();
        FUN_00535148(*(undefined4 *)(param_1 + 0x444),uVar5,local_38,dVar8,dVar9);
        uVar5 = (**(code **)(**(int **)(param_1 + 0x398) + 0xec))();
        FUN_00535c00(*(undefined4 *)(param_1 + 0x444),uVar5);
        FUN_00720128(param_1);
        FUN_00720560(param_1);
        FUN_007229e8(*(undefined4 *)(param_1 + 0x458));
        *(undefined1 *)(param_1 + 0x450) = 1;
      }
    }
  }
  puVar2 = puStack_48;
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_00721ce2;
  puStack_4c = (undefined1 *)0x721cda;
  thunk_FUN_00406e80(&local_1c,4,puVar2);
  return;
}
