// rea decompile_all
// name: FUN_004b4a34
// address: 0x4b4a34
// body: available
// range: 0x4b4a34-0x4b4acc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b4a34(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;

  cVar1 = FUN_00405c98(param_2,&PTR_FUN_0049c0f0);
  if (cVar1 == '\0') {
    FUN_0043c550(param_1,param_2);
  }
  else {
    uVar2 = FUN_004b4780(param_2);
    FUN_004b479c(param_1,uVar2);
    uVar2 = FUN_004b4854(param_2);
    FUN_004b4874(param_1,uVar2);
    uVar2 = FUN_004b48b0(param_2);
    FUN_004b48d0(param_1,uVar2);
    uVar2 = FUN_004b490c(param_2);
    FUN_004b492c(param_1,uVar2);
    uVar2 = FUN_004b47d4(param_2);
    FUN_004b47f0(param_1,uVar2);
    iVar3 = 0;
    do {
      uVar2 = FUN_004b4968(param_2,iVar3);
      FUN_004b4990(param_1,iVar3,uVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x20);
  }
  return;
}
