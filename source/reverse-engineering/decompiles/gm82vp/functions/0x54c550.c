// rea decompile_all
// name: FUN_0054c550
// address: 0x54c550
// body: available
// range: 0x54c550-0x54c62d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54c569 (push 0x54c62e followed by fs-segment stack chaining); handler 0x54c62e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054c550(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_0054c62e;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  FUN_0054c9f0(*(undefined4 *)(param_4 + -4),param_1);
  local_c = FUN_005506a4();
  iVar4 = *(int *)(local_c + 8);
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    do {
      uVar2 = FUN_0054da1c(local_c,iVar5);
      if (*(char *)(param_4 + -5) == '\0') {
        FUN_0054d25c(uVar2,&local_10);
        FUN_004081e8(&local_8,local_10);
      }
      else {
        FUN_0054d1f4(uVar2,&local_8);
      }
      iVar3 = (**(code **)(**(int **)(param_4 + -0xc) + 0x54))(*(int **)(param_4 + -0xc),local_8);
      if (iVar3 == -1) {
        (**(code **)(**(int **)(param_4 + -0xc) + 0x38))(*(int **)(param_4 + -0xc),local_8);
        if (*(char *)(param_4 + -0xd) != '\0') {
          FUN_0054d1f4(uVar2,&local_14);
          FUN_0054c550(local_14);
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0054c635;
  puStack_28 = (undefined1 *)0x54c61d;
  thunk_FUN_004072d8(&local_14,uStack_2c,puVar1);
  puStack_28 = (undefined1 *)0x54c625;
  thunk_FUN_004072d8(&local_10);
  puStack_28 = (undefined1 *)0x54c62d;
  thunk_FUN_004072d8(&local_8);
  return;
}
