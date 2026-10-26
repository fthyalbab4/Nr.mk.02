// rea decompile_all
// name: FUN_005a05a4
// address: 0x5a05a4
// body: available
// range: 0x5a05a4-0x5a0730 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a05dd (push 0x5a0731 followed by fs-segment stack chaining); handler 0x5a0731 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a05a4(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_102c;
  undefined1 *puStack_1028;
  undefined1 *puStack_1024;
  undefined4 local_1014;
  undefined4 local_1010;
  uint local_100c [16];
  uint local_fcc [1008];
  undefined4 local_c;
  int local_8;

  local_1010 = 0;
  local_1014 = 0;
  puStack_1024 = (undefined1 *)0x5a05d2;
  local_100c[2] = param_1;
  local_c = param_3;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_1028 = &LAB_005a0731;
  uStack_102c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_102c;
  puStack_1024 = &stack0xfffffffc;
  FUN_00404f38(local_100c,0x1000,0);
  iVar3 = 0x10;
  puVar4 = local_100c;
  do {
    *puVar4 = param_2 & 0xff;
    param_2 = param_2 >> 8;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar3 = FUN_00407488(&local_8,local_8);
  }
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar5 = *(int *)(iVar3 + -4);
  }
  if (0 < iVar5) {
    iVar3 = 1;
    puVar4 = local_fcc;
    do {
      *puVar4 = (uint)*(ushort *)(local_8 + -2 + iVar3 * 2);
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar3 = 1;
  puVar4 = local_100c;
  do {
    *puVar4 = *puVar4 + iVar3 + *(int *)PTR_DAT_00688e9c & 0xff;
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar3 != 0x401);
  FUN_00408194(local_c,0);
  iVar3 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar3 = FUN_00407488(&local_8,local_8);
  }
  iVar5 = 0;
  if (iVar3 != 0) {
    iVar5 = *(int *)(iVar3 + -4);
  }
  iVar5 = iVar5 + 0x10;
  if (0 < iVar5) {
    puVar4 = local_100c;
    do {
      uVar1 = *puVar4;
      FUN_00408310(&local_1010,(uVar1 >> 4) + 0x41);
      FUN_00408310(&local_1014,(uVar1 & 0xf) + 0x41);
      uStack_102c = local_1014;
      FUN_0040875c(local_c,3);
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar2 = puStack_1024;
  *in_FS_OFFSET = uStack_102c;
  puStack_1024 = &LAB_005a0738;
  puStack_1028 = (undefined1 *)0x5a0728;
  thunk_FUN_004072fc(&local_1014,2,puVar2);
  puStack_1028 = (undefined1 *)0x5a0730;
  thunk_FUN_004072d8(&local_8);
  return;
}
