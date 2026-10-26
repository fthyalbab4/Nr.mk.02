// rea decompile_all
// name: FUN_0060f020
// address: 0x60f020
// body: available
// range: 0x60f020-0x60f18a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0060f020(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;

  uVar1 = 0;
  if ((((*(double *)(param_1 + 0x20) != 0.0) && (*(double *)(param_1 + 0x28) != 0.0)) &&
      (*(double *)(param_2 + 0x20) != 0.0)) && (*(double *)(param_2 + 0x28) != 0.0)) {
    if (((((*(int *)(param_2 + 0xb8) < *(int *)(param_1 + 0xc0) + 1) &&
          (*(int *)(param_1 + 0xb8) < *(int *)(param_2 + 0xc0) + 1)) &&
         ((*(int *)(param_2 + 0xbc) < *(int *)(param_1 + 0xc4) + 1 &&
          ((*(int *)(param_1 + 0xbc) < *(int *)(param_2 + 0xc4) + 1 && (param_2 != param_1)))))) &&
        (*(char *)(param_1 + 0x108) == '\0')) && (*(char *)(param_2 + 0x108) == '\0')) {
      if ((char)(int *)(param_2 + 0xb8) == '\0') {
        uVar1 = 1;
      }
      else {
        if (*(int *)(param_1 + 0x44) < 0) {
          iVar3 = FUN_005799a0(*(undefined4 *)(param_1 + 8));
        }
        else {
          iVar3 = FUN_005799a0();
        }
        if ((iVar3 != 0) && (*(int *)(iVar3 + 4) != 0)) {
          if (*(int *)(param_2 + 0x44) < 0) {
            iVar4 = FUN_005799a0(*(undefined4 *)(param_2 + 8));
          }
          else {
            iVar4 = FUN_005799a0();
          }
          if ((iVar4 != 0) && (*(int *)(iVar4 + 4) != 0)) {
            uVar5 = FUN_004048b8();
            uVar6 = FUN_004048b8();
            uVar22 = *(undefined4 *)(param_1 + 0x24);
            uVar21 = *(undefined4 *)(param_1 + 0x20);
            uVar20 = *(undefined4 *)(param_1 + 0x2c);
            uVar19 = *(undefined4 *)(param_1 + 0x28);
            uVar18 = *(undefined4 *)(param_1 + 0x34);
            uVar17 = *(undefined4 *)(param_1 + 0x30);
            uVar2 = FUN_004102e4();
            iVar16 = param_2 + 0xb8;
            uVar7 = FUN_004048b8();
            uVar8 = FUN_004048b8();
            uVar15 = *(undefined4 *)(param_2 + 0x24);
            uVar14 = *(undefined4 *)(param_2 + 0x20);
            uVar13 = *(undefined4 *)(param_2 + 0x2c);
            uVar12 = *(undefined4 *)(param_2 + 0x28);
            uVar11 = *(undefined4 *)(param_2 + 0x34);
            uVar10 = *(undefined4 *)(param_2 + 0x30);
            uVar9 = FUN_004102e4();
            uVar1 = FUN_00623dc0(iVar3,uVar9,param_1 + 0xb8,uVar10,uVar11,uVar12,uVar13,uVar14,
                                 uVar15,uVar8,uVar7,iVar16,uVar2,iVar4,uVar17,uVar18,uVar19,uVar20,
                                 uVar21,uVar22,uVar6,uVar5);
          }
        }
      }
    }
  }
  return uVar1;
}
