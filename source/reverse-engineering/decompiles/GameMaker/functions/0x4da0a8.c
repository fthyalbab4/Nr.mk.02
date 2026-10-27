// rea decompile_all
// name: FUN_004da0a8
// address: 0x4da0a8
// body: available
// range: 0x4da0a8-0x4da539 inclusive
// range: 0x4da541-0x4daa06 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4da0bb (push 0x4daa07 followed by fs-segment stack chaining); handler 0x4daa07 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4da45b (push 0x4da53a followed by fs-segment stack chaining); handler 0x4da53a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004da0a8(void)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  HBITMAP pHVar7;
  LPRECT ptVar8;
  HDC pHVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *in_FS_OFFSET;
  bool bVar15;
  byte bVar16;
  int in_stack_00000004;
  undefined4 in_stack_ffffffbc;
  undefined1 *puVar17;
  UINT UVar18;
  UINT UVar19;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  bVar16 = 0;
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004daa07;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if ((*(char *)(in_stack_00000004 + -0x49) == '\0') ||
     (puVar17 = &stack0xfffffffc, *(char *)(in_stack_00000004 + -0x4a) == '\0')) {
    puVar17 = &stack0xfffffffc;
    if (*(char *)(in_stack_00000004 + -0x49) != '\0') {
      FUN_00503a6c();
      cVar2 = FUN_00503b78();
      puVar17 = puStack_18;
      if (cVar2 != '\0') goto LAB_004da0eb;
    }
  }
  else {
LAB_004da0eb:
    puStack_18 = puVar17;
    if (((*(byte *)(in_stack_00000004 + 0xc) & 1) == 0) &&
       ((*(byte *)(in_stack_00000004 + 0xc) & 0x40) == 0)) {
      puVar17 = puStack_18;
      if (*(char *)(in_stack_00000004 + 8) != '\0') {
        FUN_0045bc24(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0x48),0xff00001e);
        puVar17 = puStack_18;
      }
    }
    else {
      FUN_00503a6c();
      cVar2 = FUN_00503b78();
      if (cVar2 == '\0') {
        FUN_0045bc24(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0x48),0xff00000d);
      }
      else {
        FUN_0045bc24(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0x48),0xff00001d);
      }
      FUN_0045b0d0(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0x40),0xff00000e);
      puVar17 = puStack_18;
    }
  }
  puStack_18 = puVar17;
  if ((*(char *)(in_stack_00000004 + -0x33) == '\0') ||
     (*(char *)(in_stack_00000004 + -0x49) != '\0')) {
    (**(code **)(**(int **)(in_stack_00000004 + -0x28) + 0x4c))
              (*(int **)(in_stack_00000004 + -0x28),in_stack_00000004 + -0x10);
  }
  if (*(int *)(in_stack_00000004 + -0x30) == 0) {
    cVar2 = FUN_00405c98(*(undefined4 *)(in_stack_00000004 + -0x30),&PTR_FUN_004d7824);
    if (cVar2 == '\0') {
      *(undefined1 *)(in_stack_00000004 + -0x31) = 0;
    }
    else {
      *(undefined1 *)(in_stack_00000004 + -0x31) =
           *(undefined1 *)(*(int *)(in_stack_00000004 + -0x30) + 0x68);
    }
  }
  else {
    *(undefined1 *)(in_stack_00000004 + -0x31) = 0;
  }
  *(int *)(in_stack_00000004 + -0x20) = *(int *)(in_stack_00000004 + -0x10) + 1;
  iVar4 = *(int *)(in_stack_00000004 + -0xc) + 1;
  bVar15 = iVar4 == 0;
  *(int *)(in_stack_00000004 + -0x1c) = iVar4;
  FUN_00408640(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x24) + 0x34),&DAT_004daa20);
  if (bVar15) {
    (**(code **)(**(int **)(in_stack_00000004 + -0x28) + 0x4c))
              (*(int **)(in_stack_00000004 + -0x28),in_stack_00000004 + -0x10);
    *(undefined4 *)(in_stack_00000004 + -0x20) = 0;
    *(undefined4 *)(in_stack_00000004 + -0x18) = 0xfffffffc;
    *(undefined1 *)(in_stack_00000004 + -0x4b) = 0;
    goto LAB_004da6c5;
  }
  if (*(int *)(in_stack_00000004 + -0x2c) == 0) {
LAB_004da275:
    uVar3 = 0;
  }
  else {
    iVar4 = *(int *)(*(int *)(in_stack_00000004 + -0x24) + 0x40);
    if (iVar4 < 0) {
LAB_004da24e:
      if (*(char *)(*(int *)(in_stack_00000004 + -0x24) + 0x38) == '\0') goto LAB_004da275;
      piVar1 = *(int **)(*(int *)(in_stack_00000004 + -0x24) + 0x4c);
      if (piVar1 != (int *)0x0) {
        cVar2 = (**(code **)(*piVar1 + 0x20))();
        if (cVar2 == '\0') goto LAB_004da275;
      }
    }
    else {
      iVar5 = FUN_00507098(*(undefined4 *)(in_stack_00000004 + -0x2c));
      if (iVar5 <= iVar4) goto LAB_004da24e;
    }
    uVar3 = 1;
  }
  *(undefined1 *)(in_stack_00000004 + -0x32) = uVar3;
  if (*(char *)(in_stack_00000004 + -0x32) == '\0') {
    piVar1 = *(int **)(*(int *)(in_stack_00000004 + -0x24) + 0x4c);
    if (piVar1 != (int *)0x0) {
      cVar2 = (**(code **)(*piVar1 + 0x20))();
      if (cVar2 == '\0') goto LAB_004da2ad;
    }
    if ((*(int *)(in_stack_00000004 + -0x2c) == 0) || (*(char *)(in_stack_00000004 + 8) != '\0')) {
      *(undefined4 *)(in_stack_00000004 + -0x18) = *(undefined4 *)(in_stack_00000004 + -0x20);
      *(undefined4 *)(in_stack_00000004 + -0x14) = *(undefined4 *)(in_stack_00000004 + -0x1c);
    }
    else {
      *(int *)(in_stack_00000004 + -0x18) =
           *(int *)(in_stack_00000004 + -0x20) +
           *(int *)(*(int *)(in_stack_00000004 + -0x2c) + 0x38);
      *(int *)(in_stack_00000004 + -0x14) =
           *(int *)(in_stack_00000004 + -0x1c) +
           *(int *)(*(int *)(in_stack_00000004 + -0x2c) + 0x34);
    }
    *(undefined1 *)(in_stack_00000004 + -0x4b) = 0;
  }
  else {
LAB_004da2ad:
    *(undefined1 *)(in_stack_00000004 + -0x4b) = 1;
    if (*(char *)(in_stack_00000004 + -0x32) == '\0') {
      *(int *)(in_stack_00000004 + -0x18) = *(int *)(in_stack_00000004 + -0x20) + 0x10;
      *(int *)(in_stack_00000004 + -0x14) = *(int *)(in_stack_00000004 + -0x1c) + 0x10;
    }
    else {
      *(int *)(in_stack_00000004 + -0x18) =
           *(int *)(in_stack_00000004 + -0x20) +
           *(int *)(*(int *)(in_stack_00000004 + -0x2c) + 0x38);
      *(int *)(in_stack_00000004 + -0x14) =
           *(int *)(in_stack_00000004 + -0x1c) +
           *(int *)(*(int *)(in_stack_00000004 + -0x2c) + 0x34);
    }
    if ((*(char *)(*(int *)(in_stack_00000004 + -0x24) + 0x38) != '\0') &&
       (*(char *)(in_stack_00000004 + -0x49) == '\0')) {
      *(int *)(in_stack_00000004 + -0x18) = *(int *)(in_stack_00000004 + -0x18) + 1;
      *(int *)(in_stack_00000004 + -0x14) = *(int *)(in_stack_00000004 + -0x14) + 1;
      *(undefined4 *)(in_stack_00000004 + -0x50) =
           *(undefined4 *)
            (*(int *)(*(int *)(*(int *)(in_stack_00000004 + -0x28) + 0x48) + 0x10) + 0x14);
      if ((*(byte *)(in_stack_00000004 + 0xc) & 1) == 0) {
        *(undefined4 *)(in_stack_00000004 + -0x50) =
             *(undefined4 *)
              (*(int *)(*(int *)(*(int *)(in_stack_00000004 + -0x28) + 0x48) + 0x10) + 0x14);
        uVar6 = FUN_0046619c(0xff00000f,0xff000014);
        FUN_0045bbf8(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0x48),uVar6);
        (**(code **)(**(int **)(in_stack_00000004 + -0x28) + 0x4c))
                  (*(int **)(in_stack_00000004 + -0x28),in_stack_00000004 + -0x20);
      }
      else {
        FUN_0045bc24(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0x48),0xff00000f);
        (**(code **)(**(int **)(in_stack_00000004 + -0x28) + 0x4c))
                  (*(int **)(in_stack_00000004 + -0x28),in_stack_00000004 + -0x20);
      }
      FUN_0045bc24(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0x48),
                   *(undefined4 *)(in_stack_00000004 + -0x50));
      *(int *)(in_stack_00000004 + -0x20) = *(int *)(in_stack_00000004 + -0x20) + 1;
      *(int *)(in_stack_00000004 + -0x1c) = *(int *)(in_stack_00000004 + -0x1c) + 1;
    }
    if (*(char *)(in_stack_00000004 + -0x32) == '\0') {
      puVar14 = (undefined4 *)(in_stack_00000004 + -0x44 + (uint)bVar16 * -8);
      puVar12 = (undefined4 *)(in_stack_00000004 + -0x1c + (uint)bVar16 * -8);
      *(undefined4 *)(in_stack_00000004 + -0x48) = *(undefined4 *)(in_stack_00000004 + -0x20);
      puVar13 = puVar14 + (uint)bVar16 * -2 + 1;
      puVar11 = puVar12 + (uint)bVar16 * -2 + 1;
      *puVar14 = *puVar12;
      *puVar13 = *puVar11;
      puVar13[(uint)bVar16 * -2 + 1] = puVar11[(uint)bVar16 * -2 + 1];
      iVar4 = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x24) + 0x4c) + 0x30))();
      if (iVar4 < *(int *)(in_stack_00000004 + -0x18) - *(int *)(in_stack_00000004 + -0x20)) {
        iVar4 = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x24) + 0x4c) + 0x30))();
        uVar10 = (*(int *)(in_stack_00000004 + -0x18) - *(int *)(in_stack_00000004 + -0x20)) - iVar4
        ;
        iVar4 = (int)uVar10 >> 1;
        if (iVar4 < 0) {
          iVar4 = iVar4 + (uint)((uVar10 & 1) != 0);
        }
        *(int *)(in_stack_00000004 + -0x20) = iVar4 + *(int *)(in_stack_00000004 + -0x20) + 1;
        iVar4 = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x24) + 0x4c) + 0x30))();
        *(int *)(in_stack_00000004 + -0x18) = iVar4 + *(int *)(in_stack_00000004 + -0x20);
      }
      iVar4 = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x24) + 0x4c) + 0x24))();
      if (iVar4 < *(int *)(in_stack_00000004 + -0x14) - *(int *)(in_stack_00000004 + -0x1c)) {
        iVar4 = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x24) + 0x4c) + 0x24))();
        uVar10 = (*(int *)(in_stack_00000004 + -0x14) - *(int *)(in_stack_00000004 + -0x1c)) - iVar4
        ;
        iVar4 = (int)uVar10 >> 1;
        if (iVar4 < 0) {
          iVar4 = iVar4 + (uint)((uVar10 & 1) != 0);
        }
        *(int *)(in_stack_00000004 + -0x1c) = iVar4 + *(int *)(in_stack_00000004 + -0x1c) + 1;
        iVar4 = (**(code **)(**(int **)(*(int *)(in_stack_00000004 + -0x24) + 0x4c) + 0x24))();
        *(int *)(in_stack_00000004 + -0x14) = iVar4 + *(int *)(in_stack_00000004 + -0x1c);
      }
      (**(code **)(**(int **)(in_stack_00000004 + -0x28) + 0x80))
                (*(int **)(in_stack_00000004 + -0x28),in_stack_00000004 + -0x20,
                 *(undefined4 *)(*(int *)(in_stack_00000004 + -0x24) + 0x4c));
      puVar14 = (undefined4 *)(in_stack_00000004 + -0x1c + (uint)bVar16 * -8);
      puVar12 = (undefined4 *)(in_stack_00000004 + -0x44 + (uint)bVar16 * -8);
      *(undefined4 *)(in_stack_00000004 + -0x20) = *(undefined4 *)(in_stack_00000004 + -0x48);
      puVar13 = puVar14 + (uint)bVar16 * -2 + 1;
      puVar11 = puVar12 + (uint)bVar16 * -2 + 1;
      *puVar14 = *puVar12;
      *puVar13 = *puVar11;
      puVar13[(uint)bVar16 * -2 + 1] = puVar11[(uint)bVar16 * -2 + 1];
    }
    else {
      iVar4 = *(int *)(*(int *)(in_stack_00000004 + -0x24) + 0x40);
      if (iVar4 < 0) {
LAB_004da43e:
        uVar6 = FUN_00462144(&PTR_FUN_004587d4,1);
        *(undefined4 *)(in_stack_00000004 + -0x54) = uVar6;
        puVar17 = &LAB_004da53a;
        *in_FS_OFFSET = &stack0xffffffd4;
        (**(code **)(**(int **)(in_stack_00000004 + -0x54) + 0x40))
                  (*(int **)(in_stack_00000004 + -0x54),1);
        pHVar7 = LoadBitmapW((HINSTANCE)0x0,(LPCWSTR)&DAT_00007ff8);
        FUN_00463a4c(*(undefined4 *)(in_stack_00000004 + -0x54),pHVar7);
        *(undefined4 *)(in_stack_00000004 + -0x50) =
             *(undefined4 *)(*(int *)(*(int *)(in_stack_00000004 + -0x28) + 0x40) + 0x18);
        FUN_0045b0d0(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0x40),0xff000012);
        uVar6 = *(undefined4 *)(in_stack_00000004 + -0x54);
        iVar4 = (**(code **)(**(int **)(in_stack_00000004 + -0x54) + 0x24))();
        uVar10 = (*(int *)(in_stack_00000004 + -0x14) - *(int *)(in_stack_00000004 + -0x1c)) - iVar4
        ;
        iVar4 = (int)uVar10 >> 1;
        if (iVar4 < 0) {
          iVar4 = iVar4 + (uint)((uVar10 & 1) != 0);
        }
        iVar5 = iVar4 + *(int *)(in_stack_00000004 + -0x1c) + 1;
        iVar4 = (**(code **)(**(int **)(in_stack_00000004 + -0x54) + 0x30))();
        uVar10 = (*(int *)(in_stack_00000004 + -0x18) - *(int *)(in_stack_00000004 + -0x20)) - iVar4
        ;
        iVar4 = (int)uVar10 >> 1;
        if (iVar4 < 0) {
          iVar4 = iVar4 + (uint)((uVar10 & 1) != 0);
        }
        (**(code **)(**(int **)(in_stack_00000004 + -0x28) + 0x3c))
                  (*(int **)(in_stack_00000004 + -0x28),
                   iVar4 + *(int *)(in_stack_00000004 + -0x20) + 1,iVar5);
        FUN_0045b0d0(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0x40),
                     *(undefined4 *)(in_stack_00000004 + -0x50));
        *in_FS_OFFSET = uVar6;
        FUN_00405a7c(*(undefined4 *)(in_stack_00000004 + -0x54),uVar6,puVar17);
        return;
      }
      iVar5 = FUN_00507098(*(undefined4 *)(in_stack_00000004 + -0x2c));
      if (iVar5 <= iVar4) goto LAB_004da43e;
      FUN_005077bc(*(undefined4 *)(in_stack_00000004 + -0x2c),
                   *(undefined4 *)(in_stack_00000004 + -0x28),
                   *(undefined4 *)(in_stack_00000004 + -0x20));
    }
    if (*(char *)(*(int *)(in_stack_00000004 + -0x24) + 0x38) != '\0') {
      *(int *)(in_stack_00000004 + -0x18) = *(int *)(in_stack_00000004 + -0x18) + -1;
      *(int *)(in_stack_00000004 + -0x14) = *(int *)(in_stack_00000004 + -0x14) + -1;
    }
  }
