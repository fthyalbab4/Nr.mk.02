// rea decompile_all
// name: FUN_00452d70
// address: 0x452d70
// body: available
// range: 0x452d70-0x452e80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x452d8f (push 0x452e81 followed by fs-segment stack chaining); handler 0x452e81 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00452d70(int param_1,undefined4 param_2,char param_3)

{
  undefined4 uVar1;
  LPCWSTR pWVar2;
  HKEY pHVar3;
  LSTATUS LVar4;
  DWORD *in_FS_OFFSET;
  DWORD Reserved;
  LPWSTR lpClass;
  DWORD dwOptions;
  REGSAM samDesired;
  LPSECURITY_ATTRIBUTES lpSecurityAttributes;
  HKEY *phkResult;
  HKEY *phkResult_00;
  undefined4 uVar5;
  DWORD *lpdwDisposition;
  DWORD DStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  DWORD local_14;
  HKEY local_10;
  char local_a;
  char local_9;
  LPSECURITY_ATTRIBUTES local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = (LPSECURITY_ATTRIBUTES)0x0;
  puStack_24 = &LAB_00452e81;
  DStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (DWORD)&DStack_28;
  local_9 = param_3;
  FUN_004081e8(&local_8,param_2);
  uVar1 = FUN_00452924(local_8);
  if ((byte)uVar1 == 0) {
    FUN_00408a54(&local_8,1,1);
  }
  local_10 = (HKEY)0x0;
  if ((local_9 == '\0') || (local_8 == (LPSECURITY_ATTRIBUTES)0x0)) {
    phkResult_00 = &local_10;
    phkResult = *(HKEY **)(param_1 + 0x18);
    lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
    pWVar2 = (LPCWSTR)FUN_00408220(local_8);
    pHVar3 = (HKEY)FUN_00452c78(param_1,uVar1);
    LVar4 = RegOpenKeyExW(pHVar3,pWVar2,(DWORD)lpSecurityAttributes,(REGSAM)phkResult,phkResult_00);
    uVar5 = 0x452df8;
    local_a = FUN_00452bec(param_1,LVar4);
  }
  else {
    lpdwDisposition = &local_14;
    phkResult = &local_10;
    lpSecurityAttributes = (LPSECURITY_ATTRIBUTES)0x0;
    samDesired = *(REGSAM *)(param_1 + 0x18);
    dwOptions = 0;
    lpClass = (LPWSTR)0x0;
    Reserved = 0;
    pWVar2 = (LPCWSTR)FUN_00408220(local_8);
    pHVar3 = (HKEY)FUN_00452c78(param_1,uVar1);
    LVar4 = RegCreateKeyExW(pHVar3,pWVar2,Reserved,lpClass,dwOptions,samDesired,lpSecurityAttributes
                            ,phkResult,lpdwDisposition);
    uVar5 = 0x452e32;
    local_a = FUN_00452bec(param_1,LVar4);
  }
  if (local_a != '\0') {
    if ((*(int *)(param_1 + 4) != 0 & (byte)uVar1) != 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x10);
      phkResult = (HKEY *)&DAT_00452ea0;
      lpSecurityAttributes = local_8;
      FUN_0040875c(&local_8,3);
    }
    FUN_00452c54(param_1,local_10,local_8,lpSecurityAttributes,phkResult);
  }
  *in_FS_OFFSET = (DWORD)lpSecurityAttributes;
  thunk_FUN_004072d8(&local_8,lpSecurityAttributes,uVar5,&LAB_00452e88);
  return;
}
