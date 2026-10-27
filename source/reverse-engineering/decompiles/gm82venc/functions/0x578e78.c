// rea decompile_all
// name: FUN_00578e78
// address: 0x578e78
// body: available
// range: 0x578e78-0x579119 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x578ec7 (push 0x57911a followed by fs-segment stack chaining); handler 0x57911a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00578f9e) */
/* WARNING: Removing unreachable block (ram,0x00578fa1) */
/* WARNING: Removing unreachable block (ram,0x00578fbe) */
/* WARNING: Removing unreachable block (ram,0x00578fd3) */
/* WARNING: Removing unreachable block (ram,0x00578fd6) */

void FUN_00578e78(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  LPCWSTR lpLibFileName;
  DWORD DVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_60;
  undefined4 in_stack_ffffffa8;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  HMODULE local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_24 = 0;
  local_28 = 0;
  local_1c = 0;
  local_20 = 0;
  for (; -1 < param_5; param_5 = param_5 + -1) {
  }
  piVar1 = (int *)&stack0xffffffcc;
  puVar4 = (undefined4 *)&stack0xffffffcc;
  local_38 = (undefined1 *)0x578eb4;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  local_38 = (undefined1 *)0x578ebc;
  thunk_FUN_00407ad0(local_c);
  puStack_3c = &LAB_0057911a;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  local_38 = &stack0xfffffffc;
  if (param_7 < 0x11) {
    if ((4 < param_7) && (iVar5 = param_7, -1 < param_7 + -1)) {
      do {
        local_38 = &stack0xfffffffc;
        if (*piVar1 != 0) goto LAB_005790f2;
        piVar1 = piVar1 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    local_14 = (HMODULE)0x0;
    local_38 = &stack0xfffffffc;
    if (-1 < DAT_00686ac4 + -1) {
      iVar6 = 0;
      iVar5 = DAT_00686ac4;
      local_38 = &stack0xfffffffc;
      do {
        iVar2 = FUN_00415770(local_8,*(undefined4 *)(DAT_0084efc4 + iVar6 * 0x60));
        if (iVar2 == 0) {
          local_14 = *(HMODULE *)(DAT_0084efc4 + 4 + iVar6 * 0x60);
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    if (local_14 == (HMODULE)0x0) {
      lpLibFileName = (LPCWSTR)FUN_00408220(local_8);
      local_14 = LoadLibraryW(lpLibFileName);
      if (local_14 == (HMODULE)0x0) {
        DVar3 = GetLastError();
        FUN_0041b234(DVar3,&local_20);
        FUN_0040875c(&local_1c,4);
        FUN_00561704(local_1c);
        goto LAB_005790f2;
      }
    }
    local_18 = 0xffffffff;
    iVar5 = FUN_00409c34(DAT_0084efc4);
    if (iVar5 <= DAT_00686ac4) {
      FUN_00409dfc(&DAT_0084efc4,&DAT_00575ba0,1,DAT_00686ac4 + 5);
    }
    local_18 = DAT_00686ac4;
    iVar5 = DAT_0084efc4 + DAT_00686ac4 * 0x60;
    *(HMODULE *)(iVar5 + 4) = local_14;
    FUN_00408194(iVar5,local_8);
    FUN_00408194(iVar5 + 8,local_c);
    FUN_00408220(local_c);
    iVar6 = FUN_0040deb0();
    *(int *)(iVar5 + 0xc) = iVar6;
    if (iVar6 == 0) {
      in_stack_ffffffa8 = local_8;
      DVar3 = GetLastError();
      FUN_0041b234(DVar3,&local_28);
      uStackY_60 = local_28;
      FUN_0040875c(&local_24,6);
      FUN_00561704(local_24);
    }
    else {
      DAT_00686ac4 = DAT_00686ac4 + 1;
      iVar5 = DAT_0084efc4 + local_18 * 0x60;
      *(undefined4 *)(iVar5 + 0x10) = local_10;
      *(int *)(iVar5 + 0x14) = param_7;
      if (-1 < param_7 + -1) {
        iVar6 = 0;
        do {
          *(undefined4 *)(iVar5 + 0x18 + iVar6 * 4) = *puVar4;
          iVar6 = iVar6 + 1;
          puVar4 = puVar4 + 1;
          param_7 = param_7 + -1;
        } while (param_7 != 0);
      }
      *(undefined4 *)(iVar5 + 0x5c) = param_4;
    }
  }
LAB_005790f2:
  *in_FS_OFFSET = uStackY_60;
  thunk_FUN_004072fc(&local_28,4,in_stack_ffffffa8,&LAB_00579121);
  thunk_FUN_004072fc(&local_c,2);
  return;
}
