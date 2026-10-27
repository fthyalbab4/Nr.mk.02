// rea decompile_all
// name: FUN_004aac40
// address: 0x4aac40
// body: available
// range: 0x4aac40-0x4aacba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004aac40(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_14;

  if (*(short *)(param_1 + 0x2ca) == 0) {
    iVar3 = 0;
    local_14 = 0;
    iVar4 = *(int *)(*(int *)(param_1 + 0x2d0) + 8);
    if (-1 < iVar4 + -1) {
      iVar5 = 0;
      do {
        iVar2 = FUN_004aad0c(param_1,iVar5);
        if (*(char *)(iVar2 + 0x278) == '\0') {
          local_14 = local_14 + 1;
        }
        else {
          iVar3 = iVar3 + 1;
        }
        if (iVar3 == param_2 + 1) break;
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = FUN_004aad0c(param_1,param_2 + local_14);
    uVar1 = *(undefined4 *)(iVar4 + 0x270);
  }
  else {
    uVar1 = FUN_004a9518(param_1,param_2);
  }
  return uVar1;
}
