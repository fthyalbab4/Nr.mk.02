// rea decompile_all
// name: FUN_005b1c18
// address: 0x5b1c18
// body: available
// range: 0x5b1c18-0x5b1dc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b1c18(int param_1,int param_2,char param_3,char param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;

  if ((param_1 != 0) && (param_2 != 0)) {
    iVar2 = FUN_00701cf4(&DAT_00700d94,1,param_2);
    if (param_3 == '\0') {
      FUN_0070205c(iVar2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),3);
    }
    local_18 = *(int *)(param_1 + 8);
    if (-1 < local_18 + -1) {
      local_10 = 0;
      do {
        local_1c = *(int *)(param_1 + 4);
        if (-1 < local_1c + -1) {
          local_c = 0;
          do {
            iVar3 = local_10 * *(int *)(param_1 + 4) + local_c;
            iVar4 = local_c % *(int *)(iVar2 + 4) +
                    (local_10 % *(int *)(iVar2 + 8)) * *(int *)(iVar2 + 4);
            if (param_4 == '\0') {
              *(char *)(*(int *)(param_1 + 0xc) + 2 + iVar3 * 4) =
                   (char)((ulonglong)
                          ((longlong)(int)(uint)*(byte *)(*(int *)(param_1 + 0xc) + 2 + iVar3 * 4) *
                          (longlong)(int)(uint)*(byte *)(*(int *)(iVar2 + 0xc) + 2 + iVar4 * 4)) /
                         0xff);
              *(char *)(*(int *)(param_1 + 0xc) + 1 + iVar3 * 4) =
                   (char)((ulonglong)
                          ((longlong)(int)(uint)*(byte *)(*(int *)(param_1 + 0xc) + 1 + iVar3 * 4) *
                          (longlong)(int)(uint)*(byte *)(*(int *)(iVar2 + 0xc) + 1 + iVar4 * 4)) /
                         0xff);
              *(char *)(*(int *)(param_1 + 0xc) + iVar3 * 4) =
                   (char)((ulonglong)
                          ((longlong)(int)(uint)*(byte *)(*(int *)(param_1 + 0xc) + iVar3 * 4) *
                          (longlong)(int)(uint)*(byte *)(*(int *)(iVar2 + 0xc) + iVar4 * 4)) / 0xff)
              ;
              if (param_5 != '\0') {
                *(char *)(*(int *)(param_1 + 0xc) + 3 + iVar3 * 4) =
                     (char)((ulonglong)
                            ((longlong)(int)(uint)*(byte *)(*(int *)(param_1 + 0xc) + 3 + iVar3 * 4)
                            * (longlong)(int)(uint)*(byte *)(*(int *)(iVar2 + 0xc) + 3 + iVar4 * 4))
                           / 0xff);
              }
            }
            else {
              iVar1 = *(int *)(param_1 + 0xc);
              *(undefined1 *)(iVar1 + 2 + iVar3 * 4) =
                   *(undefined1 *)(*(int *)(iVar2 + 0xc) + 2 + iVar4 * 4);
              *(undefined1 *)(iVar1 + 1 + iVar3 * 4) =
                   *(undefined1 *)(*(int *)(iVar2 + 0xc) + 1 + iVar4 * 4);
              *(undefined1 *)(iVar1 + iVar3 * 4) =
                   *(undefined1 *)(*(int *)(iVar2 + 0xc) + iVar4 * 4);
              if (param_5 != '\0') {
                *(undefined1 *)(iVar1 + 3 + iVar3 * 4) =
                     *(undefined1 *)(*(int *)(iVar2 + 0xc) + 3 + iVar4 * 4);
              }
            }
            local_c = local_c + 1;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
        }
        local_10 = local_10 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
    FUN_00405a7c(iVar2);
  }
  return;
}
