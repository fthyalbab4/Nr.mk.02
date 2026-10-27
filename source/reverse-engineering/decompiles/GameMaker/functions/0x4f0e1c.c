// rea decompile_all
// name: FUN_004f0e1c
// address: 0x4f0e1c
// body: available
// range: 0x4f0e1c-0x4f0e7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f0e1c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;

  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_004efb90(*(int *)(param_1 + 0x34),0xb014,0,param_1);
  }
  if (*(int *)(param_2 + 8) == 0) {
    if (*(short *)(param_1 + 0x132) != 0) {
      (**(code **)(param_1 + 0x130))(*(undefined4 *)(param_1 + 0x134),param_1);
    }
    if ((*(char *)(param_1 + 0x89) != '\0') && ((*(byte *)(param_1 + 0x1c) & 0x10) == 0)) {
      iVar1 = FUN_004efbec(param_1);
      if (iVar1 != 0) {
        uVar2 = FUN_004efbec(param_1);
        FUN_004fe97c(uVar2,param_1);
      }
    }
  }
  return;
}
