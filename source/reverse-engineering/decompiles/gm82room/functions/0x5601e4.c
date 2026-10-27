// rea decompile_all
// name: FUN_005601e4
// address: 0x5601e4
// body: available
// range: 0x5601e4-0x56021c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005601e4(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte bVar5;

  bVar5 = 0;
  uVar3 = *(int *)(param_1 + 0x28) + 1;
  if (uVar3 < (uint)param_2[1]) {
    iVar1 = FUN_00405fac(&DAT_0055a2c0,CONCAT31((int3)(uVar3 >> 8),1));
    puVar4 = (undefined4 *)(iVar1 + 4);
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *param_2;
      param_2 = param_2 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    FUN_00438d04(param_1,iVar1);
  }
  return;
}
