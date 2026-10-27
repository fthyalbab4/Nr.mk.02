// rea decompile_all
// name: FUN_1009dd00
// address: 0x1009dd00
// body: available
// range: 0x1009dd00-0x1009dd60 inclusive
// range: 0x1009dd70-0x1009dec1 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1009dd00(int *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  HANDLE pvVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  LPVOID pvVar9;
  uint *puVar10;
  int iVar11;
  bool bVar12;
  undefined4 in_stack_fffffbd0;
  undefined8 local_428;
  undefined8 local_420;
  uint local_418;
  uint uStack_414;
  undefined8 local_410 [127];
  uint local_18;

  iVar2 = *param_1;
  uVar7 = *(uint *)(iVar2 + 0x100);
  while (puVar10 = (uint *)(uVar7 & 0xfffffffc), puVar10 != (uint *)0x0) {
    uVar7 = *puVar10;
    local_418 = uVar7 & 3;
    if (local_418 != 1) {
      FUN_101369ea(0,&local_418,&DAT_1015738c,0,in_stack_fffffbd0,
                   &PTR_s_C__Users_runneradmin__cargo_regi_1014e00c);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    FUN_1009ded0((uint)puVar10,0);
  }
  uVar7 = *(uint *)(iVar2 + 0x40);
  pvVar9 = (LPVOID)(uVar7 & 0xfffffffc);
  uVar8 = *(uint *)((int)pvVar9 + 0x408);
  puVar10 = (uint *)(uVar8 & 0xfffffffc);
  if (puVar10 != (uint *)0x0) {
    do {
      LOCK();
      bVar12 = uVar7 == *(uint *)(iVar2 + 0x40);
      if (bVar12) {
        *(uint *)(iVar2 + 0x40) = uVar8;
      }
      UNLOCK();
      if (bVar12) {
        if (uVar7 == *(uint *)(iVar2 + 0x80)) {
          LOCK();
          if (uVar7 == *(uint *)(iVar2 + 0x80)) {
            *(uint *)(iVar2 + 0x80) = uVar8;
          }
          UNLOCK();
        }
        pvVar5 = GetProcessHeap();
        HeapFree(pvVar5,0,pvVar9);
        uVar7 = *puVar10;
        local_418 = uVar7;
        memcpy(&uStack_414,puVar10 + 1,0x404);
        if (uVar7 == 0) break;
        if (0x40 < local_18) {
          FUN_10136a50(0,local_18,0x40,&PTR_s_C__Users_runneradmin__cargo_regi_1014df88);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        if (local_18 != 0) {
          iVar11 = local_18 << 4;
          puVar4 = &local_428;
          do {
            puVar6 = puVar4 + 2;
            local_420 = puVar4[3];
            local_428 = *puVar6;
            *puVar6 = 0x1009e1b0;
            puVar4[3] = 0;
            (*(code *)local_428)((int)&local_428 + 4);
            iVar11 = iVar11 + -0x10;
            puVar4 = puVar6;
          } while (iVar11 != 0);
        }
      }
      uVar7 = *(uint *)(iVar2 + 0x40);
      pvVar9 = (LPVOID)(uVar7 & 0xfffffffc);
      uVar8 = *(uint *)((int)pvVar9 + 0x408);
      puVar10 = (uint *)(uVar8 & 0xfffffffc);
    } while (puVar10 != (uint *)0x0);
  }
  uVar7 = *(uint *)(iVar2 + 0x40);
  pvVar5 = GetProcessHeap();
  HeapFree(pvVar5,0,(LPVOID)(uVar7 & 0xfffffffc));
  if (iVar2 != -1) {
    LOCK();
    piVar1 = (int *)(iVar2 + 4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      pvVar9 = *(LPVOID *)(iVar2 + -4);
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,pvVar9);
    }
  }
  return;
}
