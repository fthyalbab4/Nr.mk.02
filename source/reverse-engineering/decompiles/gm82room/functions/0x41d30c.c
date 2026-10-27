// rea decompile_all
// name: FUN_0041d30c
// address: 0x41d30c
// body: available
// range: 0x41d30c-0x41d418 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x41d331 (push 0x41d419 followed by fs-segment stack chaining); handler 0x41d419 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041d30c(int param_1,int param_2,int *param_3,int *param_4)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_8;

  puStack_28 = (undefined1 *)0x41d326;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_2c = &LAB_0041d419;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  iVar4 = local_8;
  puStack_28 = &stack0xfffffffc;
  if ((local_8 != 0) && (puStack_28 = &stack0xfffffffc, *(short *)(local_8 + -10) != 2)) {
    puStack_28 = &stack0xfffffffc;
    iVar4 = FUN_00407488(&local_8,local_8);
  }
  iVar5 = 0;
  if (iVar4 != 0) {
    iVar5 = *(int *)(iVar4 + -4);
  }
  iVar4 = 1;
  iVar3 = 1;
  while ((iVar7 = iVar3, iVar6 = iVar4, iVar6 < iVar5 && (iVar7 < param_2))) {
    iVar4 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar4 = FUN_00407488(&local_8,local_8);
    }
    iVar3 = iVar7 + 1;
    if ((*(ushort *)(iVar4 + -2 + iVar6 * 2) < 0xd800) ||
       (0xdfff < *(ushort *)(iVar4 + -2 + iVar6 * 2))) {
      iVar4 = iVar6 + 1;
    }
    else {
      iVar4 = iVar6 + 2;
      if (iVar5 < iVar6 + 2) {
        iVar4 = iVar6 + 1;
        iVar3 = iVar7;
      }
    }
  }
  if ((iVar7 == param_2) && (iVar6 < iVar5)) {
    iVar4 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar4 = FUN_00407488(&local_8,local_8);
    }
    uVar1 = *(ushort *)(iVar4 + -2 + iVar6 * 2);
    if ((0xd7ff < uVar1) && (uVar1 < 0xe000)) {
      iVar6 = FUN_0041d720(local_8,iVar6);
      iVar6 = iVar6 + -1;
    }
  }
  puVar2 = puStack_28;
  *param_3 = iVar7;
  *param_4 = iVar6;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0041d420;
  puStack_2c = (undefined1 *)0x41d418;
  thunk_FUN_004072d8(&local_8,uStack_30,puVar2);
  return;
}
