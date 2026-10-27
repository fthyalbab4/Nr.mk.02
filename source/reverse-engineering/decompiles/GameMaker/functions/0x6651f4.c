// rea decompile_all
// name: FUN_006651f4
// address: 0x6651f4
// body: available
// range: 0x6651f4-0x665297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006651f4(int *param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  undefined4 uVar2;

  if ((*(byte *)(param_2 + 0x1c) & 8) == 0) {
    if (param_1[0xea] == 0) {
      iVar1 = FUN_00665008(0);
      param_1[0xe9] = iVar1;
      iVar1 = FUN_00665008(1,param_1,&stack0xfffffffc);
      param_1[0xea] = iVar1;
      iVar1 = FUN_00665008(2,param_1,&stack0xfffffffc);
      param_1[0xeb] = iVar1;
      param_3 = &stack0xfffffffc;
    }
    iVar1 = *(int *)param_1[0xe9];
    uVar2 = (**(code **)(iVar1 + 0x4c))((int *)param_1[0xe9],iVar1,param_3);
    FUN_004d5378(uVar2,param_2);
    uVar2 = (**(code **)(*(int *)param_1[0xea] + 0x4c))();
    FUN_004d5378(uVar2,param_2);
    uVar2 = (**(code **)(*(int *)param_1[0xeb] + 0x4c))();
    FUN_004d5378(uVar2,param_2);
    (**(code **)(*param_1 + 0x90))();
  }
  return;
}
