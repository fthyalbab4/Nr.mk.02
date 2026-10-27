// rea decompile_all
// name: FUN_004aa758
// address: 0x4aa758
// body: available
// range: 0x4aa758-0x4aa7c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004aa758(int *param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  if (((param_3 == '\0') && (cVar1 = FUN_004061f8(param_1,&PTR_FUN_004a48d4), cVar1 != '\0')) &&
     (iVar2 = (**(code **)(*param_1 + 0x38))(), param_2 == iVar2)) {
    uVar3 = FUN_004abf9c(param_1);
  }
  else {
    for (iVar2 = FUN_004aa728(param_1,param_2,param_3 == '\0');
        (iVar2 != 0 && (*(int *)(iVar2 + 0x54) == 0)); iVar2 = *(int *)(iVar2 + 100)) {
    }
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(iVar2 + 0x54);
    }
  }
  return uVar3;
}
