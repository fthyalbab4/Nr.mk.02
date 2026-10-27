// rea decompile_all
// name: FUN_005b02d4
// address: 0x5b02d4
// body: available
// range: 0x5b02d4-0x5b032c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b02d4(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 local_10;

  if ((param_1 != 0) &&
     (local_10 = *(int *)(param_1 + 8) * *(int *)(param_1 + 4), -1 < local_10 + -1)) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0xc);
      uVar2 = (undefined1)
              ((ulonglong)
               ((uint)*(byte *)(iVar1 + 2 + iVar3 * 4) +
                (uint)*(byte *)(*(int *)(param_1 + 0xc) + 1 + iVar3 * 4) +
               (uint)*(byte *)(*(int *)(param_1 + 0xc) + iVar3 * 4)) / 3);
      *(undefined1 *)(iVar1 + 2 + iVar3 * 4) = uVar2;
      *(undefined1 *)(iVar1 + 1 + iVar3 * 4) = uVar2;
      *(undefined1 *)(iVar1 + iVar3 * 4) = uVar2;
      iVar3 = iVar3 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}
