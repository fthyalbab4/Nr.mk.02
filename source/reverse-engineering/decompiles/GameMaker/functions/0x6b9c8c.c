// rea decompile_all
// name: FUN_006b9c8c
// address: 0x6b9c8c
// body: available
// range: 0x6b9c8c-0x6b9ff4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6b9caa (push 0x6b9ff5 followed by fs-segment stack chaining); handler 0x6b9ff5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b9c8c(void)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int *in_FS_OFFSET;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  short *local_30;
  short *local_2c;
  int local_28;
  undefined2 *local_24;
  undefined1 *local_20;
  int local_10;
  int local_c;
  undefined4 local_8;

  local_20 = &stack0xfffffffc;
  iVar5 = 0xd;
  do {
    local_8 = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_24 = &DAT_006b9ff5;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&local_28;
  local_2c = (short *)0x6b9cb9;
  piVar3 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  local_2c = (short *)0x6b9cca;
  FUN_00520290(*(undefined4 *)PTR_DAT_00782280,&stack0xffffffe4);
  local_2c = (short *)0x6b9cd5;
  FUN_0041735c(unaff_EDI,&stack0xffffffe8);
  local_2c = (short *)0x6b9ce5;
  FUN_0040839c(&local_8,unaff_ESI,L"fnames");
  local_2c = (short *)0x6b9ced;
  cVar2 = FUN_00416e40(local_8);
  if (cVar2 != '\0') {
    local_2c = (short *)0x6b9cfb;
    (**(code **)(*piVar3 + 0x68))(piVar3,local_8);
  }
  local_2c = (short *)0x6b9d02;
  iVar5 = (**(code **)(*piVar3 + 0x14))();
  iVar5 = iVar5 + -1;
  if (-1 < iVar5) {
    do {
      local_2c = (short *)0x6b9d1a;
      (**(code **)(*piVar3 + 0xc))(piVar3,iVar5,&local_24);
      local_2c = (short *)0x6b9d25;
      FUN_00415dd0(local_24,&local_20);
      local_2c = (short *)0x6b9d31;
      (**(code **)(*piVar3 + 0x20))(piVar3,iVar5,local_20);
      local_2c = (short *)0x6b9d3d;
      (**(code **)(*piVar3 + 0xc))(piVar3,iVar5,&local_28);
      if (local_28 == 0) {
        local_2c = (short *)0x6b9d4c;
        (**(code **)(*piVar3 + 0x48))(piVar3,iVar5);
      }
      else {
        local_2c = (short *)0x6b9d5a;
        (**(code **)(*piVar3 + 0xc))(piVar3,iVar5,&local_2c);
        if (*local_2c == 0x23) {
          local_2c = (short *)0x6b9d6c;
          (**(code **)(*piVar3 + 0x48))(piVar3,iVar5);
        }
        else {
          local_2c = (short *)0x6b9d7a;
          (**(code **)(*piVar3 + 0xc))(piVar3,iVar5,&local_30);
          if (*local_30 == 0x2f) {
            local_2c = (short *)0x6b9d8c;
            (**(code **)(*piVar3 + 0x48))(piVar3,iVar5);
          }
        }
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != -1);
  }
  local_2c = (short *)0x6b9da0;
  (**(code **)(*piVar3 + 0xa0))();
  local_2c = (short *)0x6b9dac;
  DAT_00790048 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  local_2c = (short *)0x6b9dbd;
  DAT_0079004c = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  local_2c = (short *)0x6b9dce;
  DAT_00790054 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  local_2c = (short *)0x6b9ddf;
  DAT_00790050 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  local_2c = (short *)0x6b9deb;
  iVar5 = (**(code **)(*piVar3 + 0x14))();
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    do {
      local_2c = (short *)0x6b9e06;
      (**(code **)(*piVar3 + 0xc))(piVar3,iVar6,&local_34);
      local_38 = local_34;
      local_c = 0;
      if (local_34 != 0) {
        local_c = *(int *)(local_34 + -4);
      }
      local_10 = 5;
      local_2c = (short *)0x6b9e2e;
      (**(code **)(*piVar3 + 0xc))(piVar3,iVar6,&local_3c);
      local_2c = (short *)0x6b9e3b;
      iVar4 = FUN_00408a68(&DAT_006ba02c,local_3c);
      if (iVar4 < 1) {
        local_2c = (short *)0x6b9e74;
        (**(code **)(*piVar3 + 0xc))(piVar3,iVar6,&local_44);
        local_2c = (short *)0x6b9e81;
        iVar4 = FUN_00408a68(&DAT_006ba03c,local_44);
        if (iVar4 < 1) {
          local_2c = (short *)0x6b9eb7;
          (**(code **)(*piVar3 + 0xc))(piVar3,iVar6,&local_4c);
          local_2c = (short *)0x6b9ec4;
          iVar4 = FUN_00408a68(&DAT_006ba04c,local_4c);
          if (0 < iVar4) {
            local_2c = (short *)0x6b9ed4;
            (**(code **)(*piVar3 + 0xc))(piVar3,iVar6,&local_50);
            local_2c = (short *)0x6b9ee1;
            local_c = FUN_00408a68(&DAT_006ba04c,local_50);
            local_c = local_c + -1;
            local_10 = 6;
          }
        }
        else {
          local_2c = (short *)0x6b9e91;
          (**(code **)(*piVar3 + 0xc))(piVar3,iVar6,&local_48);
          local_2c = (short *)0x6b9e9e;
          local_c = FUN_00408a68(&DAT_006ba03c,local_48);
          local_c = local_c + -1;
          local_10 = 5;
        }
      }
      else {
        local_2c = (short *)0x6b9e4b;
        (**(code **)(*piVar3 + 0xc))(piVar3,iVar6,&local_40);
        local_2c = (short *)0x6b9e58;
        local_c = FUN_00408a68(&DAT_006ba02c,local_40);
        local_c = local_c + -1;
        local_10 = 4;
      }
      if (local_10 == 4) {
        local_2c = (short *)&local_54;
        local_30 = (short *)0x6b9f02;
        (**(code **)(*piVar3 + 0xc))(piVar3,iVar6,&local_58);
        local_30 = (short *)0x6b9f12;
        FUN_004086a8(local_58,1,local_c);
        local_30 = (short *)0x6b9f1f;
        (**(code **)(*DAT_00790050 + 0x38))(DAT_00790050,local_54);
      }
      else if (local_10 == 5) {
        local_2c = (short *)&local_5c;
        local_30 = (short *)0x6b9f3a;
        (**(code **)(*piVar3 + 0xc))(piVar3,iVar6,&local_60);
        local_30 = (short *)0x6b9f4a;
        FUN_004086a8(local_60,1,local_c);
        local_30 = (short *)0x6b9f57;
        (**(code **)(*DAT_00790054 + 0x38))(DAT_00790054,local_5c);
      }
      else {
        local_2c = (short *)&local_64;
        local_30 = (short *)0x6b9f69;
        (**(code **)(*piVar3 + 0xc))(piVar3,iVar6,&local_68);
        local_30 = (short *)0x6b9f79;
        FUN_004086a8(local_68,1,local_c);
        local_30 = (short *)0x6b9f86;
        (**(code **)(*DAT_00790048 + 0x38))(DAT_00790048,local_64);
        local_30 = (short *)&local_6c;
        local_34 = 0x6b9f96;
        (**(code **)(*piVar3 + 0xc))(piVar3,iVar6,&local_70);
        local_34 = 0x6b9fa7;
        FUN_004086a8(local_70,local_c + 1,100000);
        local_34 = 0x6b9fb4;
        (**(code **)(*DAT_0079004c + 0x38))(DAT_0079004c,local_6c);
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_2c = (short *)0x6b9fc5;
  FUN_00405a7c(piVar3);
  puVar1 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_006b9ffc;
  local_24 = (undefined2 *)0x6b9fdf;
  thunk_FUN_00406e80(&local_70,0xe,puVar1);
  local_24 = (undefined2 *)0x6b9fec;
  thunk_FUN_00406e80(&local_34,8);
  local_24 = (undefined2 *)0x6b9ff4;
  thunk_FUN_00406e5c(&local_8);
  return;
}
