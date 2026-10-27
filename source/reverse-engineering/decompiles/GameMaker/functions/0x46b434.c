// rea decompile_all
// name: FUN_0046b434
// address: 0x46b434
// body: available
// range: 0x46b434-0x46b527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046b434(int param_1,int param_2,int param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar2 = *(int *)(param_1 + 0xb5c + param_3 * 4);
  puVar1 = (ushort *)(param_2 + iVar2 * 4);
  while (iVar4 = param_3 * 2, iVar4 <= *(int *)(param_1 + 0x1450)) {
    if ((iVar4 < *(int *)(param_1 + 0x1450)) &&
       ((*(ushort *)(param_2 + *(int *)(param_1 + 0xb60 + param_3 * 8) * 4) <
         *(ushort *)(param_2 + *(int *)(param_1 + 0xb5c + param_3 * 8) * 4) ||
        ((*(short *)(param_2 + *(int *)(param_1 + 0xb60 + param_3 * 8) * 4) ==
          *(short *)(param_2 + *(int *)(param_1 + 0xb5c + param_3 * 8) * 4) &&
         (*(byte *)(param_1 + 0x1458 + *(int *)(param_1 + 0xb60 + param_3 * 8)) <=
          *(byte *)(param_1 + 0x1458 + *(int *)(param_1 + 0xb5c + param_3 * 8)))))))) {
      iVar4 = iVar4 + 1;
    }
    if ((*puVar1 < *(ushort *)(param_2 + *(int *)(param_1 + 0xb5c + iVar4 * 4) * 4)) ||
       ((iVar3 = *(int *)(param_1 + 0xb5c + iVar4 * 4), *(ushort *)(param_2 + iVar3 * 4) == *puVar1
        && (*(byte *)(param_1 + 0x1458 + iVar2) <= *(byte *)(param_1 + 0x1458 + iVar3))))) break;
    *(undefined4 *)(param_1 + 0xb5c + param_3 * 4) = *(undefined4 *)(param_1 + 0xb5c + iVar4 * 4);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xb5c + param_3 * 4) = iVar2;
  return;
}
