// rea decompile_all
// name: FUN_005cf3e4
// address: 0x5cf3e4
// body: available
// range: 0x5cf3e4-0x5cf4b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5cf405 (push 0x5cf4b8 followed by fs-segment stack chaining); handler 0x5cf4b8 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cf3e4(undefined4 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_c;
  undefined4 local_8;

  local_c = 0;
  puStack_10 = (undefined1 *)0x5cf3fa;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_14 = &LAB_005cf4b8;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  DAT_00789b84 = FUN_005ceed8(local_8);
  uVar3 = FUN_005d1df0(DAT_00789b84);
  DAT_00789b88 = FUN_005d2468(&LAB_005cda40,1,uVar3);
  FUN_005d2c48(DAT_00789b88);
  if (0 < *(int *)(DAT_00789b84 + 8)) {
    FUN_005ce8d8(&local_c);
    cVar2 = FUN_005cf1c0(local_c);
    if (cVar2 == '\0') {
      FUN_005cea78(&local_c);
      if (local_c == 0) {
        FUN_004d43f8(L"GameMaker requires a network card to be present and enabled.");
        FUN_00406c64();
      }
      cVar2 = FUN_005cf1c0(local_c);
      if (cVar2 == '\0') {
        FUN_005d1ba4(DAT_00789b84);
        FUN_005d2b2c(DAT_00789b88);
        FUN_005d110c();
      }
    }
  }
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_005cf4bf;
  puStack_14 = (undefined1 *)0x5cf4b7;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
