// rea decompile_all
// name: FUN_00415cc4
// address: 0x415cc4
// body: available
// range: 0x415cc4-0x415e53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x415cf1 (push 0x415e54 followed by fs-segment stack chaining); handler 0x415e54 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00415cc4(int param_1,undefined2 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_38;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_a;
  int local_8;

  local_10 = 0;
  local_14 = 0;
  puStack_24 = (undefined1 *)0x415ce6;
  local_a = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_28 = &LAB_00415e54;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  iVar5 = 0;
  puStack_24 = &stack0xfffffffc;
  uVar1 = FUN_00408220(local_8);
  iVar2 = FUN_0041dab4(uVar1,local_a);
  iVar3 = local_8;
  while (local_8 = iVar3, iVar2 != 0) {
    iVar5 = iVar5 + 1;
    iVar2 = FUN_0041dab4(iVar2 + 2,local_a);
    iVar3 = local_8;
  }
  if (iVar5 == 0) {
    FUN_00408310(&local_10,local_a);
    uVar1 = local_10;
    FUN_00408310(&local_14,local_a);
    uStackY_38 = local_14;
    FUN_0040875c(param_3,3);
  }
  else {
    if ((iVar3 != 0) && (*(short *)(iVar3 + -10) != 2)) {
      iVar3 = FUN_00407488(&local_8,iVar3);
    }
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + -4);
    }
    FUN_00408520(param_3,iVar5 + 2 + iVar2);
    puVar4 = (undefined2 *)FUN_00408220(*param_3);
    *puVar4 = local_a;
    puVar4 = puVar4 + 1;
    iVar5 = FUN_00408220(local_8);
    iVar2 = FUN_0041dab4(iVar5,local_a);
    do {
      iVar3 = iVar2 + 2;
      iVar2 = iVar3 - iVar5 >> 1;
      if (iVar2 < 0) {
        iVar2 = iVar2 + (uint)((iVar3 - iVar5 & 1U) != 0);
      }
      FUN_00404514(iVar5,puVar4,iVar2 * 2);
      iVar2 = iVar3 - iVar5 >> 1;
      if (iVar2 < 0) {
        iVar2 = iVar2 + (uint)((iVar3 - iVar5 & 1U) != 0);
      }
      puVar4[iVar2] = local_a;
      puVar4 = puVar4 + iVar2 + 1;
      iVar2 = FUN_0041dab4(iVar3,local_a);
      iVar5 = iVar3;
    } while (iVar2 != 0);
    iVar5 = FUN_00417644(iVar3);
    iVar2 = iVar5 - iVar3 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((iVar5 - iVar3 & 1U) != 0);
    }
    uVar1 = 0x415e1b;
    FUN_00404514(iVar3,puVar4,iVar2 * 2);
    iVar2 = iVar5 - iVar3 >> 1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + (uint)((iVar5 - iVar3 & 1U) != 0);
    }
    puVar4[iVar2] = local_a;
  }
  *in_FS_OFFSET = uStackY_38;
  thunk_FUN_004072fc(&local_14,2,uVar1,&LAB_00415e5b);
  thunk_FUN_004072d8(&local_8);
  return;
}
