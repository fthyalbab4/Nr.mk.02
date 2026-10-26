// rea decompile_all
// name: FUN_0062fa00
// address: 0x62fa00
// body: available
// range: 0x62fa00-0x62fb15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062fa00(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_stack_0000000c;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;

  FUN_004048b8();
  cVar1 = FUN_005798a4();
  if (cVar1 != '\0') {
    FUN_004048b8();
    FUN_005799a0();
    iVar2 = FUN_00623b18();
    iVar5 = *(int *)PTR_DAT_00688b88;
    if (-1 < iVar5 + -1) {
      iVar6 = 0;
      do {
        if (*PTR_PTR_00689170 == '\0') {
          iVar4 = (int)((longlong)iVar6 * (longlong)iVar2);
          dVar17 = (double)iVar4 + *(double *)(in_stack_0000000c + 8);
          uVar16 = *(undefined8 *)(in_stack_0000000c + 0x20);
          uVar14 = 0x3ff00000;
          uVar13 = 0;
          uVar12 = 0x3ff00000;
          uVar11 = 0;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0x3ff00000;
          uVar7 = 0;
          FUN_004048b8(iVar4,(int)((ulonglong)((longlong)iVar6 * (longlong)iVar2) >> 0x20));
          uVar3 = FUN_005799a0();
          FUN_00624b78(uVar3,0,0xffffff,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar16,
                       dVar17);
        }
        else {
          dVar17 = (double)(int)((longlong)iVar6 * (longlong)iVar2) +
                   *(double *)(in_stack_0000000c + 8) + *(double *)(param_1 + 0x50);
          dVar15 = *(double *)(in_stack_0000000c + 0x20) + *(double *)(param_1 + 0x58);
          uVar14 = 0x3ff00000;
          uVar13 = 0;
          uVar12 = 0x3ff00000;
          uVar11 = 0;
          uVar10 = 0;
          uVar9 = 0;
          uVar8 = 0x3ff00000;
          uVar7 = 0;
          FUN_004048b8(param_1,(int)((ulonglong)((longlong)iVar6 * (longlong)iVar2) >> 0x20));
          uVar3 = FUN_005799a0();
          FUN_00624b78(uVar3,0,0xffffff,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,dVar15,
                       dVar17);
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}
