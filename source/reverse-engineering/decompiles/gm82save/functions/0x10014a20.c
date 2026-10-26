// rea decompile_all
// name: FUN_10014a20
// address: 0x10014a20
// body: available
// range: 0x10014a20-0x10014b0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10014a20(undefined8 *param_1,int param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  uint local_2c;
  undefined4 uStack_28;
  uint local_24;
  undefined4 uStack_20;
  uint local_1c;
  uint local_18;
  undefined **local_14;

  local_24 = 800;
  FUN_10092830(&local_2c,param_3,(int)&local_24,(undefined **)&DAT_00000004);
  if ((char)local_2c == -1) {
    uVar1 = *(uint *)(param_2 + 4);
    local_24 = uVar1;
    FUN_10092830(&local_2c,param_3,(int)&local_24,(undefined **)&DAT_00000004);
    if ((char)local_2c == -1) {
      local_24 = *(uint *)(param_2 + 8);
      local_1c = local_24;
      local_18 = uVar1;
      FUN_10092830(&local_2c,param_3,(int)&local_24,(undefined **)&DAT_00000004);
      if ((char)local_2c == -1) {
        ppuVar3 = (undefined **)(local_18 * local_1c * 4);
        if (ppuVar3 == (undefined **)0x0) {
LAB_10014b07:
          *(undefined1 *)param_1 = 0xff;
          return;
        }
        iVar2 = *(int *)(param_2 + 0xc);
        local_14 = ppuVar3;
        FUN_10092830(&local_2c,param_3,(int)&local_14,(undefined **)&DAT_00000004);
        if ((char)local_2c == -1) {
          FUN_10092830(&local_24,param_3,iVar2,ppuVar3);
          local_2c = local_24 & 0xff;
        }
        else {
          uStack_20 = uStack_28;
          local_24 = local_2c;
        }
        if ((char)local_2c == -1) goto LAB_10014b07;
        uVar4 = CONCAT44(uStack_20,local_24);
        goto LAB_10014a99;
      }
    }
  }
  uVar4 = CONCAT44(uStack_28,local_2c);
LAB_10014a99:
  *param_1 = uVar4;
  return;
}
