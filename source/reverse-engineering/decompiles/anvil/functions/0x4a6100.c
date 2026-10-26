// rea decompile_all
// name: FUN_004a6100
// address: 0x4a6100
// body: available
// range: 0x4a6100-0x4a615f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a6100(undefined4 param_1,int param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = FUN_004a8eb8(param_1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      if (iVar3 < param_2) {
        iVar2 = FUN_004a8ec8(param_1,iVar3);
        if (param_3 < *(byte *)(iVar2 + 0x3f)) {
          FUN_004a5024(PTR_LAB_00688ae8);
        }
      }
      else {
        iVar2 = FUN_004a8ec8(param_1,iVar3);
        if (*(byte *)(iVar2 + 0x3f) < param_3) {
          iVar2 = FUN_004a8ec8(param_1,iVar3);
          *(byte *)(iVar2 + 0x3f) = param_3;
        }
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}
