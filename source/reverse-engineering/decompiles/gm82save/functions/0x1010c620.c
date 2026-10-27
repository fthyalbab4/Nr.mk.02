// rea decompile_all
// name: FUN_1010c620
// address: 0x1010c620
// body: available
// range: 0x1010c620-0x1010c775 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1010c620(undefined8 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  short *lpMem;
  uint uVar2;
  int iVar3;
  HANDLE hHeap;
  short *psVar4;
  uint uVar5;
  uint local_2c;
  short *psStack_28;
  uint local_24;
  undefined8 *local_20;
  int local_1c;
  int local_18;
  undefined2 local_14;

  uVar2 = param_3 * 2 + 2;
  uVar5 = param_3 + 1;
  if ((int)uVar5 < 0 || 0x7ffffffe < uVar2) {
    FUN_101367b0();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (uVar2 == 0) {
    psStack_28 = (short *)0x2;
    uVar5 = 0;
  }
  else {
    local_20 = param_1;
    psStack_28 = FUN_10107380(0,uVar2);
    param_1 = local_20;
    if (psStack_28 == (short *)0x0) {
      FUN_101366bc(2);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  local_18 = param_3 + param_2;
  local_24 = 0;
  local_14 = 0;
  local_2c = uVar5;
  local_1c = param_2;
  FUN_1010c780(&local_2c,&local_1c);
  uVar5 = local_24;
  lpMem = psStack_28;
  psVar4 = psStack_28;
  for (uVar2 = local_24; 7 < uVar2; uVar2 = uVar2 - 8) {
    if (((((*psVar4 == 0) || (psVar4[1] == 0)) || (psVar4[2] == 0)) ||
        ((psVar4[3] == 0 || (psVar4[4] == 0)))) ||
       ((psVar4[5] == 0 || ((psVar4[6] == 0 || (psVar4[7] == 0)))))) goto LAB_1010c72c;
    psVar4 = psVar4 + 8;
  }
  if (uVar2 != 0) {
    iVar3 = uVar2 * 2;
    do {
      if (*psVar4 == 0) {
LAB_1010c72c:
        *(undefined1 *)((int)param_1 + 4) = 2;
        *(undefined ***)(param_1 + 1) = &PTR_DAT_101586dc;
        *(undefined4 *)param_1 = 0xffffffff;
        if (local_2c == 0) {
          return;
        }
        hHeap = GetProcessHeap();
        HeapFree(hHeap,0,lpMem);
        return;
      }
      psVar4 = psVar4 + 1;
      iVar3 = iVar3 + -2;
    } while (iVar3 != 0);
  }
  if (local_24 == local_2c) {
    FUN_1013c000(&local_2c);
  }
  psStack_28[uVar5] = 0;
  *(uint *)(param_1 + 1) = uVar5 + 1;
  *param_1 = CONCAT44(psStack_28,local_2c);
  return;
}
