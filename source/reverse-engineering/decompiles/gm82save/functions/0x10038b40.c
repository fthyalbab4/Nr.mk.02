// rea decompile_all
// name: FUN_10038b40
// address: 0x10038b40
// body: available
// range: 0x10038b40-0x10038c9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10038b40(int *param_1,ushort *param_2)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  byte *pbVar4;
  byte *lpMem;
  SIZE_T SVar5;
  LPVOID _Dst;
  HANDLE hHeap;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *local_20;
  byte *pbStack_1c;
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
  lpMem = pbStack_1c;
  pbVar4 = local_20;
  pbVar9 = local_18;
  pbVar8 = local_20;
  pbVar10 = pbStack_1c;
  if ((char)local_14 != '\x01') {
    if (local_18 == (byte *)0x0) {
      pbVar9 = (byte *)0x0;
    }
    else {
      pbVar1 = pbStack_1c + (int)local_18;
      pbVar7 = pbStack_1c;
      do {
        bVar2 = *pbVar7;
        pbVar6 = pbVar7 + 1;
        if ((char)bVar2 < '\0') {
          if (bVar2 < 0xe0) {
            if (pbVar6 != pbVar1) {
              pbVar6 = pbVar7 + 2;
            }
          }
          else if (bVar2 == 0xed) {
            if ((pbVar6 == pbVar1) || (pbVar7 + 2 == pbVar1)) break;
            if (0x9f < pbVar7[1]) {
              pbVar9 = local_14;
              pbVar8 = pbStack_1c;
              pbVar10 = local_18;
              if (local_20 != (byte *)0xffffffff) {
                FUN_100935a0((undefined8 *)&local_20,pbStack_1c,(SIZE_T)local_18);
                if (local_20 == (byte *)0xffffffff) {
                  if (local_18 == (byte *)0x0) {
                    _Dst = (LPVOID)0x1;
                  }
                  else {
                    _Dst = FUN_10107380(0,(SIZE_T)local_18);
                    if (_Dst == (LPVOID)0x0) {
                      FUN_101366bc(1);
                    /* WARNING: Does not return */
                      pcVar3 = (code *)invalidInstructionException();
                      (*pcVar3)();
                    }
                    memcpy(_Dst,pbStack_1c,(size_t)local_18);
                  }
                  *param_1 = (int)local_18;
                  param_1[1] = (int)_Dst;
                  param_1[2] = (int)local_18;
                }
                else {
                  param_1[2] = (int)local_18;
                  *(ulonglong *)param_1 = CONCAT44(pbStack_1c,local_20);
                }
                if (pbVar4 == (byte *)0x0) {
                  return;
                }
                hHeap = GetProcessHeap();
                HeapFree(hHeap,0,lpMem);
                return;
              }
              break;
            }
            pbVar6 = pbVar7 + 3;
          }
          else {
            pbVar7 = pbVar7 + 2;
            if (pbVar6 == pbVar1) {
              pbVar7 = pbVar6;
            }
            pbVar6 = pbVar7 + (pbVar7 != pbVar1);
            if (0xef < bVar2) {
              pbVar6 = pbVar6 + (pbVar6 != pbVar1);
            }
          }
        }
        pbVar7 = pbVar6;
      } while (pbVar6 != pbVar1);
    }
  }
  *param_1 = (int)pbVar8;
  param_1[1] = (int)pbVar10;
  param_1[2] = (int)pbVar9;
  return;
}
