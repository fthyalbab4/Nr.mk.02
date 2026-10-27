// rea decompile_all
// name: FUN_004b0684
// address: 0x4b0684
// body: available
// range: 0x4b0684-0x4b06ea inclusive
// range: 0x4b0703-0x4b0766 inclusive
// range: 0x4b077f-0x4b08ab inclusive
// range: 0x4b08cd-0x4b0c11 inclusive
// range: 0x4b0c19-0x4b0cb0 inclusive
// range: 0x4b0d15-0x4b0d8c inclusive
// range: 0x4b0d94-0x4b11d7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b06a9 (push 0x4b11d8 followed by fs-segment stack chaining); handler 0x4b11d8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b07d1 (push 0x4b0d8d followed by fs-segment stack chaining); handler 0x4b0d8d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b0839 (push 0x4b08ac followed by fs-segment stack chaining); handler 0x4b08ac lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b0a20 (push 0x4b0c12 followed by fs-segment stack chaining); handler 0x4b0c12 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b0c24 (push 0x4b0cb1 followed by fs-segment stack chaining); handler 0x4b0cb1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b0684(int *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  HANDLE h;
  HFONT h_00;
  HGDIOBJ pvVar4;
  HWND pHVar5;
  LONG LVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  LPARAM lParam;
  WPARAM wParam;
  int *in_FS_OFFSET;
  LOGFONTW *pv;
  char *pcVar10;
  int iStack_fc;
  char *pcStack_f8;
  undefined1 *puVar11;
  undefined1 *puVar12;
  UINT Msg;
  undefined1 *puVar13;
  undefined1 *puVar14;
  int iStack_e4;
  undefined1 *puStack_e0;
  undefined1 *puStack_dc;
  undefined4 local_cc;
  LOGFONTW local_c8;
  undefined1 local_6c [4];
  undefined4 local_68;
  undefined1 local_44 [24];
  short local_2c [2];
  short local_28;
  int local_20;
  char local_16;
  char local_15;
  tagPOINT local_14;
  int local_c;
  int *local_8;

  puStack_dc = &stack0xfffffffc;
  puVar13 = &stack0xfffffffc;
  puVar14 = &stack0xfffffffc;
  puVar11 = &stack0xfffffffc;
  puVar12 = &stack0xfffffffc;
  local_cc = 0;
  puStack_e0 = &LAB_004b11d8;
  iStack_e4 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_e4;
  iVar9 = *(int *)(param_2 + 8);
  iVar8 = *(int *)(iVar9 + 8);
  local_c = param_2;
  local_8 = param_1;
  if (-0x19a < iVar8) {
    if (-0x193 < iVar8) {
      if (iVar8 == -0x192) {
LAB_004b0f74:
        iVar8 = param_1[0xe8];
        if (*(int *)(iVar8 + 0x34) == 0) {
          puStack_dc = &stack0xfffffffc;
          uVar7 = FUN_004b062c(param_1,iVar9 + 0x38);
          FUN_00405d08(local_8,uVar7);
          puVar2 = puStack_dc;
        }
        else {
          puStack_dc = &stack0xfffffffc;
          FUN_0048e1e4(iVar8,0);
          uVar7 = FUN_004b062c(local_8,iVar9 + 0x38);
          *(undefined4 *)(iVar8 + 0xc) = uVar7;
          FUN_0048e1e4(iVar8,1);
          puVar2 = puStack_dc;
        }
        goto switchD_004b06e4_caseD_fffffe37;
      }
      if (iVar8 != -0x191) {
        if (iVar8 == -0xc) {
          iVar8 = param_1[0x9d];
          puVar2 = &stack0xfffffffc;
          if (iVar8 != 0) {
            local_20 = iVar9;
            FUN_0045be3c(iVar8,iVar8,param_2);
            iVar9 = *in_FS_OFFSET;
            *in_FS_OFFSET = (int)&stack0xffffff10;
            *(undefined4 *)(local_c + 0xc) = 0;
            if ((*(byte *)(local_20 + 0xe) & 1) == 0) {
              (**(code **)(*local_8 + 0x54))(local_8,local_44);
              iVar8 = *(int *)(local_20 + 0xc);
              if (iVar8 == 1) {
                cVar3 = (**(code **)(*local_8 + 0x104))(local_8,0,0);
                if (cVar3 != '\0') {
                  pcStack_f8 = &LAB_004b08ac;
                  iStack_fc = *in_FS_OFFSET;
                  *in_FS_OFFSET = (int)&iStack_fc;
                  FUN_0045ceb4(local_8[0x9d],*(undefined4 *)(local_20 + 0x10));
                  FUN_0045cd20(local_8[0x9d],local_8[0x19]);
                  FUN_0045cd3c(local_8[0x9d],local_8[0x70]);
                  local_15 = (**(code **)(*local_8 + 0xf4))(local_8,local_44,0);
                  *in_FS_OFFSET = iStack_fc;
                  pcStack_f8 = (char *)0x4b08ab;
                  FUN_0045ceb4(local_8[0x9d],0,puVar11);
                  return;
                }
                cVar3 = (**(code **)(*local_8 + 0x104))(local_8,1,0);
                if ((cVar3 != '\0') ||
                   (cVar3 = (**(code **)(*local_8 + 0x104))(local_8,1,2), cVar3 != '\0')) {
                  *(uint *)(local_c + 0xc) = *(uint *)(local_c + 0xc) | 0x20;
                }
                cVar3 = (**(code **)(*local_8 + 0x104))(local_8,1,1);
                if (cVar3 != '\0') {
                  *(uint *)(local_c + 0xc) = *(uint *)(local_c + 0xc) | 0x10;
                }
                cVar3 = (**(code **)(*local_8 + 0x104))(local_8,1,3);
                if (cVar3 != '\0') {
                  *(uint *)(local_c + 0xc) = *(uint *)(local_c + 0xc) | 0x40;
                }
              }
              else if (iVar8 == 2) {
                cVar3 = (**(code **)(*local_8 + 0x104))(local_8,0,1);
                if (cVar3 != '\0') {
                  (**(code **)(*local_8 + 0xf4))(local_8,local_44,1);
                }
              }
              else if (iVar8 == 3) {
                cVar3 = (**(code **)(*local_8 + 0x104))(local_8,0,2);
                if (cVar3 != '\0') {
                  (**(code **)(*local_8 + 0xf4))(local_8,local_44,2);
                }
              }
              else if ((iVar8 == 4) &&
                      (cVar3 = (**(code **)(*local_8 + 0x104))(local_8,0,3), cVar3 != '\0')) {
                (**(code **)(*local_8 + 0xf4))(local_8,local_44,3);
              }
            }
            else {
              FUN_00404f08(local_6c,0x28,0);
              local_68 = *(undefined4 *)(local_20 + 0x24);
              iVar8 = FUN_004b062c(local_8,local_6c);
              if (iVar8 == 0) {
                FUN_0040670c();
                puVar2 = puStack_dc;
                goto switchD_004b06e4_caseD_fffffe37;
              }
              iVar1 = *(int *)(local_20 + 0xc);
              if (iVar1 == 0x10001) {
                pcStack_f8 = &LAB_004b0c12;
                iStack_fc = *in_FS_OFFSET;
                *in_FS_OFFSET = (int)&iStack_fc;
                FUN_0045ceb4(local_8[0x9d],*(undefined4 *)(local_20 + 0x10));
                FUN_0045cd20(local_8[0x9d],local_8[0x19]);
                FUN_0045cd3c(local_8[0x9d],local_8[0x70]);
                if ((*(byte *)(local_20 + 0x28) & 1) != 0) {
                  FUN_0045b0d0(*(undefined4 *)(local_8[0x9d] + 0x40),0xff00000e);
                  FUN_0045bc24(*(undefined4 *)(local_8[0x9d] + 0x48),0xff00000d);
                }
                iVar9 = local_8[0x9d];
                iVar1 = *(int *)(iVar9 + 0x40);
                *(int **)(iVar1 + 0xc) = local_8;
                *(undefined1 **)(iVar1 + 8) = &LAB_004b1f18;
                iVar9 = *(int *)(iVar9 + 0x48);
                *(int **)(iVar9 + 0xc) = local_8;
                *(undefined1 **)(iVar9 + 8) = &LAB_004b1f18;
                *(undefined1 *)(local_8 + 0x9e) = 0;
                pcVar10 = &local_16;
                local_15 = (**(code **)(*local_8 + 0xf8))
                                     (local_8,iVar8,*(undefined2 *)(local_20 + 0x28),pcVar10,0);
                if (local_16 == '\0') {
                  *(uint *)(local_c + 0xc) = *(uint *)(local_c + 0xc) | 0x10000;
                }
                if (local_15 == '\0') {
                  *(uint *)(local_c + 0xc) = *(uint *)(local_c + 0xc) | 4;
                }
                else if ((char)local_8[0x9e] != '\0') {
                  *(undefined1 *)(local_8 + 0x9e) = 0;
                  iVar9 = local_8[0x9d];
                  iVar8 = *(int *)(iVar9 + 0x40);
                  *(undefined4 *)(iVar8 + 8) = 0;
                  *(undefined4 *)(iVar8 + 0xc) = 0;
                  iVar8 = *(int *)(iVar9 + 0x48);
                  *(undefined4 *)(iVar8 + 8) = 0;
                  *(undefined4 *)(iVar8 + 0xc) = 0;
                  iVar8 = *(int *)(local_c + 8);
                  uVar7 = FUN_0045aa34(*(undefined4 *)(*(int *)(iVar9 + 0x40) + 0x18));
                  *(undefined4 *)(iVar8 + 0x30) = uVar7;
                  uVar7 = FUN_0045aa34(*(undefined4 *)
                                        (*(int *)(*(int *)(local_8[0x9d] + 0x48) + 0x10) + 0x14));
                  *(undefined4 *)(iVar8 + 0x34) = uVar7;
                  pv = &local_c8;
                  iVar9 = 0x5c;
                  h = (HANDLE)FUN_0045b10c(*(undefined4 *)(local_8[0x9d] + 0x40));
                  iVar9 = GetObjectW(h,iVar9,pv);
                  if (iVar9 != 0) {
                    FUN_0045ceb4(local_8[0x9d],0);
                    h_00 = CreateFontIndirectW(&local_c8);
                    local_8[0xbd] = (int)h_00;
                    pvVar4 = SelectObject(*(HDC *)(local_20 + 0x10),h_00);
                    local_8[0xbe] = (int)pvVar4;
                    *(uint *)(local_c + 0xc) = *(uint *)(local_c + 0xc) | 2;
                  }
                }
                cVar3 = (**(code **)(*local_8 + 0x104))(local_8,1,1);
                iVar9 = iStack_fc;
                if (cVar3 != '\0') {
                  *(uint *)(local_c + 0xc) = *(uint *)(local_c + 0xc) | 0x10;
                }
                *in_FS_OFFSET = (int)pcVar10;
                iStack_fc = 0x4b0d71;
                FUN_0045ceb4(local_8[0x9d],0,iVar9);
                return;
              }
              if (iVar1 == 0x10002) {
                pcStack_f8 = &LAB_004b0cb1;
                iStack_fc = *in_FS_OFFSET;
                *in_FS_OFFSET = (int)&iStack_fc;
                FUN_0045ceb4(local_8[0x9d],*(undefined4 *)(local_20 + 0x10));
                FUN_0045cd20(local_8[0x9d],local_8[0x19]);
                FUN_0045cd3c(local_8[0x9d],local_8[0x70]);
                cVar3 = (**(code **)(*local_8 + 0x104))(local_8,1,1);
                if (cVar3 != '\0') {
                  (**(code **)(*local_8 + 0xf8))
                            (local_8,iVar8,*(undefined2 *)(local_20 + 0x28),&local_16,1);
                }
                *in_FS_OFFSET = iStack_fc;
                pcStack_f8 = (char *)0x4b0cb0;
                FUN_0045ceb4(local_8[0x9d],0,puVar12);
                return;
              }
              if (iVar1 == 0x10003) {
                cVar3 = (**(code **)(*local_8 + 0x104))(local_8,1,2);
                puVar13 = puVar14;
                if (cVar3 != '\0') {
                  pcStack_f8 = &local_16;
                  iStack_fc = 0x4b0d42;
                  (**(code **)(*local_8 + 0xf8))(local_8,iVar8,*(undefined2 *)(local_20 + 0x28));
                  puVar13 = puVar14;
                }
              }
              else {
                puVar13 = puVar14;
                if ((iVar1 == 0x10004) &&
                   (cVar3 = (**(code **)(*local_8 + 0x104))(local_8,1,3), puVar13 = puVar14,
                   cVar3 != '\0')) {
                  pcStack_f8 = &local_16;
                  iStack_fc = 0x4b0d71;
                  (**(code **)(*local_8 + 0xf8))(local_8,iVar8,*(undefined2 *)(local_20 + 0x28));
                  puVar13 = puVar14;
                }
              }
            }
            *in_FS_OFFSET = iVar9;
            FUN_0045bf40(local_8[0x9d],iVar9,puVar13);
            return;
          }
        }
        else {
          puVar2 = &stack0xfffffffc;
          if (iVar8 == -5) {
            param_1[0xab] = 0;
            puStack_dc = &stack0xfffffffc;
            GetCursorPos(&local_14);
            if ((char)local_8[0xac] == '\0') {
              lParam = CONCAT22((undefined2)local_14.y,(undefined2)local_14.x);
              wParam = FUN_004f76a8(local_8);
              Msg = 0xbc7b;
              pHVar5 = (HWND)FUN_004f76a8(local_8);
              pcStack_f8 = (char *)0x4b11b5;
              PostMessageW(pHVar5,Msg,wParam,lParam);
            }
            else {
              FUN_004ee1d0(local_8,&local_14,local_2c);
              iVar9 = FUN_004b02f8(local_8,(int)local_2c[0],(int)local_28);
              local_8[0xab] = iVar9;
              uVar7 = FUN_004f76a8(local_8);
              FUN_004efb90(local_8,0x7b,uVar7);
              local_8[0xab] = 0;
            }
            *(undefined4 *)(local_c + 0xc) = 1;
            puVar2 = puStack_dc;
          }
        }
        goto switchD_004b06e4_caseD_fffffe37;
      }
LAB_004b0f3f:
      puStack_dc = &stack0xfffffffc;
      uVar7 = FUN_004b062c(param_1,iVar9 + 0x38);
      cVar3 = FUN_00405d08(local_8,uVar7);
      puVar2 = puStack_dc;
      if (cVar3 == '\0') {
        *(undefined4 *)(local_c + 0xc) = 1;
      }
      goto switchD_004b06e4_caseD_fffffe37;
    }
    if (iVar8 != -0x193) {
      puVar2 = &stack0xfffffffc;
      switch(iVar8) {
      case -0x199:
switchD_004b06e4_caseD_fffffe36:
        puStack_dc = &stack0xfffffffc;
        iVar9 = FUN_004b062c(param_1,iVar9 + 0x10);
        puVar2 = puStack_dc;
        if (iVar9 != 0) {
          *(undefined4 *)(iVar9 + 0x10) = 0;
          FUN_0048e1e4(local_8[0xe8],0);
          if ((char)local_8[0xb2] == '\0') {
            FUN_004ae124(local_8[0xb6],iVar9);
            puVar2 = puStack_dc;
          }
          else {
            FUN_004ad9e0(iVar9);
            puVar2 = puStack_dc;
          }
        }
      default:
        goto switchD_004b06e4_caseD_fffffe37;
      case -0x197:
switchD_004b06e4_caseD_fffffe38:
        *(undefined1 *)(param_1 + 0xa1) = 1;
        puStack_dc = &stack0xfffffffc;
        iVar9 = FUN_004b062c(param_1,*(int *)(param_2 + 8) + 0x38);
        local_8[0xa3] = iVar9;
        puVar2 = puStack_dc;
        goto switchD_004b06e4_caseD_fffffe37;
      case -0x196:
switchD_004b06e4_caseD_fffffe39:
        puVar2 = &stack0xfffffffc;
        if (*(char *)((int)param_1 + 0x2b1) == '\0') {
          puStack_dc = &stack0xfffffffc;
          uVar7 = FUN_004b062c(param_1,iVar9 + 0x38);
          if (*(int *)(iVar9 + 0xc) == 2) {
            FUN_00405d08(local_8,uVar7);
            puVar2 = puStack_dc;
          }
          else {
            puVar2 = puStack_dc;
            if (*(int *)(iVar9 + 0xc) == 1) {
              FUN_00405d08(local_8,uVar7);
              puVar2 = puStack_dc;
            }
          }
        }
        goto switchD_004b06e4_caseD_fffffe37;
      case -0x195:
        goto switchD_004b0760_caseD_fffffe6b;
      case -0x194:
switchD_004b0760_caseD_fffffe6c:
        puStack_dc = &stack0xfffffffc;
        iVar8 = FUN_004b062c(param_1,iVar9 + 0xc);
        puVar2 = puStack_dc;
        if ((iVar8 != 0) && ((*(byte *)(iVar9 + 0xc) & 1) != 0)) {
          FUN_00408074(&local_cc,*(undefined4 *)(iVar9 + 0x1c));
          FUN_004ac910(iVar8,local_cc);
          puVar2 = puStack_dc;
        }
        goto switchD_004b06e4_caseD_fffffe37;
      }
    }
LAB_004b106b:
    puStack_dc = &stack0xfffffffc;
    iVar8 = FUN_004b062c(param_1,iVar9 + 0xc);
    puVar2 = puStack_dc;
    if (iVar8 != 0) {
      if ((*(byte *)(iVar9 + 0xc) & 1) != 0) {
        uVar7 = FUN_00407f44(*(undefined4 *)(iVar8 + 8));
        FUN_00417754(*(undefined4 *)(iVar9 + 0x1c),uVar7,*(int *)(iVar9 + 0x20) + -1);
      }
      if ((*(byte *)(iVar9 + 0xc) & 2) != 0) {
        (**(code **)(*local_8 + 0xfc))(local_8,iVar8);
        *(undefined4 *)(iVar9 + 0x24) = *(undefined4 *)(iVar8 + 0x14);
      }
      puVar2 = puStack_dc;
      if ((*(byte *)(iVar9 + 0xc) & 0x20) != 0) {
        (**(code **)(*local_8 + 0x100))(local_8,iVar8);
        *(undefined4 *)(iVar9 + 0x28) = *(undefined4 *)(iVar8 + 0x18);
        puVar2 = puStack_dc;
      }
    }
    goto switchD_004b06e4_caseD_fffffe37;
  }
  if (iVar8 != -0x19a) {
    if (iVar8 < -0x1c5) {
      if (iVar8 == -0x1c6) goto switchD_004b0760_caseD_fffffe6b;
      puVar2 = &stack0xfffffffc;
      switch(iVar8) {
      case -0x1cc:
        goto switchD_004b06e4_caseD_fffffe34;
      case -0x1cb:
        goto switchD_004b06e4_caseD_fffffe35;
      case -0x1ca:
        goto switchD_004b06e4_caseD_fffffe36;
      default:
        goto switchD_004b06e4_caseD_fffffe37;
      case -0x1c8:
        goto switchD_004b06e4_caseD_fffffe38;
      case -0x1c7:
        goto switchD_004b06e4_caseD_fffffe39;
      }
    }
    if (-0x1c3 < iVar8) {
      if (iVar8 == -0x1c2) goto LAB_004b0f3f;
      puVar2 = &stack0xfffffffc;
      if (iVar8 != -0x19b) goto switchD_004b06e4_caseD_fffffe37;
switchD_004b06e4_caseD_fffffe34:
      puStack_dc = &stack0xfffffffc;
      FUN_00405d08(param_1,iVar9 + 0xc);
      puVar2 = puStack_dc;
      goto switchD_004b06e4_caseD_fffffe37;
    }
    if (iVar8 == -0x1c3) goto LAB_004b0f74;
    if (iVar8 == -0x1c5) goto switchD_004b0760_caseD_fffffe6c;
    puVar2 = &stack0xfffffffc;
    if (iVar8 != -0x1c4) goto switchD_004b06e4_caseD_fffffe37;
    goto LAB_004b106b;
  }
