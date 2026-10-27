// rea decompile_all
// name: FUN_005ad800
// address: 0x5ad800
// body: available
// range: 0x5ad800-0x5ad862 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ad800(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  BOOL BVar2;
  undefined4 uVar3;
  int in_stack_00000ff4;
  WCHAR aWStack_1008 [2046];
  int local_c;

  iVar1 = 2;
  do {
    local_c = iVar1;
    iVar1 = local_c + -1;
  } while (local_c + -1 != 0);
  BVar2 = mciGetErrorStringW(*(MCIERROR *)(in_stack_00000ff4 + 0x36c),aWStack_1008,0x2000);
  if (BVar2 == 0) {
    FUN_0040b75c(PTR_PTR_007822d4,param_2);
  }
  else {
    uVar3 = FUN_00417670(aWStack_1008);
    FUN_00407ff4(param_2,aWStack_1008,uVar3);
  }
  return;
}
