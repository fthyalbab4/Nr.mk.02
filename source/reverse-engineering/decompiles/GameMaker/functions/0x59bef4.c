// rea decompile_all
// name: FUN_0059bef4
// address: 0x59bef4
// body: available
// range: 0x59bef4-0x59bfdc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59bf1c (push 0x59bfdd followed by fs-segment stack chaining); handler 0x59bfdd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059bef4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_14;
  int *local_10;
  int local_c;
  undefined4 local_8;

  local_10 = (int *)0x0;
  puStack_1c = (undefined1 *)0x59bf0e;
  local_8 = param_1;
  local_c = FUN_0040431c(*(undefined4 *)(param_4 + -0x20));
  puStack_20 = &LAB_0059bfdd;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_0043f488(*(undefined4 *)(param_4 + -0x24),local_c,*(undefined4 *)(param_4 + -0x20));
  local_14 = local_c;
  if (*(short *)(param_4 + -0x61) == 1) {
    local_10 = (int *)FUN_00405a4c(&PTR_FUN_005a0138,1);
    (**(code **)*local_10)
              (local_10,&local_14,&local_8,*(undefined4 *)(param_4 + -0x1c),
               *(undefined4 *)(param_4 + -0x20));
  }
  else if (*(short *)(param_4 + -0x61) == 2) {
    local_10 = (int *)FUN_005a2c58(&PTR_FUN_005a0ce8,1,4,0);
    (**(code **)(*local_10 + 8))();
    (**(code **)*local_10)
              (local_10,&local_14,&local_8,*(undefined4 *)(param_4 + -0x1c),
               *(undefined4 *)(param_4 + -0x20));
  }
  (**(code **)(*local_10 + 4))();
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0059bfe4;
  if (local_c != 0) {
    puStack_20 = (undefined1 *)0x59bfd4;
    FUN_00404338(local_c,uStack_24,puVar1);
  }
  puStack_20 = (undefined1 *)0x59bfdc;
  FUN_00405a7c(local_10);
  return;
}
