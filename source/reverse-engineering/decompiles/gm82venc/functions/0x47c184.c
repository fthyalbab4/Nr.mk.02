// rea decompile_all
// name: FUN_0047c184
// address: 0x47c184
// body: available
// range: 0x47c184-0x47c1ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047c184(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  undefined4 auStack_1800 [1531];
  undefined1 local_14 [8];

  bVar3 = 0;
  if (*(int *)(*(int *)(param_2 + 8) + 8) == -0x4e0) {
    if (*(short *)(param_1 + 0x2c2) != 0) {
      (**(code **)(param_1 + 0x2c0))(*(undefined4 *)(param_1 + 0x2c4),param_1);
    }
    if (*(int *)(param_1 + 0x288) != 0) {
      puVar1 = (undefined4 *)(*(int *)(param_2 + 8) + 0x10 + (uint)bVar3 * -8);
      auStack_1800[0x5f7] = *(undefined4 *)(*(int *)(param_2 + 8) + 0xc);
      puVar2 = puVar1 + (uint)bVar3 * -2 + 1;
      auStack_1800[(uint)bVar3 * -2 + 0x5f8] = *puVar1;
      auStack_1800[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x5f9] = *puVar2;
      (auStack_1800 + (uint)bVar3 * -2 + (uint)bVar3 * -2 + 0x5f9)[(uint)bVar3 * -2 + 1] =
           puVar2[(uint)bVar3 * -2 + 1];
      FUN_00436aa0(auStack_1800[0x5f7],auStack_1800[0x5fa],local_14);
      FUN_004bb054(param_1,local_14,auStack_1800 + 0x5f5);
      (**(code **)(**(int **)(param_1 + 0x288) + 0x44))
                (*(int **)(param_1 + 0x288),auStack_1800[0x5f5],auStack_1800[0x5f6]);
    }
  }
  return;
}
