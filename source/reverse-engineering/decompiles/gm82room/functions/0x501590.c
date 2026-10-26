// rea decompile_all
// name: FUN_00501590
// address: 0x501590
// body: available
// range: 0x501590-0x5016d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5015b7 (push 0x5016d5 followed by fs-segment stack chaining); handler 0x5016d5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00501590(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  HDC hdc;
  LPCWSTR lpchText;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar8;
  tagRECT *lprc;
  UINT format;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 local_44;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  tagRECT local_20;
  int *local_10;
  int local_c;
  undefined4 local_8;

  puStack_58 = &stack0xfffffffc;
  local_44 = 0;
  local_20.left = *param_3;
  local_20.top = param_3[1];
  local_20.right = param_3[2];
  local_20.bottom = param_3[3];
  puStack_5c = &LAB_005016d5;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  local_10 = *(int **)(param_1 + 0x270);
  local_8 = param_2;
  (**(code **)(*local_10 + 0x4c))(local_10,&local_20);
  local_c = 0x10;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x2ac) + 0x18))
                            (*(int **)(param_1 + 0x2ac),local_8);
  if (piVar1 != (int *)0x0) {
    local_c = (**(code **)(*piVar1 + 0x30))();
    uVar2 = (**(code **)(*piVar1 + 0x24))();
    puVar8 = local_30;
    uVar3 = (**(code **)(*piVar1 + 0x30))();
    FUN_00436af8(0,0,uVar3,puVar8,uVar2);
    puVar8 = local_30;
    iVar4 = (**(code **)(*piVar1 + 0x24))();
    iVar4 = iVar4 + -1;
    piVar5 = (int *)FUN_00463124(piVar1);
    uVar2 = (**(code **)(*piVar5 + 0x18))(piVar5,0,iVar4,puVar8);
    uVar3 = (**(code **)(*piVar1 + 0x24))();
    puVar8 = local_40;
    uVar6 = (**(code **)(*piVar1 + 0x30))();
    iVar4 = (**(code **)(*piVar1 + 0x24))();
    uVar7 = (local_20.top + local_20.bottom) - iVar4;
    iVar4 = (int)uVar7 >> 1;
    if (iVar4 < 0) {
      iVar4 = iVar4 + (uint)((uVar7 & 1) != 0);
    }
    FUN_00436af8(local_20.left + 2,iVar4,uVar6,puVar8,uVar3);
    (**(code **)(*local_10 + 0x34))(local_10,local_40,piVar1,uVar2);
  }
  local_20.left = local_20.left + local_c + 6;
  hdc = (HDC)FUN_0045d4ec(*(undefined4 *)(param_1 + 0x270));
  (**(code **)(**(int **)(param_1 + 0x2ac) + 0xc))(*(int **)(param_1 + 0x2ac),local_8,&local_44);
  format = 0x824;
  lprc = &local_20;
  iVar4 = -1;
  lpchText = (LPCWSTR)FUN_00408220(local_44);
  DrawTextW(hdc,lpchText,iVar4,lprc,format);
  puVar8 = puStack_58;
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_005016dc;
  puStack_5c = (undefined1 *)0x5016d4;
  thunk_FUN_004072d8(&local_44,uStack_60,puVar8);
  return;
}
