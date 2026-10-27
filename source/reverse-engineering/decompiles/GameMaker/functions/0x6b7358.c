// rea decompile_all
// name: FUN_006b7358
// address: 0x6b7358
// body: available
// range: 0x6b7358-0x6b7563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b7358(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 extraout_var;
  int iVar7;

  iVar7 = param_4 / *(int *)(param_1 + 0x2e0) + *(int *)(param_1 + 0x2f4);
  if (iVar7 < 0) {
    iVar7 = 0;
  }
  iVar3 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8),param_4 % *(int *)(param_1 + 0x2e0));
  if (iVar3 <= iVar7) {
    iVar7 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2d8));
    iVar7 = iVar7 + -1;
  }
  uVar1 = *(uint *)(param_1 + 0x2dc);
  iVar3 = (int)uVar1 >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar1 & 1) != 0);
  }
  iVar3 = (iVar3 + param_5) / (int)uVar1 + *(int *)(param_1 + 0x2f8);
  if (*PTR_DAT_007823a4 != '\0') {
    iVar3 = iVar3 + -5;
  }
  iVar4 = iVar3;
  if ((*PTR_DAT_007819e4 == '\0') &&
     (iVar4 = FUN_00409a18(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 4 + iVar7 * 0x10)),
     iVar3 < iVar4)) {
    iVar4 = iVar3;
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (*(int *)(param_1 + 0x308) == 1) {
    if ((iVar7 != *(int *)(param_1 + 0x2ec)) || (iVar4 != *(int *)(param_1 + 0x2f0))) {
      FUN_006b1018(param_1,1,0,0xffffffff,0,0xffffffff);
      *(int *)(param_1 + 0x2ec) = iVar7;
      *(int *)(param_1 + 0x2f0) = iVar4;
      FUN_006b281c(param_1);
      FUN_004eed28(param_1);
    }
  }
  else if (*(int *)(param_1 + 0x308) < 2) {
    cVar2 = FUN_006b28b0(param_1,iVar7,iVar4);
    if (cVar2 == '\0') {
      FUN_004ee8f4(param_1,CONCAT22(extraout_var,0xfffc));
    }
    else {
      FUN_004ee8f4(param_1,CONCAT22(extraout_var,0xfff4));
    }
  }
  else {
    iVar3 = FUN_00409a18(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 4 + iVar7 * 0x10));
    if (iVar3 < iVar4) {
      iVar4 = FUN_00409a18(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 4 + iVar7 * 0x10));
    }
    cVar2 = FUN_006b28b0(param_1,iVar7,iVar4);
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x308) = 3;
      uVar5 = FUN_0043f190(&PTR_FUN_00432364,1);
      FUN_006b2cf4(param_1,uVar5);
      FUN_006b2a38(param_1);
      iVar3 = FUN_00409a18(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 4 + iVar7 * 0x10));
      if (iVar3 < iVar4) {
        iVar4 = FUN_00409a18(*(undefined4 *)(*(int *)(param_1 + 0x2d8) + 4 + iVar7 * 0x10));
      }
      FUN_006b2eb8(param_1,uVar5,iVar7,iVar4);
      FUN_00405a7c(uVar5);
      uVar5 = *(undefined4 *)(param_1 + 0x2d8);
      uVar6 = FUN_00409a20(uVar5);
      FUN_006ab1d0(uVar5,uVar6);
      FUN_006b30f0(param_1);
      if (*(short *)(param_1 + 0x2d2) != 0) {
        (**(code **)(param_1 + 0x2d0))(*(undefined4 *)(param_1 + 0x2d4),param_1);
      }
      FUN_006b281c(param_1);
      FUN_004eed28(param_1);
    }
  }
  return;
}
