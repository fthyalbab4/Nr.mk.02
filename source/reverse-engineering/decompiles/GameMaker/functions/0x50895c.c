// rea decompile_all
// name: FUN_0050895c
// address: 0x50895c
// body: available
// range: 0x50895c-0x508a55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5089c9 (push 0x508a56 followed by fs-segment stack chaining); handler 0x508a56 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050895c(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  HMODULE pHVar2;
  IStream *pIVar3;
  int iVar4;
  IStream *pstm;
  HIMAGELIST himl;
  BOOL BVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  HMODULE pHStack_1c;

  if ((DAT_007882e0 == 0) && (DAT_007882e0 = FUN_0041d050(L"comctl32.dll"), 0x5ffff < DAT_007882e0))
  {
    pHStack_1c = (HMODULE)0x508995;
    pHVar2 = GetModuleHandleW(L"comctl32.dll");
    if (pHVar2 != (HMODULE)0x0) {
      puStack_20 = (undefined1 *)0x5089a6;
      pHStack_1c = pHVar2;
      DAT_007882e4 = (code *)FUN_0040dcb4();
    }
  }
  puStack_20 = (undefined1 *)0x0;
  puStack_24 = (undefined1 *)0x5089bb;
  pIVar3 = (IStream *)FUN_00449efc(&PTR_FUN_004340e8,1,param_2);
  puStack_24 = &LAB_00508a56;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if (DAT_007882e4 == (code *)0x0) {
    pstm = pIVar3;
    if (pIVar3 != (IStream *)0x0) {
      pstm = pIVar3 + 5;
    }
    puStack_20 = &stack0xfffffffc;
    himl = (HIMAGELIST)FUN_00506bcc(param_1);
    BVar5 = ImageList_Write(himl,pstm);
    if (BVar5 == 0) {
      FUN_0041bfec(&PTR_LAB_0042eaf0,1,PTR_PTR_00781d18);
      FUN_00406618();
    }
  }
  else {
    puStack_20 = &stack0xfffffffc;
    FUN_00506bcc(param_1);
    iVar4 = (*DAT_007882e4)();
    if (iVar4 != 0) {
      FUN_0041bfec(&PTR_LAB_0042eaf0,1,PTR_PTR_00781d18);
      FUN_00406618();
    }
  }
  puVar1 = puStack_20;
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00508a5d;
  puStack_24 = (undefined1 *)0x508a55;
  FUN_00405a7c(pIVar3,uStack_28,puVar1);
  return;
}
