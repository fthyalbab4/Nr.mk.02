// rea decompile_all
// name: FUN_004e89ac
// address: 0x4e89ac
// body: available
// range: 0x4e89ac-0x4e8b14 inclusive
// range: 0x4e8b1c-0x4e8b58 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4e89cc (push 0x4e8b59 followed by fs-segment stack chaining); handler 0x4e8b59 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4e8a84 (push 0x4e8b15 followed by fs-segment stack chaining); handler 0x4e8b15 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e89ac(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  LPCWSTR lpSubKey;
  LSTATUS LVar5;
  undefined4 *in_FS_OFFSET;
  DWORD ulOptions;
  REGSAM samDesired;
  HKEY *phkResult;
  undefined4 uStack_3b4;
  undefined1 *puStack_3b0;
  undefined1 *puStack_3ac;
  undefined4 local_3a4;
  HKL local_3a0;
  undefined1 local_39c;
  undefined1 local_398 [128];
  BYTE local_318 [512];
  HKL local_118 [64];
  HKL *local_18;
  int local_14;
  HKEY local_10;
  DWORD local_c;
  int local_8;

  puStack_3ac = &stack0xfffffffc;
  local_3a4 = 0;
  puStack_3b0 = &LAB_004e8b59;
  uStack_3b4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3b4;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar3 = FUN_0043c790(&PTR_FUN_00430700,1);
    *(undefined4 *)(local_8 + 0x38) = uVar3;
    FUN_00408194(local_8 + 0x3c,0);
    iVar4 = GetKeyboardLayoutList(0x40,local_118);
    if (-1 < iVar4 + -1) {
      local_18 = local_118;
      local_14 = iVar4;
      do {
        cVar2 = FUN_004caa34(*local_18);
        if (cVar2 != '\0') {
          phkResult = &local_10;
          samDesired = 0x20019;
          ulOptions = 0;
          local_3a0 = *local_18;
          local_39c = 0;
          lpSubKey = (LPCWSTR)FUN_00417c00(local_398,&PTR_DAT_004e8b68,&local_3a0,0);
          LVar5 = RegOpenKeyExW((HKEY)0x80000002,lpSubKey,ulOptions,samDesired,phkResult);
          if (LVar5 == 0) {
            uVar3 = *in_FS_OFFSET;
            *in_FS_OFFSET = &stack0xfffffc40;
            local_c = 0x200;
            LVar5 = RegQueryValueExW(local_10,(LPCWSTR)&PTR_DAT_004e8bd8,(LPDWORD)0x0,(LPDWORD)0x0,
                                     local_318,&local_c);
            if (LVar5 == 0) {
              FUN_004083a4(&local_3a4,local_318,0x100);
              (**(code **)(**(int **)(local_8 + 0x38) + 0x3c))
                        (*(int **)(local_8 + 0x38),local_3a4,*local_18);
              if (*local_18 == *(HKL *)(local_8 + 0x40)) {
                FUN_004083a4(local_8 + 0x3c,local_318,0x100);
              }
            }
            *in_FS_OFFSET = uVar3;
            RegCloseKey(local_10);
            return;
          }
        }
        local_18 = local_18 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
    }
    iVar4 = *(int *)(local_8 + 0x38);
    *(undefined1 *)(iVar4 + 0x29) = 0;
    FUN_0043c6cc(iVar4,1);
    puVar1 = puStack_3ac;
  }
  puStack_3ac = puVar1;
  puVar1 = puStack_3ac;
  *in_FS_OFFSET = uStack_3b4;
  puStack_3ac = &LAB_004e8b60;
  puStack_3b0 = (undefined1 *)0x4e8b58;
  thunk_FUN_004072d8(&local_3a4,uStack_3b4,puVar1);
  return;
}
