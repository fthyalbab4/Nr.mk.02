// rea decompile_all
// name: FUN_10004630
// address: 0x10004630
// body: available
// range: 0x10004630-0x10004670 inclusive
// range: 0x10004680-0x100046ae inclusive
// range: 0x100046b0-0x100046e1 inclusive
// range: 0x100046f0-0x1000471e inclusive
// range: 0x10004720-0x1000472c inclusive
// range: 0x10004730-0x10004776 inclusive
// range: 0x10004780-0x100047ae inclusive
// range: 0x100047b0-0x100047c0 inclusive
// range: 0x100047d0-0x100047fe inclusive
// range: 0x10004800-0x10004883 inclusive
// range: 0x10004890-0x100048b5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10004630(uint *param_1)

{
  uint *puVar1;
  LPVOID lpMem;
  undefined4 *lpMem_00;
  uint uVar2;
  HANDLE pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *lpMem_01;
  undefined4 *puVar9;
  uint uVar10;

  LOCK();
  puVar1 = param_1 + 0x31;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if (*puVar1 == 0) {
    LOCK();
    puVar1 = param_1 + 0x10;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 | 1;
    UNLOCK();
    if ((uVar2 & 1) == 0) {
      uVar7 = 0;
      uVar2 = param_1[0x10];
      if ((~uVar2 & 0x3e) == 0) {
        uVar7 = 0;
        do {
          if (uVar7 < 7) {
            uVar2 = 1;
            do {
              uVar4 = uVar2 >> ((byte)uVar7 & 0x1f);
              uVar2 = uVar2 + 1;
            } while (uVar4 == 0);
LAB_10004680:
            uVar7 = uVar7 + 1;
          }
          else {
            SwitchToThread();
            if (uVar7 < 0xb) goto LAB_10004680;
          }
          uVar2 = param_1[0x10];
        } while ((~uVar2 & 0x3e) == 0);
      }
      uVar4 = *param_1;
      LOCK();
      lpMem_01 = (int *)param_1[1];
      param_1[1] = 0;
      UNLOCK();
      uVar10 = uVar4 >> 1;
      if (lpMem_01 == (int *)0x0 && uVar10 != uVar2 >> 1) {
        do {
          if (uVar7 < 7) {
            uVar6 = 1;
            do {
              uVar5 = uVar6 >> ((byte)uVar7 & 0x1f);
              uVar6 = uVar6 + 1;
            } while (uVar5 == 0);
LAB_100046f0:
            uVar7 = uVar7 + 1;
          }
          else {
            SwitchToThread();
            if (uVar7 < 0xb) goto LAB_100046f0;
          }
          LOCK();
          lpMem_01 = (int *)param_1[1];
          param_1[1] = 0;
          UNLOCK();
        } while (lpMem_01 == (int *)0x0);
      }
      while (uVar10 != uVar2 >> 1) {
        uVar10 = uVar10 & 0x1f;
        if (uVar10 == 0x1f) {
          if (*lpMem_01 == 0) {
            uVar7 = 0;
            do {
              if (uVar7 < 7) {
                uVar10 = 1;
                do {
                  uVar6 = uVar10 >> ((byte)uVar7 & 0x1f);
                  uVar10 = uVar10 + 1;
                } while (uVar6 == 0);
LAB_100047d0:
                uVar7 = uVar7 + 1;
              }
              else {
                SwitchToThread();
                if (uVar7 < 0xb) goto LAB_100047d0;
              }
            } while (*lpMem_01 == 0);
          }
          piVar8 = (int *)*lpMem_01;
          pvVar3 = GetProcessHeap();
          HeapFree(pvVar3,0,lpMem_01);
        }
        else {
          piVar8 = lpMem_01;
          if ((lpMem_01[uVar10 + 1] & 1U) == 0) {
            uVar7 = 0;
            do {
              if (uVar7 < 7) {
                uVar6 = 1;
                do {
                  uVar5 = uVar6 >> ((byte)uVar7 & 0x1f);
                  uVar6 = uVar6 + 1;
                } while (uVar5 == 0);
LAB_10004780:
                uVar7 = uVar7 + 1;
              }
              else {
                SwitchToThread();
                if (uVar7 < 0xb) goto LAB_10004780;
              }
            } while ((lpMem_01[uVar10 + 1] & 1U) == 0);
          }
        }
        uVar4 = uVar4 + 2;
        lpMem_01 = piVar8;
        uVar10 = uVar4 >> 1;
      }
      if (lpMem_01 != (int *)0x0) {
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,lpMem_01);
      }
      *param_1 = uVar4 & 0xfffffffe;
    }
    LOCK();
    uVar2 = param_1[0x32];
    *(char *)(param_1 + 0x32) = '\x01';
    UNLOCK();
    if ((char)uVar2 != '\0') {
      uVar2 = param_1[0x10];
      lpMem_00 = (undefined4 *)param_1[1];
      for (uVar7 = *param_1 & 0xfffffffe; uVar7 != (uVar2 & 0xfffffffe); uVar7 = uVar7 + 2) {
        puVar9 = lpMem_00;
        if ((~uVar7 & 0x3e) == 0) {
          puVar9 = (undefined4 *)*lpMem_00;
          pvVar3 = GetProcessHeap();
          HeapFree(pvVar3,0,lpMem_00);
        }
        lpMem_00 = puVar9;
      }
      if (lpMem_00 != (undefined4 *)0x0) {
        pvVar3 = GetProcessHeap();
        HeapFree(pvVar3,0,lpMem_00);
      }
      FUN_10005e30((int *)(param_1 + 0x21));
      lpMem = (LPVOID)param_1[-1];
      pvVar3 = GetProcessHeap();
      HeapFree(pvVar3,0,lpMem);
    }
  }
  return;
}
