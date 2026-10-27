// rea decompile_all
// name: FUN_005d1424
// address: 0x5d1424
// body: available
// range: 0x5d1424-0x5d149d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005d1424(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;

  iVar3 = FUN_00409a18(*(undefined4 *)(param_1 + 4));
  if (iVar3 == 0) {
    uVar4 = 0x80000000;
  }
  else {
    iVar3 = FUN_00409a18(*(undefined4 *)(param_1 + 4));
    uVar4 = iVar3 - 1U & param_3;
    while (uVar1 = *(uint *)(*(int *)(param_1 + 4) + uVar4 * 0xc), uVar1 != 0) {
      if ((uVar1 == param_3) &&
         (cVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))
                            (*(int **)(param_1 + 0xc),
                             *(undefined4 *)(*(int *)(param_1 + 4) + 4 + uVar4 * 0xc),param_2),
         cVar2 != '\0')) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      iVar3 = FUN_00409a18(*(undefined4 *)(param_1 + 4));
      if (iVar3 <= (int)uVar4) {
        uVar4 = 0;
      }
    }
    uVar4 = ~uVar4;
  }
  return uVar4;
}
