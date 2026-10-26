// rea decompile_all
// name: FUN_0075e2f0
// address: 0x75e2f0
// body: available
// range: 0x75e2f0-0x75e38f inclusive
// range: 0x75e397-0x75e449 inclusive
// range: 0x75e451-0x75e46b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x75e30f (push 0x75e46c followed by fs-segment stack chaining); handler 0x75e46c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x75e33f (push 0x75e390 followed by fs-segment stack chaining); handler 0x75e390 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x75e3d0 (push 0x75e44a followed by fs-segment stack chaining); handler 0x75e44a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0075e2f0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_3c;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined1 local_9;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  local_14 = 0;
  puStack_2c = &LAB_0075e46c;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_9 = 0;
  local_8 = param_1;
  if ((DAT_00781544 == 0) || (((byte)DAT_0078149c & 0x40) != 0)) {
    if ((DAT_00781548 == (int *)0x0) || (((byte)DAT_0078149c & 0x40) != 0)) {
      *in_FS_OFFSET = uStack_30;
      puStack_28 = &LAB_0075e473;
      puStack_2c = (undefined1 *)0x75e46b;
      thunk_FUN_00406e80(&local_18,2,&stack0xfffffffc);
      return;
    }
    FUN_00744024(DAT_0078154c);
    uStackY_3c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_3c;
    FUN_00405954(local_8,&local_14);
    iVar4 = (**(code **)(*DAT_00781548 + 0x54))(DAT_00781548,local_14);
    local_9 = iVar4 != -1;
    if ((!(bool)local_9) && (iVar4 = (**(code **)(*DAT_00781548 + 0x14))(), -1 < iVar4 + -1)) {
      iVar2 = 0;
      do {
        (**(code **)(*DAT_00781548 + 0xc))(DAT_00781548,iVar2,&local_18);
        cVar1 = FUN_00738e04(local_8,local_18);
        if (cVar1 != '\0') {
          local_9 = 1;
          break;
        }
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *in_FS_OFFSET = uStackY_3c;
    FUN_00744030(DAT_0078154c,uStackY_3c,&stack0xfffffffc);
    return;
  }
  puStack_28 = &stack0xfffffffc;
  iVar2 = FUN_0043bb30(DAT_00781544);
  uStackY_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_3c;
  iVar4 = *(int *)(iVar2 + 8);
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    do {
      uVar3 = FUN_0043b048(iVar2,iVar5);
      cVar1 = thunk_FUN_00405d3c(local_8,uVar3);
      if (cVar1 != '\0') {
        local_9 = 1;
        break;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *in_FS_OFFSET = uStackY_3c;
  local_10 = DAT_00781544;
  uStackY_3c = 0x75e38f;
  LeaveCriticalSection((LPCRITICAL_SECTION)(DAT_00781544 + 8));
  return;
}
