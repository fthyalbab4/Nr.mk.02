// rea decompile_all
// name: FUN_0055174c
// address: 0x55174c
// body: available
// range: 0x55174c-0x55183c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x551767 (push 0x55183d followed by fs-segment stack chaining); handler 0x55183d lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055174c(int param_1,HMODULE param_2)

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
  puStack_24 = &LAB_0055183d;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  pcVar5 = (code *)0xa;
  pHVar2 = FindResourceW(param_2,L"PACKAGEINFO",(LPCWSTR)0xa);
  *(bool *)(param_1 + 4) = pHVar2 != (HRSRC)0x0;
  if (*(char *)(param_1 + 4) != '\0') {
    pcVar5 = FUN_005516fc;
    FUN_0041e92c(param_2,param_1,param_1 + 0x14);
    if (*(int *)(param_1 + 0xc) == 0) {
      FUN_00538a38(param_2,&local_10);
      FUN_0053890c(local_10,&local_c);
      FUN_00408678(param_1 + 0xc,local_c,L".dcp");
    }
    if (*(char *)(param_1 + 0x1d) != '\0') {
      (**(code **)(**(int **)(param_1 + 8) + 0xa0))();
      (**(code **)(**(int **)(param_1 + 0x10) + 0xa0))();
    }
  }
  pHVar2 = FindResourceW(param_2,L"DESCRIPTION",(LPCWSTR)0xa);
  if (pHVar2 != (HRSRC)0x0) {
    local_8 = LoadResource(param_2,pHVar2);
    if (local_8 != (HGLOBAL)0x0) {
      DVar3 = SizeofResource(param_2,pHVar2);
      pvVar4 = LockResource(local_8);
      FUN_004095dc(pvVar4,DVar3,param_1 + 0x18);
      FUN_005432a4(param_1 + 0x18);
    }
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = pcVar5;
  puStack_24 = &LAB_00551844;
  uStack_28 = 0x55183c;
  thunk_FUN_004072fc(&local_10,2,puVar1);
  return;
}
