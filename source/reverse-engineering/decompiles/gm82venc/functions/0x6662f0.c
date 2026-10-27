// rea decompile_all
// name: FUN_006662f0
// address: 0x6662f0
// body: available
// range: 0x6662f0-0x666384 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x66630f (push 0x666385 followed by fs-segment stack chaining); handler 0x666385 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006662f0(void)

{
  undefined1 *puVar1;
  LPCWSTR lpstrCommand;
  int iVar2;
  undefined4 *puVar3;
  WCHAR *pWVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 *in_stack_00000004;
  int in_stack_0000000c;
  UINT uReturnLength;
  HWND hwndCallback;
  undefined4 uStack_220;
  undefined1 *puStack_21c;
  undefined1 *puStack_218;
  WCHAR local_208 [256];
  undefined4 local_8;

  puStack_218 = &stack0xfffffffc;
  local_8 = 0;
  puStack_21c = &LAB_00666385;
  uStack_220 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_220;
  puVar3 = &DAT_00666398;
  pWVar4 = local_208;
  for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pWVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    pWVar4 = pWVar4 + 2;
  }
  FUN_004083c0(&local_8,*(undefined4 *)(in_stack_0000000c + 0x10));
  hwndCallback = (HWND)0x0;
  uReturnLength = 0xff;
  pWVar4 = local_208;
  lpstrCommand = (LPCWSTR)FUN_00408220(local_8);
  mciSendStringW(lpstrCommand,pWVar4,uReturnLength,hwndCallback);
  *in_stack_00000004 = 1;
  FUN_00407634(in_stack_00000004 + 4,local_208,0x100,0xfde9);
  puVar1 = puStack_218;
  *in_FS_OFFSET = uStack_220;
  puStack_218 = &LAB_0066638c;
  puStack_21c = (undefined1 *)0x666384;
  thunk_FUN_004072d8(&local_8,uStack_220,puVar1);
  return;
}
