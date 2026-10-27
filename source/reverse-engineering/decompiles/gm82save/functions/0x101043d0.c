// rea decompile_all
// name: FUN_101043d0
// address: 0x101043d0
// body: available
// range: 0x101043d0-0x10104445 inclusive
// range: 0x10104450-0x101044cc inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_101043d0(undefined1 *param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;

  uVar3 = param_2[1];
  uVar9 = param_2[2];
  if ((uVar9 < uVar3) && (*(char *)(*param_2 + uVar9) == '_')) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    param_2[2] = uVar9 + 1;
LAB_101044c1:
    uVar2 = 0;
  }
  else {
    if (uVar3 < uVar9) {
      uVar3 = uVar9;
    }
    uVar10 = 0;
    uVar6 = 0;
    do {
      if (uVar3 == uVar9) break;
      cVar1 = *(char *)(*param_2 + uVar9);
      if (cVar1 == '_') {
        param_2[2] = uVar9 + 1;
        if ((uVar10 & uVar6) != 0xffffffff) {
          *(uint *)(param_1 + 8) = uVar10 + 1;
          *(uint *)(param_1 + 0xc) = uVar6 + (0xfffffffe < uVar10);
          goto LAB_101044c1;
        }
        break;
      }
      bVar5 = cVar1 - 0x30;
      if (9 < bVar5) {
        if ((byte)(cVar1 + 0x9fU) < 0x1a) {
          bVar5 = cVar1 + 0xa9;
        }
        else {
          if (0x19 < (byte)(cVar1 + 0xbfU)) break;
          bVar5 = cVar1 - 0x1d;
        }
      }
      uVar9 = uVar9 + 1;
      param_2[2] = uVar9;
      bVar11 = (int)((ulonglong)uVar6 * 0x3e >> 0x20) != 0;
      uVar6 = (uint)((ulonglong)uVar6 * 0x3e);
      uVar7 = (uint)((ulonglong)uVar10 * 0x3e >> 0x20);
      uVar4 = (uint)((ulonglong)uVar10 * 0x3e);
      uVar8 = uVar7 + uVar6;
      if (CARRY4(uVar7,uVar6) || bVar11) break;
      uVar6 = CONCAT11(bVar11,bVar5) & 0xff;
      uVar10 = uVar4 + uVar6;
      uVar4 = (uint)CARRY4(uVar4,uVar6);
      uVar6 = uVar8 + uVar4;
    } while (!CARRY4(uVar8,uVar4));
    uVar2 = 1;
    param_1[1] = 0;
  }
  *param_1 = uVar2;
  return;
}
