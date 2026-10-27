// rea decompile_all
// name: FUN_10107a80
// address: 0x10107a80
// body: available
// range: 0x10107a80-0x10107dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10107a80(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  char cVar5;
  char *pcVar6;
  DWORD DVar7;
  ulonglong *puVar8;
  LPVOID pvVar9;
  LPVOID pvVar10;
  undefined4 uVar11;
  HANDLE pvVar12;
  undefined4 *puVar13;
  uint local_26c;
  int *local_268;
  undefined1 **local_264;
  char **local_260;
  int *local_25c;
  ulonglong *local_258;
  code *local_254;
  undefined4 local_250;
  undefined1 *local_24c;
  undefined4 local_248;
  undefined1 *local_244;
  ulonglong local_240;
  LPVOID local_238;
  int *local_234;
  char *local_230;
  undefined4 *local_22c;
  undefined1 *local_228;
  undefined4 local_224;
  uint local_220;
  undefined4 local_21c;
  undefined1 local_214 [516];

  pcVar6 = (char *)0x0;
  puVar13 = param_1;
  if (param_2 != (int *)0x0) {
    puVar13 = (undefined4 *)*param_2;
    piVar1 = puVar13 + 4;
    if ((char *)*piVar1 != (char *)0x0) {
      puVar13 = (undefined4 *)(puVar13[5] + -1);
      pcVar6 = (char *)*piVar1;
    }
  }
  local_230 = "<unnamed>";
  if (pcVar6 != (char *)0x0) {
    local_230 = pcVar6;
  }
  local_22c = (undefined4 *)0x9;
  if (pcVar6 != (char *)0x0) {
    local_22c = puVar13;
  }
  DVar7 = GetCurrentThreadId();
  if (DVar7 == 0) {
    if (DAT_10163350 == 0) {
      DVar7 = FUN_1013be20(&DAT_10163350);
      puVar8 = TlsGetValue(DVar7);
    }
    else {
      puVar8 = TlsGetValue(DAT_10163350 - 1);
    }
    if (puVar8 < (ulonglong *)0x3) {
      if (DAT_10163364 == 0) {
        DVar7 = FUN_1013be20(&DAT_10163364);
      }
      else {
        DVar7 = DAT_10163364 - 1;
      }
      pvVar9 = TlsGetValue(DVar7);
      if (DAT_10163374 == 0) {
        DVar7 = FUN_1013be20(&DAT_10163374);
      }
      else {
        DVar7 = DAT_10163374 - 1;
      }
      pvVar10 = TlsGetValue(DVar7);
      if (pvVar9 == (LPVOID)0x0 && pvVar10 == (LPVOID)0x0) {
        local_240 = FUN_1013c050();
      }
      else {
        local_240 = CONCAT44(pvVar10,pvVar9);
      }
    }
    else {
      local_240 = *puVar8;
    }
  }
  else {
    local_240 = (ulonglong)DVar7;
  }
  memset(local_214,0,0x200);
  local_260 = &local_230;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  local_224 = 0x200;
  local_21c = 0;
  local_220 = 0;
  local_264 = &local_228;
  local_25c = (int *)&LAB_10093d10;
  local_258 = &local_240;
  local_26c = 0xff;
  local_254 = FUN_1009d3f0;
  local_24c = &LAB_10107020;
  local_244 = &LAB_10093d10;
  local_250 = uVar2;
  local_248 = uVar3;
  local_228 = local_214;
  uVar11 = FUN_10093d70(&local_26c,0x10156900,(ushort *)&DAT_10156c3d,(uint)&local_260);
  if ((char)uVar11 == '\0') {
    if ((char)local_26c == '\x03') {
      puVar13 = (undefined4 *)local_268[1];
      pvVar9 = (LPVOID)*local_268;
      if ((code *)*puVar13 != (code *)0x0) {
        (*(code *)*puVar13)(pvVar9);
      }
      if (puVar13[1] != 0) {
        if (8 < (uint)puVar13[2]) {
          pvVar9 = *(LPVOID *)((int)pvVar9 + -4);
        }
        pvVar12 = GetProcessHeap();
        HeapFree(pvVar12,0,pvVar9);
      }
      pvVar12 = GetProcessHeap();
      HeapFree(pvVar12,0,local_268);
    }
LAB_10107c98:
    if (0x200 < local_220) {
      FUN_10136a50(0,local_220,0x200,&PTR_s_C__Users_runneradmin__rustup_too_10156ce8);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    (**(code **)(param_1[3] + 0x1c))(&local_260,param_1[2],local_214,local_220);
    piVar1 = local_25c;
    cVar5 = (char)local_260;
  }
  else {
    if ((char)local_26c == -1) {
      FUN_101369c0("a formatting trait implementation returned an error when the underlying stream did not"
                   ,0xad,&PTR_s_C__Users_runneradmin__rustup_too_101568f0);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if ((local_26c & 0xff) == 3) {
      puVar13 = (undefined4 *)local_268[1];
      pvVar9 = (LPVOID)*local_268;
      local_234 = local_268;
      if ((code *)*puVar13 != (code *)0x0) {
        local_238 = pvVar9;
        (*(code *)*puVar13)(pvVar9);
        pvVar9 = local_238;
      }
      if (puVar13[1] != 0) {
        if (8 < (uint)puVar13[2]) {
          pvVar9 = *(LPVOID *)((int)pvVar9 + -4);
        }
        pvVar12 = GetProcessHeap();
        HeapFree(pvVar12,0,pvVar9);
      }
      pvVar12 = GetProcessHeap();
      HeapFree(pvVar12,0,local_234);
    }
    else if ((local_26c & 0xff) == 0xff) goto LAB_10107c98;
    local_260 = &local_230;
    local_258 = &local_240;
    local_25c = (int *)&LAB_10093d10;
    local_254 = FUN_1009d3f0;
    local_24c = &LAB_10107020;
    local_244 = &LAB_10093d10;
    local_250 = uVar2;
    local_248 = uVar3;
    (**(code **)(param_1[3] + 0x24))(&local_26c,param_1[2],&DAT_10156c3d,&local_260);
    piVar1 = local_268;
    cVar5 = (char)local_26c;
  }
  if (cVar5 == '\x03') {
    puVar13 = (undefined4 *)piVar1[1];
    pvVar9 = (LPVOID)*piVar1;
    if ((code *)*puVar13 != (code *)0x0) {
      (*(code *)*puVar13)(pvVar9);
    }
    if (puVar13[1] != 0) {
      if (8 < (uint)puVar13[2]) {
        pvVar9 = *(LPVOID *)((int)pvVar9 + -4);
      }
      pvVar12 = GetProcessHeap();
      HeapFree(pvVar12,0,pvVar9);
    }
    pvVar12 = GetProcessHeap();
    HeapFree(pvVar12,0,piVar1);
  }
  return;
}
