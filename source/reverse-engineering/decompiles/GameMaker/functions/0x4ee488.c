// rea decompile_all
// name: FUN_004ee488
// address: 0x4ee488
// body: available
// range: 0x4ee488-0x4ee51d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ee4a6 (push 0x4ee51e followed by fs-segment stack chaining); handler 0x4ee51e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ee488(int param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_004ee51e;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar3 = &stack0xfffffffc;
  local_8 = param_2;
  if (((*(byte *)(param_1 + 0x50) & 0x20) != 0) &&
     (uVar5 = (*(byte *)(param_1 + 0x1c) & 1) == 0, puVar3 = &stack0xfffffffc, (bool)uVar5)) {
    FUN_004ee6a0(param_1,&local_c);
    FUN_00408640(*(undefined4 *)(param_1 + 8),local_c);
    puVar3 = puStack_1c;
    if ((bool)uVar5) {
      iVar1 = *(int *)(param_1 + 4);
      if (iVar1 != 0) {
        cVar4 = FUN_00405c98(iVar1,&PTR_FUN_004e3e3c);
        if ((cVar4 != '\0') && (puVar3 = puStack_1c, (*(byte *)(iVar1 + 0x1c) & 1) != 0))
        goto LAB_004ee4ea;
      }
      bVar2 = true;
      goto LAB_004ee4f0;
    }
  }
LAB_004ee4ea:
  puStack_1c = puVar3;
  bVar2 = false;
LAB_004ee4f0:
  FUN_00449724(param_1,local_8);
  if (bVar2) {
    FUN_004ee6d8(param_1,local_8);
  }
  puVar3 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004ee525;
  puStack_20 = (undefined1 *)0x4ee51d;
  thunk_FUN_00406e5c(&local_c,uStack_24,puVar3);
  return;
}
