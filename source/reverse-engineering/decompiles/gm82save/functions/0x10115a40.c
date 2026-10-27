// rea decompile_all
// name: FUN_10115a40
// address: 0x10115a40
// body: available
// range: 0x10115a40-0x10115c8c inclusive
// range: 0x10115c90-0x10115ccd inclusive
// range: 0x10115cd0-0x10115d3e inclusive
// range: 0x10115d40-0x10115da5 inclusive
// range: 0x10115db0-0x10115e4b inclusive
// range: 0x10115e50-0x10115e61 inclusive
// range: 0x10115e70-0x10115e92 inclusive
// range: 0x10115ea0-0x10115ef5 inclusive
// range: 0x10115f00-0x10115f70 inclusive
// range: 0x10115f80-0x10115fc8 inclusive
// range: 0x10115fd0-0x101163e6 inclusive
// range: 0x101163f0-0x10116884 inclusive
// range: 0x10116890-0x10116a0f inclusive
// range: 0x10116a59-0x10116b4c inclusive
// range: 0x10116ba5-0x10116bd5 inclusive
// range: 0x10116be0-0x10116e00 inclusive
// range: 0x10116e10-0x10116e4e inclusive
// range: 0x10116e50-0x1011701c inclusive
// range: 0x10117020-0x1011790b inclusive
// range: 0x10117910-0x10117988 inclusive
// range: 0x10117990-0x10117aa2 inclusive
// range: 0x10117ab0-0x10117bbd inclusive
// range: 0x10117bc0-0x10117d65 inclusive
// range: 0x10117d70-0x10117d90 inclusive
// range: 0x10117da0-0x101181de inclusive
// range: 0x101181e0-0x10118200 inclusive
// range: 0x10118210-0x10118c32 inclusive
// range: 0x10118c40-0x10119b7c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10116ba5) */
/* WARNING: Removing unreachable block (ram,0x101181dd) */
/* WARNING: Removing unreachable block (ram,0x10117d64) */
/* WARNING: Removing unreachable block (ram,0x10116883) */
/* WARNING: Removing unreachable block (ram,0x10116bd4) */
/* WARNING: Removing unreachable block (ram,0x10116c00) */
/* WARNING: Removing unreachable block (ram,0x10116c56) */
/* WARNING: Removing unreachable block (ram,0x10116c04) */
/* WARNING: Removing unreachable block (ram,0x10116c11) */
/* WARNING: Removing unreachable block (ram,0x10116c27) */
/* WARNING: Removing unreachable block (ram,0x10116cf2) */
/* WARNING: Removing unreachable block (ram,0x10116d05) */
/* WARNING: Removing unreachable block (ram,0x101172a8) */
/* WARNING: Removing unreachable block (ram,0x10116c35) */
/* WARNING: Removing unreachable block (ram,0x10116be0) */
/* WARNING: Removing unreachable block (ram,0x10116c77) */
/* WARNING: Removing unreachable block (ram,0x10116c82) */
/* WARNING: Removing unreachable block (ram,0x10116db4) */
/* WARNING: Removing unreachable block (ram,0x10116c8a) */
/* WARNING: Removing unreachable block (ram,0x10119a09) */
/* WARNING: Removing unreachable block (ram,0x10116c9f) */
/* WARNING: Removing unreachable block (ram,0x10116dc2) */
/* WARNING: Removing unreachable block (ram,0x10116cbb) */
/* WARNING: Removing unreachable block (ram,0x10116dda) */
/* WARNING: Removing unreachable block (ram,0x101172aa) */
/* WARNING: Removing unreachable block (ram,0x10116de3) */
/* WARNING: Removing unreachable block (ram,0x10116e2b) */
/* WARNING: Removing unreachable block (ram,0x10116e2f) */
/* WARNING: Removing unreachable block (ram,0x10116e10) */
/* WARNING: Removing unreachable block (ram,0x10116e36) */
/* WARNING: Removing unreachable block (ram,0x10116e50) */
/* WARNING: Removing unreachable block (ram,0x10116f9f) */
/* WARNING: Removing unreachable block (ram,0x10116fb0) */
/* WARNING: Removing unreachable block (ram,0x10119a17) */
/* WARNING: Removing unreachable block (ram,0x10116fe6) */
/* WARNING: Removing unreachable block (ram,0x1011702e) */
/* WARNING: Removing unreachable block (ram,0x10117033) */
/* WARNING: Removing unreachable block (ram,0x10117143) */
/* WARNING: Removing unreachable block (ram,0x10118f2b) */
/* WARNING: Removing unreachable block (ram,0x10117167) */
/* WARNING: Removing unreachable block (ram,0x101171a0) */
/* WARNING: Removing unreachable block (ram,0x1011721f) */
/* WARNING: Removing unreachable block (ram,0x10117230) */
/* WARNING: Removing unreachable block (ram,0x10117238) */
/* WARNING: Removing unreachable block (ram,0x101178c4) */
/* WARNING: Removing unreachable block (ram,0x101178d0) */
/* WARNING: Removing unreachable block (ram,0x10118455) */
/* WARNING: Removing unreachable block (ram,0x1011845f) */
/* WARNING: Removing unreachable block (ram,0x101178e1) */
/* WARNING: Removing unreachable block (ram,0x101183b9) */
/* WARNING: Removing unreachable block (ram,0x10118462) */
/* WARNING: Removing unreachable block (ram,0x10118468) */
/* WARNING: Removing unreachable block (ram,0x1011846b) */
/* WARNING: Removing unreachable block (ram,0x1011846e) */
/* WARNING: Removing unreachable block (ram,0x10119993) */
/* WARNING: Removing unreachable block (ram,0x1011847a) */
/* WARNING: Removing unreachable block (ram,0x1011847e) */
/* WARNING: Removing unreachable block (ram,0x10118493) */
/* WARNING: Removing unreachable block (ram,0x101190a7) */
/* WARNING: Removing unreachable block (ram,0x101184a1) */
/* WARNING: Removing unreachable block (ram,0x101184c0) */
/* WARNING: Removing unreachable block (ram,0x101184e1) */
/* WARNING: Removing unreachable block (ram,0x1011876e) */
/* WARNING: Removing unreachable block (ram,0x101184ef) */
/* WARNING: Removing unreachable block (ram,0x1011854f) */
/* WARNING: Removing unreachable block (ram,0x10118574) */
/* WARNING: Removing unreachable block (ram,0x1011857a) */
/* WARNING: Removing unreachable block (ram,0x10118590) */
/* WARNING: Removing unreachable block (ram,0x1011859b) */
/* WARNING: Removing unreachable block (ram,0x101185a2) */
/* WARNING: Removing unreachable block (ram,0x1011856b) */
/* WARNING: Removing unreachable block (ram,0x10118ea0) */
/* WARNING: Removing unreachable block (ram,0x101185a4) */
/* WARNING: Removing unreachable block (ram,0x101185c0) */
/* WARNING: Removing unreachable block (ram,0x101185c7) */
/* WARNING: Removing unreachable block (ram,0x10118631) */
/* WARNING: Removing unreachable block (ram,0x1011863f) */
/* WARNING: Removing unreachable block (ram,0x1011866b) */
/* WARNING: Removing unreachable block (ram,0x10118675) */
/* WARNING: Removing unreachable block (ram,0x101186b0) */
/* WARNING: Removing unreachable block (ram,0x10118686) */
/* WARNING: Removing unreachable block (ram,0x101186bc) */
/* WARNING: Removing unreachable block (ram,0x10118697) */
/* WARNING: Removing unreachable block (ram,0x101186c6) */
/* WARNING: Removing unreachable block (ram,0x10118672) */
/* WARNING: Removing unreachable block (ram,0x101186ca) */
/* WARNING: Removing unreachable block (ram,0x101186d8) */
/* WARNING: Removing unreachable block (ram,0x101186e1) */
/* WARNING: Removing unreachable block (ram,0x101186ed) */
/* WARNING: Removing unreachable block (ram,0x10118655) */
/* WARNING: Removing unreachable block (ram,0x101186fe) */
/* WARNING: Removing unreachable block (ram,0x10118720) */
/* WARNING: Removing unreachable block (ram,0x10118725) */
/* WARNING: Removing unreachable block (ram,0x10118661) */
/* WARNING: Removing unreachable block (ram,0x1011873e) */
/* WARNING: Removing unreachable block (ram,0x10118784) */
/* WARNING: Removing unreachable block (ram,0x1011872e) */
/* WARNING: Removing unreachable block (ram,0x1011873c) */
/* WARNING: Removing unreachable block (ram,0x10118744) */
/* WARNING: Removing unreachable block (ram,0x10118a8a) */
/* WARNING: Removing unreachable block (ram,0x1011874e) */
/* WARNING: Removing unreachable block (ram,0x1011878f) */
/* WARNING: Removing unreachable block (ram,0x101187af) */
/* WARNING: Removing unreachable block (ram,0x101187c2) */
/* WARNING: Removing unreachable block (ram,0x10118a17) */
/* WARNING: Removing unreachable block (ram,0x10118a25) */
/* WARNING: Removing unreachable block (ram,0x10118abf) */
/* WARNING: Removing unreachable block (ram,0x10118aed) */
/* WARNING: Removing unreachable block (ram,0x10118a35) */
/* WARNING: Removing unreachable block (ram,0x10118a39) */
/* WARNING: Removing unreachable block (ram,0x10118a40) */
/* WARNING: Removing unreachable block (ram,0x10118a4d) */
/* WARNING: Removing unreachable block (ram,0x10118a5e) */
/* WARNING: Removing unreachable block (ram,0x10118a62) */
/* WARNING: Removing unreachable block (ram,0x10118a64) */
/* WARNING: Removing unreachable block (ram,0x10118a6e) */
/* WARNING: Removing unreachable block (ram,0x10118a72) */
/* WARNING: Removing unreachable block (ram,0x10118aa8) */
/* WARNING: Removing unreachable block (ram,0x10118a7a) */
/* WARNING: Removing unreachable block (ram,0x101187cc) */
/* WARNING: Removing unreachable block (ram,0x101187e0) */
/* WARNING: Removing unreachable block (ram,0x10118825) */
/* WARNING: Removing unreachable block (ram,0x101187f3) */
/* WARNING: Removing unreachable block (ram,0x1011885e) */
/* WARNING: Removing unreachable block (ram,0x10118808) */
/* WARNING: Removing unreachable block (ram,0x1011886a) */
/* WARNING: Removing unreachable block (ram,0x10118882) */
/* WARNING: Removing unreachable block (ram,0x10118875) */
/* WARNING: Removing unreachable block (ram,0x101187d3) */
/* WARNING: Removing unreachable block (ram,0x101187b6) */
/* WARNING: Removing unreachable block (ram,0x101188a4) */
/* WARNING: Removing unreachable block (ram,0x10118948) */
/* WARNING: Removing unreachable block (ram,0x1011894d) */
/* WARNING: Removing unreachable block (ram,0x10118956) */
/* WARNING: Removing unreachable block (ram,0x101188b2) */
/* WARNING: Removing unreachable block (ram,0x1011895e) */
/* WARNING: Removing unreachable block (ram,0x101189b2) */
/* WARNING: Removing unreachable block (ram,0x10118969) */
/* WARNING: Removing unreachable block (ram,0x101188bb) */
/* WARNING: Removing unreachable block (ram,0x10118795) */
/* WARNING: Removing unreachable block (ram,0x101188c4) */
/* WARNING: Removing unreachable block (ram,0x101189de) */
/* WARNING: Removing unreachable block (ram,0x10118a12) */
/* WARNING: Removing unreachable block (ram,0x101188d8) */
/* WARNING: Removing unreachable block (ram,0x101188e0) */
/* WARNING: Removing unreachable block (ram,0x101188e7) */
/* WARNING: Removing unreachable block (ram,0x101188f4) */
/* WARNING: Removing unreachable block (ram,0x10118905) */
/* WARNING: Removing unreachable block (ram,0x10118912) */
/* WARNING: Removing unreachable block (ram,0x10118920) */
/* WARNING: Removing unreachable block (ram,0x1011892a) */
/* WARNING: Removing unreachable block (ram,0x1011892e) */
/* WARNING: Removing unreachable block (ram,0x10118995) */
/* WARNING: Removing unreachable block (ram,0x10118936) */
/* WARNING: Removing unreachable block (ram,0x10118797) */
/* WARNING: Removing unreachable block (ram,0x1011883a) */
/* WARNING: Removing unreachable block (ram,0x101187a1) */
/* WARNING: Removing unreachable block (ram,0x101185cd) */
/* WARNING: Removing unreachable block (ram,0x101185b0) */
/* WARNING: Removing unreachable block (ram,0x101185d4) */
/* WARNING: Removing unreachable block (ram,0x1011860f) */
/* WARNING: Removing unreachable block (ram,0x101185e5) */
/* WARNING: Removing unreachable block (ram,0x1011861b) */
/* WARNING: Removing unreachable block (ram,0x101185f6) */
/* WARNING: Removing unreachable block (ram,0x10118625) */
/* WARNING: Removing unreachable block (ram,0x1011862f) */
/* WARNING: Removing unreachable block (ram,0x101185b1) */
/* WARNING: Removing unreachable block (ram,0x10118fc5) */
/* WARNING: Removing unreachable block (ram,0x10118fca) */
/* WARNING: Removing unreachable block (ram,0x101185bb) */
/* WARNING: Removing unreachable block (ram,0x10118505) */
/* WARNING: Removing unreachable block (ram,0x1011852e) */
/* WARNING: Removing unreachable block (ram,0x1011853a) */
/* WARNING: Removing unreachable block (ram,0x1011854a) */
/* WARNING: Removing unreachable block (ram,0x101190fb) */
/* WARNING: Removing unreachable block (ram,0x10119148) */
/* WARNING: Removing unreachable block (ram,0x10119103) */
/* WARNING: Removing unreachable block (ram,0x10119120) */
/* WARNING: Removing unreachable block (ram,0x10119113) */
/* WARNING: Removing unreachable block (ram,0x1011912d) */
/* WARNING: Removing unreachable block (ram,0x101171a4) */
/* WARNING: Removing unreachable block (ram,0x101171e6) */
/* WARNING: Removing unreachable block (ram,0x10117244) */
/* WARNING: Removing unreachable block (ram,0x1011724b) */
/* WARNING: Removing unreachable block (ram,0x10117250) */
/* WARNING: Removing unreachable block (ram,0x10117257) */
/* WARNING: Removing unreachable block (ram,0x1011726b) */
/* WARNING: Removing unreachable block (ram,0x10117293) */
/* WARNING: Removing unreachable block (ram,0x1011703b) */
/* WARNING: Removing unreachable block (ram,0x10117043) */
/* WARNING: Removing unreachable block (ram,0x101170a5) */
/* WARNING: Removing unreachable block (ram,0x101170b6) */
/* WARNING: Removing unreachable block (ram,0x10117103) */
/* WARNING: Removing unreachable block (ram,0x101170c7) */
/* WARNING: Removing unreachable block (ram,0x101170f0) */
/* WARNING: Removing unreachable block (ram,0x1011711f) */
/* WARNING: Removing unreachable block (ram,0x10117044) */
/* WARNING: Removing unreachable block (ram,0x101170f2) */
/* WARNING: Removing unreachable block (ram,0x10117046) */
/* WARNING: Removing unreachable block (ram,0x1011704f) */
/* WARNING: Removing unreachable block (ram,0x10117020) */
/* WARNING: Removing unreachable block (ram,0x101171e8) */
/* WARNING: Removing unreachable block (ram,0x101172ac) */
/* WARNING: Removing unreachable block (ram,0x10116e5a) */
/* WARNING: Removing unreachable block (ram,0x10116e78) */
/* WARNING: Removing unreachable block (ram,0x10116e40) */
/* WARNING: Removing unreachable block (ram,0x10116e7d) */
/* WARNING: Removing unreachable block (ram,0x10116f65) */
/* WARNING: Removing unreachable block (ram,0x10116e98) */
/* WARNING: Removing unreachable block (ram,0x10116f7c) */
/* WARNING: Removing unreachable block (ram,0x10116eb1) */
/* WARNING: Removing unreachable block (ram,0x10116f92) */
/* WARNING: Removing unreachable block (ram,0x10116ed8) */
/* WARNING: Removing unreachable block (ram,0x10116e48) */
/* WARNING: Removing unreachable block (ram,0x10116e14) */
/* WARNING: Removing unreachable block (ram,0x10116efc) */
/* WARNING: Removing unreachable block (ram,0x10116f35) */
/* WARNING: Removing unreachable block (ram,0x10116e1e) */
/* WARNING: Removing unreachable block (ram,0x10116e22) */
/* WARNING: Removing unreachable block (ram,0x10116be6) */
/* WARNING: Removing unreachable block (ram,0x10116c39) */
/* WARNING: Removing unreachable block (ram,0x10116c48) */
/* WARNING: Removing unreachable block (ram,0x10116c54) */
/* WARNING: Removing unreachable block (ram,0x10116bee) */
/* WARNING: Removing unreachable block (ram,0x10119b4b) */
/* WARNING: Removing unreachable block (ram,0x101198f1) */
/* WARNING: Removing unreachable block (ram,0x10119b52) */

