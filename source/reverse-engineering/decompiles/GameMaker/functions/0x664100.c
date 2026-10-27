// rea decompile_all
// name: FUN_00664100
// address: 0x664100
// body: available
// range: 0x664100-0x6641ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x664128 (push 0x6641ac followed by fs-segment stack chaining); handler 0x6641ac lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00664100(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined1 local_1c [16];
  undefined4 local_c;
  int local_8;

  puStack_24 = (undefined1 *)0x66411a;
  local_8 = param_1;
  local_c = FUN_0045ce2c(*(undefined4 *)(param_1 + 0x284));
  puStack_28 = &LAB_006641ac;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_0045ceb4(*(undefined4 *)(local_8 + 0x284),*(undefined4 *)(param_2 + 4));
  iVar2 = FUN_00677f54(local_8);
  FUN_0045bc24(*(undefined4 *)(*(int *)(local_8 + 0x284) + 0x48),*(undefined4 *)(iVar2 + 0x44));
  FUN_004edf30(local_8,local_1c);
  (**(code **)(**(int **)(local_8 + 0x284) + 0x4c))(*(int **)(local_8 + 0x284),local_1c);
  FUN_004f8b4c(local_8,param_2);
  FUN_004f4f50(local_8,*(undefined4 *)(param_2 + 4),0);
  puVar1 = puStack_28;
  *in_FS_OFFSET = 0;
  puStack_28 = &LAB_006641b3;
  uStack_2c = 0x6641ab;
  FUN_0045ceb4(*(undefined4 *)(local_8 + 0x284),local_c,puVar1);
  return;
}
