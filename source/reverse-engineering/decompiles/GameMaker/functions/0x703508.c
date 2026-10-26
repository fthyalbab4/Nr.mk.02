// rea decompile_all
// name: FUN_00703508
// address: 0x703508
// body: available
// range: 0x703508-0x7036eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00703508(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  if (param_9 != 0) {
    local_8 = param_2;
    if (param_8 < 0) {
      local_8 = param_2 - param_8;
      param_6 = param_6 + param_8;
      param_8 = 0;
    }
    local_c = param_3;
    if (param_7 < 0) {
      local_c = param_3 - param_7;
      param_5 = param_5 + param_7;
      param_7 = 0;
    }
    if (*(int *)(param_9 + 4) < param_8 + param_6) {
      param_6 = *(int *)(param_9 + 4) - param_8;
    }
    if (*(int *)(param_9 + 8) < param_7 + param_5) {
      param_5 = *(int *)(param_9 + 8) - param_7;
    }
    if (local_8 < 0) {
      param_8 = param_8 - local_8;
      param_6 = param_6 + local_8;
      local_8 = 0;
    }
    if (local_c < 0) {
      param_7 = param_7 - local_c;
      param_5 = param_5 + local_c;
      local_c = 0;
    }
    if (*(int *)(param_1 + 4) < local_8 + param_6) {
      param_6 = *(int *)(param_1 + 4) - local_8;
    }
    if (*(int *)(param_1 + 8) < local_c + param_5) {
      param_5 = *(int *)(param_1 + 8) - local_c;
    }
    iVar2 = param_5 + param_7 + -1;
    if (param_7 <= iVar2) {
      local_18 = (iVar2 - param_7) + 1;
      local_10 = param_7;
      do {
        local_14 = *(int *)(param_9 + 4) * local_10 + param_8 + -1;
        iVar3 = ((local_c + local_10) - param_7) * *(int *)(param_1 + 4) + local_8 + -1;
        iVar2 = param_8 + param_6 + -1;
        if (param_8 <= iVar2) {
          local_1c = (iVar2 - param_8) + 1;
          do {
            local_14 = local_14 + 1;
            iVar3 = iVar3 + 1;
            cVar1 = *(char *)(*(int *)(param_9 + 0xc) + 3 + local_14 * 4);
            if (cVar1 != '\0') {
              if (cVar1 == -1) {
                *(uint *)(*(int *)(param_1 + 0xc) + iVar3 * 4) = param_4;
              }
              else {
                uVar4 = (uint)*(byte *)(*(int *)(param_9 + 0xc) + 3 + local_14 * 4);
                iVar2 = 0x100 - uVar4;
                *(char *)(*(int *)(param_1 + 0xc) + 2 + iVar3 * 4) =
                     (char)((param_4 >> 0x10 & 0xff) * uVar4 +
                            (uint)*(byte *)(*(int *)(param_1 + 0xc) + 2 + iVar3 * 4) * iVar2 >> 8);
                *(char *)(*(int *)(param_1 + 0xc) + 1 + iVar3 * 4) =
                     (char)((param_4 >> 8 & 0xff) * uVar4 +
                            (uint)*(byte *)(*(int *)(param_1 + 0xc) + 1 + iVar3 * 4) * iVar2 >> 8);
                *(char *)(*(int *)(param_1 + 0xc) + iVar3 * 4) =
                     (char)((param_4 & 0xff) * uVar4 +
                            (uint)*(byte *)(*(int *)(param_1 + 0xc) + iVar3 * 4) * iVar2 >> 8);
                *(char *)(*(int *)(param_1 + 0xc) + 3 + iVar3 * 4) =
                     (char)((param_4 >> 0x18) * uVar4 +
                            (uint)*(byte *)(*(int *)(param_1 + 0xc) + 3 + iVar3 * 4) * iVar2 >> 8);
              }
            }
            local_1c = local_1c + -1;
          } while (local_1c != 0);
        }
        local_10 = local_10 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
  }
  return;
}
