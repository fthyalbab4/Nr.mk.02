// rea decompile_all
// name: FUN_100390c0
// address: 0x100390c0
// body: available
// range: 0x100390c0-0x10039236 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100390c0(int *param_1,undefined4 *param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *unaff_EBP;
  int *piVar8;
  bool bVar9;
  undefined8 uVar10;

  piVar8 = (int *)param_2[1];
  piVar7 = (int *)*param_2;
  if (*piVar8 == 1) {
    piVar8 = (int *)(piVar8[2] + 0x18);
  }
  else {
    piVar8 = (int *)piVar8[1];
  }
  puVar1 = (undefined8 *)param_2[2];
  *(undefined4 *)puVar1 = 0;
  iVar2 = *piVar7;
  piVar7 = *(int **)(iVar2 + 0x10);
  piVar6 = piVar8;
  if (*(char *)((int)piVar7 + 0x4a) == '\x02') {
LAB_100390f2:
    param_3 = piVar6;
    iVar5 = 0;
  }
  else {
    piVar7 = (int *)piVar7[0x16];
    piVar6 = (int *)param_3[4];
    if ((piVar6 == (int *)0x0) ||
       (unaff_EBP = param_3, piVar4 = piVar8, (*(byte *)(piVar7 + 7) & 1) == 0)) {
      unaff_EBP = (int *)param_3[5];
      if (((int *)param_3[3] <= unaff_EBP) || (piVar4 = param_3, (*(byte *)(piVar7 + 8) & 2) == 0))
      {
        if (*piVar7 == 1) {
          bVar9 = unaff_EBP < piVar6;
          unaff_EBP = (int *)((int)unaff_EBP - (int)piVar6);
          iVar5 = 0;
          if (bVar9) {
            unaff_EBP = (int *)0x0;
          }
          piVar6 = param_3;
          if (unaff_EBP < (int *)piVar7[1]) goto LAB_100390f2;
          if ((((*param_3 != 0) || ((*(byte *)(piVar7 + 7) & 1) != 0)) &&
              ((*(byte *)(piVar7 + 8) & 2) != 0)) &&
             ((piVar7[2] == 1 && ((int *)piVar7[3] < unaff_EBP)))) goto LAB_10039207;
        }
        uVar10 = (**(code **)(*(int *)(iVar2 + 0xc) + 0x30))
                           (*(int *)(iVar2 + 8) + 8 +
                            (*(int *)(*(int *)(iVar2 + 0xc) + 8) - 1U & 0xfffffff8),piVar8,param_3,
                            *(undefined4 *)((int)puVar1 + 0xc),*(undefined4 *)(puVar1 + 2));
        piVar7 = (int *)((ulonglong)uVar10 >> 0x20);
        iVar5 = 0;
        *puVar1 = uVar10;
        param_3 = param_1;
        if ((int)uVar10 != 1) goto LAB_10039207;
        param_3 = (int *)0x1;
        piVar8 = *(int **)(*(int *)((int)puVar1 + 0x14) + 0x10);
        piVar6 = (int *)0x0;
        if (piVar8 != (int *)0x1) {
          if (piVar8 <= piVar7) {
            iVar5 = 0;
            goto LAB_10039207;
          }
          piVar6 = (int *)((int)piVar7 * 2);
          param_3 = (int *)((int)piVar7 * 2 + 1);
        }
        piVar4 = param_3;
        if (piVar6 < *(int **)(puVar1 + 2)) {
          unaff_EBP = *(int **)(*(int *)((int)puVar1 + 0xc) + (int)piVar6 * 4);
          if (unaff_EBP != (int *)0x0) {
            piVar6 = param_3;
            if ((param_3 < *(int **)(puVar1 + 2)) &&
               (iVar2 = *(int *)(*(int *)((int)puVar1 + 0xc) + (int)param_3 * 4), iVar2 != 0)) {
              unaff_EBP = (int *)((int)unaff_EBP - 1);
              param_3 = (int *)(iVar2 + -1);
              if (param_3 < unaff_EBP) {
                FUN_101369c0("invalid match span",0x25,
                             &PTR_s_C__Users_runneradmin__cargo_regi_101519cc);
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              iVar5 = 1;
              goto LAB_10039207;
            }
            goto LAB_100390f2;
          }
        }
      }
    }
    param_3 = piVar4;
    iVar5 = 0;
  }
LAB_10039207:
  *param_1 = iVar5;
  param_1[1] = (int)unaff_EBP;
  param_1[2] = (int)param_3;
  param_1[3] = (int)piVar7;
  return;
}
