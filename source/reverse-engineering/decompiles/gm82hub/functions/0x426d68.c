// rea decompile_all
// name: FUN_00426d68
// address: 0x426d68
// body: available
// range: 0x426d68-0x426d83 inclusive
// range: 0x426ddc-0x426f9f inclusive
// range: 0x426ff8-0x42714b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00426d68(ushort *param_1)

{
  ushort uVar1;
  char cVar2;
  undefined1 local_18 [20];

  uVar1 = *param_1;
  switch(uVar1) {
  case 0:
    break;
  case 1:
    if (DAT_0067ce6c != '\0') {
      FUN_00424264(1,5);
    }
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    FUN_00426ba8(param_1);
    break;
  case 9:
  case 0xd:
    FUN_00426c6c(param_1);
    break;
  default:
    if (uVar1 == 0x100) {
      FUN_00426ba8(param_1);
    }
    else if (uVar1 == 0x101) {
      FUN_00426cb8(param_1);
    }
    else if (uVar1 == 0x102) {
      FUN_00426ba8(param_1);
    }
    else if ((uVar1 & 0x4000) == 0) {
      cVar2 = FUN_00426d1c(param_1,local_18);
      if (cVar2 == '\0') {
        FUN_00426c6c(param_1);
      }
    }
    else {
      switch(uVar1 & 0xbfff) {
      default:
        FUN_00426c6c(param_1);
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
        break;
      case 6:
        break;
      case 7:
        break;
      case 8:
        FUN_00426ba8(param_1);
        break;
      case 0xb:
        break;
      case 0xc:
        FUN_00426d68(*(undefined4 *)(param_1 + 4));
        break;
      case 0x10:
        break;
      case 0x11:
        break;
      case 0x12:
        break;
      case 0x13:
        break;
      case 0x14:
        break;
      case 0x15:
      }
    }
    break;
  case 0xb:
    break;
  case 0xc:
    FUN_00426d68(*(undefined4 *)(param_1 + 4));
    break;
  case 0x10:
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
  }
  return;
}
