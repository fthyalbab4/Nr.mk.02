// rea decompile_all
// name: FUN_0055c850
// address: 0x55c850
// body: available
// range: 0x55c850-0x55c920 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055c850(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_1c;
  int local_18;
  int local_14;

  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = 0;
    local_14 = 0;
    iVar4 = 0;
    iVar5 = 0;
    local_1c = FUN_0055cca8(param_1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x11));
    local_18 = 0;
    while( true ) {
      cVar1 = FUN_0055cf60(param_1,&local_1c,&local_18);
      if (cVar1 == '\0') break;
      local_14 = local_14 + local_18;
      FUN_0055cf60(param_1,&local_1c,&local_18);
      iVar3 = iVar3 + local_18;
      if (iVar5 == iVar4) {
        if (iVar5 < 0x40) {
          iVar5 = 0x40;
        }
        else {
          iVar2 = iVar5;
          if (iVar5 < 0) {
            iVar2 = iVar5 + 3;
          }
          iVar5 = iVar5 + (iVar2 >> 2);
        }
        FUN_00409dfc(param_1 + 0x10,&DAT_00558c7c,1,iVar5);
      }
      *(int *)(*(int *)(param_1 + 0x10) + 4 + iVar4 * 0xc) = local_14;
      *(int *)(*(int *)(param_1 + 0x10) + 8 + iVar4 * 0xc) = iVar3;
      iVar4 = iVar4 + 1;
    }
    FUN_00409dfc(param_1 + 0x10,&DAT_00558c7c,1,iVar4);
  }
  return;
}
