// rea decompile_all
// name: FUN_10108990
// address: 0x10108990
// body: available
// range: 0x10108990-0x10108be3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 __cdecl
FUN_10108990(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  FARPROC pFVar2;
  HANDLE pvVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  int iStack_1130;
  CHAR local_1110 [256];
  undefined4 local_1010 [19];
  uint uStack_fc4;
  int local_fc0;
  WCHAR aWStack_fbc [2004];
  undefined4 uStack_14;

  uStack_14 = 0x101089a3;
  pcVar6 = (code *)(param_2 + -1);
  if (param_2 == 0) {
    pcVar6 = (code *)0x0;
  }
  memset(local_1010,0,0xff8);
  local_fc0 = 2000;
  local_1010[0] = 0x58;
  pFVar2 = DAT_10163334;
  if ((DAT_10163334 == (FARPROC)0x0) &&
     (pFVar2 = GetProcAddress(DAT_1016330c,"SymFromAddrW"), pFVar2 == (FARPROC)0x0)) {
LAB_10108bd8:
    FUN_10136b20(&PTR_s_C__Users_runneradmin__rustup_too_10157910);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  DAT_10163334 = pFVar2;
  pFVar2 = DAT_10163334;
  pvVar3 = GetCurrentProcess();
  local_1110[4] = '\0';
  local_1110[5] = '\0';
  local_1110[6] = '\0';
  local_1110[7] = '\0';
  local_1110[0] = '\0';
  local_1110[1] = '\0';
  local_1110[2] = '\0';
  local_1110[3] = '\0';
  uVar4 = (*pFVar2)(pvVar3,pcVar6);
  if (uVar4 == 1) {
    local_1110[0xf0] = '\0';
    local_1110[0xf1] = '\0';
    local_1110[0xf2] = '\0';
    local_1110[0xf3] = '\0';
    local_1110[0xf4] = '\0';
    local_1110[0xf5] = '\0';
    local_1110[0xf6] = '\0';
    local_1110[0xf7] = '\0';
    local_1110[0xf8] = '\0';
    local_1110[0xf9] = '\0';
    local_1110[0xfa] = '\0';
    local_1110[0xfb] = '\0';
    local_1110[0xfc] = '\0';
    local_1110[0xfd] = '\0';
    local_1110[0xfe] = '\0';
    local_1110[0xff] = '\0';
    local_1110[0xe0] = '\0';
    local_1110[0xe1] = '\0';
    local_1110[0xe2] = '\0';
    local_1110[0xe3] = '\0';
    local_1110[0xe4] = '\0';
    local_1110[0xe5] = '\0';
    local_1110[0xe6] = '\0';
    local_1110[0xe7] = '\0';
    local_1110[0xe8] = '\0';
    local_1110[0xe9] = '\0';
    local_1110[0xea] = '\0';
    local_1110[0xeb] = '\0';
    local_1110[0xec] = '\0';
    local_1110[0xed] = '\0';
    local_1110[0xee] = '\0';
    local_1110[0xef] = '\0';
    local_1110[0xd0] = '\0';
    local_1110[0xd1] = '\0';
    local_1110[0xd2] = '\0';
    local_1110[0xd3] = '\0';
    local_1110[0xd4] = '\0';
    local_1110[0xd5] = '\0';
    local_1110[0xd6] = '\0';
    local_1110[0xd7] = '\0';
    local_1110[0xd8] = '\0';
    local_1110[0xd9] = '\0';
    local_1110[0xda] = '\0';
    local_1110[0xdb] = '\0';
    local_1110[0xdc] = '\0';
    local_1110[0xdd] = '\0';
    local_1110[0xde] = '\0';
    local_1110[0xdf] = '\0';
    local_1110[0xc0] = '\0';
    local_1110[0xc1] = '\0';
    local_1110[0xc2] = '\0';
    local_1110[0xc3] = '\0';
    local_1110[0xc4] = '\0';
    local_1110[0xc5] = '\0';
    local_1110[0xc6] = '\0';
    local_1110[199] = '\0';
    local_1110[200] = '\0';
    local_1110[0xc9] = '\0';
    local_1110[0xca] = '\0';
    local_1110[0xcb] = '\0';
    local_1110[0xcc] = '\0';
    local_1110[0xcd] = '\0';
    local_1110[0xce] = '\0';
    local_1110[0xcf] = '\0';
    local_1110[0xb0] = '\0';
    local_1110[0xb1] = '\0';
    local_1110[0xb2] = '\0';
    local_1110[0xb3] = '\0';
    local_1110[0xb4] = '\0';
    local_1110[0xb5] = '\0';
    local_1110[0xb6] = '\0';
    local_1110[0xb7] = '\0';
    local_1110[0xb8] = '\0';
    local_1110[0xb9] = '\0';
    local_1110[0xba] = '\0';
    local_1110[0xbb] = '\0';
    local_1110[0xbc] = '\0';
    local_1110[0xbd] = '\0';
    local_1110[0xbe] = '\0';
    local_1110[0xbf] = '\0';
    local_1110[0xa0] = '\0';
    local_1110[0xa1] = '\0';
    local_1110[0xa2] = '\0';
    local_1110[0xa3] = '\0';
    local_1110[0xa4] = '\0';
    local_1110[0xa5] = '\0';
    local_1110[0xa6] = '\0';
    local_1110[0xa7] = '\0';
    local_1110[0xa8] = '\0';
    local_1110[0xa9] = '\0';
    local_1110[0xaa] = '\0';
    local_1110[0xab] = '\0';
    local_1110[0xac] = '\0';
    local_1110[0xad] = '\0';
    local_1110[0xae] = '\0';
    local_1110[0xaf] = '\0';
    local_1110[0x90] = '\0';
    local_1110[0x91] = '\0';
    local_1110[0x92] = '\0';
    local_1110[0x93] = '\0';
    local_1110[0x94] = '\0';
    local_1110[0x95] = '\0';
    local_1110[0x96] = '\0';
    local_1110[0x97] = '\0';
    local_1110[0x98] = '\0';
    local_1110[0x99] = '\0';
    local_1110[0x9a] = '\0';
    local_1110[0x9b] = '\0';
    local_1110[0x9c] = '\0';
    local_1110[0x9d] = '\0';
    local_1110[0x9e] = '\0';
    local_1110[0x9f] = '\0';
    local_1110[0x80] = '\0';
    local_1110[0x81] = '\0';
    local_1110[0x82] = '\0';
    local_1110[0x83] = '\0';
    local_1110[0x84] = '\0';
    local_1110[0x85] = '\0';
    local_1110[0x86] = '\0';
    local_1110[0x87] = '\0';
    local_1110[0x88] = '\0';
    local_1110[0x89] = '\0';
    local_1110[0x8a] = '\0';
    local_1110[0x8b] = '\0';
    local_1110[0x8c] = '\0';
    local_1110[0x8d] = '\0';
    local_1110[0x8e] = '\0';
    local_1110[0x8f] = '\0';
    local_1110[0x70] = '\0';
    local_1110[0x71] = '\0';
    local_1110[0x72] = '\0';
    local_1110[0x73] = '\0';
    local_1110[0x74] = '\0';
    local_1110[0x75] = '\0';
    local_1110[0x76] = '\0';
    local_1110[0x77] = '\0';
    local_1110[0x78] = '\0';
    local_1110[0x79] = '\0';
    local_1110[0x7a] = '\0';
    local_1110[0x7b] = '\0';
    local_1110[0x7c] = '\0';
    local_1110[0x7d] = '\0';
    local_1110[0x7e] = '\0';
    local_1110[0x7f] = '\0';
    local_1110[0x60] = '\0';
    local_1110[0x61] = '\0';
    local_1110[0x62] = '\0';
    local_1110[99] = '\0';
    local_1110[100] = '\0';
    local_1110[0x65] = '\0';
    local_1110[0x66] = '\0';
    local_1110[0x67] = '\0';
    local_1110[0x68] = '\0';
    local_1110[0x69] = '\0';
    local_1110[0x6a] = '\0';
    local_1110[0x6b] = '\0';
    local_1110[0x6c] = '\0';
    local_1110[0x6d] = '\0';
    local_1110[0x6e] = '\0';
    local_1110[0x6f] = '\0';
    local_1110[0x50] = '\0';
    local_1110[0x51] = '\0';
    local_1110[0x52] = '\0';
    local_1110[0x53] = '\0';
    local_1110[0x54] = '\0';
    local_1110[0x55] = '\0';
    local_1110[0x56] = '\0';
    local_1110[0x57] = '\0';
    local_1110[0x58] = '\0';
    local_1110[0x59] = '\0';
    local_1110[0x5a] = '\0';
    local_1110[0x5b] = '\0';
    local_1110[0x5c] = '\0';
    local_1110[0x5d] = '\0';
    local_1110[0x5e] = '\0';
    local_1110[0x5f] = '\0';
    local_1110[0x40] = '\0';
    local_1110[0x41] = '\0';
    local_1110[0x42] = '\0';
    local_1110[0x43] = '\0';
    local_1110[0x44] = '\0';
    local_1110[0x45] = '\0';
    local_1110[0x46] = '\0';
    local_1110[0x47] = '\0';
    local_1110[0x48] = '\0';
    local_1110[0x49] = '\0';
    local_1110[0x4a] = '\0';
    local_1110[0x4b] = '\0';
    local_1110[0x4c] = '\0';
    local_1110[0x4d] = '\0';
    local_1110[0x4e] = '\0';
    local_1110[0x4f] = '\0';
    local_1110[0x30] = '\0';
    local_1110[0x31] = '\0';
    local_1110[0x32] = '\0';
    local_1110[0x33] = '\0';
    local_1110[0x34] = '\0';
    local_1110[0x35] = '\0';
    local_1110[0x36] = '\0';
    local_1110[0x37] = '\0';
    local_1110[0x38] = '\0';
    local_1110[0x39] = '\0';
    local_1110[0x3a] = '\0';
    local_1110[0x3b] = '\0';
    local_1110[0x3c] = '\0';
    local_1110[0x3d] = '\0';
    local_1110[0x3e] = '\0';
    local_1110[0x3f] = '\0';
    local_1110[0x20] = '\0';
    local_1110[0x21] = '\0';
    local_1110[0x22] = '\0';
    local_1110[0x23] = '\0';
    local_1110[0x24] = '\0';
    local_1110[0x25] = '\0';
    local_1110[0x26] = '\0';
    local_1110[0x27] = '\0';
    local_1110[0x28] = '\0';
    local_1110[0x29] = '\0';
    local_1110[0x2a] = '\0';
    local_1110[0x2b] = '\0';
    local_1110[0x2c] = '\0';
    local_1110[0x2d] = '\0';
    local_1110[0x2e] = '\0';
    local_1110[0x2f] = '\0';
    local_1110[0x10] = '\0';
    local_1110[0x11] = '\0';
    local_1110[0x12] = '\0';
    local_1110[0x13] = '\0';
    local_1110[0x14] = '\0';
    local_1110[0x15] = '\0';
    local_1110[0x16] = '\0';
    local_1110[0x17] = '\0';
    local_1110[0x18] = '\0';
    local_1110[0x19] = '\0';
    local_1110[0x1a] = '\0';
    local_1110[0x1b] = '\0';
    local_1110[0x1c] = '\0';
    local_1110[0x1d] = '\0';
    local_1110[0x1e] = '\0';
    local_1110[0x1f] = '\0';
    local_1110[0] = '\0';
    local_1110[1] = '\0';
    local_1110[2] = '\0';
    local_1110[3] = '\0';
    local_1110[4] = '\0';
    local_1110[5] = '\0';
    local_1110[6] = '\0';
    local_1110[7] = '\0';
    local_1110[8] = '\0';
    local_1110[9] = '\0';
    local_1110[10] = '\0';
    local_1110[0xb] = '\0';
    local_1110[0xc] = '\0';
    local_1110[0xd] = '\0';
    local_1110[0xe] = '\0';
    local_1110[0xf] = '\0';
    uVar4 = local_fc0 - 1U;
    if (uStack_fc4 <= local_fc0 - 1U) {
      uVar4 = uStack_fc4;
    }
    uVar4 = WideCharToMultiByte(0xfde9,0,aWStack_fbc,uVar4,local_1110,0x100,(LPCSTR)0x0,(LPBOOL)0x0)
    ;
    if ((uVar4 == 0) || (uVar4 < 0x101)) {
      pFVar2 = DAT_10163338;
      if ((DAT_10163338 == (FARPROC)0x0) &&
         (pFVar2 = GetProcAddress(DAT_1016330c,"SymGetLineFromAddrW64"), pFVar2 == (FARPROC)0x0))
      goto LAB_10108bd8;
      DAT_10163338 = pFVar2;
      pFVar2 = DAT_10163338;
      pvVar3 = GetCurrentProcess();
      iVar5 = (*pFVar2)(pvVar3);
      if (iVar5 == 1) {
        iVar5 = -1;
        do {
          iVar1 = iVar5 * 2;
          iVar5 = iVar5 + 1;
        } while (*(short *)(iStack_1130 + 2 + iVar1) != 0);
      }
      uVar4 = (*pcVar6)(param_5,&stack0xffffeea4);
    }
  }
  return CONCAT31((int3)(uVar4 >> 8),1);
}
