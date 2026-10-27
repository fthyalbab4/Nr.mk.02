// rea decompile_all
// name: FUN_00533aa8
// address: 0x533aa8
// body: available
// range: 0x533aa8-0x533c5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x533af0 (push 0x533c5c followed by fs-segment stack chaining); handler 0x533c5c lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00533aa8(undefined4 param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  LPCWSTR lpFileName;
  undefined4 *in_FS_OFFSET;
  undefined *puVar2;
  undefined1 *in_stack_fffffcf0;
  undefined *puVar3;
  undefined4 in_stack_fffffcf8;
  undefined4 uVar4;
  undefined4 uStack_300;
  undefined1 *puStack_2fc;
  undefined1 *puStack_2f8;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined1 local_2e4 [720];
  undefined4 local_14;
  undefined1 *local_10;
  int local_c;
  undefined4 local_8;

  local_2e8 = 0;
  local_2ec = 0;
  local_10 = (undefined1 *)0x0;
  local_14 = 0;
  puStack_2f8 = (undefined1 *)0x533ad7;
  local_c = param_2;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_2f8 = (undefined1 *)0x533adf;
  thunk_FUN_00407660(local_c);
  puStack_2fc = &LAB_00533c5c;
  uStack_300 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_300;
  uVar4 = 0x533afd;
  puStack_2f8 = &stack0xfffffffc;
  FUN_00407eb8(param_3,local_8);
  if (local_c != 0) {
    uVar4 = 0x533b0f;
    cVar1 = FUN_00416e40(local_c);
    if (cVar1 != '\0') {
      FUN_005342d4(L".txt",&local_10);
      FUN_00404ba0(local_2e4,local_10);
      FUN_0040492c(local_2e4);
      FUN_00404484();
      FUN_00408968(local_2e4,local_8);
      FUN_00404c58();
      FUN_00404484();
      FUN_00404d1c(local_2e4);
      FUN_00404484();
      uVar4 = 1;
      FUN_0041735c(local_c,&local_2e8);
      puVar3 = &DAT_00533c90;
      puVar2 = &DAT_00533c90;
      in_stack_fffffcf0 = local_10;
      in_stack_fffffcf8 = local_2e8;
      FUN_00408480(&local_2ec,3);
      FUN_00533978(local_c,local_2ec,puVar2,in_stack_fffffcf0,puVar3,in_stack_fffffcf8,uVar4);
      cVar1 = FUN_00416e40(local_10);
      if (cVar1 == '\0') {
        FUN_004d43f8(L"Failed to read back the code file.");
      }
      else {
        FUN_00407eb8(param_3,0);
        FUN_00404ba0(local_2e4,local_10);
        FUN_00404920(local_2e4);
        FUN_00404484();
        while( true ) {
          FUN_00404e84(local_2e4);
          cVar1 = FUN_00404484();
          if (cVar1 != '\0') break;
          FUN_00408918(local_2e4,&local_14);
          FUN_0040514c(local_2e4);
          FUN_00404484();
          in_stack_fffffcf0 = &LAB_00533d04;
          FUN_00408480(param_3,4);
        }
        FUN_00404d1c(local_2e4);
        FUN_00404484();
        lpFileName = (LPCWSTR)FUN_00407f44(local_10);
        DeleteFileW(lpFileName);
      }
    }
  }
  *in_FS_OFFSET = in_stack_fffffcf0;
  thunk_FUN_00406e80(&local_2ec,2,in_stack_fffffcf8,&LAB_00533c63,uVar4);
  thunk_FUN_00406e80(&local_14,4);
  return;
}
