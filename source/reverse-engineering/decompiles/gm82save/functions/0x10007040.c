// rea decompile_all
// name: FUN_10007040
// address: 0x10007040
// body: available
// range: 0x10007040-0x10007065 inclusive
// range: 0x10007070-0x100070d3 inclusive
// range: 0x100070e0-0x10007166 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10007040(int *param_1)

{
  undefined1 auVar1 [16];
  LPVOID pvVar2;
  LPVOID lpMem;
  int iVar3;
  uint uVar4;
  HANDLE pvVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  int iVar10;
  uint uVar11;

  iVar10 = param_1[10];
  pvVar2 = (LPVOID)param_1[9];
  if (iVar10 != 0) {
    puVar6 = (undefined4 *)((int)pvVar2 + 4);
    do {
      if (puVar6[-1] != 0) {
        lpMem = (LPVOID)*puVar6;
        pvVar5 = GetProcessHeap();
        HeapFree(pvVar5,0,lpMem);
      }
      puVar6 = puVar6 + 3;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (param_1[8] != 0) {
    pvVar5 = GetProcessHeap();
    HeapFree(pvVar5,0,pvVar2);
  }
  iVar10 = param_1[1];
  if (iVar10 != 0) {
    iVar7 = param_1[3];
    if (iVar7 != 0) {
      pauVar8 = (undefined1 (*) [16])*param_1;
      auVar1 = *pauVar8;
      pauVar9 = pauVar8 + 1;
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
            auVar1 = *pauVar9;
            pauVar8 = pauVar8 + -0x10;
            pauVar9 = pauVar9 + 1;
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
        iVar3 = 0;
        for (uVar4 = uVar11; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          iVar3 = iVar3 + 1;
        }
        if (*(int *)pauVar8[-1 - iVar3] != 0) {
          pvVar2 = *(LPVOID *)(pauVar8[-1 - iVar3] + 4);
          pvVar5 = GetProcessHeap();
          HeapFree(pvVar5,0,pvVar2);
        }
        uVar11 = uVar11 - 1 & uVar11;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (iVar10 * 0x11 != -0x21) {
      pvVar2 = *(LPVOID *)(*param_1 + iVar10 * -0x10 + -0x14);
      pvVar5 = GetProcessHeap();
      HeapFree(pvVar5,0,pvVar2);
    }
  }
  return;
}
