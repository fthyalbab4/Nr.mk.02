// rea decompile_all
// name: FUN_00596920
// address: 0x596920
// body: available
// range: 0x596920-0x5969cb inclusive
// range: 0x5969ec-0x596cce inclusive
// range: 0x596cd6-0x596d72 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59694e (push 0x596d73 followed by fs-segment stack chaining); handler 0x596d73 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x596c21 (push 0x596ccf followed by fs-segment stack chaining); handler 0x596ccf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00596920(int *param_1,int *param_2,char param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  HDC hdc;
  uint uVar4;
  HPALETTE hpal;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  BYTE *pBVar8;
  int *piVar9;
  int iVar10;
  undefined4 *in_FS_OFFSET;
  byte bVar11;
  int aiStackY_1c24 [1498];
  undefined4 *puVar12;
  undefined1 *puVar13;
  undefined4 uStack_498;
  UINT iStart;
  UINT cEntries;
  int iVar14;
  tagPALETTEENTRY *pPalEntries;
  undefined4 uStack_468;
  undefined1 *puStack_464;
  undefined1 *puStack_460;
  undefined4 local_450;
  undefined4 local_44c;
  int local_448;
  int aiStack_444 [3];
  undefined1 local_436;
  char local_435;
  undefined1 local_434;
  undefined2 local_433;
  undefined2 local_431;
  undefined1 local_42f;
  undefined2 local_42e;
  undefined2 local_42c;
  undefined2 local_42a;
  undefined2 local_428;
  byte local_426;
  undefined1 local_425;
  tagPALETTEENTRY local_420 [256];
  int *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  char local_d;
  int *local_c;
  int *local_8;

  bVar11 = 0;
  puStack_460 = &stack0xfffffffc;
  puVar13 = &stack0xfffffffc;
  local_450 = 0;
  local_44c = 0;
  puStack_464 = &LAB_00596d73;
  uStack_468 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffffb98;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  uVar2 = (**(code **)(*param_1 + 0x30))();
  FUN_00438c38(0,0,uVar2);
  piVar9 = local_8 + (uint)bVar11 * -2 + 0x2e;
  local_8[0x2d] = local_448;
  *piVar9 = aiStack_444[(uint)bVar11 * -2];
  piVar9[(uint)bVar11 * -2 + 1] = aiStack_444[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  (piVar9 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
       (aiStack_444 + (uint)bVar11 * -2 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
  FUN_0040b75c(PTR_PTR_007819b8,&local_44c);
  uVar2 = local_44c;
  FUN_00405d08(local_8,local_8,0);
  uVar3 = FUN_00462b64(local_8);
  switch(uVar3 & 0x7f) {
  default:
    iVar14 = 0xc;
    FUN_00462a64(local_8);
    hdc = (HDC)FUN_0045ce2c();
    iVar14 = GetDeviceCaps(hdc,iVar14);
    if (iVar14 < 0) {
      iVar14 = iVar14 + 7;
    }
    cVar7 = (char)(iVar14 >> 3);
    break;
  case 1:
  case 2:
    FUN_00463dc0(local_8,3);
    cVar7 = '\x01';
    break;
  case 3:
    cVar7 = '\x01';
    break;
  case 4:
  case 5:
    cVar7 = '\x02';
    break;
  case 6:
    cVar7 = '\x03';
    break;
  case 7:
    cVar7 = '\x04';
  }
  cVar1 = (**(code **)(*local_8 + 0x20))();
  if (cVar1 == '\0') {
    local_436 = 0;
    local_435 = cVar7 == '\x01';
    if (local_d == '\0') {
      if (cVar7 == '\x01') {
        local_434 = 1;
      }
      else {
        local_434 = 2;
      }
    }
    else if (cVar7 == '\x01') {
      local_434 = 9;
    }
    else {
      local_434 = 10;
    }
    local_433 = 0;
    local_431 = 0x100;
    local_42f = 0x18;
    local_42e = 0;
    local_42c = 0;
    local_42a = (**(code **)(*local_8 + 0x30))();
    local_428 = (**(code **)(*local_8 + 0x24))();
    local_426 = cVar7 * '\b';
    uVar3 = FUN_00462be8(local_8,0);
    uVar4 = FUN_00462be8(local_8,1);
    if (uVar4 < uVar3) {
      local_425 = 0x20;
    }
    else {
      local_425 = 0;
    }
    (**(code **)(*local_c + 0x10))(local_c,&local_436,0x12);
    if (local_435 == '\x01') {
      pPalEntries = local_420;
      cEntries = 0x100;
      iStart = 0;
      hpal = (HPALETTE)(**(code **)(*local_8 + 0x28))();
      GetPaletteEntries(hpal,iStart,cEntries,pPalEntries);
      iVar14 = 0x100;
      pBVar8 = &local_420[0].peBlue;
      do {
        (**(code **)(*local_c + 0x10))(local_c,pBVar8,1);
        (**(code **)(*local_c + 0x10))(local_c,pBVar8 + -1,1);
        (**(code **)(*local_c + 0x10))(local_c,(tagPALETTEENTRY *)(pBVar8 + -2),1);
        pBVar8 = pBVar8 + 4;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    local_18 = (**(code **)(*local_8 + 0x30))();
    local_18 = local_18 * (uint)(local_426 >> 3);
    FUN_00405d08(local_8,local_8,2);
    uStack_498 = 0x596bd9;
    FUN_0040b75c(PTR_PTR_00782258,&local_450);
    uStack_498 = local_450;
    FUN_00405d08(local_8,local_8,0);
    if (local_d != '\0') {
      local_14 = 0;
      local_20 = (int *)FUN_005a1950(&PTR_FUN_0059f694,1,local_426);
      uVar2 = *in_FS_OFFSET;
      *in_FS_OFFSET = &stack0xfffffb5c;
      local_14 = FUN_0040431c(local_18 * 2);
      iVar14 = (**(code **)(*local_8 + 0x24))();
      if (-1 < iVar14 + -1) {
        iVar10 = 0;
        do {
          uVar5 = (**(code **)(*local_8 + 0x30))();
          puVar12 = &local_1c;
          uVar6 = FUN_00462be8(local_8,iVar10);
          (**(code **)(*local_20 + 0xc))(local_20,uVar6,local_14,puVar12,uVar5);
          FUN_0043f4c0(local_c,local_14,local_1c);
          FUN_00405d08(local_8,local_8,1,0,local_8 + 0x2d,0,0);
          OffsetRect((LPRECT)(local_8 + 0x2d),0,1);
          iVar10 = iVar10 + 1;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      *in_FS_OFFSET = uVar2;
      if (local_14 != 0) {
        FUN_00404338(local_14,uVar2,puVar13);
      }
      FUN_00405a7c(local_20);
      return;
    }
    iVar14 = (**(code **)(*local_8 + 0x24))();
    if (-1 < iVar14 + -1) {
      iVar10 = 0;
      do {
        uVar5 = FUN_00462be8(local_8,iVar10);
        FUN_0043f4c0(local_c,uVar5,local_18);
        FUN_00405d08(local_8,local_8,1,0);
        OffsetRect((LPRECT)(local_8 + 0x2d),0,1);
        iVar10 = iVar10 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    FUN_00405d08(local_8,local_8,2,0);
  }
  *in_FS_OFFSET = uVar2;
  thunk_FUN_00406e80(&local_450,2,0);
  return;
}
