// rea decompile_all
// name: FUN_0073cb44
// address: 0x73cb44
// body: available
// range: 0x73cb44-0x73cc2f inclusive
// range: 0x73cc37-0x73cc52 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x73cb5c (push 0x73cc53 followed by fs-segment stack chaining); handler 0x73cc53 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x73cb8e (push 0x73cc30 followed by fs-segment stack chaining); handler 0x73cc30 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0073cb44(void)

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
  puStack_24 = &LAB_0073cc53;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_9 = 0;
  local_10 = OpenProcess(0x410,0,*(DWORD *)(in_stack_00000004 + -0xc));
  puVar1 = puStack_20;
  if (local_10 == (HANDLE)0x0) {
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &LAB_0073cc5a;
    puStack_24 = (undefined1 *)0x73cc52;
    FUN_00409ce0(&local_8,&DAT_0073c9c8,puVar1);
    return;
  }
  uVar4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffcc;
  local_14 = 0;
  iVar2 = FUN_0073c4b8(local_10,0,0,&local_14);
  local_9 = '\x01' - (iVar2 == 0);
  if (local_9 == '\0') {
    local_9 = FUN_0073cabc(local_10);
  }
  else {
    uVar3 = local_14 >> 2;
    FUN_00409be0(&local_8,&DAT_0073c9c8,1,uVar3);
    iVar2 = FUN_0073c4b8(local_10,local_8,local_14,&local_14);
    if ((iVar2 != 0) && (-1 < (int)(uVar3 - 1))) {
      iVar2 = 0;
      do {
        FUN_0073c9f0(local_10,*(undefined4 *)(local_8 + iVar2 * 4));
        iVar2 = iVar2 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  *in_FS_OFFSET = uVar4;
  CloseHandle(local_10);
  return;
}
