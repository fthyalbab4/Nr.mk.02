// rea decompile_all
// name: FUN_00512294
// address: 0x512294
// body: available
// range: 0x512294-0x512349 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5122a9 (push 0x51234a followed by fs-segment stack chaining); handler 0x51234a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00512294(int param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0051234a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if ((((DAT_0068fda8 == '\0') && (puVar1 = &stack0xfffffffc, DAT_006840b8 != 0)) &&
      (puVar1 = &stack0xfffffffc, -1 < param_1)) &&
     ((puVar1 = &stack0xfffffffc, param_1 < DAT_006840b4 &&
      (puVar1 = &stack0xfffffffc, *(char *)(DAT_0068fda0 + param_1 * 0x14) != '\0')))) {
    uVar2 = *(int *)(DAT_0068fda0 + 4 + param_1 * 0x14) == 3;
    if ((bool)uVar2) {
      puStack_18 = &stack0xfffffffc;
      FUN_00510bf8(DAT_006840b8,&local_8);
      FUN_0040891c(local_8,*(undefined4 *)(DAT_0068fda0 + 0x10 + param_1 * 0x14));
      puVar1 = puStack_18;
      if ((bool)uVar2) {
        FUN_00510ce8(DAT_006840b8);
        puVar1 = puStack_18;
      }
    }
    else {
      (**(code **)(*DAT_006840ac + 0x38))();
      puVar1 = puStack_18;
    }
  }
  puStack_18 = puVar1;
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00512351;
  puStack_1c = (undefined1 *)0x512349;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
