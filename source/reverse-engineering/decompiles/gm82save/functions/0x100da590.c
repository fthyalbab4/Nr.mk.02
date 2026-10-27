// rea decompile_all
// name: FUN_100da590
// address: 0x100da590
// body: available
// range: 0x100da590-0x100da702 inclusive
// range: 0x100da710-0x100da96b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100da590(int *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puStack_c8;
  int iStack_bc;
  uint *puStack_b8;
  uint *puStack_b4;
  uint *puStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined8 uStack_7c;
  uint uStack_4c;

  if (*(char *)(param_2 + 0xb) == '\x01') {
    puVar9 = (uint *)param_3[2];
    if ((uint *)param_3[3] <= puVar9) goto LAB_100da665;
  }
  else {
    if ((uint)param_3[3] <= (uint)param_3[2]) goto LAB_100da665;
    puVar9 = (uint *)(param_3[2] + 1);
  }
  piVar1 = (int *)*param_3;
  FUN_100d5890((int *)param_3[1]);
  puVar7 = puStack_b4;
  puVar6 = puStack_b8;
  uStack_7c = CONCAT44(uStack_ac,puStack_b0);
  uStack_4c = uStack_80;
  if (iStack_bc == -2) {
    puVar8 = puStack_b4;
    if (*(char *)(param_2 + 0xb) != '\x01') goto LAB_100da710;
    while (puVar9 < puStack_c8) {
      while( true ) {
        FUN_100d5890(piVar1);
        puVar8 = puStack_b0;
        if (puStack_b8 != (uint *)0xfffffffe) {
          puVar8 = (uint *)0xfffffffe;
          if (puStack_b8 != (uint *)0xfffffffd) {
            *(ulonglong *)(puVar6 + 0xb) = CONCAT44(uStack_8c,uStack_90);
            *(ulonglong *)(puVar6 + 9) = CONCAT44(uStack_94,uStack_98);
            puVar6[0xf] = uStack_80;
            *(ulonglong *)(puVar6 + 0xd) = CONCAT44(uStack_84,uStack_88);
            *(ulonglong *)(puVar6 + 7) = CONCAT44(uStack_9c,uStack_a0);
            *(ulonglong *)(puVar6 + 3) = CONCAT44(uStack_ac,puStack_b0);
            *(ulonglong *)(puVar6 + 5) = CONCAT44(uStack_a4,uStack_a8);
            *puVar6 = (uint)puStack_b8;
            puVar6[1] = (uint)puStack_b4;
            puVar6[2] = (uint)puStack_b0;
            return;
          }
          goto LAB_100da85f;
        }
        if (*(int *)(param_2 + 0x20) != 0) {
          FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10152514);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
        FUN_100d4cf0(&puStack_b8,param_2 + 0x24,0xfffffffe);
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        if (puStack_b4 != (uint *)0xfffffffe) {
          *(ulonglong *)(piVar1 + 0xc) = CONCAT44(uStack_80,uStack_84);
          *(ulonglong *)(piVar1 + 10) = CONCAT44(uStack_88,uStack_8c);
          *(undefined8 *)(piVar1 + 0xe) = uStack_7c;
          *(ulonglong *)(piVar1 + 8) = CONCAT44(uStack_90,uStack_94);
          *(ulonglong *)(piVar1 + 6) = CONCAT44(uStack_98,uStack_9c);
          *(ulonglong *)(piVar1 + 4) = CONCAT44(uStack_a0,uStack_a4);
          *(ulonglong *)piVar1 = CONCAT44(puStack_b0,puStack_b4);
          *(ulonglong *)(piVar1 + 2) = CONCAT44(uStack_a8,uStack_ac);
          return;
        }
        puVar9 = (uint *)0xfffffffe;
        puStack_c8 = puVar7;
        puStack_b8 = puVar8;
        if (*(char *)(param_2 + 0xb) == '\x01') break;
LAB_100da710:
        if (puStack_c8 <= puVar9) goto LAB_100da85f;
      }
      puVar9 = (uint *)0xfffffffe;
    }
LAB_100da85f:
    param_1[1] = (int)puVar6;
    param_1[2] = (int)puVar8;
    *param_1 = -2;
    return;
  }
  if (iStack_bc != -3) {
    *(ulonglong *)(param_1 + 0xb) = CONCAT44(uStack_8c,uStack_90);
    param_1[0xf] = uStack_80;
    *(ulonglong *)(param_1 + 9) = CONCAT44(uStack_94,uStack_98);
    *(ulonglong *)(param_1 + 0xd) = CONCAT44(uStack_84,uStack_88);
    *(ulonglong *)(param_1 + 7) = CONCAT44(uStack_9c,uStack_a0);
    *(undefined8 *)(param_1 + 3) = uStack_7c;
    *(ulonglong *)(param_1 + 5) = CONCAT44(uStack_a4,uStack_a8);
    *param_1 = iStack_bc;
    param_1[1] = (int)puStack_b8;
    param_1[2] = (int)puStack_b4;
    return;
  }
LAB_100da665:
  if (*(int *)(param_2 + 0x20) == 0) {
    *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
    iVar2 = *(int *)(param_2 + 0x3c);
    if (iVar2 == *(int *)(param_2 + 0x34)) {
      FUN_10135f30((uint *)(param_2 + 0x34));
    }
    iVar3 = *(int *)(param_2 + 0x38);
    *(undefined4 *)(iVar3 + iVar2 * 0x10) = 0;
    *(undefined4 *)(iVar3 + 4 + iVar2 * 0x10) = 0;
    *(int *)(param_2 + 0x3c) = iVar2 + 1;
    if ((*(int *)(param_2 + 0x2c) == 1) &&
       (uVar4 = *(uint *)(param_2 + 0x30),
       uVar4 < (uint)((iVar2 + 1) * 0x10 + *(int *)(param_2 + 0x58)))) {
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
      *param_1 = 0x26;
      param_1[1] = uVar4;
    }
    else {
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
      param_1[1] = iVar2;
      param_1[2] = iVar2;
      *param_1 = -2;
    }
    return;
  }
  FUN_10136bb0(&PTR_s_C__Users_runneradmin__cargo_regi_10152544);
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}
