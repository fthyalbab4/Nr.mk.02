// rea decompile_all
// name: FUN_004dcaa4
// address: 0x4dcaa4
// body: available
// range: 0x4dcaa4-0x4dcf8e inclusive
// range: 0x4dcf96-0x4dcfc5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4dcad8 (push 0x4dcfc6 followed by fs-segment stack chaining); handler 0x4dcfc6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4dcb2e (push 0x4dcf8f followed by fs-segment stack chaining); handler 0x4dcf8f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004dcaa4(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_34;
  int *local_30;
  undefined1 local_29;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  int *local_c;
  undefined4 local_8;

  puStack_58 = &stack0xfffffffc;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_8 = 0;
  local_1c = 0;
  puStack_5c = &LAB_004dcfc6;
  uStack_60 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_60;
  local_29 = 0;
  puVar6 = &stack0xfffffffc;
  if (param_2 != '\0') {
LAB_004dcafc:
    puStack_58 = puVar6;
    puStack_64 = (undefined1 *)0x4dcb0a;
    FUN_00407f0c(&local_8,PTR_u_1234567890ABCDEFGHIJKLMNOPQRSTUV_0077895c);
    local_10 = (int *)0x0;
    local_18 = (int *)0x0;
    local_30 = (int *)0x0;
    local_c = (int *)0x0;
    local_14 = 0;
    puStack_68 = &LAB_004dcf8f;
    uStack_6c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_6c;
    puStack_64 = &stack0xfffffffc;
    local_10 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
    local_18 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
    local_30 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
    local_c = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
    iVar2 = FUN_004dbe08(param_1);
    if (-1 < iVar2 + -1) {
      local_34 = 0;
      local_3c = iVar2;
      do {
        iVar2 = FUN_004dbe18(param_1,local_34);
        uVar5 = *(char *)(iVar2 + 0x3e) == '\0';
        if (!(bool)uVar5) {
          iVar2 = FUN_004dbe18(param_1,local_34);
          FUN_00408640(*(undefined4 *)(iVar2 + 0x34),&DAT_004dcfe4);
          if ((!(bool)uVar5) &&
             (iVar2 = FUN_004dbe18(param_1,local_34), *(int *)(iVar2 + 0x34) != 0)) {
            iVar2 = FUN_004dbe18(param_1,local_34);
            FUN_004df2d4(*(undefined4 *)(iVar2 + 0x34),&local_40);
            FUN_00415690(local_40,&local_20);
            if (local_20 == 0) {
              uVar3 = FUN_004dbe18(param_1,local_34);
              iVar2 = FUN_004dbe18(param_1,local_34);
              (**(code **)(*local_30 + 100))(local_30,0,*(undefined4 *)(iVar2 + 0x34),uVar3);
            }
            else {
              iVar2 = FUN_0041db58(local_20,PTR_u_1234567890ABCDEFGHIJKLMNOPQRSTUV_0077895c);
              if ((iVar2 != 0) &&
                 (puVar6 = &stack0xfffffffc, cVar1 = FUN_004dc81c(local_20), cVar1 == '\0')) {
                iVar2 = FUN_004dbe18(param_1,local_34,puVar6);
                iVar2 = iVar2 + 0x34;
                iVar4 = FUN_004dbe18(param_1,local_34);
                FUN_004df1b8(*(undefined4 *)(iVar4 + 0x34),&local_44);
                FUN_00407eb8(iVar2,local_44);
                uVar3 = FUN_004dbe18(param_1,local_34);
                iVar2 = FUN_004dbe18(param_1,local_34);
                (**(code **)(*local_30 + 100))(local_30,0,*(undefined4 *)(iVar2 + 0x34),uVar3);
              }
            }
          }
        }
        local_34 = local_34 + 1;
        local_3c = local_3c + -1;
      } while (local_3c != 0);
    }
    FUN_00407f0c(&local_28,local_8);
    iVar2 = (**(code **)(*local_30 + 0x14))();
    if (-1 < iVar2 + -1) {
      do {
        local_3c = iVar2;
        FUN_00407f0c(&local_8,local_28);
        (**(code **)(*local_18 + 8))(local_18,local_30);
        (**(code **)(*local_10 + 0x44))();
        iVar4 = (**(code **)(*local_18 + 0x14))();
        iVar2 = iVar4 + -1;
        if (-1 < iVar4 + -1) {
          do {
            local_34 = iVar2;
            (**(code **)(*local_18 + 0xc))(local_18,local_34,&local_24);
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
                FUN_004086a8(local_24,iVar2,1,&local_48);
                FUN_00415690(local_48,&local_20);
                cVar1 = FUN_004dc81c(local_20);
                if (cVar1 != '\0') {
                  if (PTR_DAT_00782974[0xc] == '\0') {
                    FUN_004087ec(&LAB_004dcff4,&local_24,iVar2);
                  }
                  else {
                    FUN_004dc8d0(&local_24,local_20,iVar2);
                  }
                  uVar3 = (**(code **)(*local_18 + 0x18))(local_18,local_34);
                  (**(code **)(*local_10 + 0x3c))(local_10,local_24,uVar3);
                  (**(code **)(*local_18 + 0x48))(local_18,local_34);
                  break;
                }
              }
              else {
                iVar2 = iVar2 + 1;
              }
              iVar2 = iVar2 + 1;
            }
            local_34 = local_34 + -1;
            iVar2 = local_34;
          } while (local_34 != -1);
        }
        iVar2 = (**(code **)(*local_10 + 0x14))();
        if (local_14 < iVar2) {
          FUN_004dc84c();
        }
        iVar2 = (**(code **)(*local_18 + 0x14))();
        if (iVar2 < 1) break;
        iVar2 = (**(code **)(*local_18 + 0x14))();
        if (-1 < iVar2 + -1) {
          local_34 = 0;
          do {
            uVar3 = (**(code **)(*local_18 + 0x18))(local_18,local_34);
            uVar3 = (**(code **)(*local_30 + 0x5c))(local_30,uVar3);
            iVar4 = (**(code **)(*local_30 + 0x14))();
            (**(code **)(*local_30 + 0x78))(local_30,uVar3,iVar4 + -1);
            local_34 = local_34 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        local_3c = local_3c + -1;
        iVar2 = local_3c;
      } while (local_3c != 0);
    }
    if (local_14 == 0) {
      FUN_004dc84c();
    }
    iVar2 = (**(code **)(*local_c + 0x14))();
    local_29 = 0 < iVar2;
    iVar2 = (**(code **)(*local_c + 0x14))();
    if (-1 < iVar2 + -1) {
      local_34 = 0;
      local_3c = iVar2;
      do {
        (**(code **)(*local_c + 0xc))(local_c,local_34,&local_24);
        if ((((PTR_DAT_00782974[0xc] != '\0') &&
             (iVar2 = FUN_0041db58(&LAB_004dcff4,local_24), iVar2 == 0)) && (local_1c != 0)) &&
           (iVar2 = FUN_0041db58(&LAB_004dcff4,local_24), iVar2 == 0)) {
          iVar2 = local_1c;
          if ((local_1c != 0) && (*(short *)(local_1c + -10) != 2)) {
            iVar2 = FUN_00407048(&local_1c,local_1c);
          }
          uVar3 = 0;
          if (iVar2 != 0) {
            uVar3 = *(undefined4 *)(iVar2 + -4);
          }
          FUN_004086a8(local_1c,uVar3,1,&local_4c);
          FUN_004dc8d0(&local_24,local_4c,0);
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
        iVar2 = (**(code **)(*local_c + 0x18))(local_c,local_34);
        FUN_00407eb8(iVar2 + 0x34,local_24);
        local_34 = local_34 + 1;
        local_3c = local_3c + -1;
      } while (local_3c != 0);
    }
    puVar6 = puStack_64;
    *in_FS_OFFSET = uStack_6c;
    puStack_64 = (undefined1 *)0x4dcf96;
    puStack_68 = (undefined1 *)0x4dcf76;
    FUN_00405a7c(local_c,uStack_6c,puVar6);
    puStack_68 = (undefined1 *)0x4dcf7e;
    FUN_00405a7c(local_30);
    puStack_68 = (undefined1 *)0x4dcf86;
    FUN_00405a7c(local_18);
    puStack_68 = (undefined1 *)0x4dcf8e;
    FUN_00405a7c(local_10);
    return;
  }
  puVar6 = &stack0xfffffffc;
  if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
    puStack_64 = (undefined1 *)0x4dcaf4;
    cVar1 = FUN_004dd440(param_1);
    puVar6 = puStack_58;
    if (cVar1 != '\0') goto LAB_004dcafc;
  }
  puStack_58 = puVar6;
  puVar6 = puStack_58;
  *in_FS_OFFSET = uStack_60;
  puStack_58 = &LAB_004dcfcd;
  puStack_5c = (undefined1 *)0x4dcfb0;
  thunk_FUN_00406e80(&local_4c,4,puVar6);
  puStack_5c = (undefined1 *)0x4dcfbd;
  thunk_FUN_00406e80(&local_28,4);
  puStack_5c = (undefined1 *)0x4dcfc5;
  thunk_FUN_00406e5c(&local_8);
  return;
}
