// rea decompile_all
// name: FUN_0055166c
// address: 0x55166c
// body: available
// range: 0x55166c-0x55187f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00551690) */

void FUN_0055166c(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;

  iVar1 = param_1[0x69];
  FUN_005513e4(param_1);
  FUN_005515d0(param_1);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  uVar3 = FUN_00551354(param_1);
  *(undefined4 *)(iVar1 + 0x10) = uVar3;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  if ((param_1[0x15] == 0) || (param_1[0x10] == 0)) {
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  if (param_1[0x15] != 0) {
    if (param_1[0x11] != 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x2f;
      (**(code **)*param_1)();
    }
    if (param_1[0x1e] == 3) {
      if (param_1[0x22] == 0) {
        if (param_1[0x17] == 0) {
          param_1[0x19] = 1;
        }
        else {
          param_1[0x1b] = 1;
        }
      }
      else {
        param_1[0x1a] = 1;
      }
    }
    else {
      param_1[0x19] = 1;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x22] = 0;
    }
    if (param_1[0x19] != 0) {
      FUN_00554a90(param_1);
      *(int *)(iVar1 + 0x14) = param_1[0x73];
    }
    if ((param_1[0x1b] != 0) || (param_1[0x1a] != 0)) {
      FUN_00555d04(param_1);
      *(int *)(iVar1 + 0x18) = param_1[0x73];
    }
  }
  if (param_1[0x11] == 0) {
    if (*(int *)(iVar1 + 0x10) == 0) {
      FUN_00553d10(param_1);
      FUN_00558034(param_1);
    }
    else {
      FUN_005538b4(param_1);
    }
    FUN_005577ec(param_1,param_1[0x1b]);
  }
  FUN_00557ad4(param_1);
  if (param_1[0x38] == 0) {
    if (param_1[0x37] == 0) {
      FUN_00553308(param_1);
    }
    else {
      FUN_00552748(param_1);
    }
  }
  else {
    *(undefined4 *)(*param_1 + 0x14) = 1;
    (**(code **)*param_1)();
  }
  if ((*(int *)(param_1[0x6d] + 0x10) == 0) && (param_1[0x10] == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  FUN_00557478(param_1,uVar3);
  if (param_1[0x11] == 0) {
    FUN_0055641c(param_1,0);
  }
  (**(code **)(param_1[1] + 0x18))();
  (**(code **)(param_1[0x6d] + 8))();
  if (((param_1[2] != 0) && (param_1[0x10] == 0)) && (*(int *)(param_1[0x6d] + 0x10) != 0)) {
    if (param_1[0x37] == 0) {
      iVar4 = param_1[9];
    }
    else {
      iVar4 = param_1[9] * 3 + 2;
    }
    iVar2 = param_1[2];
    *(undefined4 *)(iVar2 + 4) = 0;
    *(int *)(iVar2 + 8) = param_1[0x50] * iVar4;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    if (param_1[0x1b] == 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 3;
    }
    *(undefined4 *)(param_1[2] + 0x10) = uVar3;
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  }
  return;
}
