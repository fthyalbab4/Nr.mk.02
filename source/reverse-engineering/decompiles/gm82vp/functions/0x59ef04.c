// rea decompile_all
// name: FUN_0059ef04
// address: 0x59ef04
// body: available
// range: 0x59ef04-0x59ef97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x59ef24 (push 0x59ef98 followed by fs-segment stack chaining); handler 0x59ef98 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0059ef04(int param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_0059ef98;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puVar1 = &stack0xfffffffc;
  local_8 = param_3;
  if (param_2 < 0) {
    FUN_0040b9d0(PTR_LAB_00689324,&local_c);
    FUN_00438dc8(&PTR_LAB_0042e000,local_c,param_2);
    puVar1 = puStack_1c;
  }
  puStack_1c = puVar1;
  for (iVar3 = *(int *)(param_1 + 8); param_2 < iVar3; iVar3 = iVar3 + -1) {
    uVar2 = FUN_0059eba4(*(undefined4 *)(param_1 + 4),iVar3 + -1);
    FUN_0059ec5c(*(undefined4 *)(param_1 + 4),iVar3,uVar2);
  }
  FUN_0059ec5c(*(undefined4 *)(param_1 + 4),param_2,local_8);
  puVar1 = puStack_1c;
  if (*(int *)(param_1 + 8) < param_2) {
    *(int *)(param_1 + 8) = param_2;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0059ef9f;
  puStack_20 = (undefined1 *)0x59ef97;
  thunk_FUN_004072d8(&local_c,uStack_24,puVar1);
  return;
}
