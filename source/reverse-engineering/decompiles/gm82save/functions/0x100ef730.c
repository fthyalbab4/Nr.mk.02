// rea decompile_all
// name: FUN_100ef730
// address: 0x100ef730
// body: available
// range: 0x100ef730-0x100ef862 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100ef730(undefined8 *param_1,uint *param_2,int param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  uint local_30;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined **local_18;
  undefined4 local_14;
  undefined4 local_10;

  if ((param_3 == 1) && (local_30 = *param_2, local_30 == param_2[1])) {
    uVar2 = (undefined1)local_30;
    if (local_30 < 0x80) {
      local_30 = local_30 & 0xff;
      puVar5 = (undefined1 *)0x1;
    }
    else {
      uVar6 = (undefined1)(local_30 >> 6);
      if (local_30 < 0x800) {
        puVar5 = (undefined1 *)0x2;
        local_30 = (ushort)(CONCAT11(uVar2,uVar6) | 0xc0) & 0xffff3fff | 0x8000;
      }
      else {
        uVar3 = (undefined1)(local_30 >> 0xc);
        if (local_30 < 0x10000) {
          local_30 = (CONCAT12(uVar2,CONCAT11(uVar6,uVar3)) & 0xff3fff | 0x80e0) & 0xff3fffff |
                     0x800000;
          puVar5 = (undefined1 *)0x3;
        }
        else {
          puVar5 = &DAT_00000004;
          local_30 = CONCAT13(uVar2,CONCAT12(uVar6,CONCAT11(uVar3,(char)(local_30 >> 0x12)))) &
                     0x3f3f3fff | 0x808080f0;
        }
      }
    }
    local_1c = &local_28;
    local_28 = 0;
    uStack_24 = 1;
    local_14 = 0x60000020;
    local_10 = 0;
    local_20 = 0;
    local_18 = &PTR_FUN_10155990;
    cVar4 = FUN_10093f00(&local_1c,(undefined1 (*) [16])&local_30,puVar5);
    if (cVar4 != '\0') {
      FUN_10136c40("a Display implementation returned an error unexpectedlyC:\\Users\\runneradmin\\.rustup\\toolchains\\nightly-x86_64-pc-windows-msvc\\lib\\rustlib\\src\\rust\\library\\alloc\\src\\string.rs"
                   ,0x37,&local_29,&DAT_101559a8,&DAT_10155a68);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *(undefined4 *)(param_1 + 1) = local_20;
    *param_1 = CONCAT44(uStack_24,local_28);
  }
  else {
    *(undefined4 *)param_1 = 0xffffffff;
  }
  return;
}
