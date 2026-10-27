// rea decompile_all
// name: FUN_00507bac
// address: 0x507bac
// body: available
// range: 0x507bac-0x507cd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x507bcd (push 0x507cf7 followed by fs-segment stack chaining); handler 0x507cf7 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x507bed (push 0x507cda followed by fs-segment stack chaining); handler 0x507cda lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00507bac(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined4 local_14;
  int *local_10;
  undefined4 local_c;
  undefined4 local_8;

  puStack_28 = &stack0xfffffffc;
  local_18 = 0;
  puStack_2c = &LAB_00507cf7;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_14 = 0;
  local_10 = (int *)0x0;
  puStack_34 = (undefined1 *)0x507be2;
  local_c = param_3;
  local_8 = param_1;
  FUN_00508acc(param_1);
  puStack_38 = &LAB_00507cda;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  puStack_34 = &stack0xfffffffc;
  local_10 = (int *)FUN_00506880(&PTR_FUN_005055b4,1,5,5);
  (**(code **)(*local_10 + 8))(local_10,local_8);
  FUN_0050752c(local_8);
  iVar2 = FUN_00507098(local_10);
  if (iVar2 < param_2) {
    FUN_0040b75c(PTR_PTR_00781b10,&local_18);
    FUN_0041beb8(&PTR_LAB_0042f068,1,local_18);
    FUN_00406618();
  }
  local_14 = FUN_0046475c(&PTR_LAB_00459100,1);
  if (-1 < param_2 + -1) {
    iVar3 = 0;
    iVar2 = param_2;
    do {
      FUN_00507038(local_10,iVar3,local_14);
      FUN_00506f6c(local_8,local_14);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00506f6c(local_8,local_c);
  iVar2 = FUN_00507098(local_10);
  if (param_2 <= iVar2 + -1) {
    iVar2 = ((iVar2 + -1) - param_2) + 1;
    do {
      FUN_00507038(local_10,param_2,local_14);
      FUN_00506f6c(local_8,local_14);
      param_2 = param_2 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_00507ce1;
  puStack_38 = (undefined1 *)0x507cc9;
  FUN_00508ad0(local_8,uStack_3c,puVar1);
  puStack_38 = (undefined1 *)0x507cd1;
  FUN_00405a7c(local_14);
  puStack_38 = (undefined1 *)0x507cd9;
  FUN_00405a7c(local_10);
  return;
}
