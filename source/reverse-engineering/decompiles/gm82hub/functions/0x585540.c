// rea decompile_all
// name: FUN_00585540
// address: 0x585540
// body: available
// range: 0x585540-0x5855d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00585540(undefined4 param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;

  uVar1 = 0;
  FUN_0058551c();
  iVar3 = FUN_0050bbe0(param_1);
  if (iVar3 == 700) {
    DAT_00686b0c = FUN_0050bbe0(param_1);
    FUN_00409dfc(&DAT_00686b08,&DAT_00585460,1,DAT_00686b0c);
    if (-1 < DAT_00686b0c + -1) {
      iVar5 = 0;
      iVar3 = DAT_00686b0c;
      do {
        uVar4 = FUN_00575538(&DAT_0057474c,1);
        *(undefined4 *)(DAT_00686b08 + iVar5 * 4) = uVar4;
        cVar2 = FUN_00575660(uVar4,param_1);
        if (cVar2 == '\0') {
          FUN_004a17e4(L"Error in loading extension packages.");
          return 0;
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar1 = 1;
  }
  return uVar1;
}
