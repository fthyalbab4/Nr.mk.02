// rea decompile_all
// name: FUN_005ee488
// address: 0x5ee488
// body: available
// range: 0x5ee488-0x5ee4c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ee488(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_EDX;
  int iVar3;
  undefined4 uVar4;

  uVar1 = FUN_00409a18(*param_3);
  uVar4 = 0;
  iVar2 = 0;
  iVar3 = *param_3;
  if ((iVar3 == 0) || (*(int *)(iVar3 + -4) == 0)) {
    iVar2 = thunk_FUN_00404478();
    iVar3 = extraout_EDX;
  }
  uVar1 = (**(code **)(*param_1 + 0xa4))(param_1,param_2,iVar3 + iVar2,uVar4,uVar1);
  FUN_005f4444(param_1,uVar1);
  return;
}
