// rea decompile_all
// name: FUN_10108840
// address: 0x10108840
// body: available
// range: 0x10108840-0x10108983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte __fastcall FUN_10108840(undefined4 *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  FARPROC pFVar3;
  undefined4 uVar4;
  int **hMutex;
  ulonglong uVar5;
  int **ppiVar6;
  char local_61;
  code *local_60;
  int local_5c [2];
  int **local_54 [3];
  char *local_48;
  char *local_44;
  undefined1 local_40 [16];
  byte *local_30;
  byte *local_2c;
  undefined1 local_20 [16];

  local_44 = (char *)*param_1;
  if ((*local_44 == '\0') && (100 < *(uint *)param_1[1])) {
    bVar2 = 0;
  }
  else {
    local_20 = *(undefined1 (*) [16])(param_1 + 3);
    pbVar1 = (byte *)param_1[2];
    local_48 = &local_61;
    local_61 = '\0';
    local_40._0_12_ = local_20._4_12_;
    local_40._12_4_ = local_20._0_4_;
    ppiVar6 = (int **)0x10108898;
    local_30 = pbVar1;
    local_2c = param_2;
    uVar5 = FUN_10108470();
    hMutex = (int **)(uVar5 >> 0x20);
    if ((uVar5 & 1) == 0) {
      local_60 = FUN_10108bf0;
      pFVar3 = DAT_10163348;
      local_54[0] = hMutex;
      if ((DAT_10163348 == (FARPROC)0x0) &&
         (pFVar3 = GetProcAddress(DAT_1016330c,"SymAddrIncludeInlineTrace"), pFVar3 == (FARPROC)0x0)
         ) {
        local_60 = FUN_10108990;
        pFVar3 = DAT_10163348;
      }
      DAT_10163348 = pFVar3;
      (*local_60)(local_54,*(undefined4 *)(param_2 + 8),~*param_2 & 1,
                  *(undefined4 *)(param_2 + 0x114),&local_48,&DAT_10156df0);
      ReleaseMutex(hMutex);
      ppiVar6 = hMutex;
    }
    if ((local_61 == '\0') && (*(char *)local_20._4_4_ != '\0')) {
      local_48 = (char *)0xfffffffe;
      local_54[0] = (int **)0xffffffff;
      local_5c[0] = local_20._0_4_;
      local_5c[1] = 0;
      uVar4 = FUN_10108fb0(local_5c,*(int *)(param_2 + 8),(int *)&local_48,(int *)local_54,0,ppiVar6
                          );
      *pbVar1 = (byte)uVar4;
      *(int *)(local_5c[0] + 0xc) = *(int *)(local_5c[0] + 0xc) + 1;
    }
    *(int *)param_1[1] = *(int *)param_1[1] + 1;
    bVar2 = *pbVar1 ^ 1;
  }
  return bVar2;
}
