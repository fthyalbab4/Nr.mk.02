// rea decompile_all
// name: FUN_0054b41c
// address: 0x54b41c
// body: available
// range: 0x54b41c-0x54b460 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0054b41c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;

  uVar4 = 0;
  iVar1 = FUN_005415b8(*(undefined4 *)(param_1 + 0x2c));
  if (-1 < iVar1 + -1) {
    iVar5 = 0;
    do {
      piVar2 = (int *)FUN_00548da8(*(undefined4 *)(param_1 + 0x2c),iVar5);
      uVar3 = (**(code **)(*piVar2 + 0xc))();
      if ((byte)uVar4 < (byte)uVar3) {
        uVar4 = uVar3;
      }
      if (1 < (byte)uVar3) {
        return uVar4;
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return uVar4;
}
