// rea decompile_all
// name: FUN_004de264
// address: 0x4de264
// body: available
// range: 0x4de264-0x4de3dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004de264(undefined4 param_1,int param_2)

{
  UINT UVar1;
  char cVar2;
  int iVar3;
  UINT UVar4;
  UINT UVar5;
  int local_1c;
  UINT local_18;
  UINT local_14;
  UINT local_10;

  *(undefined4 *)(param_2 + 0xc) = 0;
  local_10 = 0xffffffff;
  local_14 = 0xffffffff;
  local_18 = 0xffffffff;
  iVar3 = GetMenuItemCount(*(HMENU *)(param_2 + 8));
  if (-1 < iVar3 + -1) {
    UVar5 = 0;
    local_1c = iVar3;
    do {
      UVar4 = GetMenuState(*(HMENU *)(param_2 + 8),UVar5,0x400);
      cVar2 = FUN_004de120(*(undefined4 *)(param_2 + 8),UVar4,UVar5,*(undefined2 *)(param_2 + 4));
      UVar1 = local_14;
      if (cVar2 != '\0') {
        if ((UVar4 & 2) == 0) {
          if ((int)local_10 < 0) {
            *(undefined4 *)(param_2 + 0xc) = 2;
            local_10 = UVar5;
          }
          else {
            *(undefined4 *)(param_2 + 0xc) = 3;
          }
          UVar1 = UVar5;
          if (((UVar4 & 0x80) == 0) && (UVar1 = local_14, -1 < (int)local_14)) {
            local_18 = UVar5;
          }
        }
        else if ((int)local_10 < 0) {
          local_10 = 0xfffffffe;
        }
      }
      local_14 = UVar1;
      UVar5 = UVar5 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  if ((int)local_10 < -1) {
    *(undefined4 *)(param_2 + 0xc) = 0x10000;
  }
  else {
    if (((int)local_10 < 0) && (-1 < iVar3 + -1)) {
      UVar5 = 0;
      local_1c = iVar3;
      do {
        UVar4 = GetMenuState(*(HMENU *)(param_2 + 8),UVar5,0x400);
        cVar2 = FUN_004de17c(*(undefined4 *)(param_2 + 8),UVar4,UVar5,*(undefined2 *)(param_2 + 4),
                             &stack0xfffffffc);
        UVar1 = local_14;
        if (cVar2 != '\0') {
          if ((UVar4 & 2) != 0) {
            *(undefined4 *)(param_2 + 0xc) = 0x10000;
            return;
          }
          if ((int)local_10 < 0) {
            *(undefined4 *)(param_2 + 0xc) = 2;
            local_10 = UVar5;
          }
          else {
            *(undefined4 *)(param_2 + 0xc) = 3;
          }
          UVar1 = UVar5;
          if (((UVar4 & 0x80) == 0) && (UVar1 = local_14, -1 < (int)local_14)) {
            local_18 = UVar5;
          }
        }
        local_14 = UVar1;
        UVar5 = UVar5 + 1;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
    if (*(int *)(param_2 + 0xc) == 2) {
      *(UINT *)(param_2 + 0xc) = local_10 | 0x20000;
    }
    else if (*(int *)(param_2 + 0xc) == 3) {
      if ((int)local_18 < 0) {
        local_18 = local_10;
      }
      *(UINT *)(param_2 + 0xc) = local_18 | 0x30000;
    }
  }
  return;
}
