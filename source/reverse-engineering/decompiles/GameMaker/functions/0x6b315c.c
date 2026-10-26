// rea decompile_all
// name: FUN_006b315c
// address: 0x6b315c
// body: available
// range: 0x6b315c-0x6b321e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b315c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = FUN_00409a18(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 4 + param_2 * 0x10));
  if (-1 < iVar1 + -1) {
    iVar2 = 0;
    do {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + param_2 * 0x10) + 8 + iVar2 * 0xc) =
           0;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if ((*(int *)(param_1 + 0x324) != 0) && (*PTR_DAT_00781dc8 != '\0')) {
    iVar1 = -1;
    do {
      iVar1 = FUN_006b01fc(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + param_2 * 0x10),
                           *(undefined4 *)(param_1 + 0x324),iVar1 + 1);
      if (-1 < iVar1) {
        iVar2 = 0;
        if (*(int *)(param_1 + 0x324) != 0) {
          iVar2 = *(int *)(*(int *)(param_1 + 0x324) + -4);
        }
        if (-1 < iVar2 + -1) {
          iVar3 = 0;
          do {
            *(undefined1 *)
             (*(int *)(*(int *)(param_1 + 0x2d8) + 4 + param_2 * 0x10) + 8 + (iVar3 + iVar1) * 0xc)
                 = 1;
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
    } while (-1 < iVar1);
  }
  return;
}
