// rea decompile_all
// name: FUN_10064e50
// address: 0x10064e50
// body: available
// range: 0x10064e50-0x10064fa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10064e50(undefined4 param_1,SIZE_T param_2)

{
  code *pcVar1;
  uint _Size;
  LPVOID pvVar2;
  void *_Src;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint uVar3;
  SIZE_T SVar4;
  SIZE_T local_48;
  LPVOID local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  SIZE_T local_34;
  undefined4 local_30;
  SIZE_T local_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  SIZE_T local_1c;
  undefined2 local_18;
  undefined1 local_14;

  if ((int)param_2 < 0) {
    FUN_101367b0();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_2 == 0) {
    pvVar2 = (LPVOID)0x1;
  }
  else {
    pvVar2 = FUN_10107380(0,param_2);
    if (pvVar2 == (LPVOID)0x0) {
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  uVar3 = 0;
  local_3c = 10;
  local_30 = 0;
  local_28 = 10;
  local_24 = 1;
  local_20 = 0;
  local_18 = 0;
  local_40 = 0;
  local_14 = 0;
  local_48 = param_2;
  local_44 = pvVar2;
  local_38 = param_1;
  local_34 = param_2;
  local_2c = param_2;
  local_1c = param_2;
  _Src = (void *)FUN_1008f0d0((int)&local_3c);
  _Size = extraout_EDX;
  SVar4 = local_48;
  do {
    local_48 = SVar4;
    if (_Src == (void *)0x0) {
      FUN_100033c0((int *)&local_48);
      return;
    }
    if (SVar4 - uVar3 < _Size) {
      FUN_101359e0(&local_48,uVar3,_Size,(LPVOID)0x1,1);
      pvVar2 = local_44;
      uVar3 = local_40;
LAB_10064f07:
      SVar4 = local_48;
      memcpy((void *)((int)pvVar2 + uVar3),_Src,_Size);
    }
    else if (_Size != 0) goto LAB_10064f07;
    local_40 = uVar3 + _Size;
    if (SVar4 - local_40 < 2) {
      FUN_101359e0(&local_48,local_40,2,(LPVOID)0x1,1);
      pvVar2 = local_44;
    }
    *(undefined2 *)((int)pvVar2 + local_40) = 0xa0d;
    uVar3 = local_40 + 2;
    local_40 = uVar3;
    _Src = (void *)FUN_1008f0d0((int)&local_3c);
    _Size = extraout_EDX_00;
    SVar4 = local_48;
  } while( true );
}
