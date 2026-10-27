// rea decompile_all
// name: FUN_0051d024
// address: 0x51d024
// body: available
// range: 0x51d024-0x51d169 inclusive
// range: 0x51d182-0x51d1dd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051d024(int *param_1,char param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10;
  int local_c;

  iVar3 = *(int *)(*(int *)(param_4 + -8) + 8) - **(int **)(param_4 + -8);
  if ((iVar3 < 0) || ((byte)(param_2 - 3U) < 2)) {
    iVar3 = param_1[0x12];
  }
  local_14 = *(int *)(*(int *)(param_4 + -8) + 0xc) - *(int *)(*(int *)(param_4 + -8) + 4);
  if ((local_14 < 0) || ((byte)(param_2 - 1U) < 2)) {
    local_14 = param_1[0x13];
  }
  if ((param_2 == '\x01') && (*(char *)((int)param_1 + 0x29a) == '\x02')) {
    local_c = FUN_00515a48(param_1);
    local_10 = FUN_00515a68(param_1);
    iVar3 = (**(code **)PTR_DAT_00781c5c)();
  }
  else {
    local_c = **(int **)(param_4 + -8);
    local_10 = *(int *)(*(int *)(param_4 + -8) + 4);
  }
  if (param_2 == '\x01') {
    piVar1 = (int *)(*(int *)(param_4 + -8) + 4);
    *piVar1 = *piVar1 + local_14;
  }
  else if (param_2 == '\x02') {
    piVar1 = (int *)(*(int *)(param_4 + -8) + 0xc);
    *piVar1 = *piVar1 - local_14;
    local_10 = *(int *)(*(int *)(param_4 + -8) + 0xc);
  }
  else if (param_2 == '\x03') {
    **(int **)(param_4 + -8) = **(int **)(param_4 + -8) + iVar3;
  }
  else if (param_2 == '\x04') {
    piVar1 = (int *)(*(int *)(param_4 + -8) + 8);
    *piVar1 = *piVar1 - iVar3;
    local_c = *(int *)(*(int *)(param_4 + -8) + 8);
  }
  (**(code **)(*param_1 + 0x98))(param_1,local_c,local_10,local_14,iVar3);
  if (*(char *)((int)param_1 + 0x29a) == '\x02') {
    iVar3 = iVar3 - local_c;
    local_14 = local_14 - local_10;
  }
  iVar2 = param_1[0x12];
  if ((iVar3 != iVar2) || (param_1[0x13] != local_14)) {
    switch(param_2) {
    case '\x01':
      piVar1 = (int *)(*(int *)(param_4 + -8) + 4);
      *piVar1 = *piVar1 - (local_14 - param_1[0x13]);
      break;
    case '\x02':
      piVar1 = (int *)(*(int *)(param_4 + -8) + 0xc);
      *piVar1 = *piVar1 + (local_14 - param_1[0x13]);
      break;
    case '\x03':
      **(int **)(param_4 + -8) = **(int **)(param_4 + -8) - (iVar3 - iVar2);
      break;
    case '\x04':
      piVar1 = (int *)(*(int *)(param_4 + -8) + 8);
      *piVar1 = *piVar1 + (iVar3 - iVar2);
      break;
    case '\x05':
      piVar1 = (int *)(*(int *)(param_4 + -8) + 8);
      *piVar1 = *piVar1 + (iVar3 - iVar2);
      piVar1 = (int *)(*(int *)(param_4 + -8) + 0xc);
      *piVar1 = *piVar1 + (local_14 - param_1[0x13]);
    }
  }
  return;
}
