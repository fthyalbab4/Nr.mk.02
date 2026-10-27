// rea decompile_all
// name: FUN_0055cac8
// address: 0x55cac8
// body: available
// range: 0x55cac8-0x55ceaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055cac8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *local_a58;
  int iStack_a54;
  int local_a4c;
  int *piStack_a3c;
  int aiStack_a38 [10];
  int local_a10 [640];

  if (param_1[0x29] < 1) {
    *(undefined4 *)(*param_1 + 0x14) = 0x13;
    *(undefined4 *)(*param_1 + 0x18) = 0;
    (**(code **)*param_1)();
  }
  local_a58 = (int *)param_1[0x2a];
  if ((local_a58[5] == 0) && (local_a58[6] == 0x3f)) {
    param_1[0x38] = 0;
    piVar6 = aiStack_a38;
    for (local_a4c = 0; local_a4c < param_1[0xe]; local_a4c = local_a4c + 1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
  }
  else {
    param_1[0x38] = 1;
    piVar6 = local_a10;
    for (local_a4c = 0; local_a4c < param_1[0xe]; local_a4c = local_a4c + 1) {
      iVar7 = 0;
      do {
        *piVar6 = -1;
        piVar6 = piVar6 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x40);
    }
  }
  for (iStack_a54 = 1; iStack_a54 <= param_1[0x29]; iStack_a54 = iStack_a54 + 1) {
    iVar7 = *local_a58;
    if ((iVar7 < 1) || (4 < iVar7)) {
      iVar1 = *param_1;
      *(undefined4 *)(iVar1 + 0x14) = 0x1a;
      *(int *)(iVar1 + 0x18) = iVar7;
      *(undefined4 *)(iVar1 + 0x1c) = 4;
      (**(code **)*param_1)();
    }
    local_a4c = 0;
    piVar6 = local_a58;
    if (0 < iVar7) {
      do {
        iVar1 = piVar6[1];
        if ((iVar1 < 0) || (param_1[0xe] <= iVar1)) {
          iVar2 = *param_1;
          *(undefined4 *)(iVar2 + 0x14) = 0x13;
          *(int *)(iVar2 + 0x18) = iStack_a54;
          (**(code **)*param_1)();
        }
        if ((0 < local_a4c) && (iVar1 <= *piVar6)) {
          iVar1 = *param_1;
          *(undefined4 *)(iVar1 + 0x14) = 0x13;
          *(int *)(iVar1 + 0x18) = iStack_a54;
          (**(code **)*param_1)();
        }
        local_a4c = local_a4c + 1;
        piVar6 = piVar6 + 1;
      } while (local_a4c < iVar7);
    }
    iVar1 = local_a58[5];
    iVar2 = local_a58[6];
    iVar3 = local_a58[7];
    iVar4 = local_a58[8];
    if (param_1[0x38] == 0) {
      if ((((iVar1 != 0) || (iVar2 != 0x3f)) || (iVar3 != 0)) || (iVar4 != 0)) {
        iVar1 = *param_1;
        *(undefined4 *)(iVar1 + 0x14) = 0x11;
        *(int *)(iVar1 + 0x18) = iStack_a54;
        (**(code **)*param_1)();
      }
      local_a4c = 0;
      piVar6 = local_a58;
      if (0 < iVar7) {
        do {
          piVar6 = piVar6 + 1;
          iVar1 = *piVar6;
          if (aiStack_a38[iVar1] != 0) {
            iVar2 = *param_1;
            *(undefined4 *)(iVar2 + 0x14) = 0x13;
            *(int *)(iVar2 + 0x18) = iStack_a54;
            (**(code **)*param_1)();
          }
          aiStack_a38[iVar1] = 1;
          local_a4c = local_a4c + 1;
        } while (local_a4c < iVar7);
      }
    }
    else {
      if (((((iVar1 < 0) || (0x3f < iVar1)) || ((iVar2 < iVar1 || ((0x3f < iVar2 || (iVar3 < 0))))))
          || (10 < iVar3)) || ((iVar4 < 0 || (10 < iVar4)))) {
        iVar8 = *param_1;
        *(undefined4 *)(iVar8 + 0x14) = 0x11;
        *(int *)(iVar8 + 0x18) = iStack_a54;
        (**(code **)*param_1)();
      }
      if (iVar1 == 0) {
        if (iVar2 != 0) {
          iVar8 = *param_1;
          *(undefined4 *)(iVar8 + 0x14) = 0x11;
          *(int *)(iVar8 + 0x18) = iStack_a54;
          (**(code **)*param_1)();
        }
      }
      else if (iVar7 != 1) {
        iVar8 = *param_1;
        *(undefined4 *)(iVar8 + 0x14) = 0x11;
        *(int *)(iVar8 + 0x18) = iStack_a54;
        (**(code **)*param_1)();
      }
      local_a4c = 0;
      piStack_a3c = local_a58;
      if (0 < iVar7) {
        do {
          piStack_a3c = piStack_a3c + 1;
          iVar8 = *piStack_a3c;
          if ((iVar1 != 0) && (local_a10[iVar8 * 0x40] < 0)) {
            iVar5 = *param_1;
            *(undefined4 *)(iVar5 + 0x14) = 0x11;
            *(int *)(iVar5 + 0x18) = iStack_a54;
            (**(code **)*param_1)();
          }
          piVar6 = local_a10 + iVar8 * 0x40 + iVar1;
          for (iVar8 = iVar1; iVar8 <= iVar2; iVar8 = iVar8 + 1) {
            if (*piVar6 < 0) {
              if (iVar3 != 0) {
                iVar5 = *param_1;
                *(undefined4 *)(iVar5 + 0x14) = 0x11;
                *(int *)(iVar5 + 0x18) = iStack_a54;
                (**(code **)*param_1)();
              }
            }
            else if ((iVar3 != *piVar6) || (iVar3 + -1 != iVar4)) {
              iVar5 = *param_1;
              *(undefined4 *)(iVar5 + 0x14) = 0x11;
              *(int *)(iVar5 + 0x18) = iStack_a54;
              (**(code **)*param_1)();
            }
            *piVar6 = iVar4;
            piVar6 = piVar6 + 1;
          }
          local_a4c = local_a4c + 1;
        } while (local_a4c < iVar7);
      }
    }
    local_a58 = local_a58 + 9;
  }
  if (param_1[0x38] == 0) {
    piVar6 = aiStack_a38;
    for (local_a4c = 0; local_a4c < param_1[0xe]; local_a4c = local_a4c + 1) {
      if (*piVar6 == 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x2d;
        (**(code **)*param_1)();
      }
      piVar6 = piVar6 + 1;
    }
  }
  else {
    piVar6 = local_a10;
    for (local_a4c = 0; local_a4c < param_1[0xe]; local_a4c = local_a4c + 1) {
      if (*piVar6 < 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x2d;
        (**(code **)*param_1)();
      }
      piVar6 = piVar6 + 0x40;
    }
  }
  return;
}
