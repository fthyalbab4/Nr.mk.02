// rea decompile_all
// name: FUN_10100ff0
// address: 0x10100ff0
// body: available
// range: 0x10100ff0-0x10101089 inclusive
// range: 0x10101090-0x10101115 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10100ff0(undefined1 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;

  uVar11 = param_2[1];
  uVar12 = param_2[2];
  if ((uVar12 < uVar11) && (iVar2 = *param_2, *(char *)(iVar2 + uVar12) == 's')) {
    uVar10 = uVar12 + 1;
    param_2[2] = uVar10;
    if ((uVar11 <= uVar10) || (*(char *)(iVar2 + uVar10) != '_')) {
      uVar12 = 0;
      uVar6 = 0;
      while (uVar11 != uVar10) {
        cVar1 = *(char *)(iVar2 + uVar10);
        if (cVar1 == '_') {
          param_2[2] = uVar10 + 1;
          if ((uVar12 & uVar6) != 0xffffffff) {
            uVar11 = uVar12 + 1;
            uVar6 = uVar6 + (0xfffffffe < uVar12);
            if ((uVar11 & uVar6) != 0xffffffff) goto LAB_10101105;
          }
          break;
        }
        bVar9 = cVar1 - 0x30;
        if (9 < bVar9) {
          if ((byte)(cVar1 + 0x9fU) < 0x1a) {
            bVar9 = cVar1 + 0xa9;
          }
          else {
            if (0x19 < (byte)(cVar1 + 0xbfU)) break;
            bVar9 = cVar1 - 0x1d;
          }
        }
        uVar10 = uVar10 + 1;
        uVar4 = (uint)((ulonglong)uVar6 * 0x3e);
        param_2[2] = uVar10;
        uVar7 = (uint)((ulonglong)uVar12 * 0x3e >> 0x20);
        uVar5 = (uint)((ulonglong)uVar12 * 0x3e);
        uVar8 = uVar7 + uVar4;
        if (CARRY4(uVar7,uVar4) || (int)((ulonglong)uVar6 * 0x3e >> 0x20) != 0) break;
        uVar12 = uVar5 + bVar9;
        uVar4 = (uint)CARRY4(uVar5,(uint)bVar9);
        uVar6 = uVar8 + uVar4;
        if (CARRY4(uVar8,uVar4)) break;
      }
      param_1[1] = 0;
      uVar3 = 1;
      goto LAB_10101049;
    }
    uVar11 = 0;
    uVar6 = 0;
    param_2[2] = uVar12 + 2;
LAB_10101105:
    *(uint *)(param_1 + 8) = uVar11 + 1;
    *(uint *)(param_1 + 0xc) = uVar6 + (0xfffffffe < uVar11);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  uVar3 = 0;
LAB_10101049:
  *param_1 = uVar3;
  return;
}
