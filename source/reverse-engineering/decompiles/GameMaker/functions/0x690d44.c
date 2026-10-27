// rea decompile_all
// name: FUN_00690d44
// address: 0x690d44
// body: available
// range: 0x690d44-0x6912ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00690d44(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_18;

  FUN_006912b0(param_1);
  FUN_00658d14(*(undefined4 *)(param_1 + 0x61c),0);
  FUN_00659210(*(undefined4 *)(param_1 + 0x61c),0,0);
  iVar3 = FUN_00691a38(&PTR_LAB_00687c74,1);
  FUN_00409ce0(param_1 + 0x16a4,&DAT_00682d2c);
  FUN_00409be0(param_1 + 0x16a4,&DAT_00682d2c,1,
               (short)(*(int *)(*(int *)(param_1 + 0x61c) + 0x2f0) +
                      *(int *)(*(int *)(param_1 + 0x61c) + 0x2f8)));
  local_18 = FUN_00409a18(*(undefined4 *)(param_1 + 0x16a8));
  if (-1 < local_18 + -1) {
    local_38 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x16a8) + local_38 * 4) != 0) {
        FUN_00692118();
      }
      local_38 = local_38 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  local_20 = 0;
  local_18 = *(int *)(*(int *)(param_1 + 0x61c) + 0x2f0);
  if (-1 < local_18 + -1) {
    local_38 = 0;
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x16a4) + local_20 * 0x10);
      *puVar1 = 0;
      puVar1[1] = 0xffffffff;
      puVar1[3] = local_38;
      puVar1[2] = 0xffffffff;
      local_20 = local_20 + 1;
      local_38 = local_38 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  local_18 = *(int *)(*(int *)(param_1 + 0x61c) + 0x2f8);
  if (-1 < local_18 + -1) {
    local_38 = 0;
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x16a4) + local_20 * 0x10);
      *puVar1 = 0;
      puVar1[1] = 0xffffffff;
      puVar1[3] = 0xffffffff;
      puVar1[2] = local_38;
      local_20 = local_20 + 1;
      local_38 = local_38 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  if (-1 < local_20 + -1) {
    local_18 = local_20;
    local_38 = 0;
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x16a4) + local_38 * 0x10);
      iVar5 = puVar1[3];
      if (iVar5 == -1) {
        iVar5 = puVar1[2];
        iVar7 = *(int *)(*(int *)(param_1 + 0x61c) + 0x2fc);
        local_34 = FUN_00410538();
        iVar4 = FUN_00410538();
        local_30 = FUN_00410538();
        local_30 = local_30 + local_34;
        local_2c = FUN_00410538();
        local_2c = local_2c + iVar4;
        uVar6 = *(undefined4 *)(iVar7 + iVar5 * 0x28 + 0x1c);
      }
      else {
        iVar7 = *(int *)(*(int *)(param_1 + 0x61c) + 0x2f4);
        local_34 = FUN_00410538();
        iVar4 = FUN_00410538();
        iVar5 = FUN_0062cd94(*(undefined4 *)(iVar7 + iVar5 * 0x18 + 8));
        uVar6 = 0;
        local_28 = 0;
        if (iVar5 != 0) {
          uVar6 = *(undefined4 *)(iVar5 + 0xc);
          local_28 = FUN_006f5b30(*(undefined4 *)(iVar5 + 4));
        }
        if (local_28 == 0) {
          local_30 = local_34 + 1;
          local_2c = iVar4 + 1;
        }
        else {
          local_34 = FUN_00410538();
          iVar4 = FUN_00410538();
          FUN_005b2ec4(local_28);
          local_30 = FUN_00410538();
          local_30 = local_30 + local_34;
          FUN_005b2edc(local_28);
          local_2c = FUN_00410538();
          local_2c = local_2c + iVar4;
        }
      }
      cVar2 = FUN_00692130(iVar3,uVar6);
      if (cVar2 == '\0') {
        FUN_00691c04(iVar3,uVar6);
      }
      *puVar1 = uVar6;
      for (; iVar5 = local_34, iVar4 <= local_2c; iVar4 = iVar4 + 1) {
        for (; iVar5 <= local_30; iVar5 = iVar5 + 1) {
          if ((((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 0x168c))) && (-1 < iVar4)) &&
             (iVar4 < *(int *)(param_1 + 0x1690))) {
            iVar7 = iVar4 * *(int *)(param_1 + 0x168c) + iVar5;
            if (*(int *)(*(int *)(param_1 + 0x16a8) + iVar7 * 4) == 0) {
              uVar6 = FUN_00691a38(&PTR_LAB_00687c74,1);
              *(undefined4 *)(*(int *)(param_1 + 0x16a8) + iVar7 * 4) = uVar6;
            }
            FUN_00691c04(*(undefined4 *)(*(int *)(param_1 + 0x16a8) + iVar7 * 4),local_38);
          }
        }
      }
      local_38 = local_38 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  FUN_006921ec(iVar3);
  FUN_006921bc(iVar3);
  FUN_00409ce0(param_1 + 0x16a0,&DAT_00682cf8);
  FUN_00409be0(param_1 + 0x16a0,&DAT_00682cf8,1,(short)*(undefined4 *)(iVar3 + 8));
  local_18 = *(int *)(iVar3 + 8);
  if (-1 < local_18 + -1) {
    local_38 = 0;
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x16a0) + local_38 * 8);
      uVar6 = FUN_0069190c(iVar3,local_38);
      *puVar1 = uVar6;
      uVar6 = FUN_00691a38(&PTR_LAB_00687c74,1);
      puVar1[1] = uVar6;
      local_38 = local_38 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  if (-1 < local_20 + -1) {
    local_18 = local_20;
    local_38 = 0;
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x16a4) + local_38 * 0x10);
      uVar6 = FUN_00692148(iVar3,*puVar1);
      puVar1[1] = uVar6;
      local_38 = local_38 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  FUN_00405a7c(iVar3);
  FUN_00691508(param_1,1);
  return;
}
