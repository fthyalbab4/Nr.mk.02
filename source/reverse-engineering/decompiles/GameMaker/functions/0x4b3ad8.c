// rea decompile_all
// name: FUN_004b3ad8
// address: 0x4b3ad8
// body: available
// range: 0x4b3ad8-0x4b3bff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b3afa (push 0x4b3c00 followed by fs-segment stack chaining); handler 0x4b3c00 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b3ad8(undefined4 *param_1,uint param_2,int param_3)

{
  undefined1 *puVar1;
  char cVar2;
  HWND pHVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  UINT UVar5;
  undefined4 uVar6;
  WPARAM wParam;
  undefined4 *puVar7;
  int lParam;
  LPARAM lParam_00;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;

  puStack_24 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  puStack_28 = &LAB_004b3c00;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar1 = &stack0xfffffffc;
  if (param_3 < (int)param_2) {
    FUN_00405954(*param_1,&local_10);
    local_c = local_10;
    local_8 = 0x11;
    puVar7 = &local_c;
    uVar6 = 0;
    FUN_0040b75c(PTR_PTR_00781c44,&local_14);
    FUN_0041bef4(&PTR_LAB_0042f068,1,local_14,uVar6,puVar7);
    FUN_00406618();
    puVar1 = puStack_24;
  }
  puStack_24 = puVar1;
  if ((*(char *)(param_1 + 0x9c) == '\0') &&
     (((((int)param_2 < 0 || (0xffff < (int)param_2)) || (param_3 < 0)) || (0xffff < param_3)))) {
    FUN_004b3734();
  }
  if ((param_2 != param_1[0x9d]) || (param_3 != param_1[0x9e])) {
    cVar2 = FUN_004f7a54(param_1);
    if (cVar2 != '\0') {
      if (*(char *)(param_1 + 0x9c) == '\0') {
        uVar4 = param_2 & 0xffff | param_3 << 0x10;
        wParam = 0;
        UVar5 = 0x401;
        pHVar3 = (HWND)FUN_004f76a8(param_1);
        SendMessageW(pHVar3,UVar5,wParam,uVar4);
      }
      else {
        UVar5 = 0x406;
        uVar4 = param_2;
        lParam = param_3;
        pHVar3 = (HWND)FUN_004f76a8(param_1);
        SendMessageW(pHVar3,UVar5,uVar4,lParam);
      }
      if ((int)param_2 < (int)param_1[0x9d]) {
        lParam_00 = 0;
        UVar5 = 0x402;
        uVar4 = param_2;
        pHVar3 = (HWND)FUN_004f76a8(param_1);
        SendMessageW(pHVar3,UVar5,uVar4,lParam_00);
      }
    }
    param_1[0x9d] = param_2;
    param_1[0x9e] = param_3;
  }
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004b3c07;
  puStack_28 = (undefined1 *)0x4b3bff;
  thunk_FUN_00406e80(&local_14,2,puVar1);
  return;
}
