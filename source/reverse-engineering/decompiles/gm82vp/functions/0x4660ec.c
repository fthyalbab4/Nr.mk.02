// rea decompile_all
// name: FUN_004660ec
// address: 0x4660ec
// body: available
// range: 0x4660ec-0x4661a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x466105 (push 0x4661ea followed by fs-segment stack chaining); handler 0x4661ea lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x466158 (push 0x4661a7 followed by fs-segment stack chaining); handler 0x4661a7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004660ec(void)

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
  puStack_114 = &LAB_004661ea;
  uStack_118 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_118;
  iVar2 = MulDiv(8,DAT_0068f10c,0x48);
  DAT_0067d208 = -iVar2;
  if (*(int *)PTR_DAT_0068966c == 1) {
    cVar1 = FUN_004660a8();
    if (cVar1 == -0x80) {
      FUN_004081e8(&local_8,L"Tahoma");
    }
  }
  local_c = FUN_00452b40(&DAT_00451994,1);
  uVar3 = *in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffffedc;
  FUN_00452c28(local_c,0x80000002);
  cVar1 = FUN_00452ea4(local_c,L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\FontSubstitutes");
  if (cVar1 != '\0') {
    FUN_004537a0(local_c,L"MS Shell Dlg 2",&local_8);
    FUN_00452bf8(local_c);
  }
  *in_FS_OFFSET = uVar3;
  FUN_00405fdc(local_c,uVar3,puVar4);
  return;
}
