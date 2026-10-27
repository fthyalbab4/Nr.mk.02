// rea decompile_all
// name: FUN_005443dc
// address: 0x5443dc
// body: available
// range: 0x5443dc-0x5444ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x544448 (push 0x5444ad followed by fs-segment stack chaining); handler 0x5444ad lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005443dc(int param_1,undefined4 param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_FS_OFFSET;
  int iStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;

  iVar6 = *(int *)(*(int *)(param_1 + 0x20) + 8);
  if (iVar6 < 1) {
    puStack_1c = (undefined1 *)0x544409;
    bVar2 = FUN_0054b4b8(*(undefined4 *)(param_1 + 4));
    iVar6 = 1 << (bVar2 & 0x1f);
  }
  else {
    puStack_1c = (undefined1 *)0x5443fd;
    bVar2 = FUN_00541368(*(int *)(param_1 + 0x20));
  }
  if (*(char *)(*(int *)(param_1 + 4) + 0x45) == '\x01') {
    puStack_1c = (undefined1 *)0x544429;
    local_c = FUN_00405a4c(&PTR_FUN_00543bc0,1);
  }
  else {
    puStack_1c = (undefined1 *)0x54443a;
    local_c = FUN_00405a4c(&PTR_LAB_0054413c,1);
  }
  puStack_20 = &LAB_005444ad;
  iStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_24;
  piVar1 = *(int **)(param_1 + 4);
  *(int **)(local_c + 0xc) = piVar1;
  *(undefined4 *)(local_c + 8) = *(undefined4 *)(*piVar1 + 0x70);
  puStack_1c = &stack0xfffffffc;
  uVar3 = FUN_005449dc(param_1,3);
  uVar3 = uVar3 & 0xffff;
  uVar4 = FUN_005449dc(param_1,4);
  uVar4 = uVar4 & 0xffff;
  uVar5 = FUN_005455c8(param_1);
  FUN_005439b8(local_c,param_2,bVar2,iVar6,*(undefined4 *)(param_1 + 0x18),uVar5,uVar4,uVar3);
  *in_FS_OFFSET = iVar6;
  FUN_00405a7c(local_c,iVar6,uVar5,&LAB_005444b4);
  return;
}
