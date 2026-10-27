// rea decompile_all
// name: FUN_006718f4
// address: 0x6718f4
// body: available
// range: 0x6718f4-0x671dd1 inclusive
// range: 0x671dd9-0x671e63 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x671927 (push 0x671e64 followed by fs-segment stack chaining); handler 0x671e64 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x67199f (push 0x671dd2 followed by fs-segment stack chaining); handler 0x671dd2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006718f4(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_38;
  int *local_34;
  undefined1 local_2d;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  int *local_c;
  undefined4 local_8;

  puStack_5c = &stack0xfffffffc;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_8 = 0;
  local_1c = 0;
  puStack_60 = &LAB_00671e64;
  uStack_64 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_64;
  local_2d = 0;
  puVar6 = &stack0xfffffffc;
  local_2c = param_1;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    if (param_2 != '\0') {
      puStack_68 = (undefined1 *)0x671953;
      FUN_00407f0c(&local_8,*(undefined4 *)PTR_PTR_00782840);
      puStack_68 = (undefined1 *)0x67195f;
      local_10 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
      puStack_68 = (undefined1 *)0x67196e;
      local_18 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
      puStack_68 = (undefined1 *)0x67197d;
      local_34 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
      puStack_68 = (undefined1 *)0x67198c;
      local_c = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
      local_14 = 0;
      puStack_6c = &LAB_00671dd2;
      uStack_70 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_70;
      iVar2 = *(int *)(*(int *)(local_2c + 8) + 8);
      puStack_68 = &stack0xfffffffc;
      if (-1 < iVar2 + -1) {
        local_38 = 0;
        puStack_68 = &stack0xfffffffc;
        local_40 = iVar2;
        do {
          iVar2 = FUN_00671640(local_2c,local_38);
          uVar5 = *(char *)(iVar2 + 0x30) == '\0';
          if (!(bool)uVar5) {
            iVar2 = FUN_00671640(local_2c,local_38);
            FUN_00408640(*(undefined4 *)(iVar2 + 0x20),&DAT_00671e84);
            if ((!(bool)uVar5) &&
               (iVar2 = FUN_00671640(local_2c,local_38), *(int *)(iVar2 + 0x20) != 0)) {
              iVar2 = FUN_00671640(local_2c,local_38);
              FUN_004df2d4(*(undefined4 *)(iVar2 + 0x20),&local_44);
              FUN_00415690(local_44,&local_20);
              if (local_20 == 0) {
                uVar3 = FUN_0043cd28(local_2c,local_38);
                iVar2 = FUN_00671640(local_2c,local_38);
                (**(code **)(*local_34 + 100))(local_34,0,*(undefined4 *)(iVar2 + 0x20),uVar3);
              }
              else {
                iVar2 = FUN_0041db58(local_20,*(undefined4 *)PTR_PTR_00782840);
                if ((iVar2 != 0) &&
                   (puVar6 = &stack0xfffffffc, cVar1 = FUN_0067166c(local_20), cVar1 == '\0')) {
                  iVar2 = FUN_00671640(local_2c,local_38,puVar6);
                  iVar2 = iVar2 + 0x20;
                  iVar4 = FUN_00671640(local_2c,local_38);
                  FUN_004df1b8(*(undefined4 *)(iVar4 + 0x20),&local_48);
                  FUN_00407eb8(iVar2,local_48);
                  uVar3 = FUN_0043cd28(local_2c,local_38);
                  iVar2 = FUN_00671640(local_2c,local_38);
                  (**(code **)(*local_34 + 100))(local_34,0,*(undefined4 *)(iVar2 + 0x20),uVar3);
                }
              }
            }
          }
          local_38 = local_38 + 1;
          local_40 = local_40 + -1;
        } while (local_40 != 0);
      }
      FUN_00407f0c(&local_28,local_8);
      iVar2 = (**(code **)(*local_34 + 0x14))();
      if (-1 < iVar2 + -1) {
        do {
          local_40 = iVar2;
          FUN_00407f0c(&local_8,local_28);
          (**(code **)(*local_18 + 8))(local_18,local_34);
          (**(code **)(*local_10 + 0x44))();
          iVar4 = (**(code **)(*local_18 + 0x14))();
          iVar2 = iVar4 + -1;
          if (-1 < iVar4 + -1) {
            do {
              local_38 = iVar2;
              (**(code **)(*local_18 + 0xc))(local_18,local_38,&local_24);
              iVar2 = 1;
              while( true ) {
                FUN_00407058(&local_24);
                iVar4 = FUN_00408238();
                if (iVar4 < iVar2) break;
                iVar4 = local_24;
                if ((local_24 != 0) && (*(short *)(local_24 + -10) != 2)) {
                  iVar4 = FUN_00407048(&local_24,local_24);
                }
                if ((*(ushort *)(iVar4 + -2 + iVar2 * 2) < 0xd800) ||
                   (0xdfff < *(ushort *)(iVar4 + -2 + iVar2 * 2))) {
                  FUN_004086a8(local_24,iVar2,1,&local_4c);
                  FUN_00415690(local_4c,&local_20);
                  cVar1 = FUN_0067166c(local_20);
                  if (cVar1 != '\0') {
                    if (PTR_DAT_00782974[0xc] == '\0') {
                      FUN_004087ec(&DAT_00671e94,&local_24,iVar2);
                    }
                    else {
                      FUN_00671720(&local_24,local_20,iVar2);
                    }
                    uVar3 = (**(code **)(*local_18 + 0x18))(local_18,local_38);
                    (**(code **)(*local_10 + 0x3c))(local_10,local_24,uVar3);
                    (**(code **)(*local_18 + 0x48))(local_18,local_38);
                    break;
                  }
                }
                else {
                  iVar2 = iVar2 + 1;
                }
                iVar2 = iVar2 + 1;
              }
              local_38 = local_38 + -1;
              iVar2 = local_38;
            } while (local_38 != -1);
          }
          iVar2 = (**(code **)(*local_10 + 0x14))();
          if (local_14 < iVar2) {
            FUN_0067169c();
          }
          iVar2 = (**(code **)(*local_18 + 0x14))();
          if (iVar2 < 1) break;
          iVar2 = (**(code **)(*local_18 + 0x14))();
          if (-1 < iVar2 + -1) {
            local_38 = 0;
            do {
              uVar3 = (**(code **)(*local_18 + 0x18))(local_18,local_38);
              uVar3 = (**(code **)(*local_34 + 0x5c))(local_34,uVar3);
              iVar4 = (**(code **)(*local_34 + 0x14))();
              (**(code **)(*local_34 + 0x78))(local_34,uVar3,iVar4 + -1);
              local_38 = local_38 + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          local_40 = local_40 + -1;
          iVar2 = local_40;
        } while (local_40 != 0);
      }
      if (local_14 == 0) {
        FUN_0067169c();
      }
      iVar2 = (**(code **)(*local_c + 0x14))();
      local_2d = 0 < iVar2;
      iVar2 = (**(code **)(*local_c + 0x14))();
      if (-1 < iVar2 + -1) {
        local_38 = 0;
        local_40 = iVar2;
        do {
          (**(code **)(*local_c + 0xc))(local_c,local_38,&local_24);
          if ((((PTR_DAT_00782974[0xc] != '\0') &&
               (iVar2 = FUN_0041db58(&DAT_00671e94,local_24), iVar2 == 0)) && (local_1c != 0)) &&
             (iVar2 = FUN_0041db58(&DAT_00671e94,local_24), iVar2 == 0)) {
            iVar2 = local_1c;
            if ((local_1c != 0) && (*(short *)(local_1c + -10) != 2)) {
              iVar2 = FUN_00407048(&local_1c,local_1c);
            }
            uVar3 = 0;
            if (iVar2 != 0) {
              uVar3 = *(undefined4 *)(iVar2 + -4);
            }
            FUN_004086a8(local_1c,uVar3,1,&local_50);
            FUN_00671720(&local_24,local_50,0);
            iVar2 = local_1c;
            if ((local_1c != 0) && (*(short *)(local_1c + -10) != 2)) {
              iVar2 = FUN_00407048(&local_1c,local_1c);
            }
            uVar3 = 0;
            if (iVar2 != 0) {
              uVar3 = *(undefined4 *)(iVar2 + -4);
            }
            FUN_00408778(&local_1c,uVar3,1);
          }
          iVar2 = (**(code **)(*local_c + 0x18))(local_c,local_38);
          FUN_00407eb8(iVar2 + 0x20,local_24);
          local_38 = local_38 + 1;
          local_40 = local_40 + -1;
        } while (local_40 != 0);
      }
      puVar6 = puStack_68;
      *in_FS_OFFSET = uStack_70;
      puStack_68 = (undefined1 *)0x671dd9;
      puStack_6c = (undefined1 *)0x671db9;
      FUN_00405a7c(local_c,uStack_70,puVar6);
      puStack_6c = (undefined1 *)0x671dc1;
      FUN_00405a7c(local_34);
      puStack_6c = (undefined1 *)0x671dc9;
      FUN_00405a7c(local_18);
      puStack_6c = (undefined1 *)0x671dd1;
      FUN_00405a7c(local_10);
      return;
    }
    iVar2 = *(int *)(*(int *)(param_1 + 8) + 8);
    puVar6 = &stack0xfffffffc;
    if (-1 < iVar2 + -1) {
      local_38 = 0;
      puStack_5c = &stack0xfffffffc;
      local_40 = iVar2;
      do {
        puStack_68 = (undefined1 *)0x671dfd;
        iVar2 = FUN_00671640(local_2c,local_38);
        if (*(int *)(iVar2 + 0x2c) != 0) {
          puStack_68 = (undefined1 *)0x671e0e;
          iVar2 = FUN_00671640(local_2c,local_38);
          if (*(char *)(*(int *)(iVar2 + 0x2c) + 0x1c) != '\0') {
            puStack_68 = (undefined1 *)0x671e22;
            iVar2 = FUN_00671640(local_2c,local_38);
            puStack_68 = (undefined1 *)0x671e2c;
            FUN_006718f4(*(undefined4 *)(iVar2 + 0x2c),1);
          }
        }
        local_38 = local_38 + 1;
        local_40 = local_40 + -1;
        puVar6 = puStack_5c;
      } while (local_40 != 0);
    }
  }
  puStack_5c = puVar6;
  puVar6 = puStack_5c;
  *in_FS_OFFSET = uStack_64;
  puStack_5c = &LAB_00671e6b;
  puStack_60 = (undefined1 *)0x671e4e;
  thunk_FUN_00406e80(&local_50,4,puVar6);
  puStack_60 = (undefined1 *)0x671e5b;
  thunk_FUN_00406e80(&local_28,4);
  puStack_60 = (undefined1 *)0x671e63;
  thunk_FUN_00406e5c(&local_8);
  return;
}
