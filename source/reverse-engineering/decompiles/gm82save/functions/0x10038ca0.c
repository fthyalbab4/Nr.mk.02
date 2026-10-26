// rea decompile_all
// name: FUN_10038ca0
// address: 0x10038ca0
// body: available
// range: 0x10038ca0-0x10038eb5 inclusive
// range: 0x10038ec0-0x10038fec inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10038ca0(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  LPVOID pvVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  HANDLE hHeap;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  uint uVar8;
  LPVOID *ppvVar9;
  undefined4 *local_100;
  undefined4 *puStack_fc;
  undefined4 *puStack_f8;
  int *piStack_f4;
  undefined8 *local_f0;
  LPVOID local_ec;
  uint uStack_e8;
  int local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  uint uStack_c8;
  undefined4 *puStack_c4;
  uint uStack_c0;
  int *piStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  LPVOID pvStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined1 uStack_98;
  undefined4 *puStack_94;
  LPVOID pvStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_80;
  LPVOID local_78 [2];
  int local_70;
  uint local_6c;

  local_100 = &DAT_10163080;
  if (DAT_10163090 != 0) {
    local_e0 = CONCAT44(local_e0._4_4_,&local_100);
    local_78[0] = &local_e0;
    FUN_1013c400((uint *)&DAT_10163090,0,local_78,0x1013f324,
                 &PTR_s_C__Users_runneradmin__cargo_regi_10143620);
  }
  iVar7 = DAT_10163084;
  local_ec = (LPVOID)param_2[1];
  local_e4 = param_2[2];
  piVar5 = FUN_10092e90();
  if (piVar5 == (int *)0x0) {
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  pvVar2 = (LPVOID)*piVar5;
  local_f0 = param_1;
  if (pvVar2 == *(LPVOID *)(iVar7 + 0x14)) {
    *(undefined4 *)(iVar7 + 0x14) = 1;
    local_70 = iVar7;
    local_78[0] = (undefined8 *)0x1;
    local_6c = local_6c & 0xffffff00;
    local_78[1] = pvVar2;
  }
  else {
    FUN_10135cc0(local_78,iVar7,pvVar2,(int)*(LPVOID *)(iVar7 + 0x14));
  }
  puVar6 = (undefined4 *)
           (**(code **)(*(int *)(DAT_10163080 + 0xc) + 0x10))
                     (*(int *)(DAT_10163080 + 8) + 8 +
                      (*(int *)(*(int *)(DAT_10163080 + 0xc) + 8) - 1U & 0xfffffff8));
  piVar5 = (int *)*puVar6;
  LOCK();
  iVar7 = *piVar5;
  *piVar5 = *piVar5 + 1;
  UNLOCK();
  if (*piVar5 == 0 || SCARRY4(iVar7,1) != *piVar5 < 0) {
LAB_10038fda:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (piVar5[4] == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(piVar5[3] + -4 + piVar5[4] * 8);
  }
  uVar1 = uVar8 * 4;
  piStack_f4 = param_2;
  if (0x3fffffff < uVar8 || 0x7ffffffc < uVar1) {
    FUN_101367b0();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  if (uVar1 == 0) {
    puStack_c4 = (undefined4 *)&DAT_00000004;
    uStack_c8 = 0;
    puVar6 = puStack_c4;
    if (1 < uVar8) goto LAB_10038d9d;
LAB_10038dc6:
    puVar6 = puStack_c4;
    if (uVar8 == 0) goto LAB_10038dd2;
  }
  else {
    puStack_c4 = FUN_10107380(0,uVar1);
    if (puStack_c4 == (undefined4 *)0x0) {
      FUN_101366bc(4);
      goto LAB_10038fda;
    }
    uStack_c8 = uVar8;
    puVar6 = puStack_c4;
    if (uVar8 < 2) goto LAB_10038dc6;
LAB_10038d9d:
    uStack_e8 = uStack_c8;
    memset(puVar6,0,uVar1 - 4);
    puStack_c4 = puVar6 + (uVar8 - 1);
    uStack_c8 = uStack_e8;
  }
  *puStack_c4 = 0;
  puStack_c4 = puVar6;
LAB_10038dd2:
  local_e0 = CONCAT44(local_78[1],local_78[0]);
  uStack_d8 = CONCAT44(local_6c,local_70);
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  pvStack_a8 = local_ec;
  iStack_a4 = local_e4;
  uStack_a0 = 0;
  iStack_9c = local_e4;
  uStack_98 = 0;
  puStack_94 = &DAT_10163080;
  pvStack_90 = local_ec;
  iStack_8c = local_e4;
  uStack_88 = 0xffffffff;
  uStack_80 = 0xffffffff;
  uStack_c0 = uVar8;
  piStack_bc = piVar5;
  iVar7 = FUN_100804d0((int *)&local_e0);
  piVar5 = piStack_f4;
  if (iVar7 == 1) {
    puVar6 = FUN_10107380(0,0x10);
    if (puVar6 == (undefined4 *)0x0) {
      FUN_101366bc(4);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    *puVar6 = extraout_EDX;
    local_100 = (undefined4 *)0x4;
    puStack_f8 = (undefined4 *)0x1;
    piVar5 = (int *)&local_e0;
    ppvVar9 = local_78;
    for (iVar7 = 0x1a; puStack_fc = puVar6, iVar7 != 0; iVar7 = iVar7 + -1) {
      *ppvVar9 = (LPVOID)*piVar5;
      piVar5 = piVar5 + 1;
      ppvVar9 = ppvVar9 + 1;
    }
    while (puVar4 = puStack_f8, iVar7 = FUN_100804d0((int *)local_78), iVar7 == 1) {
      if (puVar4 == local_100) {
        FUN_101359e0((uint *)&local_100,(uint)puVar4,1,&DAT_00000004,4);
        puVar6 = puStack_fc;
      }
      puVar6[(int)puVar4] = extraout_EDX_00;
      puStack_f8 = (undefined4 *)((int)puVar4 + 1);
    }
    if (local_78[0] != (undefined8 *)0xffffffff) {
      FUN_10007690((int *)local_78);
    }
    *(undefined4 **)(local_f0 + 1) = puStack_f8;
    *local_f0 = CONCAT44(puStack_fc,local_100);
    piVar5 = piStack_f4;
  }
  else {
    *(undefined4 *)local_f0 = 0;
    *(undefined4 *)((int)local_f0 + 4) = 4;
    *(undefined4 *)(local_f0 + 1) = 0;
    if ((int)local_e0 != -1) {
      FUN_10007690((int *)&local_e0);
    }
  }
  if (*piVar5 != 0) {
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,local_ec);
  }
  return;
}
