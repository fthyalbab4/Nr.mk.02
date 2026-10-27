// rea decompile_all
// name: FUN_004f3800
// address: 0x4f3800
// body: available
// range: 0x4f3800-0x4f3862 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f3800(int *param_1)

{
  int iVar1;
  undefined4 uVar2;

  if (param_1[0x5d] == 0) {
    iVar1 = FUN_004ee610(param_1);
    if (iVar1 < 1) {
      iVar1 = FUN_00417bd4(&LAB_004f3864);
      param_1[0x5d] = iVar1;
    }
    else {
      iVar1 = FUN_00417b94(iVar1 + 1);
      param_1[0x5d] = iVar1;
      uVar2 = FUN_00417b9c(iVar1);
      FUN_004ee620(param_1,iVar1,uVar2);
    }
  }
  FUN_004ecb70();
  (**(code **)(*param_1 + 0xc4))();
  return;
}
