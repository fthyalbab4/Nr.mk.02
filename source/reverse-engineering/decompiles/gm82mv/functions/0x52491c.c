// rea decompile_all
// name: FUN_0052491c
// address: 0x52491c
// body: available
// range: 0x52491c-0x5249d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052491c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_8;

  iVar4 = param_4 + -0x800;
  local_8 = param_1;
  do {
    *(undefined4 *)(param_4 + -0x804) =
         *(undefined4 *)(iVar4 + ((uint)(local_8 + param_2) >> 1) * 8);
    iVar2 = param_2;
    iVar3 = local_8;
    do {
      while (iVar1 = *(int *)(iVar4 + iVar3 * 8),
            iVar1 != *(int *)(param_4 + -0x804) && -1 < iVar1 - *(int *)(param_4 + -0x804)) {
        iVar3 = iVar3 + 1;
      }
      while (*(int *)(iVar4 + iVar2 * 8) - *(int *)(param_4 + -0x804) < 0) {
        iVar2 = iVar2 + -1;
      }
      iVar1 = param_4;
      if (iVar3 <= iVar2) {
        *(undefined4 *)(param_4 + -0x80c) = *(undefined4 *)(iVar4 + iVar3 * 8);
        *(undefined4 *)(param_4 + -0x808) = *(undefined4 *)(param_4 + -0x7fc + iVar3 * 8);
        *(undefined4 *)(iVar4 + iVar3 * 8) = *(undefined4 *)(iVar4 + iVar2 * 8);
        *(undefined4 *)(param_4 + -0x7fc + iVar3 * 8) =
             *(undefined4 *)(param_4 + -0x7fc + iVar2 * 8);
        *(undefined4 *)(iVar4 + iVar2 * 8) = *(undefined4 *)(param_4 + -0x80c);
        iVar1 = *(int *)(param_4 + -0x808);
        *(int *)(param_4 + -0x7fc + iVar2 * 8) = iVar1;
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      }
    } while (iVar3 <= iVar2);
    if (local_8 < iVar2) {
      FUN_0052491c(local_8,iVar2,iVar1,param_4);
    }
    local_8 = iVar3;
  } while (iVar3 < param_2);
  return;
}
