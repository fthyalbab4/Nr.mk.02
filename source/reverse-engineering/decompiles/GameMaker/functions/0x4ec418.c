// rea decompile_all
// name: FUN_004ec418
// address: 0x4ec418
// body: available
// range: 0x4ec418-0x4ec5b2 inclusive
// range: 0x4ec5c9-0x4ec5cf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4ec439 (push 0x4ec5b3 followed by fs-segment stack chaining); handler 0x4ec5b3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ec418(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  LPRECT lpRect;
  HWND hWnd;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *in_FS_OFFSET;
  byte bVar8;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  tagPOINT local_14;
  int local_c;
  undefined4 local_8;

  bVar8 = 0;
  puStack_3c = &stack0xfffffffc;
  puStack_40 = &LAB_004ec5b3;
  uStack_44 = *in_FS_OFFSET;
  DAT_0078826c = param_1;
  *in_FS_OFFSET = &uStack_44;
  local_c = 0;
  DAT_00788274 = 0;
  local_8 = param_3;
  if (*(char *)(param_1 + 0x8b) == '\0') {
    puStack_3c = &stack0xfffffffc;
    FUN_00405d08(param_1,&local_c);
    if (DAT_0078826c == 0) {
      *in_FS_OFFSET = uStack_44;
      return;
    }
    if (local_c == 0) {
      local_c = FUN_004eb68c(&PTR_FUN_004e02b4,1,param_1);
      DAT_00788274 = 1;
    }
  }
  else {
    FUN_00405d08(param_1,&local_c);
    if (DAT_0078826c == 0) {
      *in_FS_OFFSET = uStack_44;
      return;
    }
    if (local_c == 0) {
      local_c = FUN_004eb7c4(&PTR_FUN_004e0738,1,param_1);
      DAT_00788274 = 1;
    }
    uVar1 = *(undefined4 *)(local_c + 0x40);
    cVar3 = FUN_00405c98(uVar1,&PTR_LAB_004e61b8);
    if (cVar3 == '\0') {
      iVar2 = *(int *)(local_c + 0x40);
      if ((*(int *)(iVar2 + 0x34) == 0) &&
         (cVar3 = FUN_00405c98(iVar2,&PTR_LAB_004e61b8), cVar3 == '\0')) {
        GetCursorPos(&local_14);
        *(LONG *)(local_c + 0x4c) = local_14.x;
        *(LONG *)(local_c + 0x50) = local_14.y;
      }
      else {
        local_1c = 0;
        local_18 = 0;
        FUN_004ee09c(iVar2,&local_1c,&local_2c);
        *(undefined4 *)(local_c + 0x4c) = local_2c;
        *(undefined4 *)(local_c + 0x50) = local_28;
      }
      local_24 = *(int *)(local_c + 0x4c) + *(int *)(*(int *)(local_c + 0x40) + 0x48);
      local_20 = *(int *)(local_c + 0x50) + *(int *)(*(int *)(local_c + 0x40) + 0x4c);
      *(int *)(local_c + 0x54) = local_24;
      *(int *)(local_c + 0x58) = local_20;
    }
    else {
      lpRect = (LPRECT)(local_c + 0x4c);
      hWnd = (HWND)FUN_004f76a8(uVar1);
      GetWindowRect(hWnd,lpRect);
    }
    puVar6 = (undefined4 *)(local_c + 0x68 + (uint)bVar8 * -8);
    puVar4 = (undefined4 *)(local_c + 0x50 + (uint)bVar8 * -8);
    *(undefined4 *)(local_c + 100) = *(undefined4 *)(local_c + 0x4c);
    puVar7 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar5 = puVar4 + (uint)bVar8 * -2 + 1;
    *puVar6 = *puVar4;
    *puVar7 = *puVar5;
    puVar7[(uint)bVar8 * -2 + 1] = puVar5[(uint)bVar8 * -2 + 1];
  }
  FUN_004ec2a8(local_c,param_2,local_8);
  *in_FS_OFFSET = uStack_44;
  return;
}
