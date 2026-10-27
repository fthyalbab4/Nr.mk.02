// rea decompile_all
// name: FUN_00500a14
// address: 0x500a14
// body: available
// range: 0x500a14-0x500ed3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x500a41 (push 0x500f03 followed by fs-segment stack chaining); handler 0x500f03 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x500bd8 (push 0x500ed4 followed by fs-segment stack chaining); handler 0x500ed4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00500a14(undefined4 param_1,short *param_2,int *param_3,int *param_4)

{
  char cVar1;
  short *psVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *in_FS_OFFSET;
  bool bVar7;
  int iStackY_68;
  int iStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  int *piStack_50;
  int iStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  short *local_14;
  undefined4 local_10;
  short *local_c;
  short *local_8;

  puStack_44 = &stack0xfffffffc;
  local_34 = 0;
  local_30 = 0;
  local_8 = (short *)0x0;
  local_c = (short *)0x0;
  puStack_48 = &LAB_00500f03;
  iStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_4c;
  piStack_50 = (int *)0x500a4e;
  local_14 = param_2;
  local_10 = param_1;
  FUN_00408d90(0,&local_8);
  psVar2 = local_8;
  if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
    piStack_50 = (int *)0x500a6b;
    psVar2 = (short *)FUN_00407488(&local_8,local_8);
  }
  *local_14 = *psVar2;
  piStack_50 = (int *)0x500a7e;
  FUN_00408194(param_3,local_10);
  if (*(short *)*param_3 == 0x5b) {
    piStack_50 = (int *)0x500a8d;
    psVar2 = (short *)FUN_00416ddc(*param_3);
    if (*psVar2 == 0x5d) {
      iVar3 = *param_3;
      if ((iVar3 != 0) && (*(short *)(iVar3 + -10) != 2)) {
        piStack_50 = (int *)0x500aad;
        iVar3 = FUN_00407488(param_3,*param_3);
      }
      iVar5 = 0;
      if (iVar3 != 0) {
        iVar5 = *(int *)(iVar3 + -4);
      }
      puStack_54 = (undefined1 *)0x500aca;
      piStack_50 = param_3;
      FUN_00408984(*param_3,2,iVar5 + -2);
      goto LAB_00500bcd;
    }
  }
  piStack_50 = (int *)0x500ad9;
  FUN_00417124(*param_3,&local_c);
  psVar2 = local_c;
  if ((local_c != (short *)0x0) && (local_c[-5] != 2)) {
    piStack_50 = (int *)0x500af6;
    psVar2 = (short *)FUN_00407488(&local_c,local_c);
  }
  iVar3 = 0;
  if (psVar2 != (short *)0x0) {
    iVar3 = *(int *)(psVar2 + -2);
  }
  if (iVar3 == 0) {
    piStack_50 = (int *)0x500b0e;
    FUN_00417124(local_8,&local_c);
  }
  else {
    psVar2 = local_c;
    if ((local_c != (short *)0x0) && (local_c[-5] != 2)) {
      piStack_50 = (int *)0x500b2d;
      psVar2 = (short *)FUN_00407488(&local_c,local_c);
    }
    uVar4 = 0;
    if (psVar2 != (short *)0x0) {
      uVar4 = *(undefined4 *)(psVar2 + -2);
    }
    piStack_50 = (int *)0x500b45;
    FUN_00408a54(param_3,1,uVar4);
  }
  psVar2 = local_c;
  if ((local_c != (short *)0x0) && (local_c[-5] != 2)) {
    piStack_50 = (int *)0x500b62;
    psVar2 = (short *)FUN_00407488(&local_c,local_c);
  }
  iVar3 = 0;
  if (psVar2 != (short *)0x0) {
    iVar3 = *(int *)(psVar2 + -2);
  }
  if (iVar3 < 2) {
    bVar7 = false;
  }
  else {
    psVar2 = local_c;
    if ((local_c != (short *)0x0) && (local_c[-5] != 2)) {
      piStack_50 = (int *)0x500b8d;
      psVar2 = (short *)FUN_00407488(&local_c,local_c);
    }
    bVar7 = psVar2[1] == 0x3a;
  }
  if (bVar7) {
    psVar2 = local_c;
    if ((local_c != (short *)0x0) && (local_c[-5] != 2)) {
      piStack_50 = (int *)0x500bba;
      psVar2 = (short *)FUN_00407488(&local_c,local_c);
    }
    *local_14 = *psVar2;
  }
  else {
    *local_14 = 0;
  }
