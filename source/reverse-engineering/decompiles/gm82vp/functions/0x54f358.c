// rea decompile_all
// name: FUN_0054f358
// address: 0x54f358
// body: available
// range: 0x54f358-0x54f39e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054f358(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x18) + 0x10;
    for (iVar2 = (uint)*(ushort *)(iVar2 + 0xc) + (uint)*(ushort *)(iVar2 + 0xe); iVar2 != 0;
        iVar2 = iVar2 + -1) {
      uVar1 = (**(code **)**(undefined4 **)(param_1 + 0x14))
                        (*(undefined4 **)(param_1 + 0x14),iVar3,param_2);
      FUN_00438d04(param_1,uVar1);
      iVar3 = iVar3 + 8;
    }
  }
  return;
}
