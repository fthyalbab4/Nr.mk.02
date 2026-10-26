// rea decompile_all
// name: FUN_10115710
// address: 0x10115710
// body: available
// range: 0x10115710-0x10115a31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB gm82save.pdb (GUID 5effa299-a1fc-4bd1-a82c-e5ab58741d37, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10115710(int *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  undefined4 uVar9;
  code *pcVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;

  iVar16 = param_1[3];
  uVar18 = (uint)*(ushort *)(iVar16 + 0x1ea);
  if (0xb < param_2 + uVar18) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_101577b8);
                    /* WARNING: Does not return */
    pcVar10 = (code *)invalidInstructionException();
    (*pcVar10)();
  }
  _Src = (void *)param_1[5];
  iVar17 = *(ushort *)((int)_Src + 0x1ea) - param_2;
  if (*(ushort *)((int)_Src + 0x1ea) < param_2) {
    FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_101577f0);
                    /* WARNING: Does not return */
    pcVar10 = (code *)invalidInstructionException();
    (*pcVar10)();
  }
  *(short *)(iVar16 + 0x1ea) = (short)(param_2 + uVar18);
  *(short *)((int)_Src + 0x1ea) = (short)iVar17;
  iVar14 = param_2 * 0x10;
  uVar1 = *(undefined8 *)((int)_Src + iVar14 + -0x10);
  uVar2 = *(undefined8 *)((int)_Src + iVar14 + -8);
  iVar19 = *param_1;
  iVar15 = param_1[2];
  iVar12 = iVar15 * 0x1c;
  uVar9 = *(undefined4 *)(iVar19 + 0xcc + iVar12);
  uVar3 = *(undefined8 *)(iVar19 + 0xc4 + iVar12);
  uVar4 = *(undefined8 *)(iVar19 + 0xb4 + iVar12);
  uVar5 = *(undefined8 *)(iVar19 + 0xbc + iVar12);
  iVar13 = param_2 * 0x1c;
  uVar6 = *(undefined8 *)((int)_Src + iVar13 + 0xa8);
  uVar7 = *(undefined8 *)((int)_Src + iVar13 + 0x98);
  uVar8 = *(undefined8 *)((int)_Src + iVar13 + 0xa0);
  *(undefined4 *)(iVar19 + 0xcc + iVar12) = *(undefined4 *)((int)_Src + iVar13 + 0xb0);
  *(undefined8 *)(iVar19 + 0xb4 + iVar12) = uVar7;
  *(undefined8 *)(iVar19 + 0xc4 + iVar12) = uVar6;
  *(undefined8 *)(iVar19 + 0xbc + iVar12) = uVar8;
  iVar15 = iVar15 * 0x10;
  uVar6 = *(undefined8 *)(iVar19 + iVar15);
  uVar7 = *(undefined8 *)(iVar19 + 8 + iVar15);
  *(undefined8 *)(iVar19 + 8 + iVar15) = uVar2;
  *(undefined8 *)(iVar19 + iVar15) = uVar1;
  iVar19 = uVar18 * 0x1c;
  *(undefined4 *)(iVar16 + 0xcc + iVar19) = uVar9;
  *(undefined8 *)(iVar16 + 0xc4 + iVar19) = uVar3;
  *(undefined8 *)(iVar16 + 0xbc + iVar19) = uVar5;
  *(undefined8 *)(iVar16 + 0xb4 + iVar19) = uVar4;
  *(undefined8 *)(iVar16 + 8 + uVar18 * 0x10) = uVar7;
  *(undefined8 *)(iVar16 + uVar18 * 0x10) = uVar6;
  memcpy((void *)(iVar16 + 0xd0 + iVar19),(void *)((int)_Src + 0xb4),param_2 * 0x1c - 0x1c);
  memcpy((void *)((uVar18 + 1) * 0x10 + iVar16),_Src,iVar14 - 0x10);
  memmove((void *)((int)_Src + 0xb4),(void *)((int)_Src + iVar13 + 0xb4),iVar17 * 0x1c);
  memmove(_Src,(void *)(iVar14 + (int)_Src),iVar17 * 0x10);
  if (param_1[4] == 0) {
    if (param_1[6] != 0) goto LAB_10115a19;
  }
  else {
    if (param_1[6] == 0) {
LAB_10115a19:
      FUN_10136b40(&PTR_s_C__Users_runneradmin__rustup_too_10157800);
                    /* WARNING: Does not return */
      pcVar10 = (code *)invalidInstructionException();
      (*pcVar10)();
    }
    memcpy((void *)(iVar16 + 0x1ec + (uVar18 + 1) * 4),(void *)((int)_Src + 0x1ec),param_2 * 4);
    memmove((void *)((int)_Src + 0x1ec),(void *)((int)_Src + param_2 * 4 + 0x1ec),iVar17 * 4 + 4);
    iVar19 = uVar18 + 0x7c;
    do {
      iVar15 = *(int *)(iVar16 + iVar19 * 4);
      sVar11 = (short)iVar19;
      iVar19 = iVar19 + 1;
      param_2 = param_2 - 1;
      *(int *)(iVar15 + 0xb0) = iVar16;
      *(short *)(iVar15 + 0x1e8) = sVar11 + -0x7b;
    } while (param_2 != 0);
    iVar16 = 0;
    do {
      iVar19 = *(int *)((int)_Src + iVar16 * 4 + 0x1ec);
      *(void **)(iVar19 + 0xb0) = _Src;
      *(short *)(iVar19 + 0x1e8) = (short)iVar16;
      iVar16 = iVar16 + 1;
    } while (iVar17 + 1 != iVar16);
  }
  return;
}
