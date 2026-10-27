// rea decompile_all
// name: FUN_004ea600
// address: 0x4ea600
// body: available
// range: 0x4ea600-0x4ea66e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ea61c (push 0x4ea66f followed by fs-segment stack chaining); handler 0x4ea66f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ea600(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_c = 0;
  puStack_1c = &LAB_004ea66f;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (*(short *)(param_1 + 0x16a) != 0) {
    local_8 = *(undefined4 *)(param_2 + 0xc);
    FUN_00408350(&local_c,*(undefined4 *)(param_2 + 8));
    (**(code **)(param_1 + 0x168))
              (*(undefined4 *)(param_1 + 0x16c),param_1,*(undefined4 *)(param_2 + 4),&local_8,
               local_c);
    *(undefined4 *)(param_2 + 0xc) = local_8;
    puVar1 = puStack_18;
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004ea676;
  puStack_1c = (undefined1 *)0x4ea66e;
  thunk_FUN_004072d8(&local_c,uStack_20,puVar1);
  return;
}
