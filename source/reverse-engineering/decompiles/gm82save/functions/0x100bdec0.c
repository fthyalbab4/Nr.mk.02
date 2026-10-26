// rea decompile_all
// name: FUN_100bdec0
// address: 0x100bdec0
// body: available
// range: 0x100bdec0-0x100be177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_100bdec0(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  LPVOID pvVar8;
  uint uVar9;
  uint uVar10;
  HANDLE hHeap;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;

  uVar2 = *(undefined1 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0x14);
  pvVar8 = FUN_10107380(8,0x2f8);
  if (pvVar8 != (LPVOID)0x0) {
    uVar4 = *(undefined4 *)(param_2 + 0x30);
    do {
      LOCK();
      uVar7 = DAT_101632f4 + 1;
      UNLOCK();
      uVar13 = DAT_101632f4 ^ 0x79746573;
      uVar11 = (uVar13 << 0x10 | 0x7065) ^ uVar13 + 0x6e657261;
      uVar16 = (uVar13 >> 0x10 | 0x64620000) ^ (0x919a8d9e < uVar13) + 0xdcdecbc7;
      uVar9 = (0x3e60152f < uVar13) + 0x1671bdd1;
      uVar18 = uVar16 + 0xded7d4e2 + (uint)(0x28212039 < uVar11);
      uVar10 = uVar9 ^ 0xe414a674;
      uVar12 = (uVar11 << 0x15 | uVar16 >> 0xb) ^ uVar11 + 0xd7dedfc6;
      uVar14 = uVar11 + 0xd7dedfc6 ^ DAT_101632f4;
      uVar17 = (uVar16 << 0x15 | uVar11 >> 0xb) ^ uVar18;
      uVar9 = uVar9 ^ 0xff;
      uVar15 = uVar13 + 0xc19fead0 ^ 0xf0de7325;
      uVar11 = uVar14 + uVar15;
      uVar19 = (uVar18 ^ 0x4000000) + uVar10 + (uint)CARRY4(uVar14,uVar15);
      uVar14 = uVar9 + uVar12;
      uVar16 = uVar13 + 0xc19fead0 + uVar17 + (uint)CARRY4(uVar9,uVar12);
      uVar9 = (uVar10 << 0xd | uVar15 >> 0x13) ^ uVar19;
      uVar13 = (uVar12 >> 0x10 | uVar17 << 0x10) ^ uVar16;
      uVar18 = (uVar15 << 0xd | 0x1e4c) ^ uVar11;
      uVar12 = (uVar12 << 0x10 | uVar17 >> 0x10) ^ uVar14;
      uVar16 = uVar16 + uVar9 + (uint)CARRY4(uVar14,uVar18);
      uVar10 = uVar19 + uVar12;
      uVar11 = uVar11 + uVar13 + (uint)CARRY4(uVar19,uVar12);
      uVar17 = (uVar18 >> 0xf | uVar9 << 0x11) ^ uVar16;
      uVar19 = (uVar18 << 0x11 | uVar9 >> 0xf) ^ uVar14 + uVar18;
      uVar9 = (uVar12 << 0x15 | uVar13 >> 0xb) ^ uVar10;
      uVar20 = (uVar12 >> 0xb | uVar13 << 0x15) ^ uVar11;
      uVar12 = uVar11 + uVar17 + (uint)CARRY4(uVar10,uVar19);
      uVar15 = uVar16 + uVar9;
      uVar11 = uVar14 + uVar18 + uVar20 + (uint)CARRY4(uVar16,uVar9);
      uVar18 = (uVar19 >> 0x13 | uVar17 << 0xd) ^ uVar12;
      uVar14 = (uVar9 << 0x10 | uVar20 >> 0x10) ^ uVar15;
      uVar13 = (uVar19 << 0xd | uVar17 >> 0x13) ^ uVar10 + uVar19;
      uVar9 = (uVar9 >> 0x10 | uVar20 << 0x10) ^ uVar11;
      uVar20 = uVar11 + uVar18 + (uint)CARRY4(uVar15,uVar13);
      uVar11 = uVar12 + uVar14;
      uVar16 = uVar10 + uVar19 + uVar9 + (uint)CARRY4(uVar12,uVar14);
      uVar12 = (uVar13 >> 0xf | uVar18 << 0x11) ^ uVar20;
      uVar18 = (uVar13 << 0x11 | uVar18 >> 0xf) ^ uVar15 + uVar13;
      uVar10 = (uVar14 >> 0xb | uVar9 << 0x15) ^ uVar16;
      uVar17 = (uVar14 << 0x15 | uVar9 >> 0xb) ^ uVar11;
      uVar19 = uVar20 + uVar17;
      uVar14 = uVar15 + uVar13 + uVar10 + (uint)CARRY4(uVar20,uVar17);
      uVar13 = (uVar18 >> 0x13 | uVar12 << 0xd) ^ uVar16 + uVar12 + (uint)CARRY4(uVar11,uVar18);
      uVar16 = (uVar18 << 0xd | uVar12 >> 0x13) ^ uVar11 + uVar18;
      uVar9 = (uVar10 << 0x10 | uVar17 >> 0x10) ^ uVar14;
      uVar12 = (uVar17 << 0x10 | uVar10 >> 0x10) ^ uVar19;
      uVar10 = uVar14 + uVar13 + (uint)CARRY4(uVar19,uVar16);
      uVar11 = (uVar16 << 0x11 | uVar13 >> 0xf) ^ uVar10 ^ (uVar12 << 0x15 | uVar9 >> 0xb) ^
               uVar19 + uVar16;
      uVar10 = (uVar13 << 0x11 | uVar16 >> 0xf) ^ uVar19 + uVar16 ^ (uVar9 << 0x15 | uVar12 >> 0xb)
               ^ uVar10;
      DAT_101632f4 = uVar7;
    } while (uVar11 == 0 && uVar10 == 0);
    uVar1 = *(undefined8 *)(param_2 + 0x1c);
    *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_1 + 0x24) = uVar1;
    param_1[0x28] = uVar3;
    *(undefined1 *)(param_1 + 0x29) = uVar2;
    *param_1 = 0;
    param_1[1] = pvVar8;
    param_1[0x10] = 0;
    param_1[0x11] = pvVar8;
    param_1[0x22] = uVar4;
    param_1[0x20] = uVar11;
    param_1[0x21] = uVar10;
    iVar5 = *(int *)(param_2 + 8);
    param_1[0x23] = *(undefined4 *)(param_2 + 0x2c);
    if (0 < iVar5) {
      pvVar8 = *(LPVOID *)(param_2 + 0xc);
      hHeap = GetProcessHeap();
      HeapFree(hHeap,0,pvVar8);
    }
    return;
  }
  FUN_1013679e(4,0x2f8);
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}
