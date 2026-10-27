// rea decompile_all
// name: FUN_10052e90
// address: 0x10052e90
// body: available
// range: 0x10052e90-0x1005308f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10052e90(undefined8 *param_1,uint *param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  uint uVar3;
  LPVOID lpMem;
  code *pcVar4;
  uint uVar5;
  HANDLE hHeap;
  undefined **ppuVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_18;
  undefined **local_14;

  uVar3 = *param_2;
  uVar2 = (ushort)param_2[8];
  uVar9 = param_2[1];
  uVar7 = uVar3 - uVar2;
  uVar8 = uVar7 - 5;
  uVar5 = (uVar9 - (uVar3 < uVar2)) + -1 + (uint)(4 < uVar7);
  if (uVar5 < uVar9 || uVar5 - uVar9 < (uint)(uVar8 < uVar3)) {
    ppuVar6 = &PTR_s_cursor_position_exceeds_maximum_p_1013f6b4;
    *param_2 = uVar8;
    param_2[1] = uVar5;
    if (uVar5 == 0) {
      uVar5 = 0xffffffff;
      if (uVar8 < 0xfffffffb) {
        uVar5 = uVar7;
      }
      if (param_2[2] < uVar5) {
        uVar10 = param_2[4];
        if (param_2[2] - uVar10 < uVar5 - uVar10) {
          FUN_101359e0(param_2 + 2,uVar10,uVar5 - uVar10,(LPVOID)0x1,1);
        }
      }
      uVar5 = param_2[4];
      if (uVar8 < uVar5 || uVar8 - uVar5 == 0) {
        uVar10 = param_2[3];
      }
      else {
        uVar10 = param_2[3];
        memset((void *)(uVar5 + uVar10),0,uVar8 - uVar5);
        param_2[4] = uVar8;
        uVar5 = uVar8;
      }
      *(undefined1 *)(uVar10 + uVar8) = 1;
      *(ushort *)(uVar10 + 1 + uVar8) = uVar2;
      *(ushort *)(uVar10 + 3 + uVar8) = ~uVar2;
      if (uVar5 < uVar7) {
        param_2[4] = uVar7;
        uVar5 = uVar7;
      }
      *param_2 = uVar3;
      param_2[1] = uVar9;
      if (uVar9 == 0) {
        uVar9 = param_2[7];
        uVar8 = uVar3 + 4;
        uVar7 = 0xffffffff;
        if (uVar3 < 0xfffffffc) {
          uVar7 = uVar8;
        }
        if ((param_2[2] < uVar7) && (param_2[2] - uVar5 < uVar7 - uVar5)) {
          FUN_101359e0(param_2 + 2,uVar5,uVar7 - uVar5,(LPVOID)0x1,1);
          uVar5 = param_2[4];
        }
        uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        if (uVar3 < uVar5 || uVar3 - uVar5 == 0) {
          *(uint *)(param_2[3] + uVar3) = uVar9;
        }
        else {
          uVar7 = param_2[3];
          memset((void *)(uVar5 + uVar7),0,uVar3 - uVar5);
          param_2[4] = uVar3;
          *(uint *)(uVar7 + uVar3) = uVar9;
          uVar5 = uVar3;
        }
        if (uVar5 < uVar8) {
          param_2[4] = uVar8;
        }
        uVar1 = *(undefined8 *)(param_2 + 2);
        *param_2 = uVar3 + 4;
        param_1[2] = *(undefined8 *)(param_2 + 4);
        param_1[1] = uVar1;
        param_2[1] = (uint)(0xfffffffb < uVar3);
        *param_1 = *(undefined8 *)param_2;
        return;
      }
      local_14 = &PTR_s_cursor_position_exceeds_maximum_p_1013f6b4;
      local_18 = 2;
      FUN_10136c40("called `Result::unwrap()` on an `Err` value",0x2b,&local_18,&PTR_FUN_1013f548,
                   &PTR_s_C__Users_runneradmin__cargo_regi_10141d3c);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
  }
  else {
    ppuVar6 = &PTR_s_invalid_seek_to_a_negative_or_ov_10143664;
  }
  uVar3 = param_2[2];
  *(undefined ***)((int)param_1 + 4) = ppuVar6;
  *(undefined4 *)param_1 = 2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  if (uVar3 != 0) {
    lpMem = (LPVOID)param_2[3];
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpMem);
  }
  return;
}
