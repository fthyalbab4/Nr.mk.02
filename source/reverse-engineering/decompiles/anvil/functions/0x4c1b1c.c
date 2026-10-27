// rea decompile_all
// name: FUN_004c1b1c
// address: 0x4c1b1c
// body: available
// range: 0x4c1b1c-0x4c1cc9 inclusive
// range: 0x4c1cdb-0x4c1dfb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c1c6b (push 0x4c1cca followed by fs-segment stack chaining); handler 0x4c1cca lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c1b1c(int param_1,HDC param_2,int param_3)

{
  BOOL BVar1;
  int iVar2;
  COLORREF CVar3;
  HBRUSH pHVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar6;
  HBRUSH pHVar7;
  RECT local_2c;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  HDC local_c;
  int local_8;

  local_c = param_2;
  local_8 = param_1;
  if (((*(char *)(param_1 + 0x1ec) != '\0') && (*(char *)(param_1 + 0x1eb) != '\0')) &&
     (*(int *)(param_1 + 0x1c8) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x1c8) + 0x20))(*(int **)(param_1 + 0x1c8),param_2);
  }
  if (*(int *)(local_8 + 0x1dc) != 0) {
    local_10 = 0;
    if (param_3 != 0) {
      local_10 = FUN_00438f2c(*(int *)(local_8 + 0x1dc),param_3);
      if (local_10 < 0) {
        local_10 = 0;
      }
    }
    local_14 = *(int *)(*(int *)(local_8 + 0x1dc) + 8);
    if (local_10 < local_14) {
      do {
        local_1c = FUN_00438ec4(*(undefined4 *)(local_8 + 0x1dc),local_10);
        if (((*(char *)(local_1c + 0x59) != '\0') &&
            (((*(byte *)(local_1c + 0x1c) & 0x10) == 0 || ((*(byte *)(local_1c + 0x55) & 8) == 0))))
           || (((*(byte *)(local_1c + 0x1c) & 0x10) != 0 &&
               (((*(byte *)(local_1c + 0x55) & 8) == 0 && ((*(byte *)(local_1c + 0x51) & 4) == 0))))
              )) {
          FUN_0040c354(*(int *)(local_1c + 0x40),*(undefined4 *)(local_1c + 0x44),
                       *(int *)(local_1c + 0x40) + *(int *)(local_1c + 0x48));
          BVar1 = RectVisible(local_c,&local_2c);
          if (BVar1 != 0) {
            if ((*(byte *)(local_8 + 0x54) & 0x80) != 0) {
              *(uint *)(local_1c + 0x54) = *(uint *)(local_1c + 0x54) | 0x80;
            }
            local_18 = SaveDC(local_c);
            uVar6 = *in_FS_OFFSET;
            *in_FS_OFFSET = &stack0xffffffbc;
            FUN_004b9a30(local_c,*(undefined4 *)(local_1c + 0x40),*(undefined4 *)(local_1c + 0x44));
            IntersectClipRect(local_c,0,0,*(int *)(local_1c + 0x48),*(int *)(local_1c + 0x4c));
            FUN_004bcb48(local_1c,0xf,local_c,0);
            *in_FS_OFFSET = uVar6;
            RestoreDC(local_c,local_18);
            return;
          }
        }
        local_10 = local_10 + 1;
      } while (local_10 < local_14);
    }
  }
  if ((*(int *)(local_8 + 0x1e0) != 0) &&
     (iVar5 = *(int *)(*(int *)(local_8 + 0x1e0) + 8), -1 < iVar5 + -1)) {
    local_10 = 0;
    do {
      iVar2 = FUN_00438ec4(*(undefined4 *)(local_8 + 0x1e0),local_10);
      if (((*(char *)(iVar2 + 0x1e9) != '\0') && ((*(byte *)(iVar2 + 0x50) & 0x10) != 0)) &&
         ((((*(byte *)(iVar2 + 0x1c) & 0x10) == 0 && (*(char *)(iVar2 + 0x59) != '\0')) ||
          ((((*(byte *)(iVar2 + 0x1c) & 0x10) != 0 && ((*(byte *)(iVar2 + 0x51) & 4) == 0)) &&
           ((*(byte *)(iVar2 + 0x55) & 8) == 0)))))) {
        CVar3 = FUN_0045b0f4(0xff000010);
        pHVar4 = CreateSolidBrush(CVar3);
        pHVar7 = pHVar4;
        FUN_0040c354(*(int *)(iVar2 + 0x40) + -1,*(int *)(iVar2 + 0x44) + -1,
                     *(int *)(iVar2 + 0x40) + *(int *)(iVar2 + 0x48));
        FrameRect(local_c,&local_2c,pHVar7);
        DeleteObject(pHVar4);
        CVar3 = FUN_0045b0f4(0xff000014);
        pHVar4 = CreateSolidBrush(CVar3);
        pHVar7 = pHVar4;
        FUN_0040c354(*(undefined4 *)(iVar2 + 0x40),*(undefined4 *)(iVar2 + 0x44),
                     *(int *)(iVar2 + 0x40) + *(int *)(iVar2 + 0x48) + 1);
        FrameRect(local_c,&local_2c,pHVar7);
        DeleteObject(pHVar4);
      }
      local_10 = local_10 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}
