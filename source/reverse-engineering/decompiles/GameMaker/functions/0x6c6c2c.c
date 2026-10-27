// rea decompile_all
// name: FUN_006c6c2c
// address: 0x6c6c2c
// body: available
// range: 0x6c6c2c-0x6c6ce2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6c6c46 (push 0x6c6ce3 followed by fs-segment stack chaining); handler 0x6c6ce3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c6c2c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 local_10 [8];
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  puStack_20 = &LAB_006c6ce3;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_004ee7f8(*(undefined4 *)(param_1 + 0x3d4),*PTR_DAT_00781f88);
  if (*PTR_DAT_00781f88 != '\0') {
    FUN_00438bf4(param_5,param_4,local_10);
    iVar2 = FUN_00483b48(*(undefined4 *)(param_1 + 0x3d4),local_10,1);
    if (iVar2 < 0) {
      FUN_004ee7f8(*(undefined4 *)(param_1 + 0x3d4),0);
    }
    else {
      FUN_006befe4(*(undefined4 *)(param_1 + 0x470 + iVar2 * 4),
                   *(undefined4 *)(param_1 + 0x42f4 + iVar2 * 4),&local_8);
      FUN_00407eb8(*(int *)(param_1 + 0x3d4) + 0x80,local_8);
      FUN_006c7a68(param_1,local_8);
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_006c6cea;
  puStack_20 = (undefined1 *)0x6c6ce2;
  thunk_FUN_00406e5c(&local_8,uStack_24,puVar1);
  return;
}
