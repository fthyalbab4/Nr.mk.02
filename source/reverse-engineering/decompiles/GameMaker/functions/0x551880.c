// rea decompile_all
// name: FUN_00551880
// address: 0x551880
// body: available
// range: 0x551880-0x5519d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00551880(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  iVar1 = param_1[0x69];
  if (*(int *)(iVar1 + 8) == 0) {
    if ((param_1[0x15] != 0) && (param_1[0x22] == 0)) {
      if ((param_1[0x17] == 0) || (param_1[0x1b] == 0)) {
        if (param_1[0x19] == 0) {
          *(undefined4 *)(*param_1 + 0x14) = 0x2e;
          (**(code **)*param_1)();
        }
        else {
          param_1[0x73] = *(int *)(iVar1 + 0x14);
        }
      }
      else {
        param_1[0x73] = *(int *)(iVar1 + 0x18);
        *(undefined4 *)(iVar1 + 8) = 1;
      }
    }
    (**(code **)param_1[0x70])();
    (**(code **)(param_1[0x6b] + 8))();
    if (param_1[0x11] == 0) {
      if (*(int *)(iVar1 + 0x10) == 0) {
        (**(code **)param_1[0x72])();
      }
      (**(code **)param_1[0x71])();
      if (param_1[0x15] != 0) {
        (**(code **)param_1[0x73])(param_1,*(undefined4 *)(iVar1 + 8));
      }
      if (*(int *)(iVar1 + 8) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 3;
      }
      (**(code **)param_1[0x6c])(param_1,uVar3);
      (**(code **)param_1[0x6a])(param_1,0);
    }
  }
  else {
    *(undefined4 *)(iVar1 + 8) = 0;
    (**(code **)param_1[0x73])(param_1,0);
    (**(code **)param_1[0x6c])(param_1,2);
    (**(code **)param_1[0x6a])(param_1,2);
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    if (*(int *)(iVar1 + 8) == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 2;
    }
    *(int *)(param_1[2] + 0x10) = iVar2 + *(int *)(iVar1 + 0xc);
    if ((param_1[0x10] != 0) && (*(int *)(param_1[0x6d] + 0x14) == 0)) {
      if (param_1[0x1b] == 0) {
        iVar1 = 1;
      }
      else {
        iVar1 = 2;
      }
      *(int *)(param_1[2] + 0x10) = *(int *)(param_1[2] + 0x10) + iVar1;
    }
  }
  return;
}
