// rea decompile_all
// name: FUN_0068ac08
// address: 0x68ac08
// body: available
// range: 0x68ac08-0x68acc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x68ac26 (push 0x68acc6 followed by fs-segment stack chaining); handler 0x68acc6 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0068ac08(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 local_2c [8];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *local_18;

  local_18 = &stack0xfffffffc;
  iVar2 = 5;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puStack_1c = &LAB_0068acc6;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  *(undefined1 *)(param_1 + 0x1660) = 0;
  uStack_24 = 0x68ac47;
  iVar2 = FUN_006587b8(*(undefined4 *)(param_1 + 0x61c),*(undefined4 *)(param_1 + 0x1648),
                       *(undefined4 *)(param_1 + 0x164c));
  if ((-1 < iVar2) && (iVar2 < *(int *)(*(int *)(param_1 + 0x61c) + 0x2f0))) {
    uStack_24 = 0x68ac6b;
    FUN_006575dc(*(undefined4 *)(param_1 + 0x61c),iVar2,local_2c);
    if ((char)local_18 == '\0') {
      uStack_24 = 0x68ac7d;
      FUN_00689fc4(param_1,iVar2,&stack0xffffffec);
      uStack_24 = 0x68ac8a;
      FUN_00658b1c(*(undefined4 *)(param_1 + 0x61c),iVar2);
      uStack_24 = 0x68ac91;
      FUN_00690d44(param_1);
      uStack_24 = 0x68ac98;
      FUN_0068f9f8(param_1);
      uStack_24 = 0x68aca3;
      FUN_006930cc(*(undefined4 *)(param_1 + 0x630));
      *(undefined1 *)(param_1 + 0x628) = 1;
    }
  }
  puVar1 = local_18;
  *in_FS_OFFSET = uStack_20;
  local_18 = &LAB_0068accd;
  puStack_1c = (undefined1 *)0x68acc5;
  FUN_00408df4(local_2c,&DAT_00656108,puVar1);
  return;
}
