// rea decompile_all
// name: FUN_004c130c
// address: 0x4c130c
// body: available
// range: 0x4c130c-0x4c153f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4c1345 (push 0x4c1540 followed by fs-segment stack chaining); handler 0x4c1540 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c130c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  int local_2024;
  undefined1 local_2020 [2];
  undefined2 auStack_201e [2029];
  undefined4 uStack_1044;
  int *piStack_1040;
  undefined4 uStack_103c;
  undefined1 *puStack_1038;
  undefined1 *puStack_1034;
  int local_20;
  undefined4 local_1c;
  byte local_18;
  byte local_17;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  puStack_1034 = &stack0xfffffffc;
  iVar4 = 2;
  do {
    iVar3 = iVar4;
    iVar4 = iVar3 + -1;
  } while (iVar3 + -1 != 0);
  local_2024 = 0;
  local_8 = 0;
  puStack_1038 = &LAB_004c1540;
  uStack_103c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_103c;
  piStack_1040 = (int *)0x4c1355;
  local_c = param_2;
  iVar4 = FUN_0043b048(*(undefined4 *)(iVar3 + 0x288),param_3);
  piStack_1040 = (int *)0x4c1364;
  cVar2 = FUN_00405c98(iVar4,&PTR_LAB_004a4a78);
  local_14 = iVar4;
  if (cVar2 == '\0') {
    piStack_1040 = (int *)0x4c14d2;
    FUN_00404f08(&local_20,0x14,0);
    local_17 = DAT_007785e2;
    local_20 = *(int *)(iVar4 + 0x48);
    local_1c = 0xffffffff;
    if ((*(char *)(iVar4 + 0x59) == '\0') && ((*(byte *)(iVar4 + 0x1c) & 0x10) == 0)) {
      local_18 = local_18 | DAT_007785d2;
    }
    local_10 = 0xffffffff;
  }
  else {
    piStack_1040 = (int *)0x4c137b;
    FUN_00404f08(&local_20,0x14,0);
    if ((byte)(*(byte *)(iVar4 + 0x1c6) - 3) < 2) {
      local_20 = *(int *)(iVar4 + 0x48);
    }
    else {
      local_20 = *(int *)(iVar4 + 0x1b4);
      if (local_20 < 0) {
        local_20 = -2;
      }
    }
    local_17 = (&DAT_007785dc)[(*(byte *)(iVar4 + 0x1c6) & 0x7f) * 2];
    local_1c = param_3;
    if (*(char *)(iVar4 + 0x1b1) != '\0') {
      piStack_1040 = (int *)0x4c13ce;
      iVar5 = FUN_004a8960();
      if (0x40046 < iVar5) {
        local_17 = local_17 | 0x10;
      }
    }
    piStack_1040 = (int *)0x4c13e0;
    local_18 = FUN_004bffc8(iVar4);
    if (*(char *)(iVar4 + 0x1b3) != '\0') {
      local_17 = local_17 | 4;
    }
    if ((*(char *)(iVar3 + 0x2a8) == '\0') &&
       ((*(char *)(iVar3 + 0x27c) == '\0' || (*(char *)(iVar4 + 0x1c6) != '\x05')))) {
      local_10 = 0xffffffff;
    }
    else {
      piStack_1040 = (int *)0x4c1425;
      FUN_004ee6a0(iVar4,&local_2024);
      if (local_2024 == 0) {
        piStack_1040 = (int *)0x4c1447;
        FUN_00407f0c(&local_8,&DAT_004c1560);
      }
      else {
        piStack_1040 = (int *)0x4c1438;
        FUN_004ee6a0(iVar4,&local_8);
      }
      piStack_1040 = (int *)0x4c145a;
      FUN_00417834(local_2020,local_8,0x1000);
      iVar4 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
        piStack_1040 = (int *)0x4c1477;
        iVar4 = FUN_00407048(&local_8,local_8);
      }
      iVar5 = 0;
      if (iVar4 != 0) {
        iVar5 = *(int *)(iVar4 + -4);
      }
      if (0xffd < iVar5) {
        iVar5 = 0xffe;
      }
      auStack_201e[iVar5] = 0;
      piStack_1040 = (int *)local_2020;
      uStack_1044 = 0x4c14b5;
      local_10 = FUN_004efb90(iVar3,0x44d,0);
    }
  }
  piStack_1040 = &local_20;
  uStack_1044 = 0x4c151a;
  FUN_004c5060(iVar3,local_c,param_4);
  puVar1 = puStack_1034;
  *in_FS_OFFSET = uStack_103c;
  puStack_1034 = &LAB_004c1547;
  puStack_1038 = (undefined1 *)0x4c1537;
  thunk_FUN_00406e5c(&local_2024,uStack_103c,puVar1);
  puStack_1038 = (undefined1 *)0x4c153f;
  thunk_FUN_00406e5c(&local_8);
  return;
}
