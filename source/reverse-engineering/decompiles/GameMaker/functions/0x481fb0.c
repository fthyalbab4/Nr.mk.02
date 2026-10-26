// rea decompile_all
// name: FUN_00481fb0
// address: 0x481fb0
// body: available
// range: 0x481fb0-0x482035 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481fb0(int param_1,int param_2)

{
  FUN_00481528(param_1,param_2);
  FUN_004f31dc(param_1,param_2,L"BUTTON");
  if (*(int *)PTR_DAT_00781bfc < 6) {
    *(uint *)(param_2 + 4) =
         *(uint *)(param_2 + 4) | *(uint *)(&DAT_007782d4 + (uint)*(byte *)(param_1 + 0x280) * 4);
  }
  else if (*(char *)(param_1 + 0x2b8) == '\x01') {
    *(uint *)(param_2 + 4) =
         *(uint *)(param_2 + 4) | *(uint *)(&DAT_007782dc + (uint)*(byte *)(param_1 + 0x280) * 4);
  }
  else {
    if (*(char *)(param_1 + 0x2b8) != '\x02') {
      *(uint *)(param_2 + 4) =
           *(uint *)(param_2 + 4) | *(uint *)(&DAT_007782d4 + (uint)*(byte *)(param_1 + 0x280) * 4);
      return;
    }
    *(uint *)(param_2 + 4) =
         *(uint *)(param_2 + 4) | *(uint *)(&DAT_007782e4 + (uint)*(byte *)(param_1 + 0x280) * 4);
  }
  return;
}
