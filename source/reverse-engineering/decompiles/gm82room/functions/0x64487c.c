// rea decompile_all
// name: FUN_0064487c
// address: 0x64487c
// body: available
// range: 0x64487c-0x644949 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x644899 (push 0x64494a followed by fs-segment stack chaining); handler 0x64494a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064487c(void)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  int in_stack_0000000c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_0064494a;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_0041759c(&local_8);
  piVar3 = (int *)FUN_0049c568(&PTR_FUN_00496a2c,1,0);
  FUN_0049cc6c(piVar3,local_8);
  FUN_004083c0(piVar3 + 0x1c,*(undefined4 *)(in_stack_0000000c + 0x10));
  FUN_004083c0(&local_c,*(undefined4 *)(in_stack_0000000c + 0x28));
  FUN_0049cbfc(piVar3,local_c);
  *in_stack_00000004 = 1;
  cVar2 = (**(code **)(*piVar3 + 0x40))();
  if (cVar2 == '\0') {
    FUN_004072d8(in_stack_00000004 + 4);
  }
  else {
    FUN_0049cb7c(piVar3,&local_10);
    FUN_004083e8(in_stack_00000004 + 4,local_10,0xfde9);
  }
  FUN_00405fdc(piVar3);
  FUN_004175a8(local_8);
  FUN_005f6964();
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00644951;
  puStack_24 = (undefined1 *)0x64493c;
  thunk_FUN_004072d8(&local_10,uStack_28,puVar1);
  puStack_24 = (undefined1 *)0x644949;
  thunk_FUN_004072fc(&local_c,2);
  return;
}
