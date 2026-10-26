// rea decompile_all
// name: FUN_00664840
// address: 0x664840
// body: available
// range: 0x664840-0x6649a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00664840(int *param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;

  bVar1 = *(byte *)((int)param_1 + 0x28f);
  if (bVar1 < 2) {
    sVar2 = *(short *)(param_2 + 4);
    if (sVar2 == 0x25) {
      FUN_00405d08(param_1,bVar1 != 0);
    }
    else {
      if (sVar2 != 0x26) {
        if (sVar2 == 0x27) {
          FUN_00405d08(param_1,bVar1 == 0);
          goto LAB_00664995;
        }
        if (sVar2 != 0x28) goto LAB_00664995;
      }
      iVar6 = FUN_006619bc(param_1);
      if (iVar6 != 0) {
        cVar3 = (**(code **)(*param_1 + 0x120))();
        if (cVar3 != '\0') {
          FUN_006619bc(param_1);
          cVar3 = FUN_00672334();
          if (cVar3 == '\0') {
            uVar4 = FUN_005136ac();
            if ((uVar4 & 4) == 0) {
              return;
            }
            FUN_006619bc(param_1);
            FUN_0067236c();
            FUN_00672bf8();
            FUN_0066f614(param_1);
          }
        }
        FUN_006619bc(param_1);
        cVar3 = FUN_00672334();
        if (cVar3 != '\0') {
          iVar6 = FUN_006619bc(param_1);
          piVar5 = (int *)(**(code **)(*param_1 + 0x18c))
                                    (param_1,param_1,*(undefined4 *)(iVar6 + 0x44));
          iVar6 = (**(code **)(*piVar5 + 0x164))();
          (**(code **)(**(int **)(iVar6 + 0x44) + 0xf4))(*(int **)(iVar6 + 0x44),1);
          *(undefined2 *)(param_2 + 4) = 0;
          return;
        }
      }
    }
  }
  else if ((byte)(bVar1 - 2) < 2) {
    if (*(short *)(param_2 + 4) == 0x25) {
      FUN_00405d08(param_1,1);
    }
    else if ((*(short *)(param_2 + 4) == 0x27) &&
            (iVar6 = FUN_006619bc(param_1,bVar1 - 4), iVar6 != 0)) {
      FUN_006619bc(param_1);
      cVar3 = FUN_00672334();
      if (cVar3 != '\0') {
        iVar6 = FUN_006619bc(param_1);
        (**(code **)(**(int **)(iVar6 + 0x44) + 0xfc))();
      }
    }
  }
LAB_00664995:
  FUN_00662818(param_1,param_2);
  return;
}