void __fastcall FUN_10115a40(uint *param_1,uint *param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  byte bVar5;
  ushort uVar6;
  void *pvVar7;
  undefined4 uVar8;
  undefined *puVar9;
  HANDLE hObject;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  _PROCESS_INFORMATION _Var13;
  _PROCESS_INFORMATION _Var14;
  char cVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  char cVar18;
  undefined1 uVar19;
  _PROCESS_INFORMATION *p_Var20;
  int iVar21;
  HANDLE pvVar22;
  _PROCESS_INFORMATION *p_Var23;
  LPVOID pvVar24;
  LPVOID pvVar25;
  undefined4 *puVar26;
  HANDLE pvVar27;
  code *pcVar28;
  HANDLE pvVar29;
  DWORD DVar30;
  short *psVar31;
  short *psVar32;
  LPWSTR pWVar33;
  LPWSTR pWVar34;
  _PROCESS_INFORMATION *p_Var35;
  undefined2 *puVar36;
  HANDLE pvVar37;
  BOOL BVar38;
  HANDLE *ppvVar39;
  LPBYTE pBVar40;
  undefined1 *puVar41;
  uint *puVar42;
  byte *pbVar43;
  LPVOID pvVar44;
  LPCWSTR pWVar45;
  undefined1 *puVar46;
  int extraout_EDX;
  uint *puVar47;
  int iVar48;
  LPCWSTR pWVar49;
  _STARTUPINFOW *p_Var50;
  byte *pbVar51;
  LPWSTR extraout_EDX_00;
  LPWSTR pWVar52;
  SIZE_T SVar53;
  uint *puVar54;
  short sVar55;
  undefined2 uVar56;
  undefined2 uVar57;
  _PROCESS_INFORMATION *unaff_EBX;
  uint uVar58;
  int iVar59;
  LPCWSTR pWVar60;
  _PROCESS_INFORMATION *p_Var61;
  uint uVar62;
  uint uVar63;
  LPVOID pvVar64;
  int *piVar65;
  LPWSTR pWVar66;
  int iVar67;
  undefined **ppuVar68;
  bool bVar69;
  bool bVar70;
  _STARTUPINFOW *local_4e0;
  LPWSTR local_4dc;
  _STARTUPINFOW *local_4d0;
  undefined **local_4cc;
  undefined4 local_4c8;
  undefined2 uStack_4c2;
  undefined **local_4b8;
  undefined1 local_4b4 [60];
  _PROCESS_INFORMATION local_478;
  undefined8 local_468;
  LPVOID local_460;
  undefined4 local_45c;
  undefined4 uStack_458;
  undefined **local_454;
  undefined1 *local_450;
  undefined2 *local_44c;
  LPWSTR local_448;
  HANDLE local_444;
  undefined8 local_440;
  ulonglong local_438;
  _PROCESS_INFORMATION local_430;
  uint local_420;
  HANDLE local_41c;
  uint local_418;
  uint local_414;
  _STARTUPINFOW local_410 [15];

  p_Var35 = (_PROCESS_INFORMATION *)param_2[0x14];
  local_420 = 0;
  local_4b4._52_4_ = (undefined **)0x10115a52;
  bVar5 = (byte)param_2[0x15];
  local_44c = (undefined2 *)CONCAT31(local_44c._1_3_,p_Var35 != (_PROCESS_INFORMATION *)0x0 | bVar5)
  ;
  local_4b4._56_4_ = param_1;
  if (p_Var35 != (_PROCESS_INFORMATION *)0x0 || (bVar5 & 1) != 0) {
    cVar18 = *(char *)((int)param_2 + 0x55);
    local_45c = (LPVOID)0x0;
    local_454 = (undefined **)0x0;
    if ((bVar5 & 1) == 0) {
      p_Var20 = (_PROCESS_INFORMATION *)GetEnvironmentStringsW();
      p_Var23 = p_Var20;
      if (p_Var20 == (_PROCESS_INFORMATION *)0x0) {
        DVar30 = GetLastError();
        local_4b4._0_8_ = CONCAT44(DVar30,(int)local_4b4._0_8_) & 0xffffffffffffff00;
        local_410[0].cb._0_1_ = (char)local_4b4;
        local_410[0].cb._1_1_ = (undefined1)((uint)local_4b4 >> 8);
        local_410[0].cb._2_1_ = (undefined1)((uint)local_4b4 >> 0x10);
        local_410[0].cb._3_1_ = (undefined1)((uint)local_4b4 >> 0x18);
        local_410[0].lpReserved._0_2_ = 0xf950;
        local_410[0].lpReserved._2_2_ = 0x1010;
        FUN_101369c0(&DAT_1015855d,local_410,&PTR_s_C__Users_runneradmin__rustup_too_10158604);
                    /* WARNING: Does not return */
        pcVar28 = (code *)invalidInstructionException();
        (*pcVar28)();
      }
LAB_10115ad0:
      p_Var61 = p_Var23;
      if (*(WCHAR *)&p_Var61->hProcess != L'\0') {
        uVar62 = 0;
        iVar67 = -2;
        do {
          iVar21 = iVar67;
          uVar58 = uVar62;
          uVar62 = uVar58 + 1;
          iVar67 = iVar21 + 2;
        } while (*(LPWCH)((int)&p_Var61->hProcess + uVar58 * 2) != L'\0');
        p_Var23 = (_PROCESS_INFORMATION *)((int)&p_Var61->hProcess + uVar58 * 2 + 2);
        unaff_EBX = p_Var61;
        if (uVar58 != 1) {
          if (uVar58 == 0) {
            FUN_10136a50(1,0,0,&PTR_s_C__Users_runneradmin__rustup_too_10159114);
                    /* WARNING: Does not return */
            pcVar28 = (code *)invalidInstructionException();
            (*pcVar28)();
          }
          uVar62 = 0;
          do {
            if (*(short *)((int)&p_Var61->hProcess + uVar62 * 2 + 2) == 0x3d) {
              if (uVar58 <= uVar62) {
                FUN_10136a50(0,uVar62 + 1,uVar58,&PTR_s_C__Users_runneradmin__rustup_too_10159104);
                    /* WARNING: Does not return */
                pcVar28 = (code *)invalidInstructionException();
                (*pcVar28)();
              }
              FUN_10093310((undefined8 *)&local_478,(ushort *)p_Var61,uVar62 + 1);
              uVar63 = uVar62 + 2;
              if (uVar58 < uVar63) {
                FUN_10136a50(uVar63,uVar58,uVar58,&PTR_s_C__Users_runneradmin__rustup_too_101590f4);
                    /* WARNING: Does not return */
                pcVar28 = (code *)invalidInstructionException();
                (*pcVar28)();
              }
              FUN_10093310((undefined8 *)&local_410[0].dwX,
                           (ushort *)((int)&p_Var61->hThread + uVar62 * 2),uVar58 - uVar63);
              _Var13 = local_478;
              local_4b4._0_4_ = local_478.hProcess;
              local_4b4._4_4_ = local_478.hThread;
              uVar4 = local_4b4._0_8_;
              local_410[0].cb._0_1_ = (char)_Var13.hProcess;
              cVar15 = (char)local_410[0].cb;
              local_410[0].cb._1_1_ = _Var13.hProcess._1_1_;
              uVar19 = local_410[0].cb._1_1_;
              local_410[0].cb._2_1_ = _Var13.hProcess._2_1_;
              uVar16 = local_410[0].cb._2_1_;
              local_410[0].cb._3_1_ = _Var13.hProcess._3_1_;
              uVar17 = local_410[0].cb._3_1_;
              local_410[0].lpReserved._0_2_ = _Var13.hThread._0_2_;
              uVar56 = local_410[0].lpReserved._0_2_;
              local_410[0].lpReserved._2_2_ = _Var13.hThread._2_2_;
              uVar57 = local_410[0].lpReserved._2_2_;
              local_4b4._8_4_ = local_478.dwProcessId;
              local_4b4._12_4_ = local_478.dwThreadId;
              uVar10 = local_4b4._8_8_;
              local_4b4._0_4_ = _Var13.hProcess;
              local_4b4._18_2_ = local_410[0].dwX._2_2_;
              local_4b4._16_2_ = (ushort)local_410[0].dwX;
              local_4b4._20_2_ = (undefined2)local_410[0].dwY;
              local_4b4._22_2_ = local_410[0].dwY._2_2_;
              local_4b4._24_4_ = local_410[0].dwXSize;
              local_4b4._28_4_ = local_410[0].dwYSize;
              bVar69 = (HANDLE)local_4b4._0_4_ == (HANDLE)0xffffffff;
              local_4b4._0_8_ = uVar4;
              local_478 = _Var13;
              if (bVar69) goto LAB_10115c5c;
              local_4b4._4_4_ = _Var13.hThread;
              local_4b4._8_4_ = _Var13.dwProcessId;
              local_478._4_12_ = _Var13._4_12_;
              local_478.hProcess = (HANDLE)local_4b4._4_4_;
              _Var14 = local_478;
              local_478._10_6_ = _Var13._10_6_;
              local_478._0_8_ = _Var14._0_8_;
              local_478.dwProcessId._0_2_ = 0;
              local_478.hThread = (HANDLE)(local_4b4._8_4_ + local_4b4._4_4_);
              local_4b4._8_8_ = uVar10;
              FUN_10113a10((undefined8 *)&local_410[0].dwX,(int *)&local_478);
              local_4c8._0_2_ = (undefined2)_Var13.dwProcessId;
              local_4c8._2_2_ = _Var13.dwProcessId._2_2_;
              uStack_4c2 = _Var13.dwThreadId._2_2_;
              local_410[0].lpDesktop._0_2_ = (undefined2)local_4c8;
              local_410[0].lpDesktop._2_2_ = local_4c8._2_2_;
              local_410[0].lpTitle._0_1_ = (undefined1)_Var13.dwThreadId;
              local_410[0].lpTitle._1_1_ = _Var13.dwThreadId._1_1_;
              local_410[0].lpTitle._2_2_ = uStack_4c2;
              local_410[0].cb._0_1_ = cVar15;
              local_410[0].cb._1_1_ = uVar19;
              local_410[0].cb._2_1_ = uVar16;
              local_410[0].cb._3_1_ = uVar17;
              local_410[0].lpReserved._0_2_ = uVar56;
              local_410[0].lpReserved._2_2_ = uVar57;
              FUN_10113bc0((undefined8 *)&local_478,&local_45c,(int *)local_410,
                           (undefined8 *)(local_4b4 + 0x10));
              unaff_EBX = &local_478;
              if (0 < (int)local_478.hProcess) {
                pvVar27 = local_478.hThread;
                pvVar22 = GetProcessHeap();
                HeapFree(pvVar22,0,pvVar27);
              }
              break;
            }
            uVar62 = uVar62 + 1;
            iVar21 = iVar21 + -2;
          } while (iVar21 != 0);
        }
        goto LAB_10115ad0;
      }
LAB_10115c5c:
      FreeEnvironmentStringsW((LPWCH)p_Var20);
    }
    p_Var23 = (_PROCESS_INFORMATION *)param_2[0x12];
    if (p_Var23 != (_PROCESS_INFORMATION *)0x0 && p_Var35 != (_PROCESS_INFORMATION *)0x0) {
      unaff_EBX = (_PROCESS_INFORMATION *)0x0;
      uVar62 = param_2[0x13];
      p_Var20 = p_Var35;
      do {
        pWVar60 = uStack_458;
        pvVar25 = local_45c;
        if (unaff_EBX == (_PROCESS_INFORMATION *)0x0) {
          uVar58 = 0;
          p_Var35 = p_Var23;
          for (; uVar62 != 0; uVar62 = uVar62 - 1) {
            p_Var35 = (_PROCESS_INFORMATION *)p_Var35[0x1e].dwThreadId;
          }
          p_Var23 = (_PROCESS_INFORMATION *)0x0;
          if (*(short *)((int)&p_Var35[0x1e].dwProcessId + 2) == 0) goto LAB_10115d00;
        }
        else {
          p_Var35 = unaff_EBX;
          uVar58 = uVar62;
          if (*(ushort *)((int)&unaff_EBX[0x1e].dwProcessId + 2) <= uVar62) {
LAB_10115d00:
            do {
              p_Var61 = p_Var35[0xb].hProcess;
              if (p_Var61 == (_PROCESS_INFORMATION *)0x0) {
                FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_10156d58);
                    /* WARNING: Does not return */
                pcVar28 = (code *)invalidInstructionException();
                (*pcVar28)();
              }
              uVar6 = (ushort)p_Var35[0x1e].dwProcessId;
              p_Var23 = (_PROCESS_INFORMATION *)((int)&p_Var23->hProcess + 1);
              p_Var35 = p_Var61;
              uVar58 = (uint)uVar6;
            } while (*(ushort *)((int)&p_Var61[0x1e].dwProcessId + 2) <= uVar6);
          }
        }
        if (p_Var23 == (_PROCESS_INFORMATION *)0x0) {
          uVar62 = uVar58 + 1;
          unaff_EBX = p_Var35;
        }
        else {
          ppvVar39 = &p_Var35[0x1f].hProcess + uVar58;
          do {
            unaff_EBX = *ppvVar39;
            p_Var23 = (_PROCESS_INFORMATION *)((int)&p_Var23[-1].dwThreadId + 3);
            ppvVar39 = (HANDLE *)&unaff_EBX[0x1e].dwThreadId;
          } while (p_Var23 != (_PROCESS_INFORMATION *)0x0);
          uVar62 = 0;
        }
        if (p_Var35[uVar58].hProcess == (HANDLE)0xffffffff) {
          if (local_45c != (LPVOID)0x0) {
            pWVar45 = *(LPCWSTR *)((int)p_Var35 + (uVar58 * 0xe + 100) * 2);
            iVar67 = *(int *)((int)p_Var35 + (uVar58 * 0xe + 0x66) * 2);
            pvVar44 = (LPVOID)(uint)*(ushort *)((int)local_45c + 0x1ea);
            pWVar49 = uStack_458;
            pvVar24 = local_45c;
            if (pvVar44 == (LPVOID)0x0) goto LAB_10115e70;
LAB_10115dee:
            piVar65 = (int *)((int)pvVar24 + 0xcc);
            iVar21 = (int)pvVar44 * 0x1c;
            pvVar64 = (LPVOID)0x0;
            local_4b4._44_4_ = pvVar44;
LAB_10115e10:
            pvVar44 = pvVar64;
            iVar59 = CompareStringOrdinal(pWVar45,iVar67,(LPCWSTR)piVar65[-1],*piVar65,1);
            if (2 < iVar59 - 1U) {
              DVar30 = GetLastError();
              p_Var50 = local_410;
              local_4b4._0_8_ = CONCAT44(DVar30,(int)local_4b4._0_8_) & 0xffffffffffffff00;
              local_410[0].cb._0_1_ = (char)local_4b4;
              local_410[0].cb._1_1_ = (undefined1)((uint)local_4b4 >> 8);
              local_410[0].cb._2_1_ = (undefined1)((uint)local_4b4 >> 0x10);
              local_410[0].cb._3_1_ = (undefined1)((uint)local_4b4 >> 0x18);
              local_410[0].lpReserved._0_2_ = 0xf950;
              local_410[0].lpReserved._2_2_ = 0x1010;
              goto LAB_101178b0;
            }
            if (iVar59 - 1U == 2) goto code_r0x10115e35;
            if (iVar59 != 1) {
              local_4b4[0x33] = '\0';
              if (pWVar49 == (LPCWSTR)0x0) {
                local_4b4._4_4_ = 0;
                local_4b4._0_4_ = pvVar24;
                local_4b4._8_4_ = pvVar44;
                FUN_10114a70(local_410,(uint *)local_4b4,local_4b4 + 0x33);
              }
              else {
                local_430.hProcess = *(HANDLE *)((int)pvVar24 + (int)pvVar44 * 4 + 0x1ec);
                for (pbVar51 = (byte *)((int)pWVar49 - 1); pbVar51 != (byte *)0x0;
                    pbVar51 = pbVar51 + -1) {
                  local_430.hProcess =
                       *(HANDLE *)
                        ((int)local_430.hProcess +
                        (uint)*(ushort *)((int)local_430.hProcess + 0x1ea) * 4 + 0x1ec);
                }
                local_430.hThread = (LPCWSTR)0x0;
                local_430.dwProcessId = *(ushort *)((int)local_430.hProcess + 0x1ea) - 1;
                FUN_10114a70(local_410,(uint *)&local_430,local_4b4 + 0x33);
                uVar10 = CONCAT26(local_410[0].lpTitle._2_2_,
                                  CONCAT15(local_410[0].lpTitle._1_1_,
                                           CONCAT14(local_410[0].lpTitle._0_1_,
                                                    CONCAT22(local_410[0].lpDesktop._2_2_,
                                                             local_410[0].lpDesktop._0_2_))));
                local_478.hProcess =
                     (HANDLE)CONCAT13(local_410[0].cb._3_1_,
                                      CONCAT12(local_410[0].cb._2_1_,
                                               CONCAT11(local_410[0].cb._1_1_,(char)local_410[0].cb)
                                              ));
                uVar4 = CONCAT26(local_410[0].lpReserved._2_2_,
                                 CONCAT24(local_410[0].lpReserved._0_2_,local_478.hProcess));
                local_468 = CONCAT26(local_410[0].dwY._2_2_,
                                     CONCAT24((undefined2)local_410[0].dwY,
                                              CONCAT22(local_410[0].dwX._2_2_,
                                                       (ushort)local_410[0].dwX)));
                local_460 = (LPVOID)local_410[0].dwXSize;
                local_478.dwProcessId =
                     CONCAT22(local_410[0].lpDesktop._2_2_,local_410[0].lpDesktop._0_2_);
                local_478.dwThreadId = (int)((ulonglong)uVar10 >> 0x20);
                local_478.hThread = (HANDLE)(int)((ulonglong)uVar4 >> 0x20);
                local_440 = CONCAT44(local_410[0].dwXCountChars,local_410[0].dwYSize);
                local_438 = CONCAT44(local_410[0].dwFillAttribute,local_410[0].dwYCountChars);
                DVar30 = local_410[0].dwFlags;
                pBVar40 = local_410[0].lpReserved2;
                if ((LPBYTE)(uint)*(ushort *)(local_410[0].dwFlags + 0x1ea) <=
                    local_410[0].lpReserved2) {
                  do {
                    puVar2 = (ushort *)(DVar30 + 0x1e8);
                    pBVar40 = (LPBYTE)(uint)*puVar2;
                    DVar30 = *(DWORD *)(DVar30 + 0xb0);
                  } while (*(ushort *)(DVar30 + 0x1ea) <= *puVar2);
                }
                iVar67 = (int)pBVar40 * 0x1c;
                iVar21 = (int)pBVar40 * 0x10;
                local_4b4._24_4_ = *(uint *)(DVar30 + 0xcc + iVar67);
                local_4b4._16_8_ = *(ulonglong *)(DVar30 + 0xc4 + iVar67);
                uVar3 = *(ulonglong *)(DVar30 + 0xb4 + iVar67);
                local_4b4._8_8_ = *(ulonglong *)(DVar30 + 0xbc + iVar67);
                *(DWORD *)(DVar30 + 0xcc + iVar67) = local_410[0].dwXSize;
                *(undefined8 *)(DVar30 + 0xc4 + iVar67) = local_468;
                *(undefined8 *)(DVar30 + 0xbc + iVar67) = uVar10;
                *(undefined8 *)(DVar30 + 0xb4 + iVar67) = uVar4;
                uVar4 = *(undefined8 *)(DVar30 + 8 + iVar21);
                local_4b4._36_4_ = (undefined4)uVar4;
                local_4b4._40_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
                local_4b4._28_4_ = (undefined4)*(undefined8 *)(DVar30 + iVar21);
                local_4b4._32_4_ = (undefined4)((ulonglong)*(undefined8 *)(DVar30 + iVar21) >> 0x20)
                ;
                *(ulonglong *)(DVar30 + 8 + iVar21) = local_438;
                *(undefined8 *)(DVar30 + iVar21) = local_440;
                local_4b4._4_2_ = (undefined2)(uVar3 >> 0x20);
                local_4b4._6_2_ = (undefined2)(uVar3 >> 0x30);
                local_410[0].lpDesktop._0_2_ = (undefined2)local_4b4._8_8_;
                local_410[0].lpDesktop._2_2_ = (undefined2)((ulonglong)local_4b4._8_8_ >> 0x10);
                local_410[0].lpTitle._0_1_ = (undefined1)((ulonglong)local_4b4._8_8_ >> 0x20);
                local_410[0].lpTitle._1_1_ = (undefined1)((ulonglong)local_4b4._8_8_ >> 0x28);
                local_410[0].lpTitle._2_2_ = (undefined2)((ulonglong)local_4b4._8_8_ >> 0x30);
                local_410[0].cb._0_1_ = (char)uVar3;
                local_410[0].cb._1_1_ = (undefined1)(uVar3 >> 8);
                local_410[0].cb._2_1_ = (undefined1)(uVar3 >> 0x10);
                local_410[0].cb._3_1_ = (undefined1)(uVar3 >> 0x18);
                local_410[0].lpReserved._0_2_ = local_4b4._4_2_;
                local_410[0].lpReserved._2_2_ = local_4b4._6_2_;
                local_410[0].dwYSize = local_4b4._28_4_;
                local_410[0].dwFillAttribute = local_4b4._40_4_;
                local_410[0].dwX._0_2_ = (ushort)local_4b4._16_8_;
                local_410[0].dwX._2_2_ = (undefined2)((ulonglong)local_4b4._16_8_ >> 0x10);
                local_410[0].dwY._0_2_ = (undefined2)((ulonglong)local_4b4._16_8_ >> 0x20);
                local_410[0].dwY._2_2_ = (undefined2)((ulonglong)local_4b4._16_8_ >> 0x30);
                local_410[0].dwXCountChars = local_4b4._32_4_;
                local_410[0].dwYCountChars = local_4b4._36_4_;
                local_4b4._0_8_ = uVar3;
                local_410[0].dwXSize = local_4b4._24_4_;
              }
              ppuVar68 = (undefined **)local_410[0].dwXCountChars;
              DVar30 = local_410[0].dwYSize;
              pvVar24 = (LPVOID)CONCAT22(local_410[0].lpReserved._2_2_,local_410[0].lpReserved._0_2_
                                        );
              local_454 = (undefined **)((int)local_454 + -1);
              iVar67 = CONCAT13(local_410[0].cb._3_1_,
                                CONCAT12(local_410[0].cb._2_1_,
                                         CONCAT11(local_410[0].cb._1_1_,(char)local_410[0].cb)));
              iVar21 = CONCAT22(local_410[0].dwX._2_2_,(ushort)local_410[0].dwX);
              pvVar44 = (LPVOID)CONCAT22(local_410[0].dwY._2_2_,(undefined2)local_410[0].dwY);
              if (local_4b4[0x33] == '\x01') {
                if (pWVar60 == (LPCWSTR)0x0) {
                  FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_1015671c);
                    /* WARNING: Does not return */
                  pcVar28 = (code *)invalidInstructionException();
                  (*pcVar28)();
                }
                uStack_458 = (LPCWSTR)((int)pWVar60 - 1);
                local_45c = *(LPVOID *)((int)pvVar25 + 0x1ec);
                *(undefined4 *)((int)local_45c + 0xb0) = 0;
                pvVar27 = GetProcessHeap();
                HeapFree(pvVar27,0,pvVar25);
              }
              if (iVar67 != -1) {
                if (iVar67 != 0) {
                  pvVar27 = GetProcessHeap();
                  HeapFree(pvVar27,0,pvVar24);
                }
                if (iVar21 != 0) {
                  pvVar27 = GetProcessHeap();
                  HeapFree(pvVar27,0,pvVar44);
                }
                if ((byte *)0xfffffffd < (byte *)(DVar30 - 1)) goto LAB_10115ca4;
                goto LAB_10115c94;
              }
              goto LAB_10115ca4;
            }
            goto LAB_10115e72;
          }
          goto LAB_10115ca4;
        }
        SVar53 = *(SIZE_T *)((int)p_Var35 + (uVar58 * 0xe + 0x5e) * 2);
        if (SVar53 == 0) {
          local_4c8 = (LPVOID)0x1;
        }
        else {
          pvVar7 = *(void **)((int)p_Var35 + (uVar58 * 0xe + 0x5c) * 2);
          local_4c8 = FUN_10107380(0,SVar53);
          if (local_4c8 == (LPVOID)0x0) goto LAB_1011995c;
          memcpy(local_4c8,pvVar7,SVar53);
        }
        pvVar25 = *(LPVOID *)((int)p_Var35 + (uVar58 * 0xe + 0x66) * 2);
        uVar19 = (undefined1)*(LPWCH)((int)p_Var35 + (uVar58 * 0xe + 0x60) * 2);
        if (pvVar25 == (LPVOID)0x0) {
          pvVar24 = (LPVOID)0x2;
        }
        else {
          pvVar7 = *(void **)((int)p_Var35 + (uVar58 * 0xe + 100) * 2);
          local_4b4._44_4_ = (int)pvVar25 * 2;
          pvVar24 = FUN_10107380(0,local_4b4._44_4_);
          if (pvVar24 == (LPVOID)0x0) {
            FUN_101366bc(2);
                    /* WARNING: Does not return */
            pcVar28 = (code *)invalidInstructionException();
            (*pcVar28)();
          }
          memcpy(pvVar24,pvVar7,(int)pvVar25 * 2);
        }
        local_410[0].cb._0_1_ = (char)SVar53;
        local_410[0].cb._1_1_ = (undefined1)(SVar53 >> 8);
        local_410[0].cb._2_1_ = (undefined1)(SVar53 >> 0x10);
        local_410[0].cb._3_1_ = (undefined1)(SVar53 >> 0x18);
        local_410[0].lpReserved._0_2_ = SUB42(local_4c8,0);
        local_410[0].lpReserved._2_2_ = (undefined2)((uint)local_4c8 >> 0x10);
        local_410[0].lpDesktop._0_2_ = (undefined2)SVar53;
        local_410[0].lpDesktop._2_2_ = (undefined2)(SVar53 >> 0x10);
        local_410[0].dwX._0_2_ = (ushort)pvVar25;
        local_410[0].dwX._2_2_ = (undefined2)((uint)pvVar25 >> 0x10);
        local_410[0].dwY._0_2_ = SUB42(pvVar24,0);
        local_410[0].dwY._2_2_ = (undefined2)((uint)pvVar24 >> 0x10);
        pWVar66 = (LPWSTR)p_Var35[uVar58].dwProcessId;
        local_410[0].lpTitle._0_1_ = uVar19;
        local_410[0].dwXSize = (DWORD)pvVar25;
        if (pWVar66 == (LPWSTR)0x0) {
          pvVar25 = (LPVOID)0x1;
        }
        else {
          pvVar7 = p_Var35[uVar58].hThread;
          pvVar25 = FUN_10107380(0,(SIZE_T)pWVar66);
          if (pvVar25 == (LPVOID)0x0) {
LAB_1011995c:
            FUN_101366bc(1);
                    /* WARNING: Does not return */
            pcVar28 = (code *)invalidInstructionException();
            (*pcVar28)();
          }
          memcpy(pvVar25,pvVar7,(size_t)pWVar66);
        }
        local_4b4._4_4_ = pvVar25;
        local_4b4._0_4_ = pWVar66;
        local_4b4[0xc] = (char)p_Var35[uVar58].dwThreadId;
        local_4b4._8_4_ = pWVar66;
        FUN_10113bc0((undefined8 *)&local_478,&local_45c,(int *)local_410,(undefined8 *)local_4b4);
        if (0 < (int)local_478.hProcess) {
          ppuVar68 = local_478.hThread;
LAB_10115c94:
          pvVar27 = GetProcessHeap();
          HeapFree(pvVar27,0,ppuVar68);
        }
LAB_10115ca4:
        p_Var23 = (_PROCESS_INFORMATION *)0x0;
        p_Var20 = (_PROCESS_INFORMATION *)((int)&p_Var20[-1].dwThreadId + 3);
        p_Var35 = (_PROCESS_INFORMATION *)0x0;
      } while (p_Var20 != (_PROCESS_INFORMATION *)0x0);
    }
    pvVar25 = local_45c;
    local_4b8 = local_45c;
    local_430.dwThreadId = (DWORD)uStack_458;
    local_4cc = local_454;
    if (cVar18 == '\0' && (bVar5 & 1) == 0) {
      puVar46 = (undefined1 *)param_2[8];
      unaff_EBX = p_Var35;
      goto joined_r0x1011641d;
    }
    puVar26 = FUN_10107380(0,4);
    if (puVar26 == (undefined4 *)0x0) {
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar28 = (code *)invalidInstructionException();
      (*pcVar28)();
    }
    *puVar26 = 0x48544150;
    local_4b4._4_4_ = puVar26 + 1;
    local_4b4._0_4_ = puVar26;
    local_4b4._8_8_ = local_4b4._8_8_ & 0xffffffffffff0000;
    FUN_10113a10((undefined8 *)&local_410[0].dwX,(int *)local_4b4);
    DVar30 = local_410[0].dwXSize;
    pWVar60 = (LPCWSTR)CONCAT22(local_410[0].dwY._2_2_,(undefined2)local_410[0].dwY);
    pWVar45 = (LPCWSTR)local_430.dwThreadId;
    if (pvVar25 != (LPVOID)0x0) {
      do {
        uVar58 = (uint)*(ushort *)((int)pvVar25 + 0x1ea);
        unaff_EBX = (_PROCESS_INFORMATION *)0x0;
        uVar62 = 0;
        if (uVar58 != 0) {
          uVar63 = 0;
          iVar67 = uVar58 * 0x1c;
          unaff_EBX = (_PROCESS_INFORMATION *)((int)pvVar25 + 0xcc);
          do {
            iVar21 = CompareStringOrdinal
                               (pWVar60,DVar30,(LPCWSTR)unaff_EBX[-1].dwThreadId,
                                (int)unaff_EBX->hProcess,1);
            if (2 < iVar21 - 1U) {
              pvVar27 = (HANDLE)GetLastError();
              _Var13 = local_478;
              local_478.hProcess = (HANDLE)(local_478._1_4_ << 8);
              local_478._8_8_ = _Var13._8_8_;
              local_478.hThread = pvVar27;
              p_Var50 = (_STARTUPINFOW *)local_4b4;
              local_4b4._4_4_ = FUN_1010f950;
              local_4b4._0_4_ = &local_478;
LAB_101178b0:
              FUN_101369c0(&DAT_101593be,p_Var50,&PTR_s_C__Users_runneradmin__rustup_too_101593e4);
                    /* WARNING: Does not return */
              pcVar28 = (code *)invalidInstructionException();
              (*pcVar28)();
            }
            if (iVar21 - 1U != 2) {
              uVar62 = uVar63;
              if (iVar21 != 1) {
                pbVar51 = *(byte **)((int)pvVar25 + uVar63 * 0x10 + 4);
                unaff_EBX = *(_PROCESS_INFORMATION **)((int)pvVar25 + uVar63 * 0x10 + 8);
                goto LAB_10116437;
              }
              break;
            }
            uVar63 = uVar63 + 1;
            unaff_EBX = (_PROCESS_INFORMATION *)&unaff_EBX[1].dwThreadId;
            iVar67 = iVar67 + -0x1c;
            uVar62 = uVar58;
          } while (iVar67 != 0);
        }
        pbVar51 = (byte *)0x0;
        if (pWVar45 == (LPCWSTR)0x0) goto LAB_10116437;
        pvVar25 = *(LPVOID *)((int)pvVar25 + uVar62 * 4 + 0x1ec);
        pWVar45 = (LPCWSTR)((int)pWVar45 - 1);
      } while( true );
    }
    pbVar51 = (byte *)0x0;
