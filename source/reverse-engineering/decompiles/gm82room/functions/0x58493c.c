// rea decompile_all
// name: FUN_0058493c
// address: 0x58493c
// body: available
// range: 0x58493c-0x5849d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x584957 (push 0x5849d7 followed by fs-segment stack chaining); handler 0x5849d7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058493c(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_005849d7;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_00584900(param_1);
  iVar2 = FUN_0050bbe0(param_2);
  if (iVar2 == 800) {
    FUN_0050bc1c(param_2,&local_8);
    FUN_00408194(param_1 + 4,local_8);
    FUN_0050bc1c(param_2,&local_c);
    FUN_00408194(param_1 + 8,local_c);
    uVar3 = FUN_0050bbe0(param_2);
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    FUN_0050bc1c(param_2,&local_10);
    FUN_00408194(param_1 + 0x10,local_10);
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005849de;
  puStack_24 = (undefined1 *)0x5849d6;
  thunk_FUN_004072fc(&local_10,3,puVar1);
  return;
}
