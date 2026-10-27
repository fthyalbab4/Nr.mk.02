// rea decompile_all
// name: FUN_101389f0
// address: 0x101389f0
// body: available
// range: 0x101389f0-0x10138a71 inclusive
// range: 0x10138a80-0x10138ac2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_101389f0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  bool bVar8;

  uVar4 = *param_1;
  do {
    if (uVar4 < 4) {
      return;
    }
    if ((uVar4 & 2) != 0) {
      return;
    }
    LOCK();
    uVar7 = *param_1;
    bVar8 = uVar4 == uVar7;
    if (bVar8) {
      *param_1 = uVar4 | 2;
      uVar7 = uVar4;
    }
    UNLOCK();
    uVar5 = uVar4;
    uVar4 = uVar7;
  } while (!bVar8);
  while( true ) {
    while( true ) {
      uVar7 = uVar5 & 0xfffffffc;
      piVar6 = *(int **)(uVar7 + 8);
      uVar4 = uVar7;
      while (piVar6 == (int *)0x0) {
        uVar2 = *(uint *)(uVar4 + 0x10);
        *(uint *)(uVar2 + 0xc) = uVar4;
        uVar4 = uVar2;
        piVar6 = *(int **)(uVar2 + 8);
      }
      *(int **)(uVar7 + 8) = piVar6;
      if ((uVar5 & 1) == 0) break;
      LOCK();
      uVar4 = *param_1;
      bVar8 = uVar5 == uVar4;
      if (bVar8) {
        *param_1 = uVar5 & 0xfffffffd;
        uVar4 = uVar5;
      }
      UNLOCK();
      uVar5 = uVar4;
      if (bVar8) {
        return;
      }
    }
    uVar4 = uVar5;
    if (piVar6[3] != 0) break;
    do {
      LOCK();
      uVar5 = *param_1;
      bVar8 = uVar4 == uVar5;
      if (bVar8) {
        *param_1 = uVar4 & 1;
        uVar5 = uVar4;
      }
      UNLOCK();
      if (bVar8) goto LAB_10138a94;
      uVar4 = uVar5;
    } while (uVar5 < 4);
  }
  *(int *)(uVar7 + 8) = piVar6[3];
  LOCK();
  *param_1 = *param_1 & 0xfffffffd;
  UNLOCK();
LAB_10138a94:
  piVar3 = (int *)*piVar6;
  piVar6 = piVar6 + 1;
  if (*piVar3 == 0) {
    *piVar6 = 0;
    (*(code *)piVar3[2])(piVar6);
    return;
  }
  LOCK();
  iVar1 = *piVar6;
  *piVar6 = 0;
  UNLOCK();
  if (iVar1 != 1) {
    return;
  }
  (*(code *)*piVar3)(piVar3[2],piVar6,0,0);
  return;
}
