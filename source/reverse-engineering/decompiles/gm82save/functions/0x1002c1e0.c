// rea decompile_all
// name: FUN_1002c1e0
// address: 0x1002c1e0
// body: available
// range: 0x1002c1e0-0x1002c38b inclusive
// range: 0x1002c390-0x1002c3b0 inclusive
// range: 0x1002c3c0-0x1002c4a8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_1002c1e0(undefined8 *param_1,int param_2,undefined4 param_3,uint param_4,undefined8 *param_5,
            char param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  SIZE_T SVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  LPVOID _Dst;
  uint uVar10;
  uint uVar11;
  SIZE_T _Size;
  SIZE_T SVar12;
  uint uVar13;
  void *_Src;
  undefined1 local_85;
  undefined8 local_84;
  uint local_7c;
  undefined8 *local_78;
  uint local_74;
  int iStack_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_5c;
  int iStack_58;
  undefined8 local_54;
  undefined8 local_4c;
  uint local_44;
  int iStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  uint uStack_30;
  undefined4 local_2c;
  int iStack_28;
  undefined4 local_24;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  int local_1c;
  int local_18;
  int local_14;

  uVar13 = 0;
  if (param_4 < 0x80) {
    local_85 = 1;
    uVar8 = param_4;
    uVar10 = 0;
    uVar11 = 0;
  }
  else {
    uVar11 = param_4 & 0xffffff3f | 0x80;
    if (param_4 < 0x800) {
      uVar8 = param_4 >> 6 | 0xc0;
      local_85 = 2;
      uVar13 = 0;
      uVar10 = 0;
    }
    else {
      uVar9 = param_4 >> 6 & 0xffffff3f | 0x80;
      if (param_4 < 0x10000) {
        uVar8 = param_4 >> 0xc | 0xe0;
        local_85 = 3;
        uVar10 = uVar11;
        uVar11 = uVar9;
      }
      else {
        local_85 = 4;
        uVar11 = param_4 >> 0xc & 0xffffff3f | 0x80;
        uVar13 = (param_4 & 0x3f | 0x80) << 0x18;
        uVar8 = param_4 >> 0x12 | 0xf0;
        uVar10 = uVar9;
      }
    }
  }
  local_44 = param_4;
  uStack_30 = uVar8 & 0xff | (uVar11 & 0xff) << 8 | (uVar10 & 0xff) << 0x10 | uVar13;
  local_3c = param_3;
  uStack_38 = 0;
  local_34 = param_3;
  local_2c = CONCAT31(local_2c._1_3_,local_85);
  iStack_28 = 0;
  local_24 = param_3;
  uStack_20 = 1;
  local_78 = param_1;
  iStack_40 = param_2;
  if (param_6 != '\0') {
    FUN_10053450((int)&local_44);
  }
  local_7c = *(uint *)(param_5 + 1);
  local_84 = *param_5;
  local_64 = CONCAT44(uStack_30,local_34);
  local_6c = CONCAT44(uStack_38,local_3c);
  local_4c = CONCAT44((int)*(undefined8 *)((int)param_5 + 0xc),
                      (int)((ulonglong)*(undefined8 *)((int)param_5 + 0xc) >> 0x20));
  local_54._5_1_ = (char)((ushort)uStack_20 >> 8);
  uVar1 = CONCAT26(uStack_1e,CONCAT24(uStack_20,local_24));
  local_5c = local_2c;
  iStack_58 = iStack_28;
  local_74 = local_44;
  iVar4 = iStack_40;
  cVar5 = local_54._5_1_;
  while (local_54 = uVar1, cVar5 == '\0') {
    iStack_70 = iVar4;
    FUN_10090ba0(&local_1c,(int)&local_74);
    uVar1 = local_54;
    if (local_1c == 1) {
      SVar12 = local_18 - iStack_58;
      iVar7 = local_14;
    }
    else {
      if (local_54._5_1_ != '\0') break;
      local_54._0_6_ = CONCAT15(1,(undefined5)local_54);
      uVar2 = local_54;
      local_54._4_1_ = SUB81(uVar1,4);
      local_54._0_4_ = (int)uVar1;
      if ((local_54._4_1_ != '\x01') && ((int)local_54 == iStack_58)) break;
      SVar12 = (int)local_54 - iStack_58;
      local_54 = uVar2;
      iVar7 = iStack_58;
      iVar4 = iStack_70;
    }
    _Dst = (LPVOID)0x1;
    _Size = 0;
    if (SVar12 != 0) {
      _Src = (void *)(iVar4 + iStack_58);
      _Dst = (LPVOID)0x1;
      _Size = 0;
      SVar6 = SVar12;
      if ((*(char *)((int)_Src + (SVar12 - 1)) != '\r') || (SVar6 = SVar12 - 1, SVar12 - 1 != 0)) {
        _Size = SVar6;
        iStack_58 = iVar7;
        _Dst = FUN_10107380(0,_Size);
        if (_Dst == (LPVOID)0x0) {
          FUN_101366bc(1);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        memcpy(_Dst,_Src,_Size);
        iVar7 = iStack_58;
        if (_Size == 0xffffffff) break;
      }
    }
    iStack_58 = iVar7;
    uVar13 = local_7c;
    if (local_7c == (uint)local_84) {
      FUN_101359e0((uint *)&local_84,local_7c,1,&DAT_00000004,0xc);
    }
    local_7c = uVar13 + 1;
    *(SIZE_T *)(local_84._4_4_ + uVar13 * 0xc) = _Size;
    *(LPVOID *)(local_84._4_4_ + 4 + uVar13 * 0xc) = _Dst;
    *(SIZE_T *)(local_84._4_4_ + 8 + uVar13 * 0xc) = _Size;
    uVar1 = local_54;
    iVar4 = iStack_70;
    cVar5 = local_54._5_1_;
  }
  *(uint *)(param_5 + 1) = local_7c;
  *param_5 = local_84;
  uVar1 = *param_5;
  uVar2 = param_5[1];
  *(undefined4 *)(local_78 + 2) = *(undefined4 *)(param_5 + 2);
  local_78[1] = uVar2;
  *local_78 = uVar1;
  return;
}
