// rea decompile_all
// name: FUN_005c09a8
// address: 0x5c09a8
// body: available
// range: 0x5c09a8-0x5c0a1d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c09c6 (push 0x5c0a1e followed by fs-segment stack chaining); handler 0x5c0a1e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c09a8(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  puStack_24 = &LAB_005c0a1e;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = 0;
  local_8 = param_2;
  iVar3 = FUN_005c099c(param_1);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    uVar5 = true;
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 4) + iVar4 * 4);
      (**(code **)*puVar1)(puVar1,&local_10);
      FUN_00408640(local_8,local_10);
      if ((bool)uVar5) {
        local_c = *(undefined4 *)(*(int *)(param_1 + 4) + iVar4 * 4);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
      uVar5 = iVar3 == 0;
    } while (!(bool)uVar5);
  }
  puVar2 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_005c0a25;
  puStack_24 = (undefined1 *)0x5c0a1d;
  thunk_FUN_00406e5c(&local_10,uStack_28,puVar2);
  return;
}
