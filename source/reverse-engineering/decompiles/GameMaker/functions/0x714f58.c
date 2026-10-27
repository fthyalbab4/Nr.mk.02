// rea decompile_all
// name: FUN_00714f58
// address: 0x714f58
// body: available
// range: 0x714f58-0x7152d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x714f74 (push 0x7152d5 followed by fs-segment stack chaining); handler 0x7152d5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00714f58(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int local_10;
  int local_c;
  int local_8;

  puStack_40 = &stack0xfffffffc;
  local_30 = 0;
  puStack_44 = &LAB_007152d5;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  local_8 = param_1;
  FUN_0045bc24(*(undefined4 *)(param_1 + 0x1c0),0xffffff);
  iVar4 = FUN_00714e10();
  if (-1 < iVar4 + -1) {
    local_c = 0;
    local_2c = iVar4;
    do {
      iVar4 = FUN_00714e18(local_c);
      if ((*(char *)(iVar4 + 0x28) == '\0') || (*PTR_DAT_0078258c != '\0')) {
        local_20 = FUN_004aa17c(&PTR_LAB_00492fac,1,local_8);
        FUN_004ee6d8(local_20,*(undefined4 *)(iVar4 + 4));
        FUN_004aa354(local_20,local_8);
        FUN_0045bc24(*(undefined4 *)(local_20 + 0x1c0),
                     *(undefined4 *)(*(int *)(*(int *)(local_8 + 0x1c0) + 0x10) + 0x14));
        local_28 = 0;
        local_24 = 0;
        iVar7 = *(int *)(iVar4 + 0x2c);
        if (-1 < iVar7 + -1) {
          local_10 = 0;
          do {
            iVar5 = FUN_00562680(iVar4,local_10);
            if (*(char *)(iVar5 + 0x18) == '\0') {
              iVar1 = *(int *)(iVar5 + 0x28);
              if (iVar1 == 8) {
                if ((*(char *)(iVar5 + 0x19) == '\0') || (*PTR_DAT_0078258c != '\0')) {
                  if (local_24 == 2) {
                    local_28 = local_28 + 0x20;
                  }
                  local_24 = (local_24 + 1) % 3;
                }
              }
              else if (iVar1 != 9) {
                if (iVar1 == 10) {
                  if ((*(char *)(iVar5 + 0x19) == '\0') || (*PTR_DAT_0078258c != '\0')) {
                    if (local_24 != 0) {
                      local_28 = local_28 + 0x20;
                    }
                    local_24 = 0;
                    local_28 = local_28 + -2;
                    local_18 = (int *)FUN_0048dbf0(&PTR_FUN_0048a814,1,local_8);
                    FUN_0048dc74(local_18,2);
                    FUN_004edce0(local_18,0x58);
                    FUN_004edd14(local_18,4);
                    FUN_004edcac(local_18,local_28 + 6);
                    FUN_004edc78(local_18,0);
                    (**(code **)(*local_18 + 0x78))(local_18,local_20);
                    local_1c = (int *)FUN_0047cc38(&LAB_004712ac,1,local_8);
                    FUN_0047d544(local_1c,0);
                    puVar9 = &DAT_007152f4;
                    uVar6 = *(undefined4 *)(iVar5 + 4);
                    puVar8 = &DAT_007152f4;
                    FUN_00408480(&local_30,3);
                    FUN_004ee6d8(local_1c,local_30);
                    FUN_004edc78(local_1c,4);
                    FUN_004edcac(local_1c,local_28);
                    (**(code **)(*local_1c + 0x78))(local_1c,local_20,*local_1c,puVar8,uVar6,puVar9)
                    ;
                    FUN_004ee858(local_1c,0xffffff);
                    local_28 = local_28 + 0x10;
                  }
                }
                else if ((*(char *)(iVar5 + 0x19) == '\0') || (*PTR_DAT_0078258c != '\0')) {
                  local_14 = (int *)FUN_005308b4(&PTR_FUN_00530470,1,local_8);
                  (**(code **)(*local_14 + 0x70))(local_14,1);
                  (**(code **)(*local_14 + 0x78))(local_14,local_20);
                  local_14[3] = *(int *)(iVar4 + 8) * 1000 + *(int *)(iVar5 + 8);
                  FUN_004edce0(local_14,0x19);
                  FUN_004edd14(local_14,0x19);
                  local_14[0x70] = *(int *)(iVar5 + 0x10);
                  local_14[0x71] = *(int *)(iVar5 + 0x14);
                  FUN_004edc78(local_14,local_24 << 5);
                  FUN_004edcac(local_14,local_28);
                  FUN_00407eb8(local_14 + 0x20,*(undefined4 *)(iVar5 + 0x1c));
                  FUN_004ee7f8(local_14,1);
                  cVar3 = FUN_0071b5fc();
                  if ((cVar3 == '\0') && (*(char *)(iVar5 + 0x1a) != '\0')) {
                    uVar6 = 0;
                  }
                  else {
                    uVar6 = 1;
                  }
                  (**(code **)(*local_14 + 0x74))(local_14,uVar6);
                  local_14[0x34] = param_4;
                  local_14[0x35] = param_5;
                  cVar3 = (**(code **)(*local_14 + 0x5c))();
                  if (cVar3 == '\0') {
                    FUN_0040839c(local_14 + 0x20,L"Standard edition only:\r",local_14[0x20]);
                  }
                  if (local_24 == 2) {
                    local_28 = local_28 + 0x20;
                  }
                  local_24 = (local_24 + 1) % 3;
                }
              }
            }
            local_10 = local_10 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      local_c = local_c + 1;
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  FUN_004ee5c0(local_8,1);
  puVar2 = puStack_40;
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_007152dc;
  puStack_44 = (undefined1 *)0x7152d4;
  thunk_FUN_00406e5c(&local_30,uStack_48,puVar2);
  return;
}
