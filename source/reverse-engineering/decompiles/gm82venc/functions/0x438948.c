// rea decompile_all
// name: FUN_00438948
// address: 0x438948
// body: available
// range: 0x438948-0x4389a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00438948(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  iVar1 = FUN_0040bfac();
  FUN_00405fdc(*(undefined4 *)(iVar1 + 0xc));
  iVar1 = FUN_0040bfac();
  iVar1 = *(int *)(iVar1 + 0x10);
  uVar2 = FUN_00438ff4(iVar1);
  iVar3 = FUN_0040bfac();
  *(undefined4 *)(iVar3 + 0xc) = uVar2;
  FUN_00438d5c(iVar1,*(int *)(iVar1 + 8) + -1);
  if (*(int *)(iVar1 + 8) == 0) {
    iVar3 = FUN_0040bfac();
    *(undefined4 *)(iVar3 + 0x10) = 0;
    FUN_00405fdc(iVar1);
  }
  return;
}
