// rea decompile_all
// name: FUN_0046b528
// address: 0x46b528
// body: available
// range: 0x46b528-0x46b726 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046b528(int param_1,int *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined2 *puVar8;
  short *psVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int local_24;
  int local_20;
  int local_18;

  iVar3 = param_2[1];
  iVar4 = *param_2;
  piVar7 = (int *)param_2[2];
  iVar12 = *piVar7;
  iVar5 = piVar7[1];
  iVar6 = piVar7[2];
  uVar13 = piVar7[4];
  local_18 = 0;
  iVar10 = 0;
  puVar8 = (undefined2 *)(param_1 + 0xb3c);
  do {
    *puVar8 = 0;
    iVar10 = iVar10 + 1;
    puVar8 = puVar8 + 1;
  } while (iVar10 < 0x10);
  *(undefined2 *)(iVar4 + 2 + *(int *)(param_1 + 0xb5c + *(int *)(param_1 + 0x1454) * 4) * 4) = 0;
  local_24 = *(int *)(param_1 + 0x1454) + 1;
  piVar7 = (int *)(param_1 + 0xb5c + local_24 * 4);
  for (; local_24 < 0x23d; local_24 = local_24 + 1) {
    iVar10 = *piVar7;
    uVar11 = *(ushort *)(iVar4 + 2 + (uint)*(ushort *)(iVar4 + 2 + iVar10 * 4) * 4) + 1;
    if ((int)uVar13 < (int)uVar11) {
      local_18 = local_18 + 1;
      uVar11 = uVar13;
    }
    *(short *)(iVar4 + 2 + iVar10 * 4) = (short)uVar11;
    if (iVar10 <= iVar3) {
      psVar9 = (short *)(param_1 + 0xb3c + uVar11 * 2);
      *psVar9 = *psVar9 + 1;
      local_20 = 0;
      if (iVar6 <= iVar10) {
        local_20 = *(int *)(iVar5 + (iVar10 - iVar6) * 4);
      }
      uVar2 = *(ushort *)(iVar4 + iVar10 * 4);
      *(int *)(param_1 + 0x16a8) = *(int *)(param_1 + 0x16a8) + (uint)uVar2 * (uVar11 + local_20);
      if (iVar12 != 0) {
        *(int *)(param_1 + 0x16ac) =
             *(int *)(param_1 + 0x16ac) +
             ((uint)*(ushort *)(iVar12 + 2 + iVar10 * 4) + local_20) * (uint)uVar2;
      }
    }
    piVar7 = piVar7 + 1;
  }
  if (local_18 != 0) {
    do {
      iVar12 = uVar13 - 1;
      for (psVar9 = (short *)(param_1 + 0xb3c + iVar12 * 2); *psVar9 == 0; psVar9 = psVar9 + -1) {
        iVar12 = iVar12 + -1;
      }
      psVar9 = (short *)(param_1 + 0xb3c + iVar12 * 2);
      *psVar9 = *psVar9 + -1;
      psVar9 = (short *)(param_1 + 0xb3e + iVar12 * 2);
      *psVar9 = *psVar9 + 2;
      psVar9 = (short *)(param_1 + 0xb3c + uVar13 * 2);
      *psVar9 = *psVar9 + -1;
      local_18 = local_18 + -2;
    } while (0 < local_18);
    puVar1 = (ushort *)(param_1 + 0xb3c + uVar13 * 2);
    for (; uVar13 != 0; uVar13 = uVar13 - 1) {
      uVar11 = (uint)*puVar1;
      while (piVar7 = (int *)(param_1 + 0xb5c + local_24 * 4), uVar11 != 0) {
        while( true ) {
          local_24 = local_24 + -1;
          piVar7 = piVar7 + -1;
          iVar12 = *piVar7;
          if (iVar3 < iVar12) break;
          if (*(ushort *)(iVar4 + 2 + iVar12 * 4) != uVar13) {
            *(int *)(param_1 + 0x16a8) =
                 *(int *)(param_1 + 0x16a8) +
                 (uVar13 - *(ushort *)(iVar4 + 2 + iVar12 * 4)) *
                 (uint)*(ushort *)(iVar4 + iVar12 * 4);
            *(short *)(iVar4 + 2 + iVar12 * 4) = (short)uVar13;
          }
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_0046b715;
        }
      }
LAB_0046b715:
      puVar1 = puVar1 + -1;
    }
  }
  return;
}
