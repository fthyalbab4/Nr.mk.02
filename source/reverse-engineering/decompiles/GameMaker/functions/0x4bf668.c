// rea decompile_all
// name: FUN_004bf668
// address: 0x4bf668
// body: available
// range: 0x4bf668-0x4bf6d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bf668(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  iVar2 = FUN_004b94ec(*(undefined4 *)(param_1 + 0x29c));
  if (-1 < iVar2 + -1) {
    iVar5 = 0;
    do {
      uVar3 = FUN_004b9534(*(undefined4 *)(param_1 + 0x29c),iVar5);
      cVar1 = FUN_004b8ea0(uVar3,3);
      if (cVar1 != '\0') {
        iVar4 = FUN_004b9534(*(undefined4 *)(param_1 + 0x29c),iVar5);
        uVar3 = *(undefined4 *)(iVar4 + 0x28);
        iVar4 = FUN_004b9534(*(undefined4 *)(param_1 + 0x29c),iVar5);
        (**(code **)(*param_2 + 0xf4))(param_2,*(undefined4 *)(iVar4 + 0x20),uVar3);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
