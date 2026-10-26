// rea decompile_all
// name: FUN_004414d4
// address: 0x4414d4
// body: available
// range: 0x4414d4-0x4415ec inclusive
// range: 0x4415f4-0x441609 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4414f0 (push 0x44160a followed by fs-segment stack chaining); handler 0x44160a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x44150c (push 0x4415ed followed by fs-segment stack chaining); handler 0x4415ed lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004414d4(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  int local_10;
  int *local_c;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  puStack_30 = &stack0xfffffffc;
  local_8 = 0;
  puStack_28 = &LAB_0044160a;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  iVar5 = param_1[0xc];
  local_c = param_1;
  if (iVar5 == 0) {
    *in_FS_OFFSET = uStack_2c;
    puStack_24 = &LAB_00441611;
    puStack_28 = (undefined1 *)0x441609;
    thunk_FUN_00406e5c(&local_8,uStack_2c,&stack0xfffffffc);
    return;
  }
  puStack_34 = &LAB_004415ed;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_14 = *(int *)(iVar5 + 8);
  if (-1 < local_14 + -1) {
    iVar5 = 0;
    puStack_30 = &stack0xfffffffc;
    puStack_24 = &stack0xfffffffc;
    do {
      puVar3 = (undefined4 *)FUN_0043b048(local_c[0xc],iVar5);
      FUN_00407f0c(&local_8,puVar3[5]);
      (**(code **)(*local_c + 0x24))(local_c,&local_8);
      local_10 = FUN_00440c50(puVar3[2],local_8);
      if ((local_10 == 0) && (*(short *)((int)local_c + 0x7a) != 0)) {
        (*(code *)local_c[0x1e])(local_c[0x1f],local_c,local_8,&local_10);
      }
      FUN_0043b048(local_c[0xc],iVar5);
      FUN_0044144c();
      if (local_10 == 0) {
        cVar2 = FUN_00440b5c(puVar3);
        if (cVar2 == '\0') goto LAB_004415c4;
        uVar4 = FUN_0043b048(local_c[0xc],iVar5);
        FUN_0043ba60(DAT_00787f78,uVar4);
        FUN_0043b1f4(local_c[0xc],iVar5,0);
      }
      else {
LAB_004415c4:
        (**(code **)*puVar3)(puVar3,local_10);
      }
      iVar5 = iVar5 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = (undefined1 *)0x4415f4;
  puStack_34 = (undefined1 *)0x4415ec;
  FUN_00441674(local_c,uStack_38,puVar1);
  return;
}
