// rea decompile_all
// name: FUN_0057fae0
// address: 0x57fae0
// body: available
// range: 0x57fae0-0x57fba2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x57fb07 (push 0x57fba3 followed by fs-segment stack chaining); handler 0x57fba3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057fae0(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_c;
  undefined4 local_8;

  local_c = 0;
  puStack_24 = (undefined1 *)0x57fafc;
  local_8 = param_2;
  thunk_FUN_00407ad0(param_2);
  puStack_28 = &LAB_0057fba3;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_0057ebcc(local_8,param_1,&local_c);
  iVar2 = local_c;
  if ((local_c != 0) && (*(short *)(local_c + -10) != 1)) {
    iVar2 = FUN_004074b8(&local_c,local_c,0);
  }
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + -4);
  }
  if (0 < iVar4) {
    iVar2 = 1;
    do {
      iVar3 = local_c;
      if ((local_c != 0) && (*(short *)(local_c + -10) != 1)) {
        iVar3 = FUN_004074b8(&local_c,local_c,0);
      }
      FUN_0057e544(param_1,*(undefined1 *)(iVar3 + -1 + iVar2));
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0057fbaa;
  puStack_28 = (undefined1 *)0x57fb9a;
  FUN_004072d8(&local_c,uStack_2c,puVar1);
  puStack_28 = (undefined1 *)0x57fba2;
  thunk_FUN_004072d8(&local_8);
  return;
}
