// rea decompile_all
// name: FUN_00607760
// address: 0x607760
// body: available
// range: 0x607760-0x6077ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00607760(int *param_1)

{
  int iVar1;

  FUN_005fdaf8(param_1);
  if (param_1[0x36] == 0) {
    iVar1 = FUN_005f6b08(&PTR_FUN_005f59b0,1,0);
    param_1[0x36] = iVar1;
  }
  else {
    FUN_005f6d10(param_1[0x36],1);
  }
  iVar1 = param_1[0x36];
  *(short *)(iVar1 + 0xc) = (short)param_1[0x39];
  *(undefined2 *)(iVar1 + 0xe) = *(undefined2 *)((int)param_1 + 0xe2);
  if ((param_1[0x27] != 0) && (0 < param_1[0x2e])) {
    (**(code **)(*param_1 + 0xd0))();
  }
  return;
}
