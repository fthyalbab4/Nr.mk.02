// rea decompile_all
// name: FUN_00628bb0
// address: 0x628bb0
// body: available
// range: 0x628bb0-0x628d06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x628bdd (push 0x628d07 followed by fs-segment stack chaining); handler 0x628d07 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00628bb0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar5;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 local_1c;
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;

  local_1c = 0;
  local_c = 0;
  puStack_2c = (undefined1 *)0x628bd2;
  local_14 = param_2;
  local_10 = param_1;
  local_8 = param_3;
  thunk_FUN_00407ad0(param_3);
  puStack_30 = &LAB_00628d07;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  puStack_2c = &stack0xfffffffc;
  local_18 = (int *)FUN_004abedc(&PTR_FUN_004a48d4,1,0);
  FUN_004ab5c4(local_18,1);
  iVar3 = 1;
  iVar4 = 0;
  do {
    FUN_00407498(&local_8);
    iVar2 = FUN_00408514();
    if (iVar2 < iVar3) {
      DAT_0085b450 = 0xffffffff;
      (**(code **)(*local_18 + 0x44))(local_18,local_10,local_14);
      FUN_00628b78();
      FUN_00405fdc(local_18);
      puVar1 = puStack_2c;
      *in_FS_OFFSET = uStack_34;
      puStack_2c = &LAB_00628d0e;
      puStack_30 = (undefined1 *)0x628cf9;
      thunk_FUN_004072d8(&local_1c,uStack_34,puVar1);
      puStack_30 = (undefined1 *)0x628d06;
      thunk_FUN_004072fc(&local_c,2);
      return;
    }
    FUN_004081e8(&local_c,0);
    while( true ) {
      FUN_00407498(&local_8);
      iVar2 = FUN_00408514();
      uVar5 = iVar3 == iVar2;
      if (!(bool)uVar5 && iVar2 <= iVar3) break;
      iVar2 = FUN_00407498(&local_8);
      uVar5 = true;
      if (*(short *)(iVar2 + -2 + iVar3 * 2) == 0x7c) break;
      FUN_00408310(&local_1c,*(undefined2 *)(local_8 + -2 + iVar3 * 2));
      FUN_004085b8(&local_c,local_1c);
      iVar3 = iVar3 + 1;
    }
    iVar2 = FUN_004a5a7c(&PTR_FUN_004a2f30,1,local_18[0xe]);
    FUN_004a8d1c(iVar2,local_c);
    FUN_0040891c(local_c,&DAT_00628d24);
    if (!(bool)uVar5) {
      *(int *)(iVar2 + 0xc) = iVar4;
      *(undefined4 *)(iVar2 + 0x8c) = DAT_0085b454;
      *(undefined1 **)(iVar2 + 0x88) = &LAB_00628ba4;
      iVar4 = iVar4 + 1;
    }
    FUN_004a9240(local_18[0xe],iVar2);
    iVar3 = iVar3 + 1;
  } while( true );
}
