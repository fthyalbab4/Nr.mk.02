// rea decompile_all
// name: FUN_0065c4dc
// address: 0x65c4dc
// body: available
// range: 0x65c4dc-0x65c58e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065c4dc(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (*(int *)(param_1 + 4) == 0) {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
  }
  else {
    iVar3 = 0;
    iVar2 = *(int *)(param_1 + 4) + -1;
    if (0 < iVar2) {
      iVar4 = 1;
      do {
        iVar1 = FUN_0065a204(*(int *)(param_1 + 0xc) + iVar4 * 0x18,
                             *(int *)(param_1 + 0xc) + iVar3 * 0x18);
        if (iVar1 < 0) {
          iVar3 = iVar4;
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00409360(param_2,*(int *)(param_1 + 8) + iVar3 * 0x18,&DAT_00615f70);
    FUN_00409360(*(int *)(param_1 + 8) + iVar3 * 0x18,
                 *(int *)(param_1 + 8) + -0x18 + *(int *)(param_1 + 4) * 0x18,&DAT_00615f70);
    FUN_00409360(*(int *)(param_1 + 0xc) + iVar3 * 0x18,
                 *(int *)(param_1 + 0xc) + -0x18 + *(int *)(param_1 + 4) * 0x18,&DAT_00615f70);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  }
  return;
}
