// rea decompile_all
// name: FUN_005bfd00
// address: 0x5bfd00
// body: available
// range: 0x5bfd00-0x5bfe92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005bfd00(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_14;

  iVar1 = *(int *)(param_1 + 4);
  local_14 = 0;
  iVar4 = 0;
  for (piVar2 = *(int **)(iVar1 + 0x40); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xb]) {
    if (*piVar2 == 0) {
      iVar4 = piVar2[3] * piVar2[2] + iVar4;
      local_14 = piVar2[1] * piVar2[2] + local_14;
    }
  }
  for (piVar2 = *(int **)(iVar1 + 0x44); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xb]) {
    if (*piVar2 == 0) {
      iVar4 = piVar2[3] * piVar2[2] * 0x80 + iVar4;
      local_14 = piVar2[1] * piVar2[2] * 0x80 + local_14;
    }
  }
  if (0 < iVar4) {
    iVar3 = FUN_005c04d0(param_1,iVar4,local_14,*(undefined4 *)(iVar1 + 0x48));
    if (iVar3 < local_14) {
      iVar3 = iVar3 / iVar4;
      if (iVar3 < 1) {
        iVar3 = 1;
      }
    }
    else {
      iVar3 = 1000000000;
    }
    for (piVar2 = *(int **)(iVar1 + 0x40); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xb]) {
      if (*piVar2 == 0) {
        if (iVar3 < (int)((piVar2[1] - 1U) / (uint)piVar2[3] + 1)) {
          piVar2[4] = iVar3 * piVar2[3];
          FUN_005c04dc(param_1,piVar2 + 0xc,piVar2[1] * piVar2[2]);
          piVar2[10] = 1;
        }
        else {
          piVar2[4] = piVar2[1];
        }
        iVar4 = FUN_005bfa78(param_1,1,piVar2[2],piVar2[4]);
        *piVar2 = iVar4;
        piVar2[5] = *(int *)(iVar1 + 0x4c);
        piVar2[6] = 0;
        piVar2[7] = 0;
        piVar2[9] = 0;
      }
    }
    for (piVar2 = *(int **)(iVar1 + 0x44); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xb]) {
      if (*piVar2 == 0) {
        if (iVar3 < (int)((piVar2[1] - 1U) / (uint)piVar2[3] + 1)) {
          piVar2[4] = iVar3 * piVar2[3];
          FUN_005c04dc(param_1,piVar2 + 0xc,piVar2[1] * piVar2[2] * 0x80);
          piVar2[10] = 1;
        }
        else {
          piVar2[4] = piVar2[1];
        }
        iVar4 = FUN_005bfb4c(param_1,1,piVar2[2],piVar2[4]);
        *piVar2 = iVar4;
        piVar2[5] = *(int *)(iVar1 + 0x4c);
        piVar2[6] = 0;
        piVar2[7] = 0;
        piVar2[9] = 0;
      }
    }
  }
  return;
}
