// rea decompile_all
// name: FUN_005de930
// address: 0x5de930
// body: available
// range: 0x5de930-0x5de9ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5de94a (push 0x5de9ed followed by fs-segment stack chaining); handler 0x5de9ed lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005de930(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined **local_10;
  undefined1 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  puStack_20 = &LAB_005de9ed;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x10c8) == 0x1000) {
    iVar2 = (**(code **)**(undefined4 **)(param_1 + 0xb0))();
    iVar3 = FUN_0043c834(*(undefined4 *)(param_1 + 0xb0));
    if (extraout_EDX_00 == extraout_EDX && iVar3 == iVar2) {
      FUN_0040b9d0(PTR_LAB_006888a4,&local_8);
      local_10 = &PTR_DAT_005dea08;
      local_c = 0x11;
      FUN_005d8ba0(local_8,&local_10,0);
    }
    *(undefined4 *)(param_1 + 0x10c8) = 0;
    (**(code **)(**(int **)(param_1 + 0xb0) + 0xc))(*(int **)(param_1 + 0xb0),param_1 + 200,0x1000);
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  puVar1 = puStack_1c;
  *(int *)(param_1 + 0x10c8) = *(int *)(param_1 + 0x10c8) + 1;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005de9f4;
  puStack_20 = (undefined1 *)0x5de9ec;
  thunk_FUN_004072d8(&local_8,uStack_24,puVar1);
  return;
}
