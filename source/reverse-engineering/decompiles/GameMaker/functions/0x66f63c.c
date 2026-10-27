// rea decompile_all
// name: FUN_0066f63c
// address: 0x66f63c
// body: available
// range: 0x66f63c-0x66f779 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x66f668 (push 0x66f77a followed by fs-segment stack chaining); handler 0x66f77a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066f63c(int param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined1 local_5;

  local_14 = 0;
  local_18 = 0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStack_34 = (undefined1 *)0x66f658;
    param_1 = FUN_00405fb0();
    local_5 = extraout_DL;
  }
  puStack_38 = &LAB_0066f77a;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  FUN_0050a648(param_1,0);
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) & 0xfe;
  uVar2 = FUN_0066fd44(param_1);
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  piVar3 = (int *)FUN_0043f190(&PTR_FUN_00432364,1);
  *(int **)(param_1 + 0xac) = piVar3;
  (**(code **)(*piVar3 + 0x2c))(piVar3,PTR_u_0_3_1_3_2_6_3_9_4_12_5_12_6_17_7_0077f388);
  iVar4 = (**(code **)(**(int **)(param_1 + 0xac) + 0x14))();
  if (-1 < iVar4 + -1) {
    local_c = 0;
    local_10 = iVar4;
    do {
      piVar3 = *(int **)(param_1 + 0xac);
      FUN_0043d9f4(piVar3,local_c,&local_18);
      FUN_0043dc44(piVar3,local_18,&local_14);
      uVar2 = FUN_00416900(local_14);
      (**(code **)(*piVar3 + 0x24))(piVar3,local_c,uVar2);
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  iVar4 = FUN_00405a4c(&DAT_00505230,1);
  *(int *)(param_1 + 0x98) = iVar4;
  *(int *)(iVar4 + 0xc) = param_1;
  *(undefined1 **)(iVar4 + 8) = &LAB_00671084;
  iVar4 = FUN_00405a4c(&DAT_00505230,1);
  *(int *)(param_1 + 0x80) = iVar4;
  *(int *)(iVar4 + 0xc) = param_1;
  *(undefined1 **)(iVar4 + 8) = &LAB_00671084;
  iVar4 = FUN_00405a4c(&DAT_00505230,1);
  puVar1 = puStack_34;
  *(int *)(param_1 + 0xa0) = iVar4;
  *(int *)(iVar4 + 0xc) = param_1;
  *(undefined1 **)(iVar4 + 8) = &LAB_00671084;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_0066f781;
  puStack_38 = (undefined1 *)0x66f779;
  thunk_FUN_00406e80(&local_18,2,puVar1);
  return;
}
