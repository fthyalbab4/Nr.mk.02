// rea decompile_all
// name: FUN_0050bc1c
// address: 0x50bc1c
// body: available
// range: 0x50bc1c-0x50bcc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x50bc39 (push 0x50bcc1 followed by fs-segment stack chaining); handler 0x50bcc1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050bc1c(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  puStack_20 = &LAB_0050bcc1;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_0043ca88(param_1,&local_c,4);
  FUN_00408194(param_2,0);
  if (0 < local_c) {
    FUN_00407c34(&local_8,local_c,0xfde9);
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 1)) {
      FUN_004074b8(&local_8,local_8,CONCAT22(extraout_var,0xfde9));
    }
    uVar2 = thunk_FUN_00407af8(&local_8);
    FUN_0043ca88(param_1,uVar2,local_c);
    FUN_004083c0(param_2,local_8);
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0050bcc8;
  puStack_20 = (undefined1 *)0x50bcc0;
  FUN_004072d8(&local_8,uStack_24,puVar1);
  return;
}
