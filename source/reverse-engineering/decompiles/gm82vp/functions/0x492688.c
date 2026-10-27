// rea decompile_all
// name: FUN_00492688
// address: 0x492688
// body: available
// range: 0x492688-0x4927cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00492688(int param_1,uint param_2,int param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  byte local_40 [32];
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  int local_8;

  if ((((int)param_2 < 0) || (uVar5 = param_2, 1 < *(int *)(*(int *)(param_1 + 0x288) + 8))) &&
     (uVar5 = 0, *(int *)(*(int *)(param_1 + 0x288) + 8) != 0)) {
    local_10 = 0;
    local_14 = 0;
    local_18 = 0;
    local_c = 0x7fffffff;
    local_8 = param_3;
    for (; (0 < local_c && ((int)uVar5 < *(int *)(*(int *)(param_1 + 0x288) + 8)));
        uVar5 = uVar5 + 1) {
      uVar2 = uVar5;
      if (param_2 != uVar5) {
        local_1c = FUN_00438ec4(*(undefined4 *)(param_1 + 0x288),uVar5);
        cVar1 = FUN_004061f8(local_1c,&PTR_LAB_00488b04);
        if (((cVar1 != '\0') && (*(char *)(local_1c + 0x1c5) != '\0')) ||
           (uVar2 = local_18, uVar5 == *(int *)(*(int *)(param_1 + 0x288) + 8) - 1U)) {
          uVar2 = param_4 - *(int *)(local_1c + 0x44);
          uVar4 = (int)uVar2 >> 0x1f;
          if ((int)((uVar2 ^ uVar4) - uVar4) < local_c) {
            uVar2 = param_4 - *(int *)(local_1c + 0x44);
            uVar4 = (int)uVar2 >> 0x1f;
            local_c = (uVar2 ^ uVar4) - uVar4;
            local_14 = local_10;
            local_18 = uVar5;
          }
          local_10 = uVar5 + 1;
          uVar2 = local_18;
        }
      }
      local_18 = uVar2;
    }
    uVar5 = local_14;
    if ((int)local_14 <= (int)local_18) {
      local_20 = (local_18 - local_14) + 1;
      do {
        if ((param_2 != uVar5) &&
           (iVar3 = FUN_00438ec4(*(undefined4 *)(param_1 + 0x288),uVar5),
           local_8 <= *(int *)(iVar3 + 0x40))) break;
        uVar5 = uVar5 + 1;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
    if (uVar5 == param_2 + 1) {
      FUN_004059d4(CONCAT11(0x20,(char)local_14),local_18,local_40);
      bVar6 = param_2 < 0xff;
      if (param_2 < 0x100) {
        bVar6 = (local_40[(int)param_2 >> 3] >> (param_2 & 7) & 1) != 0;
      }
      if (bVar6) {
        uVar5 = param_2;
      }
    }
  }
  return uVar5;
}
