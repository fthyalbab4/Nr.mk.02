// rea decompile_all
// name: FUN_00676a58
// address: 0x676a58
// body: available
// range: 0x676a58-0x676caf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00676a58(int *param_1,char param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iStack_18;

  if ((param_2 != *(char *)((int)param_1 + 0x28d)) &&
     (*(char *)((int)param_1 + 0x28d) = param_2, (*(byte *)(param_1 + 7) & 0x10) == 0)) {
    if (((param_1[0x9e] != 0) && (iVar3 = FUN_006767e4(param_1), *(char *)(iVar3 + 0x24) == '\0'))
       || (*(char *)(param_1[0x9e] + 0x31) == '\0')) {
      if (*(char *)((int)param_1 + 0x28d) == '\0') {
        (**(code **)(*param_1 + 0x74))(param_1,*(undefined1 *)((int)param_1 + 0x28e));
      }
      else {
        uVar1 = (**(code **)(*param_1 + 0x5c))();
        *(undefined1 *)((int)param_1 + 0x28e) = uVar1;
        (**(code **)(*param_1 + 0x74))(param_1,0);
      }
    }
    cVar2 = (**(code **)(*param_1 + 0x120))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_1 + 0x120))();
      if ((cVar2 == '\0') || (cVar2 = FUN_00677458(param_1), cVar2 == '\0')) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      *(undefined1 *)(param_1 + 0xb9) = uVar1;
      param_1[0xb2] = param_1[0x12];
      param_1[0xb3] = param_1[0x13];
    }
    cVar2 = (**(code **)(*param_1 + 0x120))();
    if (((cVar2 == '\0') && ((char)param_1[0xb9] == '\0')) ||
       (iVar3 = (**(code **)(*param_1 + 0x130))(), iVar3 < 1)) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    (**(code **)(*param_1 + 0x144))(param_1,uVar7);
    cVar2 = (**(code **)(*param_1 + 0x120))();
    if (cVar2 == '\0') {
      if (*(byte *)((int)param_1 + 0x28f) < 2) {
        FUN_004edd14(param_1,param_1[0xb3]);
      }
      else if ((byte)(*(byte *)((int)param_1 + 0x28f) - 2) < 2) {
        FUN_004edce0(param_1,param_1[0xb2]);
      }
    }
    iVar3 = FUN_006767e4(param_1);
    iVar3 = *(int *)(*(int *)(iVar3 + 8) + 8);
    if (-1 < iVar3 + -1) {
      iStack_18 = 0;
      do {
        uVar7 = FUN_006767e4(param_1);
        iVar4 = FUN_00672cc0(uVar7,iStack_18);
        piVar6 = *(int **)(iVar4 + 0x44);
        if (piVar6 != (int *)0x0) {
          if (*(char *)((int)param_1 + 0x28d) == '\0') {
            (**(code **)(*piVar6 + 0x70))(piVar6,0);
            if (*(char *)(iVar4 + 0x30) == '\0') {
              FUN_004ee5c0(*(undefined4 *)(iVar4 + 0x44),0);
            }
            iVar5 = FUN_00673fd0(iVar4);
            if (iVar5 == 0) {
              (**(code **)(**(int **)(iVar4 + 0x44) + 0x74))(*(int **)(iVar4 + 0x44),1);
            }
            else {
              piVar6 = (int *)FUN_00673fd0(iVar4);
              (**(code **)(*piVar6 + 0x48))();
            }
            (**(code **)(**(int **)(iVar4 + 0x44) + 0xf4))(*(int **)(iVar4 + 0x44),0);
          }
          else {
            if (*(char *)((int)piVar6 + 0x59) == '\0') {
              FUN_004ee5c0(piVar6,1);
            }
            if ((*(char *)(iVar4 + 0x31) == '\0') || (*(char *)(param_1[0x9e] + 0x31) == '\0')) {
              uVar7 = 0;
            }
            else {
              uVar7 = 1;
            }
            (**(code **)(**(int **)(iVar4 + 0x44) + 0x74))(*(int **)(iVar4 + 0x44),uVar7);
            cVar2 = (**(code **)(*param_1 + 0x120))();
            if (((cVar2 == '\0') || ((*(byte *)(param_1[0x9e] + 0x31) & 2) == 0)) &&
               ((*(byte *)(param_1[0x9e] + 0x31) & 4) == 0)) {
              iVar5 = 0;
            }
            else {
              iVar5 = 1;
            }
            (**(code **)(**(int **)(iVar4 + 0x44) + 0x70))
                      (*(int **)(iVar4 + 0x44),(&DAT_0077f384)[iVar5]);
          }
        }
        iStack_18 = iStack_18 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}
