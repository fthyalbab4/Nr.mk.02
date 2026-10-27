// rea decompile_all
// name: FUN_10052c50
// address: 0x10052c50
// body: available
// range: 0x10052c50-0x10052e89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10052c50(undefined8 *param_1,uint *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  LPVOID lpMem;
  short sVar3;
  size_t _Size;
  uint uVar4;
  HANDLE hHeap;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint local_30 [8];

  uVar4 = param_2[2];
  if (param_2[1] != 0) goto LAB_10052d33;
  uVar2 = *param_2;
  uVar10 = uVar2 + 2;
  uVar8 = 0xffffffff;
  if (uVar2 < 0xfffffffe) {
    uVar8 = uVar10;
  }
  if (uVar4 < uVar8) {
    uVar9 = param_2[4];
    if (uVar8 - uVar9 <= uVar4 - uVar9) goto LAB_10052c96;
    FUN_101359e0(param_2 + 2,uVar9,uVar8 - uVar9,(LPVOID)0x1,1);
    uVar8 = param_2[4];
    _Size = uVar2 - uVar8;
    if (uVar2 < uVar8 || _Size == 0) goto LAB_10052ce2;
LAB_10052c9f:
    uVar4 = param_2[3];
    memset((void *)(uVar8 + uVar4),0,_Size);
    param_2[4] = uVar2;
    *(undefined2 *)(uVar4 + uVar2) = 0x178;
    uVar8 = uVar2;
  }
  else {
LAB_10052c96:
    uVar8 = param_2[4];
    _Size = uVar2 - uVar8;
    if (uVar8 <= uVar2 && _Size != 0) goto LAB_10052c9f;
LAB_10052ce2:
    *(undefined2 *)(param_2[3] + uVar2) = 0x178;
  }
  if (uVar8 < uVar10) {
    param_2[4] = uVar10;
    uVar8 = uVar10;
  }
  uVar10 = uVar2 + 2;
  *param_2 = uVar10;
  param_2[1] = (uint)(0xfffffffd < uVar2);
  uVar4 = param_2[2];
  if (uVar2 >> 1 < 0x7fffffff) {
    uVar7 = uVar2 + 7;
    uVar9 = 0xffffffff;
    if (uVar10 < 0xfffffffb) {
      uVar9 = uVar7;
    }
    if ((uVar4 < uVar9) && (uVar4 - uVar8 < uVar9 - uVar8)) {
      FUN_101359e0(param_2 + 2,uVar8,uVar9 - uVar8,(LPVOID)0x1,1);
      uVar8 = param_2[4];
    }
    if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
      uVar4 = param_2[3];
    }
    else {
      uVar4 = param_2[3];
      memset((void *)(uVar8 + uVar4),0,uVar10 - uVar8);
      param_2[4] = uVar10;
      uVar8 = uVar10;
    }
    *(undefined1 *)(uVar4 + 4 + uVar10) = 0;
    *(undefined4 *)(uVar4 + uVar10) = 0;
    if (uVar8 < uVar7) {
      param_2[4] = uVar7;
    }
    uVar1 = *(undefined8 *)(param_2 + 4);
    *param_2 = uVar2 + 7;
    param_1[1] = *(undefined8 *)(param_2 + 2);
    param_1[2] = uVar1;
    param_2[1] = (uint)(0xfffffff8 < uVar2);
    *param_1 = *(undefined8 *)param_2;
    if (DAT_101633c0 == 0) {
      FUN_1013c860(local_30);
      sVar3 = (short)local_30[0];
      uVar2 = DAT_101633c0;
      uVar4 = local_30[0];
    }
    else {
      sVar3 = (short)DAT_101633c0;
      uVar2 = DAT_101633c0;
      uVar4 = local_30[0];
    }
    local_30[0] = uVar2;
    puVar6 = &LAB_101061e0;
    DAT_101633c0 = local_30[0];
    if (-1 < sVar3) {
      if (local_30[0] == 0) {
        local_30[0] = uVar4;
        FUN_1013c860(local_30);
      }
      puVar6 = (undefined1 *)0x0;
      if ((local_30[0] >> 9 & 1) != 0) {
        puVar6 = &LAB_101061c0;
      }
    }
    *(undefined4 *)((int)param_1 + 0x1c) = 1;
    puVar5 = &LAB_10106200;
    if (puVar6 != (undefined1 *)0x0) {
      puVar5 = puVar6;
    }
    *(undefined1 **)(param_1 + 3) = puVar5;
    *(undefined2 *)(param_1 + 4) = 0;
    return;
  }
LAB_10052d33:
  *(undefined ***)((int)param_1 + 4) = &PTR_s_cursor_position_exceeds_maximum_p_1013f6b4;
  *(undefined4 *)param_1 = 2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  if (uVar4 != 0) {
    lpMem = (LPVOID)param_2[3];
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpMem);
  }
  return;
}