LAB_10116437:
    pvVar27 = GetProcessHeap();
    HeapFree(pvVar27,0,puVar26);
    if (CONCAT22(local_410[0].dwX._2_2_,(ushort)local_410[0].dwX) != 0) {
      pvVar27 = GetProcessHeap();
      HeapFree(pvVar27,0,pWVar60);
    }
    puVar46 = (undefined1 *)param_2[8];
    if (puVar46 != (undefined1 *)0x0) goto LAB_10116472;
LAB_101164be:
    uStack_458 = (LPCWSTR)CONCAT31(uStack_458._1_3_,2);
    local_454 = &PTR_s_program_path_has_no_file_name_10156be4;
    goto LAB_101164d1;
  }
  puVar46 = (undefined1 *)param_2[8];
  unaff_EBX = p_Var35;
joined_r0x1011641d:
  pbVar51 = (byte *)0x0;
  if (puVar46 == (undefined1 *)0x0) goto LAB_101164be;
LAB_10116472:
  puVar54 = (uint *)param_2[7];
  pcVar28 = FUN_10119ca0;
  if ((undefined1 *)0x3 < puVar46) {
    uVar62 = *puVar54;
    uVar62 = uVar62 >> 0x18 | (uVar62 & 0xff0000) >> 8 | (uVar62 & 0xff00) << 8 | uVar62 << 0x18;
    pcVar28 = FUN_10119ca0;
    if (uVar62 < 0x5c5c3f5c == 0x5c5c3f5c < uVar62) {
      pcVar28 = FUN_10119c90;
    }
  }
  bVar5 = ((byte *)((int)puVar54 + -1))[(int)puVar46];
  cVar18 = (*pcVar28)(bVar5);
  if (cVar18 != '\0') goto LAB_101164be;
  puVar47 = (uint *)((int)puVar54 + (int)puVar46);
  puVar41 = puVar46;
  puVar42 = puVar54;
  if (puVar46 < (undefined1 *)0x4) {
    do {
      if (puVar41 == (undefined1 *)0x0) goto LAB_1011692d;
      uVar62 = *puVar42;
      if ((byte)uVar62 == 0x2f) break;
      puVar41 = puVar41 + -1;
      puVar42 = (uint *)((int)puVar42 + 1);
    } while ((byte)uVar62 != 0x5c);
LAB_1011673c:
    pvVar25 = FUN_10107380(0,(SIZE_T)puVar46);
    if (pvVar25 == (LPVOID)0x0) {
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar28 = (code *)invalidInstructionException();
      (*pcVar28)();
    }
    memcpy(pvVar25,puVar54,(size_t)puVar46);
    local_410[0].cb._0_1_ = (char)puVar46;
    local_410[0].cb._1_1_ = (undefined1)((uint)puVar46 >> 8);
    local_410[0].cb._2_1_ = (undefined1)((uint)puVar46 >> 0x10);
    local_410[0].cb._3_1_ = (undefined1)((uint)puVar46 >> 0x18);
    local_410[0].lpReserved._0_2_ = SUB42(pvVar25,0);
    local_410[0].lpReserved._2_2_ = (undefined2)((uint)pvVar25 >> 0x10);
    local_410[0].lpDesktop._0_2_ = SUB42(puVar46,0);
    local_410[0].lpDesktop._2_2_ = (undefined2)((uint)puVar46 >> 0x10);
    local_410[0].lpTitle._0_1_ = 0;
    FUN_10111bd0(&local_410[0].cb,(byte *)".exe",4);
    pbVar51 = (byte *)CONCAT22(local_410[0].lpReserved._2_2_,local_410[0].lpReserved._0_2_);
    iVar67 = CONCAT13(local_410[0].cb._3_1_,
                      CONCAT12(local_410[0].cb._2_1_,
                               CONCAT11(local_410[0].cb._1_1_,(char)local_410[0].cb)));
    pWVar66 = (LPWSTR)CONCAT22(local_410[0].lpDesktop._2_2_,local_410[0].lpDesktop._0_2_);
    FUN_10119cc0(&local_410[0].cb,(int)pbVar51,(int)pWVar66);
    if (CONCAT13(local_410[0].cb._3_1_,
                 CONCAT12(local_410[0].cb._2_1_,
                          CONCAT11(local_410[0].cb._1_1_,(char)local_410[0].cb))) == -1) {
      psVar31 = (short *)FUN_10110b00(pbVar51,(uint)pWVar66);
      pWVar34 = pWVar66;
      if (psVar31 != (short *)0x0) {
        iVar21 = extraout_EDX;
        psVar32 = psVar31;
        iVar59 = extraout_EDX;
        if ((extraout_EDX == 2) && (iVar21 = extraout_EDX, *psVar31 == 0x2e2e)) {
          iVar21 = 2;
          psVar31 = (short *)0x0;
        }
        else {
          do {
            iVar48 = iVar21;
            if (iVar48 == 0) {
              psVar32 = (short *)0x0;
              iVar21 = 0;
              goto LAB_10117f6d;
            }
            iVar21 = iVar48 + -1;
          } while (*(char *)((int)psVar31 + iVar48 + -1) != '.');
          if (iVar21 == 0) {
            iVar21 = extraout_EDX;
            psVar31 = (short *)0x0;
          }
          else {
            iVar59 = extraout_EDX - iVar48;
            psVar31 = (short *)((int)psVar31 + iVar48);
          }
        }
LAB_10117f6d:
        if (psVar32 != (short *)0x0) {
          psVar31 = psVar32;
        }
        if (psVar31 != (short *)0x0) {
          if (psVar32 == (short *)0x0) {
            iVar21 = iVar59;
          }
          pWVar33 = (LPWSTR)((byte *)((int)psVar31 + iVar21) + -(int)pbVar51);
          if (pWVar33 <= pWVar66) {
            local_4b4._0_4_ = pWVar33;
            pWVar34 = pWVar33;
            if (((byte *)((int)psVar31 + iVar21) != pbVar51) && (pWVar33 < pWVar66)) {
              if (pbVar51[(int)pWVar33] == 0xed) {
                pWVar52 = (LPWSTR)((int)pWVar33 + 1);
                if (pWVar66 <= pWVar52) goto LAB_10119a28;
                if (((((LPWSTR)0x2 < pWVar33) && (0x9f < (pbVar51 + 1)[(int)pWVar33])) &&
                    ((pbVar51 + -3)[(int)pWVar33] == 0xed)) && (0x9f < (pbVar51 + -2)[(int)pWVar33])
                   ) {
                  p_Var35 = (_PROCESS_INFORMATION *)local_4b4;
                  goto LAB_10118080;
                }
              }
              else if ((char)pbVar51[(int)pWVar33] < -0x40) {
                p_Var35 = (_PROCESS_INFORMATION *)local_4b4;
                goto LAB_101199bd;
              }
              if ((char)pbVar51[(int)pWVar33] < -0x40) goto LAB_10118ec2;
            }
          }
        }
      }
      FUN_1010c620((undefined8 *)local_410,(int)pbVar51,(int)pWVar34);
      if (CONCAT13(local_410[0].cb._3_1_,
                   CONCAT12(local_410[0].cb._2_1_,
                            CONCAT11(local_410[0].cb._1_1_,(char)local_410[0].cb))) == -1) {
        local_45c = (LPVOID)0xffffffff;
        uStack_458 = (LPCWSTR)CONCAT22(local_410[0].lpReserved._2_2_,local_410[0].lpReserved._0_2_);
        local_454 = (undefined **)
                    CONCAT22(local_410[0].lpDesktop._2_2_,local_410[0].lpDesktop._0_2_);
      }
      else {
        FUN_10119da0(&local_45c,&local_410[0].cb);
      }
    }
    else {
      local_454 = (undefined **)CONCAT22(local_410[0].lpDesktop._2_2_,local_410[0].lpDesktop._0_2_);
      local_45c = (LPVOID)CONCAT22(CONCAT11(local_410[0].cb._3_1_,local_410[0].cb._2_1_),
                                   CONCAT11(local_410[0].cb._1_1_,(char)local_410[0].cb));
      uStack_458 = (LPCWSTR)CONCAT22(local_410[0].lpReserved._2_2_,local_410[0].lpReserved._0_2_);
    }
    if (iVar67 != 0) {
      pvVar27 = GetProcessHeap();
      HeapFree(pvVar27,0,pbVar51);
    }
  }
  else {
    puVar41 = (undefined1 *)0x0;
    bVar69 = false;
    if ((byte)(((byte)((byte)puVar47[-1] + 0xbf) < 0x1a) << 5 | (byte)puVar47[-1]) == 0x2e) {
      if (((byte)(((byte)(*(byte *)((int)puVar47 + -3) + 0xbf) < 0x1a) << 5 |
                 *(byte *)((int)puVar47 + -3)) == 0x65) &&
         ((byte)(((byte)(*(byte *)((int)puVar47 + -2) + 0xbf) < 0x1a) << 5 |
                *(byte *)((int)puVar47 + -2)) == 0x78)) {
        bVar69 = (byte)(((byte)(bVar5 + 0xbf) < 0x1a) << 5 | bVar5) == 0x65;
      }
      else {
        bVar69 = false;
      }
    }
    do {
      if (puVar46 == puVar41) goto LAB_1011692d;
      pbVar43 = (byte *)((int)puVar54 + (int)puVar41);
    } while ((*pbVar43 != 0x5c) && (puVar41 = puVar41 + 1, *pbVar43 != 0x2f));
    if (!bVar69) goto LAB_1011673c;
    FUN_1010c620((undefined8 *)local_4b4,(int)puVar54,(int)puVar46);
    if ((HANDLE)local_4b4._0_4_ == (HANDLE)0xffffffff) {
      local_45c = (LPVOID)0xffffffff;
      uStack_458 = (LPCWSTR)local_4b4._4_4_;
      local_454 = (undefined **)local_4b4._8_4_;
      goto LAB_101164d1;
    }
    local_410[0].cb._0_1_ = (char)local_4b4._0_8_;
    local_410[0].cb._1_1_ = SUB81(local_4b4._0_8_,1);
    local_410[0].cb._2_1_ = SUB81(local_4b4._0_8_,2);
    local_410[0].cb._3_1_ = SUB81(local_4b4._0_8_,3);
    local_410[0].lpDesktop._0_2_ = (undefined2)local_4b4._8_8_;
    local_410[0].lpDesktop._2_2_ = SUB82(local_4b4._8_8_,2);
    local_410[0].lpReserved._0_2_ = SUB82(local_4b4._0_8_,4);
    local_410[0].lpReserved._2_2_ = SUB82(local_4b4._0_8_,6);
    FUN_10119da0(&local_45c,&local_410[0].cb);
  }
  if (local_45c == (LPVOID)0xffffffff) goto LAB_101164d1;
  goto LAB_1011680a;
