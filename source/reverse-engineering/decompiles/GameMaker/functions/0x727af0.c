// rea decompile_all
// name: FUN_00727af0
// address: 0x727af0
// body: available
// range: 0x727af0-0x727b84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00727af0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;

  iVar3 = param_4;
  cVar1 = FUN_00727668(param_1,param_2,param_3,param_4);
  if ((cVar1 != '\0') && (2 < param_4)) {
    FUN_00407140(param_1 + 0x14,*(undefined4 *)(param_1 + 4),0,iVar3);
    iVar3 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x14) + -4);
    }
    FUN_004078e4(param_1 + 0x18,(param_4 - iVar3) + -1,0);
    uVar2 = thunk_FUN_00407688(param_1 + 0x18);
    iVar3 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x14) + -4);
    }
    uVar4 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x18) + -4);
    }
    FUN_0040450c(iVar3 + *(int *)(param_1 + 4) + 1,uVar2,uVar4);
  }
  return cVar1;
}
