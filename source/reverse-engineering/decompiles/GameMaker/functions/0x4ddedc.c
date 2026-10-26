// rea decompile_all
// name: FUN_004ddedc
// address: 0x4ddedc
// body: available
// range: 0x4ddedc-0x4ddf5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004ddedc(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 local_404 [512];

  local_404[0] = 0;
  if (param_1[0xf] != 0) {
    (**(code **)(*param_1 + 0x38))();
    FUN_004dde0c();
  }
  if (param_1[0x16] != 0) {
    uVar1 = FUN_00407f44(param_1[0x16]);
    iVar2 = FUN_00417854(uVar1,local_404);
    if (iVar2 == 0) {
      return 0;
    }
  }
  FUN_004080c8(param_1 + 0x16,local_404,0x200);
  return 1;
}
