// rea decompile_all
// name: FUN_0053b170
// address: 0x53b170
// body: available
// range: 0x53b170-0x53b1f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0053b170(int param_1,int param_2,code *param_3,char param_4,undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_14;

  local_14 = 0xffffffff;
  uVar4 = local_14;
  if (param_1 != 0) {
    uVar4 = 0;
    uVar5 = *(int *)(param_1 + -4) - 1;
    bVar1 = false;
    if (-1 < (int)uVar5) {
      do {
        uVar3 = uVar5 + uVar4 >> 1;
        iVar2 = (*param_3)(uVar3 * param_2 + param_1,param_5);
        if (iVar2 < 0) {
          uVar4 = uVar3 + 1;
        }
        else {
          uVar5 = uVar3 - 1;
          if (iVar2 == 0) {
            bVar1 = true;
            uVar4 = uVar3;
          }
        }
      } while ((int)uVar4 <= (int)uVar5);
    }
    if (((!bVar1) && (uVar4 = local_14, param_4 != '\0')) && (-1 < (int)uVar5)) {
      uVar4 = uVar5;
    }
  }
  local_14 = uVar4;
  return local_14;
}
