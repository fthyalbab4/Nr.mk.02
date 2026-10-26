// rea decompile_all
// name: FUN_00504764
// address: 0x504764
// body: available
// range: 0x504764-0x504780 inclusive
// range: 0x5047d9-0x504878 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00504764(undefined4 param_1,uint param_2,undefined1 *param_3)

{
  int iVar1;

  *param_3 = 0xf;
  switch(param_2 & 0xff) {
  default:
    *(undefined4 *)(param_3 + 4) = 0;
    iVar1 = 0;
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    *(undefined4 *)(param_3 + 4) = 1;
    iVar1 = 2;
    break;
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
    *(undefined4 *)(param_3 + 4) = 2;
    iVar1 = 7;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
    *(undefined4 *)(param_3 + 4) = 3;
    iVar1 = 0xc;
    break;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    *(undefined4 *)(param_3 + 4) = 4;
    iVar1 = 0x11;
    break;
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    *(undefined4 *)(param_3 + 4) = 5;
    iVar1 = 0x16;
    break;
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
    *(undefined4 *)(param_3 + 4) = 6;
    iVar1 = 0x1b;
    break;
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
    *(undefined4 *)(param_3 + 4) = 7;
    iVar1 = 0x20;
    break;
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
    *(undefined4 *)(param_3 + 4) = 8;
    iVar1 = 0x25;
    break;
  case 0x2a:
    *(undefined4 *)(param_3 + 4) = 9;
    iVar1 = 0x2a;
    break;
  case 0x2b:
    *(undefined4 *)(param_3 + 4) = 10;
    iVar1 = 0x2b;
  }
  *(uint *)(param_3 + 8) = ((param_2 & 0x7f) - iVar1) + 1;
  return;
}
