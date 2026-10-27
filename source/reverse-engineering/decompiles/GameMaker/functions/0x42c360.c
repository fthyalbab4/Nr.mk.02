// rea decompile_all
// name: FUN_0042c360
// address: 0x42c360
// body: available
// range: 0x42c360-0x42c3a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0042c360(short *param_1,short *param_2,undefined4 *param_3)

{
  short sVar1;
  uint uVar2;
  bool bVar3;

  sVar1 = *param_1;
  if (sVar1 == 0x400c) {
    uVar2 = FUN_0042c360(*(undefined4 *)(param_1 + 4));
  }
  else {
    *param_2 = sVar1;
    bVar3 = (*param_2 & 0x2000) != 0;
    uVar2 = (uint)CONCAT11((char)((ushort)sVar1 >> 8),bVar3);
    if (bVar3) {
      if ((*param_2 & 0x4000) == 0) {
        *param_3 = *(undefined4 *)(param_1 + 4);
      }
      else {
        *param_3 = **(undefined4 **)(param_1 + 4);
      }
    }
    else {
      *param_3 = 0;
    }
  }
  return uVar2;
}
