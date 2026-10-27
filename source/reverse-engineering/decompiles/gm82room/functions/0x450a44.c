// rea decompile_all
// name: FUN_00450a44
// address: 0x450a44
// body: available
// range: 0x450a44-0x450b5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x450a5e (push 0x450b5e followed by fs-segment stack chaining); handler 0x450b5e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00450a44(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  puStack_2c = &LAB_00450b5e;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puVar1 = &stack0xfffffffc;
  if (*(char *)((int)param_1 + 0x51) == '\0') {
    if (param_1[0x13] == 0) {
      puStack_28 = &stack0xfffffffc;
      iVar2 = FUN_00450758(&PTR_FUN_0044ef58,1,0x100);
      param_1[0x13] = iVar2;
    }
    else {
      FUN_00450708();
    }
    iVar2 = (**(code **)(*param_1 + 0x14))();
    if (-1 < iVar2 + -1) {
      local_c = 0;
      local_10 = iVar2;
      do {
        (**(code **)(*param_1 + 0xc))(param_1,local_c,&local_8);
        uVar3 = FUN_0043c05c(param_1);
        FUN_00408310(&local_14,uVar3);
        iVar2 = FUN_0041d99c(local_14,local_8);
        if (iVar2 != 0) {
          if (*(char *)((int)param_1 + 0x2a) == '\0') {
            FUN_00408984(local_8,1,iVar2 + -1,&local_1c);
            FUN_004158a4(local_1c,&local_18);
            FUN_004081e8(&local_8,local_18);
          }
          else {
            FUN_00408984(local_8,1,iVar2 + -1,&local_8);
          }
          FUN_004506a8(param_1[0x13],local_8,local_c);
        }
        local_c = local_c + 1;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    *(undefined1 *)((int)param_1 + 0x51) = 1;
    puVar1 = puStack_28;
  }
  puStack_28 = puVar1;
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00450b65;
  puStack_2c = (undefined1 *)0x450b55;
  thunk_FUN_004072fc(&local_1c,3,puVar1);
  puStack_2c = (undefined1 *)0x450b5d;
  thunk_FUN_004072d8(&local_8);
  return;
}
