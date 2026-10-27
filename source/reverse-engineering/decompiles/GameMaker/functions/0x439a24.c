// rea decompile_all
// name: FUN_00439a24
// address: 0x439a24
// body: available
// range: 0x439a24-0x439b62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00439a24(int param_1,LPCVOID param_2)

{
  bool bVar1;
  bool bVar2;
  HANDLE hProcess;
  SIZE_T SVar3;
  LPCVOID pvVar4;
  int iVar5;
  LPCVOID lpAddress;
  _MEMORY_BASIC_INFORMATION local_2c;

  if (param_2 == (LPCVOID)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 8))();
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x44))();
    }
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 8) + 0x44))();
    }
  }
  else {
    hProcess = GetCurrentProcess();
    lpAddress = param_2;
    while ((SVar3 = VirtualQueryEx(hProcess,lpAddress,&local_2c,0x1c), SVar3 == 0x1c &&
           (param_2 == local_2c.AllocationBase))) {
      lpAddress = (LPCVOID)((int)lpAddress + local_2c.RegionSize);
    }
    bVar2 = false;
    iVar5 = *(int *)(*(int *)(param_1 + 0xc) + 8) + -1;
    if (-1 < iVar5) {
      do {
        pvVar4 = (LPCVOID)FUN_0043b048(*(undefined4 *)(param_1 + 0xc),iVar5);
        if ((pvVar4 < param_2) || (lpAddress <= pvVar4)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_0043b1f4(*(undefined4 *)(param_1 + 0xc),iVar5,0);
          bVar2 = true;
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != -1);
    }
    if (bVar2) {
      FUN_0043b278(*(undefined4 *)(param_1 + 0xc));
    }
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      iVar5 = (**(code **)(**(int **)(param_1 + 4) + 0x14))();
      iVar5 = iVar5 + -1;
      if (-1 < iVar5) {
        do {
          pvVar4 = (LPCVOID)(**(code **)(**(int **)(param_1 + 4) + 0x18))
                                      (*(int **)(param_1 + 4),iVar5);
          if ((pvVar4 < param_2) || (lpAddress <= pvVar4)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            (**(code **)(**(int **)(param_1 + 4) + 0x48))(*(int **)(param_1 + 4),iVar5);
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != -1);
      }
    }
    if (*(int **)(param_1 + 8) != (int *)0x0) {
      iVar5 = (**(code **)(**(int **)(param_1 + 8) + 0x14))();
      iVar5 = iVar5 + -1;
      if (-1 < iVar5) {
        do {
          pvVar4 = (LPCVOID)(**(code **)(**(int **)(param_1 + 8) + 0x18))
                                      (*(int **)(param_1 + 8),iVar5);
          if ((pvVar4 < param_2) || (lpAddress <= pvVar4)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            (**(code **)(**(int **)(param_1 + 8) + 0x48))(*(int **)(param_1 + 8),iVar5);
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != -1);
      }
    }
  }
  return;
}
