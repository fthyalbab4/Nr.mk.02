// rea decompile_all
// name: FUN_006ccba0
// address: 0x6ccba0
// body: available
// range: 0x6ccba0-0x6cceff inclusive
// range: 0x6ccf11-0x6ccf2a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ccbc1 (push 0x6ccf2b followed by fs-segment stack chaining); handler 0x6ccf2b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ccbd3 (push 0x6ccf00 followed by fs-segment stack chaining); handler 0x6ccf00 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ccba0(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  LPCWSTR pFileName;
  HRSRC hResInfo;
  HGLOBAL hResData;
  DWORD cb;
  int iVar7;
  uint uVar8;
  undefined4 *in_FS_OFFSET;
  BOOL BVar9;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  WORD local_22;
  undefined2 *local_20;
  undefined2 *local_1c;
  HMODULE local_18;
  HANDLE local_14;
  undefined4 *local_10;
  undefined1 local_9;
  undefined4 local_8;

  puStack_38 = (undefined1 *)0x6ccbb6;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_3c = &LAB_006ccf2b;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  local_9 = 0;
  puStack_48 = &LAB_006ccf00;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  puStack_44 = &stack0xfffffffc;
  puStack_38 = &stack0xfffffffc;
  local_10 = (undefined4 *)FUN_00405a4c(&LAB_00433630,1);
  (**(code **)(*param_2 + 0x60))(param_2,local_10);
  (**(code **)*local_10)();
  iVar5 = FUN_0040431c();
  FUN_0043f254(local_10);
  uVar6 = (**(code **)*local_10)();
  FUN_0043f488(local_10,iVar5,uVar6);
  uVar6 = (**(code **)*local_10)();
  cVar4 = FUN_006ccb08(iVar5,uVar6);
  if (cVar4 == '\0') {
    *in_FS_OFFSET = uStack_4c;
  }
  else {
    BVar9 = 0;
    pFileName = (LPCWSTR)FUN_00407f44(local_8);
    local_14 = BeginUpdateResourceW(pFileName,BVar9);
    if (local_14 == (HANDLE)0x0) {
      *in_FS_OFFSET = uStack_4c;
    }
    else {
      local_18 = LoadLibraryExW(pFileName,(HANDLE)0x0,2);
      if (local_18 == (HMODULE)0x0) {
        *in_FS_OFFSET = uStack_4c;
      }
      else {
        hResInfo = FindResourceW(local_18,L"MAINICON",(LPCWSTR)&DAT_0000000e);
        if (hResInfo == (HRSRC)0x0) {
          *in_FS_OFFSET = uStack_4c;
        }
        else {
          hResData = LoadResource(local_18,hResInfo);
          if (hResData == (HGLOBAL)0x0) {
            *in_FS_OFFSET = uStack_4c;
          }
          else {
            local_1c = LockResource(hResData);
            if (local_1c == (undefined2 *)0x0) {
              *in_FS_OFFSET = uStack_4c;
            }
            else {
              cVar4 = FUN_006ccb7c(local_18,0xe,L"MAINICON",&local_22);
              if (cVar4 == '\0') {
                *in_FS_OFFSET = uStack_4c;
              }
              else {
                BVar9 = UpdateResourceW(local_14,(LPCWSTR)&DAT_0000000e,L"MAINICON",local_22,
                                        (LPVOID)0x0,0);
                if (BVar9 == 0) {
                  *in_FS_OFFSET = uStack_4c;
                }
                else {
                  uVar8 = (uint)(ushort)local_1c[2];
                  if (-1 < (int)(uVar8 - 1)) {
                    iVar7 = 0;
                    do {
                      cVar4 = FUN_006ccb7c(local_18,3,local_1c[iVar7 * 7 + 9],&local_22);
                      if (cVar4 == '\0') {
                        *in_FS_OFFSET = uStack_4c;
                        goto LAB_006ccf15;
                      }
                      BVar9 = UpdateResourceW(local_14,(LPCWSTR)0x3,
                                              (LPCWSTR)(uint)(ushort)local_1c[iVar7 * 7 + 9],
                                              local_22,(LPVOID)0x0,0);
                      if (BVar9 == 0) {
                        *in_FS_OFFSET = uStack_4c;
                        goto LAB_006ccf15;
                      }
                      iVar7 = iVar7 + 1;
                      uVar8 = uVar8 - 1;
                    } while (uVar8 != 0);
                  }
                  cb = (uint)*(ushort *)(iVar5 + 4) * 0xe + 6;
                  local_20 = (undefined2 *)FUN_0040431c(cb);
                  *local_20 = *local_1c;
                  local_20[1] = local_1c[1];
                  uVar2 = *(ushort *)(iVar5 + 4);
                  local_20[2] = uVar2;
                  uVar8 = (uint)uVar2;
                  if (-1 < (int)(uVar8 - 1)) {
                    iVar7 = 0;
                    do {
                      puVar1 = (undefined4 *)(local_20 + iVar7 * 7 + 3);
                      *puVar1 = *(undefined4 *)(iVar5 + 6 + iVar7 * 0x10);
                      puVar1[1] = *(undefined4 *)(iVar5 + 10 + iVar7 * 0x10);
                      puVar1[2] = *(undefined4 *)(iVar5 + 0xe + iVar7 * 0x10);
                      local_20[iVar7 * 7 + 9] = (short)iVar7 + 1;
                      iVar7 = iVar7 + 1;
                      uVar8 = uVar8 - 1;
                    } while (uVar8 != 0);
                  }
                  uVar8 = (uint)(ushort)local_20[2];
                  if (-1 < (int)(uVar8 - 1)) {
                    iVar7 = 0;
                    do {
                      BVar9 = UpdateResourceW(local_14,(LPCWSTR)0x3,
                                              (LPCWSTR)(uint)(ushort)local_20[iVar7 * 7 + 9],0x409,
                                              (LPVOID)(*(int *)(iVar5 + 0x12 + iVar7 * 0x10) + iVar5
                                                      ),*(DWORD *)(iVar5 + 0xe + iVar7 * 0x10));
                      if (BVar9 == 0) {
                        *in_FS_OFFSET = uStack_4c;
                        goto LAB_006ccf15;
                      }
                      iVar7 = iVar7 + 1;
                      uVar8 = uVar8 - 1;
                    } while (uVar8 != 0);
                  }
                  BVar9 = UpdateResourceW(local_14,(LPCWSTR)&DAT_0000000e,L"MAINICON",0x409,local_20
                                          ,cb);
                  if (BVar9 == 0) {
                    *in_FS_OFFSET = uStack_4c;
                  }
                  else {
                    FUN_00404338(local_20);
                    FreeLibrary(local_18);
                    BVar9 = EndUpdateResourceW(local_14,0);
                    if (BVar9 == 0) {
                      *in_FS_OFFSET = uStack_4c;
                    }
                    else {
                      FUN_00405a7c(local_10);
                      FUN_00404338(iVar5);
                      *in_FS_OFFSET = uStack_4c;
                      local_9 = 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_006ccf15:
  puVar3 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_006ccf32;
  puStack_3c = (undefined1 *)0x6ccf2a;
  thunk_FUN_00406e5c(&local_8,uStack_40,puVar3);
  return;
}
