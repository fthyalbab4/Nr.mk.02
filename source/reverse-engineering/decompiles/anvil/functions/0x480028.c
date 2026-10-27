// rea decompile_all
// name: FUN_00480028
// address: 0x480028
// body: available
// range: 0x480028-0x48006c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00480028(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  iVar1 = GetDeviceCaps(*(HDC *)(*(int *)(param_1 + 0x58) + 0x20),0x5a);
  if (iVar1 != *(int *)(*(int *)(param_1 + 0x40) + 0x1c)) {
    uVar2 = FUN_0045bb10(*(int *)(param_1 + 0x40));
    iVar3 = GetDeviceCaps(*(HDC *)(*(int *)(param_1 + 0x58) + 0x20),0x5a);
    iVar1 = *(int *)(param_1 + 0x40);
    *(int *)(iVar1 + 0x1c) = iVar3;
    FUN_0045bb2c(iVar1,uVar2);
  }
  return;
}
