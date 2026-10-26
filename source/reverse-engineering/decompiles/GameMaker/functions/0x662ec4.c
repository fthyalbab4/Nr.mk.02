// rea decompile_all
// name: FUN_00662ec4
// address: 0x662ec4
// body: available
// range: 0x662ec4-0x662f31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00662ec4(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  HWND pHVar4;
  BOOL BVar5;
  int iVar6;

  iVar2 = FUN_0051c6bc(*(undefined4 *)PTR_DAT_007828e0);
  if (-1 < iVar2 + -1) {
    iVar6 = 0;
    do {
      uVar3 = FUN_0051c6a8(*(undefined4 *)PTR_DAT_007828e0,iVar6);
      cVar1 = FUN_004f7a54(uVar3);
      if (cVar1 != '\0') {
        pHVar4 = (HWND)FUN_004f76a8(uVar3);
        BVar5 = IsWindowVisible(pHVar4);
        if (BVar5 != 0) {
          pHVar4 = (HWND)FUN_004f76a8(uVar3);
          BVar5 = IsWindowEnabled(pHVar4);
          if (BVar5 != 0) {
            FUN_004efb90(uVar3,0xb045,0,0);
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
