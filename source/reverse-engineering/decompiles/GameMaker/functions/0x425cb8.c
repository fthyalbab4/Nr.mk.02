// rea decompile_all
// name: FUN_00425cb8
// address: 0x425cb8
// body: available
// range: 0x425cb8-0x425ce0 inclusive
// range: 0x425d0f-0x425d8e inclusive
// range: 0x425daa-0x425db2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x425d5f (push 0x425d8f followed by fs-segment stack chaining); handler 0x425d8f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00425cb8(undefined2 *param_1)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;

  puStack_1c = &stack0xfffffffc;
  switch(*param_1) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    if (DAT_00773e50 != '\0') {
      puStack_1c = (undefined1 *)0x425d2c;
      FUN_00424184(1,2);
    }
    uVar1 = 0;
    break;
  case 2:
    uVar1 = (uint)(ushort)param_1[4];
    break;
  default:
    puStack_20 = &LAB_00425d8f;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    uVar1 = FUN_004256a8(param_1);
    if (0xffff < uVar1 + 0x8000) {
      thunk_FUN_00404478();
    }
    *in_FS_OFFSET = uStack_24;
    break;
  case 0xb:
    uVar1 = (uint)(ushort)param_1[4];
    break;
  case 0x10:
    uVar1 = (uint)*(char *)(param_1 + 4);
    break;
  case 0x11:
    uVar1 = (uint)*(byte *)(param_1 + 4);
  }
  return uVar1;
}
