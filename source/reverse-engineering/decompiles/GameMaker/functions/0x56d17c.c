// rea decompile_all
// name: FUN_0056d17c
// address: 0x56d17c
// body: available
// range: 0x56d17c-0x56d563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056d17c(int param_1,int param_2,int param_3,byte param_4,undefined4 param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
  char cVar1;
  HDC pHVar2;
  BOOL BVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  byte bVar8;
  int aiStackY_1820 [1520];
  tagRECT *ptVar9;
  UINT UVar10;
  RECT *pRVar11;
  UINT UVar12;
  tagRECT local_44;
  RECT local_34;
  RECT local_24;
  char local_12;
  byte local_11;
  int local_10;
  int local_c;
  int local_8;

  bVar8 = 0;
  piVar4 = (int *)(param_9 + -4);
  local_34.top = param_8;
  local_c = param_3;
  local_8 = param_1;
  for (local_10 = param_2;
      (iVar7 = local_8, local_34.top < param_6 && (local_10 < *(int *)(*piVar4 + 0x2c0)));
      local_10 = local_10 + 1) {
    local_34.left = local_c;
    local_34.bottom = FUN_00571600(*piVar4,local_10);
    local_34.bottom = local_34.bottom + local_34.top;
    for (; (local_34.left < param_7 && (iVar7 < *(int *)(*piVar4 + 0x284))); iVar7 = iVar7 + 1) {
      local_34.right = FUN_005715e0(*piVar4,iVar7);
      local_34.right = local_34.right + local_34.left;
      if (local_34.left < local_34.right) {
        pRVar11 = &local_34;
        pHVar2 = (HDC)FUN_0045ce2c(*(undefined4 *)(*piVar4 + 0x270));
        BVar3 = RectVisible(pHVar2,pRVar11);
        if (BVar3 != 0) {
          local_11 = param_4;
          if ((iVar7 == *(int *)(*piVar4 + 0x328)) && (*(int *)(*piVar4 + 0x32c) == local_10)) {
            if ((*(byte *)(*piVar4 + 0x2b6) & 2) != 0) {
              local_11 = param_4 | 0x10;
            }
            if (*(char *)(*piVar4 + 0x330) != '\0') {
              local_11 = local_11 | 0x20;
            }
          }
          local_12 = FUN_0056c8b4(*piVar4);
          if (((local_12 != '\0') && (*(int *)(*piVar4 + 0x28c) == local_10)) &&
             (iVar7 == *(int *)(*piVar4 + 0x288))) {
            SetCaretPos(local_34.left,local_34.top);
            local_11 = local_11 | 2;
          }
          cVar1 = FUN_0056b4e0(iVar7,local_10,param_9 + -0x80);
          if (cVar1 != '\0') {
            local_11 = local_11 | 1;
          }
          if ((((local_11 & 2) == 0) || ((*(byte *)(*piVar4 + 0x2b5) & 4) == 0)) ||
             ((*(char *)(*piVar4 + 0x2fd) == '\0' || ((*(byte *)(*piVar4 + 0x1c) & 0x10) != 0)))) {
            if ((*(char *)(*piVar4 + 0x2fc) != '\0') || ((*(byte *)(*piVar4 + 0x1c) & 0x10) != 0)) {
              FUN_0045cd20(*(undefined4 *)(*piVar4 + 0x270),*(undefined4 *)(*piVar4 + 100));
              if (((local_11 & 1) == 0) ||
                 (((local_11 & 2) != 0 && ((*(uint *)(*piVar4 + 0x2b4) & 0x1020) == 0)))) {
                (**(code **)(*(int *)*piVar4 + 0x100))
                          ((int *)*piVar4,&local_34,param_5,local_10,iVar7,local_11);
              }
              else {
                (**(code **)(*(int *)*piVar4 + 0x104))
                          ((int *)*piVar4,&local_34,local_11,local_10,iVar7);
              }
            }
            local_24.left = local_34.left;
            puVar6 = (undefined4 *)((int)&local_24 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
            puVar5 = (undefined4 *)((int)&local_34 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
            *(undefined4 *)((int)&local_24 + (uint)bVar8 * -8 + 4) =
                 *(undefined4 *)((int)&local_34 + (uint)bVar8 * -8 + 4);
            *puVar6 = *puVar5;
            puVar6[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
            if ((local_11 & 0x20) != 0) {
              local_24.top = local_24.top + 1;
              local_24.left = local_24.left + 1;
            }
            (**(code **)(*(int *)*piVar4 + 0xfc))((int *)*piVar4,iVar7,local_10,local_11,&local_24);
            if (((((*(char *)(*piVar4 + 0x2fc) != '\0') && ((local_11 & 4) != 0)) &&
                 (*(char *)(*piVar4 + 0x1e9) != '\0')) &&
                ((*(int *)(param_9 + -0x84) != 0 || *(int *)(param_9 + -0x88) != 0 &&
                 (*(char *)(*piVar4 + 0x324) == '\0')))) && ((local_11 & 0x20) == 0)) {
              local_44.left = local_34.left;
              puVar6 = (undefined4 *)((int)&local_44 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
              puVar5 = (undefined4 *)((int)&local_34 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
              *(undefined4 *)((int)&local_44 + (uint)bVar8 * -8 + 4) =
                   *(undefined4 *)((int)&local_34 + (uint)bVar8 * -8 + 4);
              *puVar6 = *puVar5;
              puVar6[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
              if ((*(byte *)(param_9 + -0x84) & 4) == 0) {
                local_44.right = local_44.right + *(int *)(param_9 + -0x70);
              }
              else if ((*(byte *)(param_9 + -0x84) & 8) == 0) {
                local_44.bottom = local_44.bottom + *(int *)(param_9 + -0x40);
              }
              UVar12 = *(UINT *)(param_9 + -0x84);
              UVar10 = 4;
              ptVar9 = &local_44;
              pHVar2 = (HDC)FUN_0045ce2c(*(undefined4 *)(*piVar4 + 0x270));
              DrawEdge(pHVar2,ptVar9,UVar10,UVar12);
              UVar12 = *(UINT *)(param_9 + -0x88);
              UVar10 = 4;
              ptVar9 = &local_44;
              pHVar2 = (HDC)FUN_0045ce2c(*(undefined4 *)(*piVar4 + 0x270));
              DrawEdge(pHVar2,ptVar9,UVar10,UVar12);
            }
            if (((*(char *)(*piVar4 + 0x2fc) != '\0') && ((*(byte *)(*piVar4 + 0x1c) & 0x10) == 0))
               && (((local_11 & 2) != 0 &&
                   (((*(uint *)(*piVar4 + 0x2b4) & 0x2400) != 0x2400 &&
                    ((*(byte *)(*piVar4 + 0x2b5) & 0x10) == 0)))))) {
              local_44.left = local_34.left;
              puVar6 = (undefined4 *)((int)&local_44 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
              puVar5 = (undefined4 *)((int)&local_34 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
              *(undefined4 *)((int)&local_44 + (uint)bVar8 * -8 + 4) =
                   *(undefined4 *)((int)&local_34 + (uint)bVar8 * -8 + 4);
              *puVar6 = *puVar5;
              puVar6[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
              if ((*(char *)(*piVar4 + 0x324) == '\x01') && (5 < *(int *)PTR_DAT_00781bfc)) {
                InflateRect(&local_44,-1,-1);
              }
              FUN_0045bda4(*(undefined4 *)(*(int *)(*piVar4 + 0x270) + 0x48),0);
              cVar1 = FUN_00405d08(*piVar4);
              if (cVar1 == '\0') {
                ptVar9 = &local_44;
                pHVar2 = (HDC)FUN_0045ce2c(*(undefined4 *)(*piVar4 + 0x270));
                DrawFocusRect(pHVar2,ptVar9);
              }
              else {
                local_24.left = local_44.left;
                puVar6 = (undefined4 *)((int)&local_24 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
                puVar5 = (undefined4 *)((int)&local_44 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
                *(undefined4 *)((int)&local_24 + (uint)bVar8 * -8 + 4) =
                     *(undefined4 *)((int)&local_44 + (uint)bVar8 * -8 + 4);
                *puVar6 = *puVar5;
                puVar6[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
                local_24.left = local_44.right;
                local_24.right = local_44.left;
                pRVar11 = &local_24;
                pHVar2 = (HDC)FUN_0045ce2c(*(undefined4 *)(*piVar4 + 0x270));
                DrawFocusRect(pHVar2,pRVar11);
              }
            }
          }
        }
      }
      local_34.left = *(int *)(param_9 + -0x70) + local_34.right;
    }
    local_34.top = *(int *)(param_9 + -0x40) + local_34.bottom;
  }
  return;
}
