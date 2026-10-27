// rea decompile_all
// name: FUN_005b0650
// address: 0x5b0650
// body: available
// range: 0x5b0650-0x5b070d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b0650(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_14;

  if (param_1 != 0) {
    if (param_2 < 0) {
      param_2 = 0;
    }
    if (0xff < param_2) {
      param_2 = 0xff;
    }
    iVar1 = (param_2 + -0x80) * 2;
    iVar8 = iVar1 + 1;
    iVar9 = *(int *)(param_1 + 8) * *(int *)(param_1 + 4);
    if (-1 < iVar9 + -1) {
      iVar7 = 0;
      local_14 = param_3;
      do {
        FUN_005a5458(*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar7 * 4),&local_14,
                     (int)&local_14 + 1,(int)&local_14 + 3,(int)&local_14 + 2);
        uVar6 = local_14;
        if (iVar8 < 1) {
          cVar5 = (char)((int)((uint)local_14._1_1_ * (iVar1 + 0x100)) / 0xff);
        }
        else {
          cVar5 = local_14._1_1_ + (char)((int)((0xff - (uint)local_14._1_1_) * iVar8) / 0xff);
        }
        local_14 = CONCAT22(local_14._2_2_,CONCAT11(cVar5,(undefined1)local_14));
        uVar3 = local_14;
        uVar2 = local_14._2_2_ >> 8;
        local_14._2_1_ = SUB41(uVar6,2);
        uVar4 = local_14._2_1_;
        local_14 = uVar3;
        uVar6 = FUN_005a5648((undefined1)local_14,cVar5,uVar4,uVar2);
        *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar7 * 4) = uVar6;
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  return;
}
