// rea decompile_all
// name: FUN_00740c90
// address: 0x740c90
// body: available
// range: 0x740c90-0x740d4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x740cbc (push 0x740d4d followed by fs-segment stack chaining); handler 0x740d4d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00740c90(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffd4;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int local_8;

  puStack_1c = (undefined1 *)0x740ca9;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_1c = (undefined1 *)0x740cb1;
  thunk_FUN_00407660(local_c);
  puStack_20 = &LAB_00740d4d;
  puStack_24 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_24;
  puStack_1c = &stack0xfffffffc;
  if (local_8 != local_c) {
    iVar2 = local_8;
    puStack_1c = &stack0xfffffffc;
    if ((local_8 != 0) && (puStack_1c = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
      puStack_1c = &stack0xfffffffc;
      iVar2 = FUN_00407048(&local_8,local_8);
    }
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + -4);
    }
    iVar2 = local_c;
    if ((local_c != 0) && (*(short *)(local_c + -10) != 2)) {
      iVar2 = FUN_00407048(&local_c,local_c);
    }
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + -4);
    }
    if (iVar3 == iVar4) {
      FUN_00740a70(local_8,local_c,1,param_3,iVar3);
      in_stack_ffffffd4 = param_3;
    }
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = in_stack_ffffffd4;
  puStack_24 = &LAB_00740d54;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
