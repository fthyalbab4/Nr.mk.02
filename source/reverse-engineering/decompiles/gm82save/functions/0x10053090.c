// rea decompile_all
// name: FUN_10053090
// address: 0x10053090
// body: available
// range: 0x10053090-0x100530c2 inclusive
// range: 0x100530d0-0x10053135 inclusive
// range: 0x10053140-0x1005322e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10053090(undefined8 *param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  int *lpMem;
  HANDLE pvVar4;
  undefined4 *puVar5;
  uint uVar6;
  LPVOID local_2c;
  byte local_28;
  char cStack_27;
  undefined2 uStack_26;
  int *piStack_24;
  undefined4 *local_20;
  int local_1c;
  int local_18;
  undefined4 *local_14;

  uVar1 = *(uint *)(param_2 + 8);
  local_1c = 0x1005309f;
  if (uVar1 == 0) {
    uVar6 = 0;
  }
  else {
    local_18 = *(int *)(param_2 + 4);
    local_14 = (undefined4 *)(param_2 + 0x10);
    uVar6 = 0;
    do {
      *(undefined1 *)(param_2 + 0xc) = 1;
      if (uVar1 < uVar6) {
        FUN_10136a50(uVar6,uVar1,uVar1,&PTR_s_C__Users_runneradmin__rustup_too_10157594);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      FUN_1010c100(&local_28,local_14,(int *)(local_18 + uVar6),uVar1 - uVar6);
      lpMem = piStack_24;
      *(undefined1 *)(param_2 + 0xc) = 0;
      if (local_28 == 0xff) {
        if (piStack_24 != (int *)0x0) {
          uVar6 = uVar6 + (int)piStack_24;
          goto LAB_100530de;
        }
        *(undefined1 *)param_1 = 2;
        *(undefined ***)((int)param_1 + 4) = &PTR_s_failed_to_write_the_buffered_dat_10157e38;
        if (uVar6 == 0) {
          return;
        }
        goto LAB_100531e8;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch((&switchD_10053128::switchdataD_10053230)[local_28] + local_1c) {
      case 0x1005312a:
        cVar3 = cStack_27;
        goto joined_r0x100530d8;
      case 0x10053150:
        if ((char)piStack_24[2] == '#') {
          puVar5 = (undefined4 *)piStack_24[1];
          local_2c = (LPVOID)*piStack_24;
          if ((code *)*puVar5 != (code *)0x0) {
            local_20 = puVar5;
            (*(code *)*puVar5)(local_2c);
            puVar5 = local_20;
          }
          if (puVar5[1] != 0) {
            if (8 < (uint)puVar5[2]) {
              local_2c = *(LPVOID *)((int)local_2c + -4);
            }
            pvVar4 = GetProcessHeap();
            HeapFree(pvVar4,0,local_2c);
          }
          pvVar4 = GetProcessHeap();
          HeapFree(pvVar4,0,lpMem);
          goto LAB_100530de;
        }
      case 0x100531c4:
switchD_10053128_caseD_0:
        *param_1 = CONCAT44(piStack_24,CONCAT22(uStack_26,CONCAT11(cStack_27,local_28)));
        goto joined_r0x100531d3;
      }
      cVar3 = (char)piStack_24[2];
joined_r0x100530d8:
      if (cVar3 != '#') goto switchD_10053128_caseD_0;
LAB_100530de:
    } while (uVar6 < uVar1);
  }
  *(undefined1 *)param_1 = 0xff;
joined_r0x100531d3:
  if (uVar6 != 0) {
LAB_100531e8:
    if (uVar1 < uVar6) {
      FUN_10136a50(uVar6,uVar1,uVar1,&PTR_s_C__Users_runneradmin__rustup_too_1015de74);
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    memmove(*(void **)(param_2 + 4),(void *)(uVar6 + (int)*(void **)(param_2 + 4)),uVar1 - uVar6);
    *(uint *)(param_2 + 8) = uVar1 - uVar6;
  }
  return;
}
