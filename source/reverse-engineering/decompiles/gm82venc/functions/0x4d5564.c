// rea decompile_all
// name: FUN_004d5564
// address: 0x4d5564
// body: available
// range: 0x4d5564-0x4d55c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d5591 (push 0x4d55c4 followed by fs-segment stack chaining); handler 0x4d55c4 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d5564(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  IStream *pIVar2;
  IStream *pstm;
  HIMAGELIST p_Var3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;

  puStack_24 = (undefined1 *)0x0;
  puStack_28 = (undefined1 *)0x4d5583;
  pIVar2 = (IStream *)FUN_00447108(&PTR_FUN_00431f94,1,param_2);
  puStack_28 = &LAB_004d55c4;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  pstm = pIVar2;
  if (pIVar2 != (IStream *)0x0) {
    pstm = pIVar2 + 5;
  }
  puStack_24 = &stack0xfffffffc;
  p_Var3 = ImageList_Read(pstm);
  FUN_004d3a0c(param_1,p_Var3);
  puVar1 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004d55cb;
  puStack_28 = (undefined1 *)0x4d55c3;
  FUN_00405fdc(pIVar2,uStack_2c,puVar1);
  return;
}
