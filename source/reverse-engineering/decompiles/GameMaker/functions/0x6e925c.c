// rea decompile_all
// name: FUN_006e925c
// address: 0x6e925c
// body: available
// range: 0x6e925c-0x6e934f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006e925c(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  double dVar7;
  undefined8 uVar8;

  uVar1 = FUN_006e6650(&LAB_006e56d8,1);
  if ((*(int *)(param_1 + 4) != 0) && (-1 < param_2 + -1)) {
    iVar4 = 0;
    iVar5 = param_2;
    do {
      uVar2 = FUN_006e663c(param_1,iVar4 % *(int *)(param_1 + 4));
      FUN_006e6aa0(uVar1,uVar2);
      if ((param_4 == 2) || (param_4 == 8)) {
        uVar8 = 0x3ff0000000000000;
        dVar7 = (double)(iVar4 + 1) / (double)param_2;
        uVar6 = 0;
        uVar2 = *(undefined4 *)PTR_DAT_007819d0;
        uVar3 = FUN_006e663c(uVar1,iVar4);
        FUN_005b0004(uVar3,param_3,param_4,uVar2,uVar6,dVar7,uVar8);
      }
      else {
        dVar7 = (double)(iVar4 + 1) / (double)param_2;
        uVar8 = 0x3ff0000000000000;
        uVar6 = 0;
        uVar2 = *(undefined4 *)PTR_DAT_007819d0;
        uVar3 = FUN_006e663c(uVar1,iVar4);
        FUN_005b0004(uVar3,param_3,param_4,uVar2,uVar6,uVar8,dVar7);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return uVar1;
}
