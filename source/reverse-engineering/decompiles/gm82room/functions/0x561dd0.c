// rea decompile_all
// name: FUN_00561dd0
// address: 0x561dd0
// body: available
// range: 0x561dd0-0x561f4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00561dd0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_28;
  int iStack_24;
  undefined1 auStack_20 [16];

  PTR_FUN_00686410._0_1_ = 1;
  if ((char)PTR_FUN_006863e8 == '\0') {
    if (DAT_006863e0 == '\0') {
      FUN_004e2e6c(DAT_006863dc,0);
    }
    else if (DAT_006863ec == '\0') {
      FUN_004e2e6c(DAT_006863dc,1);
    }
    else {
      FUN_004e2e6c(DAT_006863dc,2);
    }
    if (DAT_006863e4 == '\0') {
      FUN_004e2c70(DAT_006863dc,0);
    }
    else if (DAT_006863ec == '\0') {
      FUN_004e2c70(DAT_006863dc,3);
    }
    else {
      FUN_004e2c70(DAT_006863dc,7);
    }
    (**(code **)(*DAT_006863dc + 0x50))(DAT_006863dc,&iStack_28);
    iVar3 = FUN_004e1ad4(DAT_006863dc);
    iVar4 = (iVar3 - iStack_28) + _DAT_006863f0;
    (**(code **)(*DAT_006863dc + 0x50))(DAT_006863dc,&iStack_28);
    iVar3 = FUN_004e1af4(DAT_006863dc);
    iVar5 = (iVar3 - iStack_24) + _DAT_006863f4;
    iVar3 = FUN_004baf44(DAT_006863dc);
    iVar6 = (DAT_006863dc[0x12] - iVar3) + DAT_006863f8;
    iVar3 = FUN_004baf84(DAT_006863dc);
    FUN_00436ad0(iVar4,iVar5,iVar6 + iVar4,auStack_20,
                 (DAT_006863dc[0x13] - iVar3) + DAT_006863fc + iVar5);
    FUN_004baf08(DAT_006863dc,auStack_20);
  }
  else {
    FUN_004e2e6c(DAT_006863dc,0);
    uVar1 = FUN_004e86ac(*(undefined4 *)PTR_DAT_00689620);
    uVar2 = FUN_004e86a0(*(undefined4 *)PTR_DAT_00689620);
    (**(code **)(*DAT_006863dc + 0x98))(DAT_006863dc,0,0,uVar2,uVar1);
  }
  PTR_FUN_00686410._0_1_ = 0;
  return;
}
