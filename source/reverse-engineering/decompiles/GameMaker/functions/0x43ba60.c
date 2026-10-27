// rea decompile_all
// name: FUN_0043ba60
// address: 0x43ba60
// body: available
// range: 0x43ba60-0x43badb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43ba7d (push 0x43badc followed by fs-segment stack chaining); handler 0x43badc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043ba60(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;

  puStack_10 = (undefined1 *)0x43ba72;
  FUN_0043bb30(param_1);
  puStack_14 = &LAB_0043badc;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x20) != '\x01') {
    puStack_10 = &stack0xfffffffc;
    iVar2 = FUN_0043b0b0(*(undefined4 *)(param_1 + 4),param_2);
    if (iVar2 != -1) {
      if (*(char *)(param_1 + 0x20) == '\x02') {
        FUN_0043af84(**(undefined4 **)(param_1 + 4),PTR_PTR_00781d80,param_2);
      }
      goto LAB_0043bac6;
    }
  }
  FUN_0043ae88(*(undefined4 *)(param_1 + 4),param_2);
LAB_0043bac6:
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0043bae3;
  puStack_14 = (undefined1 *)0x43badb;
  FUN_0043bba0(param_1,uStack_18,puVar1);
  return;
}
