// rea decompile_all
// name: FUN_00404c44
// address: 0x404c44
// body: available
// range: 0x404c44-0x404c88 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00404c44(undefined *param_1,code *param_2)

{
  ushort uVar1;
  int iVar2;

  if ((ushort)(*(short *)(param_1 + 4) + 0x284fU) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (ushort)(*(short *)(param_1 + 4) + 0x284fU) - 1;
    uVar1 = (ushort)iVar2;
    if (uVar1 < 2) {
      iVar2 = (*param_2)(param_1,param_2,CONCAT22((short)((uint)iVar2 >> 0x10),uVar1 - 2));
    }
    else if ((param_1 == &DAT_0068a32c) || (param_1 == &DAT_0068a5fc)) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0x67;
    }
  }
  if (iVar2 != 0) {
    FUN_004044ac(iVar2);
  }
  return iVar2;
}
