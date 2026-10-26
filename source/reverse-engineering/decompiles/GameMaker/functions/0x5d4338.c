// rea decompile_all
// name: FUN_005d4338
// address: 0x5d4338
// body: available
// range: 0x5d4338-0x5d44b0 inclusive
// range: 0x5d44b8-0x5d44dd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d4358 (push 0x5d44de followed by fs-segment stack chaining); handler 0x5d44de lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d4431 (push 0x5d44b1 followed by fs-segment stack chaining); handler 0x5d44b1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d4338(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  byte bVar3;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  int *piStack_70;
  undefined1 *puStack_6c;
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  int *piStack_54;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  undefined1 *puStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_28;
  undefined1 local_22 [2];
  int local_20;
  undefined1 local_1c [8];
  int *local_14;
  int local_10;
  int *local_c;
  undefined4 local_8;

  puStack_30 = &stack0xfffffffc;
  local_28 = 0;
  local_8 = 0;
  local_c = (int *)0x0;
  puStack_34 = &LAB_005d44de;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puVar1 = &stack0xfffffffc;
  local_10 = param_1;
  if (*(char *)(param_1 + 0x18) == '\0') {
    uStack_3c = 0x5d437b;
    FUN_0040b184(&local_c,*(undefined4 *)(param_1 + 0xc),&DAT_005d44ec);
    puVar1 = puStack_30;
    if (local_c != (int *)0x0) {
      uStack_3c = 0x5d438d;
      uStack_3c = FUN_00407a78(&local_8);
      piStack_40 = local_c;
      puStack_44 = (undefined1 *)0x5d4397;
      (**(code **)(*local_c + 0xc))();
      puStack_44 = local_1c;
      piStack_48 = local_c;
      piStack_4c = (int *)0x5d43a4;
      (**(code **)(*local_c + 0x14))();
      piStack_4c = &local_20;
      piStack_50 = local_c;
      piStack_54 = (int *)0x5d43b8;
      (**(code **)(*local_c + 0x1c))();
      bVar3 = local_20 != 0;
      piStack_54 = &local_20;
      piStack_58 = local_c;
      piStack_5c = (int *)0x5d43ce;
      (**(code **)(*local_c + 0x24))();
      if (local_20 != 0) {
        bVar3 = bVar3 | 2;
      }
      piStack_5c = &local_20;
      piStack_60 = local_c;
      piStack_64 = (int *)0x5d43e4;
      (**(code **)(*local_c + 0x2c))();
      if (local_20 != 0) {
        bVar3 = bVar3 | 4;
      }
      piStack_64 = &local_20;
      piStack_68 = local_c;
      puStack_6c = (undefined1 *)0x5d43fa;
      (**(code **)(*local_c + 0x34))();
      if (local_20 != 0) {
        bVar3 = bVar3 | 8;
      }
      puStack_6c = local_22;
      piStack_70 = local_c;
      puStack_74 = (undefined1 *)0x5d4410;
      (**(code **)(*local_c + 0x44))();
      puStack_74 = (undefined1 *)0x5d441c;
      local_14 = (int *)FUN_0045aee4(&PTR_FUN_00454a00,1);
      *(undefined1 *)(local_10 + 0x18) = 1;
      puStack_78 = &LAB_005d44b1;
      uStack_7c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_7c;
      puStack_74 = &stack0xfffffffc;
      (**(code **)(*local_14 + 8))(local_14,*(undefined4 *)(local_10 + 0x1c));
      FUN_00408130(&local_28,local_8);
      FUN_0045b3f4(local_14,local_28);
      uVar2 = FUN_00404878();
      FUN_0045b46c(local_14,uVar2);
      FUN_0045b498(local_14,bVar3);
      FUN_0045b520(local_14,local_22[0]);
      (**(code **)(**(int **)(local_10 + 0x1c) + 8))(*(int **)(local_10 + 0x1c),local_14);
      puVar1 = puStack_74;
      *in_FS_OFFSET = uStack_7c;
      puStack_74 = (undefined1 *)0x5d44b8;
      *(undefined1 *)(local_10 + 0x18) = 0;
      puStack_78 = (undefined1 *)0x5d44b0;
      FUN_00405a7c(local_14,uStack_7c,puVar1);
      return;
    }
  }
  puStack_30 = puVar1;
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_005d44e5;
  puStack_34 = (undefined1 *)0x5d44cd;
  thunk_FUN_00406e5c(&local_28,uStack_38,puVar1);
  puStack_34 = (undefined1 *)0x5d44d5;
  FUN_0040b140(&local_c);
  puStack_34 = (undefined1 *)0x5d44dd;
  FUN_00407a78(&local_8);
  return;
}
