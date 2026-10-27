// rea decompile_all
// name: FUN_10048220
// address: 0x10048220
// body: available
// range: 0x10048220-0x10048374 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_10048220(undefined4 *param_1,uint *param_2,uint param_3,uint param_4,char param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;

  bVar6 = (byte)param_2[10];
  uVar9 = 0;
  uVar4 = param_3 << (bVar6 & 0x1f);
  if ((bVar6 & 0x20) == 0) {
    uVar9 = uVar4;
    uVar4 = param_4 << (bVar6 & 0x1f) | param_3 >> 0x20 - (bVar6 & 0x1f);
  }
  uVar10 = param_2[9];
  uVar1 = param_2[8];
  param_2[8] = uVar9 | uVar1;
  param_2[9] = uVar4 | uVar10;
  *(byte *)(param_2 + 10) = bVar6 + param_5;
  if (0x3f < (byte)(bVar6 + param_5)) {
    if (param_2[1] != 0) {
      param_1[1] = &PTR_s_cursor_position_exceeds_maximum_p_1013f6b4;
      *param_1 = 2;
      return;
    }
    uVar2 = *param_2;
    uVar7 = uVar2 + 8;
    uVar5 = 0xffffffff;
    if (uVar2 < 0xfffffff8) {
      uVar5 = uVar7;
    }
    if (param_2[2] < uVar5) {
      uVar8 = param_2[4];
      if (param_2[2] - uVar8 < uVar5 - uVar8) {
        FUN_101359e0(param_2 + 2,uVar8,uVar5 - uVar8,(LPVOID)0x1,1);
      }
    }
    uVar5 = param_2[4];
    if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
      uVar8 = param_2[3];
    }
    else {
      uVar8 = param_2[3];
      memset((void *)(uVar5 + uVar8),0,uVar2 - uVar5);
      param_2[4] = uVar2;
      uVar5 = uVar2;
    }
    *(uint *)(uVar8 + uVar2) = uVar9 | uVar1;
    *(uint *)(uVar8 + 4 + uVar2) = uVar4 | uVar10;
    if (uVar5 < uVar7) {
      param_2[4] = uVar7;
    }
    *param_2 = uVar2 + 8;
    param_2[1] = (uint)(0xfffffff7 < uVar2);
    cVar3 = (char)param_2[10] + -0x40;
    bVar6 = param_5 - cVar3;
    *(char *)(param_2 + 10) = cVar3;
    uVar10 = param_4 >> (bVar6 & 0x1f);
    uVar9 = uVar10;
    uVar4 = param_3 >> (bVar6 & 0x1f) | param_4 << 0x20 - (bVar6 & 0x1f);
    if ((bVar6 & 0x20) != 0) {
      uVar9 = 0;
      uVar4 = uVar10;
    }
    if (0x3f < bVar6) {
      uVar4 = 0;
      uVar9 = 0;
    }
    param_2[9] = uVar9;
    param_2[8] = uVar4;
  }
  *(undefined1 *)param_1 = 0xff;
  return;
}
