// rea decompile_all
// name: FUN_005b396c
// address: 0x5b396c
// body: available
// range: 0x5b396c-0x5b3a11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005b396c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;

  iVar1 = *(int *)(param_1 + 0x168);
  uVar2 = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)(iVar1 + 0x10) = **(undefined4 **)(param_1 + 0x18);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x18) + 4);
  if ((*(int *)(param_1 + 0xc4) != 0) && (*(int *)(iVar1 + 0x44) == 0)) {
    FUN_005b360c(iVar1,*(undefined4 *)(iVar1 + 0x48));
  }
  for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x10c); iVar4 = iVar4 + 1) {
    FUN_005b3494(iVar1,(int)*(short *)*param_2 >> ((byte)uVar2 & 0x1f),1);
    param_2 = param_2 + 1;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  *puVar3 = *(undefined4 *)(iVar1 + 0x10);
  puVar3[1] = *(undefined4 *)(iVar1 + 0x14);
  if (*(int *)(param_1 + 0xc4) != 0) {
    if (*(int *)(iVar1 + 0x44) == 0) {
      *(int *)(iVar1 + 0x44) = *(int *)(param_1 + 0xc4);
      *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + 1;
      *(uint *)(iVar1 + 0x48) = *(uint *)(iVar1 + 0x48) & 7;
    }
    *(int *)(iVar1 + 0x44) = *(int *)(iVar1 + 0x44) + -1;
  }
  return 1;
}
