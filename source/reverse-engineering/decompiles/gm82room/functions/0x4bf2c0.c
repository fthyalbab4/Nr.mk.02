// rea decompile_all
// name: FUN_004bf2c0
// address: 0x4bf2c0
// body: available
// range: 0x4bf2c0-0x4bf2e5 inclusive
// range: 0x4bf302-0x4bf3ef inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_004bf2c0(int param_1,int param_2,undefined1 param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  uVar1 = 0;
  switch(param_3) {
  case 1:
    iVar2 = (**(code **)(**(int **)(param_1 + 0x74) + 0x10))(*(int **)(param_1 + 0x74),1);
    iVar3 = (**(code **)(**(int **)(param_2 + 0x74) + 0x10))(*(int **)(param_2 + 0x74),1);
    uVar1 = iVar2 < iVar3;
    break;
  case 2:
    iVar2 = (**(code **)(**(int **)(param_1 + 0x74) + 0x10))(*(int **)(param_1 + 0x74),1);
    iVar3 = (**(code **)(**(int **)(param_1 + 0x74) + 0x10))(*(int **)(param_1 + 0x74),3);
    iVar4 = (**(code **)(**(int **)(param_2 + 0x74) + 0x10))(*(int **)(param_2 + 0x74),1);
    iVar5 = (**(code **)(**(int **)(param_2 + 0x74) + 0x10))(*(int **)(param_2 + 0x74),3);
    uVar1 = iVar4 + iVar5 <= iVar2 + iVar3;
    break;
  case 3:
    iVar2 = (**(code **)(**(int **)(param_1 + 0x74) + 0x10))(*(int **)(param_1 + 0x74),0);
    iVar3 = (**(code **)(**(int **)(param_2 + 0x74) + 0x10))(*(int **)(param_2 + 0x74),0);
    uVar1 = iVar2 < iVar3;
    break;
  case 4:
    iVar2 = (**(code **)(**(int **)(param_1 + 0x74) + 0x10))(*(int **)(param_1 + 0x74),0);
    iVar3 = (**(code **)(**(int **)(param_1 + 0x74) + 0x10))(*(int **)(param_1 + 0x74),2);
    iVar4 = (**(code **)(**(int **)(param_2 + 0x74) + 0x10))(*(int **)(param_2 + 0x74),0);
    iVar5 = (**(code **)(**(int **)(param_2 + 0x74) + 0x10))(*(int **)(param_2 + 0x74),2);
    uVar1 = iVar4 + iVar5 <= iVar2 + iVar3;
    break;
  case 6:
    uVar1 = (**(code **)(**(int **)(param_4 + -4) + 0xb8))(*(int **)(param_4 + -4),param_1,param_2);
  }
  return uVar1;
}
