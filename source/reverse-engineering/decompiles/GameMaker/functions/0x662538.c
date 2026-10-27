// rea decompile_all
// name: FUN_00662538
// address: 0x662538
// body: available
// range: 0x662538-0x6625a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00662538(int *param_1,int param_2)

{
  int iVar1;

  if ((param_2 != param_1[0xc9]) && (param_1[0xc9] = param_2, param_2 != 0)) {
    *(int **)(param_2 + 0x374) = param_1;
    (**(code **)(*param_1 + 0x154))(param_1,*(undefined1 *)(param_2 + 0x2b0));
    iVar1 = param_1[0xc9];
    if (*(short *)(iVar1 + 0x2a2) != 0) {
      param_1[0xa8] = *(int *)(iVar1 + 0x2a0);
      param_1[0xa9] = *(int *)(iVar1 + 0x2a4);
    }
    *(undefined1 *)((int)param_1 + 0x30d) = *(undefined1 *)(param_1[0xc9] + 0x30d);
  }
  return;
}
