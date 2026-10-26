// rea decompile_all
// name: FUN_00619b18
// address: 0x619b18
// body: available
// range: 0x619b18-0x619cec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00619b18(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  undefined1 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  int extraout_EDX_04;
  uint uVar5;
  bool bVar6;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;

  FUN_00409ce0(param_3,&DAT_004108f8);
  local_14 = param_4;
  local_10 = param_5;
  uVar5 = 0;
  piVar2 = &DAT_0077ec74;
  do {
    if (3 < uVar5) {
      piVar2 = (int *)thunk_FUN_00404478();
    }
    param_1[uVar5 + 2] = *piVar2;
    uVar5 = uVar5 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar5 != 4);
  do {
    if (local_10 == 0) {
      if (local_14 < 0x40) goto LAB_00619ba3;
    }
    else if (local_10 < 0) {
LAB_00619ba3:
      uVar5 = FUN_005e3414(param_2,param_1 + 1);
      if ((int)uVar5 >> 0x1f != extraout_EDX_00) {
        uVar5 = thunk_FUN_00404478();
      }
      iVar4 = param_1[1];
      if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar5)) {
        uVar5 = thunk_FUN_00404478();
        iVar4 = extraout_EDX_01;
      }
      *(undefined1 *)(iVar4 + uVar5) = 0x80;
      uVar3 = uVar5 + 1;
      if (SCARRY4(uVar5,1)) {
        uVar3 = FUN_00405944();
      }
      if (0x38 < (int)uVar3) {
        if ((int)uVar3 < 0x40) {
          do {
            iVar4 = param_1[1];
            if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
              iVar4 = thunk_FUN_00404478();
            }
            *(undefined1 *)(iVar4 + uVar3) = 0;
            uVar3 = uVar3 + 1;
          } while (uVar3 != 0x40);
        }
        (**(code **)(*param_1 + 0xc))();
        uVar3 = 0;
      }
      bVar6 = SBORROW4(uVar3,0x37);
      if ((int)uVar3 < 0x38) {
        do {
          iVar4 = param_1[1];
          if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar3)) {
            iVar4 = thunk_FUN_00404478();
          }
          *(undefined1 *)(iVar4 + uVar3) = 0;
          uVar3 = uVar3 + 1;
          bVar6 = SBORROW4(uVar3,0x38);
        } while (uVar3 != 0x38);
      }
      local_1c = FUN_00409490(param_4,param_5);
      local_18 = extraout_EDX_02;
      if (bVar6) {
        local_1c = FUN_00405944();
        local_18 = extraout_EDX_03;
      }
      uVar5 = 0x38;
      do {
        uVar1 = (undefined1)local_1c;
        if (0xff < (local_1c & 0xff)) {
          uVar1 = thunk_FUN_00404478();
        }
        iVar4 = param_1[1];
        if ((iVar4 == 0) || (*(uint *)(iVar4 + -4) <= uVar5)) {
          uVar1 = thunk_FUN_00404478();
          iVar4 = extraout_EDX_04;
        }
        *(undefined1 *)(iVar4 + uVar5) = uVar1;
        local_1c = local_1c >> 8 | local_18 << 0x18;
        local_18 = local_18 >> 8;
        uVar5 = uVar5 + 1;
      } while (uVar5 != 0x40);
      (**(code **)(*param_1 + 0xc))();
      FUN_00409be0(param_3,&DAT_004108f8,1,0x10);
      uVar5 = 0;
      do {
        if (3 < uVar5) {
          thunk_FUN_00404478();
        }
        iVar4 = param_1[uVar5 + 2];
        if ((longlong)(int)((longlong)(int)uVar5 * 4) != (longlong)(int)uVar5 * 4) {
          iVar4 = FUN_00405944(iVar4);
        }
        FUN_005e0790(iVar4,param_3);
        uVar5 = uVar5 + 1;
      } while (uVar5 != 4);
      return;
    }
    uVar5 = FUN_005e3414(param_2,param_1 + 1);
    if ((int)uVar5 >> 0x1f != extraout_EDX) {
      uVar5 = thunk_FUN_00404478();
    }
    (**(code **)(*param_1 + 0xc))();
    bVar6 = local_14 < uVar5;
    local_14 = local_14 - uVar5;
    local_10 = (local_10 - ((int)uVar5 >> 0x1f)) - (uint)bVar6;
  } while( true );
}
