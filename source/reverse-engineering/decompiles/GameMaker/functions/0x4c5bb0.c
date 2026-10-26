// rea decompile_all
// name: FUN_004c5bb0
// address: 0x4c5bb0
// body: available
// range: 0x4c5bb0-0x4c5c48 inclusive
// range: 0x4c5c5a-0x4c5c5e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c5bfa (push 0x4c5c49 followed by fs-segment stack chaining); handler 0x4c5c49 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_004c5bb0(int param_1,int param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;

  puVar1 = PTR_DAT_00782280;
  if (*(char *)(param_1 + 0x351) == '\0') {
    puStack_14 = (undefined1 *)0x4c5bef;
    FUN_00405d08(param_1);
    puStack_18 = &LAB_004c5c49;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    *(undefined1 *)(param_1 + 0x351) = 1;
    puStack_14 = &stack0xfffffffc;
    do {
      FUN_0051f734(*(undefined4 *)puVar1);
      puVar2 = puStack_14;
      if (*(char *)(*(int *)puVar1 + 0xa4) != '\0') {
        *(undefined1 *)(param_1 + 0x351) = 0;
      }
    } while (*(char *)(param_1 + 0x351) != '\0');
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = &DAT_004c5c50;
    puStack_18 = (undefined1 *)0x4c5c48;
    uVar3 = FUN_00405d08(param_1,uStack_1c,puVar2);
    return (bool)uVar3;
  }
  if (param_2 != 0) {
    puStack_14 = (undefined1 *)0x4c5bdb;
    FUN_00405d08(param_1);
  }
  return param_2 != 0;
}
