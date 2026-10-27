// rea decompile_all
// name: FUN_100cf420
// address: 0x100cf420
// body: available
// range: 0x100cf420-0x100cf5c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100cf420(int *param_1,uint *param_2,int *param_3,void *param_4,uint param_5)

{
  int iVar1;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;

  if (*param_2 == 0xffffffff) {
    iVar1 = *param_1;
    local_70 = 0;
    uStack_6c = 4;
    local_68 = 0;
    uStack_64 = 0;
    local_60 = 4;
    uStack_5c = 0;
    local_58 = 0;
    uStack_54 = 0;
    local_50 = 4;
    uStack_4c = 0;
    local_48 = 0;
    uStack_44 = 0;
    FUN_100cdef0(&local_70,iVar1);
    local_40 = 0;
    uStack_3c = 4;
    local_38 = 0;
    uStack_34 = 0;
    local_30 = 4;
    uStack_2c = 0;
    local_28 = 0;
    uStack_24 = 0;
    local_20 = 4;
    uStack_1c = 0;
    local_18 = 0;
    uStack_14 = 0;
    FUN_100cdef0(&local_40,iVar1);
    *param_2 = 0;
    param_2[1] = 4;
    param_2[2] = 0;
    *(ulonglong *)(param_2 + 5) = CONCAT44(uStack_64,local_68);
    *(ulonglong *)(param_2 + 7) = CONCAT44(uStack_5c,local_60);
    *(ulonglong *)(param_2 + 3) = CONCAT44(uStack_6c,local_70);
    *(ulonglong *)(param_2 + 9) = CONCAT44(uStack_54,local_58);
    *(ulonglong *)(param_2 + 0xb) = CONCAT44(uStack_4c,local_50);
    *(ulonglong *)(param_2 + 0xd) = CONCAT44(uStack_44,local_48);
    *(ulonglong *)(param_2 + 0x13) = CONCAT44(uStack_2c,local_30);
    *(ulonglong *)(param_2 + 0xf) = CONCAT44(uStack_3c,local_40);
    *(ulonglong *)(param_2 + 0x11) = CONCAT44(uStack_34,local_38);
    *(ulonglong *)(param_2 + 0x17) = CONCAT44(uStack_1c,local_20);
    *(ulonglong *)(param_2 + 0x15) = CONCAT44(uStack_24,local_28);
    *(ulonglong *)(param_2 + 0x19) = CONCAT44(uStack_14,local_18);
  }
  FUN_100cf5d0(param_1,param_2,param_3,param_4,param_5);
  return;
}
