// rea decompile_all
// name: FUN_00759018
// address: 0x759018
// body: available
// range: 0x759018-0x759053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00759018(undefined2 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  int iVar3;

  iVar3 = param_4;
  uVar1 = FUN_00758fa4();
  *param_1 = uVar1;
  if (**(char **)(param_4 + -4) == ':') {
    *(int *)(param_4 + -4) = *(int *)(param_4 + -4) + 1;
    uVar2 = FUN_00758fa4(param_4,extraout_EDX,iVar3,param_4);
    *(undefined4 *)(param_1 + 1) = uVar2;
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}
