// rea decompile_all
// name: FUN_0055625c
// address: 0x55625c
// body: available
// range: 0x55625c-0x5562d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055625c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;

  iVar1 = *(int *)(param_1 + 0x1a8);
  if (*(int *)(iVar1 + 0x30) == 0) {
    iVar3 = (**(code **)(*(int *)(param_1 + 0x1ac) + 0xc))(param_1,iVar1 + 8);
    if (iVar3 == 0) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x30) = 1;
  }
  uVar2 = *(uint *)(param_1 + 0x13c);
  (**(code **)(*(int *)(param_1 + 0x1b0) + 4))
            (param_1,iVar1 + 8,iVar1 + 0x34,param_4,param_3,param_2,uVar2);
  if (uVar2 <= *(uint *)(iVar1 + 0x34)) {
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  return;
}
