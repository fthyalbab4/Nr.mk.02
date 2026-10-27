// rea decompile_all
// name: FUN_006e184c
// address: 0x6e184c
// body: available
// range: 0x6e184c-0x6e1912 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e184c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;

  iVar2 = FUN_004b053c(*(undefined4 *)(param_1 + 0x5b4));
  if (iVar2 == 0) {
    FUN_004dbc6c(*(undefined4 *)(param_1 + 0x554),L"&Export All Scripts...");
  }
  else {
    FUN_004b053c(*(undefined4 *)(param_1 + 0x5b4));
    iVar2 = FUN_0071cdcc();
    FUN_004b053c(*(undefined4 *)(param_1 + 0x5b4));
    iVar3 = FUN_0071cde4();
    if ((iVar3 == 7) && (iVar2 != 1)) {
      if (iVar2 == 3) {
        FUN_004dbc6c(*(undefined4 *)(param_1 + 0x554),L"&Export Selected Script...");
      }
      else {
        FUN_004dbc6c(*(undefined4 *)(param_1 + 0x554),L"&Export Group of Scripts...");
      }
    }
    else {
      FUN_004dbc6c(*(undefined4 *)(param_1 + 0x554),L"&Export All Scripts...");
    }
  }
  FUN_004dbd34(*(undefined4 *)(param_1 + 0x554),0);
  iVar2 = FUN_00655b18();
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      cVar1 = FUN_00655b20(iVar3);
      if (cVar1 != '\0') {
        FUN_004dbd34(*(undefined4 *)(param_1 + 0x554),1);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
