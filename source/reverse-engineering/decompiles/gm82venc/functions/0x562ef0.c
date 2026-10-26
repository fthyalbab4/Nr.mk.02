// rea decompile_all
// name: FUN_00562ef0
// address: 0x562ef0
// body: available
// range: 0x562ef0-0x56313f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00562ef0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 local_6c;
  undefined1 auStack_38 [8];
  undefined1 local_30 [4];
  int iStack_2c;
  int local_28;
  int iStack_24;
  int aiStack_20 [2];
  undefined4 uStack_18;
  int iStack_14;

  local_6c = (double)CONCAT44(DAT_0068640c,DAT_00686408);
  if ((double)CONCAT44(DAT_0068640c,DAT_00686408) == 0.0) {
    iVar1 = FUN_004baf44(DAT_006863dc);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    iStack_24 = FUN_004baf84(DAT_006863dc);
    if (iStack_24 < 1) {
      iStack_24 = 1;
    }
    (**(code **)(*DAT_006863dc + 0x50))(DAT_006863dc,local_30);
    local_28 = (int)((longlong)DAT_00686404 * (longlong)param_2);
    iVar2 = FUN_004048b8(local_28,(int)((ulonglong)((longlong)DAT_00686404 * (longlong)param_2) >>
                                       0x20));
    (**(code **)(*DAT_006863dc + 0x50))(DAT_006863dc,aiStack_20);
    uStack_18 = (undefined4)((longlong)DAT_00686400 * (longlong)param_1);
    iStack_14 = iVar1;
    iVar1 = FUN_004048b8(uStack_18,
                         (int)((ulonglong)((longlong)DAT_00686400 * (longlong)param_1) >> 0x20));
    FUN_00436aa0(aiStack_20[0] + iVar1,iStack_2c + iVar2,auStack_38);
    FUN_004ca564(*(undefined4 *)PTR_DAT_00689560,auStack_38);
  }
  else {
    if (local_6c < 0.0) {
      local_28 = FUN_004baf44(DAT_006863dc);
      local_28 = FUN_004baf84(DAT_006863dc);
    }
    uVar3 = FUN_004baf44(DAT_006863dc);
    iVar1 = (int)uVar3 >> 1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + (uint)((uVar3 & 1) != 0);
    }
    uVar3 = FUN_004baf84(DAT_006863dc);
    iVar2 = (int)uVar3 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((uVar3 & 1) != 0);
    }
    uVar3 = FUN_004048b8();
    uVar4 = FUN_004048b8();
    iVar8 = (int)uVar3 >> 1;
    if (iVar8 < 0) {
      iVar8 = iVar8 + (uint)((uVar3 & 1) != 0);
    }
    iVar5 = (int)uVar4 >> 1;
    if (iVar5 < 0) {
      iVar5 = iVar5 + (uint)((uVar4 & 1) != 0);
    }
    (**(code **)(*DAT_006863dc + 0x50))(DAT_006863dc,local_30);
    iVar6 = FUN_004048b8();
    (**(code **)(*DAT_006863dc + 0x50))(DAT_006863dc,aiStack_20);
    local_28 = param_1;
    iVar7 = FUN_004048b8();
    FUN_00436aa0((iVar1 - iVar8) + aiStack_20[0] + iVar7,(iVar2 - iVar5) + iStack_2c + iVar6,
                 auStack_38);
    FUN_004ca564(*(undefined4 *)PTR_DAT_00689560,auStack_38);
  }
  return;
}
