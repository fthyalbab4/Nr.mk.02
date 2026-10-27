// rea decompile_all
// name: FUN_00644130
// address: 0x644130
// body: available
// range: 0x644130-0x64416a inclusive
// range: 0x6441db-0x644556 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00644130(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7)

{
  FUN_0051cc64(*(undefined4 *)PTR_DAT_007828e0,0xfff5);
  FUN_00643eac(param_1);
  FUN_00644610(param_1);
  switch(param_2) {
  default:
    FUN_004d43f8(L"Not yet Implemented");
    break;
  case 1:
    FUN_005af828(*(undefined4 *)(param_1 + 0x704),param_3,param_7);
    break;
  case 2:
    if (0 < param_3) {
      FUN_005af90c(*(undefined4 *)(param_1 + 0x704));
    }
    if (0 < param_7) {
      FUN_005af984(*(undefined4 *)(param_1 + 0x704));
    }
    break;
  case 3:
    FUN_005afbd4(*(undefined4 *)(param_1 + 0x704),0,3,*(undefined4 *)PTR_DAT_007819d0,0,
                 (double)param_3);
    break;
  case 4:
    FUN_005b0004(*(undefined4 *)(param_1 + 0x704),3,5,*(undefined4 *)PTR_DAT_007819d0,0,
                 (double)((float)param_7 / 100.0),(double)((float)param_3 / 100.0));
    break;
  case 5:
    FUN_00701e94(*(undefined4 *)(param_1 + 0x704),param_3,param_7,*(undefined4 *)PTR_DAT_007819d0,
                 param_6);
    FUN_00644aa0(param_1);
    break;
  case 6:
    FUN_0070205c(*(undefined4 *)(param_1 + 0x704),param_3,param_7);
    FUN_00644aa0(param_1);
    break;
  case 7:
    FUN_00701fd0(*(undefined4 *)(param_1 + 0x704),param_3);
    FUN_00644aa0(param_1);
    break;
  case 8:
    FUN_005b0044(*(undefined4 *)(param_1 + 0x704),3,*(undefined4 *)PTR_DAT_007819d0,
                 (double)((float)param_7 / 100.0),(double)((float)param_3 / 100.0));
    break;
  case 10:
    FUN_00702dfc(*(undefined4 *)(param_1 + 0x704),param_4,0);
    break;
  case 0xc:
    FUN_005b02d4(*(undefined4 *)(param_1 + 0x704));
    break;
  case 0xd:
    if (param_7 < 1) {
      FUN_005b0374(*(undefined4 *)(param_1 + 0x704),param_3);
    }
    else {
      FUN_005b03d4(*(undefined4 *)(param_1 + 0x704),param_3);
    }
    break;
  case 0xe:
    if (param_5 < 1) {
      FUN_005b0448(*(undefined4 *)(param_1 + 0x704),param_7 - param_6,param_7 + param_6);
    }
    else {
      FUN_005b04e0(*(undefined4 *)(param_1 + 0x704),param_7 - param_6,param_7 + param_6);
    }
    break;
  case 0xf:
    FUN_005b0590(*(undefined4 *)(param_1 + 0x704),param_3);
    FUN_005b0650(*(undefined4 *)(param_1 + 0x704),param_7);
    break;
  case 0x10:
    FUN_005b0330(*(undefined4 *)(param_1 + 0x704));
    break;
  case 0x11:
    FUN_005b08d0(*(undefined4 *)(param_1 + 0x704));
    break;
  case 0x12:
    FUN_005b0b44(*(undefined4 *)(param_1 + 0x704),param_4,param_3);
    break;
  case 0x13:
    FUN_005b0b94(*(undefined4 *)(param_1 + 0x704));
    break;
  case 0x14:
    FUN_005b08f4(*(undefined4 *)(param_1 + 0x704),param_3,0 < param_7);
    break;
  case 0x15:
    FUN_005b0710(*(undefined4 *)(param_1 + 0x704),param_4,param_3);
    break;
  case 0x16:
    FUN_005b229c(*(undefined4 *)(param_1 + 0x704),param_3,0,0 < param_6,0 < param_7);
    break;
  case 0x17:
    FUN_005b0dc4(*(undefined4 *)(param_1 + 0x704),param_4,0,param_5,0 < param_6,0 < param_7,
                 0 < param_3);
    break;
  case 0x18:
    FUN_005b1534(*(undefined4 *)(param_1 + 0x704),param_4,param_3,0 < param_6,param_7);
    break;
  case 0x19:
    FUN_005b0fa4(*(undefined4 *)(param_1 + 0x704),param_4,param_3);
    break;
  case 0x1a:
    FUN_005b1820(*(undefined4 *)(param_1 + 0x704),param_4,param_3);
    break;
  case 0x1b:
    FUN_005b2614(*(undefined4 *)(param_1 + 0x704),param_3,0 < param_7);
  }
  FUN_00644e28(param_1);
  *(undefined1 *)(param_1 + 0x70d) = 1;
  FUN_0051cc64(*(undefined4 *)PTR_DAT_007828e0,0);
  return;
}
