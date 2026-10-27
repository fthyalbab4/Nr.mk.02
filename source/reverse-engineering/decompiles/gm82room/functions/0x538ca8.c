// rea decompile_all
// name: FUN_00538ca8
// address: 0x538ca8
// body: available
// range: 0x538ca8-0x538d5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x538cc6 (push 0x538d5e followed by fs-segment stack chaining); handler 0x538d5e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00538ca8(undefined4 param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  LPCWSTR pWVar2;
  DWORD dwLen;
  BOOL BVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  DWORD dwHandle;
  DWORD *lpdwHandle;
  LPVOID lpData;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 *local_18;
  DWORD local_14;
  uint local_10;
  undefined4 *local_c;
  LPVOID local_8;

  bVar7 = 0;
  puStack_28 = &stack0xfffffffc;
  local_8 = (LPVOID)0x0;
  puStack_2c = &LAB_00538d5e;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_14 = 0;
  lpdwHandle = &local_14;
  local_c = param_2;
  pWVar2 = (LPCWSTR)FUN_00408220(param_1);
  dwLen = GetFileVersionInfoSizeW(pWVar2,lpdwHandle);
  if (dwLen != 0) {
    FUN_00408520(&local_8,dwLen);
    local_10 = 0;
    local_18 = (undefined4 *)0x0;
    dwHandle = local_14;
    lpData = local_8;
    pWVar2 = (LPCWSTR)FUN_00408220(param_1);
    BVar3 = GetFileVersionInfoW(pWVar2,dwHandle,dwLen,lpData);
    if (BVar3 != 0) {
      BVar3 = VerQueryValueW(local_8,L"\\",&local_18,&local_10);
      if ((BVar3 != 0) && (local_10 == 0x34)) {
        puVar5 = local_18;
        puVar6 = local_c;
        for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
      }
    }
  }
  puVar1 = puStack_28;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_00538d65;
  puStack_2c = (undefined1 *)0x538d5d;
  thunk_FUN_004072d8(&local_8,uStack_30,puVar1);
  return;
}
