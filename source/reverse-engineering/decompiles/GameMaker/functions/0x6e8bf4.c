// rea decompile_all
// name: FUN_006e8bf4
// address: 0x6e8bf4
// body: available
// range: 0x6e8bf4-0x6e8c62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006e8bf4(int param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar5;
  int iVar6;
  float10 fVar7;

  uVar2 = FUN_006e6650(&LAB_006e56d8,1);
  if ((*(int *)(param_1 + 4) != 0) && (-1 < param_2 + -1)) {
    iVar6 = 0;
    iVar5 = param_2;
    uVar4 = extraout_ECX;
    do {
      lVar1 = (longlong)iVar6 * (longlong)*(int *)(param_1 + 4);
      iVar3 = (int)lVar1;
      fVar7 = (float10)iVar3 / (float10)param_2;
      uVar4 = FUN_00410538(iVar3,(int)((ulonglong)lVar1 >> 0x20),uVar4,SUB108(fVar7,0),
                           (short)((unkuint10)fVar7 >> 0x40));
      uVar4 = FUN_006e663c(param_1,uVar4);
      FUN_006e6aa0(uVar2,uVar4);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
      uVar4 = extraout_ECX_00;
    } while (iVar5 != 0);
  }
  return uVar2;
}
