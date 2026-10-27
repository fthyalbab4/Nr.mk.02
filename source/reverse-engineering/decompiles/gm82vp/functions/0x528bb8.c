// rea decompile_all
// name: FUN_00528bb8
// address: 0x528bb8
// body: available
// range: 0x528bb8-0x528d02 inclusive
// range: 0x528d2a-0x528d44 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x528bd7 (push 0x528d45 followed by fs-segment stack chaining); handler 0x528d45 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x528c08 (push 0x528d14 followed by fs-segment stack chaining); handler 0x528d14 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x528c54 (push 0x528d03 followed by fs-segment stack chaining); handler 0x528d03 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00528bb8(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint *in_FS_OFFSET;
  undefined1 *puVar5;
  uint uStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  undefined1 *puStack_58;
  undefined1 *puStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  uint uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  int local_c;
  int local_8;

  puStack_34 = &stack0xfffffffc;
  local_24 = 0;
  local_20 = 0;
  puStack_38 = &LAB_00528d45;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_3c;
  local_c = *(int *)(param_1 + 8);
  puVar5 = &stack0xfffffffc;
  local_8 = param_1;
  if (local_c == 0) {
    puStack_40 = (undefined1 *)0x528bf5;
    cVar2 = FUN_00527f54(param_1);
    puVar5 = puStack_34;
    if (cVar2 == '\0') {
      puStack_44 = &LAB_00528d14;
      uStack_48 = *in_FS_OFFSET;
      *in_FS_OFFSET = (uint)&uStack_48;
      uStack_4c = 0;
      uStack_50 = 0;
      puStack_54 = (undefined1 *)0x0;
      puStack_58 = local_1c;
      puStack_5c = (undefined1 *)0x528c20;
      puStack_40 = &stack0xfffffffc;
      FUN_00436ad0(0,0,0);
      puStack_54 = local_1c;
      puStack_58 = (undefined1 *)0x528c31;
      FUN_0040b9d0(&LAB_0051ec1c,&local_20);
      puStack_58 = (undefined1 *)local_20;
      puStack_5c = (undefined1 *)0x528c49;
      FUN_00406268(*(undefined4 *)(local_8 + 4),local_8,0);
      puStack_60 = &LAB_00528d03;
      uStack_64 = *in_FS_OFFSET;
      *in_FS_OFFSET = (uint)&uStack_64;
      puStack_5c = &stack0xfffffffc;
      cVar2 = FUN_0053065c(*(undefined4 *)(local_8 + 4));
      if (cVar2 == '\0') {
        uVar3 = FUN_005287d4(local_8);
        *(undefined4 *)(local_8 + 8) = uVar3;
      }
      else {
        uVar3 = FUN_0052824c(local_8);
        *(undefined4 *)(local_8 + 8) = uVar3;
      }
      puVar5 = puStack_5c;
      local_c = *(undefined4 *)(local_8 + 8);
      *in_FS_OFFSET = uStack_64;
      puStack_5c = &DAT_00528d0a;
      puStack_60 = (undefined1 *)0x528c9f;
      iVar4 = FUN_004043a8(0,uStack_64,puVar5);
      if (iVar4 == 0) {
        puStack_60 = (undefined1 *)0x64;
      }
      else {
        puStack_60 = (undefined1 *)0x0;
      }
      iVar4 = *(int *)(local_8 + 4);
      uStack_64 = (uint)*(byte *)(iVar4 + 0x22);
      FUN_00436ad0(0,0,0,local_1c,0);
      puVar5 = local_1c;
      FUN_0040b9d0(&LAB_0051ec1c,&local_24);
      FUN_00406268(iVar4,local_8,2,local_24,puVar5);
      piVar1 = *(int **)(local_8 + 4);
      if (*(char *)((int)piVar1 + 0x22) != '\0') {
        (**(code **)(*piVar1 + 0x10))(piVar1,local_8);
      }
      return;
    }
  }
  puStack_34 = puVar5;
  puVar5 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_00528d4c;
  puStack_38 = (undefined1 *)0x528d44;
  thunk_FUN_004072fc(&local_24,2,puVar5);
  return;
}