LAB_00500bcd:
  puStack_58 = &LAB_00500ed4;
  iStack_5c = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_5c;
  puStack_54 = &stack0xfffffffc;
  cVar1 = FUN_00504f70(local_c);
  if (cVar1 != '\0') {
    FUN_004044c8(local_c);
    FUN_0040448c();
  }
  FUN_004172fc(*param_3,&local_30);
  FUN_00408194(param_4,local_30);
  iVar3 = *param_3;
  if ((iVar3 != 0) && (*(short *)(iVar3 + -10) != 2)) {
    iVar3 = FUN_00407488(param_3,*param_3);
  }
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar5 = *(int *)(iVar3 + -4);
  }
  iVar3 = *param_4;
  if ((iVar3 != 0) && (*(short *)(iVar3 + -10) != 2)) {
    iVar3 = FUN_00407488(param_4,*param_4);
  }
  iVar6 = 0;
  if (iVar3 != 0) {
    iVar6 = *(int *)(iVar3 + -4);
  }
  if (iVar5 == iVar6 + 1) {
    iVar3 = 0x500c61;
    FUN_00408194(param_3,&DAT_00500f20);
  }
  else {
    iVar3 = *param_3;
    if ((iVar3 != 0) && (*(short *)(iVar3 + -10) != 2)) {
      iVar3 = FUN_00407488(param_3,*param_3);
    }
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = *(int *)(iVar3 + -4);
    }
    iVar3 = *param_4;
    if ((iVar3 != 0) && (*(short *)(iVar3 + -10) != 2)) {
      iVar3 = FUN_00407488(param_4,*param_4);
    }
    iVar6 = 0;
    if (iVar3 != 0) {
      iVar6 = *(int *)(iVar3 + -4);
    }
    if (iVar6 < iVar5) {
      local_18 = *param_3;
      if ((local_18 != 0) && (*(short *)(local_18 + -10) != 2)) {
        local_18 = FUN_00407488(param_3,*param_3);
      }
      if (local_18 != 0) {
        local_18 = *(int *)(local_18 + -4);
      }
      local_1c = *param_4;
      if ((local_1c != 0) && (*(short *)(local_1c + -10) != 2)) {
        local_1c = FUN_00407488(param_4,*param_4);
      }
      if (local_1c != 0) {
        local_1c = *(int *)(local_1c + -4);
      }
      iVar3 = 0x500d1c;
      FUN_00408520(param_3,(local_18 - local_1c) + -1);
    }
    else {
      FUN_00408d90(0,param_3);
      FUN_00417124(*param_3,&local_34);
      local_20 = local_34;
      local_24 = local_34;
      if (local_34 != 0) {
        local_24 = *(int *)(local_34 + -4);
      }
      iVar3 = 0x500d5d;
      FUN_00408a54(param_3,1,local_24);
      local_28 = *param_3;
      if ((local_28 != 0) && (*(short *)(local_28 + -10) != 2)) {
        iVar3 = 0x500d77;
        local_28 = FUN_00407488(param_3,*param_3);
      }
      if (local_28 != 0) {
        local_28 = *(int *)(local_28 + -4);
      }
      if (local_28 == 0) {
        iVar3 = 0x500d9d;
        FUN_00408194(param_3,&DAT_00500f20);
      }
    }
  }
  iVar5 = *param_3;
  if ((iVar5 != 0) && (*(short *)(iVar5 + -10) != 2)) {
    iVar3 = 0x500db7;
    iVar5 = FUN_00407488(param_3,*param_3);
  }
  iVar6 = 0;
  if (iVar5 != 0) {
    iVar6 = *(int *)(iVar5 + -4);
  }
  if (0 < iVar6) {
    FUN_004044c8(*param_3);
    iVar3 = 0x500dd0;
    FUN_0040448c();
  }
  iVar5 = *param_4;
  if ((iVar5 != 0) && (*(short *)(iVar5 + -10) != 2)) {
    iVar3 = 0x500dea;
    iVar5 = FUN_00407488(param_4,*param_4);
  }
  iVar6 = 0;
  if (iVar5 != 0) {
    iVar6 = *(int *)(iVar5 + -4);
  }
  if (0 < iVar6) {
    iVar3 = 0x500e07;
    iVar5 = FUN_00408d44(&DAT_00500f30,*param_4);
    if (iVar5 < 1) {
      iVar3 = 0x500e1b;
      iVar5 = FUN_00408d44(&DAT_00500f40,*param_4);
      if (iVar5 < 1) {
        iVar3 = 0x500e26;
        cVar1 = FUN_00416b0c(*param_4);
        if (cVar1 == '\0') {
          FUN_004044c8(*param_4);
          FUN_0040448c();
          local_2c = *param_3;
          if ((local_2c != 0) && (*(short *)(local_2c + -10) != 2)) {
            local_2c = FUN_00407488(param_3,*param_3);
          }
          if (local_2c != 0) {
            local_2c = *(int *)(local_2c + -4);
          }
          if (local_2c == 1) {
            iVar3 = 0x500e78;
            FUN_00408678(param_3,&DAT_00500f20,*param_4);
          }
          else {
            iVar3 = *param_3;
            iStackY_68 = *param_4;
            FUN_0040875c(param_3,3);
          }
          FUN_00408194(param_4,0);
        }
      }
    }
  }
  if (*local_14 == 0) {
    FUN_00408678(param_3,local_c,*param_3);
  }
  *in_FS_OFFSET = iStackY_68;
  cVar1 = FUN_00504f70(local_8,iStackY_68,iVar3,&LAB_00500edb);
  if (cVar1 != '\0') {
    FUN_004044c8(local_8);
    FUN_0040448c();
  }
  return;
}
