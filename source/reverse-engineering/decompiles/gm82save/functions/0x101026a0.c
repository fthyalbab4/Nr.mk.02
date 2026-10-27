// rea decompile_all
// name: FUN_101026a0
// address: 0x101026a0
// body: available
// range: 0x101026a0-0x10102898 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __fastcall FUN_101026a0(undefined4 *param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 local_28;
  uint local_24 [5];

  puVar1 = (undefined4 *)param_1[4];
  if (puVar1 == (undefined4 *)0x0) {
    return false;
  }
  cVar2 = FUN_10093f00(puVar1,(undefined1 (*) [16])"\'",(undefined1 *)0x1);
  if (cVar2 != '\0') {
    return true;
  }
  if (param_2 == 0 && param_3 == 0) {
    uVar3 = FUN_10093f00(puVar1,(undefined1 (*) [16])"_",(undefined1 *)0x1);
    return (bool)uVar3;
  }
  uVar7 = param_1[5];
  if (param_3 != 0 || (uint)-param_3 < (uint)(uVar7 < param_2)) {
    cVar2 = FUN_10093f00(puVar1,(undefined1 (*) [16])"{invalid syntax}",&DAT_00000010);
    if (cVar2 == '\0') {
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
      return false;
    }
    return true;
  }
  uVar5 = uVar7 - param_2;
  uVar7 = -(uint)(uVar7 < param_2) - param_3;
  uVar12 = CONCAT44(uVar7,uVar5);
  if (uVar7 < (uVar5 < 0x1a)) {
    if ((*(byte *)((int)puVar1 + 0xb) & 0x18) == 0) {
      uVar3 = (**(code **)(puVar1[1] + 0x10))(*puVar1,uVar5 + 0x61);
      return (bool)uVar3;
    }
    local_24[0] = uVar5 + 0x61 & 0xff;
    uVar3 = FUN_10093f00(puVar1,(undefined1 (*) [16])local_24,(undefined1 *)0x1);
    return (bool)uVar3;
  }
  cVar2 = FUN_10093f00(puVar1,(undefined1 (*) [16])"_",(undefined1 *)0x1);
  if (cVar2 != '\0') {
    return true;
  }
  if (uVar7 < (uVar5 < 1000)) {
    iVar11 = 0x14;
  }
  else {
    iVar9 = 0x14;
    do {
      uVar8 = (uint)(uVar12 >> 0x20);
      uVar7 = (uint)uVar12;
      iVar11 = iVar9 + -4;
      local_28 = iVar9;
      uVar12 = __aulldiv(uVar7,uVar8,10000,0);
      uVar5 = (uint)uVar12;
      uVar6 = uVar7 + uVar5 * -10000;
      uVar10 = (uVar6 & 0xffff) / 100;
      *(uint *)((int)local_24 + local_28 + -4) =
           CONCAT22((&DAT_10145841)[uVar6 + uVar10 * -100 & 0xffff],(&DAT_10145841)[uVar10]);
      iVar9 = iVar11;
    } while (uVar8 != 0 || -uVar8 < (uint)(9999999 < uVar7));
    if (uVar8 == 0 && (uint)(99999 < uVar7) <= -uVar8) goto LAB_10102862;
  }
  uVar7 = (uVar5 & 0xffff) / 100;
  uVar12 = (ulonglong)uVar7;
  *(undefined2 *)((int)local_24 + iVar11 + -2) = (&DAT_10145841)[uVar5 + uVar7 * -100 & 0xffff];
  iVar11 = iVar11 + -2;
LAB_10102862:
  if (uVar12 != 0) {
    *(undefined1 *)((int)local_24 + iVar11 + -1) =
         *(undefined1 *)((int)&DAT_10145841 + (int)uVar12 * 2 + 1);
    iVar11 = iVar11 + -1;
  }
  bVar4 = FUN_100946b0(puVar1,1,(char *)0x1,0,(int)local_24 + iVar11,0x14 - iVar11);
  return bVar4;
}
