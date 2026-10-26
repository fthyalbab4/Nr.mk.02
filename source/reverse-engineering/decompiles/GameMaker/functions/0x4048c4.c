// rea decompile_all
// name: FUN_004048c4
// address: 0x4048c4
// body: available
// range: 0x4048c4-0x40491c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004048c4(int param_1,undefined2 param_2)

{
  ushort uVar1;
  int iVar2;

  uVar1 = *(ushort *)(param_1 + 4);
  if ((uVar1 < 0xd7b0) || (0xd7b3 < uVar1)) {
    iVar2 = 0x66;
  }
  else {
    if (uVar1 != 0xd7b0) {
      FUN_00404d1c(param_1);
    }
    *(undefined2 *)(param_1 + 4) = param_2;
    if ((*(short *)(param_1 + 0x48) == 0) && (*(int *)(param_1 + 0x18) == 0)) {
      *(code **)(param_1 + 0x18) = FUN_004049f0;
    }
    iVar2 = (**(code **)(param_1 + 0x18))(param_1);
  }
  if (iVar2 != 0) {
    FUN_004044a4(iVar2);
  }
  return iVar2;
}
