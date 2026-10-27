// rea decompile_all
// name: FUN_0047c2f0
// address: 0x47c2f0
// body: available
// range: 0x47c2f0-0x47c373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x47c30e (push 0x47c374 followed by fs-segment stack chaining); handler 0x47c374 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0047c2f0(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_0047c374;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar2 = *(int *)(param_1 + 0x1c);
  local_8 = param_2;
  if ((byte)(*(char *)(iVar2 + 0x2a0) - 3U) < 2) {
    puStack_1c = &stack0xfffffffc;
    FUN_0047e16c(iVar2,param_2);
  }
  else {
    iVar2 = FUN_00406268(iVar2,param_2);
    if (iVar2 == -1) {
      FUN_0040b9d0(PTR_LAB_00689324,&local_c);
      FUN_0043ab94(param_1,local_c,local_8);
    }
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0047c37b;
  puStack_20 = (undefined1 *)0x47c373;
  thunk_FUN_004072d8(&local_c,uStack_24,puVar1);
  return;
}
