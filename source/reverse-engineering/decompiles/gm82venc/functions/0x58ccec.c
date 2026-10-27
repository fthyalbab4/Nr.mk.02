// rea decompile_all
// name: FUN_0058ccec
// address: 0x58ccec
// body: available
// range: 0x58ccec-0x58cd51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058ccec(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;

  cVar3 = FUN_0058cc9c(param_1,param_2);
  if (cVar3 != '\0') {
    iVar1 = DAT_00686b30 + param_1 * 0x58;
    iVar2 = *(int *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar2 + 8 + param_2 * 0x30) = 0;
    *(undefined4 *)(iVar2 + 0xc + param_2 * 0x30) = 0;
    iVar2 = *(int *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar2 + 0x10 + param_2 * 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x14 + param_2 * 0x30) = 0;
    iVar2 = *(int *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar2 + 0x18 + param_2 * 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x1c + param_2 * 0x30) = 0;
    iVar2 = *(int *)(iVar1 + 0x1c);
    *(undefined4 *)(iVar2 + 0x20 + param_2 * 0x30) = 0;
    *(undefined4 *)(iVar2 + 0x24 + param_2 * 0x30) = 0;
    *(undefined4 *)(*(int *)(iVar1 + 0x1c) + 0x28 + param_2 * 0x30) = 0;
  }
  return;
}