code_r0x10115e35:
  pvVar64 = (LPVOID)((int)pvVar44 + 1);
  piVar65 = piVar65 + 7;
  iVar21 = iVar21 + -0x1c;
  pvVar44 = (LPVOID)local_4b4._44_4_;
  if (iVar21 == 0) goto LAB_10115e72;
  goto LAB_10115e10;
LAB_10115e72:
  if (pWVar49 == (LPCWSTR)0x0) goto LAB_10115ca4;
  pvVar24 = *(LPVOID *)((int)pvVar24 + (int)pvVar44 * 4 + 0x1ec);
  pWVar49 = (LPCWSTR)((int)pWVar49 - 1);
  pvVar44 = (LPVOID)(uint)*(ushort *)((int)pvVar24 + 0x1ea);
  if (pvVar44 != (LPVOID)0x0) goto LAB_10115dee;
LAB_10115e70:
  pvVar44 = (LPVOID)0x0;
  goto LAB_10115e72;
LAB_1011692d:
  bVar69 = true;
  puVar42 = puVar54;
LAB_10116940:
  do {
    do {
      bVar70 = !bVar69;
      bVar69 = true;
    } while (bVar70);
    if (puVar42 == puVar47) {
      local_450 = puVar46;
      puVar47 = puVar54;
      puVar41 = puVar46;
      if (puVar46 < &DAT_00000008) goto LAB_10116a70;
      uVar62 = (uint)((int)puVar54 + 3U) & 0xfffffffc;
      puVar41 = (undefined1 *)(uVar62 - (int)puVar54);
      if (puVar41 != (undefined1 *)0x0) {
        iVar67 = (int)puVar54 - uVar62;
        goto LAB_101172f0;
      }
      puVar41 = (undefined1 *)0x0;
      goto LAB_10116d30;
    }
    bVar5 = (byte)*puVar42;
    uVar62 = (uint)bVar5;
    if ((char)bVar5 < '\0') {
      uVar58 = *(byte *)((int)puVar42 + 1) & 0x3f;
      if (bVar5 < 0xe0) {
        puVar42 = (uint *)((int)puVar42 + 2);
        uVar62 = (uVar62 & 0x1f) << 6 | uVar58;
      }
      else {
        uVar58 = *(byte *)((int)puVar42 + 2) & 0x3f | uVar58 << 6;
        if (bVar5 < 0xf0) {
          puVar42 = (uint *)((int)puVar42 + 3);
          uVar62 = uVar58 | (uVar62 & 0x1f) << 0xc;
        }
        else {
          pbVar43 = (byte *)((int)puVar42 + 3);
          puVar42 = puVar42 + 1;
          uVar62 = *pbVar43 & 0x3f | uVar58 << 6 | (uVar62 & 7) << 0x12;
        }
        bVar69 = false;
        if (0xffff < uVar62) goto LAB_10116940;
      }
    }
    else {
      puVar42 = (uint *)((int)puVar42 + 1);
    }
    bVar69 = true;
  } while (uVar62 != 0);
  uStack_458 = (LPCWSTR)0x2;
  local_454 = &PTR_s_nul_byte_found_in_provided_data_10156ac8;
  goto LAB_101164d1;
  while (puVar47 = (uint *)((int)puVar47 + 1), puVar41 != (undefined1 *)0x0) {
LAB_10116a70:
    puVar41 = puVar41 + -1;
    bVar69 = (byte)*puVar47 == 0x2e;
    local_450 = (undefined1 *)CONCAT31((int3)((uint)local_450 >> 8),bVar69);
    if (bVar69) break;
  }
  goto LAB_101178ed;
LAB_101181ee:
  pvVar22 = (HANDLE)0x200;
  p_Var50 = local_410;
  pvVar37 = pvVar29;
  do {
    SetLastError(0);
    pvVar29 = (HANDLE)GetWindowsDirectoryW((LPWSTR)p_Var50,(UINT)pvVar37);
    if ((pvVar29 == (HANDLE)0x0) && (DVar30 = GetLastError(), DVar30 != 0)) {
      ppuVar68 = (undefined **)GetLastError();
      if ((HANDLE)local_440 == (HANDLE)0x0) {
        pWVar60 = (LPCWSTR)0x0;
LAB_10118af4:
        if ((char)pWVar60 == '\x03') {
          puVar26 = (undefined4 *)ppuVar68[1];
          puVar9 = *ppuVar68;
          if ((code *)*puVar26 != (code *)0x0) {
            (*(code *)*puVar26)(puVar9);
          }
          if (puVar26[1] != 0) {
            FUN_10093cf0(puVar9,puVar26[2]);
          }
          pvVar27 = GetProcessHeap();
          HeapFree(pvVar27,0,ppuVar68);
        }
      }
      else {
        pWVar60 = (LPCWSTR)0x0;
        pvVar27 = (LPVOID)0xfffffffe;
LAB_10118340:
        pvVar25 = local_440._4_4_;
        pvVar22 = GetProcessHeap();
        HeapFree(pvVar22,0,pvVar25);
LAB_10118357:
        if (pvVar27 < (LPVOID)0xfffffffe) goto LAB_1011837c;
        if (pvVar27 == (LPVOID)0xfffffffe) goto LAB_10118af4;
      }
      FUN_1010c370((undefined8 *)local_4b4,0x10156d54,4);
      if ((HANDLE)local_4b4._0_4_ != (HANDLE)0xffffffff) {
        local_444 = (HANDLE)local_4b4._0_4_;
        pWVar52 = (LPWSTR)(local_4b4._4_4_ + local_4b4._8_4_);
        local_448 = (LPWSTR)local_4b4._4_4_;
        pWVar66 = (LPWSTR)local_4b4._4_4_;
        uVar62 = 0;
        bVar69 = true;
LAB_10118b81:
        bVar70 = false;
        local_478._0_12_ = ZEXT812(0x200000000);
        local_4b4._44_4_ = (LPVOID)0x2;
        pvVar27 = (HANDLE)0x0;
        uVar58 = uVar62;
        if ((short)uVar62 == 0) goto LAB_10118bd4;
LAB_10118bc0:
        sVar55 = (short)uVar62;
        uVar58 = 0;
        uVar63 = uVar62;
joined_r0x10118bc8:
        uVar62 = uVar58;
        uVar58 = uVar62;
        if (sVar55 != 0x22) goto LAB_10118bec;
LAB_10118bca:
        bVar70 = (bool)(bVar70 ^ 1);
        sVar55 = (short)uVar62;
        do {
          if (sVar55 != 0) goto LAB_10118bc0;
LAB_10118bd4:
          if (pWVar66 == pWVar52) {
            bVar70 = false;
LAB_10118d1e:
            if ((bVar69) || (pvVar27 != (HANDLE)0x0)) {
              FUN_10093310((undefined8 *)local_410,local_478.hThread,(SIZE_T)pvVar27);
            }
            else {
              local_410[0].cb._0_1_ = -1;
              local_410[0].cb._1_1_ = 0xff;
              local_410[0].cb._2_1_ = 0xff;
              local_410[0].cb._3_1_ = 0xff;
            }
            if (local_478.hProcess != (HANDLE)0x0) {
              pvVar27 = local_478.hThread;
              pvVar22 = GetProcessHeap();
              HeapFree(pvVar22,0,pvVar27);
            }
            iVar67 = CONCAT13(local_410[0].cb._3_1_,
                              CONCAT12(local_410[0].cb._2_1_,
                                       CONCAT11(local_410[0].cb._1_1_,(char)local_410[0].cb)));
            if (iVar67 == -1) {
              if (local_444 != (HANDLE)0x0) {
                pvVar27 = GetProcessHeap();
                HeapFree(pvVar27,0,local_448);
              }
              break;
            }
            pvVar25 = (LPVOID)CONCAT22(local_410[0].lpReserved._2_2_,local_410[0].lpReserved._0_2_);
            uVar62 = uVar58;
            bVar69 = bVar70;
            if (CONCAT22(local_410[0].lpDesktop._2_2_,local_410[0].lpDesktop._0_2_) == 0) {
              if (iVar67 != 0) {
                pvVar27 = GetProcessHeap();
                HeapFree(pvVar27,0,pvVar25);
              }
              goto LAB_10118b81;
            }
            FUN_10111020(&local_410[0].cb,(byte *)puVar54,(uint)puVar46);
            if ((char)local_450 == '\0') {
              FUN_10110c70(&local_410[0].cb,&DAT_10156c3a,3);
            }
            pvVar25 = (LPVOID)CONCAT22(local_410[0].lpReserved._2_2_,local_410[0].lpReserved._0_2_);
            FUN_10119cc0((DWORD *)&local_430,(int)pvVar25,
                         CONCAT22(local_410[0].lpDesktop._2_2_,local_410[0].lpDesktop._0_2_));
            if (CONCAT13(local_410[0].cb._3_1_,
                         CONCAT12(local_410[0].cb._2_1_,
                                  CONCAT11(local_410[0].cb._1_1_,(char)local_410[0].cb))) != 0) {
              pvVar27 = GetProcessHeap();
              HeapFree(pvVar27,0,pvVar25);
            }
            if (local_430.hProcess == (LPVOID)0xffffffff) goto LAB_10118b81;
            pvVar27 = local_430.hProcess;
            pWVar60 = local_430.hThread;
            ppuVar68 = (undefined **)local_430.dwProcessId;
            if (local_444 != (HANDLE)0x0) {
              pvVar27 = GetProcessHeap();
              HeapFree(pvVar27,0,local_448);
              pvVar27 = local_430.hProcess;
              pWVar60 = local_430.hThread;
              ppuVar68 = (undefined **)local_430.dwProcessId;
            }
            goto LAB_1011837c;
          }
          bVar5 = (byte)*pWVar66;
          uVar63 = (uint)bVar5;
          if ((char)bVar5 < '\0') {
            uVar62 = *(byte *)((int)pWVar66 + 1) & 0x3f;
            if (bVar5 < 0xe0) {
              pWVar66 = pWVar66 + 1;
              uVar63 = (uVar63 & 0x1f) << 6 | uVar62;
              sVar55 = (short)uVar63;
            }
            else {
              uVar62 = (byte)pWVar66[1] & 0x3f | uVar62 << 6;
              if (bVar5 < 0xf0) {
                pWVar66 = (LPWSTR)((int)pWVar66 + 3);
                uVar63 = uVar62 | (uVar63 & 0x1f) << 0xc;
              }
              else {
                pbVar51 = (byte *)((int)pWVar66 + 3);
                pWVar66 = pWVar66 + 2;
                uVar63 = *pbVar51 & 0x3f | uVar62 << 6 | (uVar63 & 7) << 0x12;
              }
              if (0xffff < uVar63) {
                uVar62 = uVar63 & 0x3ff;
                uVar63 = uVar63 + 0xff0000 >> 10 | 0xd800;
                sVar55 = (short)uVar63;
                uVar58 = uVar62 | 0xdc00;
                goto joined_r0x10118bc8;
              }
              sVar55 = (short)uVar63;
            }
            uVar62 = 0;
            if (sVar55 == 0x22) goto LAB_10118bca;
          }
          else {
            pWVar66 = (LPWSTR)((int)pWVar66 + 1);
            uVar62 = 0;
            if (bVar5 == 0x22) goto LAB_10118bca;
          }
LAB_10118bec:
          if (((uVar63 & 0xffff) == 0x3b) && (!bVar70)) {
            bVar70 = true;
            goto LAB_10118d1e;
          }
          if (pvVar27 == local_478.hProcess) {
            FUN_1013c000((uint *)&local_478);
            local_4b4._44_4_ = local_478.hThread;
          }
          *(short *)(local_4b4._44_4_ + (int)pvVar27 * 2) = (short)uVar63;
          pvVar27 = (HANDLE)((int)pvVar27 + 1);
          local_478.dwProcessId = (DWORD)pvVar27;
          sVar55 = (short)uVar62;
        } while( true );
      }
      uStack_458 = (LPCWSTR)CONCAT31(uStack_458._1_3_,2);
      local_454 = &PTR_s_program_not_found_10156bb8;
      goto LAB_101164d1;
    }
    if (pvVar29 != pvVar37) {
      if (pvVar29 <= pvVar37) {
        local_4e0 = pvVar22;
        if (pvVar29 <= pvVar22) {
          FUN_10093310((undefined8 *)local_4b4,(ushort *)p_Var50,(SIZE_T)pvVar29);
          FUN_10111020((uint *)local_4b4,(byte *)puVar54,(uint)puVar46);
          if ((char)local_450 == '\0') {
            FUN_10110c70((uint *)local_4b4,&DAT_10156c3a,3);
          }
          uVar11 = local_4b4._4_4_;
          FUN_10119cc0((DWORD *)&local_478,local_4b4._4_4_,local_4b4._8_4_);
          if ((HANDLE)local_4b4._0_4_ != (HANDLE)0x0) {
            pvVar27 = GetProcessHeap();
            HeapFree(pvVar27,0,(LPVOID)uVar11);
          }
          pWVar60 = local_478.hThread;
          ppuVar68 = (undefined **)local_478.dwProcessId;
          pvVar27 = local_478.hProcess;
          if ((HANDLE)local_440 != (HANDLE)0x0) goto LAB_10118340;
          goto LAB_10118357;
        }
        goto LAB_101197b5;
      }
      if ((HANDLE)0x200 < pvVar29) goto LAB_10118210;
      goto LAB_101181ee;
    }
    DVar30 = GetLastError();
    if (DVar30 != 0x7a) goto LAB_1011996a;
    pvVar29 = (HANDLE)((int)pvVar37 * 2);
    if (pvVar29 < (HANDLE)0x201) goto LAB_101181ee;
LAB_10118210:
    if ((int)pvVar29 - (int)pvVar27 != 0) {
      FUN_101359e0((uint *)&local_440,(uint)pvVar27,(int)pvVar29 - (int)pvVar27,(LPVOID)0x2,2);
      local_4e0 = local_440._4_4_;
      pvVar27 = (HANDLE)local_440;
    }
    local_438 = CONCAT44(local_438._4_4_,pvVar27);
    p_Var50 = local_4e0;
    pvVar37 = pvVar27;
    pvVar22 = pvVar27;
  } while( true );
