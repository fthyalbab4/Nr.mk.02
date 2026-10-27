// rea decompile_all
// name: FUN_101107f0
// address: 0x101107f0
// body: available
// range: 0x101107f0-0x101109d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_101107f0(undefined8 *param_1,LPCWSTR param_2,uint param_3)

{
  undefined4 *puVar1;
  LPVOID pvVar2;
  HANDLE pvVar3;
  undefined4 uVar4;
  char local_290;
  uint local_28c;
  undefined4 *puStack_288;
  int local_284 [3];
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined1 local_264;
  uint local_260;
  undefined4 local_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined8 local_24c;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;

  local_278 = 0;
  local_26c = 0;
  local_268 = 0;
  local_274 = 7;
  local_270 = 0;
  local_264 = 0;
  local_284[0] = 1;
  local_284[1] = 0;
  local_284[2] = param_3 | 0x2000000;
  FUN_1010ff70((char *)&local_28c,param_2,local_284);
  if (2 < (local_28c & 0xff) - 1) {
    if ((local_28c & 0xff) != 0) {
      FUN_101109e0((undefined4 *)param_1,puStack_288);
      CloseHandle(puStack_288);
      return;
    }
    if ((puStack_288 == (undefined4 *)0x5) || (puStack_288 == (undefined4 *)&DAT_00000020)) {
      memset(&local_260,0,0x250);
      pvVar3 = FindFirstFileExW(param_2,FindExInfoBasic,&local_260,FindExSearchNameMatch,(LPVOID)0x0
                                ,0);
      if (pvVar3 != (HANDLE)0xffffffff) {
        FindClose(pvVar3);
        uVar4 = 0;
        if (((local_260 & 0x400) == 0) ||
           (uVar4 = local_23c, (param_3 == 0 & (byte)((uint)local_23c >> 0x1d) & 1) == 0)) {
          local_290 = (char)local_28c;
          *(undefined4 *)((int)param_1 + 4) = 0;
          *(undefined4 *)param_1 = 0;
          *(undefined4 *)(param_1 + 2) = 0;
          *(undefined4 *)(param_1 + 3) = 0;
          *(undefined4 *)(param_1 + 4) = local_25c;
          *(undefined4 *)((int)param_1 + 0x24) = uStack_258;
          *(undefined4 *)(param_1 + 5) = uStack_254;
          *(undefined4 *)((int)param_1 + 0x2c) = uStack_250;
          param_1[6] = local_24c;
          *(undefined4 *)(param_1 + 7) = local_240;
          *(undefined4 *)((int)param_1 + 0x3c) = local_244;
          *(undefined4 *)(param_1 + 8) = 0;
          *(uint *)((int)param_1 + 0x4c) = local_260;
          *(undefined4 *)(param_1 + 10) = uVar4;
          if (local_290 != '\x03') {
            return;
          }
          puVar1 = (undefined4 *)puStack_288[1];
          pvVar2 = (LPVOID)*puStack_288;
          if ((code *)*puVar1 != (code *)0x0) {
            (*(code *)*puVar1)(pvVar2);
          }
          if (puVar1[1] != 0) {
            FUN_10093cf0(pvVar2,puVar1[2]);
          }
          pvVar3 = GetProcessHeap();
          HeapFree(pvVar3,0,puStack_288);
          return;
        }
      }
      *(uint *)(param_1 + 1) = local_28c;
      *(undefined4 **)((int)param_1 + 0xc) = puStack_288;
      *(undefined4 *)((int)param_1 + 4) = 0xffffffff;
      *(undefined4 *)param_1 = 0xffffffff;
      return;
    }
  }
  *param_1 = 0xffffffffffffffff;
  param_1[1] = CONCAT44(puStack_288,local_28c);
  return;
}
