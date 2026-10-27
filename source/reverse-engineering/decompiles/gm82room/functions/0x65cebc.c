// rea decompile_all
// name: FUN_0065cebc
// address: 0x65cebc
// body: available
// range: 0x65cebc-0x65d138 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065cebc(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;

  local_14 = param_7;
  if (param_9 < param_7) {
    local_14 = param_9;
  }
  if (local_14 < 0) {
    local_14 = 0;
  }
  if (param_9 <= param_7) {
    param_9 = param_7;
  }
  iVar1 = *(int *)(param_3 + 4) + -1;
  local_18 = param_9;
  if (iVar1 < param_9) {
    local_18 = iVar1;
  }
  local_1c = param_6;
  if (param_8 < param_6) {
    local_1c = param_8;
  }
  if (local_1c < 0) {
    local_1c = 0;
  }
  if (param_6 < param_8) {
    param_6 = param_8;
  }
  iVar1 = *(int *)(param_3 + 8) + -1;
  local_20 = param_6;
  if (iVar1 < param_6) {
    local_20 = iVar1;
  }
  if (param_5 < 0) {
    local_14 = local_14 - param_5;
    param_5 = 0;
  }
  if (param_4 < 0) {
    local_1c = local_1c - param_4;
    param_4 = 0;
  }
  iVar1 = *(int *)(param_1 + 4) + -1;
  if (iVar1 < (local_18 - local_14) + param_5) {
    local_18 = (iVar1 + local_14) - param_5;
  }
  iVar1 = *(int *)(param_1 + 8) + -1;
  if (iVar1 < (local_20 - local_1c) + param_4) {
    local_20 = (iVar1 + local_1c) - param_4;
  }
  if (((param_5 <= local_14) && (param_4 <= local_1c)) && (local_14 <= local_18)) {
    local_24 = (local_18 - local_14) + 1;
    iVar1 = local_14;
    do {
      if (local_1c <= local_20) {
        iVar3 = (local_20 - local_1c) + 1;
        iVar2 = local_1c;
        do {
          FUN_0065a308(param_2,*(int *)(*(int *)(param_1 + 0xc) + ((param_5 + iVar1) - local_14) * 4
                                       ) + ((param_4 + iVar2) - local_1c) * 0x18,
                       *(int *)(*(int *)(param_3 + 0xc) + iVar1 * 4) + iVar2 * 0x18);
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar1 = iVar1 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  if (((local_14 < param_5) && (param_4 <= local_1c)) &&
     (local_14 - local_18 == 0 || local_14 < local_18)) {
    local_24 = (local_14 - local_18) + -1;
    iVar1 = local_18;
    do {
      if (local_1c <= local_20) {
        iVar3 = (local_20 - local_1c) + 1;
        iVar2 = local_1c;
        do {
          FUN_0065a308(param_2,*(int *)(*(int *)(param_1 + 0xc) + ((param_5 + iVar1) - local_14) * 4
                                       ) + ((param_4 + iVar2) - local_1c) * 0x18,
                       *(int *)(*(int *)(param_3 + 0xc) + iVar1 * 4) + iVar2 * 0x18);
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar1 = iVar1 + -1;
      local_24 = local_24 + 1;
    } while (local_24 != 0);
  }
  if (((param_5 <= local_14) && (local_1c < param_4)) && (local_14 <= local_18)) {
    local_24 = (local_18 - local_14) + 1;
    iVar1 = local_14;
    do {
      if (local_1c - local_20 == 0 || local_1c < local_20) {
        iVar3 = (local_1c - local_20) + -1;
        iVar2 = local_20;
        do {
          FUN_0065a308(param_2,*(int *)(*(int *)(param_1 + 0xc) + ((param_5 + iVar1) - local_14) * 4
                                       ) + ((param_4 + iVar2) - local_1c) * 0x18,
                       *(int *)(*(int *)(param_3 + 0xc) + iVar1 * 4) + iVar2 * 0x18);
          iVar2 = iVar2 + -1;
          iVar3 = iVar3 + 1;
        } while (iVar3 != 0);
      }
      iVar1 = iVar1 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  if (((local_14 < param_5) && (local_1c < param_4)) &&
     (local_14 - local_18 == 0 || local_14 < local_18)) {
    local_24 = (local_14 - local_18) + -1;
    do {
      if (local_1c - local_20 == 0 || local_1c < local_20) {
        iVar2 = (local_1c - local_20) + -1;
        iVar1 = local_20;
        do {
          FUN_0065a308(param_2,*(int *)(*(int *)(param_1 + 0xc) +
                                       ((param_5 + local_18) - local_14) * 4) +
                               ((param_4 + iVar1) - local_1c) * 0x18,
                       *(int *)(*(int *)(param_3 + 0xc) + local_18 * 4) + iVar1 * 0x18);
          iVar1 = iVar1 + -1;
          iVar2 = iVar2 + 1;
        } while (iVar2 != 0);
      }
      local_18 = local_18 + -1;
      local_24 = local_24 + 1;
    } while (local_24 != 0);
  }
  return;
}
