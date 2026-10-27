// rea decompile_all
// name: FUN_0068d598
// address: 0x68d598
// body: available
// range: 0x68d598-0x68d663 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x68d5c2 (push 0x68d664 followed by fs-segment stack chaining); handler 0x68d664 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068d598(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 local_3c;
  char local_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 local_8;

  puStack_4c = &stack0xfffffffc;
  local_3c = 0;
  local_18 = *param_5;
  local_14 = param_5[1];
  uStack_10 = param_5[2];
  uStack_c = param_5[3];
  puStack_50 = &LAB_0068d664;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  local_8 = param_3;
  iVar3 = FUN_00405cbc(param_2,&PTR_LAB_00479ab8);
  (**(code **)(**(int **)(iVar3 + 0x290) + 0x4c))(*(int **)(iVar3 + 0x290),&local_18);
  FUN_0065751c(*(undefined4 *)(param_1 + 0x61c),local_8,local_38);
  if (local_38[0] == '\0') {
    FUN_0045b498(*(undefined4 *)(*(int *)(iVar3 + 0x290) + 0x40),0);
  }
  else {
    FUN_0045b498(*(undefined4 *)(*(int *)(iVar3 + 0x290) + 0x40),1);
  }
  (**(code **)(**(int **)(iVar3 + 0x280) + 0xc))(*(int **)(iVar3 + 0x280),local_8,&local_3c);
  uVar2 = local_3c;
  (**(code **)(**(int **)(iVar3 + 0x290) + 0x88))(*(int **)(iVar3 + 0x290),local_18,local_14);
  puVar1 = puStack_50;
  *in_FS_OFFSET = uVar2;
  puStack_50 = &LAB_0068d66b;
  uStack_54 = 0x68d663;
  thunk_FUN_00406e5c(&local_3c,uVar2,puVar1);
  return;
}
