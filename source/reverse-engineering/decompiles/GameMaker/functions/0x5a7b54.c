// rea decompile_all
// name: FUN_005a7b54
// address: 0x5a7b54
// body: available
// range: 0x5a7b54-0x5a7d11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a7b54(uint param_1,int param_2,int param_3,byte *param_4,int *param_5,int *param_6,
                 int param_7,int param_8)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  int *piVar7;
  int local_74 [20];
  int local_24;
  int local_20;
  int local_1c;
  byte *local_18;
  byte *local_14;
  undefined1 *local_c;

  piVar7 = local_74;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar7 = *param_5;
    param_5 = param_5 + 1;
    piVar7 = piVar7 + 1;
  }
  iVar3 = *param_6;
  local_24 = param_6[1];
  if (param_2 == 1) {
    local_20 = 0;
  }
  else if (param_2 == 4) {
    local_20 = 0x40;
  }
  else if (param_2 == 5) {
    local_20 = 0x10;
  }
  else if (param_2 == 6) {
    local_20 = 4;
  }
  else {
    local_20 = 0;
  }
  if (param_2 == 1) {
    iVar1 = *(int *)(param_1 + 0x820 + param_7 * 4);
    local_c = (undefined1 *)
              (*(int *)(param_1 + 0x1c28) +
              param_8 + (param_3 + (local_74[1] - param_6[3])) * *(int *)(param_1 + 0x1c20));
    local_14 = param_4;
    uVar2 = param_1;
    if (-1 < local_24 + -1) {
      do {
        local_18 = local_14;
        local_1c = 0;
        iVar4 = iVar3;
        puVar6 = local_c;
        if (-1 < iVar3 + -1) {
          do {
            if (local_1c == 0) {
              uVar2 = (uint)*local_18;
              local_1c = 8;
              local_18 = local_18 + 1;
            }
            uVar5 = (undefined1)(uVar2 & 0x80);
            if ((uVar2 & 0x80) != 0) {
              uVar5 = 0xff;
            }
            *puVar6 = uVar5;
            uVar2 = uVar2 * 2;
            local_1c = local_1c + -1;
            iVar4 = iVar4 + -1;
            puVar6 = puVar6 + 1;
          } while (iVar4 != 0);
        }
        local_c = local_c + *(int *)(param_1 + 0x1c20);
        local_14 = local_14 + ((iVar1 + 0x1fU & 0xffffffe0) >> 3);
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x820 + param_7 * 4);
    local_c = (undefined1 *)
              (*(int *)(param_1 + 0x1c28) +
              param_8 + (param_3 + (local_74[1] - param_6[3])) * *(int *)(param_1 + 0x1c20));
    local_14 = param_4;
    if (-1 < local_24 + -1) {
      do {
        local_18 = local_14;
        iVar4 = iVar3;
        puVar6 = local_c;
        if (-1 < iVar3 + -1) {
          do {
            uVar2 = (uint)*local_18 * local_20;
            if (0xff < uVar2) {
              uVar2 = 0xff;
            }
            *puVar6 = (char)uVar2;
            local_18 = local_18 + 1;
            iVar4 = iVar4 + -1;
            puVar6 = puVar6 + 1;
          } while (iVar4 != 0);
        }
        local_c = local_c + *(int *)(param_1 + 0x1c20);
        local_14 = local_14 + (iVar1 + 3U & 0xfffffffc);
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
  }
  return;
}
