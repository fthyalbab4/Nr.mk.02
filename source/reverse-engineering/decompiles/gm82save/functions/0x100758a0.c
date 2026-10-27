// rea decompile_all
// name: FUN_100758a0
// address: 0x100758a0
// body: available
// range: 0x100758a0-0x100759bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100758a0(char *param_1,void *param_2,SIZE_T param_3,ushort *param_4)

{
  undefined8 local_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined8 local_3c;
  undefined4 local_34;
  int local_30 [4];
  undefined4 local_20;
  undefined7 uStack_c;

  FUN_100759c0((undefined1 *)&local_54,param_2,param_3);
  if ((char)local_54 != -1) {
    uStack_c = (undefined7)(CONCAT44(uStack_40,local_44) >> 8);
    *(undefined8 *)(param_1 + 0x18) = local_3c;
    *(undefined4 *)(param_1 + 0x20) = local_34;
    *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_c,(undefined1)local_44);
    *(ulonglong *)(param_1 + 1) =
         CONCAT17((undefined1)uStack_4c,CONCAT43(local_54._4_4_,local_54._1_3_));
    *(ulonglong *)(param_1 + 9) = CONCAT17((undefined1)local_44,CONCAT43(uStack_48,uStack_4c._1_3_))
    ;
    *param_1 = (char)local_54;
    return;
  }
  local_20 = uStack_40;
  FUN_100148c0((char *)&local_54,local_30,param_4);
  if ((char)local_54 == -1) {
    FUN_10053090(&local_54,(int)local_30);
    if (((char)local_54 == -1) || ((char)local_54 == -1)) {
      *param_1 = -1;
    }
    else {
      *param_1 = '\0';
      *(undefined4 *)(param_1 + 4) = (undefined4)local_54;
      *(undefined4 *)(param_1 + 8) = local_54._4_4_;
    }
  }
  else {
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_40,local_44);
    *(undefined4 *)(param_1 + 0x20) = local_34;
    *(undefined8 *)(param_1 + 0x18) = local_3c;
    *(ulonglong *)param_1 = CONCAT44(local_54._4_4_,(undefined4)local_54);
    *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_48,uStack_4c);
  }
  FUN_10005aa0(local_30);
  return;
}