LAB_10119a47:
  HeapFree(pvVar27,0,puVar46);
LAB_10119a50:
  do {
    FUN_1011a3f0((int *)local_4b4,(int *)local_410);
    uVar12 = local_4b4._0_4_;
    if ((HANDLE)local_4b4._0_4_ == (HANDLE)0x0) {
      if (local_478.hProcess != (HANDLE)0x0) {
        pvVar27 = local_478.hThread;
        pvVar22 = GetProcessHeap();
        HeapFree(pvVar22,0,pvVar27);
      }
      goto LAB_10119aea;
    }
    uVar8 = local_4b4._8_4_;
    iVar67 = local_4b4._8_4_ * 0x1c;
    if (*(int *)(local_4b4._0_4_ + iVar67 + 0xb4) != 0) {
      pvVar25 = *(LPVOID *)(local_4b4._0_4_ + iVar67 + 0xb8);
      pvVar27 = GetProcessHeap();
      HeapFree(pvVar27,0,pvVar25);
    }
    if (*(int *)(uVar12 + iVar67 + 0xc4) != 0) {
      pvVar25 = *(LPVOID *)(uVar12 + iVar67 + 200);
      pvVar27 = GetProcessHeap();
      HeapFree(pvVar27,0,pvVar25);
    }
    piVar65 = (int *)(uVar12 + uVar8 * 0x10);
  } while (*piVar65 == 0);
  puVar46 = (undefined1 *)piVar65[1];
  pvVar27 = GetProcessHeap();
  goto LAB_10119a47;
LAB_1011927a:
  uVar4 = local_4b4._0_8_;
  local_410[0].lpDesktop = pWVar66;
  if (ppuVar68 == (undefined **)0x0) {
LAB_10119295:
    if (local_4e0 == (_STARTUPINFOW *)0x1) goto LAB_101193a8;
    ppuVar68 = (undefined **)0x0;
    uVar57 = 0;
    uVar63 = 1;
    local_4cc = (undefined **)0x1;
    local_4e0 = (_STARTUPINFOW *)0x1;
    uVar62 = uVar58;
    uVar56 = 0;
    if (pWVar66 ==
        (LPWSTR)CONCAT13(local_410[0].cb._3_1_,
                         CONCAT12(local_410[0].cb._2_1_,
                                  CONCAT11(local_410[0].cb._1_1_,(char)local_410[0].cb))))
    goto LAB_1011932a;
  }
  else {
    if ((short)uVar58 == 0) {
      if (ppuVar68 == local_4b8) goto LAB_10119295;
      bVar5 = *(byte *)ppuVar68;
      uVar58 = (uint)bVar5;
      if ((char)bVar5 < '\0') {
        uVar62 = *(byte *)((int)ppuVar68 + 1) & 0x3f;
        if (bVar5 < 0xe0) {
          ppuVar68 = (undefined **)((int)ppuVar68 + 2);
          uVar58 = (uVar58 & 0x1f) << 6 | uVar62;
          uVar62 = 0;
        }
        else {
          uVar62 = *(byte *)((int)ppuVar68 + 2) & 0x3f | uVar62 << 6;
          if (bVar5 < 0xf0) {
            ppuVar68 = (undefined **)((int)ppuVar68 + 3);
            uVar58 = uVar62 | (uVar58 & 0x1f) << 0xc;
          }
          else {
            pbVar51 = (byte *)((int)ppuVar68 + 3);
            ppuVar68 = ppuVar68 + 1;
            uVar58 = *pbVar51 & 0x3f | uVar62 << 6 | (uVar58 & 7) << 0x12;
          }
          if (uVar58 < 0x10000) {
            uVar62 = 0;
          }
          else {
            uVar62 = uVar58 & 0x3ff | 0xdc00;
            uVar58 = uVar58 + 0xff0000 >> 10 | 0xd800;
          }
        }
      }
      else {
        ppuVar68 = (undefined **)((int)ppuVar68 + 1);
        uVar62 = 0;
      }
    }
    else {
      uVar62 = 0;
    }
    uVar57 = (undefined2)uVar58;
    if (pWVar66 ==
        (LPWSTR)CONCAT13(local_410[0].cb._3_1_,
                         CONCAT12(local_410[0].cb._2_1_,
                                  CONCAT11(local_410[0].cb._1_1_,(char)local_410[0].cb)))) {
      uVar58 = ((int)local_4b8 - (int)ppuVar68) + 3;
      if (0xfffffffc < (uint)((int)local_4b8 - (int)ppuVar68)) {
        uVar58 = 0xffffffff;
      }
      uVar63 = ((uVar58 >> 2) - ((int)local_4cc + -1 + (uint)((short)uVar62 == 0))) + 2;
      uVar58 = uVar62;
      uVar56 = uVar57;
LAB_1011932a:
      uVar57 = uVar56;
      local_4b4._52_4_ = ppuVar68;
      FUN_101359e0(&local_410[0].cb,(uint)pWVar66,uVar63,(LPVOID)0x2,2);
      puVar36 = (undefined2 *)CONCAT22(local_410[0].lpReserved._2_2_,local_410[0].lpReserved._0_2_);
      ppuVar68 = (undefined **)local_4b4._52_4_;
      uVar62 = uVar58;
    }
  }
  puVar36[(int)pWVar66] = uVar57;
  pWVar66 = (LPWSTR)((int)pWVar66 + 1);
  uVar58 = uVar62;
  goto LAB_1011927a;
LAB_101193a8:
  local_4b4[1] = local_410[0].cb._1_1_;
  local_4b4[0] = (char)local_410[0].cb;
  local_4b4[2] = local_410[0].cb._2_1_;
  local_4b4[3] = local_410[0].cb._3_1_;
  uVar12 = local_4b4._0_4_;
  ppuVar68 = (undefined **)CONCAT22(local_410[0].lpReserved._2_2_,local_410[0].lpReserved._0_2_);
  local_4b8 = ppuVar68;
  local_4b4._0_8_ = uVar4;
  if (&DAT_00000006 < pWVar66) {
    iVar67 = memcmp(L"\\\\?\\UNC",ppuVar68,0xe);
    if (iVar67 != 0) goto LAB_101193d8;
    local_4b8 = ppuVar68 + 3;
    *(WCHAR *)(ppuVar68 + 3) = L'\\';
    bVar69 = FUN_1011a5d0((LPCWSTR)local_4b8,(DWORD)(pWVar66 + -3));
    if (!bVar69) {
      *(WCHAR *)local_4b8 = L'C';
      local_4b8 = ppuVar68;
    }
  }
  else if ((LPWSTR)0x3 < pWVar66) {
LAB_101193d8:
    if (ppuVar68[1] == (undefined *)0x5c003f && *ppuVar68 == (undefined *)0x5c005c) {
      bVar69 = FUN_1011a5d0((LPCWSTR)(ppuVar68 + 2),(DWORD)(pWVar66 + -2));
      local_4b8 = ppuVar68 + 2;
      if (!bVar69) {
        local_4b8 = ppuVar68;
      }
    }
  }
  local_4b4._0_8_ = CONCAT44(local_4b4._4_4_,uVar12);
  p_Var35 = &local_430;
  p_Var23 = &local_478;
  goto LAB_10119433;
  while( true ) {
    puVar47 = (uint *)((int)puVar47 + 1);
    iVar67 = iVar67 + 1;
    if (iVar67 == 0) break;
LAB_101172f0:
    if ((byte)*puVar47 == 0x2e) {
      local_450 = (undefined1 *)CONCAT31((int3)((uint)puVar46 >> 8),1);
      goto LAB_101178ed;
    }
  }
  if (puVar41 <= puVar46 + -8) {
LAB_10116d30:
    do {
      if ((~(((*(uint *)((int)(puVar54 + 1) + (int)puVar41) ^ 0xd1d1d1d1) + 0x1010101 |
             *(uint *)((int)(puVar54 + 1) + (int)puVar41)) &
            ((*(uint *)((int)puVar54 + (int)puVar41) ^ 0xd1d1d1d1) + 0x1010101 |
            *(uint *)((int)puVar54 + (int)puVar41))) & 0x80808080) != 0) break;
      puVar41 = puVar41 + 8;
    } while (puVar41 <= puVar46 + -8);
  }
  if (puVar46 == puVar41) {
    local_450 = (undefined1 *)0x0;
  }
  else {
    pbVar43 = (byte *)((int)puVar54 + (int)puVar41);
    puVar41 = puVar46 + ~(uint)puVar41;
    do {
      bVar69 = puVar41 != (undefined1 *)0x0;
      puVar41 = puVar41 + -1;
      local_450 = (undefined1 *)CONCAT31((int3)((uint)local_450 >> 8),*pbVar43 == 0x2e);
      if (*pbVar43 == 0x2e) break;
      pbVar43 = pbVar43 + 1;
    } while (bVar69);
  }
