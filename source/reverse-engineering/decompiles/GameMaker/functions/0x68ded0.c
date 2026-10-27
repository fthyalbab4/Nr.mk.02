// rea decompile_all
// name: FUN_0068ded0
// address: 0x68ded0
// body: available
// range: 0x68ded0-0x68df9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x68defa (push 0x68df9c followed by fs-segment stack chaining); handler 0x68df9c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068ded0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined1 *puStack_64;
  undefined4 local_54;
  char local_50 [56];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 local_8;

  puStack_64 = &stack0xfffffffc;
  local_54 = 0;
  local_18 = *param_5;
  local_14 = param_5[1];
  uStack_10 = param_5[2];
  uStack_c = param_5[3];
  puStack_68 = &LAB_0068df9c;
  uStack_6c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_6c;
  local_8 = param_3;
  iVar3 = FUN_00405cbc(param_2,&PTR_LAB_00479ab8);
  (**(code **)(**(int **)(iVar3 + 0x290) + 0x4c))(*(int **)(iVar3 + 0x290),&local_18);
  FUN_00657574(*(undefined4 *)(param_1 + 0x61c),local_8,local_50);
  if (local_50[0] == '\0') {
    FUN_0045b498(*(undefined4 *)(*(int *)(iVar3 + 0x290) + 0x40),0);
  }
  else {
    FUN_0045b498(*(undefined4 *)(*(int *)(iVar3 + 0x290) + 0x40),1);
  }
  (**(code **)(**(int **)(iVar3 + 0x280) + 0xc))(*(int **)(iVar3 + 0x280),local_8,&local_54);
  uVar2 = local_54;
  (**(code **)(**(int **)(iVar3 + 0x290) + 0x88))(*(int **)(iVar3 + 0x290),local_18,local_14);
  puVar1 = puStack_68;
  *in_FS_OFFSET = uVar2;
  puStack_68 = &LAB_0068dfa3;
  uStack_6c = 0x68df9b;
  thunk_FUN_00406e5c(&local_54,uVar2,puVar1);
  return;
}
