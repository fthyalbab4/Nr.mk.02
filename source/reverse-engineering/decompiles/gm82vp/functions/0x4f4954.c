// rea decompile_all
// name: FUN_004f4954
// address: 0x4f4954
// body: available
// range: 0x4f4954-0x4f4af2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f4954(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_4c [64];

  uVar2 = FUN_004f211c(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x138),0);
  iVar3 = FUN_0040621c(uVar2,&PTR_LAB_004efe54);
  *(int *)(param_1 + 0x14) = iVar3;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar3 + 0x458);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x45c);
  FUN_004f6154(*(undefined4 *)(param_1 + 0xc),param_1 + 0x20,param_1 + 0x24);
  uVar2 = FUN_00404324(*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  FUN_00404f38(uVar2,*(undefined4 *)(param_1 + 0x20),0);
  uVar2 = FUN_00404324(*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  FUN_00404f38(uVar2,*(undefined4 *)(param_1 + 0x20),0);
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 2) != 0) {
    uVar2 = FUN_00404324(*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
  }
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 4) != 0) {
    uVar2 = FUN_00404324(*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x30) = uVar2;
  }
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 8) != 0) {
    uVar2 = FUN_00404324(*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x34) = uVar2;
  }
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 0x10) != 0) {
    uVar2 = FUN_00404324(*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x38) = uVar2;
  }
  FUN_004f195c(param_2,*(undefined1 *)(*(int *)(param_1 + 0xc) + 0x12d),
               *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x130),auStack_4c);
  cVar1 = *(char *)(*(int *)(param_1 + 0xc) + 0x134);
  if (cVar1 == '\0') {
    FUN_004f4e24(param_1,param_2,auStack_4c);
  }
  else if (cVar1 == '\x01') {
    FUN_004f53a4(param_1,param_2,auStack_4c);
  }
  FUN_004f19b8(auStack_4c);
  FUN_00404340(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x20));
  FUN_00404340(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x20));
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 2) != 0) {
    FUN_00404340(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x20));
  }
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 4) != 0) {
    FUN_00404340(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x20));
  }
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 8) != 0) {
    FUN_00404340(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x20));
  }
  if ((*(byte *)(*(int *)(param_1 + 0xc) + 300) & 0x10) != 0) {
    FUN_00404340(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x20));
  }
  return 1;
}
