// rea decompile_all
// name: FUN_00442db4
// address: 0x442db4
// body: available
// range: 0x442db4-0x442e01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00442db4(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 local_14;
  undefined1 local_10;
  int local_c;
  undefined1 local_8;

  iVar2 = 0;
  FUN_00407eb8(param_2,param_1);
  while( true ) {
    cVar1 = FUN_0043a99c(*param_2);
    if (cVar1 != '\0') break;
    iVar2 = iVar2 + 1;
    local_10 = 0x11;
    local_8 = 0;
    local_14 = param_1;
    local_c = iVar2;
    FUN_00417d4c(L"%s_%d",&local_14,1,param_2);
  }
  return;
}
