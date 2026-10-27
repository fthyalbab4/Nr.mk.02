// rea decompile_all
// name: FUN_100bbce0
// address: 0x100bbce0
// body: available
// range: 0x100bbce0-0x100bbdc9 inclusive
// range: 0x100bbdd0-0x100bbe5a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_100bbce0(int param_1,undefined1 *param_2,uint param_3,undefined4 *param_4,uint param_5,
            int param_6)

{
  undefined1 *puVar1;
  byte bVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  int iVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;

  bVar2 = *(byte *)(param_6 + 0x140);
  uVar10 = (uint)bVar2;
  if (((bVar2 & bVar2 - 1) != 0) || ((bVar2 & 0xf) == 0)) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_101500c8);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  bVar5 = 0;
  for (uVar8 = uVar10; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
    bVar5 = bVar5 + 1;
  }
  lVar3 = (ulonglong)((8U >> (bVar5 & 0x1f)) << 2) * (ulonglong)param_3;
  if (param_5 <= (uint)lVar3 || (int)((ulonglong)lVar3 >> 0x20) != 0) {
    uVar8 = param_5 & 0x7ffffffc;
    if (uVar10 == 8) {
      if ((param_3 != 0) && (uVar8 != 0)) {
        iVar6 = -uVar8;
        iVar9 = 0;
        do {
          iVar6 = iVar6 + 4;
          param_4[iVar9] = *(undefined4 *)(param_1 + (uint)(byte)param_2[iVar9] * 4);
          if (param_3 - 1 == iVar9) {
            return;
          }
          iVar9 = iVar9 + 1;
        } while (iVar6 != 0);
      }
    }
    else {
      iVar6 = -1;
      if (uVar8 != 0) {
        puVar1 = param_2 + param_3;
        uVar7 = 0;
        iVar9 = -(param_5 & 0xfffffffc);
        do {
          iVar11 = iVar6;
          if (iVar6 < 0) {
            if (param_2 == puVar1) {
              FUN_10136c10("input for unpack bits is not empty",0x22,
                           &PTR_s_C__Users_runneradmin__cargo_regi_10150084);
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            uVar7 = *param_2;
            param_2 = param_2 + 1;
            iVar11 = 8 - uVar10;
          }
          iVar6 = iVar11 - uVar10;
          uVar8 = CONCAT11(uVar7,(char)iVar11) & 0xffffff07;
          *param_4 = *(undefined4 *)
                      (param_1 +
                      (uint)(byte)((byte)(uVar8 >> 8) >> (sbyte)uVar8 & ~(byte)(-1 << (bVar2 & 0xf))
                                  ) * 4);
          param_4 = param_4 + 1;
          iVar9 = iVar9 + 4;
        } while (iVar9 != 0);
      }
    }
    return;
  }
  FUN_10136b40(&PTR_s_C__Users_runneradmin__cargo_regi_10150050);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}
