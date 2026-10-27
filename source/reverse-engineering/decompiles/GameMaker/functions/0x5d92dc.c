// rea decompile_all
// name: FUN_005d92dc
// address: 0x5d92dc
// body: available
// range: 0x5d92dc-0x5d93a0 inclusive
// range: 0x5d93a8-0x5d93bd inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d92fe (push 0x5d93be followed by fs-segment stack chaining); handler 0x5d93be lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d9326 (push 0x5d93a1 followed by fs-segment stack chaining); handler 0x5d93a1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d92dc(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_8;

  puStack_24 = &stack0xfffffffc;
  puStack_30 = &stack0xfffffffc;
  local_8 = 0;
  puStack_28 = &LAB_005d93be;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  if (*(char *)(param_1 + 0x2b0) == '\0') {
    *(undefined1 *)(param_1 + 0x2b0) = 1;
    puStack_34 = &LAB_005d93a1;
    uStack_38 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_38;
    iVar3 = *(int *)(*(int *)(param_1 + 0x2ac) + 8);
    if (-1 < iVar3 + -1) {
      iVar2 = 0;
      do {
        if (*(int *)(*(int *)(*(int *)(param_1 + 0x270) + 0x40) + iVar2 * 4) == param_2) {
          piVar1 = (int *)FUN_0043b048(*(undefined4 *)(param_1 + 0x2ac),iVar2);
          (**(code **)(*piVar1 + 8))(piVar1,param_3);
          FUN_005d40dc(piVar1,&local_8);
          FUN_005d90e4(param_1,param_2,local_8);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *in_FS_OFFSET = uStack_38;
    *(undefined1 *)(param_1 + 0x2b0) = 0;
    return;
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_005d93c5;
  puStack_28 = (undefined1 *)0x5d93bd;
  FUN_0040b140(&local_8,uStack_2c,&stack0xfffffffc);
  return;
}
