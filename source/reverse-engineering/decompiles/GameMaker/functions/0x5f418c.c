// rea decompile_all
// name: FUN_005f418c
// address: 0x5f418c
// body: available
// range: 0x5f418c-0x5f4204 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f41c0 (push 0x5f4205 followed by fs-segment stack chaining); handler 0x5f4205 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f418c(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  undefined4 uStack_10;
  undefined1 *puStack_c;
  undefined1 *puStack_8;

  if (DAT_0077db3c == (int *)0x0) {
    puStack_8 = (undefined1 *)0x5f41ac;
    FUN_00406d88(L"Assertion failure",L"C:\\Builds\\TP\\indysockets\\lib\\System\\IdStack.pas",0x237
                );
  }
  puStack_8 = (undefined1 *)0x5f41b5;
  (**(code **)*DAT_0077db3c)();
  puStack_c = &LAB_005f4205;
  uStack_10 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_10;
  puStack_8 = &stack0xfffffffc;
  if (DAT_0077db38 != 0) {
    bVar2 = DAT_0077db38 == 0;
    DAT_0077db38 = DAT_0077db38 + -1;
    puStack_8 = &stack0xfffffffc;
    if (bVar2) {
      puStack_8 = &stack0xfffffffc;
      FUN_00405944();
    }
    if (DAT_0077db38 == 0) {
      FUN_0041ef80(&DAT_0077db2c);
    }
  }
  puVar1 = puStack_8;
  *in_FS_OFFSET = uStack_10;
  puStack_8 = &LAB_005f420c;
  puStack_c = (undefined1 *)0x5f4204;
  (**(code **)(*DAT_0077db3c + 4))(DAT_0077db3c,*DAT_0077db3c,puVar1);
  return;
}
