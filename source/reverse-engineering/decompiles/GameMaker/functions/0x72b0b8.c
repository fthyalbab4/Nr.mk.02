// rea decompile_all
// name: FUN_0072b0b8
// address: 0x72b0b8
// body: available
// range: 0x72b0b8-0x72b219 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x72b0e8 (push 0x72b21a followed by fs-segment stack chaining); handler 0x72b21a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0072b0b8(int *param_1,char param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  undefined1 extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_10;
  int local_c;
  undefined1 local_5;

  local_10 = 0;
  local_5 = 0;
  if (param_2 != '\0') {
    puStack_30 = (undefined1 *)0x72b0d2;
    param_1 = (int *)FUN_00405fb0();
    param_3 = extraout_ECX;
    local_5 = extraout_DL;
  }
  puStack_34 = &LAB_0072b21a;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  local_c = param_3;
  (**(code **)(*param_1 + 0x50))(param_1,0);
  if (((((local_c == 0) || (local_c - 2U < 3)) || (local_c - 2U == 4)) &&
      (((param_6 - 1 < 2 || (param_6 == 4)) || ((param_6 == 8 || (param_6 == 0x10)))))) &&
     (((local_c != 3 || (param_6 != 0x10)) && ((local_c != 2 || (7 < param_6)))))) {
    if (param_6 == 2) {
      param_6 = 4;
    }
    FUN_0072cd8c(param_1);
    *(undefined1 *)(param_1 + 0x4f) = 1;
    FUN_00727038(param_1[0x4e],&PTR_LAB_00724eb0);
    uVar2 = FUN_00727038(param_1[0x4e],&PTR_LAB_00725010);
    iVar3 = FUN_00405cbc(uVar2,&PTR_LAB_00725010);
    *(undefined1 *)(iVar3 + 0x461) = (undefined1)local_c;
    *(byte *)(iVar3 + 0x460) = (byte)param_6;
    *(undefined4 *)(iVar3 + 0x458) = param_5;
    *(undefined4 *)(iVar3 + 0x45c) = param_4;
    FUN_00728120(iVar3);
    if (*(char *)(iVar3 + 0x20) != '\0') {
      iVar3 = FUN_00727038(param_1[0x4e],&PTR_LAB_00725940);
      *(int *)(iVar3 + 0x14) = 1 << ((byte)param_6 & 0x1f);
    }
    FUN_00727038(param_1[0x4e],&PTR_LAB_00725d40);
    *(undefined1 *)(param_1 + 0x4f) = 0;
  }
  else {
    FUN_0040b75c(PTR_PTR_007816dc,&local_10);
    FUN_0072b474(param_1,&PTR_LAB_00723ab0,local_10);
  }
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0072b221;
  puStack_34 = (undefined1 *)0x72b219;
  thunk_FUN_00406e5c(&local_10,uStack_38,puVar1);
  return;
}
