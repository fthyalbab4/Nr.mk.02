// rea decompile_all
// name: FUN_0074ac8c
// address: 0x74ac8c
// body: available
// range: 0x74ac8c-0x74adae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x74aca8 (push 0x74adaf followed by fs-segment stack chaining); handler 0x74adaf lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074ac8c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *in_FS_OFFSET;
  undefined4 uVar5;
  int iStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined3 uStack_14;
  char local_11;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_30 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  uStack_14 = 0;
  local_11 = '\0';
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  puStack_34 = &LAB_0074adaf;
  iStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_38;
  for (; puVar2 = puStack_30, *(int *)(param_1 + 4) != 0; param_1 = param_1 + 0x20) {
    uVar3 = FUN_0074e98c(*(undefined4 *)(*(int *)(param_4 + -4) + 0x14),*(undefined4 *)(param_1 + 4)
                        );
    FUN_00407140(&local_8,uVar3,0);
    iStack_38 = 0x74acd8;
    uVar3 = FUN_00407a78(&local_10);
    iStack_38 = 0x74ace2;
    local_11 = FUN_00733cc8(local_8,uVar3);
    iStack_38 = 0x74acf0;
    FUN_00408130(&local_c,local_10);
    if (local_11 == '\0') {
      iStack_38 = 0x74ad01;
      FUN_004080e4(&local_c,local_8);
    }
    uVar5 = 1;
    uVar3 = local_c;
    iStack_38 = param_1;
    uVar4 = FUN_0074e98c(*(undefined4 *)(*(int *)(param_4 + -4) + 0x14),
                         *(undefined4 *)(param_1 + 0x10));
    uVar3 = FUN_0074a4ec(&PTR_LAB_00744a64,1,*(undefined4 *)(*(int *)(param_4 + -4) + 0x14),uVar4,
                         uVar3,uVar5);
    local_18 = *(undefined4 *)(param_4 + -4);
    iStack_38 = 0x74ad44;
    local_1c = FUN_0043ae88(local_18,uVar3);
    iStack_38 = 0x74ad51;
    FUN_0074a9dc(uVar3,&local_24);
    iStack_38 = 0x74ad5c;
    FUN_00415ae8(local_24,&local_20);
    piVar1 = *(int **)(*(int *)(param_4 + -4) + 0x28);
    iStack_38 = 0x74ad6f;
    (**(code **)(*piVar1 + 0x3c))(piVar1,local_20,uVar3);
  }
  *in_FS_OFFSET = iStack_38;
  puStack_30 = &LAB_0074adb6;
  puStack_34 = (undefined1 *)0x74ad96;
  thunk_FUN_00406e80(&local_24,2,puVar2);
  puStack_34 = (undefined1 *)0x74ad9e;
  FUN_00407a78(&local_10);
  puStack_34 = (undefined1 *)0x74ada6;
  thunk_FUN_00406e5c(&local_c);
  puStack_34 = (undefined1 *)0x74adae;
  FUN_00406e5c(&local_8);
  return;
}
