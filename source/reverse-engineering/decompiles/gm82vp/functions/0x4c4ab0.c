// rea decompile_all
// name: FUN_004c4ab0
// address: 0x4c4ab0
// body: available
// range: 0x4c4ab0-0x4c4b0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c4ab0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_14;

  if ((*(int *)(param_1 + 0x1d8) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0x1d8) + 8), -1 < iVar2 + -1)) {
    local_14 = 0;
    do {
      uVar1 = FUN_00438ec4(*(undefined4 *)(param_1 + 0x1d8),local_14);
      FUN_00438d04(param_2,uVar1);
      FUN_00406268(uVar1,param_2);
      local_14 = local_14 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}
