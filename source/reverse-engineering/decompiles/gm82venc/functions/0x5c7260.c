// rea decompile_all
// name: FUN_005c7260
// address: 0x5c7260
// body: available
// range: 0x5c7260-0x5c72f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c7260(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;

  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x1c);
  *(undefined4 **)(param_1 + 0x1a2) = puVar1;
  *puVar1 = &LAB_005c7000;
  puVar1[2] = 0;
  puVar1[3] = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x12a);
    puVar1[4] = uVar3;
    if (param_2 == 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 4) + 8))
                        (param_1,1,*(int *)(param_1 + 0x6c) * *(int *)(param_1 + 0x74),puVar1[4]);
      puVar1[3] = uVar3;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x6c) * *(int *)(param_1 + 0x74);
      uVar3 = FUN_005cabe4(*(undefined4 *)(param_1 + 0x70),uVar3);
      uVar3 = (**(code **)(*(int *)(param_1 + 4) + 0x10))(param_1,1,0,puVar1[4],uVar3,iVar2);
      puVar1[2] = uVar3;
    }
  }
  return;
}