LAB_004da6c5:
  *(int *)(in_stack_00000004 + -0x20) = *(int *)(in_stack_00000004 + -0x20) + -1;
  *(int *)(in_stack_00000004 + -0x1c) = *(int *)(in_stack_00000004 + -0x1c) + -1;
  *(int *)(in_stack_00000004 + -0x18) = *(int *)(in_stack_00000004 + -0x18) + 2;
  *(int *)(in_stack_00000004 + -0x14) = *(int *)(in_stack_00000004 + -0x14) + 2;
  if (((*(char *)(*(int *)(in_stack_00000004 + -0x24) + 0x38) != '\0') ||
      ((*(char *)(in_stack_00000004 + -0x33) != '\0' &&
       (*(char *)(in_stack_00000004 + -0x4b) != '\0')))) &&
     (*(char *)(in_stack_00000004 + -0x49) == '\0')) {
    UVar19 = 0xf;
    UVar18 = *(UINT *)(&DAT_00778a30 +
                      (uint)*(byte *)(*(int *)(in_stack_00000004 + -0x24) + 0x38) * 4);
    ptVar8 = (LPRECT)(in_stack_00000004 + -0x20);
    pHVar9 = (HDC)FUN_0045ce2c(*(undefined4 *)(in_stack_00000004 + -0x28));
    DrawEdge(pHVar9,ptVar8,UVar18,UVar19);
  }
  if (*(char *)(in_stack_00000004 + -0x33) != '\0') {
    if (*(char *)(in_stack_00000004 + -0x4b) != '\0') {
      *(int *)(in_stack_00000004 + -0x10) = *(int *)(in_stack_00000004 + -0x18) + 1;
    }
    if ((*(char *)(in_stack_00000004 + -0x55) == '\0') || (*(char *)(in_stack_00000004 + 8) == '\0')
       ) {
      FUN_0045bc24(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0x48),0xff00000d);
    }
    (**(code **)(**(int **)(in_stack_00000004 + -0x28) + 0x4c))
              (*(int **)(in_stack_00000004 + -0x28),in_stack_00000004 + -0x10);
  }
  if (((*(char *)(in_stack_00000004 + 8) != '\0') && (*(char *)(in_stack_00000004 + -0x55) != '\0'))
     && ((*(char *)(in_stack_00000004 + -0x49) == '\0' ||
         (*(char *)(in_stack_00000004 + -0x4a) == '\0')))) {
    if (*(char *)(in_stack_00000004 + -0x33) == '\0') {
      if ((*(byte *)(in_stack_00000004 + 0xc) & 0x40) != 0) {
        UVar19 = 0xf;
        UVar18 = 4;
        ptVar8 = (LPRECT)(in_stack_00000004 + -0x10);
        pHVar9 = (HDC)FUN_0045ce2c(*(undefined4 *)(in_stack_00000004 + -0x28));
        DrawEdge(pHVar9,ptVar8,UVar18,UVar19);
      }
    }
    else {
      UVar19 = 0xf;
      UVar18 = 2;
      ptVar8 = (LPRECT)(in_stack_00000004 + -0x10);
      pHVar9 = (HDC)FUN_0045ce2c(*(undefined4 *)(in_stack_00000004 + -0x28));
      DrawEdge(pHVar9,ptVar8,UVar18,UVar19);
    }
    if (*(char *)(in_stack_00000004 + -0x33) == '\0') {
      FUN_0040c268(in_stack_00000004 + -0x10,0,0xffffffff);
    }
  }
  if ((*(char *)(in_stack_00000004 + -0x33) == '\0') ||
     (*(char *)(in_stack_00000004 + -0x4b) == '\0')) {
    *(int *)(in_stack_00000004 + -0x10) = *(int *)(in_stack_00000004 + -0x18) + 1;
  }
  *(int *)(in_stack_00000004 + -0x10) = *(int *)(in_stack_00000004 + -0x10) + 2;
  *(int *)(in_stack_00000004 + -8) = *(int *)(in_stack_00000004 + -8) + -1;
  *(uint *)(in_stack_00000004 + -0x38) =
       (uint)(*(ushort *)(&DAT_00778a28 + (uint)*(byte *)(in_stack_00000004 + -0x31) * 2) | 0x60);
  if ((*(char *)(in_stack_00000004 + -0x56) != '\0') &&
     ((*(byte *)(in_stack_00000004 + 0xd) & 1) != 0)) {
    *(uint *)(in_stack_00000004 + -0x38) = *(uint *)(in_stack_00000004 + -0x38) | 0x100000;
  }
  puVar14 = (undefined4 *)(in_stack_00000004 + -0x44 + (uint)bVar16 * -8);
  puVar12 = (undefined4 *)(in_stack_00000004 + -0xc + (uint)bVar16 * -8);
  *(undefined4 *)(in_stack_00000004 + -0x48) = *(undefined4 *)(in_stack_00000004 + -0x10);
  puVar13 = puVar14 + (uint)bVar16 * -2 + 1;
  puVar11 = puVar12 + (uint)bVar16 * -2 + 1;
  *puVar14 = *puVar12;
  *puVar13 = *puVar11;
  puVar13[(uint)bVar16 * -2 + 1] = puVar11[(uint)bVar16 * -2 + 1];
  if ((*(byte *)(in_stack_00000004 + 0xc) & 0x20) != 0) {
    FUN_0045b498(*(undefined4 *)(*(int *)(in_stack_00000004 + -0x28) + 0x40),1);
  }
  FUN_004d915c(*(undefined4 *)(in_stack_00000004 + -0x24),*(undefined4 *)(in_stack_00000004 + -0x28)
               ,*(undefined4 *)(*(int *)(in_stack_00000004 + -0x24) + 0x34));
  uVar10 = (*(int *)(in_stack_00000004 + -0x3c) - *(int *)(in_stack_00000004 + -0x44)) -
           (*(int *)(in_stack_00000004 + -4) - *(int *)(in_stack_00000004 + -0xc));
  iVar4 = (int)uVar10 >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((uVar10 & 1) != 0);
  }
  FUN_0040c268(in_stack_00000004 + -0x10,0,iVar4);
  if ((((*(char *)(in_stack_00000004 + 8) != '\0') && (*(char *)(in_stack_00000004 + -0x33) != '\0')
       ) && (*(char *)(in_stack_00000004 + -0x55) != '\0')) &&
     (*(char *)(in_stack_00000004 + -0x49) == '\0')) {
    FUN_0040c268(in_stack_00000004 + -0x10,1,0);
  }
  iVar4 = 0x4da974;
  FUN_004d915c(*(undefined4 *)(in_stack_00000004 + -0x24),*(undefined4 *)(in_stack_00000004 + -0x28)
               ,*(undefined4 *)(*(int *)(in_stack_00000004 + -0x24) + 0x34),
               *(undefined4 *)(in_stack_00000004 + -0x38),*(undefined1 *)(in_stack_00000004 + -0x33)
               ,in_stack_00000004 + -0x10);
  if (((*(short *)(*(int *)(in_stack_00000004 + -0x24) + 0x60) != 0) &&
      (*(char *)(in_stack_00000004 + 8) == '\0')) &&
     ((*(char *)(in_stack_00000004 + -0x57) == '\0' ||
      (*(int *)(*(int *)(in_stack_00000004 + -0x24) + 0x5c) == 0)))) {
    *(undefined4 *)(in_stack_00000004 + -0x10) = *(undefined4 *)(in_stack_00000004 + -8);
    *(int *)(in_stack_00000004 + -8) = *(int *)(in_stack_00000004 + -0x40) + -10;
    iVar4 = in_stack_00000004 + -0x10;
    uVar10 = (uint)*(byte *)(in_stack_00000004 + -0x33);
    in_stack_ffffffbc = 2;
    FUN_004d801c(*(undefined2 *)(*(int *)(in_stack_00000004 + -0x24) + 0x60),&local_8);
    FUN_004d915c(*(undefined4 *)(in_stack_00000004 + -0x24),
                 *(undefined4 *)(in_stack_00000004 + -0x28),local_8,in_stack_ffffffbc,uVar10);
  }
  *in_FS_OFFSET = in_stack_ffffffbc;
  thunk_FUN_00406e5c(&local_8,in_stack_ffffffbc,iVar4,&LAB_004daa0e);
  return;
}
