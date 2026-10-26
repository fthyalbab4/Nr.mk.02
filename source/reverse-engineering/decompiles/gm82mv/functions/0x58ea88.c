// rea decompile_all
// name: FUN_0058ea88
// address: 0x58ea88
// body: available
// range: 0x58ea88-0x58eb11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058ea88(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  double in_stack_00000004;
  undefined4 local_c;
  undefined4 uStack_8;

  local_c = 0;
  uStack_8 = 0xc1cdcd65;
  if (-1 < DAT_00686b34 + -1) {
    iVar2 = 0;
    iVar3 = DAT_00686b34;
    do {
      cVar1 = FUN_0058d584(iVar2);
      if ((((cVar1 != '\0') && (*(char *)(DAT_00686b30 + 0x51 + iVar2 * 0x58) != '\0')) &&
          ((double)CONCAT44(uStack_8,local_c) < *(double *)(DAT_00686b30 + 0x38 + iVar2 * 0x58))) &&
         (*(double *)(DAT_00686b30 + 0x38 + iVar2 * 0x58) < in_stack_00000004)) {
        local_c = *(undefined4 *)(DAT_00686b30 + 0x38 + iVar2 * 0x58);
        uStack_8 = *(undefined4 *)(DAT_00686b30 + 0x3c + iVar2 * 0x58);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}
