// rea decompile_all
// name: FUN_00672300
// address: 0x672300
// body: available
// range: 0x672300-0x672330 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00672300(int param_1,undefined1 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined **ppuVar2;

  if (*(int *)(param_1 + 0x1c) == 0) {
    ppuVar2 = &PTR_FUN_0066c650;
    FUN_00672408(param_1,param_2,param_3,&PTR_FUN_0066c650);
    uVar1 = FUN_00671654();
    uVar1 = FUN_00672ba8(&PTR_FUN_0066ad44,1,uVar1,ppuVar2);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
  }
  return *(undefined4 *)(param_1 + 0x1c);
}
