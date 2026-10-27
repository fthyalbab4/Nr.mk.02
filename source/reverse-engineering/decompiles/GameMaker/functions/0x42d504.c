// rea decompile_all
// name: FUN_0042d504
// address: 0x42d504
// body: available
// range: 0x42d504-0x42d554 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042d504(int *param_1,undefined4 *param_2,byte *param_3)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;

  pbVar5 = (byte *)param_2[4];
  if ((byte *)param_2[4] == (byte *)0x80000000) {
    pbVar5 = param_3;
  }
  pcVar2 = (code *)param_2[2];
  if (*(byte *)((int)param_2 + 0xb) != 0xff) {
    if (0xfd < *(byte *)((int)param_2 + 0xb)) {
      (**(code **)((int)(short)pcVar2 + *param_1))();
      return;
    }
    (*pcVar2)(param_1,pbVar5);
    return;
  }
  pbVar5 = (byte *)(((uint)pcVar2 & 0xffffff) + (int)param_1);
  bVar1 = *(byte *)(*(int *)*param_2 + 2 + (uint)*(byte *)(*(int *)*param_2 + 1));
  bVar3 = *param_3;
  if (bVar1 <= *param_3) {
    bVar3 = bVar1;
  }
  *pbVar5 = bVar3;
  uVar4 = (uint)bVar3;
  while( true ) {
    pbVar5 = pbVar5 + 1;
    param_3 = param_3 + 1;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    *pbVar5 = *param_3;
  }
  return;
}
