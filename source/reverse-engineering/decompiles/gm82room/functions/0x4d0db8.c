// rea decompile_all
// name: FUN_004d0db8
// address: 0x4d0db8
// body: available
// range: 0x4d0db8-0x4d0e39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d0db8(undefined4 param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;

  *param_3 = 0;
  uVar1 = param_2 & 0xff;
  if (uVar1 < 0xf) {
    if (uVar1 - 2 < 5) {
      *(undefined4 *)(param_3 + 4) = 1;
      iVar2 = 2;
      goto LAB_004d0e30;
    }
    if (uVar1 - 7 < 8) {
      *(undefined4 *)(param_3 + 4) = 2;
      iVar2 = 7;
      goto LAB_004d0e30;
    }
  }
  else {
    if (uVar1 - 0xf < 0xc) {
      *(undefined4 *)(param_3 + 4) = 3;
      iVar2 = 0xf;
      goto LAB_004d0e30;
    }
    if (uVar1 - 0x1b < 2) {
      *(undefined4 *)(param_3 + 4) = 4;
      iVar2 = 0x1b;
      goto LAB_004d0e30;
    }
    if (uVar1 - 0x1b == 2) {
      *(undefined4 *)(param_3 + 4) = 5;
      iVar2 = 0x1d;
      goto LAB_004d0e30;
    }
  }
  *(undefined4 *)(param_3 + 4) = 0;
  iVar2 = 0;
LAB_004d0e30:
  *(uint *)(param_3 + 8) = ((param_2 & 0x7f) - iVar2) + 1;
  return;
}
