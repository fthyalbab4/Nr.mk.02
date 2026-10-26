// rea decompile_all
// name: FUN_005a1974
// address: 0x5a1974
// body: available
// range: 0x5a1974-0x5a1b41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a1974(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int local_18;
  int local_10;

  pbVar3 = (byte *)*param_3;
  pbVar2 = (byte *)*param_2;
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 8) {
    for (; 0 < param_4; param_4 = param_4 - iVar4) {
      iVar4 = (*pbVar2 & 0x7f) + 1;
      if (*pbVar2 < 0x80) {
        FUN_0040450c(pbVar2 + 1,pbVar3,iVar4);
        pbVar2 = pbVar2 + 1 + iVar4;
      }
      else {
        FUN_00404f08(pbVar3,iVar4,pbVar2[1]);
        pbVar2 = pbVar2 + 2;
      }
      pbVar3 = pbVar3 + iVar4;
    }
  }
  else if (iVar4 - 0xfU < 2) {
    for (; 0 < param_4; param_4 = param_4 - iVar4) {
      iVar4 = (*pbVar2 & 0x7f) + 1;
      if (*pbVar2 < 0x80) {
        FUN_0040450c(pbVar2 + 1,pbVar3,iVar4 * 2);
        pbVar2 = pbVar2 + 1 + iVar4 * 2;
        pbVar3 = pbVar3 + iVar4 * 2;
      }
      else {
        local_18 = iVar4;
        do {
          *pbVar3 = pbVar2[1];
          pbVar3[1] = pbVar2[2];
          pbVar3 = pbVar3 + 2;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
        pbVar2 = pbVar2 + 3;
      }
    }
  }
  else if (iVar4 == 0x18) {
    for (; 0 < param_4; param_4 = param_4 - iVar4) {
      iVar4 = (*pbVar2 & 0x7f) + 1;
      if (*pbVar2 < 0x80) {
        FUN_0040450c(pbVar2 + 1,pbVar3,iVar4 * 3);
        pbVar2 = pbVar2 + 1 + iVar4 * 3;
        pbVar3 = pbVar3 + iVar4 * 3;
      }
      else {
        local_18 = iVar4;
        do {
          *pbVar3 = pbVar2[1];
          pbVar3[1] = pbVar2[2];
          pbVar3[2] = pbVar2[3];
          pbVar3 = pbVar3 + 3;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
        pbVar2 = pbVar2 + 4;
      }
    }
  }
  else if (iVar4 == 0x20) {
    for (; 0 < param_4; param_4 = param_4 - iVar4) {
      iVar4 = (*pbVar2 & 0x7f) + 1;
      if (*pbVar2 < 0x80) {
        FUN_0040450c(pbVar2 + 1,pbVar3,iVar4 * 4);
        pbVar2 = pbVar2 + 1 + iVar4 * 4;
      }
      else {
        uVar1 = *(undefined4 *)(pbVar2 + 1);
        local_10 = 0;
        local_18 = iVar4;
        do {
          *(undefined4 *)(pbVar3 + local_10 * 4) = uVar1;
          local_10 = local_10 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
        pbVar2 = pbVar2 + 5;
      }
      pbVar3 = pbVar3 + iVar4 * 4;
    }
  }
  *param_2 = pbVar2;
  return;
}
