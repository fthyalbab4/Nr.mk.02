// rea decompile_all
// name: FUN_005073fc
// address: 0x5073fc
// body: available
// range: 0x5073fc-0x507494 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x507415 (push 0x507495 followed by fs-segment stack chaining); handler 0x507495 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005073fc(int param_1,int param_2,int param_3)

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
  puStack_1c = &LAB_00507495;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar1 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x40) != 0) {
    if (param_3 == 0) {
      puStack_18 = &stack0xfffffffc;
      FUN_005070b4(param_1,param_2,0,0);
      puVar1 = puStack_18;
    }
    else {
      FUN_00507eec(param_1,param_3);
      hicon = (HICON)FUN_00464898(param_3);
      himl = (HIMAGELIST)FUN_00506bcc(param_1);
      iVar2 = ImageList_ReplaceIcon(himl,param_2,hicon);
      puVar1 = puStack_18;
      if (iVar2 == -1) {
        FUN_0040b75c(PTR_PTR_00781968,&local_8);
        FUN_0041beb8(&PTR_LAB_0042f068,1,local_8);
        FUN_00406618();
        puVar1 = puStack_18;
      }
    }
  }
  puStack_18 = puVar1;
  FUN_00405d08(param_1);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0050749c;
  puStack_1c = (undefined1 *)0x507494;
  thunk_FUN_00406e5c(&local_8,uStack_20,puVar1);
  return;
}
