// rea decompile_all
// name: FUN_005c5614
// address: 0x5c5614
// body: available
// range: 0x5c5614-0x5c5701 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c5633 (push 0x5c5702 followed by fs-segment stack chaining); handler 0x5c5702 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c5614(int param_1,undefined4 param_2,char param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int *in_FS_OFFSET;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_2c = &LAB_005c5702;
  iStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_30;
  puVar1 = &stack0xfffffffc;
  if (0 < param_1) {
    do {
      FUN_005cb16c(*(undefined4 *)(*(int *)(*(int *)(param_4 + -4) + 0x18) + 0x1c),&local_10);
      FUN_004082dc(&local_c,local_10);
      param_1 = param_1 + -1;
      puVar1 = puStack_28;
    } while (param_1 != 0);
  }
  puStack_28 = puVar1;
  if (param_3 != '\0') {
    FUN_0040839c(&local_c,&DAT_005c571c,local_c);
  }
  iVar2 = *(int *)(*(int *)(param_4 + -4) + 0x18);
  uVar6 = 0;
  uVar5 = *(undefined4 *)(iVar2 + 0x1c);
  uVar4 = 0;
  puVar3 = &local_14;
  FUN_005cae4c(*(undefined4 *)(iVar2 + 0x1c),&local_18);
  FUN_005c40d4(local_18,local_c,3,puVar3,uVar4,uVar5,uVar6);
  iVar2 = FUN_005c5adc(&PTR_LAB_005c25d8,1,local_14);
  if (iVar2 != 0) {
    iVar2 = iVar2 + 0x48;
  }
  FUN_0040b158(&local_8,iVar2);
  FUN_005c5508(*(undefined4 *)(param_4 + -4),param_2,local_8);
  *in_FS_OFFSET = (int)puVar3;
  FUN_0040b140(&local_18,puVar3,uVar5,&LAB_005c5709);
  FUN_0040b140(&local_14);
  thunk_FUN_00406e80(&local_10,2);
  FUN_0040b140(&local_8);
  return;
}
