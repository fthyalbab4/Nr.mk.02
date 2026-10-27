// rea decompile_all
// name: FUN_0065c7e8
// address: 0x65c7e8
// body: available
// range: 0x65c7e8-0x65c8ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065c7e8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_14;

  if (param_2 == 0) {
    FUN_0065cab4(param_1,0,0);
  }
  else {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    FUN_00409dfc(param_1 + 0xc,&DAT_00659678,1,*(undefined4 *)(param_1 + 4));
    local_14 = *(int *)(param_1 + 4);
    if (-1 < local_14 + -1) {
      iVar2 = 0;
      do {
        FUN_00409dfc(*(int *)(param_1 + 0xc) + iVar2 * 4,&DAT_00659638,1,
                     *(undefined4 *)(param_1 + 8));
        iVar2 = iVar2 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    local_14 = *(int *)(param_1 + 4);
    if (-1 < local_14 + -1) {
      iVar2 = 0;
      do {
        iVar3 = *(int *)(param_1 + 8);
        if (-1 < iVar3 + -1) {
          iVar1 = 0;
          do {
            FUN_00409360(*(int *)(*(int *)(param_1 + 0xc) + iVar2 * 4) + iVar1 * 0x18,
                         *(int *)(*(int *)(param_2 + 0xc) + iVar2 * 4) + iVar1 * 0x18,&DAT_00615f70)
            ;
            iVar1 = iVar1 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        iVar2 = iVar2 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
  }
  return;
}
