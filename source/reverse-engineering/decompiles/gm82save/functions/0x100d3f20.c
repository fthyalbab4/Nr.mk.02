// rea decompile_all
// name: FUN_100d3f20
// address: 0x100d3f20
// body: available
// range: 0x100d3f20-0x100d3f66 inclusive
// range: 0x100d3f70-0x100d3ffa inclusive
// range: 0x100d4000-0x100d406e inclusive
// range: 0x100d4070-0x100d40ae inclusive
// range: 0x100d40b0-0x100d40f2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100d3f20(int *param_1)

{
  undefined1 auVar1 [16];
  LPVOID pvVar2;
  int iVar3;
  int *piVar4;
  LPVOID lpMem;
  undefined4 *lpMem_00;
  int iVar5;
  uint uVar6;
  HANDLE pvVar7;
  int *piVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  undefined4 *puVar12;
  undefined1 (*pauVar13) [16];
  int iVar14;
  int iVar15;

  if (*param_1 != 0) {
    pvVar2 = (LPVOID)param_1[1];
    pvVar7 = GetProcessHeap();
    HeapFree(pvVar7,0,pvVar2);
  }
  iVar3 = param_1[5];
  pvVar2 = (LPVOID)param_1[4];
  if (iVar3 != 0) {
    iVar9 = 0;
    do {
      iVar14 = *(int *)((int)pvVar2 + iVar9 * 0x20 + 4);
      if (iVar14 != 0) {
        piVar8 = (int *)(iVar9 * 0x20 + (int)pvVar2);
        iVar15 = piVar8[3];
        if (iVar15 != 0) {
          pauVar10 = (undefined1 (*) [16])*piVar8;
          auVar1 = *pauVar10;
          pauVar13 = pauVar10 + 1;
          uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
          do {
            if ((short)uVar11 == 0) {
              do {
                auVar1 = *pauVar13;
                pauVar10 = pauVar10 + -0xc;
                pauVar13 = pauVar13 + 1;
                uVar11 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar11 == 0);
            }
            iVar5 = 0;
            for (uVar6 = uVar11; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              iVar5 = iVar5 + 1;
            }
            piVar4 = *(int **)((int)pauVar10 + iVar5 * -0xc + -0xc);
            LOCK();
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              FUN_100d4100(*(LPVOID *)((int)pauVar10 + iVar5 * -0xc + -0xc),
                           *(int *)((int)pauVar10 + iVar5 * -0xc + -8));
            }
            uVar11 = uVar11 - 1 & uVar11;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        uVar11 = iVar14 * 0xc + 0x1bU & 0xfffffff0;
        if (iVar14 + uVar11 != -0x11) {
          lpMem = *(LPVOID *)((*piVar8 - uVar11) + -4);
          pvVar7 = GetProcessHeap();
          HeapFree(pvVar7,0,lpMem);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar3);
  }
  if (param_1[3] != 0) {
    pvVar7 = GetProcessHeap();
    HeapFree(pvVar7,0,pvVar2);
  }
  iVar3 = param_1[8];
  pvVar2 = (LPVOID)param_1[7];
  if (iVar3 != 0) {
    iVar9 = 0;
    do {
      lpMem_00 = *(undefined4 **)((int)pvVar2 + iVar9 * 0xc + 4);
      puVar12 = lpMem_00;
      for (iVar14 = *(int *)((int)pvVar2 + iVar9 * 0xc + 8); iVar14 != 0; iVar14 = iVar14 + -1) {
        piVar8 = (int *)*puVar12;
        if (piVar8 != (int *)0x0) {
          LOCK();
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (*piVar8 == 0) {
            FUN_100d4100((LPVOID)*puVar12,puVar12[1]);
          }
        }
        puVar12 = puVar12 + 2;
      }
      if (*(int *)((int)pvVar2 + iVar9 * 0xc) != 0) {
        pvVar7 = GetProcessHeap();
        HeapFree(pvVar7,0,lpMem_00);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar3);
  }
  if (param_1[6] != 0) {
    pvVar7 = GetProcessHeap();
    HeapFree(pvVar7,0,pvVar2);
  }
  return;
}
