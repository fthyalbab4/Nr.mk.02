// rea decompile_all
// name: FUN_100803b0
// address: 0x100803b0
// body: available
// range: 0x100803b0-0x100804c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100803b0(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  SIZE_T SVar5;
  HANDLE hHeap;
  ushort *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;

  if (param_4 < param_3 && -1 < (int)param_4) {
    puVar6 = *(ushort **)(param_2 + param_4 * 4);
    if (puVar6 == (ushort *)0x0) {
      puVar6 = (ushort *)0x2;
      SVar5 = 0;
    }
    else {
      SVar5 = *(SIZE_T *)(puVar6 + -2);
    }
    FUN_10093310((undefined8 *)&local_20,puVar6,SVar5);
    pbVar3 = local_20;
    pbVar4 = local_1c;
    if ((char)local_14 != '\x01') {
      if (local_18 == (byte *)0x0) {
        local_18 = (byte *)0x0;
      }
      else {
        pbVar1 = local_1c + (int)local_18;
        pbVar8 = local_1c;
        do {
          bVar2 = *pbVar8;
          pbVar7 = pbVar8 + 1;
          if ((char)bVar2 < '\0') {
            if (bVar2 < 0xe0) {
              if (pbVar7 != pbVar1) {
                pbVar7 = pbVar8 + 2;
              }
            }
            else if (bVar2 == 0xed) {
              if ((pbVar7 == pbVar1) || (pbVar8 + 2 == pbVar1)) break;
              if (0x9f < pbVar8[1]) {
                pbVar3 = local_1c;
                pbVar4 = local_18;
                local_18 = local_14;
                if (local_20 != (byte *)0xffffffff) {
                  if (local_20 != (byte *)0x0) {
                    hHeap = GetProcessHeap();
                    HeapFree(hHeap,0,local_1c);
                  }
                  goto LAB_100804ae;
                }
                break;
              }
              pbVar7 = pbVar8 + 3;
            }
            else {
              pbVar8 = pbVar8 + 2;
              if (pbVar7 == pbVar1) {
                pbVar8 = pbVar7;
              }
              pbVar7 = pbVar8 + (pbVar8 != pbVar1);
              if (0xef < bVar2) {
                pbVar7 = pbVar7 + (pbVar7 != pbVar1);
              }
            }
          }
          pbVar8 = pbVar7;
        } while (pbVar7 != pbVar1);
      }
    }
    if (pbVar3 != (byte *)0xffffffff) {
      *param_1 = pbVar3;
      param_1[1] = pbVar4;
      goto LAB_100804bd;
    }
  }
LAB_100804ae:
  local_18 = (byte *)0x0;
  *param_1 = 0;
  param_1[1] = 1;
LAB_100804bd:
  param_1[2] = local_18;
  return;
}
