// rea decompile_all
// name: FUN_004f3e1c
// address: 0x4f3e1c
// body: available
// range: 0x4f3e1c-0x4f3e4e inclusive
// range: 0x4f3e6b-0x4f3eba inclusive
// range: 0x4f3edc-0x4f40c6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f3e1c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *local_38;
  int *local_34;
  int *local_30;
  code *local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  char local_d;

  local_2c = (code *)0x0;
  local_28 = 0;
  iVar2 = *(int *)(param_1 + 0x14);
  switch(*(char *)(iVar2 + 0x461)) {
  case '\0':
  case '\x03':
    switch(*(undefined1 *)(iVar2 + 0x460)) {
    case 1:
    case 4:
    case 8:
      local_2c = (code *)&LAB_004f39b0;
      local_28 = param_1;
      break;
    case 2:
      if (*(char *)(iVar2 + 0x461) == '\x03') {
        local_2c = FUN_004f3a60;
        local_28 = param_1;
      }
      else {
        local_2c = (code *)&LAB_004f3ae4;
        local_28 = param_1;
      }
      break;
    case 0x10:
      local_2c = (code *)&LAB_004f3b6c;
      local_28 = param_1;
    }
    break;
  case '\x02':
    if (*(char *)(iVar2 + 0x460) == '\b') {
      local_2c = (code *)&LAB_004f3858;
      local_28 = param_1;
    }
    else if (*(char *)(iVar2 + 0x460) == '\x10') {
      local_2c = FUN_004f38d8;
      local_28 = param_1;
    }
    break;
  case '\x04':
    if (*(char *)(iVar2 + 0x460) == '\b') {
      local_2c = (code *)&LAB_004f3d50;
      local_28 = param_1;
    }
    else if (*(char *)(iVar2 + 0x460) == '\x10') {
      local_2c = FUN_004f3dac;
      local_28 = param_1;
    }
    break;
  case '\x06':
    if (*(char *)(iVar2 + 0x460) == '\b') {
      local_2c = (code *)&LAB_004f3bc0;
      local_28 = param_1;
    }
    else if (*(char *)(iVar2 + 0x460) == '\x10') {
      local_2c = (code *)&LAB_004f3c60;
      local_28 = param_1;
    }
  }
  local_d = '\0';
  local_30 = &DAT_00681c28;
  local_34 = &DAT_00681c60;
  local_38 = &DAT_00681c0c;
  piVar3 = &DAT_00681c44;
  do {
    uVar1 = FUN_004f16e4(((*(int *)(param_1 + 0x18) - *local_30) + *local_34 + -1) / *local_34,
                         *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x461),
                         *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x460));
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    FUN_00404f38(*(undefined4 *)(param_1 + 0x40 + ((*(byte *)(param_1 + 0x48) ^ 1) & 0x7f) * 4),
                 *(undefined4 *)(param_1 + 0x20),0);
    local_14 = *local_38;
    iVar2 = *(int *)(param_1 + 0x14);
    local_20 = *(int *)(iVar2 + 0x468) * ((*(int *)(param_1 + 0x1c) + -1) - local_14);
    local_1c = local_20 + *(int *)(iVar2 + 0x450);
    local_18 = *(int *)(iVar2 + 0x454) + *(int *)(param_1 + 0x18) * local_14;
    local_20 = local_20 + *(int *)(iVar2 + 0x44c);
    if (*(int *)(param_1 + 0x20) != 0) {
      while ((local_14 < *(int *)(param_1 + 0x1c) &&
             (iVar2 = FUN_004f35cc(param_1,param_3,
                                   *(undefined4 *)
                                    (param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4),param_4,
                                   param_1 + 0x4c,*(int *)(param_1 + 0x20) + 1), iVar2 != 0))) {
        FUN_004f460c(param_1);
        (*local_2c)(local_28,local_d,
                    *(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4) + 1,local_20,
                    local_18,local_1c);
        *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) ^ 1;
        local_14 = local_14 + *piVar3;
        local_1c = local_1c - *(int *)(*(int *)(param_1 + 0x14) + 0x468) * *piVar3;
        local_18 = local_18 + *piVar3 * *(int *)(param_1 + 0x18);
        local_20 = local_20 - *(int *)(*(int *)(param_1 + 0x14) + 0x468) * *piVar3;
      }
    }
    local_d = local_d + '\x01';
    piVar3 = piVar3 + 1;
    local_38 = local_38 + 1;
    local_34 = local_34 + 1;
    local_30 = local_30 + 1;
  } while (local_d != '\a');
  return;
}
