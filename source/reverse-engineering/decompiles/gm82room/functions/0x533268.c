// rea decompile_all
// name: FUN_00533268
// address: 0x533268
// body: available
// range: 0x533268-0x533348 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x533288 (push 0x533349 followed by fs-segment stack chaining); handler 0x533349 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00533268(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  LPCWSTR lpModuleName;
  HMODULE pHVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar5;
  HMODULE pHStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_34 = &stack0xfffffffc;
  local_c = 0;
  puStack_38 = &LAB_00533349;
  pHStack_3c = (HMODULE)*in_FS_OFFSET;
  *in_FS_OFFSET = &pHStack_3c;
  puVar1 = &stack0xfffffffc;
  local_8 = param_3;
  if (*param_1 == 0) {
    lpModuleName = (LPCWSTR)FUN_00408220(param_2);
    uVar5 = 0x5332a1;
    pHVar2 = GetModuleHandleW(lpModuleName);
    if (pHVar2 == (HMODULE)0x0) {
      uVar3 = FUN_00408220(param_2);
      FUN_00408350(&local_c,uVar3);
      pHVar2 = (HMODULE)FUN_0041f278(local_c,0x8000);
      if (pHVar2 == (HMODULE)0x0) {
        local_10 = 0x11;
        uVar5 = 0;
        local_14 = param_2;
        FUN_0041bf50(&LAB_00545a40,1,PTR_LAB_006888a8,0,&local_14);
        FUN_00406ab4();
      }
    }
    uVar3 = FUN_00408220(local_8);
    pHStack_3c = pHVar2;
    iVar4 = FUN_0040deb0();
    *param_1 = iVar4;
    puVar1 = puStack_34;
    if (*param_1 == 0) {
      local_20 = 0x11;
      local_1c = local_8;
      local_18 = 0x11;
      local_24 = param_2;
      FUN_0041bf50(&LAB_00545a40,1,PTR_LAB_00688ec8,1,&local_24,uVar5,uVar3);
      FUN_00406ab4();
      puVar1 = puStack_34;
    }
  }
  puStack_34 = puVar1;
  puVar1 = puStack_34;
  *in_FS_OFFSET = pHStack_3c;
  puStack_34 = &LAB_00533350;
  puStack_38 = (undefined1 *)0x533348;
  thunk_FUN_004072d8(&local_c,pHStack_3c,puVar1);
  return;
}
