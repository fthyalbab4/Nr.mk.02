// rea decompile_all
// name: FUN_00417680
// address: 0x417680
// body: available
// range: 0x417680-0x4176b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_00417680(uint *param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  uint *puVar3;

  param_2 = param_2 - (int)param_1;
  puVar3 = param_1;
  if (((uint)param_1 & 3) != 0) {
    sVar1 = *(short *)(param_2 + (int)param_1);
    *(short *)param_1 = sVar1;
    if (sVar1 == 0) {
      return param_1;
    }
    puVar3 = (uint *)((int)param_1 + 2);
  }
  do {
    if (*(short *)(param_2 + (int)puVar3) == 0) {
      *(short *)puVar3 = 0;
      return param_1;
    }
    uVar2 = *(uint *)(param_2 + (int)puVar3);
    *puVar3 = uVar2;
    puVar3 = puVar3 + 1;
  } while (0xffff < uVar2);
  return param_1;
}
