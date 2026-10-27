// rea decompile_all
// name: FUN_0056dcfc
// address: 0x56dcfc
// body: available
// range: 0x56dcfc-0x56ddda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0056dcfc(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar4 = *(int *)(param_1 + 8) + -1;
  iVar3 = -1;
  if (-1 < iVar4) {
    do {
      iVar3 = iVar4;
      if (param_2 == *(int *)(*(int *)(param_1 + 4) + iVar3 * 0x28)) break;
      iVar4 = iVar3 + -1;
      iVar3 = -1;
    } while (iVar4 != -1);
  }
  if (-1 < iVar3) {
    iVar3 = *(int *)(param_1 + 4) + iVar3 * 0x28;
    if (param_3 == 0) {
      FUN_00409360(param_4,iVar3 + 8,&DAT_00615f70);
      return true;
    }
    iVar4 = param_3 / 32000;
    param_3 = param_3 % 32000;
    if ((((-1 < iVar4) && (iVar2 = FUN_00409c34(*(undefined4 *)(iVar3 + 0x20)), iVar4 < iVar2)) &&
        (-1 < param_3)) &&
       (iVar2 = FUN_00409c34(*(undefined4 *)(*(int *)(iVar3 + 0x20) + iVar4 * 4)), param_3 < iVar2))
    {
      FUN_00409360(param_4,*(int *)(*(int *)(iVar3 + 0x20) + iVar4 * 4) + param_3 * 0x18,
                   &DAT_00615f70);
      return true;
    }
  }
  cVar1 = *PTR_PTR_00689364;
  if (cVar1 != '\0') {
    *param_4 = 0;
    param_4[2] = 0;
    param_4[3] = 0;
  }
  return cVar1 != '\0';
}
