// rea decompile_all
// name: FUN_00585630
// address: 0x585630
// body: available
// range: 0x585630-0x585a6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x58565a (push 0x585a6b followed by fs-segment stack chaining); handler 0x585a6b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00585630(void)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_9c;
  undefined1 *puStack_98;
  undefined1 *puStack_94;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74 [17];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined1 local_9;
  undefined4 local_8;

  puStack_94 = &stack0xfffffffc;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_8 = 0;
  puStack_98 = &LAB_00585a6b;
  uStack_9c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_9c;
  local_9 = 0;
  if (-1 < DAT_00686b0c + -1) {
    local_1c = DAT_00686b0c;
    local_10 = 0;
    puStack_94 = &stack0xfffffffc;
    do {
      local_20 = *(int *)(DAT_00686b08 + local_10 * 4);
      if (-1 < *(int *)(local_20 + 0x10) + -1) {
        local_14 = 0;
        local_24 = *(int *)(local_20 + 0x10);
        do {
          iVar3 = FUN_005754b0(local_20,local_14);
          if (-1 < *(int *)(iVar3 + 0x20) + -1) {
            iVar7 = 0;
            local_28 = *(int *)(iVar3 + 0x20);
            do {
              iVar4 = FUN_00574e1c(iVar3,iVar7);
              uVar5 = *(undefined4 *)(iVar4 + 8);
              iVar4 = FUN_00574e1c(iVar3,iVar7);
              FUN_00585238(*(undefined4 *)(iVar4 + 4),uVar5);
              iVar7 = iVar7 + 1;
              local_28 = local_28 + -1;
            } while (local_28 != 0);
          }
          local_14 = local_14 + 1;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
      }
      local_10 = local_10 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  DAT_0084f004 = 0;
  if (-1 < DAT_00686b0c + -1) {
    local_1c = DAT_00686b0c;
    local_10 = 0;
    do {
      local_2c = *(int *)(DAT_00686b08 + local_10 * 4);
      if (-1 < *(int *)(local_2c + 0x10) + -1) {
        local_14 = 0;
        local_24 = *(int *)(local_2c + 0x10);
        do {
          iVar3 = FUN_005754b0(local_2c,local_14);
          if (-1 < *(int *)(iVar3 + 0x18) + -1) {
            iVar7 = 0;
            local_28 = *(int *)(iVar3 + 0x18);
            do {
              iVar4 = FUN_00574d94(iVar3,iVar7);
              if (DAT_0084f004 < *(int *)(iVar4 + 0x10)) {
                iVar4 = FUN_00574d94(iVar3,iVar7);
                DAT_0084f004 = *(int *)(iVar4 + 0x10);
              }
              iVar7 = iVar7 + 1;
              local_28 = local_28 + -1;
            } while (local_28 != 0);
          }
          local_14 = local_14 + 1;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
      }
      local_10 = local_10 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  FUN_00409dfc(&DAT_0084eff8,&DAT_00585490,1,DAT_0084f004 + 1);
  FUN_00409dfc(&DAT_0084effc,&DAT_005854c0,1,DAT_0084f004 + 1);
  FUN_00409dfc(&DAT_0084f000,&DAT_005854f0,1,DAT_0084f004 + 1);
  if (-1 < DAT_0084f004) {
    local_1c = DAT_0084f004 + 1;
    local_10 = 0;
    do {
      *(undefined4 *)(DAT_0084eff8 + local_10 * 4) = 0xffffffff;
      local_10 = local_10 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  if (-1 < DAT_00686b0c + -1) {
    local_1c = DAT_00686b0c;
    local_10 = 0;
    do {
      local_30 = *(int *)(DAT_00686b08 + local_10 * 4);
      FUN_0050d110(&local_78);
      FUN_0040875c(&local_8,4);
      if (-1 < *(int *)(local_30 + 0x10) + -1) {
        local_14 = 0;
        local_24 = *(int *)(local_30 + 0x10);
        do {
          iVar3 = FUN_005754b0(local_30,local_14);
          if (-1 < *(int *)(iVar3 + 0x18) + -1) {
            iVar7 = 0;
            local_28 = *(int *)(iVar3 + 0x18);
            do {
              uVar5 = FUN_005754b0(local_30,local_14);
              iVar3 = FUN_00574d94(uVar5,iVar7);
              iVar4 = FUN_005754b0(local_30,local_14);
              if (*(int *)(iVar4 + 8) == 1) {
                local_18 = 0;
                puVar6 = local_74;
                do {
                  iVar4 = FUN_00574b9c(iVar3,local_18);
                  if (iVar4 == 1) {
                    *puVar6 = 1;
                  }
                  else {
                    *puVar6 = 0;
                  }
                  local_18 = local_18 + 1;
                  puVar6 = puVar6 + 1;
                } while (local_18 != 0x11);
                puStack_98 = (undefined1 *)(uint)(*(int *)(iVar3 + 0x5c) == 1);
                if (*(int *)(iVar3 + 0xc) == 0xc) {
                  puStack_94 = (undefined1 *)0x10;
                  uStack_9c = 0x5858f9;
                  iVar4 = FUN_005754b0(local_30,local_14);
                  uStack_9c = 0x585907;
                  FUN_00408678(&local_7c,local_8,*(undefined4 *)(iVar4 + 4));
                  uStack_9c = 0x585914;
                  uVar5 = FUN_00578e78(local_7c,*(undefined4 *)(iVar3 + 8),0);
                  *(undefined4 *)(DAT_0084eff8 + *(int *)(iVar3 + 0x10) * 4) = uVar5;
                }
                else {
                  puStack_94 = (undefined1 *)0x10;
                  uStack_9c = 0x585938;
                  iVar4 = FUN_005754b0(local_30,local_14);
                  uStack_9c = 0x585946;
                  FUN_00408678(&local_80,local_8,*(undefined4 *)(iVar4 + 4));
                  uStack_9c = 0x585956;
                  uVar5 = FUN_00578e78(local_80,*(undefined4 *)(iVar3 + 8),1);
                  *(undefined4 *)(DAT_0084eff8 + *(int *)(iVar3 + 0x10) * 4) = uVar5;
                }
                *(undefined4 *)(DAT_0084effc + *(int *)(iVar3 + 0x10) * 4) = 0;
              }
              else {
                iVar4 = FUN_005754b0(local_30,local_14);
                if (*(int *)(iVar4 + 8) == 2) {
                  iVar4 = *(int *)(iVar3 + 0x10);
                  *(undefined4 *)(DAT_0084f000 + iVar4 * 4) = 0;
                  if (*(int *)(iVar3 + 0x60) != 0) {
                    uVar5 = FUN_00616588(&DAT_006160fc,CONCAT31((int3)((uint)iVar4 >> 8),1),
                                         *(undefined4 *)(iVar3 + 0x60));
                    *(undefined4 *)(DAT_0084f000 + *(int *)(iVar3 + 0x10) * 4) = uVar5;
                    FUN_00408194(iVar3 + 0x60,0);
                    cVar2 = FUN_00616664(*(undefined4 *)(DAT_0084f000 + *(int *)(iVar3 + 0x10) * 4))
                    ;
                    if (cVar2 == '\0') {
                      puStack_94 = *(undefined1 **)(*(int *)(DAT_00686b08 + local_10 * 4) + 4);
                      puStack_98 = &DAT_00585af8;
                      uStack_9c = *(undefined4 *)PTR_DAT_00689674;
                      FUN_0040875c(&local_84,4);
                      FUN_006113b0(local_84,1);
                      goto LAB_00585a48;
                    }
                    *(undefined4 *)(DAT_0084effc + *(int *)(iVar3 + 0x10) * 4) = 1;
                  }
                }
              }
              iVar7 = iVar7 + 1;
              local_28 = local_28 + -1;
            } while (local_28 != 0);
          }
          local_14 = local_14 + 1;
          local_24 = local_24 + -1;
        } while (local_24 != 0);
      }
      local_10 = local_10 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  local_9 = 1;
LAB_00585a48:
  puVar1 = puStack_94;
  *in_FS_OFFSET = uStack_9c;
  puStack_94 = &LAB_00585a72;
  puStack_98 = (undefined1 *)0x585a62;
  thunk_FUN_004072fc(&local_84,4,puVar1);
  puStack_98 = (undefined1 *)0x585a6a;
  thunk_FUN_004072d8(&local_8);
  return;
}
