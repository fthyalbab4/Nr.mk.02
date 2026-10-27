// rea decompile_all
// name: FUN_005b8280
// address: 0x5b8280
// body: available
// range: 0x5b8280-0x5b82d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005b8280(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;

  puVar1 = PTR_DAT_0068939c;
  iVar5 = *(int *)(*(int *)PTR_DAT_0068939c + 0x68);
  if (-1 < iVar5 + -1) {
    iVar4 = 0;
    do {
      uVar6 = param_4;
      uVar7 = param_5;
      uVar8 = param_6;
      uVar9 = param_7;
      uVar3 = FUN_00608fec(*(undefined4 *)puVar1,iVar4,param_3,param_4,param_5,param_6,param_7);
      cVar2 = FUN_0060e5a4(uVar3,1,extraout_ECX,uVar6,uVar7,uVar8,uVar9);
      param_3 = extraout_ECX_00;
      if (cVar2 != '\0') {
        FUN_00608fec(*(undefined4 *)puVar1,iVar4);
        FUN_005b8124();
        param_3 = extraout_ECX_01;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}
