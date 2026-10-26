// rea decompile_all
// name: FUN_00535260
// address: 0x535260
// body: available
// range: 0x535260-0x5352c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00535260(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined4 *puVar1;
  int iVar2;

  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  iVar2 = FUN_00409a18(*(undefined4 *)(param_1 + 0x18));
  if (iVar2 < *(int *)(param_1 + 0x1c)) {
    FUN_00409be0(param_1 + 0x18,&DAT_005348a0,1,*(int *)(param_1 + 0x1c) + 10);
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x18) + -0x20 + *(int *)(param_1 + 0x1c) * 0x20);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1[2] = param_6;
  puVar1[3] = param_7;
  puVar1[4] = param_4;
  puVar1[5] = param_5;
  return;
}
