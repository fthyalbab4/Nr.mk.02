// rea decompile_all
// name: FUN_100c2c60
// address: 0x100c2c60
// body: available
// range: 0x100c2c60-0x100c2dc1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __fastcall FUN_100c2c60(int param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  void *_Buf1;
  uint uVar4;
  void *_Buf2;
  void *_Buf2_00;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint _Size;
  uint uVar10;
  int local_28;

  local_28 = param_2;
  if (7 < param_4) {
    uVar10 = param_4 >> 3;
    iVar8 = uVar10 * 0x70;
    iVar9 = uVar10 * 0x40;
    param_1 = FUN_100c2c60(param_1,param_1 + iVar9,param_1 + iVar8,uVar10);
    local_28 = FUN_100c2c60(param_2,param_2 + iVar9,param_2 + iVar8,uVar10);
    param_3 = FUN_100c2c60(param_3,iVar9 + param_3,iVar8 + param_3,uVar10);
  }
  uVar10 = *(uint *)(param_1 + 8);
  _Buf1 = *(void **)(param_1 + 4);
  uVar4 = *(uint *)(local_28 + 8);
  _Buf2 = *(void **)(local_28 + 4);
  uVar5 = uVar4;
  if (uVar10 < uVar4) {
    uVar5 = uVar10;
  }
  iVar9 = memcmp(_Buf1,_Buf2,uVar5);
  bVar1 = *(byte *)(local_28 + 0xc);
  iVar8 = uVar10 - uVar4;
  if (iVar9 != 0) {
    iVar8 = iVar9;
  }
  bVar2 = *(byte *)(param_1 + 0xc);
  uVar5 = *(uint *)(param_3 + 8);
  bVar7 = iVar8 < 0;
  if (iVar8 == 0) {
    bVar7 = bVar2 < bVar1;
  }
  _Buf2_00 = *(void **)(param_3 + 4);
  _Size = uVar10;
  if (uVar5 <= uVar10) {
    _Size = uVar5;
  }
  iVar9 = memcmp(_Buf1,_Buf2_00,_Size);
  iVar8 = uVar10 - uVar5;
  if (iVar9 != 0) {
    iVar8 = iVar9;
  }
  bVar3 = *(byte *)(param_3 + 0xc);
  bVar6 = iVar8 < 0;
  if (iVar8 == 0) {
    bVar6 = bVar2 < bVar3;
  }
  if (bVar7 == bVar6) {
    uVar10 = uVar5;
    if (uVar4 < uVar5) {
      uVar10 = uVar4;
    }
    iVar9 = memcmp(_Buf2,_Buf2_00,uVar10);
    iVar8 = uVar4 - uVar5;
    if (iVar9 != 0) {
      iVar8 = iVar9;
    }
    bVar6 = iVar8 < 0;
    if (iVar8 == 0) {
      bVar6 = bVar1 < bVar3;
    }
    param_1 = local_28;
    if (bVar7 != bVar6) {
      param_1 = param_3;
    }
  }
  return param_1;
}
