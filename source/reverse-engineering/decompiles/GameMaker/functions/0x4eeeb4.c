// rea decompile_all
// name: FUN_004eeeb4
// address: 0x4eeeb4
// body: available
// range: 0x4eeeb4-0x4eef93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eeeb4(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  tagPOINT tStack_1c;
  uint uStack_14;
  int iStack_10;

  cVar1 = FUN_004fd5b8(DAT_00788248);
  if (cVar1 != '\0') {
    FUN_004fd688(DAT_00788248,0);
  }
  cVar1 = FUN_00405c98(param_1,&PTR_LAB_0050d694);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x8b) != '\x01')) {
    FUN_0041bfec(&PTR_LAB_0042f068,1,PTR_PTR_00782390);
    FUN_00406618();
  }
  FUN_004efc14(param_1);
  if ((DAT_0078826c == 0) || (DAT_0078826c == DAT_007882a4)) {
    DAT_0078826c = 0;
    if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
      GetCursorPos(&tStack_1c);
      FUN_004ee1d0(param_1,&tStack_1c,&uStack_14);
      FUN_004efb90(param_1,0x202,0,uStack_14 & 0xffff | iStack_10 << 0x10);
    }
    if (param_3 < 0) {
      param_3 = *(int *)(DAT_00788248 + 8);
    }
    if (DAT_0078826c != DAT_007882a4) {
      FUN_004ec418(param_1,param_2,param_3);
    }
  }
  return;
}
