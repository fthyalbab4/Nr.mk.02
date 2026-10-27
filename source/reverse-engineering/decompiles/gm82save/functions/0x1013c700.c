// rea decompile_all
// name: FUN_1013c700
// address: 0x1013c700
// body: available
// range: 0x1013c700-0x1013c83d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall
FUN_1013c700(undefined8 *param_1,int param_2,int param_3,char *param_4,int param_5,byte param_6)

{
  undefined2 *lpMem;
  uint uVar1;
  HANDLE hHeap;
  int iVar2;
  uint local_2c;
  undefined2 *puStack_28;
  uint local_24;
  undefined8 *local_20;
  int local_1c;
  int local_18;
  undefined2 local_14;

  local_2c = 0;
  puStack_28 = (undefined2 *)0x2;
  local_24 = 0;
  local_20 = param_1;
  FUN_1013c000(&local_2c);
  local_18 = param_3 + param_2;
  *puStack_28 = 0x22;
  local_24 = 1;
  local_14 = 0;
  local_1c = param_2;
  FUN_1010c780(&local_2c,&local_1c);
  uVar1 = local_24;
  if (local_24 == local_2c) {
    FUN_1013c000(&local_2c);
  }
  puStack_28[uVar1] = 0x22;
  local_24 = uVar1 + 1;
  if (param_5 != 0) {
    iVar2 = param_5 * 0x14;
    do {
      uVar1 = local_24;
      if (local_24 == local_2c) {
        FUN_1013c000(&local_2c);
      }
      puStack_28[uVar1] = 0x20;
      local_24 = uVar1 + 1;
      FUN_10119fc0((undefined1 *)&local_1c,&local_2c,param_4,param_6);
      lpMem = puStack_28;
      if ((char)local_1c != -1) {
        *(int *)(local_20 + 1) = local_18;
        *(int *)((int)local_20 + 4) = local_1c;
        *(undefined4 *)local_20 = 0xffffffff;
        if (local_2c == 0) {
          return;
        }
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,lpMem);
        return;
      }
      param_4 = param_4 + 0x14;
      iVar2 = iVar2 + -0x14;
    } while (iVar2 != 0);
  }
  *(uint *)(local_20 + 1) = local_24;
  *local_20 = CONCAT44(puStack_28,local_2c);
  return;
}
