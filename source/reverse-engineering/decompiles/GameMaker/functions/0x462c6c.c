// rea decompile_all
// name: FUN_00462c6c
// address: 0x462c6c
// body: available
// range: 0x462c6c-0x462d0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00462c6c(int param_1)

{
  int iVar1;
  byte *pbVar2;
  uint nNumerator;

  iVar1 = *(int *)(param_1 + 0x28);
  if (*(short *)(iVar1 + 0x3e) == 0x20) {
    if (1 < *(int *)(iVar1 + 4)) {
      FUN_00462f00(param_1);
      FUN_00462308(param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x10),iVar1 + 0x18);
    }
    pbVar2 = *(byte **)(*(int *)(param_1 + 0x28) + 0x2c);
    if (pbVar2 != (byte *)0x0) {
      for (; pbVar2 < (byte *)(*(int *)(*(int *)(param_1 + 0x28) + 0x2c) +
                              *(int *)(*(int *)(param_1 + 0x28) + 0x44)); pbVar2 = pbVar2 + 4) {
        nNumerator = (uint)pbVar2[3];
        iVar1 = MulDiv((uint)*pbVar2,nNumerator,0xff);
        *pbVar2 = (byte)iVar1;
        iVar1 = MulDiv((uint)pbVar2[1],nNumerator,0xff);
        pbVar2[1] = (byte)iVar1;
        iVar1 = MulDiv((uint)pbVar2[2],nNumerator,0xff);
        pbVar2[2] = (byte)iVar1;
      }
    }
  }
  return;
}
