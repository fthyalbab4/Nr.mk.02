// rea decompile_all
// name: FUN_00577720
// address: 0x577720
// body: available
// range: 0x577720-0x5777fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x577741 (push 0x5777ff followed by fs-segment stack chaining); handler 0x5777ff lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00577720(int *param_1,undefined4 param_2,char param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  char local_d;
  undefined4 local_c;

  puStack_2c = &stack0xfffffffc;
  local_14 = 0;
  puStack_30 = &LAB_005777ff;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_d = param_3;
  local_c = param_2;
  iVar3 = (**(code **)(*param_1 + 0x14))();
  if ((0 < iVar3) && (param_1[0x12] != 0)) {
    cVar2 = FUN_0042c1c0(local_c);
    if (cVar2 == '\0') {
      FUN_00429418(&local_14,local_c);
      iVar3 = (**(code **)(*param_1 + 0x58))(param_1,local_14);
      if ((local_d != '\0') && (iVar3 == -1)) {
        local_1c = local_c;
        local_18 = 0xd;
        FUN_0041c0bc(&PTR_LAB_00410b4c,1,PTR_PTR_0078223c,0,&local_1c);
        FUN_00406618();
      }
    }
    else {
      iVar3 = FUN_004256a8(local_c);
    }
    if ((local_d != '\0') && (*(int *)(param_1[0x12] + iVar3 * 4) == 0)) {
      uVar4 = FUN_005779b8(&PTR_LAB_005757a0,1,param_1[0x13]);
      *(undefined4 *)(param_1[0x12] + iVar3 * 4) = uVar4;
    }
  }
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00577806;
  puStack_30 = (undefined1 *)0x5777fe;
  thunk_FUN_00406e5c(&local_14,uStack_34,puVar1);
  return;
}
