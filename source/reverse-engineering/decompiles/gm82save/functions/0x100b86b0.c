// rea decompile_all
// name: FUN_100b86b0
// address: 0x100b86b0
// body: available
// range: 0x100b86b0-0x100b89a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100b8779) */
/* WARNING: Removing unreachable block (ram,0x100b880d) */
/* WARNING: Removing unreachable block (ram,0x100b88fd) */
/* WARNING: Removing unreachable block (ram,0x100b87d8) */
/* WARNING: Removing unreachable block (ram,0x100b8817) */
/* WARNING: Removing unreachable block (ram,0x100b881b) */
/* WARNING: Removing unreachable block (ram,0x100b8792) */
/* WARNING: Removing unreachable block (ram,0x100b892b) */
/* WARNING: Removing unreachable block (ram,0x100b8972) */
/* WARNING: Removing unreachable block (ram,0x100b8825) */
/* WARNING: Removing unreachable block (ram,0x100b8742) */

void __fastcall FUN_100b86b0(undefined1 *param_1,int param_2)

{
  uint *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;

  if (*(int *)(param_2 + 0x60) == -1) {
    FUN_10136b20(&PTR_s_C__Users_runneradmin__cargo_regi_101504cc);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (*(char *)(param_2 + 0x1a8) == '\0') {
    if (*(int *)(param_2 + 0x68) == 0) {
      if (*(uint *)(param_2 + 0x18) < 4) {
        *param_1 = 0x22;
        param_1[4] = 2;
        uVar4 = 0xff;
        param_1[7] = 0;
        *(undefined2 *)(param_1 + 5) = 0;
        *(undefined ***)(param_1 + 8) = &PTR_DAT_101511fc;
      }
      else {
        puVar1 = *(uint **)(param_2 + 0x14);
        uVar11 = *(uint *)(param_2 + 0x18) & 0xfffffffc;
        uVar3 = *puVar1;
        uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
        if (uVar11 != 4) {
          uVar10 = puVar1[1];
          uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 |
                   uVar10 << 0x18;
          if (uVar11 != 8) {
            uVar5 = puVar1[2];
            uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
            if (uVar11 != 0xc) {
              uVar6 = puVar1[3];
              uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                      uVar6 << 0x18;
              if (uVar11 != 0x10) {
                uVar7 = puVar1[4];
                uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                        uVar7 << 0x18;
                if (uVar11 != 0x14) {
                  uVar8 = puVar1[5];
                  uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                          uVar8 << 0x18;
                  if (uVar11 != 0x18) {
                    uVar9 = puVar1[6];
                    uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                            uVar9 << 0x18;
                    if (uVar11 != 0x1c) {
                      uVar11 = puVar1[7];
                      uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 |
                               uVar11 << 0x18;
                      *(undefined4 *)(param_2 + 0x68) = 1;
                      *(uint *)(param_2 + 0x6c) = uVar3;
                      *(uint *)(param_2 + 0x70) = uVar10;
                      *(uint *)(param_2 + 0x74) = uVar5;
                      *(uint *)(param_2 + 0x78) = uVar6;
                      *(uint *)(param_2 + 0x7c) = uVar7;
                      *(uint *)(param_2 + 0x80) = uVar8;
                      *(uint *)(param_2 + 0x84) = uVar9;
                      *(uint *)(param_2 + 0x88) = uVar11;
                      uVar4 = 2;
                      if (*(char *)(param_2 + 0x19e) == -1) {
                        *(undefined4 *)(param_2 + 0xa0) = 1;
                        *(uint *)(param_2 + 0xa4) = uVar3;
                        *(uint *)(param_2 + 0xa8) = uVar10;
                        *(uint *)(param_2 + 0xac) = uVar5;
                        *(uint *)(param_2 + 0xb0) = uVar6;
                        *(uint *)(param_2 + 0xb4) = uVar7;
                        *(uint *)(param_2 + 0xb8) = uVar8;
                        *(uint *)(param_2 + 0xbc) = uVar9;
                        *(uint *)(param_2 + 0xc0) = uVar11;
                      }
                      goto LAB_100b86e1;
                    }
                  }
                }
              }
            }
          }
        }
        *param_1 = 0x22;
        param_1[4] = 2;
        *(undefined2 *)(param_1 + 5) = 0;
        param_1[7] = 0;
        uVar4 = 0xff;
        *(undefined ***)(param_1 + 8) = &PTR_DAT_101511fc;
      }
      goto LAB_100b86e1;
    }
    *param_1 = 9;
  }
  else {
    *param_1 = 5;
  }
  *(undefined4 *)(param_1 + 1) = 0x4d524863;
  uVar4 = 0xff;
LAB_100b86e1:
  param_1[0x19] = uVar4;
  return;
}
