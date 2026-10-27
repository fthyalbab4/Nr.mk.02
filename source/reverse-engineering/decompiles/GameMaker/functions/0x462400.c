// rea decompile_all
// name: FUN_00462400
// address: 0x462400
// body: available
// range: 0x462400-0x462479 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00462400(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 auStack_60 [5];
  undefined4 uStack_4c;

  bVar5 = 0;
  puVar1 = (undefined4 *)FUN_00405a4c(&LAB_00433630,1);
  (**(code **)(*param_1 + 0x60))(param_1,puVar1);
  (**(code **)*puVar1)();
  FUN_0043f2b8(puVar1);
  puVar3 = (undefined4 *)(param_1[10] + 0x18);
  puVar4 = auStack_60;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  uStack_4c = 0;
  FUN_00462ef0(param_1);
  iVar2 = param_1[0xb];
  param_1[0xb] = 0;
  FUN_00405a7c(iVar2);
  FUN_00463324(param_1,0,0,puVar1,*(undefined1 *)(param_1[10] + 0x71),auStack_60);
  return;
}
