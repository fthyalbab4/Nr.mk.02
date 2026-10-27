// rea decompile_all
// name: FUN_0057d76c
// address: 0x57d76c
// body: available
// range: 0x57d76c-0x57d7b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057d76c(int param_1,int *param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;

  uVar2 = *(uint *)(param_1 + 0x6c);
  while( true ) {
    param_4 = param_4 + -1;
    if (param_4 < 0) break;
    uVar5 = 0;
    puVar3 = *(undefined1 **)(*param_2 + param_3 * 4);
    puVar4 = (undefined1 *)*param_5;
    param_3 = param_3 + 1;
    param_5 = param_5 + 1;
    if (uVar2 != 0) {
      do {
        uVar5 = uVar5 + 1;
        puVar4[2] = *puVar3;
        puVar4[1] = *puVar3;
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 3;
      } while (uVar5 < uVar2);
    }
  }
  return;
}
