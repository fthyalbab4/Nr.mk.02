// rea decompile_all
// name: FUN_006e8ef8
// address: 0x6e8ef8
// body: available
// range: 0x6e8ef8-0x6e8f83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006e8ef8(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;

  uVar1 = FUN_006e6650(&LAB_006e56d8,1);
  if ((*(int *)(param_1 + 4) != 0) && (-1 < param_2 + -1)) {
    iVar5 = 0;
    iVar6 = param_2;
    do {
      uVar2 = FUN_006e663c(param_1,iVar5 % *(int *)(param_1 + 4));
      FUN_006e6aa0(uVar1,uVar2);
      uVar2 = FUN_006e663c(uVar1,iVar5);
      iVar7 = iVar5 * 0xff;
      iVar3 = iVar6 + -1;
      uVar4 = FUN_00404878();
      FUN_005b0710(uVar2,param_3,uVar4,iVar6,param_3,iVar7,iVar3);
      iVar5 = iVar5 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return uVar1;
}
