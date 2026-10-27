// rea decompile_all
// name: FUN_004388c0
// address: 0x4388c0
// body: available
// range: 0x4388c0-0x438915 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004388c0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  iVar1 = FUN_0040bfac();
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_00405fac(&PTR_LAB_0042e000,1);
    iVar2 = FUN_0040bfac();
    *(int *)(iVar2 + 0x10) = iVar1;
  }
  iVar2 = FUN_0040bfac();
  FUN_00438d04(iVar1,*(undefined4 *)(iVar2 + 0xc));
  uVar3 = FUN_00405fac(&PTR_LAB_0042e000,1);
  iVar1 = FUN_0040bfac();
  *(undefined4 *)(iVar1 + 0xc) = uVar3;
  return;
}
