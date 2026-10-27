// rea decompile_all
// name: FUN_0043cd3c
// address: 0x43cd3c
// body: available
// range: 0x43cd3c-0x43cdce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x43cd55 (push 0x43cdcf followed by fs-segment stack chaining); handler 0x43cdcf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043cd3c(undefined4 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_FS_OFFSET;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_20 = &LAB_0043cdcf;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  FUN_00405954(*param_1,param_2);
  iVar2 = FUN_00405d08(param_1);
  if (iVar2 != 0) {
    uVar3 = FUN_00405d08(param_1);
    FUN_00405d08(uVar3,&local_8);
    if (local_8 != 0) {
      FUN_0043cdf0(param_1,&local_c);
      if (local_c != 0) {
        iStack_24 = local_c;
        FUN_00408480(param_2,3);
      }
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = iStack_24;
  puStack_1c = &LAB_0043cdd6;
  puStack_20 = (undefined1 *)0x43cdce;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
