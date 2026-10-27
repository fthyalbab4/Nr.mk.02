// rea decompile_all
// name: FUN_005d0e48
// address: 0x5d0e48
// body: available
// range: 0x5d0e48-0x5d0ed8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d0e6a (push 0x5d0ed9 followed by fs-segment stack chaining); handler 0x5d0ed9 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d0e48(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  local_10 = 0;
  puStack_18 = (undefined1 *)0x5d0e5f;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_1c = &LAB_005d0ed9;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  if (DAT_00789b84 != 0) {
    puStack_18 = &stack0xfffffffc;
    uVar3 = FUN_00406e5c(&local_c);
    FUN_0040810c(&local_10,local_8,0);
    cVar2 = FUN_005d1c80(DAT_00789b84,local_10,uVar3);
    if (cVar2 != '\0') {
      FUN_004080e4(param_2,local_c);
      goto LAB_005d0eb6;
    }
  }
  FUN_00407eb8(param_2,0);
LAB_005d0eb6:
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005d0ee0;
  puStack_1c = (undefined1 *)0x5d0ed0;
  FUN_00406e80(&local_10,2,puVar1);
  puStack_1c = (undefined1 *)0x5d0ed8;
  thunk_FUN_00406e5c(&local_8);
  return;
}
