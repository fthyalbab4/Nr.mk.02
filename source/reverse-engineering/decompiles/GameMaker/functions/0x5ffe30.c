// rea decompile_all
// name: FUN_005ffe30
// address: 0x5ffe30
// body: available
// range: 0x5ffe30-0x5ffecc inclusive
// range: 0x5ffee8-0x5ffeff inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ffe65 (push 0x5fff00 followed by fs-segment stack chaining); handler 0x5fff00 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ffe7f (push 0x5ffede followed by fs-segment stack chaining); handler 0x5ffede lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5ffe8d (push 0x5ffecd followed by fs-segment stack chaining); handler 0x5ffecd lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ffe30(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;

  uStack_24 = 0x5ffe4c;
  FUN_00407eb8(param_3,0);
  uStack_24 = 0;
  uStack_28 = 0;
  puStack_2c = (undefined1 *)0x5ffe5a;
  (**(code **)(*param_1 + 0x38))(param_1,0);
  puStack_30 = &LAB_005fff00;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_38 = (undefined1 *)0x5ffe70;
  puStack_2c = &stack0xfffffffc;
  cVar3 = (**(code **)(*param_1 + 0x6c))();
  if (cVar3 != '\0') {
    puStack_3c = &LAB_005ffede;
    uStack_40 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_40;
    puStack_48 = &LAB_005ffecd;
    *in_FS_OFFSET = &uStack_4c;
    puStack_44 = &stack0xfffffffc;
    puStack_38 = &stack0xfffffffc;
    do {
      uStack_4c = 0;
      iVar4 = FUN_005fedc8(param_1,0,0xfa);
      puVar2 = puStack_48;
      uVar1 = uStack_4c;
    } while (iVar4 != 0);
    *in_FS_OFFSET = uStack_4c;
    puStack_48 = &DAT_005ffed4;
    uStack_4c = 0x5ffeba;
    cVar3 = FUN_00600644(param_1,uVar1,puVar2);
    if (cVar3 == '\0') {
      uStack_4c = 0x5ffecc;
      FUN_005ffdf4(param_1,param_2,param_3);
    }
    return;
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_005fff07;
  puStack_30 = (undefined1 *)0x5ffeff;
  (**(code **)(*param_1 + 0x40))(param_1,0);
  return;
}
