// rea decompile_all
// name: FUN_005f42ac
// address: 0x5f42ac
// body: available
// range: 0x5f42ac-0x5f4378 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f42be (push 0x5f439b followed by fs-segment stack chaining); handler 0x5f439b lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5f42f2 (push 0x5f4379 followed by fs-segment stack chaining); handler 0x5f4379 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005f42ac(void)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  bool bVar2;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_10 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_14 = &LAB_005f439b;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puVar1 = &stack0xfffffffc;
  if (DAT_0077db3c == (int *)0x0) {
    puStack_1c = (undefined1 *)0x5f42de;
    FUN_00406d88(L"Assertion failure",L"C:\\Builds\\TP\\indysockets\\lib\\System\\IdStack.pas",0x249
                );
    puVar1 = puStack_10;
  }
  puStack_10 = puVar1;
  puStack_1c = (undefined1 *)0x5f42e7;
  (**(code **)*DAT_0077db3c)();
  puStack_20 = &LAB_005f4379;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  if (DAT_0077db38 == 0) {
    puStack_1c = &stack0xfffffffc;
    if (DAT_0077db2c != 0) {
      puStack_1c = &stack0xfffffffc;
      FUN_0040b75c(PTR_PTR_007820cc,&local_8);
      FUN_005df624(&PTR_LAB_005deea4,local_8);
    }
    if (DAT_0077db34 == 0) {
      FUN_0040b75c(PTR_PTR_00781b48,&local_c);
      FUN_005df624(&PTR_LAB_005deea4,local_c);
    }
    DAT_0077db2c = (**(code **)(DAT_0077db34 + 0x14))(DAT_0077db34,1);
  }
  bVar2 = DAT_0077db38 == -1;
  DAT_0077db38 = DAT_0077db38 + 1;
  if (bVar2) {
    FUN_00405944();
  }
  puVar1 = puStack_1c;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_005f4380;
  puStack_20 = (undefined1 *)0x5f4378;
  (**(code **)(*DAT_0077db3c + 4))(DAT_0077db3c,*DAT_0077db3c,puVar1);
  return;
}
