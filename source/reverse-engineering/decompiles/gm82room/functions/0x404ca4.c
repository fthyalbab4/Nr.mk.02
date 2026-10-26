// rea decompile_all
// name: FUN_00404ca4
// address: 0x404ca4
// body: available
// range: 0x404ca4-0x404cf9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00404ca4(undefined *param_1)

{
  ushort uVar1;
  int iVar2;

  iVar2 = 0;
  uVar1 = *(ushort *)(param_1 + 4);
  if ((uVar1 < 0xd7b1) || (0xd7b3 < uVar1)) {
    if (param_1 != &DAT_0068a05c) {
      FUN_004044ac(0x67);
    }
  }
  else {
    if ((uVar1 & 0xd7b2) == 0xd7b2) {
      iVar2 = (**(code **)(param_1 + 0x1c))(param_1);
    }
    if (iVar2 == 0) {
      iVar2 = (**(code **)(param_1 + 0x24))(param_1);
    }
    if (iVar2 != 0) {
      FUN_004044ac(iVar2);
    }
  }
  return iVar2;
}
