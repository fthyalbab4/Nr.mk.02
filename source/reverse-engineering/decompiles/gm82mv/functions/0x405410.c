// rea decompile_all
// name: FUN_00405410
// address: 0x405410
// body: available
// range: 0x405410-0x4054a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x405426 (push 0x4054a5 followed by fs-segment stack chaining); handler 0x4054a5 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00405410(int param_1,LPCWSTR param_2)

{
  undefined1 *puVar1;
  LPCWSTR lpExistingFileName;
  BOOL BVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  LPCWSTR lpNewFileName;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  puStack_18 = &LAB_004054a5;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (*(short *)(param_1 + 4) == -0x2850) {
    if (param_2 == (LPCWSTR)0x0) {
      param_2 = L"";
    }
    puStack_14 = &stack0xfffffffc;
    FUN_004083a4(&local_8,param_1 + 0x48,0x104);
    lpNewFileName = param_2;
    lpExistingFileName = (LPCWSTR)FUN_00408220(local_8);
    BVar2 = MoveFileW(lpExistingFileName,lpNewFileName);
    if (BVar2 == 0) {
      GetLastError();
      FUN_004044ac();
    }
    else {
      for (iVar3 = 0; (param_2[iVar3] != L'\0' && (iVar3 < 0x103)); iVar3 = iVar3 + 1) {
        *(WCHAR *)(param_1 + 0x48 + iVar3 * 2) = param_2[iVar3];
      }
    }
  }
  else {
    FUN_004044ac(0x66);
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004054ac;
  puStack_18 = (undefined1 *)0x4054a4;
  thunk_FUN_004072d8(&local_8,uStack_1c,puVar1);
  return;
}
