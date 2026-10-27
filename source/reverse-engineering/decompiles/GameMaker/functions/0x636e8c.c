// rea decompile_all
// name: FUN_00636e8c
// address: 0x636e8c
// body: available
// range: 0x636e8c-0x636f0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00636e8c(undefined4 param_1,undefined4 param_2,int *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  char cVar2;
  undefined1 uVar3;

  uVar1 = FUN_00636514(DAT_0078a100,0xe,param_1,L"Rotate the Image",
                       *(undefined4 *)(DAT_0078a100 + 0x4ac),param_2);
  *param_3 = *(int *)(*(int *)(DAT_0078a100 + 0x4b4) + 0x290);
  cVar2 = (**(code **)(**(int **)(DAT_0078a100 + 0x4bc) + 0xec))();
  if (cVar2 != '\0') {
    *param_3 = 0x168 - *param_3;
  }
  uVar3 = (**(code **)(**(int **)(DAT_0078a100 + 0x3b0) + 0xec))();
  *param_4 = uVar3;
  return uVar1;
}
