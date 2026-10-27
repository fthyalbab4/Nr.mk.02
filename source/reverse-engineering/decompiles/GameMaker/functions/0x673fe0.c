// rea decompile_all
// name: FUN_00673fe0
// address: 0x673fe0
// body: available
// range: 0x673fe0-0x674052 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00673fe0(int param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 local_10;
  undefined1 local_c;

  if (DAT_0077f38c == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x20) + -4);
    }
    bVar2 = iVar1 == 0;
  }
  if (bVar2) {
    iVar1 = FUN_00673fd0(param_1);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    local_10 = FUN_0043c914(param_1);
    local_c = 0;
    FUN_00417d4c(L"ActionClientItem%d",&local_10,0,param_2);
  }
  else {
    FUN_00407eb8(param_2,*(undefined4 *)(param_1 + 0x20));
  }
  return;
}
