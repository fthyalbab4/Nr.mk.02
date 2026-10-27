// rea decompile_all
// name: FUN_100be480
// address: 0x100be480
// body: available
// range: 0x100be480-0x100be601 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __fastcall FUN_100be480(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  int local_1c;
  int local_18;
  int *local_14;

  iVar3 = *(int *)(param_1 + 0x90);
  iVar2 = *(int *)(iVar3 + 0x84);
  iVar4 = iVar2 - *(int *)(iVar3 + 0x80);
  if (0 < iVar4) {
    if (*(char *)(param_1 + 0x9c) == '\x01') {
      *(int *)(iVar3 + 0x84) = iVar2 + -1;
      iVar4 = *(int *)(param_1 + 0x90);
      iVar5 = (iVar2 + -1) - *(int *)(iVar4 + 0x80);
      if (iVar5 < 0) {
        *(int *)(iVar4 + 0x84) = iVar2;
      }
      else {
        uVar6 = *(uint *)(param_1 + 0x98);
        uVar7 = uVar6 - 1 & iVar2 - 1U;
        iVar3 = *(int *)(*(int *)(param_1 + 0x94) + uVar7 * 8);
        piVar8 = *(int **)(*(int *)(param_1 + 0x94) + 4 + uVar7 * 8);
        if (iVar2 + -1 != *(int *)(iVar4 + 0x80)) {
          uVar7 = uVar6 + 3;
          if (-1 < (int)uVar6) {
            uVar7 = uVar6;
          }
          if ((0x40 < uVar6) && (iVar5 < (int)uVar7 >> 2)) {
            FUN_101395d0((int *)(param_1 + 0x90),uVar6 >> 1);
          }
          goto LAB_100be5b2;
        }
        LOCK();
        bVar9 = iVar2 + -1 == *(int *)(iVar4 + 0x80);
        if (bVar9) {
          *(int *)(iVar4 + 0x80) = iVar2;
        }
        UNLOCK();
        *(int *)(*(int *)(param_1 + 0x90) + 0x84) = iVar2;
        if (bVar9) goto LAB_100be5b2;
      }
    }
    else {
      LOCK();
      puVar1 = (uint *)(iVar3 + 0x80);
      uVar6 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      if ((int)(uVar6 - iVar2) < 0) {
        uVar7 = *(uint *)(param_1 + 0x98);
        uVar6 = uVar7 - 1 & uVar6;
        iVar3 = *(int *)(*(int *)(param_1 + 0x94) + uVar6 * 8);
        piVar8 = *(int **)(*(int *)(param_1 + 0x94) + 4 + uVar6 * 8);
        uVar6 = uVar7 + 3;
        if (-1 < (int)uVar7) {
          uVar6 = uVar7;
        }
        if ((0x40 < uVar7) && (iVar4 <= (int)uVar6 >> 2)) {
          FUN_101395d0((int *)(param_1 + 0x90),uVar7 >> 1);
        }
        if (iVar3 != 0) goto LAB_100be5b2;
      }
      else {
        *(uint *)(*(int *)(param_1 + 0x90) + 0x80) = uVar6;
      }
    }
  }
  do {
    FUN_100be610(&local_1c,(int *)(param_1 + 0xa0));
  } while (local_1c == 2);
  iVar3 = local_18;
  piVar8 = local_14;
  if (local_1c == 0) {
    iVar3 = 0;
    piVar8 = &local_1c;
  }
LAB_100be5b2:
  return CONCAT44(piVar8,iVar3);
}
