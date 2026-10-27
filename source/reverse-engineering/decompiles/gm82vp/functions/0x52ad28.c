// rea decompile_all
// name: FUN_0052ad28
// address: 0x52ad28
// body: available
// range: 0x52ad28-0x52afa6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_0052ad28(int param_1,int param_2)

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
  cVar1 = FUN_00527f54(param_1);
  if (((cVar1 == '\0') && (local_c != 0)) && (cVar1 = FUN_00527f54(local_c), cVar1 == '\0')) {
    if (*(int *)(local_c + 0x38) != 0) {
      cVar1 = FUN_0052b710(*(int *)(local_c + 0x38));
      if ((byte)(cVar1 - 2U) < 2) {
        return cVar1 + -4;
      }
    }
    FUN_00528e2c(local_c,&local_34);
    FUN_00528e2c(local_8,&local_44);
    BVar2 = IntersectRect(&local_54,&local_34,&local_44);
    cVar1 = '\0';
    if (BVar2 != 0) {
      if (*(char *)(local_8 + 0x34) == '\0') {
        cVar1 = FUN_0052ac24();
        if (cVar1 == '\0') {
          return '\0';
        }
        local_e = 0;
        local_10 = '\x01';
      }
      else {
        local_e = FUN_0052b664(*(undefined4 *)(local_8 + 0x38));
        local_10 = '\0';
      }
      local_f = *(char *)(local_c + 0x34);
      if (local_f == '\0') {
        local_d = 0;
      }
      else {
        local_d = FUN_0052b664(*(undefined4 *)(local_c + 0x38));
      }
      uVar3 = FUN_005281b8(local_c,2);
      local_14 = local_54.top - (uVar3 & 0xffff);
      iVar4 = FUN_00528d78(local_c);
      local_1c = *(int *)(iVar4 + 4);
      iVar4 = FUN_00528d78(local_8);
      local_20 = *(int *)(iVar4 + 4);
      uVar3 = FUN_005281b8(local_8,2);
      iVar4 = local_54.top - (uVar3 & 0xffff);
      uVar3 = FUN_005281b8(local_8,2);
      iVar5 = (local_54.bottom - (uVar3 & 0xffff)) + -1;
      if (iVar4 <= iVar5) {
        local_24 = (iVar5 - iVar4) + 1;
        local_18 = iVar4;
        do {
          iVar4 = FUN_00529084(local_c,local_14);
          iVar4 = iVar4 + local_54.left;
          uVar3 = FUN_005281b8(local_c,1);
          pbVar7 = (byte *)(iVar4 - (uVar3 & 0xffff));
          iVar4 = FUN_00529084(local_8,local_18);
          iVar4 = iVar4 + local_54.left;
          uVar3 = FUN_005281b8(local_8,1);
          pbVar6 = (byte *)(iVar4 - (uVar3 & 0xffff));
          if (local_54.left <= local_54.right + -1) {
            iVar4 = ((local_54.right + -1) - local_54.left) + 1;
            do {
              if ((((local_10 != '\0') || (*pbVar6 != local_e)) &&
                  ((local_f == '\0' || (*pbVar7 != local_d)))) &&
                 (((local_20 == local_1c && (*pbVar6 == *pbVar7)) ||
                  (cVar1 = FUN_004156dc(local_20 + (uint)*pbVar6 * 3,local_1c + (uint)*pbVar7 * 3,3)
                  , cVar1 != '\0')))) {
                if (local_10 != '\0') {
                  local_10 = '\0';
                  local_e = FUN_0052ac78();
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
          iVar4 = FUN_0052b568(&PTR_FUN_0051bfa0,1,local_8);
          FUN_00524d9c(*(undefined4 *)(local_8 + 0x30),iVar4);
        }
        FUN_0052b614(iVar4,1);
        FUN_0052b66c(iVar4,local_e);
      }
      FUN_0052815c(local_8);
      cVar1 = FUN_00528174(local_8);
    }
  }
  return cVar1;
}
