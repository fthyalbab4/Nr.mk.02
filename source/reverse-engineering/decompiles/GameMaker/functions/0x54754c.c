// rea decompile_all
// name: FUN_0054754c
// address: 0x54754c
// body: available
// range: 0x54754c-0x5477ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_0054754c(int param_1,int param_2)

{
  char cVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  tagRECT local_54;
  RECT local_44;
  RECT local_34;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  char local_10;
  char local_f;
  byte local_e;
  byte local_d;
  int local_c;
  int local_8;

  local_c = param_2;
  local_8 = param_1;
  cVar1 = FUN_00544778(param_1);
  if (((cVar1 == '\0') && (local_c != 0)) && (cVar1 = FUN_00544778(local_c), cVar1 == '\0')) {
    if (*(int *)(local_c + 0x38) != 0) {
      cVar1 = FUN_00547f34(*(int *)(local_c + 0x38));
      if ((byte)(cVar1 - 2U) < 2) {
        return cVar1 + -4;
      }
    }
    FUN_00545650(local_c,&local_34);
    FUN_00545650(local_8,&local_44);
    BVar2 = IntersectRect(&local_54,&local_34,&local_44);
    cVar1 = '\0';
    if (BVar2 != 0) {
      if (*(char *)(local_8 + 0x34) == '\0') {
        cVar1 = FUN_00547448();
        if (cVar1 == '\0') {
          return '\0';
        }
        local_e = 0;
        local_10 = '\x01';
      }
      else {
        local_e = FUN_00547e88(*(undefined4 *)(local_8 + 0x38));
        local_10 = '\0';
      }
      local_f = *(char *)(local_c + 0x34);
      if (local_f == '\0') {
        local_d = 0;
      }
      else {
        local_d = FUN_00547e88(*(undefined4 *)(local_c + 0x38));
      }
      uVar3 = FUN_005449dc(local_c,2);
      local_14 = local_54.top - (uVar3 & 0xffff);
      iVar4 = FUN_0054559c(local_c);
      local_1c = *(int *)(iVar4 + 4);
      iVar4 = FUN_0054559c(local_8);
      local_20 = *(int *)(iVar4 + 4);
      uVar3 = FUN_005449dc(local_8,2);
      iVar4 = local_54.top - (uVar3 & 0xffff);
      uVar3 = FUN_005449dc(local_8,2);
      iVar5 = (local_54.bottom - (uVar3 & 0xffff)) + -1;
      if (iVar4 <= iVar5) {
        local_24 = (iVar5 - iVar4) + 1;
        local_18 = iVar4;
        do {
          iVar4 = FUN_005458a8(local_c,local_14);
          iVar4 = iVar4 + local_54.left;
          uVar3 = FUN_005449dc(local_c,1);
          pbVar7 = (byte *)(iVar4 - (uVar3 & 0xffff));
          iVar4 = FUN_005458a8(local_8,local_18);
          iVar4 = iVar4 + local_54.left;
          uVar3 = FUN_005449dc(local_8,1);
          pbVar6 = (byte *)(iVar4 - (uVar3 & 0xffff));
          if (local_54.left <= local_54.right + -1) {
            iVar4 = ((local_54.right + -1) - local_54.left) + 1;
            do {
              if ((((local_10 != '\0') || (*pbVar6 != local_e)) &&
                  ((local_f == '\0' || (*pbVar7 != local_d)))) &&
                 (((local_20 == local_1c && (*pbVar6 == *pbVar7)) ||
                  (cVar1 = FUN_00415890(local_20 + (uint)*pbVar6 * 3,local_1c + (uint)*pbVar7 * 3,3)
                  , cVar1 != '\0')))) {
                if (local_10 != '\0') {
                  local_10 = '\0';
                  local_e = FUN_0054749c();
                }
                *pbVar6 = local_e;
              }
              pbVar6 = pbVar6 + 1;
              pbVar7 = pbVar7 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          local_14 = local_14 + 1;
          local_18 = local_18 + 1;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
      }
      if ((*(char *)(local_8 + 0x34) == '\0') && (local_10 == '\0')) {
        iVar4 = *(int *)(local_8 + 0x38);
        if (iVar4 == 0) {
          iVar4 = FUN_00547d8c(&PTR_FUN_005387c4,1,local_8);
          FUN_005415c0(*(undefined4 *)(local_8 + 0x30),iVar4);
        }
        FUN_00547e38(iVar4,1);
        FUN_00547e90(iVar4,local_e);
      }
      FUN_00544980(local_8);
      cVar1 = FUN_00544998(local_8);
    }
  }
  return cVar1;
}
