// rea decompile_all
// name: FUN_004e0324
// address: 0x4e0324
// body: available
// range: 0x4e0324-0x4e042b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e0324(char param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HWND pHVar1;
  INT_PTR IVar2;
  int *piVar3;
  UINT UVar4;
  int iVar5;
  BOOL BVar6;

  piVar3 = (int *)(param_4 + -4);
  iVar5 = -(uint)(param_1 != '\0');
  IVar2 = *(INT_PTR *)(&DAT_00681b00 + (uint)*(byte *)(*piVar3 + 0x34) * 4);
  UVar4 = *(UINT *)(&DAT_00681ad8 + (uint)*(byte *)(*piVar3 + 0x18) * 0x14);
  pHVar1 = (HWND)FUN_004c45dc(*(undefined4 *)(*piVar3 + 4));
  FlatSB_SetScrollProp(pHVar1,UVar4,IVar2,iVar5);
  if (0 < *(int *)(*piVar3 + 0x24)) {
    BVar6 = 0;
    IVar2 = *(INT_PTR *)(*piVar3 + 0x24);
    UVar4 = *(UINT *)(&DAT_00681adc + (uint)*(byte *)(*piVar3 + 0x18) * 0x14);
    pHVar1 = (HWND)FUN_004c45dc(*(undefined4 *)(*piVar3 + 4));
    FlatSB_SetScrollProp(pHVar1,UVar4,IVar2,BVar6);
  }
  if (0 < *(int *)(*piVar3 + 0x38)) {
    BVar6 = 0;
    IVar2 = *(INT_PTR *)(*piVar3 + 0x38);
    UVar4 = *(UINT *)(&DAT_00681ae0 + (uint)*(byte *)(*piVar3 + 0x18) * 0x14);
    pHVar1 = (HWND)FUN_004c45dc(*(undefined4 *)(*piVar3 + 4));
    FlatSB_SetScrollProp(pHVar1,UVar4,IVar2,BVar6);
  }
  if (0 < *(int *)(*piVar3 + 0x30)) {
    BVar6 = 0;
    IVar2 = *(INT_PTR *)(*piVar3 + 0x30);
    UVar4 = *(UINT *)(&DAT_00681ae4 + (uint)*(byte *)(*piVar3 + 0x18) * 0x14);
    pHVar1 = (HWND)FUN_004c45dc(*(undefined4 *)(*piVar3 + 4));
    FlatSB_SetScrollProp(pHVar1,UVar4,IVar2,BVar6);
  }
  BVar6 = 0;
  IVar2 = FUN_0045b0f4(*(undefined4 *)(*piVar3 + 0x28));
  UVar4 = *(UINT *)(&DAT_00681ae8 + (uint)*(byte *)(*piVar3 + 0x18) * 0x14);
  pHVar1 = (HWND)FUN_004c45dc(*(undefined4 *)(*piVar3 + 4));
  FlatSB_SetScrollProp(pHVar1,UVar4,IVar2,BVar6);
  return;
}
