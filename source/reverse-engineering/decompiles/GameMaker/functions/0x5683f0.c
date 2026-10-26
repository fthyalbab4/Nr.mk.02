// rea decompile_all
// name: FUN_005683f0
// address: 0x5683f0
// body: available
// range: 0x5683f0-0x5684f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x568410 (push 0x5684f2 followed by fs-segment stack chaining); handler 0x5684f2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005683f0(int param_1,short param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_30;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_10;
  int local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  puStack_24 = &LAB_005684f2;
  puStack_28 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_28;
  puVar2 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x27c) == '\0') {
    FUN_00567b30(param_1,&local_c,&local_10);
    iVar1 = local_c;
    if ((local_10 - local_c < 2) && (param_2 == 8)) {
      FUN_005682a8(param_1,local_c);
      FUN_00567b30(param_1,&local_c,&local_10);
      puVar2 = puStack_20;
      if (iVar1 == local_c) goto LAB_005684dc;
    }
    puVar2 = puStack_20;
    if (0 < local_10 - local_c) {
      FUN_00567578(param_1,&local_8);
      FUN_00568fa0(param_1,&local_8,local_c,local_10 - local_c);
      FUN_004086a8(local_8,local_c + 1,local_10 - local_c,&local_8);
      uStackY_30 = local_8;
      uVar3 = FUN_004f76a8(param_1);
      FUN_0040ef5c(uVar3,0xc2,0);
      if (local_10 - local_c == 1) {
        FUN_00567b30(param_1,&local_c,&local_10);
        FUN_00567b78(param_1,local_c + -1);
        puVar2 = puStack_20;
      }
      else {
        local_c = FUN_005682c4(param_1,local_c);
        FUN_00567b78(param_1,local_c);
        puVar2 = puStack_20;
      }
    }
  }
LAB_005684dc:
  puStack_20 = puVar2;
  puVar2 = puStack_28;
  *in_FS_OFFSET = uStackY_30;
  puStack_28 = &LAB_005684f9;
  thunk_FUN_00406e5c(&local_8,uStackY_30,puVar2);
  return;
}
