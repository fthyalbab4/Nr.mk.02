// rea decompile_all
// name: FUN_0059a27c
// address: 0x59a27c
// body: available
// range: 0x59a27c-0x59a3e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59a2a2 (push 0x59a3fe followed by fs-segment stack chaining); handler 0x59a3fe lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59a2c4 (push 0x59a3e1 followed by fs-segment stack chaining); handler 0x59a3e1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059a27c(int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int *local_c;
  int local_8;

  puStack_2c = (undefined1 *)0x59a294;
  local_8 = param_1;
  local_c = (int *)FUN_0045bd68(&LAB_00455410,1);
  puStack_30 = &LAB_0059a3fe;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  piVar1 = *(int **)(local_8 + 0x270);
  puStack_38 = (undefined1 *)0x59a2b9;
  puStack_2c = &stack0xfffffffc;
  (**(code **)(*local_c + 8))(local_c,piVar1[0x11]);
  puStack_3c = &LAB_0059a3e1;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_38 = &stack0xfffffffc;
  FUN_0045c02c(piVar1[0x11],2);
  FUN_0045c014(piVar1[0x11],0xe);
  FUN_0045c064(piVar1[0x11],5);
  if (*(char *)(local_8 + 0x318) == '\x04') {
    FUN_00597e30(local_8,0,*(undefined4 *)(local_8 + 0x2e0),&local_1c);
    if (*(int *)(local_8 + 0x2dc) < *(int *)(local_8 + 0x2e0)) {
      local_18 = local_10;
    }
    (**(code **)(*piVar1 + 0x5c))(piVar1,0,local_18);
    uVar4 = FUN_004baf44(local_8);
    (**(code **)(*piVar1 + 0x58))(piVar1,uVar4,local_18);
  }
  else {
    FUN_00597e30(local_8,*(undefined4 *)(local_8 + 0x2e0),0,&local_1c);
    if (*(int *)(local_8 + 0x2dc) < *(int *)(local_8 + 0x2e0)) {
      cVar3 = FUN_00406268(local_8);
      uVar4 = local_1c;
      if (cVar3 == '\0') {
        uVar4 = local_14;
      }
    }
    else {
      cVar3 = FUN_00406268(local_8);
      uVar4 = local_14;
      if (cVar3 == '\0') {
        uVar4 = local_1c;
      }
    }
    (**(code **)(*piVar1 + 0x5c))(piVar1,uVar4,0);
    uVar5 = FUN_004baf84(local_8);
    (**(code **)(*piVar1 + 0x58))(piVar1,uVar4,uVar5);
  }
  puVar2 = puStack_38;
  *in_FS_OFFSET = uStack_40;
  puStack_38 = &LAB_0059a3e8;
  puStack_3c = (undefined1 *)0x59a3e0;
  FUN_0045d3f0(*(undefined4 *)(local_8 + 0x270),local_c,puVar2);
  return;
}
