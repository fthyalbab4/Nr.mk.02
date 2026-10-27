// rea decompile_all
// name: FUN_005f5ac0
// address: 0x5f5ac0
// body: available
// range: 0x5f5ac0-0x5f5b2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f5ac0(void)

{
  undefined4 uVar1;

  if ((char)PTR_FUN_0068861c != '\0') {
    uVar1 = FUN_00561fd4();
    FUN_004bb810(uVar1,DAT_008506d0);
    (**(code **)(**(int **)(DAT_008506c8 + 0x388) + 0x78))
              (*(int **)(DAT_008506c8 + 0x388),DAT_008506c8);
    PTR_FUN_0068861c._0_1_ = '\0';
  }
  FUN_0050fb8c(*(undefined4 *)(DAT_008506c8 + 0x394));
  FUN_004847fc(*(undefined4 *)(DAT_008506c8 + 0x39c),0);
  FUN_004847fc(*(undefined4 *)(DAT_008506c8 + 0x398),0);
  return;
}
