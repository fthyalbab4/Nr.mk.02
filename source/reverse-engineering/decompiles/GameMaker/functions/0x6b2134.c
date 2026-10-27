// rea decompile_all
// name: FUN_006b2134
// address: 0x6b2134
// body: available
// range: 0x6b2134-0x6b230b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b2134(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;

  piVar1 = (int *)FUN_004ab940(&PTR_LAB_004955cc,1,param_2);
  *(int **)(param_1 + 0x284) = piVar1;
  (**(code **)(*piVar1 + 0x78))(piVar1,param_2);
  FUN_004ab89c(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270));
  uVar2 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270),0);
  FUN_004ab82c(uVar2,0x5a);
  uVar2 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270),0);
  FUN_004ab7f4(uVar2,1);
  FUN_004ab89c(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270));
  uVar2 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270),1);
  FUN_004ab82c(uVar2,0x23);
  uVar2 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270),1);
  FUN_004ab7d4(uVar2,2);
  uVar2 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270),1);
  FUN_004ab7f4(uVar2,1);
  FUN_004ab89c(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270));
  uVar2 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270),2);
  FUN_004ab82c(uVar2,0x3c);
  uVar2 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270),2);
  FUN_004ab7f4(uVar2,1);
  FUN_004ab89c(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270));
  uVar2 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270),3);
  FUN_004ab82c(uVar2,0x28);
  uVar2 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270),3);
  FUN_004ab7f4(uVar2,1);
  FUN_004ab89c(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270));
  uVar2 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270),4);
  FUN_004ab82c(uVar2,0x32);
  uVar2 = FUN_004ab8a8(*(undefined4 *)(*(int *)(param_1 + 0x284) + 0x270),4);
  FUN_004ab7f4(uVar2,1);
  FUN_004c7328(*(undefined4 *)(param_1 + 0x284));
  return;
}
