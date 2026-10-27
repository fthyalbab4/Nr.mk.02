// rea decompile_all
// name: FUN_00443b90
// address: 0x443b90
// body: available
// range: 0x443b90-0x443c18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00443b90(byte *param_1,char *param_2,int param_3)

{
  int iVar1;

  iVar1 = param_3;
  for (; (((0 < iVar1 && (6 < (ushort)(*(short *)param_1 - 0x3aU))) &&
          (0x19 < (ushort)(*(short *)param_1 - 0x47U))) &&
         (((6 < (ushort)(*(short *)(param_1 + 2) - 0x3aU) &&
           (0x19 < (ushort)(*(short *)(param_1 + 2) - 0x47U))) &&
          (((ushort)(*(short *)param_1 - 0x30U) < 0x37 &&
           ((ushort)(*(short *)(param_1 + 2) - 0x30U) < 0x37)))))); param_1 = param_1 + 4) {
    *param_2 = (char)*(undefined2 *)((int)&DAT_0067cff0 + (uint)*param_1 * 2) * '\x10' +
               (char)*(undefined2 *)((int)&DAT_0067cff0 + (uint)param_1[2] * 2);
    param_2 = param_2 + 1;
    iVar1 = iVar1 + -1;
  }
  return param_3 - iVar1;
}
