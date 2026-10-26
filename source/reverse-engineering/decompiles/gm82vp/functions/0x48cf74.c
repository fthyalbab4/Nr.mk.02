// rea decompile_all
// name: FUN_0048cf74
// address: 0x48cf74
// body: available
// range: 0x48cf74-0x48cfd5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048cf74(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;

  FUN_004c45b8(*(undefined4 *)(param_1 + 4));
  cVar1 = FUN_004c4988(*(undefined4 *)(param_1 + 4));
  if (cVar1 != '\0') {
    cVar1 = FUN_00406268(*(undefined4 *)(param_1 + 4));
    if (cVar1 != '\0') {
      if (*(short *)(param_2 + 0x18) == 1) {
        *(undefined2 *)(param_2 + 0x18) = 2;
      }
      else if (*(short *)(param_2 + 0x18) == 2) {
        *(undefined2 *)(param_2 + 0x18) = 1;
      }
    }
    uVar2 = FUN_004c45dc(*(undefined4 *)(param_1 + 4));
    FUN_0040f0ac(uVar2,0x447,0,param_2);
  }
  return;
}
