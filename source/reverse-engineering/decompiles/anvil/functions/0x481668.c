// rea decompile_all
// name: FUN_00481668
// address: 0x481668
// body: available
// range: 0x481668-0x48170d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x481681 (push 0x48170e followed by fs-segment stack chaining); handler 0x48170e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481668(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  BOOL BVar4;
  DWORD DVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_8;

  puStack_18 = &stack0xfffffffc;
  local_10 = 0;
  puStack_1c = &LAB_0048170e;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puVar2 = &stack0xfffffffc;
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = *(int *)(*(int *)PTR_DAT_0068917c + 0x170);
    *(int *)(param_1 + 8) = iVar1;
    puVar2 = &stack0xfffffffc;
    if (iVar1 == 0) {
      uVar3 = FUN_00447850();
      *(undefined4 *)(param_1 + 8) = uVar3;
      *(undefined1 *)(param_1 + 0xc) = 1;
      puVar2 = puStack_18;
    }
    puStack_18 = puVar2;
    BVar4 = OpenClipboard(*(HWND *)(param_1 + 8));
    if (BVar4 == 0) {
      DVar5 = GetLastError();
      FUN_0041b234(DVar5,&local_10);
      local_c = local_10;
      local_8 = 0x11;
      FUN_0041bf50(&LAB_0048158c,1,PTR_LAB_006889b0,0,&local_c);
      FUN_00406ab4();
    }
    *(undefined1 *)(param_1 + 0xd) = 0;
    puVar2 = puStack_18;
  }
  puStack_18 = puVar2;
  puVar2 = puStack_18;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00481715;
  puStack_1c = (undefined1 *)0x48170d;
  thunk_FUN_004072d8(&local_10,uStack_20,puVar2);
  return;
}
