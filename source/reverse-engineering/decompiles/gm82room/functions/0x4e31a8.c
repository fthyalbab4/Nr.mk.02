// rea decompile_all
// name: FUN_004e31a8
// address: 0x4e31a8
// body: available
// range: 0x4e31a8-0x4e3247 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004e31a8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 uVar5;
  undefined4 extraout_ECX_00;
  int iVar6;

  uVar1 = FUN_004c45dc(param_1,param_2,param_3,2);
  iVar2 = (**(code **)PTR_DAT_00688ed8)();
  iVar3 = FUN_004e86fc(DAT_0068f2ec);
  if (-1 < iVar3 + -1) {
    iVar6 = 0;
    uVar5 = extraout_ECX;
    do {
      iVar4 = FUN_004e86e8(DAT_0068f2ec,iVar6,uVar5,uVar1);
      if (iVar2 == *(int *)(iVar4 + 4)) {
        uVar1 = FUN_004e86e8(DAT_0068f2ec,iVar6,extraout_ECX_00,uVar1);
        return uVar1;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
      uVar5 = extraout_ECX_00;
    } while (iVar3 != 0);
  }
  FUN_004e999c(DAT_0068f2ec);
  iVar3 = FUN_004e86fc(DAT_0068f2ec);
  if (-1 < iVar3 + -1) {
    iVar6 = 0;
    do {
      iVar4 = FUN_004e86e8(DAT_0068f2ec,iVar6);
      if (iVar2 == *(int *)(iVar4 + 4)) {
        uVar1 = FUN_004e86e8(DAT_0068f2ec,iVar6);
        return uVar1;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}
