// rea decompile_all
// name: FUN_00607f20
// address: 0x607f20
// body: available
// range: 0x607f20-0x608094 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x607f3b (push 0x6080b2 followed by fs-segment stack chaining); handler 0x6080b2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x607f74 (push 0x608095 followed by fs-segment stack chaining); handler 0x608095 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00607f20(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  bool bVar4;
  bool bVar5;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_c;
  int local_8;

  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_006080b2;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  if (param_1 == -1) {
    param_1 = -2;
  }
  bVar4 = param_1 == -2;
  puStack_28 = (undefined1 *)0x607f66;
  local_8 = FUN_0060855c(&PTR_LAB_00607ddc,1,*(undefined4 *)(*(int *)(param_4 + -4) + 0xd8));
  puStack_2c = &LAB_00608095;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  cVar2 = FUN_005f58b0(&PTR_FUN_005f54dc);
  if (cVar2 == '\0') {
    iVar3 = 0x7d;
  }
  else {
    iVar3 = FUN_005e1884(*(undefined4 *)(*(int *)PTR_DAT_00782954 + 0x38),0x7d);
  }
  if ((bVar4) && (param_1 = iVar3 + 1, SCARRY4(iVar3,1))) {
    FUN_00405944();
  }
  do {
    if (param_1 <= iVar3) {
LAB_00607ff2:
      if (param_1 < 0) {
        thunk_FUN_00404478();
      }
      FUN_005e18dc();
      if (*(char *)(local_8 + 0xd) == '\0') {
        FUN_00448c98(local_8);
        (**(code **)(**(int **)(param_4 + -4) + 0x78))();
        FUN_00448cbc(local_8);
        FUN_0040b75c(PTR_PTR_0078213c,&local_c);
        FUN_005df624(&PTR_LAB_005fabb0,local_c);
      }
      else if (*(int *)(local_8 + 0x48) != 0) {
        if (*(int *)(local_8 + 0x44) != 0) {
          FUN_005f3d08(&PTR_LAB_005f1d9c,1,*(int *)(local_8 + 0x44),*(undefined4 *)(local_8 + 0x48))
          ;
          FUN_00406618();
        }
        FUN_005df624(&PTR_LAB_005fac60,*(undefined4 *)(local_8 + 0x48));
      }
      puVar1 = puStack_28;
      *in_FS_OFFSET = uStack_30;
      puStack_28 = &LAB_0060809c;
      puStack_2c = (undefined1 *)0x608094;
      FUN_00405a7c(local_8,uStack_30,puVar1);
      return;
    }
    if (*(char *)(local_8 + 0xd) != '\0') {
      param_1 = 0;
      goto LAB_00607ff2;
    }
    if (iVar3 < 0) {
      thunk_FUN_00404478();
    }
    FUN_005e18dc();
    if ((!bVar4) && (bVar5 = SBORROW4(param_1,iVar3), param_1 = param_1 - iVar3, bVar5)) {
      FUN_00405944();
    }
    FUN_005f57f0(&PTR_FUN_005f54dc,1,0);
  } while( true );
}
