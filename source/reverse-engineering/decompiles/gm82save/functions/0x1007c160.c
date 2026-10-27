// rea decompile_all
// name: FUN_1007c160
// address: 0x1007c160
// body: available
// range: 0x1007c160-0x1007c3fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_1007c160(undefined1 *param_1,int param_2,ushort *param_3,void *param_4,SIZE_T param_5,
            char param_6)

{
  undefined4 *puVar1;
  code *pcVar2;
  byte *lpMem;
  uint uVar3;
  SIZE_T SVar4;
  LPVOID pvVar5;
  HANDLE pvVar6;
  int *_Dst;
  LPVOID _Dst_00;
  SIZE_T local_84;
  LPVOID local_80;
  SIZE_T local_7c;
  undefined1 local_78;
  byte *pbStack_74;
  uint local_70;
  byte *local_6c;
  uint local_68;
  int *local_64;

  if ((*(int *)(param_2 + 4) == 0) || (*(int *)(param_2 + 8) == 0)) {
    *param_1 = 0xff;
    return;
  }
  if (param_3 == (ushort *)0x0) {
    param_3 = (ushort *)0x2;
    SVar4 = 0;
  }
  else {
    SVar4 = *(SIZE_T *)(param_3 + -2);
  }
  FUN_10093310((undefined8 *)&local_70,param_3,SVar4);
  uVar3 = local_68;
  lpMem = local_6c;
  if (param_5 == 0) {
    pvVar5 = (LPVOID)0x1;
  }
  else {
    pvVar5 = FUN_10107380(0,param_5);
    if (pvVar5 == (LPVOID)0x0) {
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    memcpy(pvVar5,param_4,param_5);
  }
  local_84 = param_5;
  local_7c = param_5;
  local_78 = 0;
  local_80 = pvVar5;
  FUN_10111020(&local_84,lpMem,uVar3);
  if (local_70 != 0) {
    pvVar6 = GetProcessHeap();
    HeapFree(pvVar6,0,lpMem);
  }
  FUN_10110c70(&local_84,"bmpBM6\x04",3);
  pvVar5 = local_80;
  if (param_6 != '\0') {
    FUN_1011c320(&local_70,(int)local_80,local_7c);
    if ((local_70 & (uint)local_6c) != 0xffffffff) {
      *param_1 = 0xff;
      if (local_84 == 0) {
        return;
      }
      pvVar6 = GetProcessHeap();
      goto LAB_1007c3c0;
    }
    if ((char)local_68 == '\x03') {
      puVar1 = (undefined4 *)local_64[1];
      pvVar5 = (LPVOID)*local_64;
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(pvVar5);
      }
      if (puVar1[1] != 0) {
        if (8 < (uint)puVar1[2]) {
          pvVar5 = *(LPVOID *)((int)pvVar5 + -4);
        }
        pvVar6 = GetProcessHeap();
        HeapFree(pvVar6,0,pvVar5);
      }
      pvVar6 = GetProcessHeap();
      HeapFree(pvVar6,0,local_64);
    }
  }
  _Dst = FUN_10107380(0,0x436);
  if (_Dst == (int *)0x0) {
    FUN_101366bc(1);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  memcpy(_Dst,&DAT_1014305c,0x36);
  FUN_1004d960(param_2,(undefined8 *)((int)_Dst + 0x36),'\x01',0xffffff);
  SVar4 = local_7c;
  pvVar5 = local_80;
  FUN_1011d090((char *)&local_70,(int)local_80,local_7c,_Dst,(int *)0x436);
  pvVar6 = GetProcessHeap();
  HeapFree(pvVar6,0,_Dst);
  if ((char)local_70 == -1) {
    *param_1 = 0xff;
  }
  else {
    if (SVar4 == 0) {
      _Dst_00 = (LPVOID)0x1;
    }
    else {
      pbStack_74 = local_6c;
      _Dst_00 = FUN_10107380(0,SVar4);
      if (_Dst_00 == (LPVOID)0x0) {
        FUN_101366bc(1);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      memcpy(_Dst_00,pvVar5,SVar4);
      local_6c = pbStack_74;
    }
    *(SIZE_T *)(param_1 + 0xc) = SVar4;
    *(LPVOID *)(param_1 + 0x10) = _Dst_00;
    *(SIZE_T *)(param_1 + 0x14) = SVar4;
    param_1[0x18] = 0;
    *(uint *)(param_1 + 4) = local_70;
    *(byte **)(param_1 + 8) = local_6c;
    *param_1 = 1;
  }
  if (local_84 == 0) {
    return;
  }
  pvVar6 = GetProcessHeap();
LAB_1007c3c0:
  HeapFree(pvVar6,0,pvVar5);
  return;
}
