// rea decompile_all
// name: FUN_0040b52c
// address: 0x40b52c
// body: available
// range: 0x40b52c-0x40b5f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x40b551 (push 0x40b5f7 followed by fs-segment stack chaining); handler 0x40b5f7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040b52c(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  int local_8;

  local_c = 0;
  puStack_18 = (undefined1 *)0x40b546;
  local_8 = param_1;
  FUN_00407660(param_1);
  puStack_1c = &LAB_0040b5f7;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  FUN_00407eb8(param_2,0);
  if (local_8 != 0) {
    iVar2 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 1)) {
      iVar2 = FUN_00407078(&local_8,local_8,0);
    }
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + -4);
    }
    FUN_00408244(&local_c,iVar3);
    iVar2 = iVar3;
    uVar4 = FUN_00407670(local_8);
    uVar5 = FUN_00407f44(local_c);
    iVar2 = FUN_0040b2fc(uVar5,iVar3 + 1,uVar4,iVar2);
    if (iVar2 < 1) {
      FUN_00407f0c(&local_c,0);
    }
    else {
      FUN_00408244(&local_c,iVar2 + -1);
    }
    FUN_00407eb8(param_2,local_c);
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0040b5fe;
  puStack_1c = (undefined1 *)0x40b5ee;
  thunk_FUN_00406e5c(&local_c,uStack_20,puVar1);
  puStack_1c = (undefined1 *)0x40b5f6;
  FUN_00406e5c(&local_8);
  return;
}
