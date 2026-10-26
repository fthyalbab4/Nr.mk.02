// rea decompile_all
// name: FUN_0066337c
// address: 0x66337c
// body: available
// range: 0x66337c-0x6633bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066337c(undefined4 param_1,LONG *param_2,undefined4 param_3)

{
  tagRECT local_1c;

  local_1c.left = *param_2;
  local_1c.top = param_2[1];
  local_1c.right = param_2[2];
  local_1c.bottom = param_2[3];
  FUN_0040c268(&local_1c,0,1);
  InflateRect(&local_1c,-2,-4);
  FUN_00667528(param_1,&local_1c,param_3);
  return;
}
