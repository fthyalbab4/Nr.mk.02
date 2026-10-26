// rea decompile_all
// name: FUN_00426ea4
// address: 0x426ea4
// body: available
// range: 0x426ea4-0x426eee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00426ea4(undefined2 *param_1,ULONG *param_2)

{
  undefined4 uVar1;
  int *local_20;
  VARIANTARG local_1c;

  uVar1 = FUN_0042c960(*param_1,&local_20);
  if ((char)uVar1 != '\0') {
    VariantInit(&local_1c);
    (**(code **)(*local_20 + 0x1c))(local_20,&local_1c,param_1,5);
    *param_2 = local_1c.n1.decVal.Hi32;
    param_2[1] = local_1c.n1._8_4_;
  }
  return uVar1;
}
