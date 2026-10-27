// rea decompile_all
// name: FUN_00621034
// address: 0x621034
// body: available
// range: 0x621034-0x6210cc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00621034(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_18;
  undefined4 local_14;

  iVar1 = FUN_00404324((int)((longlong)param_1 * (longlong)param_2) * 4,
                       (int)((ulonglong)((longlong)param_1 * (longlong)param_2) >> 0x20));
  if (-1 < param_2 + -1) {
    iVar4 = 0;
    local_14 = param_2;
    do {
      if (-1 < param_1 + -1) {
        iVar2 = 0;
        local_18 = param_1;
        do {
          iVar5 = iVar4 * param_1 + iVar2;
          *(undefined1 *)(iVar1 + 2 + iVar5 * 4) = 0xff;
          *(undefined1 *)(iVar1 + 1 + iVar5 * 4) = 0xff;
          *(undefined1 *)(iVar1 + iVar5 * 4) = 0xff;
          *(undefined1 *)(iVar1 + 3 + iVar5 * 4) = *(undefined1 *)(param_3 + iVar5);
          iVar2 = iVar2 + 1;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
      }
      iVar4 = iVar4 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  uVar3 = FUN_00620474(param_1,param_2,iVar1);
  FUN_00404340(iVar1);
  return uVar3;
}
