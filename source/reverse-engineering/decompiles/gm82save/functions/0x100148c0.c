// rea decompile_all
// name: FUN_100148c0
// address: 0x100148c0
// body: available
// range: 0x100148c0-0x10014a1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100148c0(char *param_1,int *param_2,ushort *param_3)

{
  int iVar1;
  LPVOID lpMem;
  int iVar2;
  HANDLE pvVar3;
  undefined4 local_54;
  undefined8 local_50;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [2];
  int *local_18;
  undefined1 *local_14;

  FUN_10049460((undefined1 *)&local_54,param_3);
  lpMem = local_50._4_4_;
  iVar1 = (int)local_50;
  if ((char)local_54 == -1) {
    local_50 = FUN_10002420((int)local_50._4_4_,local_48);
    local_44 = (undefined4)((ulonglong)local_50 >> 0x20);
    local_54 = 10;
    local_48 = 0;
    uStack_40 = 10;
    local_3c = CONCAT31(local_3c._1_3_,1);
    uStack_38 = 0;
    local_30 = 0;
    local_2c = 0;
    local_34 = local_44;
    do {
      iVar2 = FUN_1008f0d0((int)&local_54);
      if (iVar2 == 0) {
        if (iVar1 != 0) {
          pvVar3 = GetProcessHeap();
          HeapFree(pvVar3,0,lpMem);
        }
        *param_1 = -1;
        return;
      }
      local_18 = local_20;
      local_14 = &LAB_10093d10;
      local_20[0] = iVar2;
      FUN_10092aa0((undefined8 *)&local_28,param_2,(ushort *)&DAT_10155922,(uint)&local_18);
    } while ((char)local_28 == -1);
    *param_1 = '\0';
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined4 *)(param_1 + 4) = local_28;
    if (iVar1 != 0) {
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,0,lpMem);
    }
  }
  else {
    param_1[3] = local_54._3_1_;
    *(undefined2 *)(param_1 + 1) = local_54._1_2_;
    *(undefined4 *)(param_1 + 0x20) = local_34;
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_38,local_3c);
    *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_40,local_44);
    *param_1 = (char)local_54;
    *(int *)(param_1 + 4) = (int)local_50;
    *(LPVOID *)(param_1 + 8) = local_50._4_4_;
    *(int *)(param_1 + 0xc) = local_48;
  }
  return;
}
