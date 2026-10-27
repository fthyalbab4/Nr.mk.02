// rea decompile_all
// name: FUN_005259ec
// address: 0x5259ec
// body: available
// range: 0x5259ec-0x525a5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005259ec(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;

  pbVar6 = *(byte **)(*(int *)(param_1 + 0x14) + 0x18);
  uVar3 = FUN_005281b8(*(int *)(param_1 + 0x14),3);
  uVar4 = FUN_005281b8(*(undefined4 *)(param_1 + 0x14),4);
  bVar1 = 0;
  pbVar5 = pbVar6 + (uVar3 & 0xffff) * (uVar4 & 0xffff);
  for (; pbVar6 < pbVar5; pbVar6 = pbVar6 + 1) {
    bVar1 = *(byte *)(param_2 + (uint)*pbVar6);
    *pbVar6 = bVar1;
  }
  if (*(char *)(*(int *)(param_1 + 0x14) + 0x34) != '\0') {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x38);
    uVar3 = FUN_0052b664(uVar2,bVar1);
    FUN_0052b66c(uVar2,*(undefined1 *)(param_2 + (uVar3 & 0xff)));
  }
  return;
}
