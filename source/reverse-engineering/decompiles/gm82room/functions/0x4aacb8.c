// rea decompile_all
// name: FUN_004aacb8
// address: 0x4aacb8
// body: available
// range: 0x4aacb8-0x4aad5f inclusive
// range: 0x4aad67-0x4aad8a inclusive
// range: 0x4aada4-0x4aadab inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4aad00 (push 0x4aad8b followed by fs-segment stack chaining); handler 0x4aad8b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4aad36 (push 0x4aad60 followed by fs-segment stack chaining); handler 0x4aad60 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004aacb8(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_18;
  char local_11;
  int local_10;
  undefined2 local_a;
  int local_8;

  puStack_24 = (undefined1 *)0x4aaccc;
  local_10 = param_1;
  cVar3 = FUN_004aaac8();
  if (cVar3 != '\0') {
    return 0;
  }
  puStack_24 = (undefined1 *)0x4aacdb;
  local_a = FUN_004aab04(param_2);
  local_18 = *(int *)(local_10 + 0x38);
  puStack_24 = (undefined1 *)0x4aacf5;
  FUN_0044a96c(DAT_0068f238,&local_18);
  puStack_28 = &LAB_004aad8b;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  iVar2 = local_8;
  do {
    local_8 = iVar2;
    local_11 = '\0';
    puStack_30 = (undefined1 *)0x4aad15;
    local_8 = FUN_004aa728(local_10,local_a,2);
    puVar1 = puStack_24;
    if (local_8 != 0) {
      puStack_30 = (undefined1 *)0x4aad2b;
      FUN_0044a96c(DAT_0068f238,&local_8);
      puStack_34 = &LAB_004aad60;
      uStack_38 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_38;
      puStack_30 = &stack0xfffffffc;
      local_11 = FUN_004aab64(&local_8,0);
      puVar1 = puStack_30;
      *in_FS_OFFSET = uStack_38;
      puStack_30 = (undefined1 *)0x4aad67;
      puStack_34 = (undefined1 *)0x4aad5f;
      uVar4 = (**(code **)(*DAT_0068f238 + 4))(DAT_0068f238,*DAT_0068f238,puVar1);
      return uVar4;
    }
  } while ((local_18 != 0) && (iVar2 = 0, local_11 == '\x02'));
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &DAT_004aad92;
  puStack_28 = (undefined1 *)0x4aad8a;
  uVar4 = (**(code **)(*DAT_0068f238 + 4))(DAT_0068f238,*DAT_0068f238,puVar1);
  return uVar4;
}
