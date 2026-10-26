// rea decompile_all
// name: FUN_006c6844
// address: 0x6c6844
// body: available
// range: 0x6c6844-0x6c6886 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c6844(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;

  iVar1 = FUN_004047b0(0x5e31ea,param_2,param_3,param_3);
  UNRECOVERED_JUMPTABLE = (code *)((iVar1 + 0x1734) * 0xd0001);
  iVar1 = 0x67;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x73;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
                    /* WARNING: Could not recover jumptable at 0x006c6885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}
