// rea decompile_all
// name: FUN_100fb580
// address: 0x100fb580
// body: available
// range: 0x100fb580-0x100fb6d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100fb580(undefined4 *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  void *_Src;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  LPVOID _Dst;
  byte bVar7;
  SIZE_T _Size;
  undefined4 uStack_1c;
  undefined4 uStack_18;

  uVar4 = FUN_100f0c40(param_2);
  if (((uVar4 != 0x78) && (uVar4 = FUN_100f0c40(param_2), uVar4 != 0x75)) &&
     (uVar4 = FUN_100f0c40(param_2), uVar4 != 0x55)) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_101545cc);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar4 = FUN_100f0c40(param_2);
  bVar7 = 2 - (uVar4 == 0x75);
  if (uVar4 == 0x78) {
    bVar7 = 0;
  }
  uVar5 = FUN_100f1250(param_2);
  if ((char)uVar5 == '\0') {
    iVar6 = *param_2;
    _Size = param_2[2];
  }
  else {
    FUN_100f0910(param_2);
    iVar6 = *param_2;
    _Size = *(SIZE_T *)(iVar6 + 0x50);
    if (_Size != param_2[2]) {
      uVar4 = FUN_100f0c40(param_2);
      if (uVar4 == 0x7b) {
        FUN_100fd150(param_1,param_2,bVar7);
        return;
      }
      FUN_100fd7c0(param_1,param_2,bVar7);
      return;
    }
  }
  uVar5 = *(undefined4 *)(iVar6 + 0x58);
  uStack_1c = (undefined4)*(undefined8 *)(iVar6 + 0x50);
  uStack_18 = (undefined4)((ulonglong)*(undefined8 *)(iVar6 + 0x50) >> 0x20);
  uVar2 = *(undefined4 *)(iVar6 + 0x58);
  uVar1 = *(undefined8 *)(iVar6 + 0x50);
  if (_Size == 0) {
    _Dst = (LPVOID)0x1;
  }
  else {
    _Src = (void *)param_2[1];
    _Dst = FUN_10107380(0,_Size);
    if (_Dst == (LPVOID)0x0) {
      FUN_101366bc(1);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    memcpy(_Dst,_Src,_Size);
  }
  *(ulonglong *)(param_1 + 0xe) = CONCAT44(uVar5,uStack_18);
  *(ulonglong *)(param_1 + 0xc) = CONCAT44(uStack_1c,uVar2);
  *(undefined8 *)(param_1 + 10) = uVar1;
  *param_1 = 10;
  param_1[7] = _Size;
  param_1[8] = _Dst;
  param_1[9] = _Size;
  return;
}
