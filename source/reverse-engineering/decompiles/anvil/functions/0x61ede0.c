// rea decompile_all
// name: FUN_0061ede0
// address: 0x61ede0
// body: available
// range: 0x61ede0-0x61f242 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x61ee0d (push 0x61f243 followed by fs-segment stack chaining); handler 0x61f243 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061ede0(int ****param_1,int param_2,undefined4 param_3,uint param_4)

{
  int ***pppiVar1;
  wchar_t *pwVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_EBX;
  undefined3 unaff_ESI;
  int ****ppppiVar5;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  int ***local_38;
  int ***local_34;
  int ****local_30;
  int ***local_2c;
  undefined **local_28;
  int ****local_24;
  undefined4 uStack_20;
  undefined1 uVar6;
  undefined3 uStack_10;
  int ****local_8;

  uStack_20 = (wchar_t *)&stack0xfffffffc;
  local_8 = (int ****)0x6;
  do {
    local_8 = (int ****)((int)local_8 + -1);
  } while ((int *****)local_8 != (int *****)0x0);
  LOCK();
  UNLOCK();
  local_24 = (int ****)&LAB_0061f243;
  local_28 = (undefined **)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  PTR_FUN_006886c8._0_1_ = (param_4 & 1) != 0;
  local_2c = (int ***)0x61ee2d;
  DAT_006886b4 = FUN_0056195c();
  if (param_2 < DAT_006886b4) {
    DAT_006886b4 = param_2;
  }
  local_2c = (int ***)0x61ee3d;
  DAT_006886b8 = (int ***)FUN_0056196c();
  if (0 < (int)DAT_006886b8) {
    DAT_006886b8 = (int ***)0x0;
  }
  local_2c = (int ***)0x61ee4d;
  iVar3 = FUN_005619b0();
  if (iVar3 != 0x10) {
    local_2c = (int ***)0x61ee57;
    iVar3 = FUN_005619b0();
    if (iVar3 != 0x20) {
      local_2c = (int ***)0x61ee66;
      FUN_004a17e4(&PTR_DAT_0061f264);
      goto LAB_0061f218;
    }
  }
  local_2c = (int ***)0xdc;
  local_30 = (int ****)&local_24;
  local_34 = (int ***)0x61ee79;
  FUN_00510fd0();
  local_2c = (int ***)0x61ee86;
  FUN_0040b280(&DAT_006886a4,local_24);
  if (DAT_006886a4 == (int ****)0x0) {
    local_2c = (int ***)0x61ee99;
    FUN_004a17e4(&PTR_DAT_0061f378);
  }
  else {
    local_2c = (int ***)((int)&uStack_20 + 3);
    local_30 = (int ****)0x0;
    local_34 = (int ***)DAT_006886a4;
    local_38 = (int ***)0x61eeaf;
    uVar4 = (*(code *)(*DAT_006886a4)[8])();
    if ((uVar4 & 0x80000000) == 0) {
      local_2c = (int ***)0x61eedc;
      FUN_00404f38(&DAT_0085b38c,0x34,0);
      DAT_0085b3a8 = 0xffffffff;
      DAT_0085b398 = 1;
      DAT_0085b3a0 = 3;
      DAT_0085b3bc = 0;
      uVar6 = (undefined1)((uint)unaff_EBX >> 0x18);
      DAT_0085b394 = CONCAT31(uStack_10,uVar6);
      DAT_0085b38c = CONCAT31((int3)unaff_EDI,uStack_20._3_1_);
      DAT_0085b390 = CONCAT31(unaff_ESI,(char)((uint)unaff_EDI >> 0x18));
      DAT_0085b39c = 0;
      DAT_0085af74 = 0;
      DAT_0085af7c = 3;
      DAT_0085b3ac = 0xffffffff;
      DAT_0085b3b0 = 0x4b;
      _DAT_0085af78 = 0x4b;
      ppppiVar5 = (int ****)0x42;
      local_2c = (int ***)0x61ef3f;
      FUN_004081e8(&local_8,&DAT_0061f4fc);
      if ((param_4 & 0x80000000) != 0) {
        ppppiVar5 = (int ****)0x22;
        local_2c = (int ***)0x61ef57;
        FUN_004081e8(&local_8,&DAT_0061f510);
      }
      local_2c = (int ***)0x61f524;
      local_30 = local_8;
      local_34 = (int ***)&PTR_DAT_0061f55c;
      local_38 = (int ***)0x61ef71;
      FUN_0040875c(&local_28,3);
      local_38 = (int ***)0x61ef79;
      FUN_00561704(local_28);
      local_38 = (int ***)0x61ef83;
      local_38 = (int ***)FUN_0040b268(&DAT_006886a8);
      uVar4 = (*(code *)(*DAT_006886a4)[0xf])();
      if ((uVar4 & 0x80000000) != 0) {
        DAT_0085b3b0 = 0x50;
        _DAT_0085af78 = 0x50;
        uStack_20 = L"D3D Create Device :: ";
        local_24 = local_8;
        local_28 = &PTR_DAT_0061f5a0;
        local_2c = (int ***)0x61efd4;
        FUN_0040875c(&local_2c,3);
        pppiVar1 = local_2c;
        local_2c = (int ***)0x61efdc;
        FUN_00561704(pppiVar1);
        local_2c = (int ***)0x61efe6;
        local_2c = (int ***)FUN_0040b268(&DAT_006886a8);
        local_30 = (int ****)&DAT_0085b38c;
        local_38 = (int ***)param_1;
        local_34 = (int ***)ppppiVar5;
        uVar4 = (*(code *)(*DAT_006886a4)[0xf])();
        if ((uVar4 & 0x80000000) != 0) {
          DAT_0085b3a0 = 1;
          DAT_0085af7c = 1;
          uStack_20 = L"D3D Create Device :: ";
          local_24 = local_8;
          local_28 = &PTR_DAT_0061f5e0;
          local_2c = (int ***)0x61f037;
          FUN_0040875c(&local_30,3);
          local_2c = (int ***)0x61f03f;
          FUN_00561704(local_30);
          local_2c = (int ***)0x61f049;
          local_2c = (int ***)FUN_0040b268(&DAT_006886a8);
          local_30 = (int ****)&DAT_0085b38c;
          local_38 = (int ***)param_1;
          local_34 = (int ***)ppppiVar5;
          uVar4 = (*(code *)(*DAT_006886a4)[0xf])();
          if ((uVar4 & 0x80000000) != 0) {
            uStack_20 = L"⊾";
            FUN_00561704(L"D3D Create Device :: S/W processing + D16 + Discard");
            uStack_20 = (wchar_t *)0x61f088;
            uStack_20 = (wchar_t *)FUN_0040b268(&DAT_006886a8);
            local_24 = (int ****)&DAT_0085b38c;
            local_28 = (undefined **)0x22;
            local_30 = (int ****)0x1;
            local_34 = (int ***)0x0;
            local_38 = (int ***)DAT_006886a4;
            local_2c = (int ***)param_1;
            iVar3 = (*(code *)(*DAT_006886a4)[0xf])();
            if (iVar3 != 0) {
              uStack_20 =
              L"D3D.CreateDevice() Error: Please check that your graphics card meets the minimum requirements and that your drivers are up-to-date. If your graphics card has little memory, try switching your computer to a lower resolution. (Error: "
              ;
              local_24 = (int ****)0x61f0b3;
              FUN_0041636c(iVar3,&local_38);
              local_24 = (int ****)local_38;
              local_28 = (undefined **)&DAT_0061f878;
              local_2c = (int ***)0x61f0c8;
              FUN_0040875c(&local_34,3);
              local_2c = (int ***)0x61f0d0;
              FUN_004a17e4(local_34);
              goto LAB_0061f218;
            }
          }
        }
      }
      uStack_20 =
      L"ꁨ薮ꄀ蚨h譐＀᱐咡薯ꌀ꾄\x85쀳肣薯樀樂诿\xf345橐樁ꄀ蚤h譐＀ⱐ삅ݵඃ꾀\x85樂樄诿\xf345橐樁ꄀ蚤h譐＀ⱐ삅ݵඃ꾀\x85樄樈诿\xf345橐樁ꄀ蚤h譐＀ⱐ삅ݵඃ꾀\x85樈樐诿\xf345橐樁ꄀ蚤h譐＀ⱐ삅ݵඃ꾀\x85렐\xf8d0a狨\xf425櫿樀樀樀樁樀ꄀ蚨h譐＀邐"
      ;
      FUN_00561704(L"D3D Create Device :: Success");
      uStack_20 = (wchar_t *)&DAT_0085aea0;
      local_24 = DAT_006886a8;
      local_28 = (undefined **)0x61f0ef;
      (*(code *)(*DAT_006886a8)[7])();
      DAT_0085af84 = DAT_0085af54;
      DAT_0085af80 = 0;
      local_28 = (undefined **)0x2;
      local_2c = (int ***)0xffffffff;
      local_30 = (int ****)CONCAT31(uStack_10,uVar6);
      local_34 = (int ***)0x1;
      local_38 = (int ***)0x0;
      iVar3 = (*(code *)(*DAT_006886a4)[0xb])();
      if (iVar3 == 0) {
        DAT_0085af80 = DAT_0085af80 | 2;
      }
      iVar3 = (*(code *)(*DAT_006886a4)[0xb])();
      if (iVar3 == 0) {
        DAT_0085af80 = DAT_0085af80 | 4;
      }
      iVar3 = (*(code *)(*DAT_006886a4)[0xb])();
      if (iVar3 == 0) {
        DAT_0085af80 = DAT_0085af80 | 8;
      }
      iVar3 = (*(code *)(*DAT_006886a4)[0xb])();
      if (iVar3 == 0) {
        DAT_0085af80 = DAT_0085af80 | 0x10;
      }
      FUN_00561704(L"D3D Create Device :: Clear");
      (*(code *)(*DAT_006886a8)[0x24])();
      local_2c = DAT_006886b8;
      local_30 = (int ****)0x61f1c1;
      FUN_0061fc50(0,0,DAT_006886b4);
      local_2c = (int ***)0x0;
      local_30 = (int ****)0x0;
      local_34 = (int ***)0x0;
      local_38 = (int ***)0x0;
      FUN_0061fc94();
      local_2c = (int ***)0x61f1f6;
      FUN_00561704(L"D3D Create Device :: Texture Init");
      local_2c = (int ***)0x61f1fb;
      FUN_00620fd4();
      local_2c = (int ***)0x61f205;
      FUN_00561704(L"D3D Create Device :: Settings Init");
      local_2c = (int ***)0x61f20a;
      FUN_0061ed28();
      local_2c = (int ***)0x61f218;
      FUN_00561704(L"D3D Create Device :: Finished");
    }
    else {
      local_2c = (int ***)0x61eec9;
      FUN_004a17e4(&PTR_DAT_0061f4ac);
    }
  }
LAB_0061f218:
  pwVar2 = uStack_20;
  *in_FS_OFFSET = local_28;
  uStack_20 = (wchar_t *)&LAB_0061f24a;
  local_24 = (int ****)0x61f232;
  thunk_FUN_004072fc(&local_38,5,pwVar2);
  local_24 = (int ****)0x61f23a;
  FUN_0040b268(&local_24);
  local_24 = (int ****)0x61f242;
  thunk_FUN_004072d8(&local_8);
  return;
}
