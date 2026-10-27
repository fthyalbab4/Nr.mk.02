// rea decompile_all
// name: FUN_0056b564
// address: 0x56b564
// body: available
// range: 0x56b564-0x56b5db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0056b564(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  uVar2 = 1;
  uVar3 = param_5;
  cVar1 = FUN_0056b518(param_2,param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_0056b518(param_3,param_1,uVar3,param_5);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 8) = *param_4;
      *(undefined4 *)(param_1 + 0xc) = param_4[1];
    }
  }
  else {
    cVar1 = FUN_0056b518(param_4,param_1 + 8,uVar3,param_5);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 8) = *param_3;
      *(undefined4 *)(param_1 + 0xc) = param_3[1];
    }
  }
  return uVar2;
}
