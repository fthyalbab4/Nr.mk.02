// rea decompile_all
// name: FUN_00714e30
// address: 0x714e30
// body: available
// range: 0x714e30-0x714ea0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00714e30(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_14;

  if (-1 < DAT_0077f5dc + -1) {
    local_14 = DAT_0077f5dc;
    piVar3 = &DAT_0079a660;
    do {
      if ((*(int *)(*piVar3 + 8) == param_1) && (iVar5 = *(int *)(*piVar3 + 0x2c), -1 < iVar5 + -1))
      {
        iVar4 = 0;
        do {
          iVar1 = FUN_00562680(*piVar3,iVar4);
          if (param_2 == *(int *)(iVar1 + 8)) {
            uVar2 = FUN_00562680(*piVar3,iVar4);
            return uVar2;
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      piVar3 = piVar3 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return 0;
}
