// rea decompile_all
// name: FUN_005a3648
// address: 0x5a3648
// body: available
// range: 0x5a3648-0x5a3667 inclusive
// range: 0x5a3687-0x5a36f0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005a3648(int *param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = 0;
  switch(param_1[5]) {
  case 200:
    (**(code **)(param_1[0x6d] + 4))();
    (**(code **)(param_1[6] + 8))();
    param_1[5] = 0xc9;
  case 0xc9:
    iVar2 = (**(code **)param_1[0x6d])();
    if (iVar2 == 1) {
      FUN_005a33f4(param_1);
      param_1[5] = 0xca;
    }
    break;
  case 0xca:
    iVar2 = 1;
    break;
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd2:
    iVar2 = (**(code **)param_1[0x6d])();
    break;
  default:
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x14;
    *(int *)(iVar1 + 0x18) = param_1[5];
    (**(code **)*param_1)();
  }
  return iVar2;
}
