// rea decompile_all
// name: FUN_007201f0
// address: 0x7201f0
// body: available
// range: 0x7201f0-0x72037f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x720214 (push 0x720380 followed by fs-segment stack chaining); handler 0x720380 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_007201f0(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28 [24];
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  puStack_40 = &stack0xfffffffc;
  local_30 = 0;
  local_10 = 0;
  local_2c = 0;
  local_8 = 0;
  puStack_44 = &LAB_00720380;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  local_c = (**(code **)(**(int **)(param_1 + 0x398) + 0xec))();
  (**(code **)(**(int **)(*(int *)(param_1 + 0x398) + 0x280) + 0x44))();
  iVar5 = *(int *)(*(int *)(param_1 + 0x444) + 8);
  if (-1 < iVar5 + -1) {
    iVar4 = 0;
    do {
      FUN_00535148(*(undefined4 *)(param_1 + 0x444),iVar4,local_28,&DAT_0072039c);
      FUN_00404878();
      FUN_004168b0(&local_10);
      FUN_00535148(*(undefined4 *)(param_1 + 0x444),iVar4,local_28,&DAT_007203ac,local_10);
      FUN_00404878();
      FUN_004168b0(&local_2c);
      puVar7 = &DAT_007203bc;
      uVar6 = local_2c;
      FUN_00408480(&local_8,5);
      while( true ) {
        FUN_00407058(&local_8);
        iVar3 = FUN_00408238();
        if (0xb < iVar3) break;
        FUN_004082dc(&local_8,&DAT_007203d0);
      }
      FUN_00535148(*(undefined4 *)(param_1 + 0x444),iVar4,local_28,L"sp: ",local_8,puVar7,uVar6);
      FUN_00404878();
      FUN_004168b0(&local_30);
      uVar6 = local_30;
      FUN_00408480(&local_8,3);
      piVar1 = *(int **)(*(int *)(param_1 + 0x398) + 0x280);
      iVar3 = *piVar1;
      (**(code **)(iVar3 + 0x38))(piVar1,local_8,iVar3,uVar6);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x444) + 8) + -1;
  if (iVar5 < local_c) {
    local_c = iVar5;
  }
  (**(code **)(**(int **)(param_1 + 0x398) + 0xf0))(*(int **)(param_1 + 0x398),local_c);
  FUN_00720128(param_1);
  puVar2 = puStack_40;
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_00720387;
  puStack_44 = (undefined1 *)0x72036f;
  thunk_FUN_00406e80(&local_30,2,puVar2);
  puStack_44 = (undefined1 *)0x720377;
  thunk_FUN_00406e5c(&local_10);
  puStack_44 = (undefined1 *)0x72037f;
  thunk_FUN_00406e5c(&local_8);
  return;
}
