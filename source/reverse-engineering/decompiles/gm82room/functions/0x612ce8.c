// rea decompile_all
// name: FUN_00612ce8
// address: 0x612ce8
// body: available
// range: 0x612ce8-0x612f55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00612ce8(int *param_1,int *param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  while( true ) {
    FUN_00407498(param_1);
    iVar2 = FUN_00408514();
    if ((iVar2 < *param_2) || (0x20 < *(ushort *)(*param_1 + -2 + *param_2 * 2))) break;
    *param_2 = *param_2 + 1;
  }
  iVar2 = *param_1;
  if ((iVar2 != 0) && (*(short *)(iVar2 + -10) != 2)) {
    iVar2 = FUN_00407488(param_1,*param_1);
  }
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
  }
  if (iVar3 < *param_2) {
    FUN_00611a0c(0xfffffffe,0,*param_2,param_3);
  }
  else {
    iVar2 = *param_1;
    if ((iVar2 != 0) && (*(short *)(iVar2 + -10) != 2)) {
      iVar2 = FUN_00407488(param_1,*param_1);
    }
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + -4);
    }
    if (*param_2 < iVar3) {
      bVar4 = *(short *)(*param_1 + -2 + *param_2 * 2) == 0x2f;
    }
    else {
      bVar4 = false;
    }
    if ((bVar4) && (*(short *)(*param_1 + *param_2 * 2) == 0x2f)) {
      while( true ) {
        FUN_00407498(param_1);
        iVar2 = FUN_00408514();
        if (((iVar2 < *param_2) || (*(short *)(*param_1 + -2 + *param_2 * 2) == 0xd)) ||
           (*(short *)(*param_1 + -2 + *param_2 * 2) == 10)) break;
        *param_2 = *param_2 + 1;
      }
      *param_2 = *param_2 + 1;
      FUN_00612ce8(param_1,param_2,param_3);
    }
    else {
      iVar2 = *param_1;
      if ((iVar2 != 0) && (*(short *)(iVar2 + -10) != 2)) {
        iVar2 = FUN_00407488(param_1,*param_1);
      }
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + -4);
      }
      if (*param_2 < iVar3) {
        bVar4 = *(short *)(*param_1 + -2 + *param_2 * 2) == 0x2f;
      }
      else {
        bVar4 = false;
      }
      if ((bVar4) && (*(short *)(*param_1 + *param_2 * 2) == 0x2a)) {
        while( true ) {
          FUN_00407498(param_1);
          iVar2 = FUN_00408514();
          if ((iVar2 <= *param_2) ||
             ((*(short *)(*param_1 + -2 + *param_2 * 2) == 0x2a &&
              (*(short *)(*param_1 + *param_2 * 2) == 0x2f)))) break;
          *param_2 = *param_2 + 1;
        }
        *param_2 = *param_2 + 2;
        FUN_00612ce8(param_1,param_2,param_3);
      }
      else if (((*(short *)(*param_1 + -2 + *param_2 * 2) == 0x5f) ||
               ((uVar1 = *(ushort *)(*param_1 + -2 + *param_2 * 2), 0x60 < uVar1 && (uVar1 < 0x7b)))
               ) || ((uVar1 = *(ushort *)(*param_1 + -2 + *param_2 * 2), 0x40 < uVar1 &&
                     (uVar1 < 0x5b)))) {
        FUN_00611cc8(param_1,param_2,param_3);
      }
      else {
        uVar1 = *(ushort *)(*param_1 + -2 + *param_2 * 2);
        if ((uVar1 < 0x30) || (0x39 < uVar1)) {
          if (*(short *)(*param_1 + -2 + *param_2 * 2) == 0x24) {
            FUN_00611a94(param_1,param_2,param_3);
          }
          else {
            iVar2 = *param_1;
            if ((iVar2 != 0) && (*(short *)(iVar2 + -10) != 2)) {
              iVar2 = FUN_00407488(param_1,*param_1);
            }
            iVar3 = 0;
            if (iVar2 != 0) {
              iVar3 = *(int *)(iVar2 + -4);
            }
            if (*param_2 < iVar3) {
              bVar4 = *(short *)(*param_1 + -2 + *param_2 * 2) == 0x2e;
            }
            else {
              bVar4 = false;
            }
            if (bVar4) {
              bVar4 = 0x2f < *(ushort *)(*param_1 + *param_2 * 2);
            }
            else {
              bVar4 = false;
            }
            if ((bVar4) && (*(ushort *)(*param_1 + *param_2 * 2) < 0x3a)) {
              FUN_00611a94(param_1,param_2,param_3);
            }
            else {
              FUN_00612c80(param_1,param_2,param_3);
            }
          }
        }
        else {
          FUN_00611a94(param_1,param_2,param_3);
        }
      }
    }
  }
  return;
}
