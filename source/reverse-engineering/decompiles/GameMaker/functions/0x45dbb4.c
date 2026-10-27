// rea decompile_all
// name: FUN_0045dbb4
// address: 0x45dbb4
// body: available
// range: 0x45dbb4-0x45dc41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0045dbb4(byte *param_1,byte *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  uVar4 = (uint)*param_2 - **(int **)(param_4 + 8);
  uVar5 = (uint)param_2[1] - *(int *)(*(int *)(param_4 + 8) + 4);
  uVar6 = (uint)*param_1 - **(int **)(param_4 + 8);
  uVar1 = (uint)param_1[1] - *(int *)(*(int *)(param_4 + 8) + 4);
  if ((((int)((uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f)) <
        (int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f))) ||
      (((0 < (int)uVar4 && ((int)uVar6 < (int)uVar4)) ||
       (iVar2 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f),
       iVar2 < (int)((uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f)))))) ||
     ((0 < (int)uVar5 && ((int)uVar1 < (int)uVar5)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),1);
  }
  return uVar3;
}
