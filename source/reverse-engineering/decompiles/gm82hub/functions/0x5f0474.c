// rea decompile_all
// name: FUN_005f0474
// address: 0x5f0474
// body: available
// range: 0x5f0474-0x5f050c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005f0474(void)

{
  int iVar1;
  int *in_stack_00000008;
  float *in_stack_0000000c;
  byte in_stack_00000010;

  if ((in_stack_00000010 & 4) == 0) {
    iVar1 = FUN_004048b8();
    *in_stack_00000008 = iVar1;
    iVar1 = FUN_004048b8();
    in_stack_00000008[1] = iVar1;
  }
  else {
    iVar1 = MulDiv(*in_stack_00000008,*(int *)(*(int *)PTR_DAT_00689620 + 0x44),0x9ec);
    *in_stack_0000000c = (float)iVar1;
    iVar1 = MulDiv(in_stack_00000008[1],*(int *)(*(int *)PTR_DAT_00689620 + 0x44),0x9ec);
    in_stack_0000000c[1] = (float)iVar1;
  }
  return 0;
}
