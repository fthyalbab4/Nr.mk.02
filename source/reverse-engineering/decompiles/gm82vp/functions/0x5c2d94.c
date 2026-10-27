// rea decompile_all
// name: FUN_005c2d94
// address: 0x5c2d94
// body: available
// range: 0x5c2d94-0x5c2e4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c2d94(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar1 = *(int *)(param_1 + 0x1b6);
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  uVar2 = (*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x400);
  *(undefined4 *)(iVar1 + 0x1c) = uVar2;
  iVar3 = 0;
  iVar5 = -0x80;
  do {
    *(int *)(*(int *)(iVar1 + 0x10) + iVar3 * 4) = iVar5 * 0x166e9 + 0x8000 >> 0x10;
    *(int *)(*(int *)(iVar1 + 0x14) + iVar3 * 4) = iVar5 * 0x1c5a2 + 0x8000 >> 0x10;
    *(int *)(*(int *)(iVar1 + 0x18) + iVar3 * 4) = iVar5 * -0xb6d2;
    iVar4 = iVar5 * -0x581a;
    iVar5 = iVar5 + 1;
    *(int *)(*(int *)(iVar1 + 0x1c) + iVar3 * 4) = iVar4 + 0x8000;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x100);
  return;
}
