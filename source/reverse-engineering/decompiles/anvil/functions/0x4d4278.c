// rea decompile_all
// name: FUN_004d4278
// address: 0x4d4278
// body: available
// range: 0x4d4278-0x4d4310 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4d4291 (push 0x4d4311 followed by fs-segment stack chaining); handler 0x4d4311 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d4278(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  HICON hicon;
  HIMAGELIST himl;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_8;

  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_004d4311;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x40) != 0) {
    if (param_3 == 0) {
      puStack_18 = &stack0xfffffffc;
      FUN_004d3f30(param_1,param_2,0,0);
      puVar1 = puStack_18;
    }
    else {
      FUN_004d4d68(param_1,param_3);
      hicon = (HICON)FUN_00464f58(param_3);
      himl = (HIMAGELIST)FUN_004d3a48(param_1);
      iVar2 = ImageList_ReplaceIcon(himl,param_2,hicon);
      puVar1 = puStack_18;
      if (iVar2 == -1) {
        FUN_0040b9d0(PTR_LAB_00688b14,&local_8);
        FUN_0041bd4c(&LAB_0042dc24,1,local_8);
        FUN_00406ab4();
        puVar1 = puStack_18;
      }
    }
  }
  puStack_18 = puVar1;
  FUN_00406268(param_1);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004d4318;
  puStack_1c = (undefined1 *)0x4d4310;
  thunk_FUN_004072d8(&local_8,uStack_20,puVar1);
  return;
}