LAB_101178ed:
  if (pbVar51 != (byte *)0x0) {
    pbVar43 = pbVar51 + (int)&unaff_EBX->hProcess;
    uVar19 = 1;
    uVar62 = 0;
LAB_10117928:
    local_4b4[0x2c] = uVar19;
    bVar69 = false;
    local_4b4._0_8_ = 0x200000000;
    local_4b4._8_8_ = local_4b4._8_8_ & 0xffffffff00000000;
    local_4dc = (LPWSTR)0x2;
    pvVar27 = (HANDLE)0x0;
    sVar55 = (short)uVar62;
    uVar58 = uVar62;
    uVar3 = local_4b4._0_8_;
joined_r0x1011795d:
    local_4b4._0_4_ = (undefined4)uVar3;
    uVar63 = uVar58;
    local_4b4._0_8_ = uVar3;
    if (sVar55 == 0) goto LAB_10117977;
LAB_10117960:
    uVar62 = 0;
LAB_10117962:
    do {
      uVar58 = 0;
LAB_10117964:
      sVar55 = (short)uVar58;
      if ((WCHAR)uVar63 != L'\"') {
        if (((uVar63 & 0xffff) == 0x3b) && (!bVar69)) {
          uVar19 = 1;
          if ((local_4b4._44_4_ & 1) == 0) goto LAB_10117ac5;
          goto LAB_10117acd;
        }
        bVar70 = pvVar27 == (HANDLE)local_4b4._0_4_;
        if (bVar70) {
          FUN_1013c000((uint *)local_4b4);
          local_4dc = (LPWSTR)local_4b4._4_4_;
        }
        local_4dc[(int)pvVar27] = (WCHAR)uVar63;
        pvVar27 = (HANDLE)((int)pvVar27 + 1);
        local_4b4._8_4_ = pvVar27;
        uVar3 = local_4b4._0_8_;
        goto joined_r0x1011795d;
      }
      bVar69 = (bool)(bVar69 ^ 1);
      uVar63 = uVar58;
      if (sVar55 != 0) goto LAB_10117960;
LAB_10117977:
      if (pbVar51 == pbVar43) {
        uVar19 = 0;
        if ((local_4b4._44_4_ & 1) == 0) {
LAB_10117ac5:
          if (pvVar27 != (HANDLE)0x0) goto LAB_10117acd;
          local_410[0].cb._0_1_ = -1;
          local_410[0].cb._1_1_ = 0xff;
          local_410[0].cb._2_1_ = 0xff;
          local_410[0].cb._3_1_ = 0xff;
        }
        else {
LAB_10117acd:
          local_4b4._4_4_ = (undefined4)(uVar3 >> 0x20);
          uVar11 = local_4b4._4_4_;
          FUN_10093310((undefined8 *)local_410,(ushort *)uVar11,(SIZE_T)pvVar27);
          uVar3 = local_4b4._0_8_;
        }
        bVar69 = (HANDLE)local_4b4._0_4_ != (HANDLE)0x0;
        local_4b4._0_8_ = uVar3;
        if (bVar69) {
          local_4b4._4_4_ = (undefined4)(uVar3 >> 0x20);
          uVar11 = local_4b4._4_4_;
          pvVar27 = GetProcessHeap();
          HeapFree(pvVar27,0,(LPVOID)uVar11);
        }
        iVar67 = CONCAT13(local_410[0].cb._3_1_,
                          CONCAT12(local_410[0].cb._2_1_,
                                   CONCAT11(local_410[0].cb._1_1_,(char)local_410[0].cb)));
        if (iVar67 == -1) break;
        pvVar25 = (LPVOID)CONCAT22(local_410[0].lpReserved._2_2_,local_410[0].lpReserved._0_2_);
        if (CONCAT22(local_410[0].lpDesktop._2_2_,local_410[0].lpDesktop._0_2_) == 0) {
          if (iVar67 != 0) {
            pvVar27 = GetProcessHeap();
            HeapFree(pvVar27,0,pvVar25);
          }
          goto LAB_10117928;
        }
        FUN_10111020(&local_410[0].cb,(byte *)puVar54,(uint)puVar46);
        if ((char)local_450 == '\0') {
          FUN_10110c70(&local_410[0].cb,&DAT_10156c3a,3);
        }
        pvVar25 = (LPVOID)CONCAT22(local_410[0].lpReserved._2_2_,local_410[0].lpReserved._0_2_);
        FUN_10119cc0((DWORD *)&local_430,(int)pvVar25,
                     CONCAT22(local_410[0].lpDesktop._2_2_,local_410[0].lpDesktop._0_2_));
        if (CONCAT13(local_410[0].cb._3_1_,
                     CONCAT12(local_410[0].cb._2_1_,
                              CONCAT11(local_410[0].cb._1_1_,(char)local_410[0].cb))) != 0) {
          pvVar27 = GetProcessHeap();
          HeapFree(pvVar27,0,pvVar25);
        }
        pvVar27 = local_430.hProcess;
        pWVar60 = local_430.hThread;
        ppuVar68 = (undefined **)local_430.dwProcessId;
        if (local_430.hProcess == (LPVOID)0xffffffff) goto LAB_10117928;
        goto LAB_1011837c;
      }
      bVar5 = *pbVar51;
      uVar63 = (uint)bVar5;
      if ((char)bVar5 < '\0') {
        pbVar1 = pbVar51 + 1;
        if (bVar5 < 0xe0) {
          pbVar51 = pbVar51 + 2;
          uVar63 = (uVar63 & 0x1f) << 6 | *pbVar1 & 0x3f;
          uVar58 = 0;
        }
        else {
          uVar58 = pbVar51[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
          if (bVar5 < 0xf0) {
            pbVar51 = pbVar51 + 3;
            uVar63 = uVar58 | (uVar63 & 0x1f) << 0xc;
          }
          else {
            pbVar1 = pbVar51 + 3;
            pbVar51 = pbVar51 + 4;
            uVar63 = *pbVar1 & 0x3f | uVar58 << 6 | (uVar63 & 7) << 0x12;
          }
          if (uVar63 < 0x10000) goto LAB_10117962;
          uVar62 = uVar63 & 0x3ff | 0xdc00;
          uVar63 = uVar63 + 0xff0000 >> 10 | 0xd800;
          uVar58 = uVar62;
        }
        goto LAB_10117964;
      }
      pbVar51 = pbVar51 + 1;
    } while( true );
  }
  FUN_10119e60((undefined8 *)local_4b4);
  uVar10 = local_4b4._8_8_;
  uVar4 = local_4b4._0_8_;
  pWVar66 = (LPWSTR)local_4b4._8_4_;
  if ((HANDLE)local_4b4._0_4_ == (HANDLE)0xffffffff) {
    if (local_4b4[4] == '\x03') {
      puVar26 = *(undefined4 **)(local_4b4._8_4_ + 4);
      pvVar25 = *(LPVOID *)local_4b4._8_4_;
      if ((code *)*puVar26 != (code *)0x0) {
        (*(code *)*puVar26)(pvVar25);
      }
      if (puVar26[1] != 0) {
        FUN_10093cf0(pvVar25,puVar26[2]);
      }
      pvVar27 = GetProcessHeap();
      HeapFree(pvVar27,0,pWVar66);
    }
LAB_10117d2d:
    pvVar27 = (HANDLE)0x200;
    pvVar22 = (HANDLE)0x0;
    local_440 = 0x200000000;
    local_438 = local_438 & 0xffffffff00000000;
    local_4e0 = (_STARTUPINFOW *)0x2;
LAB_10117d7e:
    pvVar37 = (HANDLE)0x200;
    p_Var50 = local_410;
    do {
      SetLastError(0);
      pvVar29 = (HANDLE)GetSystemDirectoryW((LPWSTR)p_Var50,(UINT)pvVar27);
      if ((pvVar29 == (HANDLE)0x0) && (DVar30 = GetLastError(), DVar30 != 0)) {
        ppuVar68 = (undefined **)GetLastError();
        if ((HANDLE)local_440 == (HANDLE)0x0) {
          pWVar60 = (LPCWSTR)0x0;
LAB_10118170:
          if ((char)pWVar60 == '\x03') {
            puVar26 = (undefined4 *)ppuVar68[1];
            puVar9 = *ppuVar68;
            if ((code *)*puVar26 != (code *)0x0) {
              (*(code *)*puVar26)(puVar9);
            }
            if (puVar26[1] != 0) {
              FUN_10093cf0(puVar9,puVar26[2]);
            }
            pvVar27 = GetProcessHeap();
            HeapFree(pvVar27,0,ppuVar68);
          }
        }
        else {
          pWVar60 = (LPCWSTR)0x0;
          pvVar27 = (LPVOID)0xfffffffe;
LAB_10117ed0:
          pvVar25 = local_440._4_4_;
          pvVar22 = GetProcessHeap();
          HeapFree(pvVar22,0,pvVar25);
LAB_10117ee7:
          if (pvVar27 < (LPVOID)0xfffffffe) goto LAB_1011837c;
          if (pvVar27 == (LPVOID)0xfffffffe) goto LAB_10118170;
        }
        pvVar29 = (HANDLE)0x200;
        pvVar27 = (HANDLE)0x0;
        local_440 = 0x200000000;
        local_438 = local_438 & 0xffffffff00000000;
        local_4e0 = (_STARTUPINFOW *)0x2;
        goto LAB_101181ee;
      }
      if (pvVar29 == pvVar27) {
        DVar30 = GetLastError();
        if (DVar30 != 0x7a) goto LAB_1011996a;
        pvVar27 = (HANDLE)((int)pvVar27 * 2);
      }
      else {
        bVar69 = pvVar29 <= pvVar27;
        pvVar27 = pvVar29;
        if (bVar69) {
          local_4e0 = pvVar37;
          if (pvVar29 <= pvVar37) {
            FUN_10093310((undefined8 *)local_4b4,(ushort *)p_Var50,(SIZE_T)pvVar29);
            FUN_10111020((uint *)local_4b4,(byte *)puVar54,(uint)puVar46);
            if ((char)local_450 == '\0') {
              FUN_10110c70((uint *)local_4b4,&DAT_10156c3a,3);
            }
            uVar11 = local_4b4._4_4_;
            FUN_10119cc0((DWORD *)&local_478,local_4b4._4_4_,local_4b4._8_4_);
            if ((HANDLE)local_4b4._0_4_ != (HANDLE)0x0) {
              pvVar27 = GetProcessHeap();
              HeapFree(pvVar27,0,(LPVOID)uVar11);
            }
            pWVar60 = local_478.hThread;
            ppuVar68 = (undefined **)local_478.dwProcessId;
            pvVar27 = local_478.hProcess;
            if ((HANDLE)local_440 != (HANDLE)0x0) goto LAB_10117ed0;
            goto LAB_10117ee7;
          }
          goto LAB_101197b5;
        }
      }
      if (pvVar27 < (HANDLE)0x201) goto LAB_10117d7e;
      if ((int)pvVar27 - (int)pvVar22 != 0) {
        FUN_101359e0((uint *)&local_440,(uint)pvVar22,(int)pvVar27 - (int)pvVar22,(LPVOID)0x2,2);
        local_4e0 = local_440._4_4_;
        pvVar22 = (HANDLE)local_440;
      }
      local_438 = CONCAT44(local_438._4_4_,pvVar22);
      p_Var50 = local_4e0;
      pvVar27 = pvVar22;
      pvVar37 = pvVar22;
    } while( true );
  }
  uVar11 = local_4b4._4_4_;
  iVar67 = FUN_10110f10((byte *)local_4b4._4_4_,local_4b4._8_4_);
  pWVar52 = pWVar66;
  if ((iVar67 != 0) && (extraout_EDX_00 <= pWVar66)) {
    local_478.hProcess = extraout_EDX_00;
    pWVar52 = extraout_EDX_00;
    if (extraout_EDX_00 < pWVar66 && extraout_EDX_00 != (LPWSTR)0x0) {
      if (*(byte *)(uVar11 + (int)extraout_EDX_00) == 0xed) {
        pWVar52 = (LPWSTR)((int)extraout_EDX_00 + 1);
        if (pWVar66 <= pWVar52) {
LAB_10119a28:
          FUN_10136b52(pWVar52,pWVar66,&PTR_s_C__Users_runneradmin__rustup_too_10157148);
                    /* WARNING: Does not return */
          pcVar28 = (code *)invalidInstructionException();
          (*pcVar28)();
        }
        if (((((LPWSTR)0x2 < extraout_EDX_00) &&
             (0x9f < ((byte *)(uVar11 + 1))[(int)extraout_EDX_00])) &&
            (((byte *)(uVar11 + -3))[(int)extraout_EDX_00] == 0xed)) &&
           (0x9f < *(byte *)((int)(uVar11 + -2) + (int)extraout_EDX_00))) {
          p_Var35 = &local_478;
LAB_10118080:
          local_410[0].cb._0_1_ = (char)p_Var35;
          local_410[0].cb._1_1_ = (undefined1)((uint)p_Var35 >> 8);
          local_410[0].cb._2_1_ = (undefined1)((uint)p_Var35 >> 0x10);
          local_410[0].cb._3_1_ = (undefined1)((uint)p_Var35 >> 0x18);
          local_410[0].lpReserved._0_2_ = 0x6fc0;
          local_410[0].lpReserved._2_2_ = 0x1009;
          FUN_101369c0(&DAT_10157c6a,local_410,&PTR_s_C__Users_runneradmin__rustup_too_10157148);
                    /* WARNING: Does not return */
          pcVar28 = (code *)invalidInstructionException();
          (*pcVar28)();
        }
      }
      else if ((char)*(byte *)(uVar11 + (int)extraout_EDX_00) < -0x40) {
        p_Var35 = &local_478;
LAB_101199bd:
        local_410[0].cb._0_1_ = (char)p_Var35;
        local_410[0].cb._1_1_ = (undefined1)((uint)p_Var35 >> 8);
        local_410[0].cb._2_1_ = (undefined1)((uint)p_Var35 >> 0x10);
        local_410[0].cb._3_1_ = (undefined1)((uint)p_Var35 >> 0x18);
        local_410[0].lpReserved._0_2_ = 0x6fc0;
        local_410[0].lpReserved._2_2_ = 0x1009;
        FUN_101369c0(&DAT_10157c3f,local_410,&PTR_s_C__Users_runneradmin__rustup_too_10157148);
                    /* WARNING: Does not return */
        pcVar28 = (code *)invalidInstructionException();
        (*pcVar28)();
      }
      pWVar52 = extraout_EDX_00;
      if ((char)*(byte *)(uVar11 + (int)extraout_EDX_00) < -0x40) {
LAB_10118ec2:
        FUN_10136b40(&DAT_101579d0);
                    /* WARNING: Does not return */
        pcVar28 = (code *)invalidInstructionException();
        (*pcVar28)();
      }
    }
  }
  local_410[0].cb._0_1_ = (char)uVar4;
  local_410[0].cb._1_1_ = SUB81(uVar4,1);
  local_410[0].cb._2_1_ = SUB81(uVar4,2);
  local_410[0].cb._3_1_ = SUB81(uVar4,3);
  local_410[0].lpReserved._0_2_ = SUB82(uVar4,4);
  local_410[0].lpReserved._2_2_ = SUB82(uVar4,6);
  local_410[0].lpDesktop._0_2_ = SUB42(pWVar52,0);
  local_410[0].lpDesktop._2_2_ = (undefined2)((uint)pWVar52 >> 0x10);
  local_410[0].lpTitle._0_1_ = SUB81(uVar10,4);
  local_410[0].lpTitle._1_1_ = SUB81(uVar10,5);
  local_410[0].lpTitle._2_2_ = SUB82(uVar10,6);
  FUN_10111020(&local_410[0].cb,(byte *)puVar54,(uint)puVar46);
  if ((char)local_450 == '\0') {
    FUN_10110c70(&local_410[0].cb,&DAT_10156c3a,3);
  }
  pvVar25 = (LPVOID)CONCAT22(local_410[0].lpReserved._2_2_,local_410[0].lpReserved._0_2_);
  FUN_10119cc0((DWORD *)&local_430,(int)pvVar25,
               CONCAT22(local_410[0].lpDesktop._2_2_,local_410[0].lpDesktop._0_2_));
  if (CONCAT13(local_410[0].cb._3_1_,
               CONCAT12(local_410[0].cb._2_1_,CONCAT11(local_410[0].cb._1_1_,(char)local_410[0].cb))
              ) != 0) {
    pvVar27 = GetProcessHeap();
    HeapFree(pvVar27,0,pvVar25);
  }
  pvVar27 = local_430.hProcess;
  pWVar60 = local_430.hThread;
  ppuVar68 = (undefined **)local_430.dwProcessId;
  if (local_430.hProcess == (LPVOID)0xffffffff) goto LAB_10117d2d;
LAB_1011837c:
  local_430.dwProcessId = (DWORD)ppuVar68;
  local_430.hThread = pWVar60;
  local_430.hProcess = pvVar27;
  local_454 = (undefined **)local_430.dwProcessId;
  local_45c = local_430.hProcess;
  uStack_458 = local_430.hThread;
  if (local_430.hProcess == (LPVOID)0xffffffff) {
LAB_101164d1:
    *(undefined ***)(local_4b4._56_4_ + 4) = local_454;
    *(LPCWSTR *)local_4b4._56_4_ = uStack_458;
    *(uint *)(local_4b4._56_4_ + 8) = 0xffffffff;
  }
  else {
LAB_1011680a:
    pWVar60 = uStack_458;
    local_4b4._44_4_ = local_45c;
    if ((local_454 < &DAT_00000004) ||
       ((*(int *)(uStack_458 + 2) != 0x5c003f || *(int *)uStack_458 != 0x5c005c &&
        (*(int *)(uStack_458 + 2) != 0x5c003f || *(int *)uStack_458 != 0x3f005c)))) {
      pvVar27 = (HANDLE)0x200;
      pvVar22 = (HANDLE)0x0;
      local_4b4._0_8_ = 0x200000000;
      local_4b4._8_8_ = local_4b4._8_8_ & 0xffffffff00000000;
      local_4d0 = (_STARTUPINFOW *)0x2;
LAB_1011689e:
      local_4e0 = (HANDLE)0x200;
      p_Var50 = local_410;
      do {
        SetLastError(0);
        pvVar29 = (HANDLE)GetFullPathNameW(pWVar60,(DWORD)pvVar27,(LPWSTR)p_Var50,(LPWSTR *)0x0);
        if ((pvVar29 == (HANDLE)0x0) && (DVar30 = GetLastError(), DVar30 != 0)) {
          uVar62 = GetLastError();
          if ((HANDLE)local_4b4._0_4_ != (HANDLE)0x0) {
            uVar11 = local_4b4._4_4_;
            pvVar27 = GetProcessHeap();
            HeapFree(pvVar27,0,(LPVOID)uVar11);
          }
          *(undefined1 *)local_4b4._56_4_ = 0;
          goto LAB_10116cea;
        }
        if (pvVar29 == pvVar27) {
          DVar30 = GetLastError();
          if (DVar30 != 0x7a) {
LAB_1011996a:
            FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_10156b90);
                    /* WARNING: Does not return */
            pcVar28 = (code *)invalidInstructionException();
            (*pcVar28)();
          }
          pvVar27 = (HANDLE)((int)pvVar27 * 2);
        }
        else {
          bVar69 = pvVar29 <= pvVar27;
          pvVar27 = pvVar29;
          if (bVar69) {
            if (local_4e0 < pvVar29) {
LAB_101197b5:
              FUN_10136a50(0,(uint)pvVar29,(uint)local_4e0,
                           &PTR_s_C__Users_runneradmin__rustup_too_10156b58);
                    /* WARNING: Does not return */
              pcVar28 = (code *)invalidInstructionException();
              (*pcVar28)();
            }
            if ((((HANDLE)0x3 < pvVar29) &&
                (*(short *)((int)p_Var50 + ((int)pvVar29 - 4U) * 2) == 0x2e)) &&
               (uVar62 = *(ushort *)((int)p_Var50 + ((int)pvVar29 - 3U) * 2) - 0x42, uVar62 < 0x22))
            {
                    /* WARNING: Could not recover jumptable at 0x10116a0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(local_4b4._52_4_ + *(int *)(&DAT_10119c08 + uVar62 * 4)))();
              return;
            }
            if ((HANDLE)local_4b4._0_4_ != (HANDLE)0x0) {
              uVar11 = local_4b4._4_4_;
              pvVar27 = GetProcessHeap();
              HeapFree(pvVar27,0,(LPVOID)uVar11);
            }
            goto LAB_10117316;
          }
        }
        if (pvVar27 < (HANDLE)0x201) goto LAB_1011689e;
        uVar62 = (int)pvVar27 - (int)pvVar22;
        pvVar27 = pvVar22;
        if (uVar62 != 0) {
          FUN_101359e0((uint *)local_4b4,(uint)pvVar22,uVar62,(LPVOID)0x2,2);
          local_4d0 = (_STARTUPINFOW *)local_4b4._4_4_;
          pvVar27 = (HANDLE)local_4b4._0_4_;
        }
        local_4b4._8_4_ = pvVar27;
        p_Var50 = local_4d0;
        pvVar22 = pvVar27;
        local_4e0 = pvVar27;
      } while( true );
    }
    if (((local_454 != (undefined **)&DAT_00000004) &&
        (uStack_458[(int)((int)local_454 + -5)] == L'.')) &&
       ((ushort)uStack_458[(int)(local_454 + -1)] - 0x42 < 0x22)) {
                    /* WARNING: Could not recover jumptable at 0x10116b4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(local_4b4._52_4_ +
                *(int *)(&DAT_10119b80 + ((ushort)uStack_458[(int)(local_454 + -1)] - 0x42) * 4)))()
      ;
      return;
    }
LAB_10117316:
    FUN_1013c700(local_410,(int)puVar54,(int)puVar46,(char *)param_2[0xb],param_2[0xc],
                 *(byte *)((int)param_2 + 0x5d));
    uVar11 = local_4b4._44_4_;
    uVar58 = CONCAT13(local_410[0].cb._3_1_,
                      CONCAT12(local_410[0].cb._2_1_,
                               CONCAT11(local_410[0].cb._1_1_,(char)local_410[0].cb)));
    uVar63 = CONCAT22(local_410[0].lpReserved._2_2_,local_410[0].lpReserved._0_2_);
    uVar62 = CONCAT22(local_410[0].lpDesktop._2_2_,local_410[0].lpDesktop._0_2_);
    if (uVar58 != 0xffffffff) {
      local_440 = CONCAT44(uVar63,uVar58);
      if (uVar62 == uVar58) {
        local_438._0_4_ = uVar62;
        FUN_1013c000((uint *)&local_440);
        uVar63 = (uint)local_440._4_4_;
      }
      *(undefined2 *)(uVar63 + uVar62 * 2) = 0;
      uVar58 = 0x400;
      local_438 = CONCAT44(local_438._4_4_,uVar62 + 1);
      if ((char)param_2[0x17] != '\0') {
        uVar58 = 0x608;
      }
      local_414 = (uint)(byte)param_2[0x18];
      local_448 = (LPWSTR)(uVar58 | param_2[0x16]);
      if (((uint)local_44c & 1) == 0) {
        pvVar27 = (HANDLE)0x0;
        local_4dc = (LPVOID)0x2;
        local_44c = (undefined2 *)0x0;
LAB_101180c2:
        if (param_2[0xd] == 0xffffffff) {
          p_Var35 = &local_430;
          ppuVar68 = (undefined **)0x2;
          p_Var23 = &local_478;
          pWVar66 = (LPWSTR)0x0;
          local_4b4._0_8_ = local_4b4._0_8_ & 0xffffffff00000000;
          local_4b8 = (undefined **)0x0;
        }
        else {
          pbVar51 = (byte *)param_2[0xe];
          uVar62 = param_2[0xf];
          bVar69 = true;
          local_4b8 = (undefined **)(pbVar51 + uVar62);
          pbVar43 = pbVar51;
LAB_101180f0:
          do {
            do {
              bVar70 = !bVar69;
              bVar69 = true;
            } while (bVar70);
            if (pbVar43 == pbVar51 + uVar62) {
              if (uVar62 == 0) {
                local_4cc = (undefined **)0x1;
                local_4b4._52_4_ = (undefined **)0x0;
                iVar67 = 4;
                SVar53 = 8;
                uVar56 = 0;
                uVar58 = 0;
              }
              else {
                bVar5 = *pbVar51;
                uVar63 = (uint)bVar5;
                if ((char)bVar5 < '\0') {
                  if (bVar5 < 0xe0) {
                    ppuVar68 = (undefined **)(pbVar51 + 2);
                    uVar58 = 0;
                    uVar63 = (uVar63 & 0x1f) << 6 | pbVar51[1] & 0x3f;
                  }
                  else {
                    uVar58 = pbVar51[2] & 0x3f | (pbVar51[1] & 0x3f) << 6;
                    if (bVar5 < 0xf0) {
                      ppuVar68 = (undefined **)(pbVar51 + 3);
                      uVar63 = uVar58 | (uVar63 & 0x1f) << 0xc;
                    }
                    else {
                      ppuVar68 = (undefined **)(pbVar51 + 4);
                      uVar63 = pbVar51[3] & 0x3f | uVar58 << 6 | (uVar63 & 7) << 0x12;
                    }
                    if (uVar63 < 0x10000) {
                      uVar58 = 0;
                    }
                    else {
                      uVar58 = uVar63 & 0x3ff | 0xdc00;
                      uVar63 = uVar63 + 0xff0000 >> 10 | 0xd800;
                    }
                  }
                }
                else {
                  ppuVar68 = (undefined **)(pbVar51 + 1);
                  uVar58 = 0;
                }
                uVar56 = (undefined2)uVar63;
                uVar63 = (int)(pbVar51 + uVar62) - (int)ppuVar68;
                uVar62 = 0xffffffff;
                if (uVar63 < 0xfffffffd) {
                  uVar62 = uVar63 + 3;
                }
                uVar63 = ((uVar62 >> 2) + 1) - (uint)((short)uVar58 == 0);
                uVar62 = 2;
                if (2 < uVar63) {
                  uVar62 = uVar63;
                }
                if (0x3ffffffd < uVar63) {
                  FUN_101367b0();
                    /* WARNING: Does not return */
                  pcVar28 = (code *)invalidInstructionException();
                  (*pcVar28)();
                }
                SVar53 = uVar62 * 2 + 4;
                iVar67 = uVar62 + 2;
                local_4cc = (undefined **)0x0;
                local_4b4._52_4_ = ppuVar68;
              }
              puVar36 = FUN_10107380(0,SVar53);
              if (puVar36 == (undefined2 *)0x0) {
                FUN_101366bc(2);
                    /* WARNING: Does not return */
                pcVar28 = (code *)invalidInstructionException();
                (*pcVar28)();
              }
              *puVar36 = uVar56;
              local_410[0].cb._0_1_ = (char)iVar67;
              local_410[0].cb._1_1_ = (undefined1)((uint)iVar67 >> 8);
              local_410[0].cb._2_1_ = (undefined1)((uint)iVar67 >> 0x10);
              local_410[0].cb._3_1_ = (undefined1)((uint)iVar67 >> 0x18);
              pWVar66 = (LPWSTR)0x1;
              local_410[0].lpReserved._0_2_ = SUB42(puVar36,0);
              local_410[0].lpReserved._2_2_ = (undefined2)((uint)puVar36 >> 0x10);
              local_4e0 = (_STARTUPINFOW *)local_4cc;
              ppuVar68 = (undefined **)local_4b4._52_4_;
              goto LAB_1011927a;
            }
            bVar5 = *pbVar43;
            uVar58 = (uint)bVar5;
            if ((char)bVar5 < '\0') {
              pbVar1 = pbVar43 + 1;
              if (bVar5 < 0xe0) {
                pbVar43 = pbVar43 + 2;
                uVar58 = (uVar58 & 0x1f) << 6 | *pbVar1 & 0x3f;
              }
              else {
                uVar63 = pbVar43[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
                if (bVar5 < 0xf0) {
                  pbVar43 = pbVar43 + 3;
                  uVar58 = uVar63 | (uVar58 & 0x1f) << 0xc;
                }
                else {
                  pbVar1 = pbVar43 + 3;
                  pbVar43 = pbVar43 + 4;
                  uVar58 = *pbVar1 & 0x3f | uVar63 << 6 | (uVar58 & 7) << 0x12;
                }
                bVar69 = false;
                if (0xffff < uVar58) goto LAB_101180f0;
              }
            }
            else {
              pbVar43 = pbVar43 + 1;
            }
            bVar69 = true;
          } while (uVar58 != 0);
          local_478.hProcess._0_1_ = 2;
          pWVar66 = (LPWSTR)0xffffffff;
          p_Var35 = (_PROCESS_INFORMATION *)local_4b4;
          ppuVar68 = &PTR_s_nul_byte_found_in_provided_data_10156ac8;
          p_Var23 = &local_430;
          local_410[0].lpDesktop =
               (LPWSTR)CONCAT22(local_410[0].lpDesktop._2_2_,local_410[0].lpDesktop._0_2_);
        }
LAB_10119433:
        p_Var23->hProcess = ppuVar68;
        p_Var35->hProcess = pWVar66;
        uVar12 = local_4b4._0_4_;
        pvVar22 = local_478.hProcess;
        if ((HANDLE)local_4b4._0_4_ == (HANDLE)0xffffffff) {
          *(HANDLE *)local_4b4._56_4_ = local_478.hProcess;
          *(HANDLE *)(local_4b4._56_4_ + 4) = local_430.hProcess;
          *(uint *)(local_4b4._56_4_ + 8) = 0xffffffff;
        }
        else {
          local_478.hProcess = (HANDLE)0x0;
          local_478.hThread = (HANDLE)0x0;
          local_478.dwProcessId = 0;
          local_478.dwThreadId = 0;
          AcquireSRWLockExclusive((PSRWLOCK)&DAT_101633a0);
          local_4b4._0_8_ = local_4b4._0_8_ & 0xffffffff00000000;
          local_4b4._8_8_ = local_4b4._8_8_ & 0xffffffff00000000;
          local_4b4._16_8_ = local_4b4._16_8_ & 0xffffffff00000000;
          uVar62 = param_2[2];
          puVar54 = param_2;
          if (*param_2 == 0xffffffff) {
            puVar54 = &local_420;
          }
          puVar47 = param_2 + 4;
          if (param_2[4] == 0xffffffff) {
            puVar47 = &local_420;
          }
          FUN_1011a650(local_410,(int *)puVar54);
          if ((char)local_410[0].cb == -1) {
            pvVar37 = (HANDLE)CONCAT22(local_410[0].lpReserved._2_2_,local_410[0].lpReserved._0_2_);
            puVar54 = param_2 + 2;
            if (uVar62 == 0xffffffff) {
              puVar54 = &local_420;
            }
            FUN_1011a650(local_410,(int *)puVar54);
            if ((char)local_410[0].cb == -1) {
              pvVar29 = (HANDLE)CONCAT22(local_410[0].lpReserved._2_2_,local_410[0].lpReserved._0_2_
                                        );
              FUN_1011a650(local_410,(int *)puVar47);
              if ((char)local_410[0].cb == -1) {
                hObject = (HANDLE)CONCAT22(local_410[0].lpReserved._2_2_,
                                           local_410[0].lpReserved._0_2_);
                local_410[0].hStdOutput = (HANDLE)0x0;
                local_410[0].hStdError = (HANDLE)0x0;
                local_410[0].lpReserved2 = (LPBYTE)0x0;
                local_410[0].hStdInput = (HANDLE)0x0;
                local_410[0].dwFlags = 0;
                local_410[0].wShowWindow = 0;
                local_410[0].cbReserved2 = 0;
                local_410[0].dwYCountChars = 0;
                local_410[0].dwFillAttribute = 0;
                local_410[0].dwYSize = 0;
                local_410[0].dwXCountChars = 0;
                local_410[0].dwY._0_2_ = 0;
                local_410[0].dwY._2_2_ = 0;
                local_410[0].dwXSize = 0;
                local_410[0].lpTitle._0_1_ = 0;
                local_410[0].lpTitle._1_1_ = 0;
                local_410[0].lpTitle._2_2_ = 0;
                local_410[0].dwX._0_2_ = 0;
                local_410[0].dwX._2_2_ = 0;
                local_410[0].lpReserved._0_2_ = 0;
                local_410[0].lpReserved._2_2_ = 0;
                local_410[0].lpDesktop._0_2_ = 0;
                local_410[0].lpDesktop._2_2_ = 0;
                if (((pvVar37 == (HANDLE)0x0) && (pvVar29 == (HANDLE)0x0)) &&
                   (uVar62 = 0, hObject == (HANDLE)0x0)) {
                  if ((char)param_2[0x11] == '\0') goto LAB_1011978d;
LAB_101196f7:
                  uVar58 = uVar62 | 1;
                  local_410[0]._44_8_ =
                       (ulonglong)CONCAT24(*(undefined2 *)((int)param_2 + 0x46),uVar62) | 1;
                  uVar62 = uVar58;
                  if (*(char *)((int)param_2 + 0x5e) != '\0') goto LAB_10119797;
LAB_1011971b:
                  cVar18 = *(char *)((int)param_2 + 0x5f);
                }
                else {
                  local_410[0].dwFlags = 0x100;
                  local_410[0].wShowWindow = 0;
                  local_410[0].cbReserved2 = 0;
                  local_410[0]._52_8_ = ZEXT48(pvVar37) << 0x20;
                  local_410[0].hStdError = hObject;
                  local_410[0].hStdOutput = pvVar29;
                  uVar62 = 0x100;
                  if ((char)param_2[0x11] != '\0') goto LAB_101196f7;
LAB_1011978d:
                  if (*(char *)((int)param_2 + 0x5e) == '\0') goto LAB_1011971b;
LAB_10119797:
                  local_410[0]._44_8_ = CONCAT44(local_410[0]._48_4_,uVar62) | 0x20;
                  cVar18 = *(char *)((int)param_2 + 0x5f);
                  uVar62 = uVar62 | 0x20;
                }
                uVar58 = uVar62;
                if (cVar18 != '\0') {
                  uVar58 = uVar62 | 0x8000;
                  local_410[0]._48_4_ = (undefined4)((ulonglong)local_410[0]._44_8_ >> 0x20);
                  local_410[0]._44_8_ = CONCAT44(local_410[0]._48_4_,uVar62) | 0x8000;
                }
                if (*(char *)((int)param_2 + 0x61) == '\0') {
                  uVar62 = 0x80;
LAB_101197d2:
                  local_410[0].dwFlags = uVar58 | uVar62;
                }
                else if (*(char *)((int)param_2 + 0x61) != '\x02') {
                  uVar62 = 0x40;
                  goto LAB_101197d2;
                }
                local_410[0].cb._0_1_ = 'D';
                local_410[0].cb._1_1_ = 0;
                local_410[0].cb._2_1_ = 0;
                local_410[0].cb._3_1_ = 0;
                BVar38 = CreateProcessW(pWVar60,(LPWSTR)local_440._4_4_,(LPSECURITY_ATTRIBUTES)0x0,
                                        (LPSECURITY_ATTRIBUTES)0x0,local_414,(DWORD)local_448,
                                        local_44c,(LPCWSTR)local_4b8,local_410,&local_478);
                if (BVar38 != 0) {
                  *(undefined8 *)(local_4b4._56_4_ + 0x10) = local_4b4._8_8_;
                  *(undefined8 *)(local_4b4._56_4_ + 0x18) = local_4b4._16_8_;
                  *(undefined8 *)(local_4b4._56_4_ + 8) = local_4b4._0_8_;
                  *(undefined8 *)local_4b4._56_4_ = local_478._0_8_;
                  CloseHandle(hObject);
                  CloseHandle(pvVar29);
                  CloseHandle(pvVar37);
                  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_101633a0);
                  if ((HANDLE)uVar12 != (HANDLE)0x0) {
                    pvVar37 = GetProcessHeap();
                    HeapFree(pvVar37,0,pvVar22);
                  }
                  if (pvVar27 != (HANDLE)0x0) {
                    pvVar27 = GetProcessHeap();
                    HeapFree(pvVar27,0,local_4dc);
                  }
                  if ((HANDLE)local_440 != (HANDLE)0x0) {
                    pvVar25 = local_440._4_4_;
                    pvVar27 = GetProcessHeap();
                    HeapFree(pvVar27,0,pvVar25);
                  }
                  if ((LPVOID)uVar11 != (LPVOID)0x0) {
                    pvVar27 = GetProcessHeap();
                    HeapFree(pvVar27,0,pWVar60);
                  }
                  goto LAB_10119b5b;
                }
                DVar30 = GetLastError();
                *(undefined1 *)local_4b4._56_4_ = 0;
                *(DWORD *)(local_4b4._56_4_ + 4) = DVar30;
                *(uint *)(local_4b4._56_4_ + 8) = 0xffffffff;
                CloseHandle(hObject);
                CloseHandle(pvVar29);
                CloseHandle(pvVar37);
                uVar3 = local_4b4._0_8_;
              }
              else {
                *(undefined1 *)(local_4b4._56_4_ + 3) = local_410[0].cb._3_1_;
                *(ushort *)(local_4b4._56_4_ + 1) =
                     CONCAT11(local_410[0].cb._2_1_,local_410[0].cb._1_1_);
                *(char *)local_4b4._56_4_ = (char)local_410[0].cb;
                *(uint *)(local_4b4._56_4_ + 4) =
                     CONCAT22(local_410[0].lpReserved._2_2_,local_410[0].lpReserved._0_2_);
                *(uint *)(local_4b4._56_4_ + 8) = 0xffffffff;
                CloseHandle(pvVar29);
                CloseHandle(pvVar37);
                uVar3 = local_4b4._0_8_;
              }
            }
            else {
              *(undefined1 *)(local_4b4._56_4_ + 3) = local_410[0].cb._3_1_;
              *(ushort *)(local_4b4._56_4_ + 1) =
                   CONCAT11(local_410[0].cb._2_1_,local_410[0].cb._1_1_);
              *(char *)local_4b4._56_4_ = (char)local_410[0].cb;
              *(uint *)(local_4b4._56_4_ + 4) =
                   CONCAT22(local_410[0].lpReserved._2_2_,local_410[0].lpReserved._0_2_);
              *(uint *)(local_4b4._56_4_ + 8) = 0xffffffff;
              CloseHandle(pvVar37);
              uVar3 = local_4b4._0_8_;
            }
          }
          else {
            *(undefined1 *)(local_4b4._56_4_ + 3) = local_410[0].cb._3_1_;
            *(ushort *)(local_4b4._56_4_ + 1) =
                 CONCAT11(local_410[0].cb._2_1_,local_410[0].cb._1_1_);
            *(char *)local_4b4._56_4_ = (char)local_410[0].cb;
            *(uint *)(local_4b4._56_4_ + 4) =
                 CONCAT22(local_410[0].lpReserved._2_2_,local_410[0].lpReserved._0_2_);
            *(uint *)(local_4b4._56_4_ + 8) = 0xffffffff;
            uVar3 = local_4b4._0_8_;
          }
          bVar69 = (HANDLE)local_4b4._0_4_ != (HANDLE)0x0;
          local_4b4._0_8_ = uVar3;
          if (bVar69) {
            local_4b4._4_4_ = (undefined4)(uVar3 >> 0x20);
            uVar8 = local_4b4._4_4_;
            CloseHandle((HANDLE)uVar8);
          }
          if ((LPWSTR)local_4b4._8_4_ != (LPWSTR)0x0) {
            CloseHandle((HANDLE)local_4b4._12_4_);
          }
          if (local_4b4._16_4_ != 0) {
            CloseHandle((HANDLE)local_4b4._20_4_);
          }
          ReleaseSRWLockExclusive((PSRWLOCK)&DAT_101633a0);
          if ((HANDLE)uVar12 != (HANDLE)0x0) {
            pvVar37 = GetProcessHeap();
            HeapFree(pvVar37,0,pvVar22);
          }
        }
        if (pvVar27 != (HANDLE)0x0) {
          pvVar27 = GetProcessHeap();
          HeapFree(pvVar27,0,local_4dc);
        }
      }
      else {
        local_478._0_12_ = ZEXT812(0x200000000);
        local_4dc = (LPWSTR)0x0;
        local_44c = (undefined2 *)0x2;
        local_444 = (HANDLE)0x0;
        if (local_4cc == (undefined **)0x0) {
          FUN_1013c000((uint *)&local_478);
          local_44c = local_478.hThread;
          *(undefined2 *)local_478.hThread = 0;
          local_478.dwProcessId = 1;
        }
        local_444 = (HANDLE)(uint)(local_4cc == (undefined **)0x0);
        local_410[0].cb._0_1_ = local_4b8 != (LPVOID)0x0;
        if (!(bool)(char)local_410[0].cb) {
          local_4cc = (undefined **)0x0;
        }
        local_410[0].cb._1_1_ = 0;
        local_410[0].cb._2_1_ = 0;
        local_410[0].cb._3_1_ = 0;
        local_410[0].lpReserved._0_2_ = 0;
        local_410[0].lpReserved._2_2_ = 0;
        local_410[0].lpDesktop._0_2_ = SUB42(local_4b8,0);
        local_410[0].lpDesktop._2_2_ = (undefined2)((uint)local_4b8 >> 0x10);
        local_410[0].lpTitle._0_1_ = (undefined1)local_430.dwThreadId;
        local_410[0].lpTitle._1_1_ = (undefined1)(local_430.dwThreadId >> 8);
        local_410[0].lpTitle._2_2_ = (undefined2)(local_430.dwThreadId >> 0x10);
        local_410[0].dwX._0_2_ = (ushort)(byte)(char)local_410[0].cb;
        local_410[0].dwX._2_2_ = 0;
        local_410[0].dwY._0_2_ = 0;
        local_410[0].dwY._2_2_ = 0;
        local_410[0].dwXSize = (DWORD)local_4b8;
        local_410[0].dwYSize = local_430.dwThreadId;
        local_410[0].dwXCountChars = (DWORD)local_4cc;
        FUN_1011a3f0((int *)local_4b4,(int *)local_410);
        while ((HANDLE)local_4b4._0_4_ != (HANDLE)0x0) {
          iVar21 = local_4b4._8_4_ * 0x1c;
          iVar67 = *(int *)(local_4b4._0_4_ + iVar21 + 0xb4);
          if (iVar67 == -1) break;
          local_4b4._52_4_ = *(undefined4 *)(local_4b4._0_4_ + iVar21 + 0xc4);
          iVar48 = local_4b4._8_4_ * 0x10;
          pWVar45 = *(LPCWSTR *)(local_4b4._0_4_ + iVar21 + 0xb8);
          pbVar51 = *(byte **)(local_4b4._0_4_ + iVar48 + 4);
          iVar59 = *(int *)(local_4b4._0_4_ + iVar48);
          local_4cc = *(undefined ***)(local_4b4._0_4_ + iVar48 + 8);
          local_450 = *(undefined1 **)(local_4b4._0_4_ + iVar21 + 200);
          uVar62 = *(uint *)(local_4b4._0_4_ + iVar21 + 0xcc);
          bVar69 = true;
          pWVar49 = pWVar45;
          while( true ) {
            do {
              bVar70 = !bVar69;
              bVar69 = true;
            } while (bVar70);
            local_430.dwThreadId = (DWORD)pWVar45;
            if (pWVar49 == (LPCWSTR)(*(int *)(local_4b4._0_4_ + iVar21 + 0xbc) + (int)pWVar45))
            break;
            bVar5 = (byte)*pWVar49;
            uVar58 = (uint)bVar5;
            if (-1 < (char)bVar5) {
              pWVar49 = (LPCWSTR)((int)pWVar49 + 1);
              goto LAB_101174ff;
            }
            uVar63 = *(byte *)((int)pWVar49 + 1) & 0x3f;
            if (bVar5 < 0xe0) {
              pWVar49 = pWVar49 + 1;
              uVar58 = (uVar58 & 0x1f) << 6 | uVar63;
              goto LAB_101174ff;
            }
            uVar63 = (byte)pWVar49[1] & 0x3f | uVar63 << 6;
            if (bVar5 < 0xf0) {
              pWVar49 = (LPCWSTR)((int)pWVar49 + 3);
              uVar58 = uVar63 | (uVar58 & 0x1f) << 0xc;
            }
            else {
              pbVar43 = (byte *)((int)pWVar49 + 3);
              pWVar49 = pWVar49 + 2;
              uVar58 = *pbVar43 & 0x3f | uVar63 << 6 | (uVar58 & 7) << 0x12;
            }
            bVar69 = false;
            if (uVar58 < 0x10000) {
LAB_101174ff:
              bVar69 = true;
              if (uVar58 == 0) {
                if (iVar67 != 0) {
                  pvVar27 = GetProcessHeap();
                  HeapFree(pvVar27,0,(LPVOID)local_430.dwThreadId);
                }
                if (iVar59 != 0) {
                  pvVar27 = GetProcessHeap();
                  HeapFree(pvVar27,0,pbVar51);
                }
                local_4dc = (LPWSTR)((uint)local_4dc | 2);
                local_4cc = &PTR_s_nul_byte_found_in_provided_data_10156ac8;
                if ((undefined **)local_4b4._52_4_ == (undefined **)0x0) goto LAB_10119a50;
                pvVar27 = GetProcessHeap();
                puVar46 = local_450;
                goto LAB_10119a47;
              }
            }
          }
          if (iVar67 != 0) {
            pvVar27 = GetProcessHeap();
            HeapFree(pvVar27,0,pWVar45);
          }
          puVar46 = local_450;
          if ((uint)((int)local_478.hProcess - (int)local_444) < uVar62) {
            FUN_101359e0((uint *)&local_478,(uint)local_444,uVar62,(LPVOID)0x2,2);
            puVar36 = local_478.hThread;
            pvVar27 = (HANDLE)local_478.dwProcessId;
LAB_101175c6:
            memcpy(puVar36 + (int)pvVar27,puVar46,uVar62 * 2);
          }
          else {
            puVar36 = local_44c;
            pvVar27 = local_444;
            if (uVar62 != 0) goto LAB_101175c6;
          }
          pvVar27 = (HANDLE)((int)pvVar27 + uVar62);
          local_478.dwProcessId = (DWORD)pvVar27;
          if ((undefined **)local_4b4._52_4_ != (undefined **)0x0) {
            pvVar22 = GetProcessHeap();
            HeapFree(pvVar22,0,puVar46);
          }
          if (pvVar27 == local_478.hProcess) {
            FUN_1013c000((uint *)&local_478);
            puVar36 = local_478.hThread;
          }
          puVar36[(int)pvVar27] = 0x3d;
          local_4dc = (LPWSTR)((uint)pWVar45 & 0xffffff00);
          bVar69 = true;
          local_478.dwProcessId = (int)pvVar27 + 1;
          pbVar43 = pbVar51;
          while( true ) {
            do {
              bVar70 = !bVar69;
              bVar69 = true;
            } while (bVar70);
            if (pbVar43 == pbVar51 + (int)local_4cc) break;
            bVar5 = *pbVar43;
            uVar62 = (uint)bVar5;
            if (-1 < (char)bVar5) {
              pbVar43 = pbVar43 + 1;
              goto LAB_10117628;
            }
            pbVar1 = pbVar43 + 1;
            if (bVar5 < 0xe0) {
              pbVar43 = pbVar43 + 2;
              uVar62 = (uVar62 & 0x1f) << 6 | *pbVar1 & 0x3f;
              goto LAB_10117628;
            }
            uVar58 = pbVar43[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
            if (bVar5 < 0xf0) {
              pbVar43 = pbVar43 + 3;
              uVar62 = uVar58 | (uVar62 & 0x1f) << 0xc;
            }
            else {
              pbVar1 = pbVar43 + 3;
              pbVar43 = pbVar43 + 4;
              uVar62 = *pbVar1 & 0x3f | uVar58 << 6 | (uVar62 & 7) << 0x12;
            }
            bVar69 = false;
            if (uVar62 < 0x10000) {
LAB_10117628:
              bVar69 = true;
              if (uVar62 == 0) {
                uVar62 = 2;
                local_4cc = &PTR_s_nul_byte_found_in_provided_data_10156ac8;
                if (iVar59 != 0) {
                  pvVar27 = GetProcessHeap();
                  HeapFree(pvVar27,0,pbVar51);
                }
                goto LAB_10118f8d;
              }
            }
          }
          local_418 = (uint)pbVar51 >> 8;
          if (iVar59 == -1) {
            uVar62 = (uint)pbVar51 & 0xff;
LAB_10118f8d:
            local_4dc = (LPWSTR)(local_418 << 8 | uVar62);
            goto LAB_10119a50;
          }
          local_4b4._4_4_ = pbVar51 + (int)local_4cc;
          local_4b4._0_4_ = pbVar51;
          local_4b4._8_8_ = local_4b4._8_8_ & 0xffffffffffff0000;
          FUN_1010c780((uint *)&local_478,(undefined4 *)local_4b4);
          if (iVar59 != 0) {
            pvVar27 = GetProcessHeap();
            HeapFree(pvVar27,0,pbVar51);
          }
          DVar30 = local_478.dwProcessId;
          if ((HANDLE)local_478.dwProcessId == local_478.hProcess) {
            FUN_1013c000((uint *)&local_478);
          }
          *(undefined2 *)((int)local_478.hThread + DVar30 * 2) = 0;
          local_444 = (HANDLE)(DVar30 + 1);
          local_44c = local_478.hThread;
          local_478.dwProcessId = (DWORD)local_444;
          FUN_1011a3f0((int *)local_4b4,(int *)local_410);
        }
        while( true ) {
          FUN_1011a3f0((int *)local_4b4,(int *)local_410);
          pvVar22 = local_444;
          uVar12 = local_4b4._0_4_;
          if ((HANDLE)local_4b4._0_4_ == (HANDLE)0x0) break;
          uVar8 = local_4b4._8_4_;
          iVar67 = local_4b4._8_4_ * 0x1c;
          if (*(int *)(local_4b4._0_4_ + iVar67 + 0xb4) != 0) {
            pvVar25 = *(LPVOID *)(local_4b4._0_4_ + iVar67 + 0xb8);
            pvVar27 = GetProcessHeap();
            HeapFree(pvVar27,0,pvVar25);
          }
          if (*(int *)(uVar12 + iVar67 + 0xc4) != 0) {
            pvVar25 = *(LPVOID *)(uVar12 + iVar67 + 200);
            pvVar27 = GetProcessHeap();
            HeapFree(pvVar27,0,pvVar25);
          }
          piVar65 = (int *)(uVar12 + uVar8 * 0x10);
          if (*piVar65 != 0) {
            pvVar25 = (LPVOID)piVar65[1];
            pvVar27 = GetProcessHeap();
            HeapFree(pvVar27,0,pvVar25);
          }
        }
        if (local_444 == local_478.hProcess) {
          FUN_1013c000((uint *)&local_478);
          local_44c = local_478.hThread;
        }
        local_44c[(int)pvVar22] = 0;
        local_4dc = local_478.hThread;
        pvVar27 = local_478.hProcess;
        if (local_478.hProcess != (HANDLE)0xffffffff) goto LAB_101180c2;
        local_4cc = (undefined **)((int)pvVar22 + 1);
LAB_10119aea:
        *(LPWSTR *)local_4b4._56_4_ = local_4dc;
        *(undefined ***)(local_4b4._56_4_ + 4) = local_4cc;
        *(uint *)(local_4b4._56_4_ + 8) = 0xffffffff;
      }
      if ((HANDLE)local_440 != (HANDLE)0x0) {
        pvVar25 = local_440._4_4_;
        pvVar27 = GetProcessHeap();
        HeapFree(pvVar27,0,pvVar25);
      }
      if ((LPVOID)uVar11 != (LPVOID)0x0) {
        pvVar27 = GetProcessHeap();
        HeapFree(pvVar27,0,pWVar60);
      }
      goto LAB_10119b5b;
    }
    *(uint *)local_4b4._56_4_ = uVar63;
