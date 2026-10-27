// rea decompile_all
// name: FUN_10103ec0
// address: 0x10103ec0
// body: available
// range: 0x10103ec0-0x10103fd8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10103ec0(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 local_12 [2];
  undefined2 local_10;

  if ((param_2[2] & 0x2000000) == 0) {
    if ((param_2[2] & 0x4000000) == 0) {
      bVar1 = *param_1;
      iVar3 = 3;
      bVar5 = bVar1;
      if (9 < bVar1) {
        bVar5 = (byte)((uint)bVar1 * 0x29 >> 0xc);
        local_10 = (&DAT_10145841)[(byte)(bVar1 + bVar5 * -100)];
        iVar3 = 1;
      }
      if (bVar1 == 0 || bVar5 != 0) {
        local_12[iVar3] = *(undefined1 *)((int)&DAT_10145841 + (uint)bVar5 * 2 + 1);
        iVar3 = iVar3 + -1;
      }
      puVar9 = local_12 + iVar3 + 1;
      iVar8 = 0;
      pcVar7 = (char *)0x1;
      goto LAB_10103fca;
    }
    uVar4 = (uint)*param_1;
    iVar3 = 3;
    do {
      iVar8 = iVar3;
      uVar2 = uVar4 >> 4;
      uVar6 = uVar4 & 0xf;
      uVar4 = (uint)(CONCAT11((&DAT_10149da1)[uVar6],(char)uVar2) & 0xff0f);
      iVar3 = iVar8 + -1;
      *(undefined *)((int)&local_10 + iVar8) = (&DAT_10149da1)[uVar6];
    } while ((uVar2 & 0xf) != 0);
    iVar8 = iVar8 + -4;
  }
  else {
    uVar4 = (uint)*param_1;
    iVar3 = 3;
    do {
      iVar8 = iVar3;
      uVar2 = uVar4 >> 4;
      uVar6 = uVar4 & 0xf;
      uVar4 = (uint)(CONCAT11((&DAT_10155cf4)[uVar6],(char)uVar2) & 0xff0f);
      iVar3 = iVar8 + -1;
      (&stack0xffffffeb)[iVar8] = (&DAT_10155cf4)[uVar6];
    } while ((uVar2 & 0xf) != 0);
    iVar8 = iVar8 + -9;
  }
  puVar9 = &stack0xfffffff4 + iVar8;
  iVar8 = 2;
  pcVar7 = "0x";
LAB_10103fca:
  FUN_100946b0(param_2,1,pcVar7,iVar8,puVar9,3 - iVar3);
  return;
}
