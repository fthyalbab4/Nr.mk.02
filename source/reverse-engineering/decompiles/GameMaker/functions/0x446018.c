// rea decompile_all
// name: FUN_00446018
// address: 0x446018
// body: available
// range: 0x446018-0x4460e8 inclusive
// range: 0x446120-0x446169 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00446018(int param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;

  if (param_3[1] == 0) {
    return;
  }
  if (param_3[2] == 0) {
    if (**(char **)*param_3 != '\a') {
      return;
    }
    uVar2 = FUN_0042d288(param_2,param_3);
    cVar1 = FUN_00405c98(uVar2,&PTR_FUN_00437bd8);
    if (cVar1 == '\0') {
      return;
    }
    iVar3 = FUN_0042d288(param_2,param_3);
    if ((*(byte *)(iVar3 + 0x24) & 4) == 0) {
      return;
    }
  }
  cVar1 = FUN_0044558c(param_2,param_3,param_1,*(undefined4 *)(param_1 + 0x48),
                       *(undefined4 *)(param_1 + 0x4c),&LAB_004469b0,param_1);
  if (cVar1 == '\0') {
    FUN_00444f88(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x18),
                 *(undefined4 *)(param_1 + 0x28));
    switch(**(undefined1 **)*param_3) {
    case 1:
    case 2:
    case 3:
    case 6:
    case 9:
      FUN_004458ec();
      break;
    case 4:
      FUN_004459e4();
      break;
    case 5:
    case 10:
    case 0xb:
    case 0x12:
      FUN_00445a60();
      break;
    case 7:
      FUN_00445c34();
      break;
    case 8:
      FUN_00445f24();
      break;
    case 0xc:
      FUN_00445fb4();
      break;
    case 0xf:
      FUN_00445e48();
      break;
    case 0x10:
      FUN_00445a24();
    }
  }
  return;
}
