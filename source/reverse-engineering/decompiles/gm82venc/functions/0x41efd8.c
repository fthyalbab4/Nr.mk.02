// rea decompile_all
// name: FUN_0041efd8
// address: 0x41efd8
// body: available
// range: 0x41efd8-0x41f082 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0041efd8(int param_1)

{
  DWORD DVar1;
  int iVar2;
  bool bVar3;
  int local_18;
  int local_14;

  bVar3 = true;
  DVar1 = GetCurrentThreadId();
  if (DVar1 != *(DWORD *)(param_1 + 0x24)) {
    FUN_0041ef94(param_1);
    local_14 = *(int *)(param_1 + 0x28);
    FUN_0041ee04(*(undefined4 *)(param_1 + 0x20),&local_18);
    bVar3 = *(int *)(local_18 + 0xc) != 0;
    if (bVar3) {
      FUN_0041ed68(param_1 + 0xc);
    }
    while( true ) {
      iVar2 = FUN_0041ed88(param_1 + 0xc,0xffff0001);
      if (iVar2 == 0xffff) break;
      iVar2 = FUN_0041ed88(param_1 + 0xc,0xffff);
      if (iVar2 != 0) {
        FUN_0041efc8(param_1);
      }
    }
    FUN_0041ef94(param_1);
    if (bVar3) {
      FUN_0041ed74(param_1 + 0xc);
    }
    *(DWORD *)(param_1 + 0x24) = DVar1;
    iVar2 = FUN_0041ed68(param_1 + 0x28);
    bVar3 = iVar2 + -1 == local_14;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return bVar3;
}
