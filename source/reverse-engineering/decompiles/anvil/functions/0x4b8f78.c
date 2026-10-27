// rea decompile_all
// name: FUN_004b8f78
// address: 0x4b8f78
// body: available
// range: 0x4b8f78-0x4b925f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b8f78(int *param_1)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  HWND pHVar5;
  undefined4 uVar6;
  HCURSOR pHVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  byte bVar11;
  int iVar12;
  int local_1c;
  bool local_18 [4];
  int local_14;
  int local_10;

  bVar11 = 0;
  if (((DAT_0068f288 == '\0') &&
      (uVar8 = DAT_0068f278 - *param_1 >> 0x1f,
      (int)((DAT_0068f278 - *param_1 ^ uVar8) - uVar8) < DAT_0068f284)) &&
     (uVar8 = DAT_0068f27c - param_1[1] >> 0x1f,
     (int)((DAT_0068f27c - param_1[1] ^ uVar8) - uVar8) < DAT_0068f284)) {
    return;
  }
  iVar4 = FUN_004b8e4c(param_1,&local_1c,*(undefined1 *)(DAT_0068f268 + 0x8b),DAT_0068f268);
  if ((DAT_0068f288 == '\0') && (DAT_0068f28c != 0)) {
    iVar12 = DAT_0068f27c;
    pHVar5 = GetDesktopWindow();
    FUN_004c6f68(DAT_0068f28c,pHVar5,DAT_0068f278,iVar12);
  }
  cVar3 = DAT_0068f288;
  local_18[0] = *(char *)(DAT_0068f268 + 0x8b) != '\0';
  if (local_18[0]) {
    DAT_0068f288 = '\x02';
  }
  else {
    DAT_0068f288 = '\x01';
  }
  local_18[0] = local_18[0] && cVar3 != '\0';
  if (iVar4 != DAT_0068f26c[5]) {
    FUN_004b8e9c(1);
    if (DAT_0068f26c == (int *)0x0) {
      return;
    }
    DAT_0068f26c[5] = iVar4;
    DAT_0068f26c[2] = local_1c;
    piVar9 = DAT_0068f26c;
    DAT_0068f26c[3] = *param_1;
    piVar9[4] = param_1[1];
    FUN_004b8e9c(0);
    if (DAT_0068f26c == (int *)0x0) {
      return;
    }
  }
  piVar9 = DAT_0068f26c;
  DAT_0068f26c[3] = *param_1;
  piVar9[4] = param_1[1];
  if (DAT_0068f26c[5] != 0) {
    FUN_004bb188(DAT_0068f26c[5],param_1,&local_14);
    piVar9 = DAT_0068f26c;
    DAT_0068f26c[6] = local_14;
    piVar9[7] = local_10;
  }
  iVar12 = param_1[1];
  uVar6 = FUN_004b8e9c(CONCAT31((int3)((uint)iVar12 >> 8),2));
  cVar3 = (char)iVar12;
  uVar6 = (**(code **)(*DAT_0068f26c + 4))(DAT_0068f26c,uVar6,*param_1);
  if (DAT_0068f28c != 0) {
    if (((iVar4 == 0) || ((*(byte *)(iVar4 + 0x51) & 0x20) != 0)) || ((char)DAT_0068f26c[1] != '\0')
       ) {
      FUN_004c6f18(DAT_0068f28c,uVar6);
      if (*(char *)(DAT_0068f28c + 0x7a) == '\0') {
        iVar12 = param_1[1];
        pHVar5 = GetDesktopWindow();
        FUN_004c6f68(DAT_0068f28c,pHVar5,*param_1,iVar12);
      }
      else {
        FUN_004c7070(DAT_0068f28c,*param_1,param_1[1]);
      }
    }
    else {
      FUN_004c70e4(DAT_0068f28c);
      pHVar7 = (HCURSOR)FUN_004e8c78(*(undefined4 *)PTR_DAT_00689620,(int)(short)uVar6);
      SetCursor(pHVar7);
    }
  }
  pHVar7 = (HCURSOR)FUN_004e8c78(*(undefined4 *)PTR_DAT_00689620,(int)(short)uVar6);
  SetCursor(pHVar7);
  if (DAT_0068f288 == '\x02') {
    if (iVar4 == 0) {
      iVar12 = param_1[1];
      FUN_00406268(DAT_0068f26c[0x10],DAT_0068f26c,*param_1,iVar12);
    }
    else {
      iVar4 = FUN_004b8ed8();
      DAT_0068f26c[0x18] = iVar4;
      if (iVar4 == 0) {
        iVar12 = 0x4b91ce;
        uVar1 = FUN_00406268(DAT_0068f26c[5],DAT_0068f26c + 6);
        *(undefined1 *)(DAT_0068f26c + 0x17) = uVar1;
      }
      else {
        FUN_004bb188(iVar4,param_1,local_18);
        iVar12 = 0x4b91f5;
        uVar1 = FUN_00406268(iVar4,local_18);
        *(undefined1 *)(DAT_0068f26c + 0x17) = uVar1;
      }
    }
    if ((DAT_0068f26c != (int *)0x0) &&
       (cVar2 = FUN_004156dc(DAT_0068f26c + 0x13,DAT_0068f26c + 0x19,0x10,iVar12), cVar2 == '\0')) {
      if ((cVar3 != '\0') && (cVar3 = (**(code **)(*DAT_0068f26c + 0x3c))(), cVar3 != '\0')) {
        (**(code **)(*DAT_0068f26c + 0x34))();
      }
      (**(code **)(*DAT_0068f26c + 0x30))();
      piVar10 = DAT_0068f26c + (uint)bVar11 * -2 + 0x1a;
      piVar9 = DAT_0068f26c + (uint)bVar11 * -2 + 0x14;
      DAT_0068f26c[0x19] = DAT_0068f26c[0x13];
      *piVar10 = *piVar9;
      piVar10[(uint)bVar11 * -2 + 1] = piVar9[(uint)bVar11 * -2 + 1];
      (piVar10 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1] =
           (piVar9 + (uint)bVar11 * -2 + 1)[(uint)bVar11 * -2 + 1];
    }
  }
  return;
}
