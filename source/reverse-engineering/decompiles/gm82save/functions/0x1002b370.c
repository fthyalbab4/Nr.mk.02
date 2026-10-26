// rea decompile_all
// name: FUN_1002b370
// address: 0x1002b370
// body: available
// range: 0x1002b370-0x1002b4f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1002b370(undefined8 *param_1,int param_2,longlong *param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  uint local_2c;
  char local_28;
  undefined7 uStack_27;
  uint local_20;
  uint local_1c;
  int *local_18;
  uint local_14;

  local_2c = 800;
  FUN_10092830((uint *)&local_28,param_3,(int)&local_2c,(undefined **)&DAT_00000004);
  if (local_28 == -1) {
    uVar1 = *(uint *)(param_2 + 4);
    local_2c = uVar1;
    FUN_10092830((uint *)&local_28,param_3,(int)&local_2c,(undefined **)&DAT_00000004);
    if (local_28 == -1) {
      uVar3 = *(uint *)(param_2 + 8);
      local_2c = uVar3;
      local_1c = uVar1;
      FUN_10092830((uint *)&local_28,param_3,(int)&local_2c,(undefined **)&DAT_00000004);
      if (local_28 == -1) {
        local_2c = *(uint *)(param_2 + 0x10);
        local_20 = uVar3;
        FUN_10092830((uint *)&local_28,param_3,(int)&local_2c,(undefined **)&DAT_00000004);
        if (local_28 == -1) {
          local_2c = *(uint *)(param_2 + 0x18);
          FUN_10092830((uint *)&local_28,param_3,(int)&local_2c,(undefined **)&DAT_00000004);
          if (local_28 == -1) {
            local_2c = *(uint *)(param_2 + 0x1c);
            FUN_10092830((uint *)&local_28,param_3,(int)&local_2c,(undefined **)&DAT_00000004);
            if (local_28 == -1) {
              local_2c = *(uint *)(param_2 + 0x14);
              FUN_10092830((uint *)&local_28,param_3,(int)&local_2c,(undefined **)&DAT_00000004);
              if (local_28 == -1) {
                if ((local_20 != 0) && (local_1c != 0)) {
                  local_18 = *(int **)(param_2 + 0xc);
                  uVar1 = 0;
                  do {
                    local_14 = uVar1 + 1;
                    piVar2 = local_18;
                    uVar3 = local_1c;
                    do {
                      local_2c = (uint)*(byte *)(*piVar2 + uVar1);
                      FUN_10092830((uint *)&local_28,param_3,(int)&local_2c,
                                   (undefined **)&DAT_00000004);
                      if (local_28 != -1) goto LAB_1002b47e;
                      piVar2 = piVar2 + 1;
                      uVar3 = uVar3 - 1;
                    } while (uVar3 != 0);
                    uVar1 = local_14;
                  } while (local_14 != local_20);
                }
                *(undefined1 *)param_1 = 0xff;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_1002b47e:
  *param_1 = CONCAT71(uStack_27,local_28);
  return;
}
