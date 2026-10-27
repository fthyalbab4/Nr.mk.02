// rea decompile_all
// name: FUN_1007b140
// address: 0x1007b140
// body: available
// range: 0x1007b140-0x1007b1a8 inclusive
// range: 0x1007b1b0-0x1007b3c5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1007b140(undefined4 param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  code *pcVar2;
  byte *pbVar3;
  int *lpMem;
  uint uVar4;
  HANDLE pvVar5;
  int iVar6;
  undefined *puVar7;
  uint extraout_EDX;
  int *extraout_EDX_00;
  uint uVar8;
  LPVOID lpMem_00;
  undefined4 *puVar9;
  undefined8 local_98;
  uint local_90;
  undefined1 local_8c;
  int local_84;
  undefined4 uStack_80;
  uint local_7c;
  int *local_78;
  undefined4 local_74;
  int *local_70;
  undefined1 *local_6c;
  uint local_68;
  int *local_64;
  uint local_24;

  FUN_1011b840(&local_70);
  FUN_1011d450(&local_84,(int)&local_70);
  if (local_84 == -1) {
    FUN_10136b20(&PTR_s_src_lib_rs_10142fec);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_98 = CONCAT44(uStack_80,local_84);
  local_90 = local_7c;
  local_8c = 1;
  local_74 = param_2;
  if ((int)local_64 - (int)local_6c != 0) {
    uVar8 = (uint)((int)local_64 - (int)local_6c) >> 4;
    puVar9 = (undefined4 *)((int)local_6c + 4);
    do {
      if (puVar9[-1] != 0) {
        pvVar1 = (LPVOID)*puVar9;
        pvVar5 = GetProcessHeap();
        HeapFree(pvVar5,0,pvVar1);
      }
      puVar9 = puVar9 + 4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  lpMem = local_70;
  if (local_68 != 0) {
    pvVar5 = GetProcessHeap();
    HeapFree(pvVar5,0,lpMem);
  }
  uVar8 = local_90;
  pbVar3 = local_98._4_4_;
  iVar6 = FUN_10110f10(local_98._4_4_,local_90);
  uVar4 = local_90;
  if (((iVar6 != 0) && (extraout_EDX <= uVar8)) &&
     (uVar4 = extraout_EDX, extraout_EDX < uVar8 && extraout_EDX != 0)) {
    if (pbVar3[extraout_EDX] == 0xed) {
      if (uVar8 <= extraout_EDX + 1) {
        FUN_10136b52(extraout_EDX + 1,uVar8,&PTR_s_C__Users_runneradmin__rustup_too_10157148);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar4 = extraout_EDX;
      if (((2 < extraout_EDX) && (uVar4 = extraout_EDX, 0x9f < pbVar3[extraout_EDX + 1])) &&
         ((uVar4 = extraout_EDX, pbVar3[extraout_EDX - 3] == 0xed &&
          (uVar4 = extraout_EDX, 0x9f < pbVar3[extraout_EDX - 2])))) {
        puVar7 = &DAT_10157c6a;
LAB_1007b39a:
        local_70 = &local_84;
        local_6c = &LAB_10096fc0;
        FUN_101369c0(puVar7,&local_70,&PTR_s_C__Users_runneradmin__rustup_too_10157148);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
    else {
      uVar4 = extraout_EDX;
      if ((char)pbVar3[extraout_EDX] < -0x40) {
        puVar7 = &DAT_10157c3f;
        goto LAB_1007b39a;
      }
    }
  }
  local_90 = uVar4;
  FUN_10111020((uint *)&local_98,(byte *)"extensions",10);
  pvVar1 = local_98._4_4_;
  FUN_1011c320((uint *)&local_70,(int)local_98._4_4_,local_90);
  if (((uint)local_70 & (uint)local_6c) == 0xffffffff) {
    uVar8 = local_68 & 0x1ff;
  }
  else {
    local_68 = 0xff;
    uVar8 = (local_24 & 1) << 8 | 0xff;
    local_64 = extraout_EDX_00;
  }
  if (uVar8 == 0xff) {
    FUN_10111020((uint *)&local_98,(byte *)0x1,0);
    local_70 = (int *)FUN_100033c0((int *)&local_98);
    (*(code *)0x407f0c)();
    (*(code *)0x407ea8)();
  }
  else {
    if ((char)local_68 == '\x03') {
      puVar9 = (undefined4 *)local_64[1];
      lpMem_00 = (LPVOID)*local_64;
      local_78 = local_64;
      if ((code *)*puVar9 != (code *)0x0) {
        (*(code *)*puVar9)(lpMem_00);
      }
      if (puVar9[1] != 0) {
        if (8 < (uint)puVar9[2]) {
          lpMem_00 = *(LPVOID *)((int)lpMem_00 + -4);
        }
        pvVar5 = GetProcessHeap();
        HeapFree(pvVar5,0,lpMem_00);
      }
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,local_78);
    }
    (*(code *)0x407f0c)();
    if ((uint)local_98 != 0) {
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,pvVar1);
    }
  }
  return;
}
