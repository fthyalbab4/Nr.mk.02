// rea decompile_all
// name: FUN_005b45c0
// address: 0x5b45c0
// body: available
// range: 0x5b45c0-0x5b4660 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005b45c0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_14;
  int local_10;

  uVar1 = FUN_00701c28(&DAT_00700d94,1,param_1,param_2);
  if (-1 < param_1 / param_3) {
    local_14 = param_1 / param_3 + 1;
    local_10 = 0;
    do {
      if (-1 < param_2 / param_3) {
        iVar3 = param_2 / param_3 + 1;
        iVar2 = 0;
        do {
          if ((local_10 + iVar2 & 1U) == 0) {
            FUN_007028d0(uVar1,local_10 * param_3,iVar2 * param_3,0,param_4,param_3,param_3);
          }
          else {
            FUN_007028d0(uVar1,local_10 * param_3,iVar2 * param_3,0,param_5,param_3,param_3);
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return uVar1;
}
