// rea decompile_all
// name: FUN_005d50d4
// address: 0x5d50d4
// body: available
// range: 0x5d50d4-0x5d512c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d50ea (push 0x5d512d followed by fs-segment stack chaining); handler 0x5d512d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d50d4(int param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_005d512d;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puVar1 = &stack0xfffffffc;
  if (3 < (byte)(param_2 - 1U)) {
    FUN_0040b9d0(PTR_LAB_0068969c,&local_8);
    FUN_005d5860(param_1,local_8);
    puVar1 = puStack_14;
  }
  puStack_14 = puVar1;
  puVar1 = puStack_14;
  if (param_2 != *(char *)(param_1 + 8)) {
    *(char *)(param_1 + 8) = param_2;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_005d5134;
  puStack_18 = (undefined1 *)0x5d512c;
  thunk_FUN_004072d8(&local_8,uStack_1c,puVar1);
  return;
}
