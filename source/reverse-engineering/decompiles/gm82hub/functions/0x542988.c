// rea decompile_all
// name: FUN_00542988
// address: 0x542988
// body: available
// range: 0x542988-0x542a7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x542996 (push 0x542a80 followed by fs-segment stack chaining); handler 0x542a80 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00542988(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;

  puStack_8 = &stack0xfffffffc;
  puStack_c = &LAB_00542a80;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  _DAT_00690424 = _DAT_00690424 + 1;
  if (_DAT_00690424 == 0) {
    FUN_005457e0(DAT_0068cc40);
    FUN_00542974();
    FUN_00409120(&DAT_00685a38,&DAT_005404d0,0x9b);
    FUN_004090d0(&PTR_u__URL__https___jcl_svn_sourceforg_0068617c,&DAT_00543d5c);
    FUN_00409120(&DAT_0069042c,&DAT_00542454,0x100);
    FUN_00409120(&DAT_0069082c,&DAT_005424d8,0x100);
    FUN_00409120(&DAT_00690c2c,&DAT_00542538,0x100);
    FUN_00409120(&DAT_0069102c,&DAT_00542538,0x100);
    FUN_00409120(&DAT_0069142c,&DAT_0054259c,0x100);
    FUN_00409e08(&DAT_0069182c,&DAT_00542610);
    FUN_00409e08(&DAT_00691830,&DAT_0054263c);
    FUN_00409e08(&DAT_00691834,&DAT_005426fc);
  }
  *in_FS_OFFSET = uStack_10;
  return;
}
