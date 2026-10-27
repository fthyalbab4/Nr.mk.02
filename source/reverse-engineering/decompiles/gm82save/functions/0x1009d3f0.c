// rea decompile_all
// name: FUN_1009d3f0
// address: 0x1009d3f0
// body: available
// range: 0x1009d3f0-0x1009d52e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_1009d3f0(ulonglong *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 local_28;
  undefined1 auStack_24 [20];

  iVar7 = 0x14;
  uVar1 = (uint)*param_1;
  uVar2 = *(uint *)((int)param_1 + 4);
  uVar3 = *param_1;
  uVar10 = *param_1;
  iVar6 = iVar7;
  if ((uVar1 < 1000) <= uVar2) {
    do {
      uVar5 = (uint)(uVar3 >> 0x20);
      uVar9 = (uint)uVar3;
      iVar7 = iVar6 + -4;
      local_28 = iVar6;
      uVar10 = __aulldiv(uVar9,uVar5,10000,0);
      uVar4 = uVar9 + (int)uVar10 * -10000;
      uVar8 = (uVar4 & 0xffff) / 100;
      *(uint *)(auStack_24 + local_28 + -4) =
           CONCAT22((&DAT_10145841)[uVar4 + uVar8 * -100 & 0xffff],(&DAT_10145841)[uVar8]);
      iVar6 = iVar7;
      uVar3 = uVar10;
    } while (uVar5 != 0 || -uVar5 < (uint)(9999999 < uVar9));
  }
  iVar6 = (int)(uVar10 >> 0x20);
  uVar4 = (uint)uVar10;
  if (iVar6 == 0 && (uint)(9 < uVar4) <= (uint)-iVar6) {
    uVar5 = uVar4;
    if (uVar1 != 0 || uVar2 != 0) goto LAB_1009d4fb;
  }
  else {
    uVar5 = (uVar4 & 0xffff) / 100;
    uVar10 = (ulonglong)uVar5;
    *(undefined2 *)(auStack_24 + iVar7 + -2) = (&DAT_10145841)[uVar4 + uVar5 * -100 & 0xffff];
    iVar7 = iVar7 + -2;
    if (uVar1 != 0 || uVar2 != 0) {
LAB_1009d4fb:
      uVar5 = (uint)uVar10;
      if (uVar10 == 0) goto LAB_1009d50c;
    }
  }
  auStack_24[iVar7 + -1] = *(undefined1 *)((int)&DAT_10145841 + uVar5 * 2 + 1);
  iVar7 = iVar7 + -1;
LAB_1009d50c:
  FUN_100946b0(param_2,1,(char *)0x1,0,auStack_24 + iVar7,0x14 - iVar7);
  return;
}
