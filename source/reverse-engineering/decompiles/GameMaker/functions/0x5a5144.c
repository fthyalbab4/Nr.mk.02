// rea decompile_all
// name: FUN_005a5144
// address: 0x5a5144
// body: available
// range: 0x5a5144-0x5a518d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005a5144(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  FUN_005a5090(param_1);
  iVar1 = FUN_0052f024(param_2);
  if (iVar1 == 400) {
    iVar2 = FUN_0052f024(param_2);
    iVar1 = iVar2 + -1;
    if (-1 < iVar1) {
      do {
        uVar3 = FUN_005a51d4(param_1,0,0);
        FUN_0071076c(uVar3,param_2);
        iVar2 = iVar2 + -1;
        iVar1 = 0;
      } while (iVar2 != 0);
    }
    uVar3 = CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return uVar3;
}
