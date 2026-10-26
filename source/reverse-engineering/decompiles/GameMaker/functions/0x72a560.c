// rea decompile_all
// name: FUN_0072a560
// address: 0x72a560
// body: available
// range: 0x72a560-0x72a58f inclusive
// range: 0x72a5ac-0x72a7b8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0072a560(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  char local_34;
  byte abStack_33 [3];
  int local_30;
  int local_2c;
  int local_28;
  code *local_20;
  int local_1c;
  int *local_18;
  int *local_14;

  local_20 = (code *)0x0;
  local_1c = 0;
  iVar2 = *(int *)(param_1 + 0x14);
  switch(*(undefined1 *)(iVar2 + 0x461)) {
  case 0:
  case 3:
    cVar1 = *(char *)(iVar2 + 0x460);
    if (((cVar1 == '\x01') || (cVar1 == '\x04')) || (cVar1 == '\b')) {
      local_20 = (code *)&LAB_0072a274;
      local_1c = param_1;
    }
    else if (cVar1 == '\x10') {
      local_20 = (code *)&LAB_0072a340;
      local_1c = param_1;
    }
    break;
  case 2:
    if (*(char *)(iVar2 + 0x460) == '\b') {
      local_20 = FUN_0072a188;
      local_1c = param_1;
    }
    else if (*(char *)(iVar2 + 0x460) == '\x10') {
      local_20 = FUN_0072a1f8;
      local_1c = param_1;
    }
    break;
  case 4:
    if (*(char *)(iVar2 + 0x460) == '\b') {
      local_20 = (code *)&LAB_0072a4a4;
      local_1c = param_1;
    }
    else if (*(char *)(iVar2 + 0x460) == '\x10') {
      local_20 = FUN_0072a500;
      local_1c = param_1;
    }
    break;
  case 6:
    if (*(char *)(iVar2 + 0x460) == '\b') {
      local_20 = (code *)&LAB_0072a380;
      local_1c = param_1;
    }
    else if (*(char *)(iVar2 + 0x460) == '\x10') {
      local_20 = (code *)&LAB_0072a40c;
      local_1c = param_1;
    }
  }
  local_34 = '\0';
  local_18 = &DAT_0077f65c;
  piVar5 = &DAT_0077f694;
  local_14 = &DAT_0077f640;
  piVar4 = &DAT_0077f678;
  do {
    uVar3 = FUN_007268a0(((*(int *)(param_1 + 0x18) - *local_18) + *piVar5 + -1) / *piVar5,
                         *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x461),
                         *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x460));
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    FUN_00404f08(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x20),0);
    local_30 = *local_14;
    iVar2 = *(int *)(param_1 + 0x14);
    local_28 = *(int *)(iVar2 + 0x468) * ((*(int *)(param_1 + 0x1c) + -1) - local_30) +
               *(int *)(iVar2 + 0x450);
    local_2c = *(int *)(iVar2 + 0x454) + *(int *)(param_1 + 0x18) * local_30;
    if (*(int *)(param_1 + 0x20) != 0) {
      for (; local_30 < *(int *)(param_1 + 0x1c); local_30 = local_30 + *piVar4) {
        (*local_20)(local_1c,local_34,local_28,local_2c,*(undefined4 *)(param_1 + 0x3c));
        abStack_33[0] = FUN_0072a7bc(param_1);
        FUN_00729d38(param_1,param_3,abStack_33,1);
        FUN_00729d38(param_1,param_3,*(undefined4 *)(param_1 + 0x28 + (uint)abStack_33[0] * 4),
                     *(undefined4 *)(param_1 + 0x20));
        local_28 = local_28 - *(int *)(*(int *)(param_1 + 0x14) + 0x468) * *piVar4;
        local_2c = local_2c + *piVar4 * *(int *)(param_1 + 0x18);
      }
    }
    local_34 = local_34 + '\x01';
    piVar4 = piVar4 + 1;
    local_14 = local_14 + 1;
    piVar5 = piVar5 + 1;
    local_18 = local_18 + 1;
  } while (local_34 != '\a');
  FUN_00729d8c(param_1,param_3);
  return;
}
