// rea decompile_all
// name: FUN_005a0740
// address: 0x5a0740
// body: available
// range: 0x5a0740-0x5a08cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a0770 (push 0x5a08ce followed by fs-segment stack chaining); handler 0x5a08ce lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005a080d) */

void FUN_005a0740(int param_1,undefined4 param_2,int *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_430;
  undefined1 *puStack_42c;
  undefined1 *puStack_428;
  undefined4 local_418;
  uint local_414 [16];
  undefined4 local_3d4 [240];
  int *local_14;
  undefined4 local_c;
  int local_8;

  local_418 = 0;
  puStack_428 = (undefined1 *)0x5a0765;
  local_14 = param_3;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_42c = &LAB_005a08ce;
  uStack_430 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_430;
  puStack_428 = &stack0xfffffffc;
  FUN_00404f38(local_414,0x400,0);
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  iVar5 = 0;
  if (iVar2 != 0) {
    iVar5 = *(int *)(iVar2 + -4);
  }
  iVar5 = iVar5 * 2;
  if (0 < iVar5) {
    iVar2 = 1;
    puVar3 = local_414;
    do {
      *puVar3 = (*(ushort *)(local_8 + -4 + iVar2 * 4) - 0x41) * 0x10 +
                (*(ushort *)(local_8 + -2 + iVar2 * 4) - 0x41);
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar2 = 1;
  puVar3 = local_414;
  do {
    *puVar3 = (*puVar3 - iVar2) - *(int *)PTR_DAT_00688e9c & 0xff;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != 0x101);
  *local_14 = 0;
  iVar2 = 1;
  iVar5 = 0x10;
  puVar3 = local_414;
  do {
    *local_14 = *local_14 + *puVar3 * iVar2;
    iVar2 = iVar2 << 8;
    puVar3 = puVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_00408194(local_c,0);
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  uVar4 = 0;
  if (iVar2 != 0) {
    uVar4 = *(uint *)(iVar2 + -4);
  }
  if (0x10 < uVar4 >> 1) {
    iVar2 = (uVar4 >> 1) - 0x10;
    puVar6 = local_3d4;
    do {
      FUN_00408310(&local_418,*puVar6);
      FUN_004085b8(local_c,local_418);
      puVar6 = puVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_428;
  *in_FS_OFFSET = uStack_430;
  puStack_428 = &LAB_005a08d5;
  puStack_42c = (undefined1 *)0x5a08c5;
  thunk_FUN_004072d8(&local_418,uStack_430,puVar1);
  puStack_42c = (undefined1 *)0x5a08cd;
  thunk_FUN_004072d8(&local_8);
  return;
}
