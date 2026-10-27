// rea decompile_all
// name: FUN_0062ae60
// address: 0x62ae60
// body: available
// range: 0x62ae60-0x62af77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x62ae84 (push 0x62af78 followed by fs-segment stack chaining); handler 0x62af78 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0062ae60(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  char *name;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1bc;
  undefined1 *puStack_1b8;
  undefined4 local_1a4;
  WSADATA local_1a0;
  char *local_10;
  hostent *local_c;
  undefined4 local_8;

  puStack_1b8 = &stack0xfffffffc;
  local_1a4 = 0;
  local_8 = 0;
  puStack_1bc = &LAB_0062af78;
  puStack_1c0 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_1c0;
  FUN_00408194(param_1,0);
  iVar2 = WSAStartup(0x101,&local_1a0);
  if (iVar2 == 0) {
    name = (char *)FUN_00404324(0x100);
    local_10 = name;
    iVar2 = gethostname(name,0x100);
    if (iVar2 == 0) {
      FUN_0040838c(&local_8,local_10,0x100);
      local_c = gethostbyname(name);
      iVar2 = (int)local_c->h_length;
      if (-1 < iVar2 + -1) {
        iVar3 = 0;
        do {
          FUN_0041636c((*local_c->h_addr_list)[iVar3],&local_1a4);
          puStack_1c0 = &LAB_0062af94;
          FUN_0040875c(param_1,3);
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = 0;
      if (*param_1 != 0) {
        iVar2 = *(int *)(*param_1 + -4);
      }
      FUN_00408520(param_1,iVar2 + -1);
    }
    FUN_00404340(local_10,0x100);
    WSACleanup();
  }
  puVar1 = puStack_1b8;
  *in_FS_OFFSET = puStack_1c0;
  puStack_1b8 = &LAB_0062af7f;
  puStack_1bc = (undefined1 *)0x62af6f;
  thunk_FUN_004072d8(&local_1a4,puStack_1c0,puVar1);
  puStack_1bc = (undefined1 *)0x62af77;
  thunk_FUN_004072d8(&local_8);
  return;
}
