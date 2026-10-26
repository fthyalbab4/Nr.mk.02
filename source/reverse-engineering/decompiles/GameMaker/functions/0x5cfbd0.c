// rea decompile_all
// name: FUN_005cfbd0
// address: 0x5cfbd0
// body: available
// range: 0x5cfbd0-0x5d01c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cfbf8 (push 0x5d01c3 followed by fs-segment stack chaining); handler 0x5d01c3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cfbd0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int unaff_EBX;
  int *unaff_ESI;
  int *unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar7;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined1 local_c4 [16];
  int *local_b4;
  int *local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a4 [16];
  int *local_94;
  int *local_90;
  undefined1 local_8c [16];
  int *local_7c;
  int *local_78;
  undefined1 local_74 [16];
  int *local_64;
  int *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  double local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int local_c;
  undefined4 local_8;

  iVar6 = 0x1d;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_1c = (int *)0x5cfbed;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  local_20 = (int *)&LAB_005d01c3;
  local_24 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  uStack_28 = (int *)0x5cfc09;
  local_1c = (int *)&stack0xfffffffc;
  local_3c = FUN_005d179c(&PTR_LAB_005cd120,1,0);
  uStack_28 = (int *)0x5cfc18;
  piVar4 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  uStack_28 = (int *)0x5cfc24;
  (**(code **)(*piVar4 + 0x68))(piVar4,local_8);
  uStack_28 = (int *)0x5cfc30;
  (**(code **)(*piVar4 + 0x48))(piVar4,1);
  uStack_28 = (int *)0x5cfc3c;
  (**(code **)(*piVar4 + 0xc))(piVar4,0,&local_58);
  uStack_28 = (int *)0x5cfc49;
  cVar3 = FUN_004106b4(L"<?xml",local_58);
  if (cVar3 != '\0') {
    uStack_28 = (int *)0x5cfc5b;
    (**(code **)(*piVar4 + 0x1c))(piVar4,&local_5c);
    uStack_28 = (int *)0x5cfc66;
    FUN_005c42c8(local_5c,&stack0xffffffec);
    uStack_28 = (int *)0x5cfc6e;
    FUN_00406e5c(&local_c);
    uStack_28 = (int *)0x5cfc79;
    (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,&local_60);
    uStack_28 = (int *)0x5cfc81;
    iVar6 = (**(code **)(*local_60 + 0xc))();
    if (-1 < iVar6 + -1) {
      local_2c = 0;
      local_50 = iVar6;
      do {
        uStack_28 = (int *)0x5cfca0;
        (**(code **)(*unaff_ESI + 0x14))(unaff_ESI,&local_64);
        iVar6 = local_2c;
        uStack_28 = local_64;
        local_2c = 0x5cfcb1;
        FUN_00429c6c(local_74,iVar6,0xfc);
        piVar4 = uStack_28;
        iVar6 = *uStack_28;
        uStack_28 = (int *)0x5cfcbd;
        (**(code **)(iVar6 + 0x10))(piVar4,local_74,&stack0xffffffe8);
        uStack_28 = (int *)0x5cfcc8;
        (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,&local_78);
        uStack_28 = (int *)0x5cfcd0;
        iVar6 = (**(code **)(*local_78 + 0xc))();
        if (-1 < iVar6 + -1) {
          local_30 = 0;
          local_54 = iVar6;
          do {
            uStack_28 = (int *)0x5cfcef;
            (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,&local_7c);
            uStack_28 = local_7c;
            local_2c = 0x5cfd03;
            FUN_00429c6c(local_8c,local_30,0xfc);
            piVar4 = uStack_28;
            iVar6 = *uStack_28;
            uStack_28 = (int *)0x5cfd12;
            (**(code **)(iVar6 + 0x10))(piVar4,local_8c,&local_1c);
            uStack_28 = (int *)0x5cfd20;
            (**(code **)(*local_1c + 0x14))(local_1c,&local_90);
            uStack_28 = (int *)0x5cfd2b;
            iVar6 = (**(code **)(*local_90 + 0xc))();
            if (-1 < iVar6 + -1) {
              local_34 = 0;
              do {
                uStack_28 = (int *)0x5cfd4c;
                (**(code **)(*local_1c + 0x14))(local_1c,&local_94);
                uStack_28 = local_94;
                local_2c = 0x5cfd63;
                FUN_00429c6c(local_a4,local_34,0xfc);
                piVar4 = uStack_28;
                iVar5 = *uStack_28;
                uStack_28 = (int *)0x5cfd72;
                (**(code **)(iVar5 + 0x10))(piVar4,local_a4,&local_20);
                if (local_c == 0) {
                  uStack_28 = (int *)0x5cfd86;
                  (**(code **)(*local_20 + 0x50))(local_20,&local_a8);
                  uStack_28 = (int *)0x5cfd99;
                  FUN_0040810c(&local_c,local_a8,0);
                }
                else {
                  uVar7 = local_c == 0;
                  if (!(bool)uVar7) {
                    uStack_28 = (int *)0x5cfdb6;
                    (**(code **)(*local_20 + 0x34))(local_20,&local_ac);
                    uStack_28 = (int *)0x5cfdc6;
                    FUN_00408640(local_ac,L"array");
                    if ((bool)uVar7) {
                      uStack_28 = (int *)0x5cfdd4;
                      FUN_00406e5c(&stack0xfffffff0);
                      uStack_28 = (int *)0x5cfde2;
                      (**(code **)(*local_20 + 0x14))(local_20,&local_b0);
                      uStack_28 = (int *)0x5cfded;
                      iVar5 = (**(code **)(*local_b0 + 0xc))();
                      if (-1 < iVar5 + -1) {
                        local_38 = 0;
                        do {
                          uStack_28 = (int *)0x5cfe0e;
                          (**(code **)(*local_20 + 0x14))(local_20,&local_b4);
                          uStack_28 = local_b4;
                          local_2c = 0x5cfe25;
                          FUN_00429c6c(local_c4,local_38,0xfc);
                          piVar4 = uStack_28;
                          iVar1 = *uStack_28;
                          uStack_28 = (int *)0x5cfe34;
                          (**(code **)(iVar1 + 0x10))(piVar4,local_c4,&local_24);
                          if (unaff_EBX == 0) {
                            uStack_28 = (int *)0x5cfea2;
                            (**(code **)(*local_24 + 0x50))(local_24,&local_d4);
                            uStack_28 = (int *)0x5cfeb5;
                            FUN_0040810c(&stack0xfffffff0,local_d4,0);
                          }
                          else {
                            uStack_28 = (int *)0x5cfe4d;
                            FUN_0040731c(&local_cc,unaff_EBX,&DAT_005d0214);
                            uStack_28 = (int *)0x5cfe5e;
                            FUN_004080e4(&local_c8,local_cc);
                            uStack_28 = &local_c8;
                            local_2c = 0x5cfe73;
                            (**(code **)(*local_24 + 0x50))(local_24,&local_d0);
                            puVar2 = uStack_28;
                            uStack_28 = (int *)0x5cfe7f;
                            FUN_004082dc(puVar2,local_d0);
                            uStack_28 = (int *)0x5cfe92;
                            FUN_0040810c(&stack0xfffffff0,local_c8,0);
                          }
                          local_38 = local_38 + 1;
                          iVar5 = iVar5 + -1;
                        } while (iVar5 != 0);
                      }
                      uStack_28 = (int *)0x5cfecd;
                      FUN_005d1adc(local_3c,local_c,unaff_EBX);
                      uStack_28 = (int *)0x5cfed5;
                      FUN_00406e5c(&local_c);
                      goto LAB_005cff14;
                    }
                  }
                  uStack_28 = (int *)0x5cfee5;
                  (**(code **)(*local_20 + 0x50))(local_20,&local_dc);
                  uStack_28 = (int *)0x5cfefb;
                  FUN_0040810c(&local_d8,local_dc,0);
                  uStack_28 = (int *)0x5cff0c;
                  FUN_005d1adc(local_3c,local_c,local_d8);
                  uStack_28 = (int *)0x5cff14;
                  FUN_00406e5c(&local_c);
                }
LAB_005cff14:
                local_34 = local_34 + 1;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
            local_30 = local_30 + 1;
            local_54 = local_54 + -1;
          } while (local_54 != 0);
        }
        local_2c = local_2c + 1;
        local_50 = local_50 + -1;
      } while (local_50 != 0);
    }
  }
  uStack_28 = (int *)0x5cff3e;
  cVar3 = FUN_005ceb84(local_3c);
  if (cVar3 == '\0') goto LAB_005d008b;
  uStack_28 = (int *)0x5cff52;
  piVar4 = (int *)FUN_00452480(&DAT_004512d4,1);
  uStack_28 = (int *)0x5cff59;
  FUN_00419950();
  uStack_28 = (int *)0x5cff69;
  cVar3 = FUN_004526b0(piVar4,L"\\Software\\Game Maker\\",1);
  if (cVar3 != '\0') {
    uStack_28 = (int *)0x5cff79;
    cVar3 = FUN_00453668(piVar4,&DAT_005d025c);
    if (cVar3 == '\0') {
      uStack_28 = (int *)0x5cffdf;
      FUN_005d110c();
      uStack_28 = (int *)((uint)uStack_28 & 0xffffff);
      goto LAB_005d008b;
    }
    uStack_28 = (int *)0x5cff89;
    FUN_00453458(piVar4,&DAT_005d025c);
    local_44 = (double)in_ST1;
    uStack_28 = (int *)0x5cffa0;
    FUN_005d14c0(local_3c,"Updated",&local_e4);
    uStack_28 = (int *)0x5cffb1;
    FUN_004080e4(&local_e0,local_e4);
    uStack_28 = (int *)0x5cffbc;
    FUN_00416900(local_e0);
    uStack_28 = (int *)0x5cffc1;
    in_ST1 = in_ST3;
    FUN_005ce340();
    local_4c = (double)in_ST2;
    if (local_4c <= local_44) {
      uStack_28 = (int *)((uint)uStack_28 & 0xffffff);
      goto LAB_005d008b;
    }
  }
  uStack_28 = (int *)0x5cfff1;
  (**(code **)(*piVar4 + -4))(piVar4,1);
  uStack_28 = (int *)0x5cfffd;
  piVar4 = (int *)FUN_00452480(&DAT_004512d4,1);
  uStack_28 = (int *)0x5d0012;
  FUN_005d14c0(local_3c,"Updated",&local_ec);
  uStack_28 = (int *)0x5d0023;
  FUN_004080e4(&local_e8,local_ec);
  uStack_28 = (int *)0x5d002e;
  FUN_00416900(local_e8);
  uStack_28 = (int *)0x5d0033;
  FUN_005ce340();
  local_44 = (double)in_ST1;
  uStack_28 = (int *)0x5d0045;
  cVar3 = FUN_004526b0(piVar4,L"\\Software\\Game Maker\\",1);
  if (cVar3 != '\0') {
    uStack_28 = (int *)local_44._4_4_;
    local_2c = (int)local_44;
    local_30 = 0x5d005b;
    FUN_00453444(piVar4,&DAT_005d025c);
    uStack_28 = (int *)0x5d0062;
    FUN_00452538(piVar4);
  }
  uStack_28 = (int *)0x5d006b;
  (**(code **)(*piVar4 + -4))(piVar4,1);
  uStack_28 = (int *)0x5d0073;
  cVar3 = FUN_005cf54c(local_3c);
  if (cVar3 == '\0') {
    uStack_28 = (int *)0x5d0087;
    FUN_005d110c();
    uStack_28 = (int *)((uint)uStack_28 & 0xffffff);
  }
  else {
    uStack_28 = (int *)0x5d007c;
    FUN_005cf844();
    uStack_28 = (int *)CONCAT13(1,(undefined3)uStack_28);
  }
LAB_005d008b:
  piVar4 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = (int *)&LAB_005d01cd;
  local_20 = (int *)0x5d00a3;
  FUN_00406e5c(&local_ec,local_24,piVar4);
  local_20 = (int *)0x5d00ae;
  thunk_FUN_00406e5c(&local_e8);
  local_20 = (int *)0x5d00b9;
  FUN_00406e5c(&local_e4);
  local_20 = (int *)0x5d00c9;
  thunk_FUN_00406e80(&local_e0,2);
  local_20 = (int *)0x5d00d4;
  FUN_00406e5c(&local_d8);
  local_20 = (int *)0x5d00e4;
  thunk_FUN_00406e80(&local_d4,2);
  local_20 = (int *)0x5d00ef;
  FUN_00406e5c(&local_cc);
  local_20 = (int *)0x5d00fa;
  thunk_FUN_00406e5c(&local_c8);
  local_20 = (int *)0x5d0105;
  FUN_004249e8(local_c4);
  local_20 = (int *)0x5d011b;
  FUN_00408e44(&local_b4,&DAT_005c0e70,2);
  local_20 = (int *)0x5d012b;
  thunk_FUN_00406e80(&local_ac,2);
  local_20 = (int *)0x5d0136;
  FUN_004249e8(local_a4);
  local_20 = (int *)0x5d014c;
  FUN_00408e44(&local_94,&DAT_005c0e70,2);
  local_20 = (int *)0x5d0157;
  FUN_004249e8(local_8c);
  local_20 = (int *)0x5d016a;
  FUN_00408e44(&local_7c,&DAT_005c0e70,2);
  local_20 = (int *)0x5d0172;
  FUN_004249e8(local_74);
  local_20 = (int *)0x5d0185;
  FUN_00408e44(&local_64,&DAT_005c0e70,2);
  local_20 = (int *)0x5d0192;
  thunk_FUN_00406e80(&local_5c,2);
  local_20 = (int *)0x5d01a5;
  FUN_00408e44(&local_24,&DAT_005c0e3c,4);
  local_20 = (int *)0x5d01ad;
  FUN_0040b140(&stack0xffffffec);
  local_20 = (int *)0x5d01ba;
  FUN_00406e80(&stack0xfffffff0,2);
  local_20 = (int *)0x5d01c2;
  thunk_FUN_00406e5c(&local_8);
  return;
}
