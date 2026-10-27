// rea decompile_all
// name: FUN_00627be8
// address: 0x627be8
// body: available
// range: 0x627be8-0x627d30 inclusive
// range: 0x627d38-0x627d3e inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x627c1e (push 0x627d31 followed by fs-segment stack chaining); handler 0x627d31 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00627be8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uStack_8 = param_3;
  if (DAT_0077f09c == 0) {
    puStack_c = (undefined1 *)0x627c09;
    FUN_00406d88(L"Assertion failure",
                 L"C:\\Builds\\TP\\indysockets\\lib\\Protocols\\IdSSLOpenSSL.pas",0x313);
  }
  puStack_c = (undefined1 *)0x627c13;
  FUN_006160d0(DAT_0077f09c);
  puStack_10 = &LAB_00627d31;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puStack_c = &stack0xfffffffc;
  cVar2 = FUN_0061661c(DAT_0077f09c);
  if (cVar2 == '\0') {
    cVar2 = FUN_00620534();
    uStack_8 = CONCAT13(cVar2,(undefined3)uStack_8);
    if (cVar2 == '\0') {
      FUN_0040670c();
    }
    else {
      (**(code **)PTR_DAT_00782134)();
      (**(code **)PTR_DAT_007827d8)();
      FUN_00623b58();
      (**(code **)PTR_DAT_00781fdc)();
      iVar3 = (**(code **)PTR_DAT_00782168)();
      uStack_8 = CONCAT13(0 < iVar3,(undefined3)uStack_8);
      if (0 < iVar3) {
        if (DAT_0077f0a0 != 0) {
          FUN_00406d88(L"Assertion failure",
                       L"C:\\Builds\\TP\\indysockets\\lib\\Protocols\\IdSSLOpenSSL.pas",0x331);
        }
        DAT_0077f0a0 = FUN_0044ba7c(&PTR_LAB_005dfe54,1);
        DAT_0077f0a4 = FUN_0044ba7c(&PTR_LAB_005dfe54,1);
        DAT_0077f0a8 = FUN_0044ba7c(&PTR_LAB_005dfe54,1);
        DAT_0077f0ac = FUN_0043b990(&LAB_0042fb58,1);
        FUN_00627b3c();
        (**(code **)PTR_DAT_00781a4c)();
        FUN_0061666c(DAT_0077f09c,1,&LAB_006279e0);
        puVar1 = puStack_c;
        uStack_8 = CONCAT13(1,(undefined3)uStack_8);
        *in_FS_OFFSET = uStack_14;
        puStack_c = (undefined1 *)0x627d38;
        puStack_10 = (undefined1 *)0x627d30;
        uVar4 = FUN_006160dc(DAT_0077f09c,uStack_14,puVar1);
        return uVar4;
      }
      FUN_0040670c();
    }
  }
  else {
    uStack_8 = CONCAT13(1,(undefined3)uStack_8);
    FUN_0040670c();
  }
  return uStack_8 >> 0x18;
}
