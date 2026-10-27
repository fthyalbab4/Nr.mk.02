// rea decompile_all
// name: FUN_0073ce4c
// address: 0x73ce4c
// body: available
// range: 0x73ce4c-0x73d052 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x73ce66 (push 0x73d053 followed by fs-segment stack chaining); handler 0x73d053 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0073ce4c(void)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  undefined4 uStack_158;
  undefined1 *puStack_154;
  undefined1 *puStack_150;
  _OSVERSIONINFOW local_148;
  undefined4 local_2c [9];
  undefined4 local_8;

  puStack_150 = &stack0xfffffffc;
  local_8 = 0;
  puStack_154 = &LAB_0073d053;
  uStack_158 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_158;
  FUN_00415dd0(*(undefined4 *)PTR_DAT_00781b3c,&local_8);
  if (*(int *)PTR_DAT_00782944 == 1) {
    uVar1 = *(uint *)PTR_DAT_00782408;
    bVar4 = uVar1 == 10;
    if (uVar1 < 10) {
      FUN_00408640(local_8,&DAT_0073d070);
      if (!bVar4) {
        FUN_00408640(local_8,&DAT_0073d080);
      }
    }
    else if (((uVar1 - 10 < 0x50) && (bVar4 = DAT_007a5020 == 0x4005a, !bVar4)) &&
            (FUN_00408640(local_8,&DAT_0073d090), !bVar4)) {
      FUN_00408640(local_8,&DAT_0073d070);
    }
  }
  else if (((*(int *)PTR_DAT_00782944 == 2) && (iVar3 = *(int *)PTR_DAT_00781bfc, iVar3 != 3)) &&
          (iVar3 != 4)) {
    if (iVar3 == 5) {
      iVar3 = *(int *)PTR_DAT_00782408;
      if (((iVar3 != 0) && (iVar3 != 1)) && (iVar3 == 2)) {
        local_148.dwOSVersionInfoSize = 0x11c;
        local_2c[0] = 0;
        FUN_0073d094(local_2c);
        iVar3 = GetSystemMetrics(0x59);
        if ((iVar3 == 0) && ((short)local_2c[0] != 0)) {
          GetVersionExW(&local_148);
        }
      }
    }
    else if (iVar3 == 6) {
      if (*(int *)PTR_DAT_00782408 == 0) {
        local_148.dwOSVersionInfoSize = 0x11c;
        GetVersionExW(&local_148);
      }
      else if (*(int *)PTR_DAT_00782408 == 1) {
        local_148.dwOSVersionInfoSize = 0x11c;
        GetVersionExW(&local_148);
      }
    }
  }
  puVar2 = puStack_150;
  *in_FS_OFFSET = uStack_158;
  puStack_150 = &LAB_0073d05a;
  puStack_154 = (undefined1 *)0x73d052;
  thunk_FUN_00406e5c(&local_8,uStack_158,puVar2);
  return;
}
