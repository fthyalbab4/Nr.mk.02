// rea decompile_all
// name: FUN_004252bc
// address: 0x4252bc
// body: available
// range: 0x4252bc-0x425300 inclusive
// range: 0x425359-0x42550e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004252bc(undefined4 param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  undefined4 uVar2;

  uVar1 = *param_2;
  if (param_3 != uVar1) {
    if (uVar1 == 0x400c) {
      FUN_004252bc(param_1,*(undefined4 *)(param_2 + 4));
    }
    else {
      switch(param_3) {
      case 0:
        if ((*param_2 == 1) && (DAT_00773e50 != '\0')) {
          FUN_00424184(1,0);
        }
        else {
          FUN_004249d4(param_1);
        }
        break;
      case 1:
        FUN_00424724(param_1);
        break;
      case 2:
        uVar2 = FUN_00425cb8(param_2);
        FUN_00429d38(param_1,uVar2);
        break;
      case 3:
        uVar2 = FUN_004256a8(param_2);
        FUN_00429c4c(param_1,uVar2);
        break;
      case 4:
        FUN_004272fc(param_2);
        FUN_00429d84(param_1);
        break;
      case 5:
        FUN_00426ef0(param_2);
        FUN_00429da8(param_1);
        break;
      case 6:
        FUN_00427d04(param_2);
        FUN_00429dd4(param_1);
        break;
      case 7:
        FUN_00427708(param_2);
        FUN_00429e00(param_1);
        break;
      case 8:
        FUN_00425054(param_1,param_2);
        break;
      case 9:
        FUN_00425138(param_1,param_2);
        break;
      default:
        if (param_3 == 0x100) {
          FUN_004250a0(param_1,param_2);
        }
        else if (param_3 == 0x101) {
          FUN_00424184((uint)uVar1,0x101);
        }
        else if (param_3 == 0x102) {
          FUN_004250ec(param_1,param_2);
        }
        else {
          FUN_00425250(param_1,param_2);
        }
        break;
      case 0xb:
        uVar2 = FUN_00426988(param_2);
        FUN_00429e2c(param_1,uVar2);
        break;
      case 0xd:
        FUN_00425184(param_1,param_2);
        break;
      case 0x10:
        uVar2 = FUN_00425b58(param_2);
        FUN_00429d18(param_1,uVar2);
        break;
      case 0x11:
        uVar2 = FUN_00425c0c(param_2);
        FUN_00429c8c(param_1,uVar2);
        break;
      case 0x12:
        uVar2 = FUN_00425db4(param_2);
        FUN_00429cac(param_1,uVar2);
        break;
      case 0x13:
        uVar2 = FUN_00425e90(param_2);
        FUN_00429ccc(param_1,uVar2);
        break;
      case 0x14:
        FUN_004261e0(param_2);
        FUN_00429d58(param_1);
        break;
      case 0x15:
        FUN_00426670(param_2);
        FUN_00429cec(param_1);
      }
    }
    return;
  }
  FUN_00424d3c(param_1,param_2);
  return;
}
