// rea decompile_all
// name: FUN_00710544
// address: 0x710544
// body: available
// range: 0x710544-0x7105ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00710544(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  iVar1 = FUN_00710538(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(iVar1 + 0x32);
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(iVar1 + 0x30);
    *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(iVar1 + 0x31);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0xb8);
    FUN_00407eb8(param_1 + 0x18,*(undefined4 *)(iVar1 + 0xbc));
    FUN_00407eb8(param_1 + 0x1c,*(undefined4 *)(iVar1 + 0xc0));
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar1 + 0x34);
    iVar3 = 0;
    do {
      uVar2 = FUN_00561ccc(iVar1,iVar3);
      *(undefined4 *)(param_1 + 0x24 + iVar3 * 4) = uVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 8);
  }
  return;
}
