// rea decompile_all
// name: FUN_005d7ba4
// address: 0x5d7ba4
// body: available
// range: 0x5d7ba4-0x5d7c48 inclusive
// range: 0x5d7c60-0x5d7c75 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d7bc0 (push 0x5d7c76 followed by fs-segment stack chaining); handler 0x5d7c76 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d7c03 (push 0x5d7c49 followed by fs-segment stack chaining); handler 0x5d7c49 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d7ba4(int param_1)

{
  undefined1 *puVar1;
  HGLOBAL pvVar2;
  LPSTREAM *ppstm;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_8;

  puStack_1c = &stack0xfffffffc;
  local_8 = 0;
  puStack_20 = &LAB_005d7c76;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  FUN_005d7f5c(param_1);
  if (*(int *)(param_1 + 0x284) != 0) {
    uStack_30 = 0x5d7be4;
    pvVar2 = GlobalAlloc(2,0);
    *(HGLOBAL *)(param_1 + 0x27c) = pvVar2;
    if (pvVar2 == (HGLOBAL)0x0) {
      FUN_0041beac();
    }
    uStack_30 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_30;
    ppstm = (LPSTREAM *)FUN_0040b140(&local_8);
    CreateStreamOnHGlobal(*(HGLOBAL *)(param_1 + 0x27c),0,ppstm);
    FUN_005b641c();
    (**(code **)(**(int **)(param_1 + 0x284) + 0x18))();
    FUN_005b641c();
    *in_FS_OFFSET = uStack_30;
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005d7c7d;
  puStack_20 = (undefined1 *)0x5d7c75;
  FUN_0040b140(&local_8,uStack_24,puVar1);
  return;
}
