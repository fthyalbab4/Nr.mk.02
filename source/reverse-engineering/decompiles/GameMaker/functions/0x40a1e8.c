// rea decompile_all
// name: FUN_0040a1e8
// address: 0x40a1e8
// body: available
// range: 0x40a1e8-0x40a2ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x40a202 (push 0x40a2bb followed by fs-segment stack chaining); handler 0x40a2bb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040a1e8(undefined4 param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_FS_OFFSET;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined4 local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_24 = &LAB_0040a2bb;
  puStack_28 = (undefined4 *)*in_FS_OFFSET;
  *in_FS_OFFSET = (int)&puStack_28;
  FUN_00408044(param_2,param_1);
  local_10 = *param_2;
  iVar2 = 0;
  if (local_10 != 0) {
    iVar2 = *(int *)(local_10 + -4);
  }
  if (0 < iVar2) {
    iVar4 = 1;
    do {
      if (*(short *)(*param_2 + -2 + iVar4 * 2) == 0x2c) goto LAB_0040a298;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00407f0c(&local_c,*param_2);
  FUN_00407eb8(param_2,0);
  while (local_c != 0) {
    iVar2 = *param_2;
    iVar4 = local_c;
    uVar6 = local_8;
    FUN_00408480(param_2,3);
    uVar5 = 0x40a26c;
    FUN_00407f0c(&local_8,&DAT_0040a2d4);
    puStack_28 = &local_14;
    uVar3 = FUN_0040a148(local_c);
    FUN_004086a8(local_c,1,uVar3,uVar5,iVar4,uVar6,iVar2);
    FUN_00407f0c(&local_c,local_14);
  }
LAB_0040a298:
  puVar1 = puStack_20;
  *in_FS_OFFSET = (int)puStack_28;
  puStack_20 = &LAB_0040a2c2;
  puStack_24 = (undefined1 *)0x40a2ad;
  thunk_FUN_00406e5c(&local_14,puStack_28,puVar1);
  puStack_24 = (undefined1 *)0x40a2ba;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
