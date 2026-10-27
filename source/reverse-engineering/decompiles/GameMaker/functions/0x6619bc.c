// rea decompile_all
// name: FUN_006619bc
// address: 0x6619bc
// body: available
// range: 0x6619bc-0x661a1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006619bc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar1 = (**(code **)(*param_1 + 0x130))();
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      iVar2 = (**(code **)(*param_1 + 0x124))(param_1,iVar3);
      if ((iVar2 != 0) &&
         (iVar2 = (**(code **)(*param_1 + 0x124))(param_1,iVar3), *(char *)(iVar2 + 0x1d4) != '\0'))
      {
        iVar1 = (**(code **)(*param_1 + 0x124))(param_1,iVar3);
        return *(undefined4 *)(iVar1 + 0x1b4);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}
