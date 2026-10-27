// rea decompile_all
// name: FUN_00639d88
// address: 0x639d88
// body: available
// range: 0x639d88-0x639f20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00639d88(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  if (*(int *)(param_1 + 0xcc) == 0) {
    FUN_005b33a8(*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4));
    iVar4 = *(int *)(*(int *)(param_1 + 0xd0) + 4);
    if (-1 < iVar4 + -1) {
      iVar3 = 0;
      do {
        cVar1 = (**(code **)(**(int **)(param_1 + 0x10c) + 0xec))();
        if (cVar1 != '\0') {
          FUN_005b2ef4(*(undefined4 *)(param_1 + 0xd0),iVar3);
          FUN_005b08d0();
        }
        cVar1 = (**(code **)(**(int **)(param_1 + 0x104) + 0xec))();
        if (cVar1 != '\0') {
          uVar2 = FUN_005b2ef4(*(undefined4 *)(param_1 + 0xd0),iVar3);
          FUN_005b0b70(uVar2,0);
        }
        cVar1 = (**(code **)(**(int **)(param_1 + 0x108) + 0xec))();
        if (cVar1 != '\0') {
          FUN_005b2ef4(*(undefined4 *)(param_1 + 0xd0),iVar3);
          FUN_005b0b94();
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  if (*(int *)(param_1 + 0xcc) == 1) {
    FUN_0062dc1c(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc));
    cVar1 = (**(code **)(**(int **)(param_1 + 0x10c) + 0xec))();
    if (cVar1 != '\0') {
      FUN_005b08d0(*(undefined4 *)(*(int *)(param_1 + 0xd8) + 4));
    }
    cVar1 = (**(code **)(**(int **)(param_1 + 0x104) + 0xec))();
    if (cVar1 != '\0') {
      FUN_005b0b70(*(undefined4 *)(*(int *)(param_1 + 0xd8) + 4),0);
    }
    cVar1 = (**(code **)(**(int **)(param_1 + 0x108) + 0xec))();
    if (cVar1 != '\0') {
      FUN_005b0b94(*(undefined4 *)(*(int *)(param_1 + 0xd8) + 4));
    }
  }
  if (*(int *)(param_1 + 0xcc) == 2) {
    FUN_007022dc(*(undefined4 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe4));
    cVar1 = (**(code **)(**(int **)(param_1 + 0x10c) + 0xec))();
    if (cVar1 != '\0') {
      FUN_005b08d0(*(undefined4 *)(param_1 + 0xe0));
    }
    cVar1 = (**(code **)(**(int **)(param_1 + 0x104) + 0xec))();
    if (cVar1 != '\0') {
      FUN_005b0b70(*(undefined4 *)(param_1 + 0xe0),0);
    }
    cVar1 = (**(code **)(**(int **)(param_1 + 0x108) + 0xec))();
    if (cVar1 != '\0') {
      FUN_005b0b94(*(undefined4 *)(param_1 + 0xe0));
    }
  }
  return;
}
