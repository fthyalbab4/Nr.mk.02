// rea decompile_all
// name: FUN_005c0a5c
// address: 0x5c0a5c
// body: available
// range: 0x5c0a5c-0x5c0b21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005c0a5c(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;

  if (param_1[4] == 0xca) {
    FUN_005c1500(param_1);
    if (param_1[0xf] != 0) {
      param_1[4] = 0xcf;
      return 1;
    }
    param_1[4] = 0xcb;
  }
  if (param_1[4] == 0xcb) {
    if (*(int *)(*(int *)((int)param_1 + 0x1a6) + 0x10) != 0) {
      while( true ) {
        if (param_1[2] != 0) {
          (**(code **)param_1[2])();
        }
        iVar2 = (*(code *)**(undefined4 **)((int)param_1 + 0x1a6))();
        if (iVar2 == 0) {
          return 0;
        }
        if (iVar2 == 2) break;
        if ((param_1[2] != 0) && ((iVar2 == 3 || (iVar2 == 1)))) {
          iVar2 = param_1[2];
          piVar1 = (int *)(iVar2 + 4);
          *piVar1 = *piVar1 + 1;
          if (*(int *)(param_1[2] + 8) <= *(int *)(iVar2 + 4)) {
            piVar1 = (int *)(param_1[2] + 8);
            *piVar1 = *piVar1 + *(int *)((int)param_1 + 0x132);
          }
        }
      }
    }
    param_1[0x25] = param_1[0x23];
  }
  else if (param_1[4] != 0xcc) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x12;
    *(int *)(iVar2 + 0x18) = param_1[4];
    (**(code **)*param_1)();
  }
  uVar3 = FUN_005c0b24(param_1);
  return uVar3;
}
