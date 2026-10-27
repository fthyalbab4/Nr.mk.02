// rea decompile_all
// name: FUN_005e3e30
// address: 0x5e3e30
// body: available
// range: 0x5e3e30-0x5e3fa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5e3e53 (push 0x5e3fa4 followed by fs-segment stack chaining); handler 0x5e3fa4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005e3e30(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_20;
  undefined *local_1c;
  undefined1 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;

  puStack_2c = &stack0xfffffffc;
  local_20 = 0;
  local_14 = 0;
  puStack_30 = &LAB_005e3fa4;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_2;
  while( true ) {
    iVar3 = FUN_005e8c1c(*(undefined4 *)(param_1 + 200));
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0xcc) = 0;
      while (*(int *)(param_1 + 0xcc) == 0) {
        cVar2 = FUN_005e2b90(param_1,0x54414449);
        if (cVar2 == '\0') goto LAB_005e3f86;
        FUN_005e3d48(param_1);
        *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0xd0);
        *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0xd8);
        uVar4 = FUN_005e2c00(param_1);
        *(undefined4 *)(param_1 + 0xe0) = uVar4;
      }
    }
    (**(code **)**(undefined4 **)(param_1 + 200))
              (*(undefined4 **)(param_1 + 200),param_1 + 0xd4,&local_10,param_3,
               *(int *)(param_1 + 0xcc) - (*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0)));
    if (*(int *)(*(int *)(param_1 + 200) + 0x2c) == 1) break;
    if (*(int *)(*(int *)(param_1 + 200) + 0x2c) != 0) {
      FUN_0040b9d0(PTR_LAB_0068932c,&local_20);
      local_1c = &DAT_005e3fc4;
      local_18 = 0x11;
      FUN_005d8ba0(local_20,&local_1c,0);
    }
    param_3 = local_c - (local_10 - local_8);
    if (param_3 == 0) {
LAB_005e3f86:
      puVar1 = puStack_2c;
      *in_FS_OFFSET = uStack_34;
      puStack_2c = &LAB_005e3fab;
      puStack_30 = (undefined1 *)0x5e3f9b;
      thunk_FUN_004072d8(&local_20,uStack_34,puVar1);
      puStack_30 = (undefined1 *)0x5e3fa3;
      thunk_FUN_004072d8(&local_14);
      return;
    }
  }
  iVar3 = FUN_005e8c20(*(undefined4 *)(param_1 + 200));
  if (iVar3 == 0) {
    iVar3 = FUN_005e8c1c(*(undefined4 *)(param_1 + 200));
    if (iVar3 == 0) goto LAB_005e3f86;
  }
  FUN_0040b9d0(PTR_LAB_00688fb4,&local_14);
  local_1c = &DAT_005e3fc4;
  local_18 = 0x11;
  FUN_005d8ba0(local_14,&local_1c,0);
  goto LAB_005e3f86;
}
