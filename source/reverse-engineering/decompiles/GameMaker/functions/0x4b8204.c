// rea decompile_all
// name: FUN_004b8204
// address: 0x4b8204
// body: available
// range: 0x4b8204-0x4b82e9 inclusive
// range: 0x4b82f1-0x4b82f7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4b823b (push 0x4b82ea followed by fs-segment stack chaining); handler 0x4b82ea lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b8204(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  HWND pHVar3;
  int iVar4;
  WPARAM WVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int *local_8;

  puStack_44 = (undefined1 *)0x4b821b;
  local_8 = param_1;
  FUN_004b81c8(param_1);
  puStack_44 = (undefined1 *)0x4b8220;
  cVar2 = FUN_004f7a54();
  if (cVar2 != '\0') {
    puStack_44 = (undefined1 *)0x4b8230;
    (**(code **)(*local_8 + 0x20))();
    puStack_48 = &LAB_004b82ea;
    uStack_4c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_4c;
    WVar5 = *(int *)(local_8[2] + 8) - 1;
    puStack_44 = &stack0xfffffffc;
    puVar1 = &stack0xfffffffc;
    if (-1 < (int)WVar5) {
      do {
        FUN_004b81c8(local_8);
        pHVar3 = (HWND)FUN_004f76a8();
        SendMessageW(pHVar3,0x101c,WVar5,0);
        WVar5 = WVar5 - 1;
        puVar1 = puStack_44;
      } while (WVar5 != 0xffffffff);
    }
    puStack_44 = puVar1;
    iVar6 = *(int *)(local_8[2] + 8);
    if (-1 < iVar6 + -1) {
      WVar5 = 0;
      do {
        local_34 = 3;
        local_30 = 0;
        iVar4 = FUN_004b8198(local_8,WVar5);
        local_2c = *(undefined4 *)(iVar4 + 0x24);
        FUN_004b81c8(local_8);
        pHVar3 = (HWND)FUN_004f76a8();
        SendMessageW(pHVar3,0x1061,WVar5,(LPARAM)&local_34);
        iVar4 = FUN_004b8198(local_8,WVar5);
        *(WPARAM *)(iVar4 + 0x28) = WVar5;
        WVar5 = WVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_004b81c8(local_8);
    FUN_004be22c();
    puVar1 = puStack_44;
    *in_FS_OFFSET = uStack_4c;
    puStack_44 = (undefined1 *)0x4b82f1;
    puStack_48 = (undefined1 *)0x4b82e9;
    (**(code **)(*local_8 + 0x24))(local_8,*local_8,puVar1);
    return;
  }
  return;
}