LAB_10116cea:
    *(uint *)(local_4b4._56_4_ + 4) = uVar62;
    *(uint *)(local_4b4._56_4_ + 8) = 0xffffffff;
    if ((LPVOID)local_4b4._44_4_ != (LPVOID)0x0) {
      pvVar27 = GetProcessHeap();
      HeapFree(pvVar27,0,pWVar60);
    }
  }
  if (((uint)local_44c & 1) != 0) {
    if (local_4b8 == (LPVOID)0x0) {
      local_4cc = (undefined **)0x0;
    }
    else {
      local_410[0].lpReserved._0_2_ = 0;
      local_410[0].lpReserved._2_2_ = 0;
      local_410[0].lpDesktop._0_2_ = SUB42(local_4b8,0);
      local_410[0].lpDesktop._2_2_ = (undefined2)((uint)local_4b8 >> 0x10);
      local_410[0].lpTitle._0_1_ = (undefined1)local_430.dwThreadId;
      local_410[0].lpTitle._1_1_ = (undefined1)(local_430.dwThreadId >> 8);
      local_410[0].lpTitle._2_2_ = (undefined2)(local_430.dwThreadId >> 0x10);
      local_410[0].dwY._0_2_ = 0;
      local_410[0].dwY._2_2_ = 0;
      local_410[0].dwXSize = (DWORD)local_4b8;
      local_410[0].dwYSize = local_430.dwThreadId;
    }
    local_410[0].cb._0_1_ = local_4b8 != (LPVOID)0x0;
    local_410[0].cb._1_1_ = 0;
    local_410[0].cb._2_1_ = 0;
    local_410[0].cb._3_1_ = 0;
    local_410[0].dwX._0_2_ = (ushort)(byte)(char)local_410[0].cb;
    local_410[0].dwX._2_2_ = 0;
    pcVar28 = HeapFree_exref;
    local_410[0].dwXCountChars = (DWORD)local_4cc;
    while( true ) {
      FUN_1011a3f0((int *)local_4b4,(int *)local_410);
      uVar11 = local_4b4._0_4_;
      if ((HANDLE)local_4b4._0_4_ == (HANDLE)0x0) break;
      uVar12 = local_4b4._8_4_;
      iVar67 = local_4b4._8_4_ * 0x1c;
      if (*(int *)(local_4b4._0_4_ + iVar67 + 0xb4) != 0) {
        pvVar25 = *(LPVOID *)(local_4b4._0_4_ + iVar67 + 0xb8);
        pvVar27 = GetProcessHeap();
        pcVar28 = HeapFree_exref;
        HeapFree(pvVar27,0,pvVar25);
      }
      if (*(int *)(uVar11 + iVar67 + 0xc4) != 0) {
        uVar8 = *(undefined4 *)(uVar11 + iVar67 + 200);
        pvVar27 = GetProcessHeap();
        (*pcVar28)(pvVar27,0,uVar8);
      }
      piVar65 = (int *)(uVar11 + uVar12 * 0x10);
      if (*piVar65 != 0) {
        iVar67 = piVar65[1];
        pvVar27 = GetProcessHeap();
        (*pcVar28)(pvVar27,0,iVar67);
      }
    }
  }
LAB_10119b5b:
  if (3 < local_420) {
    CloseHandle(local_41c);
  }
  return;
}