switchD_004b06e4_caseD_fffffe35:
  puStack_dc = &stack0xfffffffc;
  cVar3 = FUN_004eefcc(param_1,param_2);
  if (cVar3 == '\0') {
    uVar7 = FUN_004b062c(local_8,iVar9 + 0xc);
    cVar3 = FUN_00405d08(local_8,uVar7);
    if (cVar3 == '\0') goto LAB_004b0deb;
  }
  else {
LAB_004b0deb:
    *(undefined4 *)(local_c + 0xc) = 1;
  }
  puVar2 = puStack_dc;
  if (*(int *)(local_c + 0xc) == 0) {
    pHVar5 = (HWND)FUN_004f76a8(local_8);
    pcStack_f8 = (char *)0x4b0e1b;
    pHVar5 = (HWND)SendMessageW(pHVar5,0x110f,0,0);
    local_8[0xa4] = (int)pHVar5;
    LVar6 = GetWindowLongW(pHVar5,-4);
    local_8[0x9f] = LVar6;
    SetWindowLongW((HWND)local_8[0xa4],-4,local_8[0xa0]);
    puVar2 = puStack_dc;
  }
switchD_004b06e4_caseD_fffffe37:
  puStack_dc = puVar2;
  puVar13 = puStack_dc;
  *in_FS_OFFSET = iStack_e4;
  puStack_dc = &LAB_004b11df;
  puStack_e0 = (undefined1 *)0x4b11d7;
  thunk_FUN_00406e5c(&local_cc,iStack_e4,puVar13);
  return;
switchD_004b0760_caseD_fffffe6b:
  puVar2 = &stack0xfffffffc;
  if (*(char *)((int)param_1 + 0x2b1) == '\0') {
    puStack_dc = &stack0xfffffffc;
    uVar7 = FUN_004b062c(param_1,iVar9 + 0x38);
    if ((*(int *)(iVar9 + 0xc) == 2) && (cVar3 = FUN_00405d08(local_8,uVar7), cVar3 == '\0')) {
      *(undefined4 *)(local_c + 0xc) = 1;
      puVar2 = puStack_dc;
    }
    else {
      puVar2 = puStack_dc;
      if ((*(int *)(iVar9 + 0xc) == 1) &&
         (cVar3 = FUN_00405d08(local_8,uVar7), puVar2 = puStack_dc, cVar3 == '\0')) {
        *(undefined4 *)(local_c + 0xc) = 1;
      }
    }
  }
  goto switchD_004b06e4_caseD_fffffe37;
}
