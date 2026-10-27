// rea decompile_all
// name: FUN_0056e76c
// address: 0x56e76c
// body: available
// range: 0x56e76c-0x56e81f inclusive
// range: 0x56e850-0x56ef6c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0056e76c(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar8;
  undefined8 uVar7;
  undefined1 local_28 [16];
  uint local_18;
  uint local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;

  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  piVar1 = (int *)FUN_00462804(&PTR_FUN_00458e94,1);
  FUN_00464480(piVar1,7);
  uVar6 = local_8;
  if ((int)local_8 < 1) {
    uVar6 = 1;
  }
  (**(code **)(*piVar1 + 0x44))(piVar1,uVar6);
  uVar6 = local_c;
  if ((int)local_c < 1) {
    uVar6 = 1;
  }
  (**(code **)(*piVar1 + 0x38))(piVar1,uVar6);
  iVar2 = FUN_00463124(piVar1);
  FUN_0045c064(*(undefined4 *)(iVar2 + 0x44),1);
  iVar2 = FUN_00463124(piVar1);
  FUN_0045c2e4(*(undefined4 *)(iVar2 + 0x48),local_10);
  piVar3 = (int *)FUN_00463124(piVar1);
  (**(code **)(*piVar3 + 0x10))(piVar3,local_28);
  puVar8 = local_28;
  piVar3 = (int *)FUN_00463124(piVar1);
  (**(code **)(*piVar3 + 0x4c))(piVar3,puVar8);
  switch(param_4) {
  case 0:
    if (-1 < (int)(local_8 - 1)) {
      local_18 = local_8;
      iVar2 = 0;
      do {
        uVar5 = FUN_0056e648(local_10,param_5);
        iVar4 = FUN_00463124(piVar1);
        FUN_0045bf10(*(undefined4 *)(iVar4 + 0x44),uVar5);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x5c))(piVar3,iVar2,0);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x58))(piVar3,iVar2,local_c);
        iVar2 = iVar2 + 1;
        local_18 = local_18 - 1;
      } while (local_18 != 0);
      local_18 = 0;
    }
    break;
  case 1:
    if (-1 < (int)(local_c - 1)) {
      local_18 = local_c;
      iVar2 = 0;
      do {
        uVar5 = FUN_0056e648(local_10,param_5);
        iVar4 = FUN_00463124(piVar1);
        FUN_0045bf10(*(undefined4 *)(iVar4 + 0x44),uVar5);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x5c))(piVar3,0,iVar2);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x58))(piVar3,local_8,iVar2);
        iVar2 = iVar2 + 1;
        local_18 = local_18 - 1;
      } while (local_18 != 0);
      local_18 = 0;
    }
    break;
  case 2:
    uVar6 = local_c;
    if ((int)local_8 < (int)local_c) {
      uVar6 = local_8;
    }
    local_14 = (int)uVar6 >> 1;
    if ((int)local_14 < 0) {
      local_14 = local_14 + ((uVar6 & 1) != 0);
    }
    if (-1 < (int)local_14) {
      local_18 = local_14 + 1;
      iVar2 = 0;
      do {
        uVar5 = FUN_0056e648(local_10,param_5);
        iVar4 = FUN_00463124(piVar1);
        FUN_0045c2e4(*(undefined4 *)(iVar4 + 0x48),uVar5);
        uVar5 = FUN_0056e648(local_10,param_5);
        iVar4 = FUN_00463124(piVar1);
        FUN_0045bf10(*(undefined4 *)(iVar4 + 0x44),uVar5);
        uVar7 = CONCAT44(local_8 - iVar2,local_c - iVar2);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x74))(piVar3,iVar2,iVar2,uVar7);
        iVar2 = iVar2 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      local_18 = 0;
    }
    break;
  case 3:
    uVar6 = local_c;
    if ((int)local_8 < (int)local_c) {
      uVar6 = local_8;
    }
    local_14 = (int)uVar6 >> 1;
    if ((int)local_14 < 0) {
      local_14 = local_14 + ((uVar6 & 1) != 0);
    }
    if (-1 < (int)local_14) {
      local_18 = local_14 + 1;
      iVar2 = 0;
      do {
        uVar5 = FUN_0056e648(local_10,param_5);
        iVar4 = FUN_00463124(piVar1);
        FUN_0045c2e4(*(undefined4 *)(iVar4 + 0x48),uVar5);
        uVar5 = FUN_0056e648(local_10,param_5);
        iVar4 = FUN_00463124(piVar1);
        FUN_0045bf10(*(undefined4 *)(iVar4 + 0x44),uVar5);
        uVar7 = CONCAT44(local_8 - iVar2,local_c - iVar2);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x48))(piVar3,iVar2,iVar2,uVar7);
        iVar2 = iVar2 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      local_18 = 0;
    }
    break;
  case 4:
    iVar2 = (int)local_8 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((local_8 & 1) != 0);
    }
    if (-1 < iVar2) {
      local_18 = iVar2 + 1;
      iVar2 = 0;
      do {
        uVar5 = FUN_0056e648(local_10,param_5);
        iVar4 = FUN_00463124(piVar1);
        FUN_0045bf10(*(undefined4 *)(iVar4 + 0x44),uVar5);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x5c))(piVar3,iVar2,0);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x58))(piVar3,iVar2,local_c);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x5c))(piVar3,local_8 - iVar2,0);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x58))(piVar3,local_8 - iVar2,local_c);
        iVar2 = iVar2 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      local_18 = 0;
    }
    break;
  case 5:
    iVar2 = (int)local_c >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((local_c & 1) != 0);
    }
    if (-1 < iVar2) {
      local_18 = iVar2 + 1;
      iVar2 = 0;
      do {
        uVar5 = FUN_0056e648(local_10,param_5);
        iVar4 = FUN_00463124(piVar1);
        FUN_0045bf10(*(undefined4 *)(iVar4 + 0x44),uVar5);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x5c))(piVar3,0,iVar2);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x58))(piVar3,local_8,iVar2);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x5c))(piVar3,0,local_c - iVar2);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x58))(piVar3,local_8,local_c - iVar2);
        iVar2 = iVar2 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      local_18 = 0;
    }
    break;
  case 6:
    if (-1 < (int)local_c) {
      local_18 = local_c + 1;
      iVar2 = 0;
      do {
        uVar5 = FUN_0056e648(local_10,param_5);
        iVar4 = FUN_00463124(piVar1);
        FUN_0045bf10(*(undefined4 *)(iVar4 + 0x44),uVar5);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x5c))(piVar3,0,iVar2);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x58))(piVar3,local_8,local_c + iVar2);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x5c))(piVar3,0,-iVar2);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x58))(piVar3,local_8,local_c - iVar2);
        iVar2 = iVar2 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      local_18 = 0;
    }
    break;
  case 7:
    if (-1 < (int)local_c) {
      local_18 = local_c + 1;
      iVar2 = 0;
      do {
        uVar5 = FUN_0056e648(local_10,param_5);
        iVar4 = FUN_00463124(piVar1);
        FUN_0045bf10(*(undefined4 *)(iVar4 + 0x44),uVar5);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x5c))(piVar3,0,local_c + iVar2);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x58))(piVar3,local_8,iVar2);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x5c))(piVar3,0,local_c - iVar2);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x58))(piVar3,local_8,-iVar2);
        iVar2 = iVar2 + 1;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
      local_18 = 0;
    }
    break;
  case 8:
    uVar6 = local_c;
    if ((int)local_8 < (int)local_c) {
      uVar6 = local_8;
    }
    local_14 = uVar6;
    if (0 < (int)uVar6) {
      do {
        uVar5 = FUN_0056e648(param_5,local_10);
        iVar2 = FUN_00463124(piVar1);
        FUN_0045c2e4(*(undefined4 *)(iVar2 + 0x48),uVar5);
        iVar2 = FUN_00463124(piVar1);
        uVar5 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x48) + 0x10) + 0x14);
        iVar2 = FUN_00463124(piVar1);
        FUN_0045bf10(*(undefined4 *)(iVar2 + 0x44),uVar5);
        uVar7 = CONCAT44(uVar6,uVar6);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x48))(piVar3,-uVar6,-uVar6,uVar7);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    break;
  case 9:
    uVar6 = local_c;
    if ((int)local_8 < (int)local_c) {
      uVar6 = local_8;
    }
    local_14 = uVar6;
    if (0 < (int)uVar6) {
      do {
        uVar5 = FUN_0056e648(param_5,local_10);
        iVar2 = FUN_00463124(piVar1);
        FUN_0045c2e4(*(undefined4 *)(iVar2 + 0x48),uVar5);
        iVar2 = FUN_00463124(piVar1);
        uVar5 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x48) + 0x10) + 0x14);
        iVar2 = FUN_00463124(piVar1);
        FUN_0045bf10(*(undefined4 *)(iVar2 + 0x44),uVar5);
        uVar7 = CONCAT44(local_8 + uVar6,uVar6);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x48))(piVar3,local_8 - uVar6,-uVar6,uVar7);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    break;
  case 10:
    uVar6 = local_c;
    if ((int)local_8 < (int)local_c) {
      uVar6 = local_8;
    }
    local_14 = uVar6;
    if (0 < (int)uVar6) {
      do {
        uVar5 = FUN_0056e648(param_5,local_10);
        iVar2 = FUN_00463124(piVar1);
        FUN_0045c2e4(*(undefined4 *)(iVar2 + 0x48),uVar5);
        iVar2 = FUN_00463124(piVar1);
        uVar5 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x48) + 0x10) + 0x14);
        iVar2 = FUN_00463124(piVar1);
        FUN_0045bf10(*(undefined4 *)(iVar2 + 0x44),uVar5);
        uVar7 = CONCAT44(uVar6,local_c + uVar6);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x48))(piVar3,-uVar6,local_c - uVar6,uVar7);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    break;
  case 0xb:
    uVar6 = local_c;
    if ((int)local_8 < (int)local_c) {
      uVar6 = local_8;
    }
    local_14 = uVar6;
    if (0 < (int)uVar6) {
      do {
        uVar5 = FUN_0056e648(param_5,local_10);
        iVar2 = FUN_00463124(piVar1);
        FUN_0045c2e4(*(undefined4 *)(iVar2 + 0x48),uVar5);
        iVar2 = FUN_00463124(piVar1);
        uVar5 = *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x48) + 0x10) + 0x14);
        iVar2 = FUN_00463124(piVar1);
        FUN_0045bf10(*(undefined4 *)(iVar2 + 0x44),uVar5);
        uVar7 = CONCAT44(local_8 + uVar6,local_c + uVar6);
        piVar3 = (int *)FUN_00463124(piVar1);
        (**(code **)(*piVar3 + 0x48))(piVar3,local_8 - uVar6,local_c - uVar6,uVar7);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  uVar5 = FUN_00515b64(&DAT_00514cd4,1,piVar1);
  FUN_00405fdc(piVar1);
  return uVar5;
}
