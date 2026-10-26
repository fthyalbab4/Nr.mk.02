// rea decompile_all
// name: FUN_00425134
// address: 0x425134
// body: available
// range: 0x425134-0x425178 inclusive
// range: 0x4251d1-0x425386 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00425134(undefined4 param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  undefined4 uVar2;

  uVar1 = *param_2;
  if (param_3 != uVar1) {
    if (uVar1 == 0x400c) {
      FUN_00425134(param_1,*(undefined4 *)(param_2 + 4));
    }
    else {
      switch(param_3) {
      case 0:
        if ((*param_2 == 1) && (DAT_0067ce6c != '\0')) {
          FUN_00424264(1,0);
        }
        else {
          FUN_00424ab4(param_1);
        }
        break;
      case 1:
        FUN_00424804(param_1);
        break;
      case 2:
        uVar2 = FUN_00425b30(param_2);
        FUN_00429b90(param_1,uVar2);
        break;
      case 3:
        uVar2 = FUN_00425520(param_2);
        FUN_00429ac4(param_1,uVar2);
        break;
      case 4:
        FUN_00427174(param_2);
        FUN_00429bdc(param_1);
        break;
      case 5:
        FUN_00426d68(param_2);
        FUN_00429c00(param_1);
        break;
      case 6:
        FUN_00427b7c(param_2);
        FUN_00429c2c(param_1);
        break;
      case 7:
        FUN_00427580(param_2);
        FUN_00429c58(param_1);
        break;
      case 8:
        FUN_00424ecc(param_1,param_2);
        break;
      case 9:
        FUN_00424fb0(param_1,param_2);
        break;
      default:
        if (param_3 == 0x100) {
          FUN_00424f18(param_1,param_2);
        }
        else if (param_3 == 0x101) {
          FUN_00424264((uint)uVar1,0x101);
        }
        else if (param_3 == 0x102) {
          FUN_00424f64(param_1,param_2);
        }
        else {
          FUN_004250c8(param_1,param_2);
        }
        break;
      case 0xb:
        uVar2 = FUN_00426800(param_2);
        FUN_00429c84(param_1,uVar2);
        break;
      case 0xd:
        FUN_00424ffc(param_1,param_2);
        break;
      case 0x10:
        uVar2 = FUN_004259d0(param_2);
        FUN_00429b70(param_1,uVar2);
        break;
      case 0x11:
        uVar2 = FUN_00425a84(param_2);
        FUN_00429ae4(param_1,uVar2);
        break;
      case 0x12:
        uVar2 = FUN_00425c2c(param_2);
        FUN_00429b04(param_1,uVar2);
        break;
      case 0x13:
        uVar2 = FUN_00425d08(param_2);
        FUN_00429b24(param_1,uVar2);
        break;
      case 0x14:
        FUN_00426058(param_2);
        FUN_00429bb0(param_1);
        break;
      case 0x15:
        FUN_004264e8(param_2);
        FUN_00429b44(param_1);
      }
    }
    return;
  }
  FUN_00424e1c(param_1,param_2);
  return;
}
