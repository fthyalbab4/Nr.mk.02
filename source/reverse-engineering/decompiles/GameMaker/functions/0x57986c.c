// rea decompile_all
// name: FUN_0057986c
// address: 0x57986c
// body: available
// range: 0x57986c-0x57988b inclusive
// range: 0x5798ab-0x579914 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0057986c(int *param_1)

{
  int iVar1;
  int iVar2;

  iVar2 = 0;
  switch(param_1[4]) {
  case 200:
    (**(code **)(*(int *)((int)param_1 + 0x1a6) + 4))();
    (**(code **)(param_1[5] + 8))();
    param_1[4] = 0xc9;
  case 0xc9:
    iVar2 = (*(code *)**(undefined4 **)((int)param_1 + 0x1a6))();
    if (iVar2 == 1) {
      FUN_00579618(param_1);
      param_1[4] = 0xca;
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
    iVar2 = (*(code *)**(undefined4 **)((int)param_1 + 0x1a6))();
    break;
  default:
    iVar1 = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = 0x12;
    *(int *)(iVar1 + 0x18) = param_1[4];
    (**(code **)*param_1)();
  }
  return iVar2;
}
