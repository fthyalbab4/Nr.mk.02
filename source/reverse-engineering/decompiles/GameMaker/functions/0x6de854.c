// rea decompile_all
// name: FUN_006de854
// address: 0x6de854
// body: available
// range: 0x6de854-0x6de8bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6de863 (push 0x6de8bc followed by fs-segment stack chaining); handler 0x6de8bc lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006de854(void)

{
  char cVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;

  puStack_c = &stack0xfffffffc;
  puStack_10 = &LAB_006de8bc;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  piVar2 = (int *)FUN_00452480(&DAT_004512d4,1);
  FUN_00452568(piVar2,0x80000001);
  cVar1 = FUN_004526b0(piVar2,L"\\Software\\Game Maker",1);
  if (cVar1 != '\0') {
    FUN_00452b58(piVar2,L"lfile");
    FUN_00452538(piVar2);
  }
  (**(code **)(*piVar2 + -4))(piVar2,1);
  *in_FS_OFFSET = uStack_14;
  return;
}
