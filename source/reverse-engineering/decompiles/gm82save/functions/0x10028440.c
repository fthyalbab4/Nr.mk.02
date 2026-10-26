// rea decompile_all
// name: FUN_10028440
// address: 0x10028440
// body: available
// range: 0x10028440-0x10028494 inclusive
// range: 0x100284a0-0x10028658 inclusive
// range: 0x10028660-0x1002870c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10028440(int *param_1,uint param_2,char param_3,uint param_4,uint param_5,int param_6,
            uint param_7)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  LPVOID lpMem;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  HANDLE pvVar8;
  uint uVar9;
  code *pcVar10;
  uint *puVar11;
  uint *puVar12;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  int local_54;
  int local_50;
  uint *local_4c;
  uint *local_48;
  int local_44;
  uint local_40;
  int *local_3c;
  uint local_38;
  uint local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;

  uVar9 = param_2 >> 1;
  local_14 = param_5;
  local_38 = param_2;
  if (uVar9 < param_5) {
LAB_10028463:
    local_60 = (uint *)0x0;
    local_5c = (uint *)0x4;
    local_58 = (uint *)0x0;
    if (param_7 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    puVar11 = (uint *)0x4;
    uVar9 = param_7 * 4 - 4;
    local_3c = param_1;
    do {
      puVar12 = local_58;
      uVar1 = *(undefined4 *)(param_6 + (int)local_58 * 4);
      if (local_58 == local_60) {
        FUN_101359e0((uint *)&local_60,(uint)local_58,(uVar9 >> 2) + 1,&DAT_00000004,4);
        puVar11 = local_5c;
      }
      puVar4 = local_60;
      uVar9 = uVar9 - 4;
      *(undefined4 *)((int)puVar11 + (int)puVar12 * 4) = uVar1;
      puVar12 = (uint *)((int)puVar12 + 1);
      local_58 = puVar12;
    } while (uVar9 != 0xfffffffc);
    puVar6 = FUN_10107380(0,0x14);
    if (puVar6 != (uint *)0x0) {
      *puVar6 = (uint)puVar4;
      puVar6[1] = (uint)puVar11;
      puVar6[2] = (uint)puVar12;
      puVar6[3] = 0;
      puVar6[4] = 0;
      *local_3c = (int)puVar6;
      local_3c[1] = (int)puVar6;
      local_3c[2] = 1;
      return;
    }
    FUN_1013679e(4,0x14);
                    /* WARNING: Does not return */
    pcVar10 = (code *)invalidInstructionException();
    (*pcVar10)();
  }
  if (param_3 == '\0') {
    if (param_4 == 0) goto LAB_10028463;
    local_18 = param_4 >> 1;
  }
  else {
    piVar5 = FUN_100be180();
    if (piVar5 == (int *)0x0) goto LAB_10028701;
    if (*piVar5 == 0) {
      piVar5 = FUN_100c0800();
    }
    else {
      piVar5 = (int *)(*piVar5 + 0x8c);
    }
    local_18 = param_4 >> 1;
    if (param_4 >> 1 <= *(uint *)(*piVar5 + 0x104)) {
      local_18 = *(uint *)(*piVar5 + 0x104);
    }
  }
  local_50 = param_7 - uVar9;
  local_34 = uVar9;
  if (param_7 < uVar9) {
    FUN_101369c0("mid > lenC:\\Users\\runneradmin\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\zlib-rs-0.6.3\\src\\deflate\\window.rs"
                 ,0x13,&PTR_s_C__Users_runneradmin__cargo_regi_10143a90);
                    /* WARNING: Does not return */
    pcVar10 = (code *)invalidInstructionException();
    (*pcVar10)();
  }
  local_54 = param_6 + uVar9 * 4;
  local_60 = &local_38;
  local_58 = &local_18;
  local_5c = &local_34;
  local_44 = param_6;
  local_4c = local_5c;
  local_48 = local_58;
  local_40 = uVar9;
  piVar5 = FUN_100be180();
  if (piVar5 == (int *)0x0) {
LAB_10028701:
    FUN_1013bdf0(&PTR_s_C__Users_runneradmin__rustup_too_10159648);
                    /* WARNING: Does not return */
    pcVar10 = (code *)invalidInstructionException();
    (*pcVar10)();
  }
  iVar7 = *piVar5;
  if (iVar7 == 0) {
    piVar5 = FUN_100c0800();
    iVar2 = *piVar5;
    piVar5 = FUN_100be180();
    if (piVar5 == (int *)0x0) goto LAB_10028701;
    iVar7 = *piVar5;
    if (iVar7 == 0) {
      FUN_1012f020((undefined8 *)&local_30,(uint *)(iVar2 + 0x40),(undefined8 *)&local_60);
      goto LAB_10028614;
    }
    if (*(int *)(iVar7 + 0x8c) != iVar2) {
      FUN_10131670((undefined8 *)&local_30,(uint *)(iVar2 + 0x40),iVar7,(undefined8 *)&local_60);
      goto LAB_10028614;
    }
  }
  FUN_10030630(&local_30,(undefined8 *)&local_60,iVar7,0);
LAB_10028614:
  if (local_2c == 0) {
    *param_1 = local_24;
    param_1[1] = local_20;
    param_1[2] = local_1c;
    pcVar10 = HeapFree_exref;
    piVar5 = local_30;
    while (piVar5 != (int *)0x0) {
      piVar3 = (int *)piVar5[3];
      if (piVar3 != (int *)0x0) {
        piVar3[4] = 0;
      }
      if (*piVar5 != 0) {
        lpMem = (LPVOID)piVar5[1];
        pvVar8 = GetProcessHeap();
        pcVar10 = HeapFree_exref;
        HeapFree(pvVar8,0,lpMem);
      }
      pvVar8 = GetProcessHeap();
      (*pcVar10)(pvVar8,0,piVar5);
      piVar5 = piVar3;
    }
  }
  else {
    if (local_24 != 0) {
      local_28 = local_28 + local_1c;
      *(int *)(local_2c + 0xc) = local_24;
      *(int *)(local_24 + 0x10) = local_2c;
      local_2c = local_20;
    }
    *param_1 = (int)local_30;
    param_1[1] = local_2c;
    param_1[2] = local_28;
  }
  return;
}
