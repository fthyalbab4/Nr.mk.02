// rea decompile_all
// name: FUN_005541d0
// address: 0x5541d0
// body: available
// range: 0x5541d0-0x55433d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005541d0(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iStack_20;
  int iStack_1c;
  int *local_18;
  char *pcStack_14;

  if (*(int *)(param_1 + 0x58) == 1) {
    local_18 = (int *)0x1fe;
    *(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0x1c) = 1;
  }
  else {
    local_18 = (int *)0x0;
    *(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0x1c) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x78);
  uVar4 = (**(code **)(*(int *)(param_1 + 4) + 8))(param_1,1,(int)local_18 + 0x100);
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  iStack_20 = *(int *)(param_1 + 0x14);
  local_18 = (int *)(param_1 + 0x20);
  for (iVar10 = 0; iVar10 < *(int *)(iVar2 + 0x78); iVar10 = iVar10 + 1) {
    iVar8 = *local_18;
    iStack_20 = iStack_20 / iVar8;
    if (iStack_1c != 0) {
      piVar1 = (int *)(*(int *)(param_1 + 0x18) + iVar10 * 4);
      *piVar1 = *piVar1 + 0xff;
    }
    iVar9 = 0;
    pcVar3 = *(char **)(*(int *)(param_1 + 0x18) + iVar10 * 4);
    iVar5 = FUN_00553ff8(iVar2,iVar10,0,iVar8 + -1);
    iVar7 = 0;
    pcStack_14 = pcVar3;
    do {
      while (iVar5 < iVar7) {
        iVar9 = iVar9 + 1;
        iVar5 = FUN_00553ff8(iVar2,iVar10,iVar9,iVar8 + -1);
      }
      *pcStack_14 = (char)iVar9 * (char)iStack_20;
      iVar7 = iVar7 + 1;
      pcStack_14 = pcStack_14 + 1;
    } while (iVar7 < 0x100);
    if (iStack_1c != 0) {
      iVar8 = 1;
      pcVar6 = pcVar3 + 0x100;
      do {
        iVar5 = -iVar8;
        iVar8 = iVar8 + 1;
        pcVar3[iVar5] = *pcVar3;
        *pcVar6 = pcVar3[0xff];
        pcVar6 = pcVar6 + 1;
      } while (iVar8 < 0x100);
    }
    local_18 = local_18 + 1;
  }
  return;
}
