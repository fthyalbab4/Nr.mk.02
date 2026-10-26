// rea decompile_all
// name: FUN_005c6610
// address: 0x5c6610
// body: available
// range: 0x5c6610-0x5c671f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005c6610(int param_1)

{
  short *psVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_14;
  int local_10;

  iVar6 = *(int *)(param_1 + 0x19e);
  local_14 = 0;
  if ((*(int *)(param_1 + 0xd8) == 0) || (*(int *)(param_1 + 0x9c) == 0)) {
    local_14 = 0;
  }
  else {
    if (*(int *)(iVar6 + 0x70) == 0) {
      uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x20) * 0x18);
      *(undefined4 *)(iVar6 + 0x70) = uVar2;
    }
    piVar7 = *(int **)(iVar6 + 0x70);
    local_10 = *(int *)(param_1 + 0xd4);
    for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0x20); iVar6 = iVar6 + 1) {
      psVar1 = *(short **)(local_10 + 0x4c);
      if (psVar1 == (short *)0x0) {
        return 0;
      }
      if ((((*psVar1 == 0) || (psVar1[1] == 0)) || (psVar1[8] == 0)) ||
         (((psVar1[0x10] == 0 || (psVar1[9] == 0)) || (psVar1[2] == 0)))) {
        return 0;
      }
      piVar3 = (int *)(*(int *)(param_1 + 0x9c) + iVar6 * 0x100);
      if (*piVar3 < 0) {
        return 0;
      }
      iVar4 = 1;
      piVar5 = piVar7;
      do {
        piVar5 = piVar5 + 1;
        piVar3 = piVar3 + 1;
        *piVar5 = *piVar3;
        if (*piVar3 != 0) {
          local_14 = 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 6);
      piVar7 = piVar7 + 6;
      local_10 = local_10 + 0x54;
    }
  }
  return local_14;
}
