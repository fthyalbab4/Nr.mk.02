// rea decompile_all
// name: FUN_00404d18
// address: 0x404d18
// body: available
// range: 0x404d18-0x404d99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00404d18(byte *param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;

  uVar2 = (uint)*param_2;
  pbVar4 = param_1 + 1;
  param_2 = param_2 + 1;
  iVar1 = *param_1 - uVar2;
  if (*param_1 < uVar2 || iVar1 == 0) {
    uVar2 = uVar2 + iVar1;
  }
  uVar3 = uVar2 >> 2;
  do {
    if (uVar3 == 0) {
LAB_00404d5b:
      uVar2 = uVar2 & 3;
      if ((uVar2 == 0) ||
         ((*pbVar4 == *param_2 &&
          ((uVar2 == 1 || ((pbVar4[1] == param_2[1] && ((uVar2 == 2 || (pbVar4[2] == param_2[2])))))
           ))))) {
        iVar1 = iVar1 * 2;
      }
      return iVar1;
    }
    if (*(int *)pbVar4 != *(int *)param_2) {
      return iVar1;
    }
    if (uVar3 == 1) {
      pbVar4 = pbVar4 + 4;
      param_2 = param_2 + 4;
      goto LAB_00404d5b;
    }
    if (*(int *)(pbVar4 + 4) != *(int *)(param_2 + 4)) {
      return iVar1;
    }
    pbVar4 = pbVar4 + 8;
    param_2 = param_2 + 8;
    uVar3 = uVar3 - 2;
  } while( true );
}
