// rea decompile_all
// name: FUN_00758a3c
// address: 0x758a3c
// body: available
// range: 0x758a3c-0x758a95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00758a3c(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14;

  local_14 = 0;
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = local_14;
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      iVar1 = FUN_00758a28(param_1,iVar3);
      if ((*(uint *)(iVar1 + 0xc) <= param_2) && (param_2 < *(uint *)(iVar1 + 8))) break;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
      iVar1 = local_14;
    } while (iVar2 != 0);
  }
  local_14 = iVar1;
  if ((*(char *)(param_1 + 0x14) != '\0') && (local_14 == 0)) {
    local_14 = FUN_007589bc(param_1,param_2,0);
  }
  return local_14;
}
