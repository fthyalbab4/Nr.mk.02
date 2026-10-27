// rea decompile_all
// name: FUN_005c4c8c
// address: 0x5c4c8c
// body: available
// range: 0x5c4c8c-0x5c4d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c4c8c(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;

  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,param_2 << 5);
  *puVar1 = 0;
  puVar1[1] = 0x1f;
  puVar1[2] = 0;
  puVar1[3] = 0x3f;
  puVar1[4] = 0;
  puVar1[5] = 0x1f;
  FUN_005c465c(param_1,puVar1);
  iVar2 = FUN_005c4a2c(param_1,puVar1,1,param_2);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      FUN_005c4b48(param_1,puVar1 + iVar3 * 8,iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  param_1[0x20] = iVar2;
  iVar3 = *param_1;
  *(undefined4 *)(iVar3 + 0x14) = 0x5f;
  *(int *)(iVar3 + 0x18) = iVar2;
  (**(code **)(*param_1 + 4))(param_1,1);
  return;
}
