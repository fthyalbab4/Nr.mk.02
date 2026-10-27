// rea decompile_all
// name: FUN_005470f8
// address: 0x5470f8
// body: available
// range: 0x5470f8-0x5471e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005470f8(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int nDenominator;
  int nDenominator_00;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;

  iVar6 = *param_2;
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar7 = param_2[3];
  nDenominator = (**(code **)(**(int **)(param_1 + 4) + 0x24))();
  iVar7 = iVar7 - iVar1;
  nDenominator_00 = (**(code **)(**(int **)(param_1 + 4) + 0x30))();
  iVar2 = iVar2 - iVar6;
  iVar4 = iVar2;
  iVar8 = nDenominator_00;
  uVar3 = FUN_005449dc(param_1,1);
  iVar4 = MulDiv(uVar3 & 0xffff,iVar4,iVar8);
  *param_3 = iVar4 + iVar6;
  iVar4 = iVar7;
  iVar8 = nDenominator;
  uVar3 = FUN_005449dc(param_1,2);
  iVar4 = MulDiv(uVar3 & 0xffff,iVar4,iVar8);
  param_3[1] = iVar4 + iVar1;
  uVar3 = FUN_005449dc(param_1,1);
  uVar3 = uVar3 & 0xffff;
  uVar5 = FUN_005449dc(param_1,3);
  iVar2 = MulDiv(uVar3 + (uVar5 & 0xffff),iVar2,nDenominator_00);
  param_3[2] = iVar2 + iVar6;
  uVar3 = FUN_005449dc(param_1,2);
  uVar5 = FUN_005449dc(param_1,4);
  iVar6 = MulDiv((uVar3 & 0xffff) + (uVar5 & 0xffff),iVar7,nDenominator);
  param_3[3] = iVar6 + iVar1;
  return;
}
