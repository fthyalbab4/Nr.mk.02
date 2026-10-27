// rea decompile_all
// name: FUN_00664c74
// address: 0x664c74
// body: available
// range: 0x664c74-0x664d02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x664c8d (push 0x664d03 followed by fs-segment stack chaining); handler 0x664d03 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00664c74(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar3;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00664d03;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00662e6c(param_1,param_2,param_3);
  if ((char)param_3 == '\x01') {
    cVar2 = FUN_00405c98(param_2,&PTR_FUN_006663f8);
    if ((cVar2 != '\0') && (uVar3 = *(int *)(param_2 + 0x1b4) == 0, !(bool)uVar3)) {
      FUN_00673fe0(*(undefined4 *)(param_2 + 0x1b4),&local_8);
      FUN_00408640(local_8,*(undefined4 *)(param_1 + 0x3a0));
      if ((bool)uVar3) {
        FUN_00407eb8(param_1 + 0x3a0,0);
        *(undefined4 *)(param_1 + 0x3b4) = 0;
      }
    }
  }
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00664d0a;
  puStack_1c = (undefined1 *)0x664d02;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
