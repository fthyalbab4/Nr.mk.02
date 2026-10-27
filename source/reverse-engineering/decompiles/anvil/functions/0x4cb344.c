// rea decompile_all
// name: FUN_004cb344
// address: 0x4cb344
// body: available
// range: 0x4cb344-0x4cb3c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004cb344(int param_1,char param_2)

{
  char extraout_DL;
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;

  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = FUN_00406510();
    cVar1 = extraout_DL;
  }
  FUN_004c7138(param_1,0);
  FUN_004bb578(param_1,0);
  FUN_004bb810(param_1,&DAT_0080ffff);
  FUN_0045d3e0(*(undefined4 *)(param_1 + 0x270),*(undefined4 *)(*(int *)PTR_DAT_00689620 + 0x7c));
  FUN_0045c464(*(undefined4 *)(*(int *)(param_1 + 0x270) + 0x48),1);
  FUN_004bac98(param_1,0);
  FUN_004baccc(param_1,0);
  if (cVar1 != '\0') {
    FUN_00406568(param_1);
    *in_FS_OFFSET = uStack_18;
  }
  return param_1;
}
