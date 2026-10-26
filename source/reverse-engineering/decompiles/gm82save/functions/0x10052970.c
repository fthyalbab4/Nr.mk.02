// rea decompile_all
// name: FUN_10052970
// address: 0x10052970
// body: available
// range: 0x10052970-0x100529b7 inclusive
// range: 0x100529c0-0x10052c43 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10052970(undefined4 *param_1,uint *param_2,void *param_3,uint param_4)

{
  uint *puVar1;
  undefined2 uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  size_t sVar6;
  uint uVar7;
  undefined **ppuVar8;
  uint uVar9;
  undefined2 extraout_DX;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  void *local_18;

  local_18 = param_3;
  uVar2 = (*(code *)param_2[6])(param_2[7],*(undefined2 *)((int)param_2 + 0x1e),param_3,param_4);
  *(undefined2 *)(param_2 + 7) = uVar2;
  *(undefined2 *)((int)param_2 + 0x1e) = extraout_DX;
  puVar1 = param_2 + 2;
  uVar3 = (ushort)param_2[8];
  uVar9 = *param_2;
  uVar7 = param_2[1];
  do {
    uVar4 = (uint)uVar3;
    if (uVar3 == 0xffff) {
      uVar10 = uVar9 - 0x10004;
      uVar4 = (uVar7 - 1) + (uint)(0x10003 < uVar9);
      if (uVar7 < (uVar9 < 0x10004)) {
        ppuVar8 = &PTR_s_invalid_seek_to_a_negative_or_ov_10143664;
LAB_10052c28:
        param_1[1] = ppuVar8;
        *param_1 = 2;
        return;
      }
      *param_2 = uVar10;
      param_2[1] = uVar4;
      if (uVar4 != 0) {
        ppuVar8 = &PTR_s_cursor_position_exceeds_maximum_p_1013f6b4;
        goto LAB_10052c28;
      }
      uVar4 = param_2[4];
      uVar11 = uVar9 - 0xffff;
      uVar5 = uVar11;
      if (0xfffffffa < uVar10) {
        uVar5 = 0xffffffff;
      }
      if ((param_2[2] < uVar5) && (param_2[2] - uVar4 < uVar5 - uVar4)) {
        FUN_101359e0(puVar1,uVar4,uVar5 - uVar4,(LPVOID)0x1,1);
        uVar4 = param_2[4];
        sVar6 = uVar10 - uVar4;
        if (uVar4 <= uVar10 && sVar6 != 0) goto LAB_10052a55;
LAB_10052a8b:
        uVar5 = param_2[3];
      }
      else {
        sVar6 = uVar10 - uVar4;
        if (uVar10 < uVar4 || sVar6 == 0) goto LAB_10052a8b;
LAB_10052a55:
        uVar5 = param_2[3];
        memset((void *)(uVar4 + uVar5),0,sVar6);
        param_2[4] = uVar10;
        uVar4 = uVar10;
      }
      *(undefined1 *)(uVar5 + uVar10) = 0;
      *(undefined4 *)(uVar5 + 1 + uVar10) = 0xffff;
      if (uVar4 < uVar11) {
        param_2[4] = uVar11;
        uVar4 = uVar11;
      }
      *param_2 = uVar9;
      param_2[1] = uVar7;
      if (uVar7 != 0) goto LAB_10052c07;
      uVar10 = uVar9 + 5;
      uVar7 = uVar10;
      if (0xfffffffa < uVar9) {
        uVar7 = 0xffffffff;
      }
      if ((param_2[2] < uVar7) && (param_2[2] - uVar4 < uVar7 - uVar4)) {
        FUN_101359e0(puVar1,uVar4,uVar7 - uVar4,(LPVOID)0x1,1);
        uVar4 = param_2[4];
        sVar6 = uVar9 - uVar4;
        if (uVar4 <= uVar9 && sVar6 != 0) goto LAB_10052adf;
LAB_10052b28:
        uVar7 = param_2[3];
        *(undefined1 *)(uVar7 + 4 + uVar9) = 0;
        *(undefined4 *)(uVar7 + uVar9) = 0;
      }
      else {
        sVar6 = uVar9 - uVar4;
        if (uVar9 < uVar4 || sVar6 == 0) goto LAB_10052b28;
LAB_10052adf:
        uVar7 = param_2[3];
        memset((void *)(uVar4 + uVar7),0,sVar6);
        param_2[4] = uVar9;
        *(undefined1 *)(uVar7 + 4 + uVar9) = 0;
        *(undefined4 *)(uVar7 + uVar9) = 0;
        uVar4 = uVar9;
      }
      if (uVar4 < uVar10) {
        param_2[4] = uVar10;
      }
      bVar12 = 0xfffffffa < uVar9;
      uVar9 = uVar9 + 5;
      *param_2 = uVar9;
      uVar7 = (uint)bVar12;
      uVar4 = 0;
      param_2[1] = uVar7;
      *(undefined2 *)(param_2 + 8) = 0;
    }
    uVar10 = ~uVar4 & 0xffff;
    if (param_4 < (~uVar4 & 0xffff)) {
      uVar10 = param_4;
    }
    if (uVar7 != 0) {
LAB_10052c07:
      param_1[1] = &PTR_s_cursor_position_exceeds_maximum_p_1013f6b4;
      *param_1 = 2;
      return;
    }
    uVar4 = uVar9 + uVar10;
    uVar7 = uVar4;
    if (CARRY4(uVar9,uVar10)) {
      uVar7 = 0xffffffff;
    }
    uVar5 = param_2[4];
    if ((param_2[2] < uVar7) && (param_2[2] - uVar5 < uVar7 - uVar5)) {
      FUN_101359e0(puVar1,uVar5,uVar7 - uVar5,(LPVOID)0x1,1);
      uVar5 = param_2[4];
    }
    if (uVar9 < uVar5 || uVar9 - uVar5 == 0) {
      uVar7 = param_2[3];
    }
    else {
      uVar7 = param_2[3];
      memset((void *)(uVar5 + uVar7),0,uVar9 - uVar5);
      param_2[4] = uVar9;
      uVar5 = uVar9;
    }
    memcpy((void *)(uVar7 + uVar9),local_18,uVar10);
    if (uVar5 < uVar4) {
      param_2[4] = uVar4;
    }
    bVar12 = CARRY4(uVar9,uVar10);
    uVar9 = uVar9 + uVar10;
    uVar7 = (uint)bVar12;
    *param_2 = uVar9;
    local_18 = (void *)((int)local_18 + uVar10);
    param_2[1] = uVar7;
    uVar3 = (short)param_2[8] + (short)uVar10;
    param_4 = param_4 - uVar10;
    *(ushort *)(param_2 + 8) = uVar3;
    if (param_4 == 0) {
      *(undefined1 *)param_1 = 0xff;
      return;
    }
  } while( true );
}
