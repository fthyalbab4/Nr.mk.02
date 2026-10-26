// rea decompile_all
// name: FUN_00437da8
// address: 0x437da8
// body: available
// range: 0x437da8-0x437df6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00437da8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  iVar3 = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      iVar1 = FUN_00438ec4(*(undefined4 *)(param_1 + 4),iVar4);
      iVar1 = FUN_00438f2c(*(undefined4 *)(iVar1 + 0xc),param_2);
      if (-1 < iVar1) {
        return;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar2 = FUN_0043754c(&DAT_00436b8c,1,param_2);
  FUN_00438d04(*(undefined4 *)(param_1 + 4),uVar2);
  return;
}
