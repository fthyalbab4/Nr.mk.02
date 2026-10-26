// rea decompile_all
// name: FUN_005f9644
// address: 0x5f9644
// body: available
// range: 0x5f9644-0x5f969b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f9644(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 auStack_17fc [1531];

  bVar3 = 0;
  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = *(int *)(param_1 + 0x10);
  }
  FUN_005e2fc4(*(undefined4 *)(param_1 + 4),param_3,iVar1);
  (**(code **)(**(int **)PTR_DAT_007826d0 + 0x60))
            (*(int **)PTR_DAT_007826d0,param_3,auStack_17fc + 0x5f7);
  puVar2 = param_3 + (uint)bVar3 * -2 + 1;
  *param_3 = auStack_17fc[0x5f7];
  *puVar2 = auStack_17fc[(uint)bVar3 * -2 + 0x5f8];
  puVar2[(uint)bVar3 * -2 + 1] = auStack_17fc[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x5f9];
  (puVar2 + (uint)bVar3 * -2 + 1)[(uint)bVar3 * -2 + 1] =
       (auStack_17fc + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x5f9)[(uint)bVar3 * -2 + 1];
  if (param_2 < 0) {
    FUN_005f9018(param_1,0x10);
  }
  return;
}
