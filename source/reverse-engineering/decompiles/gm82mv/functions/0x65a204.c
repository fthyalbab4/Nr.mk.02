// rea decompile_all
// name: FUN_0065a204
// address: 0x65a204
// body: available
// range: 0x65a204-0x65a2f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65a254 (push 0x65a2f6 followed by fs-segment stack chaining); handler 0x65a2f6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0065a204(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34 [4];
  undefined4 local_24;
  int local_1c [4];
  undefined4 local_c;

  local_38 = 0;
  local_3c = 0;
  piVar4 = local_34;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *param_2;
    param_2 = param_2 + 1;
    piVar4 = piVar4 + 1;
  }
  piVar4 = local_1c;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *param_1;
    param_1 = param_1 + 1;
    piVar4 = piVar4 + 1;
  }
  puStack_4c = (undefined1 *)0x65a23b;
  FUN_0040923c(local_1c,&DAT_00615f70);
  puStack_4c = (undefined1 *)0x65a249;
  FUN_0040923c(local_34,&DAT_00615f70);
  puStack_50 = &LAB_0065a2f6;
  uStack_54 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_54;
  if ((local_1c[0] == 0) && (local_34[0] == 0)) {
    puStack_4c = &stack0xfffffffc;
    FUN_004104d4();
  }
  else if ((local_1c[0] == 1) && (local_34[0] == 1)) {
    puStack_4c = &stack0xfffffffc;
    FUN_004083c0(&local_38,local_24);
    uVar2 = local_38;
    FUN_004083c0(&local_3c,local_c);
    FUN_0041561c(local_3c,uVar2);
  }
  else {
    puStack_4c = &stack0xfffffffc;
    if (local_1c[0] == 0) {
      puStack_4c = &stack0xfffffffc;
    }
  }
  puVar1 = puStack_4c;
  *in_FS_OFFSET = uStack_54;
  puStack_4c = &LAB_0065a2fd;
  puStack_50 = (undefined1 *)0x65a2e2;
  thunk_FUN_004072fc(&local_3c,2,puVar1);
  puStack_50 = (undefined1 *)0x65a2f5;
  FUN_00409120(local_34,&DAT_00615f70,2);
  return;
}
