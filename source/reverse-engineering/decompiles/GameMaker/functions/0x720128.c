// rea decompile_all
// name: FUN_00720128
// address: 0x720128
// body: available
// range: 0x720128-0x7201ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00720128(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [24];

  iVar1 = (**(code **)(**(int **)(param_1 + 0x398) + 0xec))();
  if (-1 < iVar1) {
    *(undefined1 *)(param_1 + 0x45c) = 1;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x398) + 0xec))();
    FUN_00535148(*(undefined4 *)(param_1 + 0x444),uVar2,auStack_1c);
    uVar2 = FUN_00404878();
    FUN_00530760(*(undefined4 *)(param_1 + 0x39c),uVar2);
    uVar2 = (**(code **)(**(int **)(param_1 + 0x398) + 0xec))();
    FUN_00535148(*(undefined4 *)(param_1 + 0x444),uVar2,auStack_1c);
    uVar2 = FUN_00404878();
    FUN_00530760(*(undefined4 *)(param_1 + 0x3a0),uVar2);
    uVar2 = (**(code **)(**(int **)(param_1 + 0x398) + 0xec))();
    FUN_00535148(*(undefined4 *)(param_1 + 0x444),uVar2,auStack_1c);
    uVar2 = FUN_00404878();
    FUN_00530760(*(undefined4 *)(param_1 + 0x3bc),uVar2);
    *(undefined1 *)(param_1 + 0x45c) = 0;
  }
  return;
}
