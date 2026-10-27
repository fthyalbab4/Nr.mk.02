// rea decompile_all
// name: FUN_00506fbc
// address: 0x506fbc
// body: available
// range: 0x506fbc-0x507035 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00506fbc(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  if (param_3 == (int *)0x0) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + 0x40) != 0;
  }
  if (bVar3 && param_2 < 0x80000000) {
    iVar1 = FUN_00507098(param_1);
    bVar3 = (int)param_2 < iVar1;
  }
  else {
    bVar3 = false;
  }
  if (bVar3 != false) {
    (**(code **)(*param_3 + 0x38))(param_3,*(undefined4 *)(param_1 + 0x34));
    (**(code **)(*param_3 + 0x44))(param_3,*(undefined4 *)(param_1 + 0x38));
    uVar5 = 0;
    uVar4 = 1;
    uVar2 = FUN_00462a64(param_3);
    FUN_005077bc(param_1,uVar2,0,uVar4,param_2,uVar5);
  }
  return bVar3;
}
