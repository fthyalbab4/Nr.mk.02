// rea decompile_all
// name: FUN_0063dd98
// address: 0x63dd98
// body: available
// range: 0x63dd98-0x63de8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0063dd98(void)

{
  int iVar1;

  FUN_00530760(DAT_0078a108[0xe7],DAT_0077f0f4);
  FUN_00530760(DAT_0078a108[0xe9],DAT_0077f0f8);
  FUN_0045bc24(*(undefined4 *)(DAT_0078a108[0xe5] + 0x1b4),DAT_0077f0fc);
  (**(code **)(*(int *)DAT_0078a108[0xeb] + 0xf0))((int *)DAT_0078a108[0xeb],DAT_0077f100);
  (**(code **)(*(int *)DAT_0078a108[0xed] + 0xf0))((int *)DAT_0078a108[0xed],DAT_0077f104);
  iVar1 = (**(code **)(*DAT_0078a108 + 0x110))();
  if (iVar1 == 1) {
    DAT_0077f0f4 = *(undefined4 *)(DAT_0078a108[0xe7] + 0x2a0);
    DAT_0077f0f8 = *(undefined4 *)(DAT_0078a108[0xe9] + 0x2a0);
    DAT_0077f0fc = *(undefined4 *)(*(int *)(*(int *)(DAT_0078a108[0xe5] + 0x1b4) + 0x10) + 0x14);
    DAT_0077f100 = (**(code **)(*(int *)DAT_0078a108[0xeb] + 0xec))();
    DAT_0077f104 = (**(code **)(*(int *)DAT_0078a108[0xed] + 0xec))();
  }
  return iVar1 == 1;
}
