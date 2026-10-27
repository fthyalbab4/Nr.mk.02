// rea decompile_all
// name: FUN_0053f3c4
// address: 0x53f3c4
// body: available
// range: 0x53f3c4-0x53f4af inclusive
// range: 0x53f4b7-0x53f4d2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x53f3dc (push 0x53f4d3 followed by fs-segment stack chaining); handler 0x53f4d3 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x53f40e (push 0x53f4b0 followed by fs-segment stack chaining); handler 0x53f4b0 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053f3c4(void)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  uint local_14;
  HANDLE local_10;
  char local_9;
  int local_8;

  puStack_20 = &stack0xfffffffc;
  local_8 = 0;
  puStack_24 = &LAB_0053f4d3;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_9 = 0;
  local_10 = OpenProcess(0x410,0,*(DWORD *)(in_stack_00000004 + -0xc));
  puVar1 = puStack_20;
  if (local_10 == (HANDLE)0x0) {
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &LAB_0053f4da;
    puStack_24 = (undefined1 *)0x53f4d2;
    FUN_00409e08(&local_8,&DAT_0053f248,puVar1);
    return;
  }
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffcc;
  local_14 = 0;
  iVar2 = FUN_0053e914(local_10,0,0,&local_14);
  local_9 = '\x01' - (iVar2 == 0);
  if (local_9 == '\0') {
    local_9 = FUN_0053f33c(local_10);
  }
  else {
    uVar3 = local_14 >> 2;
    FUN_00409dfc(&local_8,&DAT_0053f248,1,uVar3);
    iVar2 = FUN_0053e914(local_10,local_8,local_14,&local_14);
    if ((iVar2 != 0) && (-1 < (int)(uVar3 - 1))) {
      iVar2 = 0;
      do {
        FUN_0053f270(local_10,*(undefined4 *)(local_8 + iVar2 * 4));
        iVar2 = iVar2 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  *in_FS_OFFSET = uVar4;
  CloseHandle(local_10);
  return;
}
