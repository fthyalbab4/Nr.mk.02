// rea decompile_all
// name: FUN_005b0710
// address: 0x5b0710
// body: available
// range: 0x5b0710-0x5b0800 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005b07d9) */

void FUN_005b0710(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_14;

  if (param_1 != 0) {
    if (param_3 < 0) {
      param_3 = 0;
    }
    if (0xff < param_3) {
      param_3 = 0xff;
    }
    local_14 = *(int *)(param_1 + 8) * *(int *)(param_1 + 4);
    if (-1 < local_14 + -1) {
      iVar3 = 0;
      do {
        iVar4 = 0xff - param_3;
        iVar1 = *(int *)(param_1 + 0xc);
        *(char *)(iVar1 + 2 + iVar3 * 4) =
             (char)((int)(iVar4 * (uint)*(byte *)(iVar1 + 2 + iVar3 * 4) +
                         (param_2 >> 0x10 & 0xff) * param_3) / 0xff);
        *(char *)(iVar1 + 1 + iVar3 * 4) =
             (char)((int)(iVar4 * (uint)*(byte *)(*(int *)(param_1 + 0xc) + 1 + iVar3 * 4) +
                         (param_2 >> 8 & 0xff) * param_3) / 0xff);
        *(char *)(iVar1 + iVar3 * 4) =
             (char)((int)(iVar4 * (uint)*(byte *)(*(int *)(param_1 + 0xc) + iVar3 * 4) +
                         (param_2 & 0xff) * param_3) / 0xff);
        uVar2 = (uint)((ulonglong)
                       ((longlong)(int)(param_2 >> 0x18) *
                       (longlong)(int)(uint)*(byte *)(*(int *)(param_1 + 0xc) + 3 + iVar3 * 4)) /
                      0xff);
        if (0xff < uVar2) {
          uVar2 = 0xff;
        }
        *(char *)(iVar1 + 3 + iVar3 * 4) = (char)uVar2;
        iVar3 = iVar3 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  return;
}
