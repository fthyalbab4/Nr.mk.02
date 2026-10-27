// rea decompile_all
// name: FUN_006e8cf0
// address: 0x6e8cf0
// body: available
// range: 0x6e8cf0-0x6e8d92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006e8cf0(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;

  uVar1 = FUN_006e6650(&LAB_006e56d8,1);
  if ((*(int *)(param_1 + 4) != 0) && (-1 < param_2 + -1)) {
    iVar6 = 0;
    do {
      uVar2 = FUN_006e663c(param_1,iVar6 % *(int *)(param_1 + 4));
      FUN_006e6aa0(uVar1,uVar2);
      uVar2 = *(undefined4 *)PTR_DAT_007819d0;
      uVar8 = 0;
      uVar7 = 0;
      uVar3 = FUN_006e663c(uVar1,iVar6);
      uVar4 = FUN_00404878((int)((longlong)iVar6 * (longlong)param_4),
                           (int)((ulonglong)((longlong)iVar6 * (longlong)param_4) >> 0x20));
      uVar5 = FUN_00404878((int)((longlong)iVar6 * (longlong)param_3),
                           (int)((ulonglong)((longlong)iVar6 * (longlong)param_3) >> 0x20));
      FUN_005af828(uVar3,uVar5,uVar4,uVar7,uVar8,uVar2);
      iVar6 = iVar6 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return uVar1;
}
