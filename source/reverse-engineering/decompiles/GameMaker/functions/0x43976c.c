// rea decompile_all
// name: FUN_0043976c
// address: 0x43976c
// body: available
// range: 0x43976c-0x4397b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0043976c(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;

  piVar1 = *(int **)(param_1 + 4);
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x54))(piVar1,param_2), -1 < iVar2))
  {
    uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),iVar2);
    return uVar3;
  }
  piVar1 = *(int **)(param_1 + 8);
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x54))(piVar1,param_2), -1 < iVar2))
  {
    uVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8),iVar2);
    return uVar3;
  }
  return 0;
}
