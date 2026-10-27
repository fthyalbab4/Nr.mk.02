// rea decompile_all
// name: FUN_005c487c
// address: 0x5c487c
// body: available
// range: 0x5c487c-0x5c4945 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5c48a4 (push 0x5c4946 followed by fs-segment stack chaining); handler 0x5c4946 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c487c(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int *in_FS_OFFSET;
  int iStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  int local_18;
  char local_11;
  uint local_10;
  undefined4 local_c;

  local_11 = '\0';
  puStack_28 = (undefined1 *)0x5c4896;
  local_c = param_1;
  local_18 = FUN_0043f234(param_1);
  puStack_2c = &LAB_005c4946;
  iStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_30;
  local_10 = 0;
  puStack_28 = &stack0xfffffffc;
  while (local_11 == '\0') {
    puVar3 = &stack0xfffffffc;
    iVar2 = FUN_005c442c(local_10);
    if (iVar2 != 4) break;
    uVar4 = local_10 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    if (uVar4 == 0) {
      puVar3 = &stack0xfffffffc;
      local_11 = FUN_005c4500();
    }
    else if (uVar4 == 2) {
      puVar3 = &stack0xfffffffc;
      local_11 = FUN_005c4500();
      if (local_11 == '\0') {
        puVar3 = &stack0xfffffffc;
        local_11 = FUN_005c481c();
      }
    }
    if (local_11 == '\0') {
      local_1c = 0xef;
      local_1b = 0xbb;
      local_1a = 0xbf;
      cVar1 = FUN_005c4458(&local_1c,2,puVar3,&stack0xfffffffc);
      if (cVar1 != '\0') {
        local_11 = '\a';
      }
    }
    local_10 = local_10 + 1;
  }
  puVar3 = puStack_28;
  *in_FS_OFFSET = iStack_30;
  puStack_28 = &LAB_005c494d;
  puStack_2c = (undefined1 *)(local_18 >> 0x1f);
  iStack_30 = local_18;
  FUN_0043f254(local_c,puStack_2c,puVar3);
  return;
}
