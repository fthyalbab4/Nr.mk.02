// rea decompile_all
// name: FUN_100cf2f0
// address: 0x100cf2f0
// body: available
// range: 0x100cf2f0-0x100cf410 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100cf2f0(undefined4 *param_1,int param_2,undefined8 *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;

  cVar1 = *(char *)(param_2 + 0x35);
  *(undefined4 *)param_3 = 0;
  if (cVar1 == '\x01') {
    if (*param_4 == 0) {
      FUN_1013b900();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10152768);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if ((*(char *)(param_2 + 0x34) == '\x01') &&
     ((0x80U < (uint)param_4[3] & *(byte *)(param_4 + 6)) == 0)) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10151f98);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  uVar10 = FUN_100cf420((int *)(param_2 + 0x10),(uint *)(param_3 + 3),param_4,
                        *(void **)((int)param_3 + 0xc),*(uint *)(param_3 + 2));
  uVar8 = (uint)((ulonglong)uVar10 >> 0x20);
  *param_3 = uVar10;
  if ((int)uVar10 == 1) {
    uVar6 = 1;
    uVar9 = 0;
    uVar7 = *(uint *)(*(int *)((int)param_3 + 0x14) + 0x10);
    uVar5 = 0;
    if (uVar7 != 1) {
      if (uVar7 <= uVar8) goto LAB_100cf3ae;
      uVar9 = uVar8 * 2;
      uVar6 = uVar8 * 2 + 1;
    }
    if (uVar9 < *(uint *)(param_3 + 2)) {
      iVar2 = *(int *)(*(int *)((int)param_3 + 0xc) + uVar9 * 4);
      if ((uVar6 < *(uint *)(param_3 + 2) && iVar2 != 0) &&
         (iVar3 = *(int *)(*(int *)((int)param_3 + 0xc) + uVar6 * 4), iVar3 != 0)) {
        uVar7 = iVar3 - 1;
        uVar6 = iVar2 - 1;
        if (uVar7 < uVar6) {
          FUN_101369c0("invalid match span",0x25,&PTR_s_C__Users_runneradmin__cargo_regi_101519cc);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        param_1[1] = uVar6;
        uVar5 = 1;
        param_1[2] = uVar7;
        param_1[3] = uVar8;
      }
    }
  }
  else {
LAB_100cf3ae:
    uVar5 = 0;
  }
  *param_1 = uVar5;
  return;
}
