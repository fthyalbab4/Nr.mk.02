// rea decompile_all
// name: FUN_100f2ee0
// address: 0x100f2ee0
// body: available
// range: 0x100f2ee0-0x100f30ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100f2ee0(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 local_58;
  int local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;

  uVar7 = FUN_100f0c40(param_2);
  local_58 = CONCAT44(local_58._4_4_,uVar7);
  if (uVar7 != 0x7c) {
    FUN_1013bbfd(&local_58,&DAT_10153db0,&PTR_s_C__Users_runneradmin__cargo_regi_10153db4);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  iVar2 = *param_2;
  param_3[8] = *(int *)(iVar2 + 0x58);
  *(undefined8 *)(param_3 + 6) = *(undefined8 *)(iVar2 + 0x50);
  if (*(int *)(iVar2 + 0x10) != 0) {
    FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10153e58);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  *(undefined4 *)(iVar2 + 0x10) = 0xffffffff;
  puVar1 = (undefined8 *)(iVar2 + 0x50);
  if (*(int *)(iVar2 + 0x1c) != 0) {
    iVar8 = *(int *)(iVar2 + 0x1c) * 0x70;
    if (*(int *)(*(int *)(iVar2 + 0x18) + -0x70 + iVar8) == -1) {
      iVar8 = *(int *)(iVar2 + 0x18) + iVar8;
      uVar11 = FUN_100f9590(param_3);
      iVar3 = *(int *)(iVar8 + -100);
      if (iVar3 == *(int *)(iVar8 + -0x6c)) {
        FUN_10135ee0((uint *)(iVar8 + -0x6c));
      }
      iVar10 = *(int *)(iVar8 + -0x68);
      *(int *)(iVar10 + iVar3 * 8) = (int)uVar11;
      *(int *)(iVar10 + 4 + iVar3 * 8) = (int)((ulonglong)uVar11 >> 0x20);
      *(int *)(iVar8 + -100) = iVar3 + 1;
      goto LAB_100f302d;
    }
  }
  local_50 = param_3[5];
  local_58 = *(undefined8 *)(param_3 + 3);
  uStack_4c = (undefined4)*puVar1;
  uStack_48 = (undefined4)((ulonglong)*puVar1 >> 0x20);
  uStack_44 = *(undefined4 *)(iVar2 + 0x58);
  puVar9 = FUN_10107380(0,8);
  if (puVar9 == (undefined8 *)0x0) {
    FUN_1013679e(4,8);
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  uVar11 = FUN_100f9590(param_3);
  *puVar9 = uVar11;
  local_20 = CONCAT44(uStack_4c,local_50);
  local_18 = CONCAT44(uStack_44,uStack_48);
  local_28 = local_58;
  iVar8 = *(int *)(iVar2 + 0x1c);
  if (iVar8 == *(int *)(iVar2 + 0x14)) {
    FUN_1013bce0((uint *)(iVar2 + 0x14));
  }
  iVar3 = *(int *)(iVar2 + 0x18);
  iVar10 = iVar8 * 0x70;
  *(undefined4 *)(iVar3 + iVar10) = 0xffffffff;
  *(undefined4 *)(iVar3 + 4 + iVar10) = 1;
  *(undefined8 **)(iVar3 + 8 + iVar10) = puVar9;
  *(undefined4 *)(iVar3 + 0xc + iVar10) = 1;
  *(undefined8 *)(iVar3 + 0x10 + iVar10) = local_28;
  *(undefined8 *)(iVar3 + 0x18 + iVar10) = local_20;
  *(undefined8 *)(iVar3 + 0x20 + iVar10) = local_18;
  *(int *)(iVar2 + 0x1c) = iVar8 + 1;
LAB_100f302d:
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  FUN_100f1250(param_2);
  uStack_34 = (undefined4)*puVar1;
  uStack_30 = (undefined4)((ulonglong)*puVar1 >> 0x20);
  uVar4 = *(undefined4 *)(iVar2 + 0x58);
  uVar11 = *puVar1;
  uVar5 = *(undefined4 *)(iVar2 + 0x58);
  param_1[1] = 0;
  param_1[2] = 4;
  param_1[3] = 0;
  *(ulonglong *)(param_1 + 8) = CONCAT44(uVar4,uStack_30);
  *(undefined8 *)(param_1 + 4) = uVar11;
  *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_34,uVar5);
  *param_1 = 0xffffffff;
  return;
}
