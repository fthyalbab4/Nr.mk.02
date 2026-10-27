// rea decompile_all
// name: FUN_00700454
// address: 0x700454
// body: available
// range: 0x700454-0x700546 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x700484 (push 0x700547 followed by fs-segment stack chaining); handler 0x700547 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00700454(undefined4 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2f0;
  undefined1 *puStack_2ec;
  undefined1 *puStack_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined1 local_2dc [720];
  undefined4 local_c;
  undefined4 local_8;

  local_2e0 = 0;
  local_2e4 = 0;
  local_c = 0;
  puStack_2e8 = (undefined1 *)0x700479;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_2ec = &LAB_00700547;
  uStack_2f0 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2f0;
  puStack_2e8 = &stack0xfffffffc;
  FUN_00404728(0,&local_2e4);
  FUN_0041735c(local_2e4,&local_2e0);
  FUN_0040839c(&local_c,local_2e0,L"TraceIDE.log");
  FUN_00404ba0(local_2dc,local_c);
  cVar2 = FUN_00416e40(local_c);
  if (cVar2 == '\0') {
    FUN_0040492c(local_2dc);
    FUN_00404484();
  }
  else {
    FUN_00404938(local_2dc);
    FUN_00404484();
  }
  FUN_00408968(local_2dc,local_8);
  FUN_00405540();
  FUN_00404484();
  FUN_00404d1c(local_2dc);
  FUN_00404484();
  puVar1 = puStack_2e8;
  *in_FS_OFFSET = uStack_2f0;
  puStack_2e8 = &LAB_0070054e;
  puStack_2ec = (undefined1 *)0x700539;
  thunk_FUN_00406e80(&local_2e4,2,puVar1);
  puStack_2ec = (undefined1 *)0x700546;
  thunk_FUN_00406e80(&local_c,2);
  return;
}
