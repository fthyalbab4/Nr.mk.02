// rea decompile_all
// name: FUN_10137300
// address: 0x10137300
// body: available
// range: 0x10137300-0x10137331 inclusive
// range: 0x10137340-0x10137377 inclusive
// range: 0x10137380-0x101373b7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10137376) */

uint __fastcall FUN_10137300(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;

  uVar1 = *(uint *)(param_1 + 0x80);
  iVar2 = *param_2;
  piVar6 = (int *)(param_1 + 0xc0);
  piVar5 = *(int **)(param_1 + 0xc0);
  while (piVar4 = (int *)((uint)piVar5 & 0xfffffffc), piVar4 != (int *)0x0) {
    while (piVar3 = (int *)*piVar4, ((uint)piVar3 & 3) == 1) {
      LOCK();
      piVar4 = (int *)*piVar6;
      bVar7 = piVar5 == piVar4;
      if (bVar7) {
        *piVar6 = (int)((uint)piVar3 & 0xfffffffc);
        piVar4 = piVar5;
      }
      UNLOCK();
      if (bVar7) {
        FUN_1009ded0((uint)piVar5 & 0xfffffffc,iVar2);
        piVar4 = (int *)((uint)piVar3 & 0xfffffffc);
      }
      else if (((uint)piVar4 & 3) != 0) {
        return uVar1;
      }
      piVar5 = piVar4;
      if (piVar4 == (int *)0x0) goto LAB_10137399;
    }
    piVar6 = piVar4;
    piVar5 = piVar3;
    if (((piVar4[0x110] & 1U) != 0) && ((piVar4[0x110] & 0xfffffffeU) != uVar1)) {
      return uVar1;
    }
  }
LAB_10137399:
  *(uint *)(param_1 + 0x80) = uVar1 + 2;
  return uVar1 + 2;
}
