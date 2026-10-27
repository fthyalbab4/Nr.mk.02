// rea decompile_all
// name: FUN_006ac7e0
// address: 0x6ac7e0
// body: available
// range: 0x6ac7e0-0x6ac8f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6ac805 (push 0x6ac8fa followed by fs-segment stack chaining); handler 0x6ac8fa lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006ac7e0(undefined4 param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_c = 0;
  local_10 = 0;
  uStack_14 = 0;
  uStack_18 = 0;
  local_1c = 0;
  puStack_28 = (undefined1 *)0x6ac7fa;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_2c = &LAB_006ac8fa;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  *PTR_DAT_00781dc4 = 0;
  *param_2 = 0;
  puStack_28 = &stack0xfffffffc;
  FUN_00409be0(param_2 + 1,&DAT_006ab240,1,1);
  local_10 = 1;
  FUN_0040839c(&local_c,local_8,&DAT_006ac918);
  while( true ) {
    iVar2 = FUN_00409a18(param_2[1]);
    if (iVar2 <= *param_2) {
      FUN_00409be0(param_2 + 1,&DAT_006ab240,1,*param_2 + 3);
    }
    *param_2 = *param_2 + 1;
    FUN_006ac520(&local_c,&local_10,&local_1c);
    FUN_00409084(param_2[1] + -0xc + *param_2 * 0xc,&local_1c,&DAT_006ab1e4);
    if (*(int *)(param_2[1] + -0xc + *param_2 * 0xc) == -1) break;
    if (*(int *)(param_2[1] + -0xc + *param_2 * 0xc) == -2) {
LAB_006ac8d1:
      puVar1 = puStack_28;
      *in_FS_OFFSET = uStack_30;
      puStack_28 = &LAB_006ac901;
      puStack_2c = (undefined1 *)0x6ac8ec;
      FUN_00408df4(&local_1c,&DAT_006ab1e4,puVar1);
      puStack_2c = (undefined1 *)0x6ac8f9;
      thunk_FUN_00406e80(&local_c,2);
      return;
    }
  }
  FUN_006ae3bc(local_8,*(undefined4 *)(param_2[1] + -4 + *param_2 * 0xc),L"Unexpected symbol.");
  goto LAB_006ac8d1;
}
