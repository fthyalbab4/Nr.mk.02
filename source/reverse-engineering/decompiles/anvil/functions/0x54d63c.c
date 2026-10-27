// rea decompile_all
// name: FUN_0054d63c
// address: 0x54d63c
// body: available
// range: 0x54d63c-0x54d75e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54d658 (push 0x54d75f followed by fs-segment stack chaining); handler 0x54d75f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0054d63c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

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
  puStack_34 = &LAB_0054d75f;
  iStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_38;
  for (; puVar2 = puStack_30, *(int *)(param_1 + 4) != 0; param_1 = param_1 + 0x20) {
    uVar3 = FUN_00551120(*(undefined4 *)(*(int *)(param_4 + -4) + 0x14),*(undefined4 *)(param_1 + 4)
                        );
    FUN_00407590(&local_8,uVar3,0);
    iStack_38 = 0x54d688;
    uVar3 = FUN_00407dd0(&local_10);
    iStack_38 = 0x54d692;
    local_11 = FUN_00534b38(local_8,uVar3);
    iStack_38 = 0x54d6a0;
    FUN_0040840c(&local_c,local_10);
    if (local_11 == '\0') {
      iStack_38 = 0x54d6b1;
      FUN_004083c0(&local_c,local_8);
    }
    uVar5 = 1;
    uVar3 = local_c;
    iStack_38 = param_1;
    uVar4 = FUN_00551120(*(undefined4 *)(*(int *)(param_4 + -4) + 0x14),
                         *(undefined4 *)(param_1 + 0x10));
    uVar3 = FUN_0054cd6c(&PTR_LAB_005472e4,1,*(undefined4 *)(*(int *)(param_4 + -4) + 0x14),uVar4,
                         uVar3,uVar5);
    local_18 = *(undefined4 *)(param_4 + -4);
    iStack_38 = 0x54d6f4;
    local_1c = FUN_00438d04(local_18,uVar3);
    iStack_38 = 0x54d701;
    FUN_0054d25c(uVar3,&local_24);
    iStack_38 = 0x54d70c;
    FUN_00415934(local_24,&local_20);
    piVar1 = *(int **)(*(int *)(param_4 + -4) + 0x28);
    iStack_38 = 0x54d71f;
    (**(code **)(*piVar1 + 0x3c))(piVar1,local_20,uVar3);
  }
  *in_FS_OFFSET = iStack_38;
  puStack_30 = &LAB_0054d766;
  puStack_34 = (undefined1 *)0x54d746;
  thunk_FUN_004072fc(&local_24,2,puVar2);
  puStack_34 = (undefined1 *)0x54d74e;
  FUN_00407dd0(&local_10);
  puStack_34 = (undefined1 *)0x54d756;
  thunk_FUN_004072d8(&local_c);
  puStack_34 = (undefined1 *)0x54d75e;
  FUN_004072d8(&local_8);
  return;
}
