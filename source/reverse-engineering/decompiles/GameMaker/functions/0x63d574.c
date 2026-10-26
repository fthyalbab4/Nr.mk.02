// rea decompile_all
// name: FUN_0063d574
// address: 0x63d574
// body: available
// range: 0x63d574-0x63d5e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063d574(int *param_1)

{
  int iVar1;

  iVar1 = param_1[0x11];
  if ((iVar1 == 1) || (iVar1 == 5)) {
    if (iVar1 == 1) {
      FUN_007022dc(*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x704),param_1[0xf]);
      FUN_00644610(*(undefined4 *)PTR_DAT_00781e14);
      FUN_0063c880(param_1,1);
      FUN_007022dc(param_1[0xf],*(undefined4 *)(*(int *)PTR_DAT_00781e14 + 0x704));
    }
    FUN_00702dfc(param_1[0xd],*(undefined4 *)PTR_DAT_007819d0,0);
    (**(code **)(*param_1 + 4))();
  }
  return;
}
