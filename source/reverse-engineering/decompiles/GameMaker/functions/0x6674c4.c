// rea decompile_all
// name: FUN_006674c4
// address: 0x6674c4
// body: available
// range: 0x6674c4-0x667526 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006674c4(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  cVar2 = (**(code **)(*param_1 + 0xdc))();
  if ((cVar2 != '\0') && (*(char *)((int)param_1 + 499) == '\0')) {
    uVar4 = *(undefined4 *)(*(int *)(*(int *)(param_1[0x6a] + 0x48) + 0x10) + 0x14);
    uVar3 = FUN_0046f990(uVar4,0x13);
    uVar1 = *(undefined4 *)(param_1[0x6a] + 0x48);
    uVar4 = FUN_0046619c(uVar4,uVar3);
    FUN_0045bbf8(uVar1,uVar4);
  }
  FUN_0067857c(param_1,param_2);
  return;
}
