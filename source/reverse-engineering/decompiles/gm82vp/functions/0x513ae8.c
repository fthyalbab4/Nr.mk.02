// rea decompile_all
// name: FUN_00513ae8
// address: 0x513ae8
// body: available
// range: 0x513ae8-0x513bce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x513afd (push 0x513bcf followed by fs-segment stack chaining); handler 0x513bcf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00513ae8(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00513bcf;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  iVar1 = *(int *)(param_1 + 4);
  puVar2 = &stack0xfffffffc;
  if ((-1 < iVar1) && (puVar2 = &stack0xfffffffc, iVar1 != 3)) {
    puVar2 = &stack0xfffffffc;
    if (*(int *)(param_1 + 0x10) == 0) goto LAB_00513bb9;
    uVar3 = FUN_00511b70(*(int *)(param_1 + 0x10),iVar1);
    *(undefined4 *)(param_1 + 0x30) = uVar3;
    puVar2 = puStack_18;
    if (*(int *)(param_1 + 0x30) == -1) {
      *(undefined4 *)(param_1 + 4) = 3;
    }
  }
  puStack_18 = puVar2;
  if (*(int *)(param_1 + 4) == 3) {
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_0050d124(*(undefined4 *)(param_1 + 8),&local_8);
      FUN_00408194(param_1 + 0x34,local_8);
      FUN_0043d470(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x34));
      FUN_00405fdc(*(undefined4 *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    puVar2 = puStack_18;
    if (*(int *)(param_1 + 0x34) == 0) goto LAB_00513bb9;
    uVar3 = FUN_005119f8(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x30) = uVar3;
  }
  if ((-1 < *(int *)(param_1 + 0x30)) && (0 < *(int *)(param_1 + 0x18))) {
    FUN_005124e8(*(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x18));
  }
  if (-1 < *(int *)(param_1 + 0x30)) {
    uStack_28 = *(undefined4 *)(param_1 + 0x20);
    FUN_0051237c(*(int *)(param_1 + 0x30),0);
  }
  puVar2 = puStack_18;
  if (-1 < *(int *)(param_1 + 0x30)) {
    uStack_28 = *(undefined4 *)(param_1 + 0x28);
    FUN_005123fc();
    puVar2 = puStack_18;
  }
LAB_00513bb9:
  puStack_18 = puVar2;
  puVar2 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00513bd6;
  thunk_FUN_004072d8(&local_8,uStack_28,puVar2);
  return;
}
