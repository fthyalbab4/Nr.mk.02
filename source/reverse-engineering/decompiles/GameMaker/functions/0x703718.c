// rea decompile_all
// name: FUN_00703718
// address: 0x703718
// body: available
// range: 0x703718-0x703974 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00703718(int param_1,int *param_2,int param_3,char param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_20;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;

  if ((param_2 != (int *)0x0) && (cVar1 = FUN_00462b64(param_2), cVar1 == '\a')) {
    local_c = param_3;
    if (param_8 < 0) {
      local_c = param_3 - param_8;
      param_6 = param_6 + param_8;
      param_8 = 0;
    }
    if (param_7 < 0) {
      param_9 = param_9 - param_7;
      param_5 = param_5 + param_7;
      param_7 = 0;
    }
    if (*(int *)(param_1 + 4) < param_8 + param_6) {
      param_6 = *(int *)(param_1 + 4) - param_8;
    }
    if (*(int *)(param_1 + 8) < param_7 + param_5) {
      param_5 = *(int *)(param_1 + 8) - param_7;
    }
    if (local_c < 0) {
      param_8 = param_8 - local_c;
      param_6 = param_6 + local_c;
      local_c = 0;
    }
    if (param_9 < 0) {
      param_7 = param_7 - param_9;
      param_5 = param_5 + param_9;
      param_9 = 0;
    }
    iVar2 = (**(code **)(*param_2 + 0x30))();
    if (iVar2 < local_c + param_6) {
      param_6 = (**(code **)(*param_2 + 0x30))();
      param_6 = param_6 - local_c;
    }
    iVar2 = (**(code **)(*param_2 + 0x24))();
    if (iVar2 < param_9 + param_5) {
      param_5 = (**(code **)(*param_2 + 0x24))();
      param_5 = param_5 - param_9;
    }
    if (param_4 == '\0') {
      iVar2 = param_5 + param_7 + -1;
      if (param_7 <= iVar2) {
        local_1c = (iVar2 - param_7) + 1;
        local_10 = param_7;
        do {
          iVar2 = FUN_00462be8(param_2,(param_9 + local_10) - param_7);
          iVar3 = param_8 + param_6 + -1;
          if (param_8 <= iVar3) {
            local_20 = (iVar3 - param_8) + 1;
            iVar3 = param_8;
            do {
              *(undefined4 *)(iVar2 + ((local_c + iVar3) - param_8) * 4) =
                   *(undefined4 *)
                    (*(int *)(param_1 + 0xc) + (local_10 * *(int *)(param_1 + 4) + iVar3) * 4);
              iVar3 = iVar3 + 1;
              local_20 = local_20 + -1;
            } while (local_20 != 0);
          }
          local_10 = local_10 + 1;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
    }
    else {
      iVar2 = param_5 + param_7 + -1;
      if (param_7 <= iVar2) {
        local_1c = (iVar2 - param_7) + 1;
        local_10 = param_7;
        do {
          iVar2 = FUN_00462be8(param_2,(param_9 + local_10) - param_7);
          local_18 = local_10 * *(int *)(param_1 + 4) + param_8 + -1;
          iVar3 = local_c + -1;
          iVar4 = param_8 + param_6 + -1;
          if (param_8 <= iVar4) {
            local_20 = (iVar4 - param_8) + 1;
            do {
              local_18 = local_18 + 1;
              iVar3 = iVar3 + 1;
              cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 3 + local_18 * 4);
              if (cVar1 != '\0') {
                if (cVar1 == -1) {
                  *(undefined4 *)(iVar2 + iVar3 * 4) =
                       *(undefined4 *)(*(int *)(param_1 + 0xc) + local_18 * 4);
                }
                else {
                  uVar5 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + 3 + local_18 * 4);
                  iVar4 = 0x100 - uVar5;
                  *(char *)(iVar2 + 2 + iVar3 * 4) =
                       (char)(*(byte *)(*(int *)(param_1 + 0xc) + 2 + local_18 * 4) * uVar5 +
                              (uint)*(byte *)(iVar2 + 2 + iVar3 * 4) * iVar4 >> 8);
                  *(char *)(iVar2 + 1 + iVar3 * 4) =
                       (char)(*(byte *)(*(int *)(param_1 + 0xc) + 1 + local_18 * 4) * uVar5 +
                              (uint)*(byte *)(iVar2 + 1 + iVar3 * 4) * iVar4 >> 8);
                  *(char *)(iVar2 + iVar3 * 4) =
                       (char)(*(byte *)(*(int *)(param_1 + 0xc) + local_18 * 4) * uVar5 +
                              (uint)*(byte *)(iVar2 + iVar3 * 4) * iVar4 >> 8);
                  *(undefined1 *)(iVar2 + 3 + iVar3 * 4) = 0xff;
                }
              }
              local_20 = local_20 + -1;
            } while (local_20 != 0);
          }
          local_10 = local_10 + 1;
          local_1c = local_1c + -1;
        } while (local_1c != 0);
      }
    }
  }
  return;
}
