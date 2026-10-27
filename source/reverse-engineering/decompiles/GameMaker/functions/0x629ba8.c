// rea decompile_all
// name: FUN_00629ba8
// address: 0x629ba8
// body: available
// range: 0x629ba8-0x629c06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00629ba8(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;

  *param_2 = 0;
  FUN_00404f08(&uStack_10,8,0);
  if ((*(int *)PTR_DAT_00781d20 != 0) && (iVar2 = *(int *)(param_1 + 0xc), iVar2 != 0)) {
    iVar1 = (**(code **)PTR_DAT_00781d20)();
    if (iVar1 != 0) {
      (**(code **)PTR_DAT_00781638)
                (*(code **)PTR_DAT_00781638,&uStack_c,iVar2,iVar1,&uStack_c,&uStack_10);
      *param_2 = uStack_10;
      param_2[1] = uStack_c;
    }
  }
  return;
}
