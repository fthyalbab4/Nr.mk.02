// rea decompile_all
// name: FUN_005ab618
// address: 0x5ab618
// body: available
// range: 0x5ab618-0x5ab690 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ab618(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x54,param_3);
  *(undefined4 **)(param_1 + 0x1c0) = puVar1;
  *puVar1 = &LAB_005ab3c4;
  puVar1 = puVar1 + 0xb;
  iVar3 = *(int *)(param_1 + 0xd8);
  for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x24); iVar4 = iVar4 + 1) {
    uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x100);
    *(undefined4 *)(iVar3 + 0x50) = uVar2;
    FUN_005a1d14();
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + 0x54;
  }
  return;
}
