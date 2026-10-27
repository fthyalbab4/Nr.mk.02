// rea decompile_all
// name: FUN_004454f0
// address: 0x4454f0
// body: available
// range: 0x4454f0-0x44558d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x445505 (push 0x44558e followed by fs-segment stack chaining); handler 0x44558e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004454f0(int param_1,char param_2)

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
  puStack_18 = &LAB_0044558e;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  if (((param_2 == '\0' && *(char *)(param_1 + 0xc) == '\0') || (*(char *)(param_1 + 0x10) != '\0'))
     || (*(char *)(param_1 + 0x3c) != '\0')) {
    FUN_0040b9d0(PTR_LAB_006891c8,&local_c);
    FUN_0041bd4c(&LAB_00434c40,1,local_c);
    FUN_00406ab4();
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    puStack_14 = &stack0xfffffffc;
    DVar2 = ResumeThread(*(HANDLE *)(param_1 + 4));
    if (DVar2 != 1) {
      FUN_0040b9d0(PTR_LAB_006891c8,&local_8);
      FUN_0041bd4c(&LAB_00434c40,1,local_8);
      FUN_00406ab4();
    }
  }
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00445595;
  puStack_18 = (undefined1 *)0x44558d;
  thunk_FUN_004072fc(&local_c,2,puVar1);
  return;
}
