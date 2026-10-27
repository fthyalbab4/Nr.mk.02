// rea decompile_all
// name: FUN_0052487c
// address: 0x52487c
// body: available
// range: 0x52487c-0x52490a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x524892 (push 0x52490b followed by fs-segment stack chaining); handler 0x52490b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052487c(int *param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_c;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_1c = &LAB_0052490b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  if ((param_2 < 0) || (puVar2 = &stack0xfffffffc, param_1[2] <= param_2)) {
    FUN_0040b9d0(&LAB_0051eb0c,&local_8);
    (**(code **)(*param_1 + 0xc))(param_1,1,local_8);
    if (param_1[2] == 0) {
      FUN_0040b9d0(&LAB_0051ebec,&local_c);
      FUN_0051eddc(local_c);
    }
    param_2 = 0;
    puVar2 = puStack_18;
  }
  puStack_18 = puVar2;
  iVar1 = param_1[1];
  uVar3 = (uint)CONCAT12(*(undefined1 *)(iVar1 + 2 + param_2 * 3),
                         *(undefined2 *)(iVar1 + param_2 * 3));
  FUN_00524360(*param_1,iVar1,uVar3,uVar3);
  puVar2 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00524912;
  puStack_1c = (undefined1 *)0x52490a;
  thunk_FUN_004072fc(&local_c,2,puVar2);
  return;
}
