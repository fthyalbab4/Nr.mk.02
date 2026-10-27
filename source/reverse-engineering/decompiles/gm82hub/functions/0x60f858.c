// rea decompile_all
// name: FUN_0060f858
// address: 0x60f858
// body: available
// range: 0x60f858-0x60f905 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0060f858(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;

  uVar4 = 0;
  FUN_0060f768(param_1,param_2,param_3,param_3);
  iVar2 = FUN_0050bbe0(param_2);
  if (iVar2 == 0x1ae) {
    uVar4 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 4) = uVar4;
    uVar1 = FUN_0050bcd0(param_2);
    *(undefined1 *)(param_1 + 8) = uVar1;
    uVar1 = FUN_0050bcd0(param_2);
    *(undefined1 *)(param_1 + 9) = uVar1;
    uVar4 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    uVar1 = FUN_0050bcd0(param_2);
    *(undefined1 *)(param_1 + 0x10) = uVar1;
    uVar4 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x14) = uVar4;
    uVar4 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    iVar2 = FUN_0050bbe0(param_2);
    if (-1 < iVar2) {
      iVar2 = iVar2 + 1;
      iVar5 = 0;
      do {
        while (iVar3 = FUN_0050bbe0(param_2), -1 < iVar3) {
          uVar4 = FUN_0060f7d4(param_1,iVar5,iVar3);
          FUN_0060fedc(uVar4,param_2);
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uVar4 = 1;
  }
  return uVar4;
}
