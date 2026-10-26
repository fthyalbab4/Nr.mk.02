// rea decompile_all
// name: FUN_004532a8
// address: 0x4532a8
// body: available
// range: 0x4532a8-0x45335f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4532c9 (push 0x453360 followed by fs-segment stack chaining); handler 0x453360 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004532a8(int param_1,int *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  LPWSTR lpName;
  undefined4 uVar3;
  int iVar4;
  DWORD dwIndex;
  undefined4 *in_FS_OFFSET;
  DWORD *lpcchName;
  LPDWORD lpReserved;
  LPWSTR lpClass;
  LPDWORD lpcchClass;
  PFILETIME lpftLastWriteTime;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_30;
  int local_2c;
  int local_28;
  DWORD local_10;
  int *local_c;
  undefined4 local_8;

  puStack_40 = &stack0xfffffffc;
  local_30 = 0;
  local_8 = 0;
  puStack_44 = &LAB_00453360;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  local_c = param_2;
  (**(code **)(*param_2 + 0x44))();
  cVar2 = FUN_0045323c(param_1,&local_2c);
  if (cVar2 != '\0') {
    FUN_004082d0(&local_8,0,local_28 + 1);
    if (-1 < local_2c + -1) {
      dwIndex = 0;
      iVar4 = local_2c;
      do {
        local_10 = local_28 + 1;
        lpftLastWriteTime = (PFILETIME)0x0;
        lpcchClass = (LPDWORD)0x0;
        lpClass = (LPWSTR)0x0;
        lpReserved = (LPDWORD)0x0;
        lpcchName = &local_10;
        lpName = (LPWSTR)FUN_00408220(local_8);
        RegEnumKeyExW(*(HKEY *)(param_1 + 4),dwIndex,lpName,lpcchName,lpReserved,lpClass,lpcchClass,
                      lpftLastWriteTime);
        uVar3 = FUN_00408220(local_8);
        FUN_00408350(&local_30,uVar3);
        (**(code **)(*local_c + 0x38))(local_c,local_30);
        dwIndex = dwIndex + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  puVar1 = puStack_40;
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_00453367;
  puStack_44 = (undefined1 *)0x453357;
  thunk_FUN_004072d8(&local_30,uStack_48,puVar1);
  puStack_44 = (undefined1 *)0x45335f;
  thunk_FUN_004072d8(&local_8);
  return;
}
