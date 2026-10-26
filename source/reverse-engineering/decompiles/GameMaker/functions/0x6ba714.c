// rea decompile_all
// name: FUN_006ba714
// address: 0x6ba714
// body: available
// range: 0x6ba714-0x6bae01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ba740 (push 0x6bae02 followed by fs-segment stack chaining); handler 0x6bae02 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ba714(int param_1,undefined4 param_2)

{
  wchar_t ***pppwVar1;
  undefined1 *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
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
  undefined4 *local_38;
  undefined4 local_34;
  wchar_t ***local_30;
  wchar_t ***local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined4 local_8;

  iVar6 = 0x13;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_20 = (undefined1 *)0x6ba735;
  local_8 = param_2;
  thunk_FUN_00407660(param_2);
  local_24 = &LAB_006bae02;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_2c = (wchar_t ***)0x6ba74f;
  local_20 = &stack0xfffffffc;
  piVar4 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  local_2c = (wchar_t ***)0x0;
  local_30 = (wchar_t ***)0x6ba76c;
  FUN_00409be0(param_1 + 0x28c,&DAT_006b9290,1);
  local_2c = (wchar_t ***)0x6ba779;
  iVar6 = (**(code **)(*DAT_00790048 + 0x14))();
  if (-1 < iVar6 + -1) {
    iVar7 = 0;
    do {
      local_2c = (wchar_t ***)0x6ba792;
      (**(code **)(*DAT_00790048 + 0xc))(DAT_00790048,iVar7,&stack0xffffffe8);
      local_2c = (wchar_t ***)0x6ba79d;
      iVar5 = FUN_00408a68(local_8,unaff_ESI);
      if (iVar5 == 1) {
        local_2c = (wchar_t ***)0x6ba7af;
        (**(code **)(*DAT_0079004c + 0xc))(DAT_0079004c,iVar7,&stack0xffffffe4);
        local_30 = (wchar_t ***)&DAT_00000006;
        local_34 = 0x6ba7c4;
        (**(code **)(*DAT_00790048 + 0xc))(DAT_00790048,iVar7,&local_20);
        local_2c = (wchar_t ***)0x6ba7d4;
        FUN_006ba624(param_1,L"function",local_20);
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_2c = (wchar_t ***)0x6ba7e0;
  FUN_007136e4(&stack0xffffffec);
  local_2c = (wchar_t ***)0x6ba7eb;
  (**(code **)(*piVar4 + 0xa0))();
  local_2c = (wchar_t ***)0x6ba7f3;
  iVar6 = (**(code **)(*piVar4 + 0x14))();
  if (-1 < iVar6 + -1) {
    iVar7 = 0;
    do {
      local_2c = (wchar_t ***)0x6ba80e;
      (**(code **)(*piVar4 + 0xc))(piVar4,iVar7,&local_24);
      local_2c = (wchar_t ***)0x6ba819;
      iVar5 = FUN_00408a68(local_8,local_24);
      if (iVar5 == 1) {
        local_2c = (wchar_t ***)0x6ba829;
        (**(code **)(*piVar4 + 0xc))(piVar4,iVar7,&local_28);
        local_2c = (wchar_t ***)0x6ba836;
        iVar5 = FUN_00408a68(&DAT_006bae3c,local_28);
        local_2c = (wchar_t ***)&local_2c;
        local_30 = (wchar_t ***)0x6ba84b;
        (**(code **)(*piVar4 + 0xc))(piVar4,iVar7,&local_30);
        pppwVar1 = local_30;
        local_30 = (wchar_t ***)0x6ba85c;
        FUN_004086a8(pppwVar1,iVar5,100000);
        local_30 = local_2c;
        local_34 = 6;
        local_38 = &local_34;
        local_3c = 0x6ba873;
        (**(code **)(*piVar4 + 0xc))(piVar4,iVar7,&local_38);
        local_2c = (wchar_t ***)0x6ba883;
        FUN_004086a8(local_38,1,iVar5 + -1);
        local_2c = (wchar_t ***)0x6ba893;
        FUN_006ba624(param_1,L"function (ext)",local_34);
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_2c = (wchar_t ***)0x6ba8a5;
  iVar6 = (**(code **)(*DAT_00790054 + 0x14))();
  if (-1 < iVar6 + -1) {
    iVar7 = 0;
    do {
      local_2c = (wchar_t ***)0x6ba8be;
      (**(code **)(*DAT_00790054 + 0xc))(DAT_00790054,iVar7,&local_3c);
      local_2c = (wchar_t ***)0x6ba8c9;
      iVar5 = FUN_00408a68(local_8,local_3c);
      if (iVar5 == 1) {
        local_2c = (wchar_t ***)0x0;
        local_30 = (wchar_t ***)&DAT_00000005;
        local_34 = 0x6ba8df;
        (**(code **)(*DAT_00790054 + 0xc))(DAT_00790054,iVar7,&local_40);
        local_2c = (wchar_t ***)0x6ba8ef;
        FUN_006ba624(param_1,L"variable",local_40);
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_2c = (wchar_t ***)0x6ba8fd;
  iVar6 = (**(code **)(*DAT_00790050 + 0x14))();
  if (-1 < iVar6 + -1) {
    iVar7 = 0;
    do {
      local_2c = (wchar_t ***)0x6ba916;
      (**(code **)(*DAT_00790050 + 0xc))(DAT_00790050,iVar7,&local_44);
      local_2c = (wchar_t ***)0x6ba921;
      iVar5 = FUN_00408a68(local_8,local_44);
      if (iVar5 == 1) {
        local_2c = (wchar_t ***)0x0;
        local_30 = (wchar_t ***)&DAT_00000004;
        local_34 = 0x6ba937;
        (**(code **)(*DAT_00790050 + 0xc))(DAT_00790050,iVar7,&local_48);
        local_2c = (wchar_t ***)0x6ba947;
        FUN_006ba624(param_1,L"constant",local_48);
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_2c = (wchar_t ***)0x6ba953;
  (**(code **)(*piVar4 + 0x44))();
  local_2c = (wchar_t ***)0x6ba95b;
  FUN_007136ac(&stack0xffffffec);
  local_2c = (wchar_t ***)0x6ba966;
  (**(code **)(*piVar4 + 0xa0))();
  local_2c = (wchar_t ***)0x6ba96e;
  iVar6 = (**(code **)(*piVar4 + 0x14))();
  if (-1 < iVar6 + -1) {
    iVar7 = 0;
    do {
      local_2c = (wchar_t ***)0x6ba985;
      (**(code **)(*piVar4 + 0xc))(piVar4,iVar7,&local_4c);
      local_2c = (wchar_t ***)0x6ba990;
      iVar5 = FUN_00408a68(local_8,local_4c);
      if (iVar5 == 1) {
        local_2c = (wchar_t ***)0x0;
        local_30 = (wchar_t ***)&DAT_00000004;
        local_34 = 0x6ba9a4;
        (**(code **)(*piVar4 + 0xc))(piVar4,iVar7,&local_50);
        local_2c = (wchar_t ***)0x6ba9b4;
        FUN_006ba624(param_1,L"constant (ext)",local_50);
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar6 = *(int *)PTR_DAT_00781d24;
  if (-1 < iVar6 + -1) {
    iVar7 = 0;
    do {
      local_2c = (wchar_t ***)0x6ba9da;
      iVar5 = FUN_00408a68(local_8,*(undefined4 *)(*(int *)PTR_DAT_00781664 + iVar7 * 4));
      if (iVar5 == 1) {
        local_2c = (wchar_t ***)0x0;
        local_28 = 4;
        local_34 = 0x6ba9f8;
        FUN_006ba624(param_1,L"constant (own)",*(undefined4 *)(*(int *)PTR_DAT_00781664 + iVar7 * 4)
                    );
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_2c = (wchar_t ***)0x6baa01;
  iVar6 = FUN_006bcca0();
  if (-1 < iVar6 + -1) {
    iVar7 = 0;
    do {
      local_2c = (wchar_t ***)0x6baa12;
      cVar3 = FUN_006bcca8(iVar7);
      if (cVar3 != '\0') {
        local_2c = (wchar_t ***)0x6baa20;
        FUN_006bcce4(iVar7,&local_54);
        local_2c = (wchar_t ***)0x6baa2b;
        iVar5 = FUN_00408a68(local_8,local_54);
        if (iVar5 == 1) {
          local_2c = (wchar_t ***)0x6baf10;
          local_28 = 4;
          local_34 = 0x6baa3f;
          FUN_006bcce4(iVar7,&local_58);
          local_34 = 0x6baa4f;
          FUN_006ba624(param_1,L"trigger",local_58);
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_2c = (wchar_t ***)0x6baa58;
  iVar6 = FUN_00655b18();
  if (-1 < iVar6 + -1) {
    iVar7 = 0;
    do {
      local_2c = (wchar_t ***)0x6baa69;
      cVar3 = FUN_00655b20(iVar7);
      if (cVar3 != '\0') {
        local_2c = (wchar_t ***)0x6baa77;
        FUN_00655b40(iVar7,&local_5c);
        local_2c = (wchar_t ***)0x6baa82;
        iVar5 = FUN_00408a68(local_8,local_5c);
        if (iVar5 == 1) {
          local_2c = (wchar_t ***)0x6baf10;
          local_28 = 8;
          local_34 = 0x6baa96;
          FUN_00655b40(iVar7,&local_60);
          local_34 = 0x6baaa6;
          FUN_006ba624(param_1,L"script",local_60);
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_2c = (wchar_t ***)0x6baaaf;
  iVar6 = FUN_006f58f8();
  if (-1 < iVar6 + -1) {
    iVar7 = 0;
    do {
      local_2c = (wchar_t ***)0x6baac0;
      cVar3 = FUN_006f5900(iVar7);
      if (cVar3 != '\0') {
        local_2c = (wchar_t ***)0x6baace;
        FUN_006f5920(iVar7,&local_64);
        local_2c = (wchar_t ***)0x6baad9;
        iVar5 = FUN_00408a68(local_8,local_64);
        if (iVar5 == 1) {
          local_2c = (wchar_t ***)0x0;
          local_28 = 8;
          local_34 = 0x6baaea;
          FUN_006f5920(iVar7,&local_68);
          local_34 = 0x6baafa;
          FUN_006ba624(param_1,L"sprite",local_68);
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_2c = (wchar_t ***)0x6bab03;
  iVar6 = FUN_0064de10();
  if (-1 < iVar6 + -1) {
    iVar7 = 0;
    do {
      local_2c = (wchar_t ***)0x6bab14;
      cVar3 = FUN_0064de18(iVar7);
      if (cVar3 != '\0') {
        local_2c = (wchar_t ***)0x6bab22;
        FUN_0064de38(iVar7,&local_6c);
        local_2c = (wchar_t ***)0x6bab2d;
        iVar5 = FUN_00408a68(local_8,local_6c);
        if (iVar5 == 1) {
          local_2c = (wchar_t ***)0x0;
          local_28 = 8;
          local_34 = 0x6bab3e;
          FUN_0064de38(iVar7,&local_70);
          local_34 = 0x6bab4e;
          FUN_006ba624(param_1,L"background",local_70);
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_2c = (wchar_t ***)0x6bab57;
  iVar6 = FUN_00652298();
  if (-1 < iVar6 + -1) {
    iVar7 = 0;
    do {
      local_2c = (wchar_t ***)0x6bab68;
      cVar3 = FUN_006522a0(iVar7);
      if (cVar3 != '\0') {
        local_2c = (wchar_t ***)0x6bab76;
        FUN_006522c0(iVar7,&local_74);
        local_2c = (wchar_t ***)0x6bab81;
        iVar5 = FUN_00408a68(local_8,local_74);
        if (iVar5 == 1) {
          local_2c = (wchar_t ***)0x0;
          local_28 = 8;
          local_34 = 0x6bab92;
          FUN_006522c0(iVar7,&local_78);
          local_34 = 0x6baba2;
          FUN_006ba624(param_1,L"sound",local_78);
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_2c = (wchar_t ***)0x6babab;
  iVar6 = FUN_00722818();
  if (-1 < iVar6 + -1) {
    iVar7 = 0;
    do {
      local_2c = (wchar_t ***)0x6babbc;
      cVar3 = FUN_00722820(iVar7);
      if (cVar3 != '\0') {
        local_2c = (wchar_t ***)0x6babca;
        FUN_00722840(iVar7,&local_7c);
        local_2c = (wchar_t ***)0x6babd5;
        iVar5 = FUN_00408a68(local_8,local_7c);
        if (iVar5 == 1) {
          local_2c = (wchar_t ***)0x0;
          local_28 = 8;
          local_34 = 0x6babe6;
          FUN_00722840(iVar7,&local_80);
          local_34 = 0x6babf6;
          FUN_006ba624(param_1,L"path",local_80);
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_2c = (wchar_t ***)0x6babff;
  iVar6 = FUN_006fcc30();
  if (-1 < iVar6 + -1) {
    iVar7 = 0;
    do {
      local_2c = (wchar_t ***)0x6bac10;
      cVar3 = FUN_006fcc38(iVar7);
      if (cVar3 != '\0') {
        local_2c = (wchar_t ***)0x6bac1e;
        FUN_006fcc58(iVar7,&local_84);
        local_2c = (wchar_t ***)0x6bac29;
        iVar5 = FUN_00408a68(local_8,local_84);
        if (iVar5 == 1) {
          local_2c = (wchar_t ***)0x0;
          local_28 = 8;
          local_34 = 0x6bac3d;
          FUN_006fcc58(iVar7,&local_88);
          local_34 = 0x6bac50;
          FUN_006ba624(param_1,L"font",local_88);
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_2c = (wchar_t ***)0x6bac59;
  iVar6 = FUN_0062ca94();
  if (-1 < iVar6 + -1) {
    iVar7 = 0;
    do {
      local_2c = (wchar_t ***)0x6bac6a;
      cVar3 = FUN_0062ca9c(iVar7);
      if (cVar3 != '\0') {
        local_2c = (wchar_t ***)0x6bac7b;
        FUN_0062cabc(iVar7,&local_8c);
        local_2c = (wchar_t ***)0x6bac89;
        iVar5 = FUN_00408a68(local_8,local_8c);
        if (iVar5 == 1) {
          local_2c = (wchar_t ***)0x0;
          local_28 = 8;
          local_34 = 0x6bac9d;
          FUN_0062cabc(iVar7,&local_90);
          local_34 = 0x6bacb0;
          FUN_006ba624(param_1,L"object",local_90);
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_2c = (wchar_t ***)0x6bacb9;
  iVar6 = FUN_006fa5e0();
  if (-1 < iVar6 + -1) {
    iVar7 = 0;
    do {
      local_2c = (wchar_t ***)0x6bacca;
      cVar3 = FUN_006fa5e8(iVar7);
      if (cVar3 != '\0') {
        local_2c = (wchar_t ***)0x6bacdb;
        FUN_006fa608(iVar7,&local_94);
        local_2c = (wchar_t ***)0x6bace9;
        iVar5 = FUN_00408a68(local_8,local_94);
        if (iVar5 == 1) {
          local_2c = (wchar_t ***)0x0;
          local_28 = 8;
          local_34 = 0x6bacfd;
          FUN_006fa608(iVar7,&local_98);
          local_34 = 0x6bad10;
          FUN_006ba624(param_1,L"time line",local_98);
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_2c = (wchar_t ***)0x6bad19;
  iVar6 = FUN_00692efc();
  if (-1 < iVar6 + -1) {
    iVar7 = 0;
    do {
      local_2c = (wchar_t ***)0x6bad2a;
      cVar3 = FUN_00692f04(iVar7);
      if (cVar3 != '\0') {
        local_2c = (wchar_t ***)0x6bad3b;
        FUN_00692f24(iVar7,&local_9c);
        local_2c = (wchar_t ***)0x6bad49;
        iVar5 = FUN_00408a68(local_8,local_9c);
        if (iVar5 == 1) {
          local_2c = (wchar_t ***)0x0;
          local_28 = 8;
          local_34 = 0x6bad5d;
          FUN_00692f24(iVar7,&local_a0);
          local_34 = 0x6bad70;
          FUN_006ba624(param_1,L"room",local_a0);
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_2c = (wchar_t ***)0x6bad7c;
  FUN_00405a7c(piVar4);
  local_2c = (wchar_t ***)0x6bad8f;
  iVar6 = FUN_0045bea4(*(undefined4 *)(param_1 + 0x270),&LAB_006bb03c);
  *(int *)(param_1 + 0x280) = iVar6 + 1;
  *(int *)(param_1 + 0x27c) = *(int *)(param_1 + 0x4c) / (iVar6 + 1);
  local_2c = (wchar_t ***)0x6badbd;
  FUN_00484e60(*(undefined4 *)(param_1 + 0x278),0);
  *(undefined4 *)(param_1 + 0x284) = 0;
  local_2c = (wchar_t ***)0x6badd4;
  FUN_00405d08(param_1);
  local_2c = (wchar_t ***)0x6baddc;
  FUN_004eed28(param_1);
  puVar2 = local_20;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_006bae09;
  local_24 = (undefined1 *)0x6badf9;
  thunk_FUN_00406e80(&local_a0,0x23,puVar2);
  local_24 = (undefined1 *)0x6bae01;
  thunk_FUN_00406e5c(&local_8);
  return;
}
