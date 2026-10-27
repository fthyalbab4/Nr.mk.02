// rea decompile_all
// name: FUN_005059ec
// address: 0x5059ec
// body: available
// range: 0x5059ec-0x505c6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005059ec(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;

  if ((((param_1 == (int *)0x0) || (param_1[7] == 0)) || (4 < param_2)) || (param_2 < 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    puVar1 = (undefined4 *)param_1[7];
    if (((param_1[3] == 0) || ((*param_1 == 0 && (param_1[1] != 0)))) ||
       ((puVar1[1] == 0x29a && (param_2 != 4)))) {
      param_1[6] = (int)PTR_PTR_00681e0c;
      uVar2 = 0xfffffffe;
    }
    else if (param_1[4] == 0) {
      uVar2 = 0xfffffffb;
      param_1[6] = (int)PTR_PTR_00681e18;
    }
    else {
      *puVar1 = param_1;
      iVar4 = puVar1[8];
      puVar1[8] = param_2;
      if (puVar1[1] == 0x2a) {
        uVar3 = puVar1[0x1f] + -1 >> 1;
        if (3 < uVar3) {
          uVar3 = 3;
        }
        uVar3 = ((puVar1[10] + -8) * 0x10 + 8) * 0x100 | uVar3 << 6;
        if (puVar1[0x19] != 0) {
          uVar3 = uVar3 | 0x20;
        }
        iVar5 = uVar3 + (0x1f - uVar3 % 0x1f);
        puVar1[1] = 0x71;
        FUN_00505970(puVar1,iVar5,iVar5,param_3);
        if (puVar1[0x19] != 0) {
          FUN_00505970(puVar1,(uint)param_1[0xc] >> 0x10);
          FUN_00505970(puVar1,param_1[0xc] & 0xffff);
        }
        param_1[0xc] = 1;
      }
      if (puVar1[5] == 0) {
        if (((param_1[1] == 0) && (param_2 <= iVar4)) && (param_2 != 4)) {
          param_1[6] = (int)PTR_PTR_00681e18;
          return 0xfffffffb;
        }
      }
      else {
        FUN_00505998(param_1);
        if (param_1[4] == 0) {
          puVar1[8] = 0xffffffff;
          return 0;
        }
      }
      if ((puVar1[1] == 0x29a) && (param_1[1] != 0)) {
        uVar2 = 0xfffffffb;
        param_1[6] = (int)PTR_PTR_00681e18;
      }
      else {
        if (((param_1[1] != 0) || (puVar1[0x1b] != 0)) || ((param_2 != 0 && (puVar1[1] != 0x29a))))
        {
          iVar4 = (*(code *)(&PTR_FUN_00681e68)[puVar1[0x1f] * 3])(puVar1,param_2);
          if ((iVar4 == 2) || (iVar4 == 3)) {
            puVar1[1] = 0x29a;
          }
          if ((iVar4 == 0) || (iVar4 == 2)) {
            if (param_1[4] == 0) {
              puVar1[8] = 0xffffffff;
            }
            return 0;
          }
          if (iVar4 == 1) {
            if (param_2 == 1) {
              FUN_0050a6d8(puVar1);
            }
            else {
              FUN_0050a61c(puVar1,0,0,0);
              if (param_2 == 3) {
                *(undefined2 *)(puVar1[0xf] + -2 + puVar1[0x11] * 2) = 0;
                FUN_0050524c();
              }
            }
            FUN_00505998(param_1);
            if (param_1[4] == 0) {
              puVar1[8] = 0xffffffff;
              return 0;
            }
          }
        }
        if (param_2 == 4) {
          if (puVar1[6] == 0) {
            FUN_00505970(puVar1,(uint)param_1[0xc] >> 0x10);
            FUN_00505970(puVar1,param_1[0xc] & 0xffff);
            FUN_00505998(param_1);
            puVar1[6] = 0xffffffff;
            if (puVar1[5] == 0) {
              uVar2 = 1;
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}
