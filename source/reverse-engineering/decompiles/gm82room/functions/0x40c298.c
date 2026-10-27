// rea decompile_all
// name: FUN_0040c298
// address: 0x40c298
// body: available
// range: 0x40c298-0x40c32e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040c298(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;

  local_20 = *param_2;
  uStack_1c = param_2[1];
  uStack_18 = param_2[2];
  uStack_14 = param_2[3];
  iVar6 = *param_1;
  iVar3 = param_1[1];
  iVar7 = param_1[2];
  iVar4 = param_1[3];
  uVar1 = FUN_0040c370(&local_20,param_2,param_3,param_3);
  uVar2 = FUN_0040c378(&local_20);
  iVar8 = iVar7 + iVar6 >> 1;
  if (iVar8 < 0) {
    iVar8 = iVar8 + (uint)((iVar7 + iVar6 & 1U) != 0);
  }
  iVar6 = iVar3 + iVar4 >> 1;
  if (iVar6 < 0) {
    iVar6 = iVar6 + (uint)((iVar3 + iVar4 & 1U) != 0);
  }
  iVar3 = (int)(uVar2 + 1) >> 1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + (uint)((uVar2 + 1 & 1) != 0);
  }
  iVar7 = (int)uVar2 >> 1;
  if (iVar7 < 0) {
    iVar7 = iVar7 + (uint)((uVar2 & 1) != 0);
  }
  iVar4 = (int)uVar1 >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((uVar1 & 1) != 0);
  }
  iVar5 = (int)(uVar1 + 1) >> 1;
  if (iVar5 < 0) {
    iVar5 = iVar5 + (uint)((uVar1 + 1 & 1) != 0);
  }
  FUN_0040c354(iVar8 - iVar4,iVar6 - iVar7,iVar5 + iVar8,param_3,iVar3 + iVar6);
  return;
}
