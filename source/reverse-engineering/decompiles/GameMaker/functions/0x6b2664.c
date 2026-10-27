// rea decompile_all
// name: FUN_006b2664
// address: 0x6b2664
// body: available
// range: 0x6b2664-0x6b27a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b2664(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;

  *(undefined1 *)(param_1 + 0x305) = 1;
  if (*(int *)(param_1 + 0x2f4) < 1) {
    iVar2 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
    if (iVar2 <= *(int *)(param_1 + 0x2e4)) {
      uVar4 = 0;
      goto LAB_006b2690;
    }
  }
  uVar4 = 1;
LAB_006b2690:
  (**(code **)(**(int **)(param_1 + 0x27c) + 0x74))(*(int **)(param_1 + 0x27c),uVar4);
  cVar1 = (**(code **)(**(int **)(param_1 + 0x27c) + 0x5c))();
  if (cVar1 != '\0') {
    FUN_00484ecc(*(undefined4 *)(param_1 + 0x27c),0);
    FUN_00484e60(*(undefined4 *)(param_1 + 0x27c),0);
    FUN_00484e74(*(undefined4 *)(param_1 + 0x27c),1);
    iVar2 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
    FUN_00484ee4(*(undefined4 *)(param_1 + 0x27c),iVar2 + -1);
    FUN_00484e60(*(undefined4 *)(param_1 + 0x27c),*(undefined4 *)(param_1 + 0x2f4));
    iVar3 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
    iVar2 = iVar3 + -1;
    if (*(int *)(param_1 + 0x2e4) < iVar3 + -1) {
      iVar2 = *(int *)(param_1 + 0x2e4);
    }
    FUN_00484e74(*(undefined4 *)(param_1 + 0x27c),iVar2);
    iVar2 = *(int *)(param_1 + 0x27c);
    *(undefined2 *)(iVar2 + 0x28a) = *(undefined2 *)(param_1 + 0x2e4);
    *(undefined2 *)(iVar2 + 0x288) = 1;
  }
  FUN_00484ecc(*(undefined4 *)(param_1 + 0x278),0);
  FUN_00484ee4(*(undefined4 *)(param_1 + 0x278),1000);
  FUN_00484e74(*(undefined4 *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x2e8));
  iVar2 = *(int *)(param_1 + 0x278);
  *(undefined2 *)(iVar2 + 0x28a) = *(undefined2 *)(param_1 + 0x2e8);
  *(undefined2 *)(iVar2 + 0x288) = 1;
  FUN_00484e60(iVar2,*(undefined4 *)(param_1 + 0x2f8));
  *(undefined1 *)(param_1 + 0x305) = 0;
  return;
}
