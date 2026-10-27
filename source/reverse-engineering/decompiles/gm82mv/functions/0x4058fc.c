// rea decompile_all
// name: FUN_004058fc
// address: 0x4058fc
// body: available
// range: 0x4058fc-0x405939 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004058fc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_12c [32];
  undefined1 local_10c [256];

  FUN_0040563c(param_2,0,local_10c);
  FUN_00404cfc(auStack_12c,local_10c,0x1f);
  FUN_00405944(param_1,auStack_12c,param_3);
  return;
}
