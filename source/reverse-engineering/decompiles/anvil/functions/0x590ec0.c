// rea decompile_all
// name: FUN_00590ec0
// address: 0x590ec0
// body: available
// range: 0x590ec0-0x590f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x590ee0 (push 0x590f40 followed by fs-segment stack chaining); handler 0x590f40 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00590ec0(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_00590f40;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_3;
  FUN_00408194(param_3,0);
  if (0 < param_2) {
    iVar3 = 1;
    do {
      cVar2 = FUN_005903e0(param_1,iVar3);
      if ((cVar2 != '\x03') && (1 < (byte)(cVar2 - 6U))) {
        FUN_00408310(&local_10,*(undefined2 *)(param_1 + -2 + iVar3 * 2));
        FUN_004085b8(local_c,local_10);
      }
      iVar3 = iVar3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00590f47;
  puStack_24 = (undefined1 *)0x590f3f;
  thunk_FUN_004072d8(&local_10,uStack_28,puVar1);
  return;
}
