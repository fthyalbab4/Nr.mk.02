// rea decompile_all
// name: FUN_006b40b0
// address: 0x6b40b0
// body: available
// range: 0x6b40b0-0x6b46b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b40da (push 0x6b46b6 followed by fs-segment stack chaining); handler 0x6b46b6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b40b0(int param_1,int param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined1 local_30;
  undefined1 local_2c [16];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined2 *local_8;

  puStack_54 = &stack0xfffffffc;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_8 = (undefined2 *)0x0;
  puStack_58 = &LAB_006b46b6;
  uStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_5c;
  local_c = param_2;
  FUN_006b28fc(param_1,param_2,&local_14,&local_18);
  lVar1 = (longlong)(local_c - *(int *)(param_1 + 0x2f4)) * (longlong)*(int *)(param_1 + 0x2e0);
  local_10 = (int)lVar1;
  if ((-1 < local_10) && (local_10 <= *(int *)(param_1 + 0x4c))) {
    cVar3 = FUN_006b288c(param_1,(int)((ulonglong)lVar1 >> 0x20));
    if ((cVar3 == '\0') && (local_c == *(int *)(param_1 + 0x2ec))) {
      FUN_0045bc24(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x48),
                   *(undefined4 *)(PTR_DAT_00781914 + 0x28));
    }
    else {
      FUN_0045bc24(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x48),
                   *(undefined4 *)(PTR_DAT_00781914 + 0x24));
    }
    FUN_0045bda4(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x48),0);
    FUN_00438c38(0,local_10,*(undefined4 *)(param_1 + 0x48),local_2c,
                 local_10 + *(int *)(param_1 + 0x2e0));
    (**(code **)(**(int **)(param_1 + 0x270) + 0x4c))(*(int **)(param_1 + 0x270),local_2c);
    if (local_14 <= local_18) {
      iVar6 = (local_14 - *(int *)(param_1 + 0x2f8)) * *(int *)(param_1 + 0x2dc);
      if (*PTR_DAT_007823a4 != '\0') {
        iVar6 = iVar6 + *(int *)(param_1 + 0x2dc) * 5;
      }
      FUN_0045bc24(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x48),
                   *(undefined4 *)(PTR_DAT_00781914 + 0x2c));
      FUN_0045bda4(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x48),0);
      FUN_00438c38(iVar6,local_10,((local_18 - local_14) + 1) * *(int *)(param_1 + 0x2dc) + iVar6,
                   local_2c,local_10 + *(int *)(param_1 + 0x2e0));
      (**(code **)(**(int **)(param_1 + 0x270) + 0x4c))(*(int **)(param_1 + 0x270),local_2c);
    }
    if (*PTR_DAT_007823a4 != '\0') {
      if (local_c == *(int *)(param_1 + 0x348)) {
        FUN_0045bc24(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x48),0xff);
      }
      else {
        FUN_0045bc24(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x48),0xf8f8f8);
      }
      FUN_0045bda4(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x48),0);
      FUN_00438c38(0,local_10,*(int *)(param_1 + 0x2dc) * 5 + -3,local_2c,
                   local_10 + *(int *)(param_1 + 0x2e0));
      (**(code **)(**(int **)(param_1 + 0x270) + 0x4c))(*(int **)(param_1 + 0x270),local_2c);
      FUN_0045b850(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x44),0xaa6666);
      FUN_0045b954(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x44),4);
      (**(code **)(**(int **)(param_1 + 0x270) + 0x5c))
                (*(int **)(param_1 + 0x270),*(int *)(param_1 + 0x2dc) * 5 + -3,local_10);
      (**(code **)(**(int **)(param_1 + 0x270) + 0x58))
                (*(int **)(param_1 + 0x270),*(int *)(param_1 + 0x2dc) * 5 + -3,
                 local_10 + *(int *)(param_1 + 0x2e0));
      FUN_0045bda4(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x48),1);
      FUN_0045b0d0(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x40),0xcc9999);
      FUN_0045b498(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x40),0);
      if (local_c == *(int *)(param_1 + 0x2ec)) {
        FUN_0045b0d0(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x40),0xaa6666);
        FUN_0045b498(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x40),1);
      }
      iVar6 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
      if (local_c < iVar6) {
        local_34 = local_c + 1;
        local_30 = 0;
        FUN_00417d4c(&DAT_006b46d8,&local_34,0,&local_8);
        FUN_00408034(&local_38,*local_8);
        (**(code **)(**(int **)(param_1 + 0x270) + 0x88))
                  (*(int **)(param_1 + 0x270),0,local_10,local_38);
        FUN_00408034(&local_3c,local_8[1]);
        (**(code **)(**(int **)(param_1 + 0x270) + 0x88))
                  (*(int **)(param_1 + 0x270),*(undefined4 *)(param_1 + 0x2dc),local_10,local_3c);
        FUN_00408034(&local_40,local_8[2]);
        (**(code **)(**(int **)(param_1 + 0x270) + 0x88))
                  (*(int **)(param_1 + 0x270),*(int *)(param_1 + 0x2dc) * 2,local_10,local_40);
        FUN_00408034(&local_44,local_8[3]);
        (**(code **)(**(int **)(param_1 + 0x270) + 0x88))
                  (*(int **)(param_1 + 0x270),*(int *)(param_1 + 0x2dc) * 3,local_10,local_44);
      }
    }
    if (-1 < local_c) {
      iVar6 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
      if (local_c < iVar6) {
        if ((*PTR_DAT_007823a4 != '\0') &&
           (*(char *)(*(int *)(param_1 + 0x2d8) + 0xc + local_c * 0x10) != '\0')) {
          FUN_0045bc24(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x48),0x80);
          FUN_0045bda4(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x48),0);
          FUN_00438c38(*(int *)(param_1 + 0x2dc) * 4 + 1,local_10,*(int *)(param_1 + 0x2dc) * 5 + -4
                       ,local_2c,local_10 + *(int *)(param_1 + 0x2e0));
          (**(code **)(**(int **)(param_1 + 0x270) + 0x4c))(*(int **)(param_1 + 0x270),local_2c);
        }
        iVar6 = *(int *)(param_1 + 0x2f8);
        iVar4 = FUN_00409a18(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 4 + local_c * 0x10));
        iVar5 = *(int *)(param_1 + 0x2f8) + *(int *)(param_1 + 0x2e8);
        iVar7 = iVar4 + -1;
        if (iVar5 < iVar4 + -1) {
          iVar7 = iVar5;
        }
        if (iVar6 <= iVar7) {
          local_1c = (iVar7 - iVar6) + 1;
          do {
            iVar7 = (iVar6 - *(int *)(param_1 + 0x2f8)) * *(int *)(param_1 + 0x2dc);
            if (*PTR_DAT_007823a4 != '\0') {
              iVar7 = iVar7 + *(int *)(param_1 + 0x2dc) * 5;
            }
            if ((local_c == *(int *)(param_1 + 0x310)) && (iVar6 == *(int *)(param_1 + 0x314))) {
              puStack_58 = (undefined1 *)
                           (*(int *)(*(int *)(param_1 + 0x2d8) + 4 + local_c * 0x10) + iVar6 * 0xc);
              uStack_5c = 2;
              FUN_006b48ec(param_1,iVar7,local_10);
            }
            else if ((local_c == *(int *)(param_1 + 0x2ec)) &&
                    ((iVar6 == *(int *)(param_1 + 0x2f0) && (-1 < *(int *)(param_1 + 0x310))))) {
              puStack_58 = (undefined1 *)
                           (*(int *)(*(int *)(param_1 + 0x2d8) + 4 + local_c * 0x10) + iVar6 * 0xc);
              uStack_5c = 2;
              FUN_006b48ec(param_1,iVar7,local_10);
            }
            else if ((local_c == *(int *)(param_1 + 0x2ec)) &&
                    ((iVar6 == *(int *)(param_1 + 0x2f0) && (*(char *)(param_1 + 0x30c) != '\0'))))
            {
              puStack_58 = (undefined1 *)
                           (*(int *)(*(int *)(param_1 + 0x2d8) + 4 + local_c * 0x10) + iVar6 * 0xc);
              uStack_5c = 3;
              FUN_006b48ec(param_1,iVar7,local_10);
            }
            else if ((iVar6 < local_14) || (local_18 < iVar6)) {
              if (*(char *)(*(int *)(*(int *)(param_1 + 0x2d8) + 4 + local_c * 0x10) + 8 +
                           iVar6 * 0xc) == '\0') {
                puStack_58 = (undefined1 *)
                             (*(int *)(*(int *)(param_1 + 0x2d8) + 4 + local_c * 0x10) + iVar6 * 0xc
                             );
                uStack_5c = 0;
                FUN_006b48ec(param_1,iVar7,local_10);
              }
              else {
                puStack_58 = (undefined1 *)
                             (*(int *)(*(int *)(param_1 + 0x2d8) + 4 + local_c * 0x10) + iVar6 * 0xc
                             );
                uStack_5c = 4;
                FUN_006b48ec(param_1,iVar7,local_10);
              }
            }
            else {
              puStack_58 = (undefined1 *)
                           (*(int *)(*(int *)(param_1 + 0x2d8) + 4 + local_c * 0x10) + iVar6 * 0xc);
              uStack_5c = 1;
              FUN_006b48ec(param_1,iVar7,local_10);
            }
            iVar6 = iVar6 + 1;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
        }
        FUN_006b46e0(param_1);
      }
    }
  }
  puVar2 = puStack_54;
  *in_FS_OFFSET = uStack_5c;
  puStack_54 = &LAB_006b46bd;
  puStack_58 = (undefined1 *)0x6b46ad;
  thunk_FUN_00406e80(&local_44,4,puVar2);
  puStack_58 = (undefined1 *)0x6b46b5;
  thunk_FUN_00406e5c(&local_8);
  return;
}
