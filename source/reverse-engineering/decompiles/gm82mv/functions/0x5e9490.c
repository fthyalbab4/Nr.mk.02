// rea decompile_all
// name: FUN_005e9490
// address: 0x5e9490
// body: available
// range: 0x5e9490-0x5e9505 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e9490(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;

  puVar2 = (uint *)(param_4 + -0x10);
  puVar3 = (uint *)(param_4 + -0xc);
  *(int *)(param_4 + -8) = *(int *)(param_4 + -8) << ((byte)param_1 & 0x1f);
  *puVar3 = *puVar3 - param_1;
  uVar1 = *puVar3;
  while (uVar1 < 0x19) {
    if (*(int *)(param_4 + -0x14) + 0x1000U <= *puVar2) {
      FUN_0043ca88(*(undefined4 *)(*(int *)(param_4 + -0x18) + 4),*(undefined4 *)(param_4 + -0x14),
                   0x800);
      *puVar2 = *(uint *)(param_4 + -0x14);
    }
    *(uint *)(param_4 + -8) =
         *(uint *)(param_4 + -8) | (uint)*(ushort *)*puVar2 << (0x18U - (char)*puVar3 & 0x1f);
    *puVar3 = *puVar3 + 8;
    *puVar2 = *puVar2 + 2;
    uVar1 = *puVar3;
  }
  return;
}
