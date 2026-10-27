// rea decompile_all
// name: FUN_0062f744
// address: 0x62f744
// body: available
// range: 0x62f744-0x62f827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62f75a (push 0x62f828 followed by fs-segment stack chaining); handler 0x62f828 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062f744(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  int in_stack_0000000c;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_0062f828;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  uVar2 = FUN_004048b8();
  *(undefined4 *)PTR_DAT_00688938 = uVar2;
  iVar3 = FUN_004048b8();
  *PTR_DAT_00688ab0 = extraout_EDX == 0 && iVar3 == 1;
  uVar2 = FUN_004048b8();
  *(undefined4 *)PTR_DAT_00689098 = uVar2;
  uVar2 = FUN_004048b8();
  *(undefined4 *)PTR_DAT_00689140 = uVar2;
  FUN_004083c0(&local_8,*(undefined4 *)(in_stack_0000000c + 0x70));
  iVar3 = FUN_005613fc(local_8);
  FUN_0045ba60(iVar3,&local_c);
  FUN_00408194(PTR_PTR_006888a0,local_c);
  uVar2 = FUN_0045bb10(iVar3);
  *(undefined4 *)PTR_DAT_00688954 = uVar2;
  *PTR_PTR_00688d48 = *(undefined1 *)(*(int *)(iVar3 + 0x10) + 0x1d);
  FUN_00405fdc(iVar3);
  FUN_005a0b94(*(undefined4 *)PTR_DAT_00688f94);
  FUN_005f6964();
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0062f82f;
  puStack_18 = (undefined1 *)0x62f81f;
  thunk_FUN_004072d8(&local_c,uStack_1c,puVar1);
  puStack_18 = (undefined1 *)0x62f827;
  thunk_FUN_004072d8(&local_8);
  return;
}
