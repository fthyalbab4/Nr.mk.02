// rea decompile_all
// name: FUN_00533dc8
// address: 0x533dc8
// body: available
// range: 0x533dc8-0x533f5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x533df6 (push 0x533f60 followed by fs-segment stack chaining); handler 0x533f60 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00533dc8(void)

{
  undefined1 *puVar1;
  char cVar2;
  DWORD DVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4f4;
  undefined1 *puStack_4f0;
  undefined1 *puStack_4ec;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined1 local_4dc [720];
  WCHAR local_20c [256];
  undefined4 local_c;
  undefined4 local_8;

  puStack_4ec = &stack0xfffffffc;
  local_4e8 = 0;
  local_4e0 = 0;
  local_4e4 = 0;
  local_8 = 0;
  local_c = 0;
  puStack_4f0 = &LAB_00533f60;
  uStack_4f4 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4f4;
  FUN_00407f0c(&local_8,L"C:\\temp");
  FUN_00520290(*(undefined4 *)PTR_DAT_00782280,&local_4e4);
  FUN_0041735c(local_4e4,&local_4e0);
  FUN_0040839c(&local_c,local_4e0,L"tempdir.txt");
  cVar2 = FUN_00416e40(local_c);
  if (cVar2 == '\0') {
    DVar3 = GetEnvironmentVariableW(L"temp",local_20c,0x100);
    if (DVar3 == 0) {
      DVar3 = GetEnvironmentVariableW(L"tmp",local_20c,0x100);
      if (DVar3 != 0) {
        FUN_004080c8(&local_8,local_20c,0x100);
      }
    }
    else {
      FUN_004080c8(&local_8,local_20c,0x100);
    }
  }
  else {
    FUN_00404ba0(local_4dc,local_c);
    FUN_00404920(local_4dc);
    FUN_00404484();
    FUN_00408918(local_4dc,&local_8);
    FUN_0040514c(local_4dc);
    FUN_00404484();
    FUN_00404d1c(local_4dc);
    FUN_00404484();
  }
  FUN_00404788();
  cVar2 = FUN_00533d08(local_8);
  if (cVar2 == '\0') {
    cVar2 = FUN_00533d08(L"C:\\temp");
    if (cVar2 == '\0') {
      FUN_00417600(&local_4e8);
      cVar2 = FUN_00533d08(local_4e8);
      if (cVar2 == '\0') {
        FUN_004d43f8(
                    L"Failed to create temp dir. This can cause serious problems with testing the games and with sounds, etc."
                    );
      }
    }
  }
  puVar1 = puStack_4ec;
  *in_FS_OFFSET = uStack_4f4;
  puStack_4ec = &LAB_00533f67;
  puStack_4f0 = (undefined1 *)0x533f52;
  thunk_FUN_00406e80(&local_4e8,3,puVar1);
  puStack_4f0 = (undefined1 *)0x533f5f;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
