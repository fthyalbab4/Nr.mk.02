// rea decompile_all
// name: FUN_00740108
// address: 0x740108
// body: available
// range: 0x740108-0x7401ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x740116 (push 0x740200 followed by fs-segment stack chaining); handler 0x740200 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00740108(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;

  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_00740200;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_007a5030 = _DAT_007a5030 + 1;
  if (_DAT_007a5030 == 0) {
    FUN_00742f60(DAT_00785c40);
    FUN_007400f4();
    FUN_00408e44(&DAT_00780bb0,&DAT_0073dc50,0x9b);
    FUN_00408df4(&PTR_u__URL__https___jcl_svn_sourceforg_007812f4,&DAT_007414dc);
    FUN_00408e44(&DAT_007a5038,&DAT_0073fbd4,0x100);
    FUN_00408e44(&DAT_007a5438,&DAT_0073fc58,0x100);
    FUN_00408e44(&DAT_007a5838,&DAT_0073fcb8,0x100);
    FUN_00408e44(&DAT_007a5c38,&DAT_0073fcb8,0x100);
    FUN_00408e44(&DAT_007a6038,&DAT_0073fd1c,0x100);
    FUN_00409ce0(&DAT_007a6438,&DAT_0073fd90);
    FUN_00409ce0(&DAT_007a643c,&DAT_0073fdbc);
    FUN_00409ce0(&DAT_007a6440,&DAT_0073fe7c);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}
