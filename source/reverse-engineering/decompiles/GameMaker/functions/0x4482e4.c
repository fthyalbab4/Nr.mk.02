// rea decompile_all
// name: FUN_004482e4
// address: 0x4482e4
// body: available
// range: 0x4482e4-0x448381 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4482f9 (push 0x448382 followed by fs-segment stack chaining); handler 0x448382 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004482e4(int param_1,char param_2)

{
  undefined1 *puVar1;
  DWORD DVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_c;
  undefined4 local_8;

  puStack_14 = &stack0xfffffffc;
  local_8 = 0;
  local_c = 0;
  puStack_18 = &LAB_00448382;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (((param_2 == '\0' && *(char *)(param_1 + 0xc) == '\0') || (*(char *)(param_1 + 0x10) != '\0'))
     || (*(char *)(param_1 + 0x3c) != '\0')) {
    FUN_0040b75c(PTR_PTR_00782308,&local_c);
    FUN_0041beb8(&PTR_LAB_00436d94,1,local_c);
    FUN_00406618();
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    puStack_14 = &stack0xfffffffc;
    DVar2 = ResumeThread(*(HANDLE *)(param_1 + 4));
    if (DVar2 != 1) {
      FUN_0040b75c(PTR_PTR_00782308,&local_8);
      FUN_0041beb8(&PTR_LAB_00436d94,1,local_8);
      FUN_00406618();
    }
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00448389;
  puStack_18 = (undefined1 *)0x448381;
  thunk_FUN_00406e80(&local_c,2,puVar1);
  return;
}
