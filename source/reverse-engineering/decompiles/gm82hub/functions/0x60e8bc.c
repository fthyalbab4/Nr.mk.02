// rea decompile_all
// name: FUN_0060e8bc
// address: 0x60e8bc
// body: available
// range: 0x60e8bc-0x60e960 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0060e8bc(int *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;

  iVar3 = param_1[2] - *param_1;
  fVar1 = ((float)param_2 - (float)(param_1[2] + *param_1) / 2.0) / ((float)iVar3 / 2.0);
  fVar2 = ((float)param_3 - (float)(param_1[3] + param_1[1]) / 2.0) /
          ((float)(param_1[3] - param_1[1]) / 2.0);
  fVar1 = fVar1 * fVar1 + fVar2 * fVar2;
  return CONCAT31((int3)(CONCAT22((short)((uint)iVar3 >> 0x10),
                                  (ushort)(fVar1 < 1.0) << 8 | (ushort)NAN(fVar1) << 10 |
                                  (ushort)(fVar1 == 1.0) << 0xe) >> 8),
                  fVar1 < 1.0 != 0 || (fVar1 == 1.0) != 0);
}
