// rea decompile_all
// name: FUN_00450b6c
// address: 0x450b6c
// body: available
// range: 0x450b6c-0x450c2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x450b85 (push 0x450c30 followed by fs-segment stack chaining); handler 0x450c30 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00450b6c(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_00450c30;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar1 = &stack0xfffffffc;
  if ((char)param_1[0x14] == '\0') {
    if (param_1[0x12] == 0) {
      puStack_24 = &stack0xfffffffc;
      iVar2 = FUN_00450758(&PTR_FUN_0044ef58,1,0x100);
      param_1[0x12] = iVar2;
    }
    else {
      FUN_00450708();
    }
    iVar2 = (**(code **)(*param_1 + 0x14))();
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      local_8 = iVar2;
      do {
        if (*(char *)((int)param_1 + 0x2a) == '\0') {
          (**(code **)(*param_1 + 0xc))(param_1,iVar3,&local_10);
          FUN_004158a4(local_10,&local_c);
          FUN_004506a8(param_1[0x12],local_c,iVar3);
        }
        else {
          (**(code **)(*param_1 + 0xc))(param_1,iVar3,&local_14);
          FUN_004506a8(param_1[0x12],local_14,iVar3);
        }
        iVar3 = iVar3 + 1;
        local_8 = local_8 + -1;
      } while (local_8 != 0);
    }
    *(undefined1 *)(param_1 + 0x14) = 1;
    puVar1 = puStack_24;
  }
  puStack_24 = puVar1;
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00450c37;
  puStack_28 = (undefined1 *)0x450c2f;
  thunk_FUN_004072fc(&local_14,3,puVar1);
  return;
}
