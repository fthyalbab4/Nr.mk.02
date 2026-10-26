// rea decompile_all
// name: FUN_004d1264
// address: 0x4d1264
// body: available
// range: 0x4d1264-0x4d127c inclusive
// range: 0x4d12a7-0x4d12fd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d1264(undefined4 param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;

  *param_3 = 10;
  switch(param_2 & 0xff) {
  default:
    *(undefined4 *)(param_3 + 4) = 0;
    iVar1 = 0;
    break;
  case 2:
    *(undefined4 *)(param_3 + 4) = 1;
    iVar1 = 2;
    break;
  case 3:
    *(undefined4 *)(param_3 + 4) = 2;
    iVar1 = 3;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    *(undefined4 *)(param_3 + 4) = 3;
    iVar1 = 4;
    break;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    *(undefined4 *)(param_3 + 4) = 4;
    iVar1 = 10;
    break;
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
    *(undefined4 *)(param_3 + 4) = 5;
    iVar1 = 0xe;
  }
  *(uint *)(param_3 + 8) = ((param_2 & 0x7f) - iVar1) + 1;
  return;
}
