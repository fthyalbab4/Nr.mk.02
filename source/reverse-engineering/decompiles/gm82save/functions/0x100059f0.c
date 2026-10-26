// rea decompile_all
// name: FUN_100059f0
// address: 0x100059f0
// body: available
// range: 0x100059f0-0x10005a07 inclusive
// range: 0x10005a10-0x10005a9c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100059f0(uint *param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  HANDLE hHeap;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  LPVOID lpMem;
  uint uVar6;

  uVar6 = param_1[7];
  if (uVar6 != 0) {
    uVar3 = (uint)(ushort)param_1[6];
    uVar4 = param_1[3];
    pauVar5 = (undefined1 (*) [16])param_1[4];
    do {
      if ((short)uVar3 == 0) {
        do {
          auVar1 = *pauVar5;
          uVar4 = uVar4 - 0x40;
          pauVar5 = pauVar5 + 1;
          uVar3 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar3 == 0);
        param_1[4] = (uint)pauVar5;
        param_1[3] = uVar4;
      }
      for (uVar2 = uVar3; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
      }
      uVar3 = uVar3 - 1 & uVar3;
      *(short *)(param_1 + 6) = (short)uVar3;
      param_1[7] = uVar6 - 1;
      (*(code *)0x407ea8)();
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    lpMem = (LPVOID)param_1[2];
    if (8 < *param_1) {
      lpMem = *(LPVOID *)((int)lpMem - 4);
    }
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,lpMem);
  }
  return;
}
