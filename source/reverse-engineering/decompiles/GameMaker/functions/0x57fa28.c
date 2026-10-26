// rea decompile_all
// name: FUN_0057fa28
// address: 0x57fa28
// body: available
// range: 0x57fa28-0x57faee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057fa28(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_10;

  iVar1 = *(int *)(param_1 + 0x19a);
  iVar2 = *(int *)(param_1 + 0x12e);
  iVar3 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,*(int *)(param_1 + 0x20) << 3);
  *(int *)(iVar1 + 0x38) = iVar3;
  *(int *)(iVar1 + 0x3c) = iVar3 + *(int *)(param_1 + 0x20) * 4;
  uStack_10 = *(int *)(param_1 + 0xd4);
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x20); iVar3 = iVar3 + 1) {
    iVar4 = (*(int *)(uStack_10 + 0xc) * *(int *)(uStack_10 + 0x24)) / *(int *)(param_1 + 0x12e);
    iVar5 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,(iVar2 + 4) * iVar4 * 8);
    iVar5 = iVar5 + iVar4 * 4;
    *(int *)(*(int *)(iVar1 + 0x38) + iVar3 * 4) = iVar5;
    *(int *)(*(int *)(iVar1 + 0x3c) + iVar3 * 4) = iVar5 + (iVar2 + 4) * iVar4 * 4;
    uStack_10 = uStack_10 + 0x54;
  }
  return;
}
