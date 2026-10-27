// rea decompile_all
// name: FUN_0063c650
// address: 0x63c650
// body: available
// range: 0x63c650-0x63c74a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063c650(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_18;

  FUN_004104a0(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x72c),param_2,param_3,0,0x80000000,0x4000
              );
  iVar1 = FUN_00404878();
  iVar2 = param_2 - iVar1;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x38) + 4) + -1;
  if (param_2 + iVar1 <= iVar3) {
    iVar3 = param_2 + iVar1;
  }
  if (iVar2 <= iVar3) {
    local_18 = (iVar3 - iVar2) + 1;
    do {
      iVar3 = param_3 - iVar1;
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      iVar4 = *(int *)(*(int *)(param_1 + 0x38) + 8) + -1;
      if (param_3 + iVar1 <= iVar4) {
        iVar4 = param_3 + iVar1;
      }
      if (iVar3 <= iVar4) {
        iVar4 = (iVar4 - iVar3) + 1;
        do {
          if ((param_2 - iVar2) * (param_2 - iVar2) + (param_3 - iVar3) * (param_3 - iVar3) <=
              iVar1 * iVar1) {
            if (param_4 == '\0') {
              FUN_00702884(*(undefined4 *)(param_1 + 0x38),iVar2,iVar3,
                           *(undefined4 *)PTR_DAT_00781bb0);
            }
            else {
              FUN_00702884(*(undefined4 *)(param_1 + 0x38),iVar2,iVar3,
                           *(undefined4 *)PTR_DAT_007819d0);
            }
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar2 = iVar2 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  return;
}
