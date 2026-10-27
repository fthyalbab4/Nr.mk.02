// rea decompile_all
// name: FUN_005f57a4
// address: 0x5f57a4
// body: available
// range: 0x5f57a4-0x5f5abd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f57a4(void)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;

  if (DAT_006885f4 == '\0') {
    FUN_004bb8ac(*(undefined4 *)(DAT_008506c8 + 0x388),0xffffffff);
    FUN_004bb8ac(*(undefined4 *)(DAT_008506c8 + 0x38c),0xffffffff);
    FUN_004bb8ac(*(undefined4 *)(DAT_008506c8 + 0x390),0xffffffff);
    FUN_004bb8ac(*(undefined4 *)(DAT_008506c8 + 0x394),0xffffffff);
    FUN_004bb8ac(*(undefined4 *)(DAT_008506c8 + 0x3a0),0xffffffff);
    FUN_004bb8ac(*(undefined4 *)(DAT_008506c8 + 0x3a4),0xffffffff);
  }
  else {
    FUN_004bb8ac(*(undefined4 *)(DAT_008506c8 + 0x388),0);
    FUN_004bb8ac(*(undefined4 *)(DAT_008506c8 + 0x38c),0);
    FUN_004bb8ac(*(undefined4 *)(DAT_008506c8 + 0x390),0);
    FUN_004bb8ac(*(undefined4 *)(DAT_008506c8 + 0x394),0);
    FUN_004bb8ac(*(undefined4 *)(DAT_008506c8 + 0x3a0),0);
    FUN_004bb8ac(*(undefined4 *)(DAT_008506c8 + 0x3a4),0);
  }
  bVar3 = DAT_006885d0 != '\0';
  iVar1 = DAT_008506c8;
  if (bVar3) {
    iVar1 = FUN_00561fd4();
  }
  PTR_FUN_0068861c._0_1_ = bVar3;
  (**(code **)(**(int **)(DAT_008506c8 + 0x388) + 0x78))(*(int **)(DAT_008506c8 + 0x388),iVar1);
  FUN_004bb578(*(undefined4 *)(DAT_008506c8 + 0x38c),0);
  FUN_004bb578(*(undefined4 *)(DAT_008506c8 + 0x390),0);
  FUN_004bb578(*(undefined4 *)(DAT_008506c8 + 0x3a0),0);
  FUN_005ef574(*(undefined4 *)(DAT_008506c8 + 0x3a4),0x192,0);
  FUN_004ba900(*(undefined4 *)(DAT_008506c8 + 0x3a4),0);
  FUN_004bac98(*(undefined4 *)(DAT_008506c8 + 0x3a4),0);
  if (DAT_006885e4 == '\0') {
    FUN_004e2e6c(DAT_008506c8,0);
  }
  else {
    FUN_004e2e6c(DAT_008506c8,1);
  }
  if (DAT_006885ec == '\0') {
    FUN_004e328c(DAT_008506c8,0);
  }
  else {
    FUN_004e328c(DAT_008506c8,3);
  }
  FUN_004bb690(DAT_008506c8,DAT_006885e8);
  if ((char)PTR_FUN_006885e0 == '\0') {
    if (-1 < DAT_006885f8) {
      FUN_004e7918(DAT_008506c8,DAT_006885f8);
    }
    if (-1 < DAT_006885fc) {
      FUN_004e7918(DAT_008506c8,DAT_006885fc);
    }
    FUN_004bac98(DAT_008506c8,DAT_00688600);
    FUN_004baccc(DAT_008506c8,DAT_00688604);
  }
  else {
    FUN_004e2e6c(DAT_008506c8,0);
    FUN_004e7918(DAT_008506c8,0);
    FUN_004e7954(DAT_008506c8,0);
    uVar2 = FUN_004e86ac(*(undefined4 *)PTR_DAT_00689620);
    FUN_004bac98(DAT_008506c8,uVar2);
    uVar2 = FUN_004e86a0(*(undefined4 *)PTR_DAT_00689620);
    FUN_004baccc(DAT_008506c8,uVar2);
  }
  uVar2 = FUN_004baf44(iVar1);
  FUN_004bac98(*(undefined4 *)(DAT_008506c8 + 0x388),uVar2);
  uVar2 = FUN_004baf84(iVar1);
  FUN_004baccc(*(undefined4 *)(DAT_008506c8 + 0x388),uVar2);
  FUN_004bac30(*(int *)(DAT_008506c8 + 0x3a8),
               *(int *)(*(int *)(DAT_008506c8 + 0x388) + 0x48) -
               *(int *)(*(int *)(DAT_008506c8 + 0x3a8) + 0x48));
  FUN_004bac64(*(undefined4 *)(DAT_008506c8 + 0x3a8),0);
  FUN_004bb578(*(undefined4 *)(DAT_008506c8 + 0x3a8),DAT_00688614);
  *(undefined1 *)(*(int *)(DAT_008506c8 + 0x3a8) + 0x279) = DAT_0068860c;
  FUN_004bb810(DAT_008506c8,DAT_006885dc);
  if (DAT_006885d0 != '\0') {
    uVar2 = FUN_00561fd4();
    FUN_004bb810(uVar2,DAT_006885dc);
  }
  FUN_004bb810(*(undefined4 *)(DAT_008506c8 + 0x388),DAT_006885dc);
  if (DAT_006885d0 != '\0') {
    iVar1 = FUN_00561fd4();
    DAT_008506d0 = *(undefined4 *)(iVar1 + 0x6c);
    uVar2 = FUN_00561fd4();
    FUN_004bb810(uVar2,DAT_006885dc);
  }
  return;
}
