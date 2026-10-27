// rea decompile_all
// name: FUN_004bdd44
// address: 0x4bdd44
// body: available
// range: 0x4bdd44-0x4bdde3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004bdd44(int param_1,int param_2,int param_3,char param_4,char param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8;

  local_8 = param_2;
  if (param_5 != '\0') {
    local_8 = param_2 + -1;
  }
  iVar3 = local_8 + 1;
  iVar1 = FUN_004b94ec(*(undefined4 *)(param_1 + 0x29c));
  if (iVar3 <= iVar1 + -1) {
    iVar1 = ((iVar1 + -1) - iVar3) + 1;
    do {
      iVar2 = FUN_004b9534(*(undefined4 *)(param_1 + 0x29c),iVar3);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x28) == param_3)) {
        return iVar2;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (param_4 != '\0') {
    if (param_5 != '\0') {
      local_8 = local_8 + 1;
    }
    if (-1 < local_8 + -1) {
      iVar1 = 0;
      do {
        iVar3 = FUN_004b9534(*(undefined4 *)(param_1 + 0x29c),iVar1);
        if ((iVar3 != 0) && (*(int *)(iVar3 + 0x28) == param_3)) {
          return iVar3;
        }
        iVar1 = iVar1 + 1;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
  }
  return 0;
}
