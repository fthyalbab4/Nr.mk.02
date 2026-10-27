// rea decompile_all
// name: FUN_005600e8
// address: 0x5600e8
// body: available
// range: 0x5600e8-0x5601e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_005600e8(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int local_14 [2];
  int *local_c;

  uVar4 = param_3[2];
  local_c = param_3;
  while( true ) {
    cVar3 = FUN_0056058c(param_1,*param_2);
    if (cVar3 == '\0') {
      return 0;
    }
    uVar1 = *(uint *)*param_2;
    if (uVar1 <= uVar4) break;
    iVar2 = *(int *)(*param_2 + 4);
    cVar3 = FUN_0055fba8(iVar2,*(undefined4 *)(param_1 + 0x3c));
    if ((cVar3 != '\0') &&
       (cVar3 = FUN_0056058c(param_1,*(int *)(param_1 + 0x48) + uVar1), cVar3 != '\0')) {
      local_c[1] = local_c[1] + 1;
      local_c[6] = *param_2;
      local_c[5] = *param_2 + 8;
      if ((uint)local_c[2] < uVar1) {
        local_c[2] = uVar1;
        cVar3 = FUN_005603cc(param_1,iVar2,local_14);
        if (cVar3 == '\0') {
          *local_c = iVar2;
        }
        else {
          *local_c = iVar2 - local_14[0];
        }
        local_c[3] = uVar1 - *param_2;
        local_c[4] = local_c[3] - 8U >> 2;
        if (*(int *)*param_2 != *param_2) {
          *param_2 = uVar1 + *(int *)(param_1 + 0x48);
          return 1;
        }
      }
      return 0;
    }
    *param_2 = *(int *)(param_1 + 0x48) + uVar1;
    uVar4 = uVar1;
  }
  return 0;
}
