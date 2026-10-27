// rea decompile_all
// name: FUN_0055a830
// address: 0x55a830
// body: available
// range: 0x55a830-0x55a8ca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0055a830(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;

  puVar2 = (undefined4 *)param_1[6];
  pbVar6 = (byte *)*puVar2;
  iVar4 = puVar2[1];
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar2[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar6 = (byte *)*puVar2;
    iVar4 = puVar2[1];
  }
  iVar4 = iVar4 + -1;
  bVar1 = *pbVar6;
  pbVar6 = pbVar6 + 1;
  if (iVar4 == 0) {
    iVar4 = (*(code *)puVar2[3])(param_1);
    if (iVar4 == 0) {
      return 0;
    }
    pbVar6 = (byte *)*puVar2;
    iVar4 = puVar2[1];
  }
  uVar5 = (uint)*pbVar6;
  if ((bVar1 != 0xff) || (uVar5 != 0xd8)) {
    iVar3 = *param_1;
    *(undefined4 *)(iVar3 + 0x14) = 0x35;
    *(uint *)(iVar3 + 0x18) = (uint)bVar1;
    *(uint *)(iVar3 + 0x1c) = uVar5;
    (**(code **)*param_1)();
  }
  param_1[0x68] = uVar5;
  *puVar2 = pbVar6 + 1;
  puVar2[1] = iVar4 + -1;
  return 1;
}
