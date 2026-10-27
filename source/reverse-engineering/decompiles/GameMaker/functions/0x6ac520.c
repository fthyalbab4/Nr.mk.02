// rea decompile_all
// name: FUN_006ac520
// address: 0x6ac520
// body: available
// range: 0x6ac520-0x6ac7df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ac520(int *param_1,int *param_2,int *param_3)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  bool bVar5;

  while( true ) {
    FUN_00407058(param_1);
    iVar3 = FUN_00408238();
    if ((iVar3 < *param_2) || (0x20 < *(ushort *)(*param_1 + -2 + *param_2 * 2))) break;
    *param_2 = *param_2 + 1;
  }
  iVar3 = *param_1;
  if ((iVar3 != 0) && (*(short *)(iVar3 + -10) != 2)) {
    iVar3 = FUN_00407048(param_1,*param_1);
  }
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + -4);
  }
  if (iVar4 < *param_2) {
    FUN_006ab2d8(0xfffffffe,0,*param_2,param_3);
  }
  else {
    iVar3 = *param_1;
    if ((iVar3 != 0) && (*(short *)(iVar3 + -10) != 2)) {
      iVar3 = FUN_00407048(param_1,*param_1);
    }
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4);
    }
    if (*param_2 < iVar4) {
      bVar5 = *(short *)(*param_1 + -2 + *param_2 * 2) == 0x2f;
    }
    else {
      bVar5 = false;
    }
    if ((bVar5) && (*(short *)(*param_1 + *param_2 * 2) == 0x2f)) {
      while( true ) {
        FUN_00407058(param_1);
        iVar3 = FUN_00408238();
        if (((iVar3 < *param_2) || (*(short *)(*param_1 + -2 + *param_2 * 2) == 0xd)) ||
           (*(short *)(*param_1 + -2 + *param_2 * 2) == 10)) break;
        *param_2 = *param_2 + 1;
      }
      *param_2 = *param_2 + 1;
      FUN_006ac520(param_1,param_2,param_3);
    }
    else {
      iVar3 = *param_1;
      if ((iVar3 != 0) && (*(short *)(iVar3 + -10) != 2)) {
        iVar3 = FUN_00407048(param_1,*param_1);
      }
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + -4);
      }
      if (*param_2 < iVar4) {
        bVar5 = *(short *)(*param_1 + -2 + *param_2 * 2) == 0x2f;
      }
      else {
        bVar5 = false;
      }
      if ((bVar5) && (*(short *)(*param_1 + *param_2 * 2) == 0x2a)) {
        while( true ) {
          FUN_00407058(param_1);
          iVar3 = FUN_00408238();
          if ((iVar3 <= *param_2) ||
             ((*(short *)(*param_1 + -2 + *param_2 * 2) == 0x2a &&
              (*(short *)(*param_1 + *param_2 * 2) == 0x2f)))) break;
          *param_2 = *param_2 + 1;
        }
        *param_2 = *param_2 + 2;
        FUN_006ac520(param_1,param_2,param_3);
      }
      else if (((*(short *)(*param_1 + -2 + *param_2 * 2) == 0x5f) ||
               ((uVar1 = *(ushort *)(*param_1 + -2 + *param_2 * 2), 0x60 < uVar1 && (uVar1 < 0x7b)))
               ) || ((uVar1 = *(ushort *)(*param_1 + -2 + *param_2 * 2), 0x40 < uVar1 &&
                     (uVar1 < 0x5b)))) {
        FUN_006ab568(param_1,param_2,param_3);
      }
      else {
        uVar1 = *(ushort *)(*param_1 + -2 + *param_2 * 2);
        if ((uVar1 < 0x30) || (0x39 < uVar1)) {
          if (*(short *)(*param_1 + -2 + *param_2 * 2) == 0x24) {
            FUN_006ab334(param_1,param_2,param_3);
          }
          else {
            iVar3 = *param_1;
            if ((iVar3 != 0) && (*(short *)(iVar3 + -10) != 2)) {
              iVar3 = FUN_00407048(param_1,*param_1);
            }
            iVar4 = 0;
            if (iVar3 != 0) {
              iVar4 = *(int *)(iVar3 + -4);
            }
            if (*param_2 < iVar4) {
              bVar5 = *(short *)(*param_1 + -2 + *param_2 * 2) == 0x2e;
            }
            else {
              bVar5 = false;
            }
            if (bVar5) {
              bVar5 = 0x2f < *(ushort *)(*param_1 + *param_2 * 2);
            }
            else {
              bVar5 = false;
            }
            if ((bVar5) && (*(ushort *)(*param_1 + *param_2 * 2) < 0x3a)) {
              FUN_006ab334(param_1,param_2,param_3);
            }
            else {
              sVar2 = *(short *)(*param_1 + -2 + *param_2 * 2);
              if ((sVar2 == 0x27) || (sVar2 == 0x22)) {
                FUN_006ab484(param_1,param_2,param_3);
              }
              else {
                FUN_006abccc(param_1,param_2,param_3);
                if (*param_3 == -1) {
                  FUN_006ac19c(param_1,param_2,param_3);
                  if (*param_3 == -1) {
                    FUN_006ab2d8(0xffffffff,0,*param_2,param_3);
                    *param_2 = *param_2 + 1;
                  }
                  else {
                    *param_2 = *param_2 + 1;
                  }
                }
                else {
                  *param_2 = *param_2 + 2;
                }
              }
            }
          }
        }
        else {
          FUN_006ab334(param_1,param_2,param_3);
        }
      }
    }
  }
  return;
}
