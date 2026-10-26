// rea decompile_all
// name: FUN_004baaac
// address: 0x4baaac
// body: available
// range: 0x4baaac-0x4bac2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004baaac(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;

  if ((*(char *)(param_1 + 0x178) == '\0') && ((*(byte *)(param_1 + 0x1c) & 1) == 0)) {
    bVar1 = *(byte *)(param_1 + 99);
    iVar3 = (**(code **)(**(int **)(param_1 + 0x74) + 0x10))(*(int **)(param_1 + 0x74),0);
    uVar4 = (**(code **)(**(int **)(param_1 + 0x74) + 0x10))(*(int **)(param_1 + 0x74),2);
    iVar5 = (int)uVar4 >> 1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
    }
    iVar6 = (**(code **)(**(int **)(param_1 + 0x74) + 0x10))(*(int **)(param_1 + 0x74),1);
    uVar4 = (**(code **)(**(int **)(param_1 + 0x74) + 0x10))(*(int **)(param_1 + 0x74),3);
    iVar7 = (int)uVar4 >> 1;
    if (iVar7 < 0) {
      iVar7 = iVar7 + (uint)((uVar4 & 1) != 0);
    }
    *(int *)(param_1 + 0x184) = iVar3 + iVar5;
    *(int *)(param_1 + 0x188) = iVar6 + iVar7;
    if (bVar1 == 3) {
      *(undefined4 *)(param_1 + 0x18c) = 0;
      *(undefined4 *)(param_1 + 400) = 0;
    }
    else {
      if ((bVar1 & 4) == 0) {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x74) + 0x10))(*(int **)(param_1 + 0x74),0);
        uVar4 = (**(code **)(**(int **)(param_1 + 0x74) + 0x10))(*(int **)(param_1 + 0x74),2);
        iVar5 = (int)uVar4 >> 1;
        if (iVar5 < 0) {
          iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
        }
        *(int *)(param_1 + 0x17c) = iVar3 + iVar5;
      }
      else if ((bVar1 & 1) == 0) {
        uVar8 = (**(code **)(**(int **)(param_1 + 0x74) + 0x10))(*(int **)(param_1 + 0x74),0);
        *(undefined4 *)(param_1 + 0x17c) = uVar8;
      }
      else {
        uVar8 = (**(code **)(**(int **)(param_1 + 0x74) + 0x10))(*(int **)(param_1 + 0x74),2);
        *(undefined4 *)(param_1 + 0x17c) = uVar8;
      }
      if ((bVar1 & 8) == 0) {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x74) + 0x10))(*(int **)(param_1 + 0x74),1);
        uVar4 = (**(code **)(**(int **)(param_1 + 0x74) + 0x10))(*(int **)(param_1 + 0x74),3);
        iVar5 = (int)uVar4 >> 1;
        if (iVar5 < 0) {
          iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
        }
        *(int *)(param_1 + 0x180) = iVar3 + iVar5;
      }
      else if ((bVar1 & 2) == 0) {
        uVar8 = (**(code **)(**(int **)(param_1 + 0x74) + 0x10))(*(int **)(param_1 + 0x74),1);
        *(undefined4 *)(param_1 + 0x180) = uVar8;
      }
      else {
        uVar8 = (**(code **)(**(int **)(param_1 + 0x74) + 0x10))(*(int **)(param_1 + 0x74),3);
        *(undefined4 *)(param_1 + 0x180) = uVar8;
      }
      piVar2 = *(int **)(param_1 + 0x34);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xe4))(piVar2,param_1,param_1 + 0x18c);
      }
    }
  }
  return;
}
