// rea decompile_all
// name: FUN_0058d60c
// address: 0x58d60c
// body: available
// range: 0x58d60c-0x58d736 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058d60c(int param_1)

{
  int iVar1;
  char cVar2;

  cVar2 = FUN_0058d584(param_1);
  if (cVar2 != '\0') {
    FUN_00409dfc(DAT_00686b30 + 4 + param_1 * 0x58,&DAT_0058af58,1,0);
    *(undefined4 *)(DAT_00686b30 + 8 + param_1 * 0x58) = 0;
    FUN_00409dfc(DAT_00686b30 + 0xc + param_1 * 0x58,&DAT_0058af98,1,0);
    *(undefined4 *)(DAT_00686b30 + 0x10 + param_1 * 0x58) = 0;
    FUN_00409dfc(DAT_00686b30 + 0x14 + param_1 * 0x58,&DAT_0058afd8,1,0);
    *(undefined4 *)(DAT_00686b30 + 0x18 + param_1 * 0x58) = 0;
    FUN_00409dfc(DAT_00686b30 + 0x1c + param_1 * 0x58,&DAT_0058b018,1,0);
    *(undefined4 *)(DAT_00686b30 + 0x20 + param_1 * 0x58) = 0;
    FUN_00409dfc(DAT_00686b30 + 0x24 + param_1 * 0x58,&DAT_0058b058,1,0);
    *(undefined4 *)(DAT_00686b30 + 0x28 + param_1 * 0x58) = 0;
    FUN_00409dfc(DAT_00686b30 + 0x2c + param_1 * 0x58,&DAT_0058b098,1,0);
    *(undefined4 *)(DAT_00686b30 + 0x30 + param_1 * 0x58) = 0;
    *(undefined1 *)(DAT_00686b30 + 0x34 + param_1 * 0x58) = 1;
    iVar1 = DAT_00686b30;
    *(undefined4 *)(DAT_00686b30 + 0x38 + param_1 * 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x3c + param_1 * 0x58) = 0;
    iVar1 = DAT_00686b30;
    *(undefined4 *)(DAT_00686b30 + 0x40 + param_1 * 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x44 + param_1 * 0x58) = 0;
    iVar1 = DAT_00686b30;
    *(undefined4 *)(DAT_00686b30 + 0x48 + param_1 * 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x4c + param_1 * 0x58) = 0;
    *(undefined1 *)(DAT_00686b30 + 0x50 + param_1 * 0x58) = 1;
    *(undefined1 *)(DAT_00686b30 + 0x51 + param_1 * 0x58) = 1;
  }
  return;
}
