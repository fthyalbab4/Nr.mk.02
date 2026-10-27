// rea decompile_all
// name: FUN_004ac67c
// address: 0x4ac67c
// body: available
// range: 0x4ac67c-0x4ac6e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004ac67c(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  LPCWSTR lpString2;
  LPCWSTR lpString1;
  int *piVar3;
  int local_8;

  local_8 = param_3;
  iVar1 = FUN_004ac874(param_4);
  if (*(short *)(iVar1 + 0x33a) == 0) {
    lpString2 = (LPCWSTR)FUN_00407f44(*(undefined4 *)(param_5 + 8));
    lpString1 = (LPCWSTR)FUN_00407f44(*(undefined4 *)(param_4 + 8));
    local_8 = lstrcmpW(lpString1,lpString2);
  }
  else {
    piVar3 = &local_8;
    iVar1 = FUN_004ac874(param_4);
    uVar2 = FUN_004ac874(param_4);
    (**(code **)(iVar1 + 0x338))
              (*(undefined4 *)(iVar1 + 0x33c),uVar2,param_4,piVar3,param_6,param_5);
  }
  return local_8;
}
