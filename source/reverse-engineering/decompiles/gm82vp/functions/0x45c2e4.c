// rea decompile_all
// name: FUN_0045c2e4
// address: 0x45c2e4
// body: available
// range: 0x45c2e4-0x45c340 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045c2e4(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 auStack_18 [4];
  int local_14;
  char local_c;

  if (param_2 == *(int *)(*(int *)(param_1 + 0x10) + 0x14)) {
    cVar2 = FUN_0045c45c(param_1);
    if (cVar2 == '\x01') {
      cVar2 = FUN_0045c45c(param_1);
      if (cVar2 != '\0') {
        bVar1 = true;
        goto LAB_0045c315;
      }
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
LAB_0045c315:
  if (bVar1) {
    FUN_0045c244(param_1,auStack_18);
    if (local_c == '\x01') {
      local_c = '\0';
    }
    local_14 = param_2;
    FUN_0045c260(param_1,auStack_18);
  }
  return;
}
