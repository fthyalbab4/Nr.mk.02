// rea decompile_all
// name: FUN_00442c30
// address: 0x442c30
// body: available
// range: 0x442c30-0x442d20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x442c47 (push 0x442d21 followed by fs-segment stack chaining); handler 0x442d21 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00442c30(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd4;
  undefined4 uVar3;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00442d21;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar1 = *(int *)(*(int *)(param_4 + -8) + 0x1c);
  if (iVar1 == *(int *)(param_1 + 4)) {
    uVar3 = 0x442c62;
    puStack_18 = &stack0xfffffffc;
    FUN_00408194(param_2,*(undefined4 *)(param_1 + 8));
  }
  else if (iVar1 == param_1) {
    uVar3 = 0x442c7a;
    puStack_18 = &stack0xfffffffc;
    FUN_00408194(param_2,L"Owner");
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if (((iVar1 == 0) || (*(int *)(iVar1 + 8) == 0)) || (*(int *)(param_1 + 8) == 0)) {
      if (*(int *)(param_1 + 8) == 0) {
        uVar3 = 0x442d0b;
        FUN_00408194(param_2,0);
      }
      else {
        uVar3 = 0x442d00;
        puStack_18 = &stack0xfffffffc;
        FUN_00408678(param_2,*(undefined4 *)(param_1 + 8),L".Owner");
      }
    }
    else {
      puStack_18 = &stack0xfffffffc;
      cVar2 = FUN_00442c18(iVar1,*(undefined4 *)(*(int *)(param_4 + -8) + 0x1c));
      if (cVar2 == '\0') {
        uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
        in_stack_ffffffd4 = *(undefined4 *)(param_1 + 8);
        FUN_0040875c(param_2,3);
      }
      else {
        FUN_00442c30(*(undefined4 *)(param_1 + 4),&local_8);
        in_stack_ffffffd4 = *(undefined4 *)(param_1 + 8);
        uVar3 = local_8;
        FUN_0040875c(param_2,3,param_4,in_stack_ffffffd4,&DAT_00442d54);
      }
    }
  }
  *in_FS_OFFSET = in_stack_ffffffd4;
  thunk_FUN_004072d8(&local_8,in_stack_ffffffd4,uVar3,&LAB_00442d28);
  return;
}
