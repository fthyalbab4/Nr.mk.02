// rea decompile_all
// name: FUN_0052d090
// address: 0x52d090
// body: available
// range: 0x52d090-0x52d2c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052d090(int param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  DWORD DVar4;
  HPALETTE pHVar5;
  HDC pHVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  BOOL BVar14;
  undefined1 *puVar15;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  char local_b;
  char local_a;
  char local_9;
  int local_8;

  local_8 = param_1;
  if (((*(byte *)(param_1 + 0x58) & 0x20) == 0) ||
     (DVar4 = GetObjectType(*(HGDIOBJ *)(param_1 + 0x74)), DVar4 == 3)) {
    iVar12 = 0;
    if (((*(byte *)(local_8 + 0x58) & 0x80) == 0) || (*(int *)(local_8 + 0x60) != 0)) {
      local_9 = '\0';
    }
    else {
      local_9 = '\x01';
    }
    local_a = '\0';
    bVar3 = false;
    local_b = '\0';
    bVar1 = *(byte *)(local_8 + 100);
    if (bVar1 < 2) {
      iVar12 = FUN_00463124(*(undefined4 *)(local_8 + 0x68));
      piVar7 = (int *)FUN_00463124(*(undefined4 *)(local_8 + 0x68));
      (**(code **)(*piVar7 + 0x10))(piVar7,&local_1c);
      bVar3 = true;
    }
    else if (bVar1 == 2) {
      iVar12 = FUN_00463124(*(undefined4 *)(local_8 + 0x68));
      piVar7 = (int *)FUN_00463124(*(undefined4 *)(local_8 + 0x68));
      (**(code **)(*piVar7 + 0x10))(piVar7,&local_1c);
      bVar3 = true;
      local_b = '\x01';
    }
    else if (bVar1 == 3) {
      if (*(byte *)(local_8 + 0x65) < 2) {
        iVar12 = *(int *)(local_8 + 0x44);
        local_1c = *(undefined4 *)(local_8 + 0x48);
        uStack_18 = *(undefined4 *)(local_8 + 0x4c);
        uStack_14 = *(undefined4 *)(local_8 + 0x50);
        uStack_10 = *(undefined4 *)(local_8 + 0x54);
      }
      else if ((byte)(*(byte *)(local_8 + 0x65) - 2) < 2) {
        iVar12 = FUN_00463124(*(undefined4 *)(local_8 + 0x6c));
        piVar7 = (int *)FUN_00463124(*(undefined4 *)(local_8 + 0x6c));
        (**(code **)(*piVar7 + 0x10))(piVar7,&local_1c);
        local_a = '\x01';
        bVar3 = true;
      }
    }
    FUN_0052c584(*(undefined4 *)(*(int *)(local_8 + 0x40) + 0x2c),*(undefined4 *)(local_8 + 0x60));
    pHVar5 = (HPALETTE)FUN_00527f90();
    if (pHVar5 == (HPALETTE)0x0) {
      pHVar5 = *(HPALETTE *)PTR_DAT_00688a98;
    }
    BVar14 = 0;
    pHVar6 = (HDC)FUN_0045d4ec(iVar12);
    pHVar5 = SelectPalette(pHVar6,pHVar5,BVar14);
    pHVar6 = (HDC)FUN_0045d4ec(iVar12);
    RealizePalette(pHVar6);
    if (local_9 != '\0') {
      FUN_0052cd4c();
    }
    if (local_a != '\0') {
      piVar7 = (int *)FUN_00463124(*(undefined4 *)(local_8 + 0x68));
      (**(code **)(*piVar7 + 0x10))(piVar7,local_2c);
      puVar15 = local_2c;
      piVar7 = (int *)FUN_00463124(*(undefined4 *)(local_8 + 0x6c));
      (**(code **)(*piVar7 + 0x10))(piVar7,local_3c,*piVar7,puVar15);
      puVar13 = local_3c;
      uVar8 = FUN_00463124(*(undefined4 *)(local_8 + 0x68));
      uVar9 = FUN_00463124(*(undefined4 *)(local_8 + 0x6c));
      FUN_0045cac0(uVar9,puVar13,uVar8,puVar15);
    }
    if (iVar12 != 0) {
      uVar10 = (uint)((*(byte *)(local_8 + 0x58) & 2) != 0);
      uVar11 = (uint)((*(byte *)(local_8 + 0x59) & 1) != 0);
      uVar8 = FUN_0052c584(*(undefined4 *)(*(int *)(local_8 + 0x40) + 0x2c),
                           *(undefined4 *)(local_8 + 0x60));
      FUN_0052a584(uVar8,iVar12,&local_1c,uVar11,uVar10);
    }
    if (bVar3) {
      iVar2 = *(int *)(local_8 + 0x44);
      *(undefined4 *)(iVar2 + 0x54) = 0xcc0020;
      FUN_0045cac0(iVar2,local_8 + 0x48,iVar12,&local_1c);
    }
    if (pHVar5 != (HPALETTE)0x0) {
      BVar14 = 0;
      pHVar6 = (HDC)FUN_0045d4ec(iVar12);
      SelectPalette(pHVar6,pHVar5,BVar14);
    }
    if (local_b != '\0') {
      FUN_0052cd4c();
    }
    *(undefined1 *)(local_8 + 0x79) = 1;
  }
  else {
    FUN_00445ea4(local_8);
  }
  return;
}
