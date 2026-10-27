// rea decompile_all
// name: FUN_0054907c
// address: 0x54907c
// body: available
// range: 0x54907c-0x54937f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0054907c(int param_1,char param_2,undefined4 param_3,undefined2 param_4,undefined4 *param_5,
                undefined4 param_6)

{
  byte *pbVar1;
  int iVar2;
  HANDLE pvVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  uint uVar8;
  char extraout_DL;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *in_FS_OFFSET;
  byte bVar12;
  undefined4 auStackY_1800 [1512];
  undefined1 *puVar13;
  undefined4 uStack_50;
  undefined1 local_34 [16];
  undefined4 local_24;
  undefined4 auStack_20 [4];
  byte local_d;
  undefined4 local_c;
  char local_5;

  bVar12 = 0;
  local_5 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00405fb0();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puVar10 = param_5 + (uint)bVar12 * -2 + 1;
  local_24 = *param_5;
  auStack_20[(uint)bVar12 * -2] = *puVar10;
  auStack_20[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] = puVar10[(uint)bVar12 * -2 + 1];
  (auStack_20 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
       (puVar10 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
  FUN_00448038(param_1,0,1);
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(int *)(param_1 + 0x1c) = param_1;
  *(code **)(param_1 + 0x18) = FUN_00549454;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x44) = param_6;
  puVar10 = (undefined4 *)(param_1 + 0x4c + (uint)bVar12 * -8);
  *(undefined4 *)(param_1 + 0x48) = local_24;
  puVar11 = puVar10 + (uint)bVar12 * -2 + 1;
  *puVar10 = auStack_20[(uint)bVar12 * -2];
  *puVar11 = auStack_20[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
  puVar11[(uint)bVar12 * -2 + 1] =
       (auStack_20 + (uint)bVar12 * -2 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x58) = param_4;
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x5c);
  if ((~*(ushort *)(param_1 + 0x58) & 5) == 0) {
    iVar2 = FUN_005415b8(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2c));
    if ((1 < iVar2) && (-1 < *(int *)(param_1 + 0x5c))) {
      pvVar3 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
      *(HANDLE *)(param_1 + 0x80) = pvVar3;
    }
  }
  local_d = 0;
  if (*(int *)(*(int *)(param_1 + 0x40) + 0x60) == 0x1fffffff) {
    iVar2 = FUN_0054ce78(*(int *)(param_1 + 0x40));
    if (*(int *)(iVar2 + 8) < 1) {
      local_c = FUN_0045aa34(0xff000005);
    }
    else {
      local_c = FUN_0054b520(*(undefined4 *)(param_1 + 0x40));
    }
  }
  else {
    local_c = FUN_0045aa34();
  }
  if ((*(byte *)(param_1 + 0x58) & 0x80) != 0) {
    local_d = local_d | 4;
  }
  iVar2 = FUN_005415b8(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2c));
  if (-1 < iVar2 + -1) {
    iVar9 = 0;
    do {
      iVar4 = FUN_00548da8(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2c),iVar9);
      if (*(int *)(iVar4 + 0x38) != 0) {
        iVar4 = FUN_00548da8(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x2c),iVar9);
        auStack_20[3] = *(undefined4 *)(iVar4 + 0x38);
        uVar5 = FUN_00547f34(auStack_20[3]);
        if ((byte)uVar5 < 8) {
          uVar8 = (uint)&local_d & 3;
          uVar5 = (uVar5 & 0x7f) + uVar8 * 8;
          pbVar1 = &local_d + (((int)uVar5 >> 3) - uVar8);
          *pbVar1 = *pbVar1 | '\x01' << (uVar5 & 7);
        }
      }
      iVar9 = iVar9 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (((local_d & 4) != 0) && ((*(byte *)(param_1 + 0x58) & 2) != 0)) {
    piVar6 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
    *(int **)(param_1 + 0x70) = piVar6;
    (**(code **)(*piVar6 + 0x38))(piVar6,*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c));
    (**(code **)(**(int **)(param_1 + 0x70) + 0x44))
              (*(int **)(param_1 + 0x70),*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48));
    iVar2 = FUN_00462a64(*(undefined4 *)(param_1 + 0x70));
    *(undefined4 *)(iVar2 + 0x54) = 0xcc0020;
    iVar2 = param_1 + 0x48;
    piVar6 = (int *)FUN_00462a64(*(undefined4 *)(param_1 + 0x70));
    (**(code **)(*piVar6 + 0x10))(piVar6,local_34,*piVar6,iVar2);
    puVar13 = local_34;
    uVar7 = FUN_00462a64(*(undefined4 *)(param_1 + 0x70));
    FUN_0045c400(uVar7,puVar13,*(undefined4 *)(param_1 + 0x44),iVar2);
  }
  if ((local_d & 0xc) != 0) {
    piVar6 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
    *(int **)(param_1 + 0x68) = piVar6;
    (**(code **)(*piVar6 + 0x38))(piVar6,*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c));
    (**(code **)(**(int **)(param_1 + 0x68) + 0x44))
              (*(int **)(param_1 + 0x68),*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48));
    iVar2 = FUN_00462a64(*(undefined4 *)(param_1 + 0x68));
    *(undefined4 *)(iVar2 + 0x54) = 0xcc0020;
    iVar2 = FUN_00462a64(*(undefined4 *)(param_1 + 0x68));
    FUN_0045bc24(*(undefined4 *)(iVar2 + 0x48),local_c);
    iVar2 = FUN_00462a64(*(undefined4 *)(param_1 + 0x68));
    FUN_0045bda4(*(undefined4 *)(iVar2 + 0x48),0);
    iVar2 = param_1 + 0x48;
    piVar6 = (int *)FUN_00462a64(*(undefined4 *)(param_1 + 0x68));
    (**(code **)(*piVar6 + 0x10))(piVar6,local_34,*piVar6,iVar2);
    puVar13 = local_34;
    uVar7 = FUN_00462a64(*(undefined4 *)(param_1 + 0x68));
    FUN_0045c400(uVar7,puVar13,*(undefined4 *)(param_1 + 0x44),iVar2);
    piVar6 = (int *)FUN_00462144(&PTR_FUN_004587d4,1);
    *(int **)(param_1 + 0x6c) = piVar6;
    (**(code **)(*piVar6 + 0x38))(piVar6,*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c));
    (**(code **)(**(int **)(param_1 + 0x6c) + 0x44))
              (*(int **)(param_1 + 0x6c),*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48));
    iVar2 = FUN_00462a64(*(undefined4 *)(param_1 + 0x6c));
    *(undefined4 *)(iVar2 + 0x54) = 0xcc0020;
    iVar2 = FUN_00462a64(*(undefined4 *)(param_1 + 0x6c));
    FUN_0045bc24(*(undefined4 *)(iVar2 + 0x48),local_c);
    iVar2 = FUN_00462a64(*(undefined4 *)(param_1 + 0x6c));
    FUN_0045bda4(*(undefined4 *)(iVar2 + 0x48),0);
  }
  if (local_5 != '\0') {
    FUN_00406008(param_1);
    *in_FS_OFFSET = uStack_50;
  }
  return param_1;
}
