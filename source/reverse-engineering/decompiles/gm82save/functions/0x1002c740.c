// rea decompile_all
// name: FUN_1002c740
// address: 0x1002c740
// body: available
// range: 0x1002c740-0x1002c9ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1002c740(undefined8 *param_1,int *param_2,undefined8 *param_3)

{
  char cVar1;
  byte bVar2;
  uint _Size;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  void *pvVar6;
  byte *pbVar7;
  LPVOID pvVar8;
  byte *_Src;
  uint uVar9;
  SIZE_T SVar10;
  void *_Src_00;
  SIZE_T SVar11;
  bool bVar12;
  ulonglong uVar13;
  undefined8 local_40;
  uint local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined8 local_2c;
  uint local_24;
  uint *local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;

  local_20 = (uint *)param_2[2];
  _Size = param_2[1];
  cVar1 = (char)param_2[4];
  _Src_00 = (void *)*param_2;
  if (param_2[3] == _Size) {
    FUN_1002c1e0(param_1,(int)_Src_00,_Size,*local_20,param_3,cVar1);
  }
  else {
    uVar13 = FUN_100913c0((int)_Src_00,_Size,*local_20,param_2[3]);
    uVar9 = (uint)(uVar13 >> 0x20);
    if ((uVar13 & 1) == 0) {
      if (cVar1 == '\0') {
        if (_Size == 0) {
          SVar11 = 0xffffffff;
          pvVar6 = (void *)0x0;
        }
        else {
          SVar11 = _Size - 1;
          pvVar6 = (void *)0x0;
          if (*(char *)((int)_Src_00 + (_Size - 1)) == '\r') {
            pvVar6 = _Src_00;
          }
        }
        local_20 = *(uint **)(param_3 + 2);
        if (pvVar6 != (void *)0x0) {
          _Src_00 = pvVar6;
          _Size = SVar11;
        }
        uVar3 = *(undefined4 *)((int)param_3 + 0xc);
        if (_Size == 0) {
          pvVar8 = (LPVOID)0x1;
        }
        else {
          pvVar8 = FUN_10107380(0,_Size);
          if (pvVar8 == (LPVOID)0x0) {
            FUN_101366bc(1);
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          memcpy(pvVar8,_Src_00,_Size);
        }
        local_40 = *param_3;
        uVar9 = *(uint *)(param_3 + 1);
        if (uVar9 == (uint)local_40) {
          local_38 = uVar9;
          FUN_10135e90((uint *)&local_40);
        }
        *(uint *)(local_40._4_4_ + uVar9 * 0xc) = _Size;
        *(LPVOID *)(local_40._4_4_ + 4 + uVar9 * 0xc) = pvVar8;
        *(uint *)(local_40._4_4_ + 8 + uVar9 * 0xc) = _Size;
        *(uint *)(param_1 + 1) = uVar9 + 1;
        *param_1 = local_40;
        *(undefined4 *)((int)param_1 + 0xc) = uVar3;
        *(uint **)(param_1 + 2) = local_20;
        return;
      }
      local_30 = *(undefined4 *)(param_3 + 2);
      local_40 = *param_3;
      local_38 = (uint)param_3[1];
      uStack_34 = (undefined4)((ulonglong)param_3[1] >> 0x20);
    }
    else {
      if (uVar9 != 0) {
        if (uVar9 < _Size) {
          if (*(char *)((int)_Src_00 + uVar9) < -0x40) {
LAB_1002c7a5:
            FUN_10136b90((int)_Src_00,_Size,0,uVar9,&PTR_s_C__Users_runneradmin__rustup_too_1013f7c0
                        );
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
        }
        else if (uVar9 != _Size) goto LAB_1002c7a5;
      }
      _Src = (byte *)((int)_Src_00 + uVar9);
      if (uVar9 != _Size) {
        bVar2 = *_Src;
        if ((char)bVar2 < '\0') {
          if (bVar2 < 0xe0) {
            _Src = _Src + 2;
          }
          else {
            _Src = _Src + (4 - (uint)(bVar2 < 0xf0));
          }
        }
        else {
          _Src = _Src + 1;
        }
      }
      FUN_1002c1e0(&local_40,(int)_Src_00,uVar9,*local_20,param_3,'\0');
      if (cVar1 == '\0') {
        SVar11 = (int)_Src_00 + (_Size - (int)_Src);
        if (SVar11 == 0) {
          SVar10 = 0xffffffff;
          pbVar7 = (byte *)0x0;
        }
        else {
          SVar10 = SVar11 - 1;
          pbVar7 = (byte *)0x0;
          if (_Src[SVar11 - 1] == 0xd) {
            pbVar7 = _Src;
          }
        }
        uStack_18 = 0;
        uStack_14 = 0;
        if (pbVar7 != (byte *)0x0) {
          _Src = pbVar7;
          SVar11 = SVar10;
        }
        if (SVar11 == 0) {
          pvVar8 = (LPVOID)0x1;
          local_20 = (uint *)uStack_34;
          uStack_1c = local_30;
        }
        else {
          local_20 = (uint *)uStack_34;
          uStack_1c = local_30;
          uStack_18 = 0;
          uStack_14 = 0;
          pvVar8 = FUN_10107380(0,SVar11);
          if (pvVar8 == (LPVOID)0x0) {
            FUN_101366bc(1);
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          memcpy(pvVar8,_Src,SVar11);
        }
        local_2c = local_40;
        uVar5 = local_2c;
        local_24 = local_38;
        local_2c._0_4_ = (uint)local_40;
        bVar12 = local_38 == (uint)local_2c;
        local_2c = uVar5;
        if (bVar12) {
          FUN_10135e90((uint *)&local_2c);
        }
        *(SIZE_T *)(local_2c._4_4_ + local_38 * 0xc) = SVar11;
        *(LPVOID *)(local_2c._4_4_ + 4 + local_38 * 0xc) = pvVar8;
        *(SIZE_T *)(local_2c._4_4_ + 8 + local_38 * 0xc) = SVar11;
        *(uint *)(param_1 + 1) = local_38 + 1;
        *param_1 = local_2c;
        *(ulonglong *)((int)param_1 + 0xc) = CONCAT44(uStack_1c,local_20);
        return;
      }
    }
    *(undefined4 *)(param_1 + 2) = local_30;
    param_1[1] = CONCAT44(uStack_34,local_38);
    *param_1 = local_40;
  }
  return;
}
