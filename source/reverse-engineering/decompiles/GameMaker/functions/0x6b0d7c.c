// rea decompile_all
// name: FUN_006b0d7c
// address: 0x6b0d7c
// body: available
// range: 0x6b0d7c-0x6b0f67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b0d7c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;

  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  *(int *)(param_2 + 0x14) = iVar2;
  iVar3 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
  iVar2 = *(int *)(param_2 + 0x18);
  if (iVar3 + -1 < *(int *)(param_2 + 0x18)) {
    iVar2 = iVar3 + -1;
  }
  *(int *)(param_2 + 0x18) = iVar2;
  iVar3 = *(int *)(param_2 + 0x14);
  if (iVar3 <= iVar2) {
    iVar2 = (iVar2 - iVar3) + 1;
    do {
      FUN_00409be0(*(int *)(param_1 + 0x2d8) + 4 + iVar3 * 0x10,&DAT_006aecd0,1,0);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar3 = *(int *)(param_2 + 0x18) + 1;
  iVar2 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
  if (iVar3 <= iVar2 + -1) {
    iVar2 = ((iVar2 + -1) - iVar3) + 1;
    do {
      FUN_00409084(*(int *)(param_1 + 0x2d8) + -0x10 +
                   ((*(int *)(param_2 + 0x14) + iVar3) - *(int *)(param_2 + 0x18)) * 0x10,
                   *(int *)(param_1 + 0x2d8) + iVar3 * 0x10,&DAT_006aed08);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
  FUN_00409be0(param_1 + 0x2d8,&DAT_006aef44,1,
               (iVar2 - *(int *)(param_2 + 0x18)) + *(int *)(param_2 + 0x14) + -1);
  iVar2 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
  FUN_00409be0(param_1 + 0x2d8,&DAT_006aef44,1,
               ((iVar2 + *(int *)(param_2 + 0x10)) - *(int *)(param_2 + 0xc)) + 1);
  iVar2 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
  iVar2 = iVar2 + -1;
  iVar3 = *(int *)(param_2 + 0x10) + 1;
  iVar5 = iVar3 - iVar2;
  if (iVar5 == 0 || iVar3 < iVar2) {
    iVar5 = iVar5 + -1;
    do {
      FUN_00409084(*(int *)(param_1 + 0x2d8) + iVar2 * 0x10,
                   *(int *)(param_1 + 0x2d8) + -0x10 +
                   ((iVar2 - *(int *)(param_2 + 0x10)) + *(int *)(param_2 + 0xc)) * 0x10,
                   &DAT_006aed08);
      iVar2 = iVar2 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0);
  }
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar2 <= *(int *)(param_2 + 0x10)) {
    iVar3 = (*(int *)(param_2 + 0x10) - iVar2) + 1;
    do {
      FUN_006b7a68(param_1,iVar2,
                   *(undefined4 *)(*(int *)(param_2 + 8) + (iVar2 - *(int *)(param_2 + 0xc)) * 4));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x2f4) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2fc) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_2 + 0x30);
  if (*(short *)(param_1 + 0x2d2) != 0) {
    (**(code **)(param_1 + 0x2d0))(*(undefined4 *)(param_1 + 0x2d4),param_1);
  }
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 0x2d8);
  uVar4 = FUN_00409a20(uVar1);
  FUN_006ab16c(uVar1,uVar4,*(undefined4 *)(param_2 + 0xc),uVar6);
  FUN_006b311c(param_1,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10));
  FUN_004eed28(param_1);
  return;
}
