// rea decompile_all
// name: FUN_006458dc
// address: 0x6458dc
// body: available
// range: 0x6458dc-0x645991 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0064592c) */

void FUN_006458dc(int param_1,undefined4 param_2,ushort param_3)

{
  int extraout_EDX;
  uint local_24;
  uint local_1c;
  int local_18;

  if ((param_3 & 8) == 0) {
    return;
  }
  local_1c = FUN_00404878();
  local_18 = extraout_EDX;
  if ((extraout_EDX != 0) && (extraout_EDX < 0)) {
    local_1c = 0;
    local_18 = 0;
  }
  if (local_18 == 0) {
    if (0xff < local_1c) {
LAB_0064595f:
      local_24 = 0xff;
      goto LAB_0064597b;
    }
  }
  else if (0 < local_18) goto LAB_0064595f;
  local_24 = local_1c;
LAB_0064597b:
  FUN_00530760(*(undefined4 *)(param_1 + 0x65c),local_24);
  return;
}
