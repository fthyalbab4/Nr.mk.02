// rea decompile_all
// name: FUN_00437b20
// address: 0x437b20
// body: available
// range: 0x437b20-0x437b63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00437b20(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  uVar3 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < iVar2 + -1) {
    iVar4 = 0;
    do {
      uVar1 = FUN_00438ec4(*(undefined4 *)(param_1 + 4),iVar4);
      uVar3 = FUN_004374dc(&DAT_00436b8c,uVar1,uVar3,param_2);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return uVar3;
}
