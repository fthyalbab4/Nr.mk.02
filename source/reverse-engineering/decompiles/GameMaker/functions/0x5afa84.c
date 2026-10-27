// rea decompile_all
// name: FUN_005afa84
// address: 0x5afa84
// body: available
// range: 0x5afa84-0x5afbd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005afa84(int param_1,char param_2,char param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_2c;
  int local_28;
  int local_14;
  int local_10;

  if (param_1 != 0) {
    iVar1 = FUN_00701cf4(&DAT_00700d94,1,param_1);
    if (param_3 != '\0') {
      FUN_00701e14(param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 4));
    }
    FUN_00702dfc(param_1,param_4,0);
    iVar2 = *(int *)(iVar1 + 4) + -1;
    iVar3 = *(int *)(iVar1 + 8) + -1;
    iVar4 = *(int *)(param_1 + 4) + -1;
    local_28 = *(int *)(param_1 + 8);
    iVar5 = local_28 + -1;
    if (-1 < iVar5) {
      local_14 = 0;
      do {
        local_2c = *(int *)(param_1 + 4);
        if (-1 < local_2c + -1) {
          local_10 = 0;
          do {
            if (param_2 == '\0') {
              uVar6 = iVar2 - (local_14 * 2 - iVar5);
              iVar7 = (int)uVar6 >> 1;
              if (iVar7 < 0) {
                iVar7 = iVar7 + (uint)((uVar6 & 1) != 0);
              }
              uVar6 = (local_10 * 2 - iVar4) + iVar3;
              iVar8 = (int)uVar6 >> 1;
              if (iVar8 < 0) {
                iVar8 = iVar8 + (uint)((uVar6 & 1) != 0);
              }
            }
            else {
              uVar6 = (local_14 * 2 - iVar5) + iVar2;
              iVar7 = (int)uVar6 >> 1;
              if (iVar7 < 0) {
                iVar7 = iVar7 + (uint)((uVar6 & 1) != 0);
              }
              uVar6 = iVar3 - (local_10 * 2 - iVar4);
              iVar8 = (int)uVar6 >> 1;
              if (iVar8 < 0) {
                iVar8 = iVar8 + (uint)((uVar6 & 1) != 0);
              }
            }
            if ((((-1 < iVar7) && (iVar7 < *(int *)(iVar1 + 4))) && (-1 < iVar8)) &&
               (iVar8 < *(int *)(iVar1 + 8))) {
              *(undefined4 *)
               (*(int *)(param_1 + 0xc) + (*(int *)(param_1 + 4) * local_14 + local_10) * 4) =
                   *(undefined4 *)
                    (*(int *)(iVar1 + 0xc) + (iVar7 + *(int *)(iVar1 + 4) * iVar8) * 4);
            }
            local_10 = local_10 + 1;
            local_2c = local_2c + -1;
          } while (local_2c != 0);
        }
        local_14 = local_14 + 1;
        local_28 = local_28 + -1;
      } while (local_28 != 0);
    }
    FUN_00405a7c(iVar1);
  }
  return;
}
