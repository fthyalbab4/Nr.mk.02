// rea decompile_all
// name: FUN_00418f3c
// address: 0x418f3c
// body: available
// range: 0x418f3c-0x418f76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00418f3c(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_18 [12];
  undefined4 local_c;
  undefined1 local_8;

  uVar2 = FUN_00408220(param_1);
  cVar1 = FUN_00418c80(uVar2,local_18,0);
  if (cVar1 == '\0') {
    local_8 = 0x11;
    local_c = param_1;
    FUN_0041534c(PTR_LAB_00688ad0,&local_c,0);
  }
  return;
}
