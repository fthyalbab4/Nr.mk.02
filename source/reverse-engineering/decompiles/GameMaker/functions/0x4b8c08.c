// rea decompile_all
// name: FUN_004b8c08
// address: 0x4b8c08
// body: available
// range: 0x4b8c08-0x4b8c51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b8c08(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  cVar2 = FUN_004b8bb4(param_1);
  if ((char)param_2 != cVar2) {
    *(char *)(param_1 + 0x26) = (char)param_2;
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
    if (*(char *)(iVar1 + 0x2b4) == '\0') {
      cVar2 = FUN_004f7a54(iVar1);
      if (cVar2 != '\0') {
        uVar3 = FUN_004b920c(param_1);
        uVar4 = FUN_004f76a8(iVar1);
        FUN_0040fa78(uVar4,uVar3,param_2);
      }
    }
  }
  return;
}
