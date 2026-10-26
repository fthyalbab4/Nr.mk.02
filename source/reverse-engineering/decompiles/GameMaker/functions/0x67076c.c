// rea decompile_all
// name: FUN_0067076c
// address: 0x67076c
// body: available
// range: 0x67076c-0x670817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0067076c(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;

  iVar4 = *(int *)(*(int *)(param_2 + 8) + 8);
  if ((iVar4 != 0) && (-1 < iVar4 + -1)) {
    iVar5 = 0;
    do {
      iVar2 = FUN_00671640(param_2,iVar5);
      if (*(int *)(iVar2 + 0xc) != 0) {
        FUN_006718f4(param_2,1);
        uVar3 = FUN_00671640(param_2,iVar5);
        iVar2 = FUN_00671640(param_2,iVar5);
        (**(code **)(**(int **)(iVar2 + 0xc) + 0x140))(*(int **)(iVar2 + 0xc),uVar3);
        iVar2 = FUN_00671640(param_2,iVar5);
        FUN_00405d08(*(undefined4 *)(iVar2 + 0xc));
        iVar2 = FUN_00671640(param_2,iVar5);
        (**(code **)(**(int **)(iVar2 + 0xc) + 0x68))();
        iVar2 = FUN_00671640(param_2,iVar5);
        uVar1 = *(undefined1 *)(iVar2 + 0x30);
        iVar2 = FUN_00671640(param_2,iVar5);
        FUN_004ee5c0(*(undefined4 *)(iVar2 + 0xc),uVar1);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}
