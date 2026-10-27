// rea decompile_all
// name: FUN_100953a0
// address: 0x100953a0
// body: available
// range: 0x100953a0-0x10095485 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_100953a0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;

  uVar1 = param_1 << 0xb;
  iVar3 = (uint)(0x10eaa < param_1) * 0x10;
  iVar6 = iVar3 + 8;
  if (uVar1 < (uint)(*(int *)(&DAT_10146238 + (uint)(0x10eaa < param_1) * 0x40) << 0xb)) {
    iVar6 = iVar3;
  }
  iVar3 = iVar6 + 4;
  if (uVar1 < (uint)(*(int *)(&DAT_10146228 + iVar6 * 4) << 0xb)) {
    iVar3 = iVar6;
  }
  iVar6 = iVar3 + 2;
  if (uVar1 < (uint)(*(int *)(&DAT_10146220 + iVar3 * 4) << 0xb)) {
    iVar6 = iVar3;
  }
  iVar3 = iVar6 + 1;
  if (uVar1 < (uint)(*(int *)(&DAT_1014621c + iVar6 * 4) << 0xb)) {
    iVar3 = iVar6;
  }
  iVar6 = iVar3 + 1;
  if (uVar1 < (uint)(*(int *)(&DAT_1014621c + iVar3 * 4) << 0xb)) {
    iVar6 = iVar3;
  }
  uVar4 = (uint)(*(int *)(&DAT_10146218 + iVar6 * 4) << 0xb == uVar1) + iVar6 +
          (uint)((uint)(*(int *)(&DAT_10146218 + iVar6 * 4) << 0xb) < uVar1);
  uVar1 = 0x2ff;
  uVar2 = *(uint *)(&DAT_10146218 + uVar4 * 4) >> 0x15;
  if ((uVar4 < 0x20) && (uVar1 = *(uint *)(&DAT_1014621c + uVar4 * 4) >> 0x15, uVar4 == 0)) {
    uVar4 = 0;
    iVar6 = ~uVar2 + uVar1;
  }
  else {
    uVar4 = *(uint *)(&DAT_10146214 + uVar4 * 4) & 0x1fffff;
    iVar6 = ~uVar2 + uVar1;
  }
  if (iVar6 != 0) {
    uVar5 = 0;
    do {
      uVar5 = (byte)(&DAT_1014479b)[uVar2] + uVar5;
      if (param_1 - uVar4 < uVar5) break;
      uVar2 = uVar2 + 1;
    } while (uVar1 - 1 != uVar2);
  }
  return uVar2 & 0xffffff01;
}
