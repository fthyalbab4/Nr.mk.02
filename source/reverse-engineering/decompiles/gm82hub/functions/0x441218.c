// rea decompile_all
// name: FUN_00441218
// address: 0x441218
// body: available
// range: 0x441218-0x441259 inclusive
// range: 0x4412b2-0x441429 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x441235 (push 0x44142a followed by fs-segment stack chaining); handler 0x44142a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00441218(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  local_20 = 0;
  puStack_2c = &LAB_0044142a;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_1;
  FUN_00424ab4(param_2);
  uVar4 = FUN_0043e89c(local_8);
  switch(uVar4 & 0x7f) {
  case 0:
  case 0xd:
    cVar2 = FUN_00440718(local_8);
    if (cVar2 != '\r') {
      FUN_0042b6f0(param_2);
    }
    break;
  default:
    FUN_0041be80(&LAB_0042d618,1,PTR_LAB_00689488);
    FUN_00406ab4();
    break;
  case 2:
    cVar2 = FUN_0043f588(local_8);
    FUN_00429a88(param_2,(int)cVar2,0xff);
    break;
  case 3:
    sVar3 = FUN_0043f588(local_8);
    FUN_00429a88(param_2,(int)sVar3,0xfe);
    break;
  case 4:
    uVar5 = FUN_0043f588(local_8);
    FUN_00429a88(param_2,uVar5,0xfc);
    break;
  case 5:
    FUN_0043f29c(local_8);
    FUN_00429cac(param_2);
    break;
  case 6:
  case 0xc:
    FUN_004404f0(local_8,&local_c);
    FUN_00429d4c(param_2,local_c);
    break;
  case 8:
  case 9:
    cVar2 = FUN_00440718(local_8);
    FUN_00429c84(param_2,cVar2 == '\t');
    break;
  case 10:
    FUN_00441050(&local_20);
    FUN_00424e1c(param_2,&local_20,&stack0xfffffffc);
    break;
  case 0xf:
    FUN_0043f318(local_8);
    FUN_00429cac(param_2);
    break;
  case 0x10:
    FUN_0043f35c(local_8);
    FUN_00429cd4(param_2);
    break;
  case 0x11:
    FUN_0043f3ac(local_8);
    FUN_00429cc0(param_2);
    break;
  case 0x12:
  case 0x14:
    FUN_004405d8(local_8,&local_10);
    FUN_00429d14(param_2,local_10);
    break;
  case 0x13:
    FUN_0043f5f4(local_8);
    FUN_00429bb0(param_2);
    break;
  case 0x15:
    FUN_0043f2d4(local_8);
    FUN_00429cac(param_2);
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00441431;
  puStack_2c = (undefined1 *)0x441419;
  FUN_00424ac8(&local_20,uStack_30,puVar1);
  puStack_2c = (undefined1 *)0x441421;
  FUN_00407dd0(&local_10);
  puStack_2c = (undefined1 *)0x441429;
  thunk_FUN_004072d8(&local_c);
  return;
}
