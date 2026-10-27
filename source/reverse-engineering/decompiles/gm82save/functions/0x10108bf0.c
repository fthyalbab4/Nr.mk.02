// rea decompile_all
// name: FUN_10108bf0
// address: 0x10108bf0
// body: available
// range: 0x10108bf0-0x10108d97 inclusive
// range: 0x10108da0-0x10108f92 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 __cdecl
FUN_10108bf0(undefined4 param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,int param_6
            )

{
  code *pcVar1;
  HANDLE pvVar2;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  FARPROC pFVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  undefined4 extraout_ECX;
  int iVar13;
  int extraout_EDX;
  undefined4 uStack_1148;
  undefined4 uStack_1144;
  undefined4 uStack_1140;
  int iStack_113c;
  int iStack_1138;
  uint *puStack_1134;
  uint uStack_1130;
  undefined4 uStack_112c;
  undefined4 uStack_1128;
  undefined8 uStack_1124;
  undefined8 uStack_111c;
  undefined4 uStack_1114;
  uint local_1110;
  undefined4 local_110c;
  undefined4 uStack_1108;
  undefined4 uStack_1104;
  undefined4 uStack_1100;
  undefined4 uStack_10fc;
  undefined4 uStack_10f8;
  undefined4 uStack_10f4;
  undefined4 uStack_10f0;
  undefined4 uStack_10ec;
  undefined4 uStack_10e8;
  undefined4 uStack_10e4;
  undefined4 uStack_10e0;
  undefined4 uStack_10dc;
  undefined4 uStack_10d8;
  undefined4 uStack_10d4;
  undefined4 uStack_10d0;
  undefined4 uStack_10cc;
  undefined4 uStack_10c8;
  undefined4 uStack_10c4;
  undefined4 uStack_10c0;
  undefined4 uStack_10bc;
  undefined4 uStack_10b8;
  undefined4 uStack_10b4;
  undefined4 uStack_10b0;
  undefined4 uStack_10ac;
  undefined4 uStack_10a8;
  undefined4 uStack_10a4;
  undefined4 uStack_10a0;
  undefined4 uStack_109c;
  undefined4 uStack_1098;
  undefined4 uStack_1094;
  undefined4 uStack_1090;
  undefined4 uStack_108c;
  undefined4 uStack_1088;
  undefined4 uStack_1084;
  undefined4 uStack_1080;
  undefined4 uStack_107c;
  undefined4 uStack_1078;
  undefined4 uStack_1074;
  undefined4 uStack_1070;
  undefined4 uStack_106c;
  undefined4 uStack_1068;
  undefined4 uStack_1064;
  undefined4 uStack_1060;
  undefined4 uStack_105c;
  undefined4 uStack_1058;
  undefined4 uStack_1054;
  undefined4 uStack_1050;
  undefined4 uStack_104c;
  undefined4 uStack_1048;
  undefined4 uStack_1044;
  undefined4 uStack_1040;
  undefined4 uStack_103c;
  undefined4 uStack_1038;
  undefined4 uStack_1034;
  undefined4 uStack_1030;
  undefined4 uStack_102c;
  undefined4 uStack_1028;
  undefined4 uStack_1024;
  undefined4 uStack_1020;
  undefined4 uStack_101c;
  undefined4 uStack_1018;
  undefined4 uStack_1014;
  undefined4 local_1010 [14];
  undefined4 uStack_fd8;
  uint uStack_fc4;
  int local_fc0;
  WCHAR aWStack_fbc [2004];
  undefined4 uStack_14;

  uStack_14 = 0x10108c03;
  pvVar2 = GetCurrentProcess();
  pFVar3 = DAT_10163340;
  if (((DAT_10163340 == (FARPROC)0x0) &&
      (pFVar3 = GetProcAddress(DAT_1016330c,"SymFromInlineContextW"), pFVar3 == (FARPROC)0x0)) ||
     ((DAT_10163340 = pFVar3, pFVar4 = DAT_10163344, DAT_10163344 == (FARPROC)0x0 &&
      (pFVar4 = GetProcAddress(DAT_1016330c,"SymGetLineFromInlineContextW"), pFVar4 == (FARPROC)0x0)
      ))) {
LAB_10108f85:
    uVar10 = 0;
  }
  else {
    DAT_10163344 = pFVar4;
    pFVar4 = DAT_10163344;
    iVar13 = param_2 + -1;
    if (param_2 == 0) {
      iVar13 = 0;
    }
    if ((param_3 & 1) == 0) {
      pFVar5 = DAT_10163348;
      if (((DAT_10163348 == (FARPROC)0x0) &&
          (pFVar5 = GetProcAddress(DAT_1016330c,"SymAddrIncludeInlineTrace"), pFVar5 == (FARPROC)0x0
          )) || ((DAT_10163348 = pFVar5, pFVar6 = DAT_1016334c, DAT_1016334c == (FARPROC)0x0 &&
                 (pFVar6 = GetProcAddress(DAT_1016330c,"SymQueryInlineTrace"),
                 pFVar6 == (FARPROC)0x0)))) goto LAB_10108f85;
      DAT_1016334c = pFVar6;
      pFVar6 = DAT_1016334c;
      iVar7 = (*pFVar5)(pvVar2,iVar13,0);
      iVar12 = 1;
      local_1110 = 0;
      iVar8 = 0;
      param_4 = 0;
      if (iVar7 != 0) {
        local_1010[0] = 0;
        iVar8 = (*pFVar6)(pvVar2,iVar13,0,0,iVar13,0,iVar13,0,&local_1110,local_1010,pFVar6,iVar13);
        iVar12 = 1;
        if (iVar8 == 1) {
          iVar12 = iVar7 + 1;
          param_4 = local_1110;
        }
      }
      uVar11 = iVar12 + param_4;
      if (uVar11 <= param_4) {
        return CONCAT31((int3)((uint)iVar8 >> 8),1);
      }
    }
    else {
      uVar11 = param_4 + 1;
      if (uVar11 <= param_4) {
        return CONCAT31((int3)(param_3 >> 8),1);
      }
    }
    pcVar1 = *(code **)(param_6 + 0x10);
    do {
      memset(local_1010,0,0xff8);
      local_fc0 = 2000;
      local_1010[0] = 0x58;
      local_110c = 0;
      local_1110 = 0;
      uVar9 = (*pFVar3)(pvVar2,iVar13,0,param_4,&local_1110,local_1010);
      if (uVar9 == 1) {
        uStack_1020 = 0;
        uStack_101c = 0;
        uStack_1018 = 0;
        uStack_1014 = 0;
        uStack_1030 = 0;
        uStack_102c = 0;
        uStack_1028 = 0;
        uStack_1024 = 0;
        uStack_1040 = 0;
        uStack_103c = 0;
        uStack_1038 = 0;
        uStack_1034 = 0;
        uStack_1050 = 0;
        uStack_104c = 0;
        uStack_1048 = 0;
        uStack_1044 = 0;
        uStack_1060 = 0;
        uStack_105c = 0;
        uStack_1058 = 0;
        uStack_1054 = 0;
        uStack_1070 = 0;
        uStack_106c = 0;
        uStack_1068 = 0;
        uStack_1064 = 0;
        uStack_1080 = 0;
        uStack_107c = 0;
        uStack_1078 = 0;
        uStack_1074 = 0;
        uStack_1090 = 0;
        uStack_108c = 0;
        uStack_1088 = 0;
        uStack_1084 = 0;
        uStack_10a0 = 0;
        uStack_109c = 0;
        uStack_1098 = 0;
        uStack_1094 = 0;
        uStack_10b0 = 0;
        uStack_10ac = 0;
        uStack_10a8 = 0;
        uStack_10a4 = 0;
        uStack_10c0 = 0;
        uStack_10bc = 0;
        uStack_10b8 = 0;
        uStack_10b4 = 0;
        uStack_10d0 = 0;
        uStack_10cc = 0;
        uStack_10c8 = 0;
        uStack_10c4 = 0;
        uStack_10e0 = 0;
        uStack_10dc = 0;
        uStack_10d8 = 0;
        uStack_10d4 = 0;
        uStack_10f0 = 0;
        uStack_10ec = 0;
        uStack_10e8 = 0;
        uStack_10e4 = 0;
        uStack_1100 = 0;
        uStack_10fc = 0;
        uStack_10f8 = 0;
        uStack_10f4 = 0;
        local_1110 = 0;
        local_110c = 0;
        uStack_1108 = 0;
        uStack_1104 = 0;
        uVar9 = local_fc0 - 1U;
        if (uStack_fc4 <= local_fc0 - 1U) {
          uVar9 = uStack_fc4;
        }
        uVar9 = WideCharToMultiByte(0xfde9,0,aWStack_fbc,uVar9,(LPSTR)&local_1110,0x100,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        if (uVar9 == 0) {
          uVar9 = 0x100;
        }
        else if (0x100 < uVar9) goto LAB_10108de2;
        uStack_1148 = 0;
        uStack_111c = 0;
        uStack_1124 = 0;
        uStack_1114 = 0;
        uStack_1128 = 0x18;
        iStack_113c = (*pFVar4)(pvVar2,iVar13,0,param_4,0,0,&uStack_1148,&uStack_1128);
        uStack_1148 = 0;
        uStack_1144 = extraout_ECX;
        iStack_1138 = extraout_EDX;
        if (iStack_113c == 1) {
          iStack_1138 = -1;
          do {
            iVar8 = iStack_1138 * 2;
            iStack_1138 = iStack_1138 + 1;
          } while (*(short *)((int)uStack_111c + 2 + iVar8) != 0);
          uStack_1148 = 1;
          iStack_113c = (int)uStack_111c;
          uStack_1144 = uStack_1124._4_4_;
        }
        puStack_1134 = &local_1110;
        uStack_112c = uStack_fd8;
        uStack_1140 = uStack_1148;
        uStack_1130 = uVar9;
        uVar9 = (*pcVar1)(param_5,&uStack_1148);
      }
LAB_10108de2:
      param_4 = param_4 + 1;
    } while (param_4 != uVar11);
    uVar10 = CONCAT31((int3)(uVar9 >> 8),1);
  }
  return uVar10;
}
