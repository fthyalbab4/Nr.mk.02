// rea decompile_all
// name: FUN_004f4420
// address: 0x4f4420
// body: available
// range: 0x4f4420-0x4f4452 inclusive
// range: 0x4f446f-0x4f44c0 inclusive
// range: 0x4f44e2-0x4f460b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f4420(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  code *local_24;
  int local_20;
  int local_18;
  int local_14;
  int local_10;

  local_24 = (code *)0x0;
  local_20 = 0;
  iVar1 = *(int *)(param_1 + 0x14);
  switch(*(char *)(iVar1 + 0x461)) {
  case '\0':
  case '\x03':
    switch(*(undefined1 *)(iVar1 + 0x460)) {
    case 1:
    case 4:
    case 8:
      local_24 = (code *)&LAB_004f41cc;
      local_20 = param_1;
      break;
    case 2:
      if (*(char *)(iVar1 + 0x461) == '\x03') {
        local_24 = (code *)&LAB_004f4224;
        local_20 = param_1;
      }
      else {
        local_24 = (code *)&LAB_004f41e0;
        local_20 = param_1;
      }
      break;
    case 0x10:
      local_24 = FUN_004f4268;
      local_20 = param_1;
    }
    break;
  case '\x02':
    if (*(char *)(iVar1 + 0x460) == '\b') {
      local_24 = FUN_004f40c8;
      local_20 = param_1;
    }
    else if (*(char *)(iVar1 + 0x460) == '\x10') {
      local_24 = (code *)&LAB_004f4120;
      local_20 = param_1;
    }
    break;
  case '\x04':
    if (*(char *)(iVar1 + 0x460) == '\b') {
      local_24 = (code *)&LAB_004f43bc;
      local_20 = param_1;
    }
    else if (*(char *)(iVar1 + 0x460) == '\x10') {
      local_24 = (code *)&LAB_004f43e4;
      local_20 = param_1;
    }
    break;
  case '\x06':
    if (*(char *)(iVar1 + 0x460) == '\b') {
      local_24 = (code *)&LAB_004f4294;
      local_20 = param_1;
    }
    else if (*(char *)(iVar1 + 0x460) == '\x10') {
      local_24 = FUN_004f4300;
      local_20 = param_1;
    }
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  local_18 = *(int *)(iVar1 + 0x468) * (iVar2 + -1);
  local_14 = local_18 + *(int *)(iVar1 + 0x450);
  local_10 = *(int *)(iVar1 + 0x454);
  local_18 = local_18 + *(int *)(iVar1 + 0x44c);
  do {
    iVar1 = FUN_004f35cc(param_1,param_3,
                         *(undefined4 *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4),
                         param_4,param_1 + 0x4c,*(int *)(param_1 + 0x20) + 1);
    if (iVar1 == 0) {
      return;
    }
    FUN_004f460c(param_1);
    (*local_24)(local_20,*(int *)(param_1 + 0x40 + (uint)*(byte *)(param_1 + 0x48) * 4) + 1,local_14
                ,local_18,local_10);
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) ^ 1;
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x468);
    local_14 = local_14 - iVar1;
    local_18 = local_18 - iVar1;
    local_10 = local_10 + *(int *)(param_1 + 0x18);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
