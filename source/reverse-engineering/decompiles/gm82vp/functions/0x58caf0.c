// rea decompile_all
// name: FUN_0058caf0
// address: 0x58caf0
// body: available
// range: 0x58caf0-0x58cb40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058caf0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  char cVar3;

  cVar3 = FUN_0058ca30(param_1,param_2);
  if (cVar3 != '\0') {
    iVar1 = DAT_00686b30 + param_1 * 0x58;
    iVar2 = *(int *)(iVar1 + 0x14);
    *(undefined4 *)(iVar2 + 8 + param_2 * 0x30) = param_6;
    *(undefined4 *)(iVar2 + 0xc + param_2 * 0x30) = param_7;
    iVar1 = *(int *)(iVar1 + 0x14);
    *(undefined4 *)(iVar1 + 0x10 + param_2 * 0x30) = param_4;
    *(undefined4 *)(iVar1 + 0x14 + param_2 * 0x30) = param_5;
  }
  return;
}
