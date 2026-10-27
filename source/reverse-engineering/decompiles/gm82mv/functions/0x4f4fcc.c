// rea decompile_all
// name: FUN_004f4fcc
// address: 0x4f4fcc
// body: available
// range: 0x4f4fcc-0x4f503b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f4fcc(int param_1,byte param_2,int param_3,undefined4 param_4,undefined1 *param_5)

{
  int iVar1;
  byte *pbVar2;

  iVar1 = (&DAT_00681c28)[param_2];
  pbVar2 = (byte *)(iVar1 * 3 + param_3);
  do {
    *param_5 = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x28 + (uint)pbVar2[2]);
    param_5[1] = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x28 + (uint)pbVar2[1]);
    param_5[2] = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x28 + (uint)*pbVar2);
    param_5 = param_5 + 3;
    pbVar2 = pbVar2 + (&DAT_00681c60)[param_2] * 3;
    iVar1 = iVar1 + (&DAT_00681c60)[param_2];
  } while (iVar1 < *(int *)(param_1 + 0x18));
  return;
}
