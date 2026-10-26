// rea decompile_all
// name: FUN_10049460
// address: 0x10049460
// body: available
// range: 0x10049460-0x100495b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10049460(undefined1 *param_1,ushort *param_2)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  byte *pbVar4;
  byte *lpMem;
  SIZE_T SVar5;
  byte *pbVar6;
  HANDLE hHeap;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;

  if (param_2 == (ushort *)0x0) {
    param_2 = (ushort *)0x2;
    SVar5 = 0;
  }
  else {
    SVar5 = *(SIZE_T *)(param_2 + -2);
  }
  FUN_10093310((undefined8 *)&local_20,param_2,SVar5);
  lpMem = local_1c;
  pbVar4 = local_20;
  pbVar6 = local_18;
  pbVar9 = local_20;
  pbVar10 = local_1c;
  if ((char)local_14 != '\x01') {
    if (local_18 == (byte *)0x0) {
      pbVar6 = (byte *)0x0;
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
              pbVar6 = local_14;
              pbVar9 = local_1c;
              pbVar10 = local_18;
              if (local_20 != (byte *)0xffffffff) {
                FUN_100935a0((undefined8 *)&local_20,local_1c,(SIZE_T)local_18);
                pbVar6 = local_1c;
                if (local_20 == (byte *)0xffffffff) {
                  if (local_18 == (byte *)0x0) {
                    local_20 = (byte *)0x0;
                    pbVar6 = (byte *)0x1;
                    local_18 = (byte *)0x0;
                  }
                  else {
                    pbVar6 = FUN_10107380(0,(SIZE_T)local_18);
                    if (pbVar6 == (byte *)0x0) {
                      FUN_101366bc(1);
                    /* WARNING: Does not return */
                      pcVar3 = (code *)invalidInstructionException();
                      (*pcVar3)();
                    }
                    memcpy(pbVar6,local_1c,(size_t)local_18);
                    local_20 = local_18;
                  }
                }
                if (pbVar4 != (byte *)0x0) {
                  hHeap = GetProcessHeap();
                  HeapFree(hHeap,0,lpMem);
                }
                *param_1 = 4;
                *(byte **)(param_1 + 4) = local_20;
                *(byte **)(param_1 + 8) = pbVar6;
                *(byte **)(param_1 + 0xc) = local_18;
                return;
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
  *(byte **)(param_1 + 4) = pbVar9;
  *(byte **)(param_1 + 8) = pbVar10;
  *(byte **)(param_1 + 0xc) = pbVar6;
  *param_1 = 0xff;
  return;
}
