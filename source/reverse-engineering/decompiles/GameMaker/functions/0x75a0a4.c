// rea decompile_all
// name: FUN_0075a0a4
// address: 0x75a0a4
// body: available
// range: 0x75a0a4-0x75a1a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0075a0a4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;

  if (*(int *)(param_1 + 0x14) == 0) {
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    iVar3 = 0;
    iVar4 = 0;
    local_24 = FUN_0075a428(param_1,*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 4) + 0xd));
    local_20 = 0;
    while( true ) {
      cVar1 = FUN_0075a6e0(param_1,&local_24,&local_20);
      if (cVar1 == '\0') break;
      local_14 = local_14 + local_20;
      FUN_0075a6e0(param_1,&local_24,&local_20);
      local_1c = local_1c + local_20;
      FUN_0075a6e0(param_1,&local_24,&local_20);
      local_18 = local_18 + local_20;
      if (iVar4 == iVar3) {
        if (iVar4 < 0x40) {
          iVar4 = 0x40;
        }
        else {
          iVar2 = iVar4;
          if (iVar4 < 0) {
            iVar2 = iVar4 + 3;
          }
          iVar4 = iVar4 + (iVar2 >> 2);
        }
        FUN_00409be0(param_1 + 0x14,&DAT_00756438,1,iVar4);
      }
      *(int *)(*(int *)(param_1 + 0x14) + iVar3 * 0xc) = local_14;
      *(int *)(*(int *)(param_1 + 0x14) + 4 + iVar3 * 0xc) = local_1c;
      *(int *)(*(int *)(param_1 + 0x14) + 8 + iVar3 * 0xc) = local_18;
      iVar3 = iVar3 + 1;
    }
    FUN_00409be0(param_1 + 0x14,&DAT_00756438,1,iVar3);
  }
  return;
}
