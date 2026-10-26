// rea decompile_all
// name: FUN_006fb59c
// address: 0x6fb59c
// body: available
// range: 0x6fb59c-0x6fb5ae inclusive
// range: 0x6fb5fb-0x6fb712 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006fb59c(undefined4 param_1,undefined4 param_2)

{
  switch(param_1) {
  case 0:
    FUN_00407eb8(param_2,L"Western Europe");
    return;
  case 1:
    FUN_00407eb8(param_2,L"Machine Default");
    return;
  case 2:
    FUN_00407eb8(param_2,L"Eastern Europe");
    return;
  case 3:
    FUN_00407eb8(param_2,L"Cyrillic");
    return;
  case 4:
    FUN_00407eb8(param_2,L"Symbol");
    return;
  case 5:
    FUN_00407eb8(param_2,L"Japanese");
    return;
  case 6:
    FUN_00407eb8(param_2,L"Korean (Hangul)");
    return;
  case 7:
    FUN_00407eb8(param_2,L"Chinese (Simplified)");
    return;
  case 8:
    FUN_00407eb8(param_2,L"Chinese (Traditionel)");
    return;
  case 9:
    FUN_00407eb8(param_2,L"Korean (Johab)");
    return;
  case 10:
    FUN_00407eb8(param_2,L"Hebrew");
    return;
  case 0xb:
    FUN_00407eb8(param_2,L"Arabic");
    return;
  case 0xc:
    FUN_00407eb8(param_2,L"Greek");
    return;
  case 0xd:
    FUN_00407eb8(param_2,L"Turkish");
    return;
  case 0xe:
    FUN_00407eb8(param_2,L"Vietnamese");
    return;
  case 0xf:
    FUN_00407eb8(param_2,L"Thai");
    return;
  case 0x10:
    FUN_00407eb8(param_2,&DAT_006fb970);
    return;
  case 0x11:
    FUN_00407eb8(param_2,L"Baltic");
    return;
  case 0x12:
    FUN_00407eb8(param_2,&DAT_006fb9a0);
    return;
  default:
    FUN_00407eb8(param_2,L"Machine Default");
    return;
  }
}
