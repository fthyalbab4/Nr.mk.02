// rea decompile_all
// name: FUN_00453e0c
// address: 0x453e0c
// body: available
// range: 0x453e0c-0x453e8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x453e25 (push 0x453e8b followed by fs-segment stack chaining); handler 0x453e8b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00453e0c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  LPCWSTR lpFile;
  LPCWSTR lpSubKey;
  LSTATUS LVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_00453e8b;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_004081e8(&local_8,param_2);
  cVar2 = FUN_00452924(local_8);
  if (cVar2 == '\0') {
    FUN_00408a54(&local_8,1,1);
  }
  lpFile = (LPCWSTR)FUN_00408220(param_3);
  lpSubKey = (LPCWSTR)FUN_00408220(local_8);
  LVar3 = RegLoadKeyW(*(HKEY *)(param_1 + 8),lpSubKey,lpFile);
  FUN_00452bec(param_1,LVar3);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00453e92;
  puStack_1c = (undefined1 *)0x453e8a;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
