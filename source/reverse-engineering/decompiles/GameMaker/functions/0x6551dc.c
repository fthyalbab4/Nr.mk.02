// rea decompile_all
// name: FUN_006551dc
// address: 0x6551dc
// body: available
// range: 0x6551dc-0x65542e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x65521b (push 0x65542f followed by fs-segment stack chaining); handler 0x65542f lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006551dc(undefined4 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_308;
  undefined1 *puStack_304;
  undefined1 *puStack_300;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined1 local_2e8 [720];
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  local_2ec = 0;
  local_2f0 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_300 = (undefined1 *)0x65520a;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  puStack_304 = &LAB_0065542f;
  uStack_308 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_308;
  puStack_300 = &stack0xfffffffc;
  FUN_00404ba0(local_2e8,local_8);
  iVar5 = 0;
  FUN_00404920(local_2e8);
  FUN_00404484();
  do {
    FUN_00408918(local_2e8,&local_c);
    FUN_0040514c(local_2e8);
    FUN_00404484();
    iVar3 = FUN_00408a68(L"#define",local_c);
    if (iVar3 == 1) {
      iVar5 = iVar5 + 1;
    }
    FUN_00404e84(local_2e8);
    cVar2 = FUN_00404484();
  } while (cVar2 == '\0');
  if (iVar5 == 0) {
    FUN_004d43f8(L"File contains no scripts.");
    FUN_00404d1c(local_2e8);
    FUN_00404484();
  }
  else {
    if (iVar5 == 1) {
      local_18 = *(undefined4 *)PTR_DAT_00781e78;
    }
    else {
      FUN_00417398(local_8,&local_2f0);
      FUN_00417288(local_2f0,0,&local_2ec);
      local_18 = FUN_0071ce14(*(undefined4 *)PTR_DAT_00781e78,local_2ec);
    }
    FUN_00404920(local_2e8);
    FUN_00404484();
    do {
      FUN_00408918(local_2e8,&local_c);
      FUN_0040514c(local_2e8);
      FUN_00404484();
      FUN_00404e84(local_2e8);
      cVar2 = FUN_00404484();
      if (cVar2 != '\0') break;
      iVar5 = FUN_00408a68(L"#define",local_c);
    } while (iVar5 != 1);
    while( true ) {
      FUN_00404e84(local_2e8);
      cVar2 = FUN_00404484();
      if (cVar2 != '\0') break;
      FUN_004086a8(local_c,8,100000,&local_c);
      FUN_00415dd0(local_c,&local_10);
      uVar4 = FUN_0071ceb8(local_18,3,7);
      FUN_0071d7bc(uVar4,local_10);
      iVar5 = FUN_0071cdfc(uVar4);
      FUN_00407f0c(&local_14,0);
      while( true ) {
        FUN_00404e84(local_2e8);
        cVar2 = FUN_00404484();
        if (cVar2 != '\0') break;
        FUN_00408918(local_2e8,&local_c);
        FUN_0040514c(local_2e8);
        FUN_00404484();
        iVar3 = FUN_00408a68(L"#define",local_c);
        if (iVar3 == 1) break;
        if (local_14 != 0) {
          FUN_00408480(&local_14,3);
        }
        FUN_004082dc(&local_14,local_c);
      }
      FUN_00407eb8(*(int *)(DAT_0077f2cc + iVar5 * 4) + 4,local_14);
    }
    FUN_00404d1c(local_2e8);
    FUN_00404484();
  }
  puVar1 = puStack_300;
  *in_FS_OFFSET = uStack_308;
  puStack_300 = &LAB_00655436;
  puStack_304 = (undefined1 *)0x655421;
  thunk_FUN_00406e80(&local_2f0,2,puVar1);
  puStack_304 = (undefined1 *)0x65542e;
  thunk_FUN_00406e80(&local_14,4);
  return;
}
