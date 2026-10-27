// rea decompile_all
// name: FUN_00675ec8
// address: 0x675ec8
// body: available
// range: 0x675ec8-0x675f34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00675ec8(int param_1,int param_2,undefined4 param_3,undefined1 *param_4,undefined1 param_5,
                 undefined4 param_6)

{
  char cVar1;
  undefined1 uVar2;

  FUN_004eefd8(param_1,param_2,param_3,param_4,param_5,param_6);
  if (*(char *)(param_1 + 0x28c) == '\0') {
LAB_00675f25:
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_00405c98(param_2,&PTR_FUN_0066d144);
    if (cVar1 == '\0') {
      cVar1 = FUN_00405c98(param_2,&LAB_0066d4b8);
      if ((cVar1 == '\0') || (*(int *)(param_2 + 0x48) == *(int *)(param_1 + 0x278)))
      goto LAB_00675f25;
    }
    uVar2 = 1;
  }
  *param_4 = uVar2;
  return;
}
