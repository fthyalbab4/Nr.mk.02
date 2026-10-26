// rea decompile_all
// name: FUN_004eb990
// address: 0x4eb990
// body: available
// range: 0x4eb990-0x4eba67 inclusive
// range: 0x4eba7d-0x4ebaa0 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4eb9af (push 0x4ebaa1 followed by fs-segment stack chaining); handler 0x4ebaa1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4eba53 (push 0x4eba68 followed by fs-segment stack chaining); handler 0x4eba68 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004eb990(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;

  puStack_18 = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0xad) = 1;
  puStack_1c = &LAB_004ebaa1;
  local_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_20;
  puStack_24 = (undefined1 *)0x4eb9bc;
  FUN_00415430(&LAB_004df3dc);
  if (*(int *)(param_1 + 0x44) != 0) {
    if (*(int *)PTR_DAT_006890bc == 3) {
      puStack_24 = (undefined1 *)0x4eb9fc;
      FUN_004e3954(*(int *)(param_1 + 0x44),2);
    }
    else if (*(int *)PTR_DAT_006890bc == 7) {
      *(undefined1 *)(param_1 + 0xdc) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x44) + 0x29a) = 1;
    }
    if (*(char *)(param_1 + 0x5b) != '\0') {
      if ((*(char *)(*(int *)(param_1 + 0x44) + 0x29a) == '\x01') ||
         (*(char *)(param_1 + 0xdc) == '\x01')) {
        puStack_24 = (undefined1 *)0x4eba28;
        FUN_004eaec8(param_1);
        if (*(char *)(param_1 + 0xdc) == '\x01') {
          puStack_24 = (undefined1 *)0x4eba3f;
          FUN_004e6d64(*(undefined4 *)(param_1 + 0x44));
        }
      }
      else {
        puStack_24 = (undefined1 *)0x4eba48;
        FUN_004e1f40(*(int *)(param_1 + 0x44),1);
      }
    }
    do {
      puStack_28 = &LAB_004eba68;
      uStack_2c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_2c;
      puStack_24 = &stack0xfffffffc;
      FUN_004eb724(param_1);
      *in_FS_OFFSET = uStack_2c;
    } while (*(char *)(param_1 + 0xa4) == '\0');
  }
  *in_FS_OFFSET = local_20;
  *(undefined1 *)(param_1 + 0xad) = 0;
  return;
}
