// rea decompile_all
// name: FUN_00542f20
// address: 0x542f20
// body: available
// range: 0x542f20-0x542f93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ushort FUN_00542f20(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;

  uVar2 = FUN_00542e0c(param_2,param_2,param_3,param_3);
  uVar1 = *(uint *)(*(int *)(param_1 + 4) + (short)uVar2 * 4);
  while( true ) {
    if ((uVar1 & 0xfffff000) == 0xfffff000) {
      return 0xffff;
    }
    if ((uVar1 & 0xfffff000) == param_2 << 0xc) break;
    uVar2 = FUN_00542e20(uVar2);
    uVar1 = *(uint *)(*(int *)(param_1 + 4) + (short)uVar2 * 4);
  }
  return *(ushort *)(*(int *)(param_1 + 4) + (short)uVar2 * 4) & 0xfff;
}
