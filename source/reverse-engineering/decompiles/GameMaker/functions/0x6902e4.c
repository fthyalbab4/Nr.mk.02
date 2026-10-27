// rea decompile_all
// name: FUN_006902e4
// address: 0x6902e4
// body: available
// range: 0x6902e4-0x690426 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006902e4(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 local_14;

  uVar1 = *(uint *)(*(int *)(param_1 + 0x3c0) + 0x48);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x3c0) + 0x4c);
  uVar4 = uVar1;
  local_14 = uVar2;
  if (*(int *)(param_1 + 0x61c) == 0) goto LAB_00690390;
  uVar3 = FUN_00404878();
  if ((int)uVar1 >> 0x1f == extraout_EDX) {
    if (uVar3 < uVar1) {
LAB_00690335:
      uVar4 = FUN_00404878(*(undefined4 *)(param_1 + 0x61c),uVar3);
    }
  }
  else if (extraout_EDX < (int)uVar1 >> 0x1f) goto LAB_00690335;
  uVar3 = FUN_00404878();
  if ((int)uVar2 >> 0x1f == extraout_EDX_00) {
    if (uVar2 <= uVar3) goto LAB_00690390;
  }
  else if ((int)uVar2 >> 0x1f <= extraout_EDX_00) goto LAB_00690390;
  local_14 = FUN_00404878(*(undefined4 *)(param_1 + 0x61c),uVar3);
LAB_00690390:
  *(undefined1 *)(param_1 + 0x1661) = 1;
  if ((uVar4 != *(uint *)(*(int *)(param_1 + 0x3c4) + 0x48)) ||
     (*(uint *)(*(int *)(param_1 + 0x3c4) + 0x4c) != local_14)) {
    *(uint *)(param_1 + 0x167c) = uVar4;
    *(uint *)(param_1 + 0x1680) = local_14;
    FUN_004edce0(*(undefined4 *)(param_1 + 0x3c4),uVar1);
    FUN_004edd14(*(undefined4 *)(param_1 + 0x3c4),uVar2);
    piVar5 = (int *)FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x3c4) + 0x1b0));
    (**(code **)(*piVar5 + 0x44))(piVar5,uVar1);
    piVar5 = (int *)FUN_0045f64c(*(undefined4 *)(*(int *)(param_1 + 0x3c4) + 0x1b0));
    (**(code **)(*piVar5 + 0x38))(piVar5,uVar2);
  }
  if (*(int *)(param_1 + 0x1684) != 0) {
    FUN_00405a7c();
  }
  uVar6 = FUN_005b57c0(uVar1,uVar2);
  *(undefined4 *)(param_1 + 0x1684) = uVar6;
  return;
}
