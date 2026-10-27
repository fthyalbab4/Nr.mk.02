// rea decompile_all
// name: FUN_00427d04
// address: 0x427d04
// body: available
// range: 0x427d04-0x427d1f inclusive
// range: 0x427d78-0x427f71 inclusive
// range: 0x427fca-0x428153 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00427d04(ushort *param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  char cVar2;
  undefined1 local_18 [12];
  undefined4 local_c;
  int iStack_8;

  uVar1 = *param_1;
  switch(uVar1) {
  case 0:
    break;
  case 1:
    if (DAT_00773e50 != '\0') {
      FUN_00424184(1,6);
    }
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
  case 5:
    FUN_00427c08(param_1);
    break;
  case 6:
    break;
  case 7:
    FUN_00427c08(param_1);
    break;
  case 8:
    FUN_00427aec(param_1);
    break;
  case 9:
  case 0xd:
    FUN_00427c08(param_1);
    break;
  default:
    if (uVar1 == 0x100) {
      FUN_00427aec(param_1);
    }
    else if (uVar1 == 0x101) {
      FUN_00427c54(param_1);
    }
    else if ((ushort)(uVar1 - 0x102) == 0) {
      FUN_00427aec(param_1);
    }
    else if ((uVar1 & 0x4000) == 0) {
      cVar2 = FUN_00427cb8(param_1,local_18);
      if (cVar2 == '\0') {
        FUN_00427c08(param_1);
      }
    }
    else {
      switch(uVar1 & 0xbfff) {
      default:
        FUN_00427c08(param_1);
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
      case 5:
        FUN_00427c08(param_1);
        break;
      case 6:
        break;
      case 7:
        FUN_00427c08(param_1);
        break;
      case 8:
        FUN_00427aec(param_1);
        break;
      case 0xb:
        break;
      case 0xc:
        FUN_00427d04(*(undefined4 *)(param_1 + 4));
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
        FUN_00427ba8(param_1,uVar1 - 0x102,param_3,(double)**(longlong **)(param_1 + 4));
        break;
      case 0x15:
        local_c = **(undefined4 **)(param_1 + 4);
        iStack_8 = (*(undefined4 **)(param_1 + 4))[1] + -0x80000000;
        FUN_00427ba8(param_1,iStack_8,param_3,
                     (double)CONCAT44(iStack_8,local_c) + 9.223372036854776e+18);
      }
    }
    break;
  case 0xb:
    break;
  case 0xc:
    FUN_00427d04(*(undefined4 *)(param_1 + 4));
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
    FUN_00427ba8(param_1,uVar1,param_3,(double)*(longlong *)(param_1 + 4));
    break;
  case 0x15:
    local_c = *(undefined4 *)(param_1 + 4);
    iStack_8 = *(int *)(param_1 + 6) + -0x80000000;
    FUN_00427ba8(param_1,iStack_8,param_3,(double)CONCAT44(iStack_8,local_c) + 9.223372036854776e+18
                );
  }
  return;
}
