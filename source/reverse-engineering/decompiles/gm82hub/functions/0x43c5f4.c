// rea decompile_all
// name: FUN_0043c5f4
// address: 0x43c5f4
// body: available
// range: 0x43c5f4-0x43c68b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043c5f4(undefined4 param_1,uint param_2,uint param_3,code *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_14;
  uint local_c;

  local_c = param_2;
  do {
    local_14 = local_c + param_3 >> 1;
    uVar3 = local_c;
    uVar4 = param_3;
    do {
      while (iVar2 = (*param_4)(param_1,uVar3,local_14), iVar2 < 0) {
        uVar3 = uVar3 + 1;
      }
      while (iVar2 = (*param_4)(param_1,uVar4,local_14), 0 < iVar2) {
        uVar4 = uVar4 - 1;
      }
      if ((int)uVar3 <= (int)uVar4) {
        if (uVar4 != uVar3) {
          FUN_0043c30c(param_1,uVar3,uVar4);
        }
        uVar1 = uVar4;
        if ((uVar3 != local_14) && (uVar1 = local_14, uVar4 == local_14)) {
          uVar1 = uVar3;
        }
        local_14 = uVar1;
        uVar3 = uVar3 + 1;
        uVar4 = uVar4 - 1;
      }
    } while ((int)uVar3 <= (int)uVar4);
    if ((int)local_c < (int)uVar4) {
      FUN_0043c5f4(param_1,local_c,uVar4,param_4);
    }
    local_c = uVar3;
  } while ((int)uVar3 < (int)param_3);
  return;
}
