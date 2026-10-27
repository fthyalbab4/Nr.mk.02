// rea decompile_all
// name: FUN_00716e80
// address: 0x716e80
// body: available
// range: 0x716e80-0x716f3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x716eaa (push 0x716f3c followed by fs-segment stack chaining); handler 0x716f3c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00716e80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;

  puStack_14 = (undefined1 *)0x716e97;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_14 = (undefined1 *)0x716e9f;
  thunk_FUN_00407660(local_c);
  puStack_18 = &LAB_00716f3c;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_00407eb8(param_3,local_c);
  if (DAT_0077f5e4 == 0) {
    DAT_0077f5e4 = FUN_00452480(&DAT_004512d4,1);
  }
  cVar2 = FUN_004539f4(DAT_0077f5e4,DAT_0079a9a8);
  if (cVar2 != '\0') {
    FUN_004526b0(DAT_0077f5e4,DAT_0079a9a8,1);
    cVar2 = FUN_00453668(DAT_0077f5e4,local_8);
    if (cVar2 != '\0') {
      FUN_004530e0(DAT_0077f5e4,local_8,param_3);
    }
    FUN_00452538(DAT_0077f5e4);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00716f43;
  puStack_18 = (undefined1 *)0x716f3b;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
