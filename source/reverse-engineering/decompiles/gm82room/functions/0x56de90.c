// rea decompile_all
// name: FUN_0056de90
// address: 0x56de90
// body: available
// range: 0x56de90-0x56df17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x56dec5 (push 0x56df18 followed by fs-segment stack chaining); handler 0x56df18 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0056de90(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_20;
  undefined4 local_1c [4];
  undefined4 local_c;

  local_20 = 0;
  puVar3 = local_1c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  puStack_30 = (undefined1 *)0x56deba;
  FUN_0040923c(local_1c,&DAT_00615f70);
  puStack_34 = &LAB_0056df18;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  FUN_0050bce8(param_1,local_1c[0]);
  FUN_0050bcfc(param_1);
  FUN_004083c0(&local_20,local_c);
  FUN_0050bd24(param_1,local_20);
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0056df1f;
  puStack_34 = (undefined1 *)0x56df09;
  thunk_FUN_004072d8(&local_20,uStack_38,puVar1);
  puStack_34 = (undefined1 *)0x56df17;
  FUN_004090d0(local_1c,&DAT_00615f70);
  return;
}
