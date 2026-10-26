// rea decompile_all
// name: FUN_1009ded0
// address: 0x1009ded0
// body: available
// range: 0x1009ded0-0x1009dfc8 inclusive
// range: 0x1009dfd0-0x1009e104 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_1009ded0(uint param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  LPVOID pvVar7;
  ulonglong *puVar8;
  HANDLE hHeap;
  int iVar9;
  bool bVar10;
  undefined8 local_814;
  ulonglong local_80c;
  undefined8 local_410 [128];

  local_814 = CONCAT44(local_814._4_4_,param_1) & 0xffffffff0000003c;
  if ((param_1 & 0x3c) != 0) {
    FUN_101369ea(0,&local_814,&DAT_10159960,0x1014dee8,0x23,
                 &PTR_s_C__Users_runneradmin__cargo_regi_1014df68);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if (param_2 == 0) {
    uVar2 = *(uint *)(param_1 + 0x408);
    if (0x40 < uVar2) {
      FUN_10136a50(0,uVar2,0x40,&PTR_s_C__Users_runneradmin__cargo_regi_1014df88);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    if (uVar2 != 0) {
      iVar9 = uVar2 << 4;
      puVar8 = (ulonglong *)(param_1 + 8);
      do {
        local_80c = puVar8[1];
        local_814 = *puVar8;
        *puVar8 = 0x1009e1b0;
        puVar8[1] = 0;
        (*(code *)local_814)((int)&local_814 + 4);
        iVar9 = iVar9 + -0x10;
        puVar8 = puVar8 + 2;
      } while (iVar9 != 0);
    }
    pvVar7 = *(LPVOID *)(param_1 - 4);
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,pvVar7);
  }
  else {
    uVar2 = *(uint *)(param_2 + 0x408);
    while (0x3f < uVar2) {
      iVar9 = *(int *)(param_2 + 4);
      iVar6 = -0x400;
      do {
        *(undefined8 *)(&stack0xfffffff8 + iVar6) = 0;
        *(undefined8 *)(&stack0xfffffff0 + iVar6) = 0x1009e1b0;
        iVar6 = iVar6 + 0x10;
      } while (iVar6 != 0);
      memcpy(&local_814,(void *)(param_2 + 8),0x404);
      memcpy((void *)(param_2 + 8),local_410,0x400);
      *(undefined4 *)(param_2 + 0x408) = 0;
      uVar3 = *(undefined4 *)(iVar9 + 0xc0);
      pvVar7 = FUN_10107380(0,0x40c);
      if (pvVar7 == (LPVOID)0x0) {
        FUN_1013679e(4,0x40c);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      memcpy(pvVar7,&local_814,0x404);
      *(undefined4 *)((int)pvVar7 + 0x404) = uVar3;
      *(undefined4 *)((int)pvVar7 + 0x408) = 0;
      do {
        while( true ) {
          uVar2 = *(uint *)(iVar9 + 0x80);
          uVar4 = *(uint *)((uVar2 & 0xfffffffc) + 0x408);
          if (uVar4 < 4) break;
          LOCK();
          if (uVar2 == *(uint *)(iVar9 + 0x80)) {
            *(uint *)(iVar9 + 0x80) = uVar4;
          }
          UNLOCK();
        }
        piVar1 = (int *)((uVar2 & 0xfffffffc) + 0x408);
        LOCK();
        bVar10 = *piVar1 == 0;
        if (bVar10) {
          *piVar1 = (int)pvVar7;
        }
        UNLOCK();
      } while (!bVar10);
      LOCK();
      if (uVar2 == *(uint *)(iVar9 + 0x80)) {
        *(uint *)(iVar9 + 0x80) = (uint)pvVar7;
      }
      UNLOCK();
      uVar2 = *(uint *)(param_2 + 0x408);
    }
    *(undefined1 **)(param_2 + 8 + uVar2 * 0x10) = &LAB_1009e110;
    *(uint *)(param_2 + 0xc + uVar2 * 0x10) = param_1;
    *(int *)(param_2 + 0x408) = *(int *)(param_2 + 0x408) + 1;
  }
  return;
}
