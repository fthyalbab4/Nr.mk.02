// rea decompile_all
// name: FUN_00661980
// address: 0x661980
// body: available
// range: 0x661980-0x6619ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00661980(int *param_1)

{
  int iVar1;
  int *piVar2;

  iVar1 = (**(code **)(*param_1 + 0x16c))();
  if (iVar1 != 0) {
    piVar2 = (int *)(**(code **)(*param_1 + 0x16c))();
    (**(code **)(*piVar2 + 0xc))(piVar2,param_1);
    return;
  }
  piVar2 = (int *)FUN_0067a47c(*(undefined4 *)PTR_DAT_00781c64,0);
  (**(code **)(*piVar2 + 0xc))(piVar2,param_1);
  return;
}
