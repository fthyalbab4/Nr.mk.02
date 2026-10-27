// rea decompile_all
// name: FUN_0056e21c
// address: 0x56e21c
// body: available
// range: 0x56e21c-0x56e2e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056e21c(int param_1,uint param_2,undefined4 param_3,char param_4,char param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;

  if ((param_1 != 0) &&
     (local_10 = *(int *)(param_1 + 8) * *(int *)(param_1 + 4), -1 < local_10 + -1)) {
    iVar3 = 0;
    do {
      uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + 2 + iVar3 * 4) - (param_2 >> 0x10 & 0xff);
      uVar4 = (int)uVar2 >> 0x1f;
      if (((((int)((uVar2 ^ uVar4) - uVar4) <= param_6) &&
           (uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + 1 + iVar3 * 4) - (param_2 >> 8 & 0xff)
           , uVar4 = (int)uVar2 >> 0x1f, (int)((uVar2 ^ uVar4) - uVar4) <= param_6)) &&
          (uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + iVar3 * 4) - (param_2 & 0xff),
          uVar4 = (int)uVar2 >> 0x1f, (int)((uVar2 ^ uVar4) - uVar4) <= param_6)) &&
         ((param_5 == '\0' ||
          (uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0xc) + 3 + iVar3 * 4) - (param_2 >> 0x18),
          uVar4 = (int)uVar2 >> 0x1f, (int)((uVar2 ^ uVar4) - uVar4) <= param_6)))) {
        iVar1 = *(int *)(param_1 + 0xc);
        uStack_a = (undefined1)((uint)param_3 >> 0x10);
        *(undefined1 *)(iVar1 + 2 + iVar3 * 4) = uStack_a;
        uStack_b = (undefined1)((uint)param_3 >> 8);
        *(undefined1 *)(iVar1 + 1 + iVar3 * 4) = uStack_b;
        local_c = (undefined1)param_3;
        *(undefined1 *)(iVar1 + iVar3 * 4) = local_c;
        if (param_4 != '\0') {
          uStack_9 = (undefined1)((uint)param_3 >> 0x18);
          *(undefined1 *)(iVar1 + 3 + iVar3 * 4) = uStack_9;
        }
      }
      iVar3 = iVar3 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}
