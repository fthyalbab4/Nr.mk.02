// rea decompile_all
// name: FUN_00561754
// address: 0x561754
// body: available
// range: 0x561754-0x56183d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x561773 (push 0x56183e followed by fs-segment stack chaining); handler 0x56183e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00561754(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_14;
  int local_10;
  int local_8;

  puStack_24 = (undefined1 *)0x561768;
  local_8 = param_1;
  FUN_00407ad0(param_1);
  puStack_28 = &LAB_0056183e;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  iVar4 = 1;
  puStack_24 = &stack0xfffffffc;
  while( true ) {
    FUN_004074c8(&local_8,0xfde9);
    iVar3 = FUN_00407690();
    puVar1 = puStack_24;
    if (iVar3 < iVar4) break;
    local_10 = 1;
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 1)) {
      iVar3 = FUN_004074b8(&local_8,local_8,CONCAT22(extraout_var_00,0xfde9));
    }
    cVar2 = FUN_00481058(*(undefined1 *)(iVar3 + -1 + iVar4));
    if (cVar2 != '\0') {
      iVar3 = local_8;
      if ((local_8 != 0) && (*(short *)(local_8 + -10) != 1)) {
        iVar3 = FUN_004074b8(&local_8,local_8,CONCAT22(extraout_var,0xfde9));
      }
      local_14 = 1;
      if ((0xc1 < *(byte *)(iVar3 + -1 + iVar4)) && (*(byte *)(iVar3 + -1 + iVar4) < 0xfe)) {
        local_14 = FUN_00481070(*(undefined1 *)(iVar3 + -1 + iVar4));
      }
      local_10 = local_14;
    }
    iVar4 = iVar4 + local_10;
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00561845;
  puStack_28 = (undefined1 *)0x56183d;
  FUN_004072d8(&local_8,uStack_2c,puVar1);
  return;
}
