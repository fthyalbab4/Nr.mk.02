// rea decompile_all
// name: FUN_00540ba4
// address: 0x540ba4
// body: available
// range: 0x540ba4-0x540bfc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00540ba4(int param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint local_c;

  if (*(int *)(param_1 + 8) != 0) {
    local_c = param_3;
    FUN_0043f4c0(param_2,*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 8) * 3);
    bVar1 = FUN_00541368(param_1);
    local_c = local_c & 0xff000000;
    for (iVar2 = (1 << (bVar1 & 0x1f)) - *(int *)(param_1 + 8); 0 < iVar2; iVar2 = iVar2 + -1) {
      FUN_0043f4c0(param_2,&local_c,3);
    }
  }
  return;
}
