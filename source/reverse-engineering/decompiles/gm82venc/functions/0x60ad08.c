// rea decompile_all
// name: FUN_0060ad08
// address: 0x60ad08
// body: available
// range: 0x60ad08-0x60adb2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0060ad08(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 local_6c [24];

  bVar4 = 0;
  puVar2 = local_6c;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  iVar1 = FUN_00409c34(*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 <= *(int *)(param_1 + 0x88)) {
    FUN_00409dfc(param_1 + 0x8c,&DAT_00608224,1,*(int *)(param_1 + 0x88) + 10);
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
  puVar2 = local_6c;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x8c) + -0x60 + *(int *)(param_1 + 0x88) * 0x60);
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  DAT_00850eb8 = DAT_00850eb8 + 1;
  *(int *)(*(int *)(param_1 + 0x8c) + -0x30 + *(int *)(param_1 + 0x88) * 0x60) = DAT_00850eb8;
  iVar1 = *(int *)(param_1 + 0x88) + -1;
  *(int *)(param_1 + 0x90) = iVar1;
  return iVar1;
}
