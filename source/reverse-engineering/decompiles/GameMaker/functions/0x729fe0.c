// rea decompile_all
// name: FUN_00729fe0
// address: 0x729fe0
// body: available
// range: 0x729fe0-0x72a00d inclusive
// range: 0x72a02a-0x72a186 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00729fe0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_24;
  int local_20;
  byte abStack_1c [8];
  code *local_14;
  int local_10;

  local_14 = (code *)0x0;
  local_10 = 0;
  iVar2 = *(int *)(param_1 + 0x14);
  switch(*(undefined1 *)(iVar2 + 0x461)) {
  case 0:
  case 3:
    cVar1 = *(char *)(iVar2 + 0x460);
    if (((cVar1 == '\x01') || (cVar1 == '\x04')) || (cVar1 == '\b')) {
      local_14 = (code *)&LAB_00729e9c;
      local_10 = param_1;
    }
    else if (cVar1 == '\x10') {
      local_14 = (code *)&LAB_00729eb0;
      local_10 = param_1;
    }
    break;
  case 2:
    if (*(char *)(iVar2 + 0x460) == '\b') {
      local_14 = FUN_00729df8;
      local_10 = param_1;
    }
    else if (*(char *)(iVar2 + 0x460) == '\x10') {
      local_14 = FUN_00729e44;
      local_10 = param_1;
    }
    break;
  case 4:
    if (*(char *)(iVar2 + 0x460) == '\b') {
      local_14 = FUN_00729f8c;
      local_10 = param_1;
    }
    else if (*(char *)(iVar2 + 0x460) == '\x10') {
      local_14 = (code *)&LAB_00729fb4;
      local_10 = param_1;
    }
    break;
  case 6:
    if (*(char *)(iVar2 + 0x460) == '\b') {
      local_14 = (code *)&LAB_00729ed0;
      local_10 = param_1;
    }
    else if (*(char *)(iVar2 + 0x460) == '\x10') {
      local_14 = FUN_00729f28;
      local_10 = param_1;
    }
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  local_24 = *(int *)(iVar2 + 0x468) * (iVar3 + -1) + *(int *)(iVar2 + 0x450);
  local_20 = *(int *)(iVar2 + 0x454);
  do {
    (*local_14)(local_10,local_24,*(undefined4 *)(param_1 + 0x3c),local_20);
    abStack_1c[0] = FUN_0072a7bc(param_1);
    FUN_00729d38(param_1,param_3,abStack_1c,1);
    FUN_00729d38(param_1,param_3,*(undefined4 *)(param_1 + 0x28 + (uint)abStack_1c[0] * 4),
                 *(undefined4 *)(param_1 + 0x20));
    local_24 = local_24 - *(int *)(*(int *)(param_1 + 0x14) + 0x468);
    local_20 = local_20 + *(int *)(param_1 + 0x18);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_00729d8c(param_1,param_3);
  return;
}
