// rea decompile_all
// name: FUN_0074eecc
// address: 0x74eecc
// body: available
// range: 0x74eecc-0x74efbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x74eee7 (push 0x74efbd followed by fs-segment stack chaining); handler 0x74efbd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0074eecc(int param_1,HMODULE param_2)

{
  undefined1 *puVar1;
  HRSRC pHVar2;
  DWORD DVar3;
  LPVOID pvVar4;
  undefined4 *in_FS_OFFSET;
  code *pcVar5;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_10;
  undefined4 local_c;
  HGLOBAL local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = (HGLOBAL)0x0;
  local_c = 0;
  local_10 = 0;
  puStack_24 = &LAB_0074efbd;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pcVar5 = (code *)0xa;
  pHVar2 = FindResourceW(param_2,L"PACKAGEINFO",(LPCWSTR)&DAT_0000000a);
  *(bool *)(param_1 + 4) = pHVar2 != (HRSRC)0x0;
  if (*(char *)(param_1 + 4) != '\0') {
    pcVar5 = FUN_0074ee7c;
    FUN_0041e700(param_2,param_1,param_1 + 0x14);
    if (*(int *)(param_1 + 0xc) == 0) {
      FUN_007365dc(param_2,&local_10);
      FUN_007364b0(local_10,&local_c);
      FUN_0040839c(param_1 + 0xc,local_c,L".dcp");
    }
    if (*(char *)(param_1 + 0x1d) != '\0') {
      (**(code **)(**(int **)(param_1 + 8) + 0xa0))();
      (**(code **)(**(int **)(param_1 + 0x10) + 0xa0))();
    }
  }
  pHVar2 = FindResourceW(param_2,L"DESCRIPTION",(LPCWSTR)&DAT_0000000a);
  if (pHVar2 != (HRSRC)0x0) {
    local_8 = LoadResource(param_2,pHVar2);
    if (local_8 != (HGLOBAL)0x0) {
      DVar3 = SizeofResource(param_2,pHVar2);
      pvVar4 = LockResource(local_8);
      FUN_00409300(pvVar4,DVar3,param_1 + 0x18);
      FUN_00740a24(param_1 + 0x18);
    }
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = pcVar5;
  puStack_24 = &LAB_0074efc4;
  uStack_28 = 0x74efbc;
  thunk_FUN_00406e80(&local_10,2,puVar1);
  return;
}
