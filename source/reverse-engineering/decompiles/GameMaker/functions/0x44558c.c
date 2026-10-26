// rea decompile_all
// name: FUN_0044558c
// address: 0x44558c
// body: available
// range: 0x44558c-0x445657 inclusive
// range: 0x44568f-0x4456ed inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0044558c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,code *param_6,undefined4 param_7)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_d;
  undefined4 *local_c;
  undefined4 local_8;

  local_14 = 0;
  local_1c = 0;
  local_24 = 0;
  local_18 = 0;
  local_20 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_6._2_2_ != 0) {
    (*param_6)(param_7,&local_14,&local_1c,&local_18,&local_24);
  }
  local_d = FUN_00444f88(local_14,local_1c,local_18);
  uVar4 = 1;
  if (local_c[1] == 0) {
    return 1;
  }
  if (local_c[2] == 0) {
    if (**(char **)*local_c != '\a') {
      return 1;
    }
    uVar2 = FUN_0042d288(local_8,local_c);
    cVar1 = FUN_00405c98(uVar2,&PTR_FUN_00437bd8);
    if (cVar1 == '\0') {
      return 1;
    }
    iVar3 = FUN_0042d288(local_8,local_c);
    if ((*(byte *)(iVar3 + 0x24) & 4) == 0) {
      return 1;
    }
  }
  switch(**(undefined1 **)*local_c) {
  case 1:
  case 2:
  case 3:
  case 6:
  case 9:
    uVar4 = FUN_00444fa0();
    break;
  case 4:
    uVar4 = FUN_00444ff8();
    break;
  case 5:
  case 10:
  case 0xb:
  case 0x12:
    uVar4 = FUN_004450ac();
    break;
  case 7:
    uVar4 = FUN_004451d4();
    break;
  case 8:
    uVar4 = FUN_00445454();
    break;
  case 0xc:
    uVar4 = FUN_004454f4();
    break;
  case 0xf:
    uVar4 = FUN_00445320();
    break;
  case 0x10:
    uVar4 = FUN_00445054();
  }
  return uVar4;
}
