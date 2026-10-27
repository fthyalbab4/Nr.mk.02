// rea decompile_all
// name: FUN_005b1820
// address: 0x5b1820
// body: available
// range: 0x5b1820-0x5b1a90 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b1820(int param_1,undefined4 param_2,int param_3,char param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_14;
  int local_10;

  iVar2 = FUN_00701c94(&DAT_00700d94,1,*(undefined4 *)(param_1 + 4),*(undefined4 *)PTR_DAT_007819d0,
                       *(undefined4 *)(param_1 + 8));
  iVar3 = (int)*(uint *)(param_1 + 4) >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((*(uint *)(param_1 + 4) & 1) != 0);
  }
  local_10 = param_3;
  if (iVar3 < param_3) {
    local_10 = iVar3;
  }
  iVar3 = (int)*(uint *)(param_1 + 8) >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((*(uint *)(param_1 + 8) & 1) != 0);
  }
  if (iVar3 < local_10) {
    local_10 = iVar3;
  }
  local_1c._2_1_ = (byte)((uint)param_2 >> 0x10);
  local_1c._3_1_ = (byte)((uint)param_2 >> 0x18);
  bVar1 = local_1c._3_1_;
  local_1c._1_1_ = (byte)((uint)param_2 >> 8);
  local_1c._1_1_ = local_1c._1_1_ >> 1;
  local_1c._0_1_ = (byte)param_2;
  local_1c = CONCAT22(CONCAT11(local_1c._3_1_,local_1c._2_1_ >> 1),
                      CONCAT11(local_1c._1_1_,(byte)local_1c));
  local_1c = CONCAT31(local_1c._1_3_,(byte)local_1c >> 1);
  local_20 = CONCAT13(bVar1,(int3)*(undefined4 *)PTR_DAT_00781744);
  if (-1 < local_10 + -1) {
    local_28 = local_10;
    local_14 = 0;
    do {
      local_24 = FUN_005a5c3c(local_1c,param_2);
      if (param_4 != '\0') {
        local_24 = CONCAT13((char)((int)((uint)bVar1 * (local_10 - local_14)) / local_10),
                            (undefined3)local_24);
      }
      iVar3 = (*(int *)(iVar2 + 4) - local_14) + -1;
      if (local_14 <= iVar3) {
        iVar4 = (iVar3 - local_14) + 1;
        iVar3 = local_14;
        do {
          *(undefined4 *)(*(int *)(iVar2 + 0xc) + (local_14 * *(int *)(iVar2 + 4) + iVar3) * 4) =
               local_24;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_24 = FUN_005a5c3c(local_20,local_1c);
      if (param_4 != '\0') {
        local_24 = CONCAT13((char)((int)((uint)bVar1 * (local_10 - local_14)) / local_10),
                            (undefined3)local_24);
      }
      iVar3 = (*(int *)(iVar2 + 4) - local_14) + -1;
      if (local_14 <= iVar3) {
        iVar4 = (iVar3 - local_14) + 1;
        iVar3 = local_14;
        do {
          *(undefined4 *)
           (*(int *)(iVar2 + 0xc) +
           (((*(int *)(iVar2 + 8) - local_14) + -1) * *(int *)(iVar2 + 4) + iVar3) * 4) = local_24;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_14 = local_14 + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  if (-1 < local_10 + -1) {
    local_28 = local_10;
    iVar3 = 0;
    do {
      local_24 = FUN_005a5c3c(local_1c,param_2);
      if (param_4 != '\0') {
        local_24 = CONCAT13((char)((int)((uint)bVar1 * (local_10 - iVar3)) / local_10),
                            (undefined3)local_24);
      }
      iVar4 = (*(int *)(iVar2 + 8) - iVar3) + -1;
      if (iVar3 <= iVar4) {
        iVar4 = (iVar4 - iVar3) + 1;
        local_14 = iVar3;
        do {
          *(undefined4 *)(*(int *)(iVar2 + 0xc) + (local_14 * *(int *)(iVar2 + 4) + iVar3) * 4) =
               local_24;
          local_14 = local_14 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      local_24 = FUN_005a5c3c(local_20,local_1c);
      if (param_4 != '\0') {
        local_24 = CONCAT13((char)((int)((uint)bVar1 * (local_10 - iVar3)) / local_10),
                            (undefined3)local_24);
      }
      iVar4 = (*(int *)(iVar2 + 8) - iVar3) + -1;
      if (iVar3 <= iVar4) {
        iVar4 = (iVar4 - iVar3) + 1;
        local_14 = iVar3;
        do {
          *(undefined4 *)
           (*(int *)(iVar2 + 0xc) +
           (local_14 * *(int *)(iVar2 + 4) + (*(int *)(iVar2 + 4) - iVar3) + -1) * 4) = local_24;
          local_14 = local_14 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      iVar3 = iVar3 + 1;
      local_28 = local_28 + -1;
    } while (local_28 != 0);
  }
  FUN_007034e0(param_1,0,0,1,iVar2);
  FUN_00405a7c(iVar2);
  return;
}
