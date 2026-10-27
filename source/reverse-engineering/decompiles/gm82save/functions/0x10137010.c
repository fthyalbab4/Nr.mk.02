// rea decompile_all
// name: FUN_10137010
// address: 0x10137010
// body: available
// range: 0x10137010-0x101370a0 inclusive
// range: 0x101370b0-0x1013719d inclusive
// range: 0x101371a0-0x101372fe inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10137010(uint *param_1,int *param_2)

{
  void *_Src;
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  HANDLE hHeap;
  uint uVar9;
  int iVar10;
  LPVOID pvVar11;
  int *piVar12;
  bool bVar13;
  int local_830;
  undefined8 local_818;
  undefined8 local_810 [127];
  int local_418;
  int iStack_414;
  undefined8 local_410 [127];
  uint local_18;

  uVar6 = FUN_10137300((int)param_1,param_2);
  iVar3 = *param_2;
  local_830 = 0;
  _Src = (void *)(iVar3 + 8);
  while( true ) {
    uVar7 = *param_1;
    pvVar11 = (LPVOID)(uVar7 & 0xfffffffc);
    uVar9 = *(uint *)((int)pvVar11 + 0x408);
    piVar12 = (int *)(uVar9 & 0xfffffffc);
    if (piVar12 == (int *)0x0) {
      return;
    }
    local_830 = local_830 + 1;
    while( true ) {
      if ((int)(uVar6 - (piVar12[0x101] & 0xfffffffeU)) < 4) {
        return;
      }
      LOCK();
      uVar2 = *param_1;
      if (uVar7 == uVar2) {
        *param_1 = uVar9;
      }
      UNLOCK();
      if (uVar7 == uVar2) break;
      uVar7 = *param_1;
      pvVar11 = (LPVOID)(uVar7 & 0xfffffffc);
      uVar9 = *(uint *)((int)pvVar11 + 0x408);
      piVar12 = (int *)(uVar9 & 0xfffffffc);
      if (piVar12 == (int *)0x0) {
        return;
      }
    }
    if (uVar7 == param_1[0x10]) {
      LOCK();
      if (uVar7 == param_1[0x10]) {
        param_1[0x10] = uVar9;
      }
      UNLOCK();
    }
    if (iVar3 == 0) {
      hHeap = GetProcessHeap();
      HeapFree(hHeap,0,pvVar11);
      iVar10 = *piVar12;
    }
    else {
      uVar9 = *(uint *)(iVar3 + 0x408);
      while (0x3f < uVar9) {
        iVar10 = *(int *)(iVar3 + 4);
        iVar8 = -0x400;
        do {
          *(undefined8 *)((int)local_410 + iVar8) = 0;
          *(undefined8 *)((int)local_410 + iVar8 + -8) = 0x1009e1b0;
          iVar8 = iVar8 + 0x10;
        } while (iVar8 != 0);
        memcpy(&local_418,_Src,0x404);
        memcpy(_Src,&local_818,0x400);
        *(undefined4 *)(iVar3 + 0x408) = 0;
        uVar4 = *(undefined4 *)(iVar10 + 0xc0);
        pvVar11 = FUN_10107380(0,0x40c);
        if (pvVar11 == (LPVOID)0x0) {
          FUN_1013679e(4,0x40c);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        memcpy(pvVar11,&local_418,0x404);
        *(undefined4 *)((int)pvVar11 + 0x404) = uVar4;
        *(undefined4 *)((int)pvVar11 + 0x408) = 0;
        do {
          while( true ) {
            uVar9 = *(uint *)(iVar10 + 0x80);
            uVar2 = *(uint *)((uVar9 & 0xfffffffc) + 0x408);
            if (uVar2 < 4) break;
            LOCK();
            if (uVar9 == *(uint *)(iVar10 + 0x80)) {
              *(uint *)(iVar10 + 0x80) = uVar2;
            }
            UNLOCK();
          }
          piVar1 = (int *)((uVar9 & 0xfffffffc) + 0x408);
          LOCK();
          bVar13 = *piVar1 == 0;
          if (bVar13) {
            *piVar1 = (int)pvVar11;
          }
          UNLOCK();
        } while (!bVar13);
        LOCK();
        if (uVar9 == *(uint *)(iVar10 + 0x80)) {
          *(uint *)(iVar10 + 0x80) = (uint)pvVar11;
        }
        UNLOCK();
        uVar9 = *(uint *)(iVar3 + 0x408);
      }
      *(code **)((int)_Src + uVar9 * 0x10) = FUN_1009e1c0;
      *(uint *)(iVar3 + 0xc + uVar9 * 0x10) = uVar7;
      *(int *)(iVar3 + 0x408) = *(int *)(iVar3 + 0x408) + 1;
      iVar10 = *piVar12;
    }
    if (iVar10 == 0) {
      return;
    }
    memcpy(&iStack_414,piVar12 + 1,0x404);
    local_418 = iVar10;
    if (0x40 < local_18) break;
    if (local_18 != 0) {
      iVar10 = local_18 << 4;
      piVar12 = &local_418;
      do {
        local_810[0] = *(undefined8 *)(piVar12 + 2);
        local_818 = *(undefined8 *)piVar12;
        piVar12[0] = 0x1009e1b0;
        piVar12[1] = 0;
        piVar12[2] = 0;
        piVar12[3] = 0;
        (*(code *)local_818)((int)&local_818 + 4);
        iVar10 = iVar10 + -0x10;
        piVar12 = piVar12 + 4;
      } while (iVar10 != 0);
    }
    if (local_830 == 8) {
      return;
    }
  }
  FUN_10136a50(0,local_18,0x40,&PTR_s_C__Users_runneradmin__cargo_regi_1014df88);
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}
