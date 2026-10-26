// rea decompile_all
// name: FUN_004038e0
// address: 0x4038e0
// body: available
// range: 0x4038e0-0x40395a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004038e0(LPCVOID param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (((LPCVOID)0xffff < param_1) && (((uint)param_1 & 3) == 0)) {
    if ((param_1 < *(LPCVOID *)(param_4 + -0x1c)) ||
       ((uint)((int)*(LPCVOID *)(param_4 + -0x1c) + *(int *)(param_4 + -0x10)) < (int)param_1 + 4U))
    {
      *(undefined4 *)(param_4 + -0x10) = 0;
      VirtualQuery(param_1,(PMEMORY_BASIC_INFORMATION)(param_4 + -0x1c),0x1c);
    }
    if ((((3 < *(uint *)(param_4 + -0x10)) && (*(int *)(param_4 + -0xc) == 0x1000)) &&
        ((*(byte *)(param_4 + -8) & 0xf6) != 0)) && ((*(byte *)(param_4 + -7) & 1) == 0)) {
      return 1;
    }
  }
  return 0;
}
