// rea decompile_all
// name: FUN_006e90d4
// address: 0x6e90d4
// body: available
// range: 0x6e90d4-0x6e9158 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006e90d4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  uVar1 = FUN_006e6650(&LAB_006e56d8,1);
  if ((*(int *)(param_1 + 4) != 0) && (-1 < param_2 + -1)) {
    iVar5 = 0;
    iVar6 = param_2;
    do {
      uVar2 = FUN_006e663c(param_1,iVar5 % *(int *)(param_1 + 4));
      FUN_006e6aa0(uVar1,uVar2);
      iVar3 = iVar5 << 7;
      iVar4 = FUN_00410538();
      uVar2 = FUN_006e663c(uVar1,iVar5);
      FUN_005b08f4(uVar2,0x80 - iVar4,1,iVar6,iVar3);
      iVar5 = iVar5 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return uVar1;
}
