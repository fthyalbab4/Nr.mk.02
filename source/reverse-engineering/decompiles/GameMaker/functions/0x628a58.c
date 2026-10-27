// rea decompile_all
// name: FUN_00628a58
// address: 0x628a58
// body: available
// range: 0x628a58-0x628b41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00628a58(int param_1)

{
  undefined4 uVar1;

  if (*(int *)(param_1 + 0xd8) == 0) {
    FUN_00406d88(L"Assertion failure",
                 L"C:\\Builds\\TP\\indysockets\\lib\\Protocols\\IdSSLOpenSSL.pas",0x552);
  }
  if (*(int *)(param_1 + 0x118) == 0) {
    uVar1 = FUN_006292fc(&DAT_006257a8,1,param_1);
    *(undefined4 *)(param_1 + 0x118) = uVar1;
  }
  if (*(int *)(*(int *)(param_1 + 0x118) + 0x14) != 0) {
    FUN_00406d88(L"Assertion failure",
                 L"C:\\Builds\\TP\\indysockets\\lib\\Protocols\\IdSSLOpenSSL.pas",0x556);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x118) + 0x14) = *(undefined4 *)(param_1 + 0x110);
  if (5 < *(int *)PTR_DAT_00781bfc) {
    FUN_005f66bc(*(undefined4 *)(param_1 + 0xd8),0xffff,0x1006,*(undefined4 *)(param_1 + 0xc0));
    FUN_005f66bc(*(undefined4 *)(param_1 + 0xd8),0xffff,0x1005,*(undefined4 *)(param_1 + 0xc0));
  }
  if (*(char *)(param_1 + 0x109) == '\0') {
    FUN_00629714(*(undefined4 *)(param_1 + 0x118),*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x10));
  }
  else {
    FUN_006293f0(*(undefined4 *)(param_1 + 0x118),*(undefined4 *)(*(int *)(param_1 + 0xd8) + 0x10));
  }
  *(undefined1 *)(param_1 + 0x108) = 0;
  return;
}
