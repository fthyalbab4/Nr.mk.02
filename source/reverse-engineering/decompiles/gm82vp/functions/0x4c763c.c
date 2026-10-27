// rea decompile_all
// name: FUN_004c763c
// address: 0x4c763c
// body: available
// range: 0x4c763c-0x4c76ac inclusive
// range: 0x4c76b4-0x4c76bd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c7682 (push 0x4c76ad followed by fs-segment stack chaining); handler 0x4c76ad lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004c763c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  undefined1 local_5;

  local_c = 0;
  iVar1 = *(int *)(param_1 + 0x1c);
  puStack_1c = (undefined1 *)0x4c7663;
  FUN_00406268(*(undefined4 *)(iVar1 + 0x14),param_2,&local_c);
  local_5 = local_c != 0;
  if ((bool)local_5) {
    *(int *)(iVar1 + 0x38) = param_1;
    puStack_20 = &LAB_004c76ad;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    FUN_004bc588(local_c,*(undefined4 *)(iVar1 + 0x14),0);
    *in_FS_OFFSET = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    return iVar1;
  }
  return 0;
}
