// rea decompile_all
// name: FUN_0057bae4
// address: 0x57bae4
// body: available
// range: 0x57bae4-0x57bbee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057bae4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_1c [8];
  undefined1 local_14 [16];

  FUN_0057b2c0(param_1,local_14,local_1c);
  iVar1 = FUN_004048b8();
  if (iVar1 != 0) {
    iVar2 = FUN_00567708(3,0xffffffff);
    if (-1 < iVar1) {
      iVar1 = iVar1 + 1;
      iVar3 = 0;
      do {
        FUN_0057b2c0(param_1,local_14,local_1c);
        iVar2 = FUN_0056771c();
        if ((0 < iVar3) && (iVar2 = iVar3 / 500, iVar3 % 500 == 0)) {
          FUN_0056788c(iVar2);
          FUN_00567708(3,0xffffffff);
          iVar2 = FUN_0056771c();
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_0056788c(iVar2);
  }
  return;
}
