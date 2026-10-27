// rea decompile_all
// name: FUN_0055c348
// address: 0x55c348
// body: available
// range: 0x55c348-0x55c3ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055c348(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;

  FUN_0055c10c(param_1);
  FUN_0055c12c(param_1,param_1[0xe] * 3 + 8);
  if ((0xffff < param_1[8]) || (0xffff < param_1[7])) {
    iVar2 = *param_1;
    *(undefined4 *)(iVar2 + 0x14) = 0x29;
    *(undefined4 *)(iVar2 + 0x18) = 0xffff;
    (**(code **)*param_1)();
  }
  FUN_0055c0dc(param_1,param_1[0xd]);
  FUN_0055c12c(param_1,param_1[8]);
  FUN_0055c12c(param_1,param_1[7]);
  FUN_0055c0dc(param_1,param_1[0xe]);
  puVar1 = (undefined4 *)param_1[0x10];
  for (iVar2 = 0; iVar2 < param_1[0xe]; iVar2 = iVar2 + 1) {
    FUN_0055c0dc(param_1,*puVar1);
    FUN_0055c0dc(param_1,puVar1[2] * 0x10 + puVar1[3]);
    FUN_0055c0dc(param_1,puVar1[4]);
    puVar1 = puVar1 + 0x15;
  }
  return;
}
