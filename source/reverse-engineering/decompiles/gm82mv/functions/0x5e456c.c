// rea decompile_all
// name: FUN_005e456c
// address: 0x5e456c
// body: available
// range: 0x5e456c-0x5e45e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e456c(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  iVar4 = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < iVar4 + -1) {
    iVar3 = 0;
    do {
      puVar1 = (undefined4 *)FUN_00438ec4(*(undefined4 *)(param_1 + 4),iVar3);
      FUN_00460154(&PTR_LAB_00457b10,*puVar1);
      uVar2 = FUN_00438ec4(*(undefined4 *)(param_1 + 4),iVar3);
      FUN_004095cc(uVar2,&DAT_005e43ec);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(**(int **)(param_1 + 4) + 8))();
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 8);
  if (-1 < iVar4 + -1) {
    iVar3 = 0;
    do {
      uVar2 = FUN_00438ec4(*(undefined4 *)(param_1 + 8),iVar3);
      FUN_004095cc(uVar2,&DAT_005e4454);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)(**(int **)(param_1 + 8) + 8))();
  return;
}
