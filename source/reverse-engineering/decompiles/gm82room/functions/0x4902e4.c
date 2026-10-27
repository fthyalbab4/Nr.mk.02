// rea decompile_all
// name: FUN_004902e4
// address: 0x4902e4
// body: available
// range: 0x4902e4-0x490363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004902e4(int *param_1,int param_2)

{
  undefined4 uVar1;

  if ((param_2 != param_1[0x6d]) && (param_1[0x6d] = param_2, param_1[0x73] != 0)) {
    (**(code **)(*param_1 + 0xac))();
    uVar1 = FUN_00490580(param_1);
    FUN_004bcb48(param_1[0x73],0x42b,uVar1,param_2);
    if ((*(char *)(param_1[0x73] + 0x2b0) != '\0') || (*(char *)(param_1[0x73] + 0x2aa) != '\0')) {
      (**(code **)(*param_1 + 0x90))();
    }
    if (((*(byte *)(param_1 + 7) & 1) == 0) && (*(char *)((int)param_1 + 0x1c6) == '\x05')) {
      FUN_00492424(param_1[0x73]);
    }
  }
  return;
}
