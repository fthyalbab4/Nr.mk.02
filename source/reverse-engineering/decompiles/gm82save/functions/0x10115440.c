// rea decompile_all
// name: FUN_10115440
// address: 0x10115440
// body: available
// range: 0x10115440-0x10115706 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x101156ee) */

undefined8 __fastcall FUN_10115440(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  void *_Src;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  code *pcVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  HANDLE hHeap;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;

  iVar4 = param_1[3];
  _Src = (void *)param_1[5];
  uVar13 = (uint)*(ushort *)(iVar4 + 0x1ea);
  uVar16 = (uint)*(ushort *)((int)_Src + 0x1ea);
  if (uVar13 + 1 + uVar16 < 0xc) {
    uVar5 = param_1[1];
    iVar14 = *param_1;
    uVar15 = param_1[2];
    iVar6 = param_1[4];
    uVar12 = (uint)*(ushort *)(iVar14 + 0x1ea);
    *(ushort *)(iVar4 + 0x1ea) = *(ushort *)(iVar4 + 0x1ea) + 1 + *(ushort *)((int)_Src + 0x1ea);
    iVar11 = uVar15 * 0x1c;
    uVar7 = *(undefined4 *)(iVar14 + 0xcc + iVar11);
    uVar1 = *(undefined8 *)(iVar14 + 0xc4 + iVar11);
    iVar10 = ~uVar15 + uVar12;
    uVar2 = *(undefined8 *)(iVar14 + 0xb4 + iVar11);
    uVar3 = *(undefined8 *)(iVar14 + 0xbc + iVar11);
    memmove((void *)(iVar14 + 0xb4 + iVar11),(void *)(iVar14 + 0xd0 + iVar11),iVar10 * 0x1c);
    iVar11 = uVar13 * 0x1c;
    *(undefined8 *)(iVar4 + 0xb4 + iVar11) = uVar2;
    *(undefined8 *)(iVar4 + 0xbc + iVar11) = uVar3;
    *(undefined8 *)(iVar4 + 0xc4 + iVar11) = uVar1;
    *(undefined4 *)(iVar4 + 0xcc + iVar11) = uVar7;
    memcpy((void *)(iVar4 + 0xb4 + (uVar13 + 1) * 0x1c),(void *)((int)_Src + 0xb4),uVar16 * 0x1c);
    iVar11 = uVar15 * 0x10;
    uVar1 = *(undefined8 *)(iVar14 + iVar11);
    uVar2 = *(undefined8 *)(iVar14 + 8 + iVar11);
    memmove((void *)(iVar14 + iVar11),(void *)(iVar14 + 0x10 + iVar11),iVar10 * 0x10);
    *(undefined8 *)(iVar4 + uVar13 * 0x10) = uVar1;
    *(undefined8 *)(iVar4 + 8 + uVar13 * 0x10) = uVar2;
    memcpy((void *)((uVar13 + 1) * 0x10 + iVar4),_Src,uVar16 << 4);
    memmove((void *)(iVar14 + 0x1f0 + uVar15 * 4),(void *)(iVar14 + 500 + uVar15 * 4),iVar10 * 4);
    if (uVar15 + 1 < uVar12) {
      do {
        iVar11 = *(int *)(iVar14 + 0x1f0 + uVar15 * 4);
        uVar15 = uVar15 + 1;
        *(int *)(iVar11 + 0xb0) = iVar14;
        *(short *)(iVar11 + 0x1e8) = (short)uVar15;
      } while (uVar12 - 1 != uVar15);
    }
    *(short *)(iVar14 + 0x1ea) = *(short *)(iVar14 + 0x1ea) + -1;
    if (1 < uVar5) {
      iVar11 = uVar16 + 1;
      memcpy((void *)(iVar4 + 0x1ec + (uVar13 + 1) * 4),(void *)((int)_Src + 0x1ec),iVar11 * 4);
      iVar14 = uVar13 + 0x7c;
      do {
        iVar10 = *(int *)(iVar4 + iVar14 * 4);
        sVar9 = (short)iVar14;
        iVar14 = iVar14 + 1;
        iVar11 = iVar11 + -1;
        *(int *)(iVar10 + 0xb0) = iVar4;
        *(short *)(iVar10 + 0x1e8) = sVar9 + -0x7b;
      } while (iVar11 != 0);
    }
    hHeap = GetProcessHeap();
    HeapFree(hHeap,0,_Src);
    return CONCAT44(iVar6,iVar4);
  }
  FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_10156580);
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}
