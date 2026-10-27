// rea decompile_all
// name: FUN_004c8080
// address: 0x4c8080
// body: available
// range: 0x4c8080-0x4c80f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c8080(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;

  if ((param_3 == 0) &&
     (param_3 = *(int *)(*(int *)(param_1 + 100) + 8), iVar1 = param_3, param_4 != '\0')) {
    do {
      param_3 = iVar1;
      iVar1 = *(int *)(param_3 + 0xc);
    } while (*(int *)(param_3 + 0xc) != 0);
  }
  if (param_4 == '\0') {
    *(int *)(param_2 + 0xc) = param_3;
    iVar1 = *(int *)(param_3 + 0x18);
    *(int *)(param_2 + 0x18) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0xc) = param_2;
    }
    *(int *)(param_3 + 0x18) = param_2;
    iVar1 = *(int *)(param_3 + 0x14);
    *(int *)(param_2 + 0x14) = iVar1;
    if (param_3 == *(int *)(iVar1 + 8)) {
      *(int *)(iVar1 + 8) = param_2;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_3 + 0x14);
    *(int *)(param_2 + 0x18) = param_3;
    iVar1 = *(int *)(param_3 + 0xc);
    *(int *)(param_2 + 0xc) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x18) = param_2;
    }
    *(int *)(param_3 + 0xc) = param_2;
  }
  FUN_004c754c(*(undefined4 *)(param_3 + 0x14));
  FUN_004c78e4(*(undefined4 *)(param_3 + 0x14));
  return;
}
