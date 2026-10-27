// rea decompile_all
// name: FUN_004c8838
// address: 0x4c8838
// body: available
// range: 0x4c8838-0x4c88cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c8838(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  HDC pHVar5;
  tagRECT *ptVar6;
  undefined4 uVar7;
  UINT UVar8;
  UINT UVar9;
  tagRECT local_20;
  undefined1 local_10 [12];

  iVar1 = *(int *)(*(int *)(param_4 + -4) + 0x18);
  FUN_0040c354(param_1,param_2,iVar1 + param_1 + -2,&local_20,iVar1 + param_2 + -2);
  FUN_004d08e8();
  cVar2 = FUN_004d09f4();
  if (cVar2 == '\0') {
    UVar9 = 0;
    UVar8 = 1;
    ptVar6 = &local_20;
    pHVar5 = (HDC)FUN_0045d4ec(*(undefined4 *)(param_4 + -8));
    DrawFrameControl(pHVar5,ptVar6,UVar8,UVar9);
  }
  else {
    uVar3 = FUN_004d08e8();
    FUN_004d1a6c(uVar3,0x34,local_10);
    ptVar6 = &local_20;
    uVar7 = 0;
    uVar3 = FUN_0045d4ec(*(undefined4 *)(param_4 + -8));
    uVar4 = FUN_004d08e8();
    FUN_004d0c1c(uVar4,uVar3,local_10,uVar7,ptVar6);
  }
  return;
}
