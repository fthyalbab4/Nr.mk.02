// rea decompile_all
// name: FUN_005f8b00
// address: 0x5f8b00
// body: available
// range: 0x5f8b00-0x5f8d5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f8b00(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,uint param_5,
                 int param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  if (param_4 == param_5) {
    FUN_0056b8b4(DAT_00688628,param_2,param_3,0,0,0,0);
  }
  else {
    iVar3 = (int)param_4 >> 1;
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = iVar3 + (uint)((param_4 & 1) != 0);
    }
    if (iVar4 < (int)param_5) {
      FUN_005f8744(param_1,param_2,param_3,(double)(int)(param_5 - iVar4) / (double)iVar4,param_6);
    }
    else {
      FUN_0056b8b4(DAT_00688624,param_2,param_3,0,0,0,0);
    }
    if (-1 < iVar4) {
      iVar4 = iVar4 + 1;
      iVar5 = 0;
      do {
        if (param_3 < 1) {
          if (param_3 < 0) {
            iVar2 = iVar3;
            if (iVar3 < 0) {
              iVar2 = iVar3 + (uint)((param_4 & 1) != 0);
            }
            bVar1 = (int)(iVar2 - param_5) <= iVar5;
          }
          else {
            bVar1 = false;
          }
        }
        else {
          bVar1 = iVar5 <= (int)param_5;
        }
        if (bVar1) {
          FUN_004048b8();
          FUN_004048b8();
          FUN_004048b8();
          FUN_0056ba20(DAT_00688628,0xffffff);
        }
        if (param_6 < 1) {
          if (param_6 < 0) {
            iVar2 = iVar3;
            if (iVar3 < 0) {
              iVar2 = iVar3 + (uint)((param_4 & 1) != 0);
            }
            bVar1 = (int)(iVar2 - param_5) <= iVar5;
          }
          else {
            bVar1 = false;
          }
        }
        else {
          bVar1 = iVar5 <= (int)param_5;
        }
        if (bVar1) {
          FUN_004048b8();
          FUN_004048b8();
          FUN_004048b8();
          FUN_0056ba20(DAT_00688628,0xffffff);
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}
