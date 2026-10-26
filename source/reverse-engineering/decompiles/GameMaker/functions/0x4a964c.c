// rea decompile_all
// name: FUN_004a964c
// address: 0x4a964c
// body: available
// range: 0x4a964c-0x4a96c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4a9668 (push 0x4a96ca followed by fs-segment stack chaining); handler 0x4a96ca lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a964c(int param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined1 local_5;

  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_004a96ca;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_5 = param_2 != *(char *)(param_1 + 0x280);
  puVar1 = &stack0xfffffffc;
  if ((bool)local_5) {
    puVar1 = &stack0xfffffffc;
    if ((param_2 == '\0') &&
       ((*(char *)(param_1 + 0x28e) == '\x02' ||
        (puVar1 = &stack0xfffffffc, *(char *)(param_1 + 0x28e) == '\x03')))) {
      FUN_0040b75c(PTR_PTR_0078254c,&local_c);
      FUN_004a8be8(local_c);
      puVar1 = puStack_18;
    }
    puStack_18 = puVar1;
    *(char *)(param_1 + 0x280) = param_2;
    puVar1 = puStack_18;
    if (param_2 == '\0') {
      *(undefined1 *)(param_1 + 0x28c) = 0;
    }
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004a96d1;
  puStack_1c = (undefined1 *)0x4a96c9;
  thunk_FUN_00406e5c(&local_c,uStack_20,puVar1);
  return;
}
