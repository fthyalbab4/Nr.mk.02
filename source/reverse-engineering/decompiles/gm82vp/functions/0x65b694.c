// rea decompile_all
// name: FUN_0065b694
// address: 0x65b694
// body: available
// range: 0x65b694-0x65b716 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065b694(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  uVar1 = FUN_00405fac(&PTR_LAB_0050b4b8,1);
  FUN_0050bce8(uVar1,0x191);
  FUN_0050bce8(uVar1,*(undefined4 *)(param_1 + 4));
  iVar2 = *(int *)(param_1 + 4);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      FUN_0065a3e4(uVar1,*(int *)(param_1 + 8) + iVar3 * 0x18);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = *(int *)(param_1 + 4);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      FUN_0065a3e4(uVar1,*(int *)(param_1 + 0xc) + iVar3 * 0x18);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0050c28c(uVar1,param_2);
  FUN_00405fdc(uVar1);
  return;
}
