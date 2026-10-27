// rea decompile_all
// name: FUN_00465a7c
// address: 0x465a7c
// body: available
// range: 0x465a7c-0x465b36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x465a95 (push 0x465b7a followed by fs-segment stack chaining); handler 0x465b7a lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x465ae8 (push 0x465b37 followed by fs-segment stack chaining); handler 0x465b37 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00465a7c(void)

{
  char cVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 uStack_118;
  undefined1 *puStack_114;
  undefined1 *puStack_110;
  undefined4 local_c;
  undefined4 local_8;

  puStack_110 = &stack0xfffffffc;
  puVar4 = &stack0xfffffffc;
  local_8 = 0;
  puStack_114 = &LAB_00465b7a;
  uStack_118 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_118;
  iVar2 = MulDiv(8,DAT_0078810c,0x48);
  DAT_007741c8 = -iVar2;
  if (*(int *)PTR_DAT_00782944 == 1) {
    cVar1 = FUN_00465a38();
    if (cVar1 == -0x80) {
      FUN_00407f0c(&local_8,L"Tahoma");
    }
  }
  local_c = FUN_00452480(&DAT_004512d4,1);
  uVar3 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffffedc;
  FUN_00452568(local_c,0x80000002);
  cVar1 = FUN_004527e4(local_c,L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\FontSubstitutes");
  if (cVar1 != '\0') {
    FUN_004530e0(local_c,L"MS Shell Dlg 2",&local_8);
    FUN_00452538(local_c);
  }
  *in_FS_OFFSET = uVar3;
  FUN_00405a7c(local_c,uVar3,puVar4);
  return;
}
