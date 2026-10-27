// rea decompile_all
// name: FUN_0054ae60
// address: 0x54ae60
// body: available
// range: 0x54ae60-0x54b028 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054ae60(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;

  FUN_0043b5c8(*(undefined4 *)(param_1 + 0xc),&LAB_0054a7cc);
  if (*(char *)(param_1 + 0x314) == '\0') {
    iVar10 = 0x100;
  }
  else {
    iVar10 = 0xff;
  }
  local_18 = *(int *)(*(int *)(param_1 + 0xc) + 8);
  *(int *)(param_1 + 0x310) = local_18;
  if (-1 < local_18 + -1) {
    iVar9 = 0;
    do {
      if (iVar10 <= iVar9) {
LAB_0054aeb6:
        *(int *)(param_1 + 0x310) = iVar9;
        break;
      }
      piVar5 = (int *)FUN_0043b048(*(undefined4 *)(param_1 + 0xc),iVar9);
      if (*piVar5 == 0) goto LAB_0054aeb6;
      iVar9 = iVar9 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  local_18 = *(int *)(param_1 + 0x310);
  if (-1 < local_18 + -1) {
    iVar10 = 0;
    do {
      iVar9 = FUN_0043b048(*(undefined4 *)(param_1 + 0xc),iVar10);
      *(int *)(iVar9 + 8) = iVar10;
      iVar9 = FUN_0043b048(*(undefined4 *)(param_1 + 0xc),iVar10);
      *(undefined2 *)(param_1 + 0x10 + iVar10 * 3) = *(undefined2 *)(iVar9 + 0xc);
      *(undefined1 *)(param_1 + 0x12 + iVar10 * 3) = *(undefined1 *)(iVar9 + 0xe);
      iVar10 = iVar10 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  iVar10 = *(int *)(param_1 + 0x310);
  iVar9 = *(int *)(*(int *)(param_1 + 0xc) + 8) + -1;
  if (iVar10 <= iVar9) {
    local_18 = (iVar9 - iVar10) + 1;
    do {
      piVar5 = (int *)FUN_0043b048(*(undefined4 *)(param_1 + 0xc),iVar10);
      if (*piVar5 == 0) {
        piVar5[2] = *(int *)(piVar5[3] + 8);
      }
      else {
        local_1c = 0;
        local_20 = 0x2fd;
        local_14 = *(int *)(param_1 + 0x310);
        if (-1 < local_14 + -1) {
          iVar9 = 0;
          do {
            iVar6 = FUN_0043b048(*(undefined4 *)(param_1 + 0xc),iVar9);
            bVar1 = *(byte *)(iVar6 + 0xc);
            bVar2 = *(byte *)(piVar5 + 3);
            iVar6 = FUN_0043b048(*(undefined4 *)(param_1 + 0xc),iVar9);
            bVar3 = *(byte *)(iVar6 + 0xd);
            bVar4 = *(byte *)((int)piVar5 + 0xd);
            iVar6 = FUN_0043b048(*(undefined4 *)(param_1 + 0xc),iVar9);
            uVar7 = ((uint)bVar1 - (uint)bVar2) + ((uint)bVar3 - (uint)bVar4) +
                    ((uint)*(byte *)(iVar6 + 0xe) - (uint)*(byte *)((int)piVar5 + 0xe));
            uVar8 = (int)uVar7 >> 0x1f;
            iVar6 = (uVar7 ^ uVar8) - uVar8;
            if (iVar6 < local_20) {
              local_20 = iVar6;
              local_1c = iVar9;
            }
            iVar9 = iVar9 + 1;
            local_14 = local_14 + -1;
          } while (local_14 != 0);
        }
        iVar9 = FUN_0043b048(*(undefined4 *)(param_1 + 0xc),local_1c);
        piVar5[2] = *(int *)(iVar9 + 8);
      }
      iVar10 = iVar10 + 1;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  if (*(char *)(param_1 + 0x314) != '\0') {
    *(undefined1 *)(param_1 + 0x315) = *(undefined1 *)(param_1 + 0x310);
    *(undefined1 *)(param_1 + 0x10 + *(int *)(param_1 + 0x310) * 3) = 0;
    *(undefined1 *)(param_1 + 0x11 + *(int *)(param_1 + 0x310) * 3) = 0;
    *(undefined1 *)(param_1 + 0x12 + *(int *)(param_1 + 0x310) * 3) = 0;
    *(int *)(param_1 + 0x310) = *(int *)(param_1 + 0x310) + 1;
  }
  return;
}
