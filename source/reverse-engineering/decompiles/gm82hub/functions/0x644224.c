// rea decompile_all
// name: FUN_00644224
// address: 0x644224
// body: available
// range: 0x644224-0x64432b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x644239 (push 0x64432c followed by fs-segment stack chaining); handler 0x64432c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00644224(void)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  int in_stack_0000000c;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_0064432c;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  piVar2 = (int *)FUN_0045b5a4(&PTR_FUN_004550c0,1);
  uVar3 = FUN_005b603c();
  (**(code **)(*piVar2 + 8))(piVar2,uVar3);
  if (*(int *)(in_stack_0000000c + 0x10) != 0) {
    FUN_004083c0(&local_8,*(undefined4 *)(in_stack_0000000c + 0x10));
    FUN_0045bab4(piVar2,local_8);
  }
  if (0.0 <= *(double *)(in_stack_0000000c + 0x20)) {
    uVar3 = FUN_004048b8();
    FUN_0045bb2c(piVar2,uVar3);
  }
  if (0.0 <= *(double *)(in_stack_0000000c + 0x38)) {
    uVar3 = FUN_004048b8();
    FUN_0045b790(piVar2,uVar3);
  }
  iVar4 = FUN_004048b8();
  if (iVar4 == 0) {
    FUN_0045bb58(piVar2,0);
  }
  else if (iVar4 == 1) {
    FUN_0045bb58(piVar2,1);
  }
  else if (iVar4 == 2) {
    FUN_0045bb58(piVar2,2);
  }
  else if (iVar4 == 3) {
    FUN_0045bb58(piVar2,3);
  }
  FUN_005b5fe0(piVar2);
  FUN_00405fdc(piVar2);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00644333;
  puStack_18 = (undefined1 *)0x64432b;
  thunk_FUN_004072d8(&local_8,uStack_1c,puVar1);
  return;
}
