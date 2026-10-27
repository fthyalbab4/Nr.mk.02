// rea decompile_all
// name: FUN_006588c4
// address: 0x6588c4
// body: available
// range: 0x6588c4-0x6589c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_006588c4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar3 = *(int *)(param_1 + 0x2f0) + -1;
  if (-1 < iVar3) {
    do {
      iVar1 = FUN_0062cd94(*(undefined4 *)(*(int *)(param_1 + 0x2f4) + 8 + iVar3 * 0x18));
      if (iVar1 != 0) {
        iVar1 = FUN_006f5b30(*(undefined4 *)(iVar1 + 4));
        if (iVar1 == 0) {
          iVar1 = *(int *)(*(int *)(param_1 + 0x2f4) + iVar3 * 0x18);
          iVar4 = *(int *)(*(int *)(param_1 + 0x2f4) + 4 + iVar3 * 0x18);
          if (((iVar1 <= param_2) && (param_2 < iVar1 + 0x10)) && (iVar4 <= param_3)) {
            iVar4 = iVar4 + 0x10;
joined_r0x006589a9:
            if (param_3 < iVar4) {
              return iVar3;
            }
          }
        }
        else {
          iVar5 = *(int *)(*(int *)(param_1 + 0x2f4) + iVar3 * 0x18) - *(int *)(iVar1 + 8);
          iVar4 = *(int *)(*(int *)(param_1 + 0x2f4) + 4 + iVar3 * 0x18) - *(int *)(iVar1 + 0xc);
          if (((iVar5 <= param_2) && (iVar2 = FUN_005b2ec4(iVar1), param_2 < iVar5 + iVar2)) &&
             (iVar4 <= param_3)) {
            iVar1 = FUN_005b2edc(iVar1);
            iVar4 = iVar4 + iVar1;
            goto joined_r0x006589a9;
          }
        }
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return -1;
}
