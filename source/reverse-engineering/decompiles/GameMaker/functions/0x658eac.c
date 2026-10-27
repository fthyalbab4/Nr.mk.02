// rea decompile_all
// name: FUN_00658eac
// address: 0x658eac
// body: available
// range: 0x658eac-0x658f4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00658eac(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 local_34 [10];

  bVar4 = 0;
  puVar2 = local_34;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  iVar1 = FUN_00409a18(*(undefined4 *)(param_1 + 0x2fc));
  if (iVar1 <= *(int *)(param_1 + 0x2f8)) {
    FUN_00409be0(param_1 + 0x2fc,&DAT_00656448,1,*(int *)(param_1 + 0x2f8) + 10);
  }
  *(int *)(param_1 + 0x2f8) = *(int *)(param_1 + 0x2f8) + 1;
  puVar2 = local_34;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 0x2fc) + -0x28 + *(int *)(param_1 + 0x2f8) * 0x28);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  DAT_0077f2e4 = DAT_0077f2e4 + 1;
  *(int *)(*(int *)(param_1 + 0x2fc) + -8 + *(int *)(param_1 + 0x2f8) * 0x28) = DAT_0077f2e4;
  iVar1 = *(int *)(param_1 + 0x2f8);
  FUN_00657b48(param_1);
  return iVar1 + -1;
}
