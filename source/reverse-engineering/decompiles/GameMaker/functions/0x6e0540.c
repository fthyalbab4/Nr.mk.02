// rea decompile_all
// name: FUN_006e0540
// address: 0x6e0540
// body: available
// range: 0x6e0540-0x6e05c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6e0553 (push 0x6e05ca followed by fs-segment stack chaining); handler 0x6e05ca lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e0540(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined2 extraout_var;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  puStack_14 = &LAB_006e05ca;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puVar1 = &stack0xfffffffc;
  if (DAT_0077f44c != 0) {
    FUN_004173d8(DAT_0077f44c,&local_8);
    iVar2 = FUN_00415924(local_8,L".gm81");
    puVar1 = puStack_10;
    if (iVar2 == 0) {
      FUN_0051cc64(*(undefined4 *)PTR_DAT_007828e0,CONCAT22(extraout_var,0xfff5));
      FUN_00705c84(DAT_0077f44c);
      FUN_0051cc64(*(undefined4 *)PTR_DAT_007828e0,0);
      goto LAB_006e05b4;
    }
  }
  puStack_10 = puVar1;
  FUN_006e05f0(param_1,*(undefined4 *)(param_1 + 0x3c0));
LAB_006e05b4:
  puVar1 = puStack_10;
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_006e05d1;
  puStack_14 = (undefined1 *)0x6e05c9;
  thunk_FUN_00406e5c(&local_8,uStack_18,puVar1);
  return;
}
