// rea decompile_all
// name: FUN_0055fbc0
// address: 0x55fbc0
// body: available
// range: 0x55fbc0-0x55fc2e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055fbc0(undefined4 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_14;

  local_14 = (uint)(param_2 != '\0');
  iVar2 = FUN_0055ffdc(param_1);
  iVar2 = iVar2 + -1;
  iVar4 = -1;
  if (local_14 - iVar2 == 0 || (int)local_14 < iVar2) {
    iVar3 = (local_14 - iVar2) + -1;
    do {
      iVar4 = iVar2;
      FUN_005600c8(param_1,iVar4);
      FUN_0055fd30();
      cVar1 = FUN_00557a90();
      if (cVar1 != '\0') break;
      iVar2 = iVar4 + -1;
      iVar3 = iVar3 + 1;
      iVar4 = -1;
    } while (iVar3 != 0);
  }
  if ((iVar4 != -1) && (local_14 - iVar4 == 0 || (int)local_14 < iVar4)) {
    iVar2 = (local_14 - iVar4) + -1;
    do {
      FUN_00438d5c(param_1,iVar4);
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0);
  }
  return;
}
