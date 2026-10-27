// rea decompile_all
// name: FUN_0052d33c
// address: 0x52d33c
// body: available
// range: 0x52d33c-0x52d4d5 inclusive
// range: 0x52d4f5-0x52d8fd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52d353 (push 0x52d90f followed by fs-segment stack chaining); handler 0x52d90f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52d361 (push 0x52d8fe followed by fs-segment stack chaining); handler 0x52d8fe lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x52d48b (push 0x52d4d6 followed by fs-segment stack chaining); handler 0x52d4d6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052d33c(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  short sVar5;
  undefined4 uVar6;
  DWORD DVar7;
  BOOL BVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  MSG local_44;
  DWORD local_28;
  DWORD local_24;
  int local_20;
  DWORD local_1c;
  DWORD local_18;
  char local_11;
  undefined4 local_10;
  uint local_c;
  int local_8;

  puStack_54 = &stack0xfffffffc;
  puStack_60 = &stack0xfffffffc;
  puStack_58 = &LAB_0052d90f;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  puStack_64 = &LAB_0052d8fe;
  puStack_68 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_68;
  puVar1 = &stack0xfffffffc;
  puVar2 = &stack0xfffffffc;
  local_8 = param_1;
  if ((*(byte *)(param_1 + 0x58) & 0x20) != 0) {
    uVar6 = FUN_0045d4ec(*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(local_8 + 0x74) = uVar6;
    puVar1 = puStack_60;
    puVar2 = puStack_54;
  }
  puStack_54 = puVar2;
  puStack_60 = puVar1;
  *(undefined1 *)(local_8 + 0x78) = 1;
  do {
    if ((*(char *)(local_8 + 0x78) == '\0') || (*(char *)(local_8 + 0xd) != '\0')) {
      *(undefined4 *)(local_8 + 0x60) = 0xffffffff;
      uVar6 = *(undefined4 *)(local_8 + 0xbc);
      FUN_0052d2c8();
      puVar1 = puStack_68;
      *in_FS_OFFSET = uVar6;
      puStack_68 = &LAB_0052d905;
      if ((*(byte *)(local_8 + 0x58) & 1) == 0) {
        FUN_00405fdc(local_8,uVar6,puVar1);
      }
      return;
    }
    *(undefined4 *)(local_8 + 0x60) = 0;
    FUN_0052d2c8();
    *(undefined1 *)(local_8 + 0x79) = 0;
    *(undefined1 *)(local_8 + 0x78) = 0;
    local_c = 1;
    local_10 = *(undefined4 *)(local_8 + 0x60);
    local_11 = '\0';
    local_18 = (DWORD)((*(byte *)(local_8 + 0x58) & 1) == 0);
    *(undefined1 *)(local_8 + 0x65) = 1;
    local_24 = timeGetTime();
    local_1c = 0;
    do {
      if ((((local_c == 0) && ((*(byte *)(local_8 + 0x58) & 0x10) == 0)) ||
          (*(char *)(local_8 + 0xd) != '\0')) || (*(char *)(local_8 + 0x78) != '\0')) break;
      *(undefined4 *)(local_8 + 0x60) = local_10;
      if (*(char *)(local_8 + 0x79) != '\0') {
        FUN_0052d2c8();
      }
      do {
        iVar11 = FUN_00524d94(*(undefined4 *)(*(int *)(local_8 + 0x40) + 0x2c));
        if (((iVar11 <= *(int *)(local_8 + 0x60)) || (*(char *)(local_8 + 0xd) != '\0')) ||
           (*(char *)(local_8 + 0x78) != '\0')) break;
        FUN_0052c584(*(undefined4 *)(*(int *)(local_8 + 0x40) + 0x2c),
                     *(undefined4 *)(local_8 + 0x60));
        cVar3 = FUN_00527f54();
        if (cVar3 != '\0') break;
        if ((int)local_18 < 1) {
          Sleep(0);
        }
        else {
          FUN_0052c584(*(undefined4 *)(*(int *)(local_8 + 0x40) + 0x2c),
                       *(undefined4 *)(local_8 + 0x60));
          FUN_00528bb8();
          local_28 = timeGetTime();
          if (*(int *)(local_8 + 0x5c) < 1) {
            if ((*(byte *)(local_8 + 0x58) & 1) == 0) {
              local_18 = DAT_006844dc * DAT_006844d0;
            }
            else {
              local_18 = 0xffffffff;
            }
          }
          else {
            uVar6 = *in_FS_OFFSET;
            *in_FS_OFFSET = &stack0xffffff8c;
            local_20 = (int)((local_28 - local_24) - local_1c) / 2;
            local_1c = MulDiv(local_18 * DAT_006844d0 - local_20,100,*(int *)(local_8 + 0x5c));
            *in_FS_OFFSET = uVar6;
            local_18 = local_1c;
          }
          local_24 = local_28;
          if ((*(byte *)(local_8 + 0x58) & 1) == 0) {
            if ((int)local_18 < 1) {
              local_18 = 1;
            }
            local_28 = timeGetTime();
            while (((0 < (int)local_18 && (*(char *)(local_8 + 0xd) == '\0')) &&
                   (*(char *)(local_8 + 0x78) == '\0'))) {
              if ((int)local_18 < 100) {
                Sleep(local_18);
              }
              else {
                Sleep(100);
              }
              DVar7 = timeGetTime();
              local_20 = DVar7 - local_28;
              local_18 = local_18 - local_20;
              local_28 = timeGetTime();
              while (((*(char *)(local_8 + 0xd) == '\0' && (*(char *)(local_8 + 0x78) == '\0')) &&
                     (BVar8 = PeekMessageW(&local_44,(HWND)0x0,0,0,1), BVar8 != 0))) {
                if (local_44.message == 0x12) {
                  PostQuitMessage(local_44.wParam);
                  FUN_00445ea4(local_8);
                }
                else {
                  TranslateMessage(&local_44);
                  DispatchMessageW(&local_44);
                }
              }
            }
          }
          else if (((0 < (int)local_18) || (*(int *)(local_8 + 0x5c) == 0)) &&
                  (DVar7 = WaitForSingleObject(*(HANDLE *)(local_8 + 0x80),local_18), DVar7 != 0x102
                  )) {
            local_1c = 0;
            local_24 = timeGetTime();
          }
        }
        if (*(char *)(local_8 + 0xd) != '\0') break;
        uVar6 = *(undefined4 *)(local_8 + 0xa0);
        FUN_0052d2c8();
        if (*(char *)(local_8 + 0xd) != '\0') break;
        *(undefined1 *)(local_8 + 100) = 1;
        iVar11 = FUN_0052c584(*(undefined4 *)(*(int *)(local_8 + 0x40) + 0x2c),
                              *(undefined4 *)(local_8 + 0x60),uVar6);
        iVar11 = FUN_00524d94(*(undefined4 *)(iVar11 + 0x30));
        if (-1 < iVar11 + -1) {
          iVar12 = 0;
          do {
            iVar9 = FUN_0052c584(*(undefined4 *)(*(int *)(local_8 + 0x40) + 0x2c),
                                 *(undefined4 *)(local_8 + 0x60));
            iVar9 = FUN_00527c98(*(undefined4 *)(iVar9 + 0x30),iVar12);
            cVar3 = FUN_004061f8(iVar9,&LAB_0051d110);
            if (cVar3 == '\0') {
              cVar3 = FUN_004061f8(iVar9,&PTR_FUN_0051bfa0);
              if (cVar3 != '\0') {
                uVar4 = FUN_0052b710(iVar9);
                *(undefined1 *)(local_8 + 100) = uVar4;
              }
            }
            else if (local_11 == '\0') {
              local_11 = '\x01';
              local_c = (uint)*(ushort *)(iVar9 + 0x18);
              if (((local_c == 0) || ((*(byte *)(local_8 + 0x58) & 0x10) != 0)) &&
                 ((*(byte *)(local_8 + 0x58) & 1) != 0)) {
                local_c = 0xffffffff;
              }
              local_10 = *(undefined4 *)(local_8 + 0x60);
            }
            iVar12 = iVar12 + 1;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        if (*(int *)(local_8 + 0x68) == 0) {
          FUN_0052cc08(local_8);
        }
        else {
          FUN_0052cc08(local_8);
        }
        *(undefined1 *)(local_8 + 0x65) = *(undefined1 *)(local_8 + 100);
        if (*(char *)(local_8 + 0xd) != '\0') break;
        local_18 = DAT_006844d4;
        iVar11 = FUN_0052c584(*(undefined4 *)(*(int *)(local_8 + 0x40) + 0x2c),
                              *(undefined4 *)(local_8 + 0x60));
        if (*(int *)(iVar11 + 0x38) != 0) {
          iVar11 = FUN_0052c584(*(undefined4 *)(*(int *)(local_8 + 0x40) + 0x2c),
                                *(undefined4 *)(local_8 + 0x60));
          sVar5 = FUN_0052b6e8(*(undefined4 *)(iVar11 + 0x38));
          if (sVar5 != 0) {
            iVar11 = FUN_0052c584(*(undefined4 *)(*(int *)(local_8 + 0x40) + 0x2c),
                                  *(undefined4 *)(local_8 + 0x60));
            uVar10 = FUN_0052b6e8(*(undefined4 *)(iVar11 + 0x38));
            local_18 = uVar10 & 0xffff;
            if ((int)local_18 < (int)DAT_006844d8) {
              local_18 = DAT_006844d8;
            }
            if (((int)DAT_006844dc < (int)local_18) && ((*(byte *)(local_8 + 0x58) & 1) == 0)) {
              local_18 = DAT_006844dc;
            }
          }
        }
        iVar11 = *(int *)(local_8 + 0x60);
        FUN_0052d2c8();
        if (*(char *)(local_8 + 0xd) != '\0') break;
        if (iVar11 == *(int *)(local_8 + 0x60)) {
          *(int *)(local_8 + 0x60) = *(int *)(local_8 + 0x60) + 1;
        }
      } while ((*(byte *)(local_8 + 0x58) & 4) != 0);
      if (0 < (int)local_c) {
        local_c = local_c - 1;
      }
    } while ((*(ushort *)(local_8 + 0x58) & 0xc) == 0xc);
  } while( true );
}
