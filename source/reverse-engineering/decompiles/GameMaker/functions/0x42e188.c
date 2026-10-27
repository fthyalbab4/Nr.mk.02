// rea decompile_all
// name: FUN_0042e188
// address: 0x42e188
// body: available
// range: 0x42e188-0x42e1c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042e188(int *param_1,int param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;

  puVar3 = *(undefined4 **)(param_2 + 0x10);
  if (*(undefined4 **)(param_2 + 0x10) == (undefined4 *)0x80000000) {
    puVar3 = param_3;
  }
  pcVar1 = *(code **)(param_2 + 4);
  if (*(byte *)(param_2 + 7) != 0xff) {
    if (0xfd < *(byte *)(param_2 + 7)) {
      (**(code **)((int)(short)pcVar1 + *param_1))();
      return;
    }
    (*pcVar1)(param_1,puVar3);
    return;
  }
  puVar3 = (undefined4 *)((int)param_1 + ((uint)pcVar1 & 0xffffff));
  uVar2 = puVar3[1];
  *param_3 = *puVar3;
  param_3[1] = uVar2;
  return;
}
