// rea decompile_all
// name: FUN_1009c910
// address: 0x1009c910
// body: available
// range: 0x1009c910-0x1009ca02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_1009c910(uint *param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_20 [4];
  undefined2 uStack_1c;
  undefined1 auStack_1a [10];

  iVar4 = 10;
  local_20 = (undefined1  [4])*param_1;
  uVar2 = -(int)local_20;
  if (-(int)local_20 < 0) {
    uVar2 = (uint)local_20;
  }
  uVar3 = uVar2;
  if (999 < uVar2) {
    do {
      uVar3 = uVar2 / 10000;
      *(uint *)(local_20 + iVar4 + 2) =
           CONCAT22((&DAT_10145841)[(uVar2 % 10000) % 100],(&DAT_10145841)[(uVar2 % 10000) / 100]);
      iVar4 = iVar4 + -4;
      bVar1 = 9999999 < uVar2;
      uVar2 = uVar3;
    } while (bVar1);
  }
  uVar2 = uVar3;
  if (9 < uVar3) {
    uVar2 = (uVar3 & 0xffff) / 100;
    *(undefined2 *)((int)&uStack_1c + iVar4) = (&DAT_10145841)[uVar3 + uVar2 * -100 & 0xffff];
    iVar4 = iVar4 + -2;
  }
  if ((local_20 == (undefined1  [4])0x0) || (uVar2 != 0)) {
    *(undefined1 *)((int)&uStack_1c + iVar4 + 1) =
         *(undefined1 *)((int)&DAT_10145841 + uVar2 * 2 + 1);
    iVar4 = iVar4 + -1;
  }
  FUN_100946b0(param_2,~(uint)local_20 >> 0x1f,(char *)0x1,0,auStack_1a + iVar4,10 - iVar4);
  return;
}
